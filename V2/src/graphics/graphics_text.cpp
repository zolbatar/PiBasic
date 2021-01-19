#define _CRT_SECURE_NO_WARNINGS
#define STBTT_STATIC
#define STB_TRUETYPE_IMPLEMENTATION
#include "graphics.h"
#include "stb_truetype.h"
#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>

const int MAXIMUM_FONTS = 64;
int font_index = 0;
stbtt_fontinfo **fonts;

// char ttf_buffer[1 << 25];
void Graphics::init_text() { fonts = new stbtt_fontinfo *[MAXIMUM_FONTS]; }

VM_INT Graphics::load_font(const char *filename) {
    std::cout << "Loading font '" << filename << ",";
    auto index = font_face_index++;

    // Load and build the actual font, we're never going to release this memory EVER
    fonts[index] = (stbtt_fontinfo *)malloc(sizeof(stbtt_fontinfo));

    // Open file and calculate size
    FILE *fp = fopen(filename, "rb");
    if (!fp) {
        std::cout << "Error opening font file\n";
        exit(1);
    }
    fseek(fp, 0L, SEEK_END);
    size_t sz = ftell(fp);
    fseek(fp, 0L, SEEK_SET);
    std::cout << " file size is " << sz << " bytes." << std::endl;

    // Allocate memory (we don't deallocate, so will leave a memory leak)
    char *ttf_buffer = (char *)malloc(sz);
    if (!ttf_buffer) {
        std::cout << "Can't allocate memory for TTF font\n";
        exit(1);
    }

    // Read into buffer and close file
    fread(ttf_buffer, 1, sz, fp);
    fclose(fp);

    // Now create font
    stbtt_InitFont(fonts[index], (const unsigned char *)ttf_buffer, stbtt_GetFontOffsetForIndex((const unsigned char *)ttf_buffer, 0));
    return index;
}

VM_INT Graphics::create_font_by_size(int index, int font_size) {
    int index_ff = font_index++;
    const stbtt_fontinfo *ff = (const stbtt_fontinfo *)fonts[index];

    // Row height
    Font *f = get_glyph(index, index_ff, ' ', font_size);

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

Font *Graphics::get_glyph(VM_INT index, VM_INT index_ff, BYTE ascii, VM_INT font_size) {
    // Have we already generated it?
    VM_INT key = (index_ff * 256) + ascii;
    if (font_glyphs.count(key) != 0) {
        return &(*font_glyphs.find(key)).second;
    }
    const stbtt_fontinfo *ff = (const stbtt_fontinfo *)fonts[index];

    // Create the glpyh
    Font f;
    f.bitmap = stbtt_GetCodepointBitmap(ff, 0, stbtt_ScaleForPixelHeight(ff, font_size), ascii, &f.width, &f.height, 0, 0);

    // Baseline
    f.scale = stbtt_ScaleForPixelHeight(ff, font_size);
    int ascent;
    stbtt_GetFontVMetrics(ff, &ascent, 0, 0);
    f.baseline = (int)(ascent * f.scale);

    // Font adjust
    stbtt_GetCodepointHMetrics(ff, ascii, &f.advance, &f.lsb);
    stbtt_GetCodepointBitmapBox(ff, ascii, f.scale, f.scale, &f.ix0, &f.iy0, &f.ix1, &f.iy1);
    f.sc_width = f.advance * f.scale;

    // On SDL use a texture for speed
#ifndef RISCOS
    f.texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, f.width, f.height);
    SDL_SetTextureBlendMode(f.texture, SDL_BLENDMODE_BLEND);
    SDL_SetRenderTarget(renderer, f.texture);
    SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0xFF);
    SDL_RenderClear(renderer);
    for (int j = 0; j < f.height; ++j) {
        for (int i = 0; i < f.width; ++i) {
            auto idx = j * f.width + i;
            auto v = f.bitmap[idx];
            SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, v);
            SDL_RenderDrawPoint(renderer, i, j);
        }
    }
    SDL_SetRenderTarget(renderer, NULL);
#endif

    font_glyphs.insert(std::pair<VM_INT, Font>(key, std::move(f)));
    return &(*font_glyphs.find(key)).second;
}

void Graphics::print_character(int index_ff, char c, int *cursor_x, int *cursor_y) {
    auto font_row_height = (*font_heights.find(index_ff)).second;
    Font *f = get_glyph(0, index_ff, c, 0);
#ifndef RISCOS
    SDL_Rect rect;
    rect.x = *cursor_x + f->ix0;
    rect.y = *cursor_y + f->iy0 + f->baseline;
    rect.w = f->width;
    rect.h = f->height;
    SDL_SetTextureColorMod(f->texture, current_colour.r, current_colour.g, current_colour.b);
    SDL_RenderCopy(renderer, f->texture, NULL, &rect);
#else
    auto saved_colour = current_colour;
    for (int j = 0; j < f->height; ++j) {
        for (int i = 0; i < f->width; ++i) {
            auto idx = j * f->width + i;
            auto v = f->bitmap[idx];
            colour(saved_colour.r * v / 256, saved_colour.g * v / 256, saved_colour.b * v / 256);
            plot(*cursor_x + i + f->ix0, *cursor_y + j + f->iy0 + f->baseline);
        }
    }
    colour_hex(saved_colour.hex);
#endif
    *cursor_x += f->sc_width;

    // End of line?
    if (*cursor_x + f->sc_width >= screen_width) {
        *cursor_y += font_row_height;
        *cursor_x = 0;
    }
}

void Graphics::print_text(int index_ff, VM_STRING text, int cursor_x, int cursor_y) {
    auto font_row_height = (*font_heights.find(index_ff)).second;
    for (auto it = text.begin(); it != text.end(); ++it) {
        auto ch = (*it);
        print_character(index_ff, ch, &cursor_x, &cursor_y);
    }
}

int Graphics::string_width(int index_ff, VM_STRING text) {
    int w = 0;
    for (auto it = text.begin(); it != text.end(); ++it) {
        auto ch = (*it);
        Font *f = get_glyph(0, index_ff, ch, 0);
        w += f->sc_width;
    }
    return w;
}

void Graphics::print_text_centre(int index_ff, VM_STRING text, int cursor_x, int cursor_y) {
    auto font_row_height = (*font_heights.find(index_ff)).second;
    cursor_x -= string_width(index_ff, text) / 2;
    for (auto it = text.begin(); it != text.end(); ++it) {
        auto ch = (*it);
        print_character(index_ff, ch, &cursor_x, &cursor_y);
    }
}
void Graphics::print_text_right(int index_ff, VM_STRING text, int cursor_x, int cursor_y) {
    auto font_row_height = (*font_heights.find(index_ff)).second;
    cursor_x -= string_width(index_ff, text);
    for (auto it = text.begin(); it != text.end(); ++it) {
        auto ch = (*it);
        print_character(index_ff, ch, &cursor_x, &cursor_y);
    }
}