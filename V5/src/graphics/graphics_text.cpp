#define _CRT_SECURE_NO_WARNINGS
#define STBTT_STATIC
#define STB_TRUETYPE_IMPLEMENTATION
#define _GLIBCXX_USE_C99 1
#include "graphics.h"
#include "stb_truetype.h"
#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>

const int MAXIMUM_FONTS = 64;
int font_index = 0;
stbtt_fontinfo** fonts = nullptr;

void Graphics::init_text()
{
    fonts = new stbtt_fontinfo*[MAXIMUM_FONTS];
    for (int i = 0; i < MAXIMUM_FONTS; i++) {
        fonts[i] = nullptr;
    }
}

void Graphics::delete_fonts()
{
    if (fonts != nullptr) {
        for (int i = 0; i < MAXIMUM_FONTS; i++) {
            if (fonts[i] != nullptr) {
                free(fonts[i]);
            }
        }
        delete fonts;
        fonts = nullptr;
    }
}

VM_INT Graphics::load_font(const char* filename)
{
    if (!is_open()) {
        std::cout << "Loading font '" << filename << "',";
    }
    auto index = font_face_index++;
    if (index == MAXIMUM_FONTS) {
        if (!is_open()) {
            std::cout << "Ran out of font slots\n";
        } else {
            print_console("Ran out of font slots\n");
        }
        return 0;
    }

    // Load and build the actual font, we're never going to release this memory EVER
    fonts[index] = (stbtt_fontinfo*)malloc(sizeof(stbtt_fontinfo));

    // Open file and calculate size
    FILE* fp = fopen(filename, "rb");
    if (!fp) {
        std::cout << "Error opening font file\n";
        if (is_open()) {
            print_console("Error opening font file\n");
        }
        exit(0);
    }
    fseek(fp, 0L, SEEK_END);
    size_t sz = ftell(fp);
    fseek(fp, 0L, SEEK_SET);
    if (!is_open()) {
        std::cout << " file size is " << sz << " bytes." << std::endl;
    }

    // Allocate memory (we don't deallocate, so will leave a memory leak)
    char* ttf_buffer = (char*)malloc(sz);
    if (!ttf_buffer) {
        if (!is_open()) {
            std::cout << "Can't allocate memory for TTF font\n";
        } else {
            print_console("Can't allocate memory for TTF font\r");
        }
        exit(1);
    }

    // Read into buffer and close file
    auto r = fread(ttf_buffer, 1, sz, fp);
    assert(r == sz);
    fclose(fp);

    // Now create font
    stbtt_InitFont(fonts[index], (const unsigned char*)ttf_buffer, stbtt_GetFontOffsetForIndex((const unsigned char*)ttf_buffer, 0));
    return index;
}

VM_INT Graphics::create_font_by_size(int index, int font_size)
{
    int index_ff = font_index++;
    const stbtt_fontinfo* ff = (const stbtt_fontinfo*)fonts[index];

    // Row height
    Font* f = get_glyph(index, index_ff, ' ', font_size);

    int m = 0;
    for (int c = 32; c <= 127; c++) {
        int ix0, iy0, ix1, iy1;
        stbtt_GetCodepointBitmapBox(ff, c, f->scale, f->scale, &ix0, &iy0, &ix1, &iy1);
        if (iy1 > m) {
            m = iy1;
        }
    }
    font_heights.insert(std::pair<VM_INT, VM_INT>(index_ff, f->baseline + m));

    for (int c = 32; c <= 127; c++) {
        get_glyph(index, index_ff, c, font_size);
    }
    return index_ff;
}

Font* Graphics::get_glyph(VM_INT index, VM_INT index_ff, BYTE ascii, VM_INT font_size)
{
    // Have we already generated it?
    VM_INT key = (index_ff * 256) + ascii;
    if (font_glyphs.count(key) != 0) {
        return &(*font_glyphs.find(key)).second;
    }
    const stbtt_fontinfo* ff = (const stbtt_fontinfo*)fonts[index];

    // Create the glpyh
    Font f;
    f.bitmap = stbtt_GetCodepointBitmap(ff, 0, stbtt_ScaleForPixelHeight(ff, static_cast<float>(font_size)), ascii, &f.width, &f.height, 0, 0);

    // Baseline
    f.scale = stbtt_ScaleForPixelHeight(ff, static_cast<float>(font_size));
    int ascent;
    stbtt_GetFontVMetrics(ff, &ascent, 0, 0);
    f.baseline = (int)(ascent * f.scale);

    // Font adjust
    stbtt_GetCodepointHMetrics(ff, ascii, &f.advance, &f.lsb);
    stbtt_GetCodepointBitmapBox(ff, ascii, f.scale, f.scale, &f.ix0, &f.iy0, &f.ix1, &f.iy1);
    f.sc_width = static_cast<int>(f.advance * f.scale);

    font_glyphs.insert(std::pair<VM_INT, Font>(key, std::move(f)));
    return &(*font_glyphs.find(key)).second;
}

int Graphics::max_horz_chars(int index_ff)
{
    Font* f = get_glyph(0, index_ff, ' ', 0);
    auto w = get_actual_width() / f->sc_width;
    return w;
}

void Graphics::print_character(int index_ff, char c, int* cursor_x, int* cursor_y)
{
    auto font_row_height = (*font_heights.find(index_ff)).second;

    // End of page, need to scroll?
    while (*cursor_y + font_row_height >= screen_height) {
#ifdef RISCOS
        auto addr = get_bank_address();
        auto bg = current_bg_colour.get_as_hex();

        // Move each row at a time (this works either full screen or windowed)
        for (int y = 0; y < screen_height - font_row_height; y++) {
            UINT32 offset1 = line_address[y];
            UINT32 offset2 = line_address[y + font_row_height];
            memcpy((void*)&addr[offset1], (void*)&addr[offset2], screen_width * 4);
        }

        // And clear to BG
        for (int y = screen_height - font_row_height; y < screen_height; y++) {
            UINT32 offset = line_address[y];
            memset((void*)&addr[offset], bg, screen_width * 4);
        }
#else
        UINT32 bg_hex = current_bg_colour.get_hex();
        SDL_LockSurface(screen);
        auto pixels = (UINT32*)screen->pixels;
        auto offset = (screen->pitch * font_row_height) / 4;
        auto size = (screen->pitch * (screen_height - font_row_height)) / 4;
        for (int i = 0; i < size; i++) {
            pixels[i] = pixels[i + offset];
        }
        for (int i = 0; i < offset; i++) {
            pixels[size + i] = bg_hex;
        }
        SDL_UnlockSurface(screen);
#endif
        *cursor_y -= font_row_height;
    }

    switch (c) {
    case '\r':
        *cursor_y += font_row_height;
        *cursor_x = 0;
        return;
    }
    Font* f = get_glyph(0, index_ff, c, 0);
    if (f->bitmap != NULL) {
        auto saved_colour = current_colour;
        for (int j = 0; j < f->height; ++j) {
            for (int i = 0; i < f->width; ++i) {
                auto idx = j * f->width + i;
                auto v = f->bitmap[idx];
                if (v > 0) {
                    Colour c;

                    // X/Y
                    auto x = *cursor_x + i + f->ix0 + margin;
                    auto y = *cursor_y + j + f->iy0 + f->baseline;

                    // Get current pixel colour, a little expensive but worth it for quality
                    auto bg = point(x, y);  
                    Colour bgC((bg & 0xFF0000) >> 16, (bg & 0xFF00) >> 8, bg & 0xFF);

                    alpha(bgC, saved_colour, c, v);
                    set_colour(c);
                    plot(x, y);
                }
            }
        }
        set_colour(saved_colour);
    }
    *cursor_x += f->sc_width;

    // End of line?
    while (*cursor_x + f->sc_width + (margin * 2) >= screen_width) {
        *cursor_y += font_row_height;
        *cursor_x = 0;
    }
}

void Graphics::print_console(VM_STRING text)
{
    print_text(console_font, text, -1, -1);
}

void Graphics::cursor_back(int index_ff)
{
    Font* f = get_glyph(0, index_ff, ' ', 0);
    auto font_row_height = (*font_heights.find(index_ff)).second;
    last_cursor_x -= f->sc_width;
    if (last_cursor_x < 0) {
        auto max_chars = (screen_width - (margin * 2)) / f->sc_width;
        last_cursor_x = (max_chars - 1) * f->sc_width + margin;
        last_cursor_y -= font_row_height;
    }
}

void Graphics::delete_character(int index_ff)
{
    if (cursor_enabled && blink_state) {
        undraw_cursor();
    }
    Font* f = get_glyph(0, index_ff, ' ', 0);
    last_cursor_x -= f->sc_width;
    auto font_row_height = (*font_heights.find(index_ff)).second;
    if (last_cursor_x < 0) {
        auto max_chars = (screen_width - (margin * 2)) / f->sc_width;
        last_cursor_x = (max_chars - 1) * f->sc_width;
        last_cursor_y -= font_row_height;
    }
    auto saved_colour = current_colour;
    colour(current_bg_colour.get_r(), current_bg_colour.get_g(), current_bg_colour.get_b());
    rectangle(last_cursor_x + margin, last_cursor_y, last_cursor_x + f->sc_width + margin, last_cursor_y + font_row_height);
    colour(saved_colour.get_r(), saved_colour.get_g(), saved_colour.get_b());
    if (cursor_enabled && blink_state) {
        draw_cursor();
    }
    if (!banked)
        flip(false);
}

void Graphics::set_margin(int margin)
{
    this->margin = margin;
}

void Graphics::print_text(int index_ff, VM_STRING text, int cursor_x, int cursor_y)
{
    if (cursor_enabled && blink_state) {
        undraw_cursor();
    }
    if (cursor_x == -1)
        cursor_x = last_cursor_x;
    if (cursor_y == -1)
        cursor_y = last_cursor_y;
    for (auto it = text.begin(); it != text.end(); ++it) {
        auto ch = (*it);
        print_character(index_ff, ch, &cursor_x, &cursor_y);
    }
    last_cursor_x = cursor_x;
    last_cursor_y = cursor_y;
    if (cursor_enabled && blink_state) {
        draw_cursor();
    }
    if (!banked)
        flip(false);
}

void Graphics::print_text_centre(int index_ff, VM_STRING text, int cursor_x, int cursor_y)
{
    if (cursor_x == -1)
        cursor_x = last_cursor_x;
    if (cursor_y == -1)
        cursor_y = last_cursor_y;
    cursor_x -= string_width(index_ff, text) / 2;
    for (auto it = text.begin(); it != text.end(); ++it) {
        auto ch = (*it);
        print_character(index_ff, ch, &cursor_x, &cursor_y);
    }
    last_cursor_x = cursor_x;
    last_cursor_y = cursor_y;
}
void Graphics::print_text_right(int index_ff, VM_STRING text, int cursor_x, int cursor_y)
{
    if (cursor_x == -1)
        cursor_x = last_cursor_x;
    if (cursor_y == -1)
        cursor_y = last_cursor_y;
    cursor_x -= string_width(index_ff, text);
    for (auto it = text.begin(); it != text.end(); ++it) {
        auto ch = (*it);
        print_character(index_ff, ch, &cursor_x, &cursor_y);
    }
    last_cursor_x = cursor_x;
    last_cursor_y = cursor_y;
}

int Graphics::string_width(int index_ff, VM_STRING text)
{
    int w = 0;
    for (auto it = text.begin(); it != text.end(); ++it) {
        auto ch = (*it);
        Font* f = get_glyph(0, index_ff, ch, 0);
        w += f->sc_width;
    }
    return w;
}
