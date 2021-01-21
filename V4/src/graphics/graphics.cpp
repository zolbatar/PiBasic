#define _GLIBCXX_USE_C99 1
#include "graphics.h"
#include "../engine/engine.h"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string.h>

const int DEBUGWINDOW = 1;
extern World world;
extern char cwd[];

// This is for stuff called from compiled C programs
Graphics graphics;

#ifdef RISCOS
void Graphics::graphics_shadow_state_on()
{
    _kernel_osbyte(114, 0, 0);
}

void Graphics::graphics_shadow_state_off() { _kernel_osbyte(114, 1, 0); }

void Graphics::graphics_set_vdu_bank(int bank)
{
    _kernel_osbyte(112, bank, 0);
}

void Graphics::graphics_set_display_bank(int bank) { _kernel_osbyte(113, bank, 0); }

UINT32* Graphics::get_bank_address() { return (UINT32*)(bank_address[bank - 1]); }

BYTE* Graphics::get_bank_address_byte() { return (BYTE*)(bank_address[bank - 1]); }
#endif

void Graphics::init()
{
    // Clear key buffer
    for (int i = 0; i < 256; i++) {
        key_pressed[i] = false;
    }
#ifdef RISCOS
    _kernel_swi_regs regs;

    // Get current screen mode
    int vars[5];
    int vals[4];
    vars[0] = 130; // &82 = screen width
    vars[1] = 131; // &81 = screen height
    vars[2] = 4; // &4 = Eigen X
    vars[3] = 5; // &5  = Eigen Y
    vars[4] = -1;
    regs.r[0] = (int)vars;
    regs.r[1] = (int)vals;
    _kernel_swi(OS_ReadVduVariables, &regs, &regs);
    desktop_screen_width = vals[0] + 1;
    desktop_screen_height = vals[1] + 1;
    eigen_x = vals[2];
    eigen_y = vals[3];
    printf("Desktop resolution: %d x %d, Eigen %d x %d\n", desktop_screen_width, desktop_screen_height, eigen_x, eigen_y);

#else
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        std::cout << "SDL initialization failed. SDL Error: " << SDL_GetError() << std::endl;
    }
#endif
    init_text();
}

void Graphics::shutdown()
{
#ifdef RISCOS
    if (!opened) {
        return;
    }
    graphics_shadow_state_off();
    graphics_set_display_bank(1);
    graphics_set_vdu_bank(1);
#else
    SDL_Quit();
#endif
}

#ifdef RISCOS
UINT32 Graphics::get_screen_width()
{
    return desktop_screen_width;
}

UINT32 Graphics::get_screen_height() { return desktop_screen_height; }
#else
UINT32 Graphics::get_screen_width()
{
    SDL_DisplayMode dm;
    if (SDL_GetDesktopDisplayMode(0, &dm) != 0) {
        SDL_Log("SDL_GetDesktopDisplayMode failed: %s", SDL_GetError());
        return 1;
    }
    return dm.w;
}

UINT32 Graphics::get_screen_height()
{
    SDL_DisplayMode dm;
    if (SDL_GetDesktopDisplayMode(0, &dm) != 0) {
        SDL_Log("SDL_GetDesktopDisplayMode failed: %s", SDL_GetError());
        return 1;
    }
    return dm.h;
}
#endif

void Graphics::open(int width, int height, int mode)
{
    if (DEBUGWINDOW) {
        width /= 2;
        height /= 2;
    }
    showfps = false;
    bool reinit = false;
    bool initial = !is_open();
    if (is_open()) {
        // Is this different?
        if (width != screen_width || height != screen_height || mode != this->mode) {
            shutdown();
            reinit = true;
        }
    }

    // Process mode
    this->mode = mode;
    banked = mode == 1;
    screen_width = width;
    screen_height = height;
    minX = 0;
    maxX = screen_width - 1;
    minY = 0;
    maxY = screen_height - 1;
    world.x_origin = screen_width / 2;
    world.y_origin = screen_height / 2;

    // Load standard fonts
    if (!reinit) {
        std::string fp = std::string(cwd) + "/IBMPlexMono-Regular.ttf";
        int index = load_font(fp.c_str());
        create_font_by_size(index, 17);
        create_font_by_size(index, 20);
        create_font_by_size(index, 25);
        create_font_by_size(index, 30);
        create_font_by_size(index, 35);
        create_font_by_size(index, 40);
        create_font_by_size(index, 50);
        create_font_by_size(index, 75);
        create_font_by_size(index, 100);
        fp = std::string(cwd) + "/IBMPlexSans-Regular.ttf";
        index = load_font(fp.c_str());
        create_font_by_size(index, 17);
        create_font_by_size(index, 20);
        create_font_by_size(index, 25);
        create_font_by_size(index, 30);
        create_font_by_size(index, 35);
        create_font_by_size(index, 40);
        create_font_by_size(index, 50);
        create_font_by_size(index, 75);
        create_font_by_size(index, 100);
    }

#ifdef RISCOS
    if (reinit || initial) {
        int vars[8];
        int vals[8];
        _kernel_swi_regs regs;

        // Set mode
        if (initial) {
            graphics_shadow_state_on();
        }

        // Enable shadow mode
        std::ostringstream mode_string_c;
        mode_string_c << "X" << width << " Y" << height << " C16M";
        regs.r[0] = 15;
        const char* s = mode_string_c.str().c_str();
        regs.r[1] = (int)s;
        _kernel_swi(OS_ScreenMode, &regs, &regs);
        hide_cursors();

        // Get current screen mode
        vars[0] = 150; // &96 = total screen size
        vars[1] = 6; // &96 = line length in bytes
        vars[2] = -1;
        regs.r[0] = (int)vars;
        regs.r[1] = (int)vals;
        _kernel_swi(OS_ReadVduVariables, &regs, &regs);
        max_banks = vals[0] / screen_width / screen_height / 4;
        if (max_banks > 3)
            max_banks = 3;
        if (max_banks < 2) {
            std::cout << "DARIC requires 2 banks of screen memory. Try running at a lower resolution.\n";
            exit(1);
        }
        size = vals[1] * screen_height;
        std::cout << "Line width in bytes: " << vals[1] << std::endl;

        // Fast lookup of line addresses
        line_address.resize(screen_height);
        UINT32 offset = 0;
        for (int i = 0; i < screen_height; i++) {
            line_address[i] = offset;
            offset += vals[1] / 4;
        }

        // Bank 3
        vars[0] = 149; // &95 = display start
        vars[1] = -1;
        regs.r[0] = (int)vars;
        regs.r[1] = (int)vals;
        if (max_banks >= 3) {
            graphics_set_display_bank(3);
            graphics_set_vdu_bank(3);
            _kernel_swi(OS_ReadVduVariables, &regs, &regs);
            bank_address[2] = vals[0];
        }

        // Bank 2
        if (max_banks >= 2) {
            graphics_set_display_bank(2);
            graphics_set_vdu_bank(2);
            _kernel_swi(OS_ReadVduVariables, &regs, &regs);
            bank_address[1] = vals[0];
        }

        // Bank 1
        if (max_banks > 1) {
            graphics_set_display_bank(1);
            graphics_set_vdu_bank(1);
        }
        _kernel_swi(OS_ReadVduVariables, &regs, &regs);
        bank_address[0] = vals[0];

        printf("Screen: %d x %d, with %d banks\n", screen_width, screen_height, max_banks);
        printf("Bank 0: 0x%X\n", bank_address[0]);
        if (max_banks >= 2)
            printf("Bank 1: 0x%X\n", bank_address[1]);
        if (max_banks >= 3)
            printf("Bank 2: 0x%X\n", bank_address[2]);
        if (bank_cache != nullptr)
            delete bank_cache;
        bank_cache = new UINT32[size];
    }
#else
    if (reinit || initial) {
        int params = SDL_WINDOW_ALLOW_HIGHDPI;
        if (!DEBUGWINDOW) {
            params |= SDL_WINDOW_FULLSCREEN_DESKTOP;
        }
        //params |= SDL_WINDOW_FULLSCREEN;

        window = SDL_CreateWindow("DARIC", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, screen_width, screen_height, params);
        if (!window) {
            SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't create window: %s", SDL_GetError());
            exit(1);
        }
        screen = SDL_GetWindowSurface(window);
        SDL_StopTextInput();

        // Format
        SDL_PixelFormat* pixelFormat = screen->format;
        Uint32 pixelFormatEnum = pixelFormat->format;
        const char* surfacePixelFormatName = SDL_GetPixelFormatName(pixelFormatEnum);
        std::cout << "Pixel format: " << surfacePixelFormatName << std::endl;

        // Fast lookup of line addresses
        line_address.resize(screen_height);
        UINT32 offset = 0;
        for (int i = 0; i < screen_height; i++) {
            line_address[i] = offset;
            offset += screen->w;
        }
        if (bank_cache != nullptr)
            delete bank_cache;
        bank_cache = new UINT32[screen->pitch * screen_height];
    }
#endif
    current_colour = Colour(255, 255, 255);
    opened = true;
    last_render = std::chrono::high_resolution_clock::now();
    cls();
    flip(true);
}

void Graphics::cache()
{
// Store all of the pixels
#ifdef RISCOS
    UINT32* addr = get_bank_address();
    memcpy(bank_cache, addr, size);
#else
    SDL_LockSurface(screen);
    auto pixels = (UINT32*)screen->pixels;
    memcpy(bank_cache, pixels, screen->pitch * screen_height);
    SDL_UnlockSurface(screen);
#endif
}

void Graphics::restore()
{
#ifdef RISCOS
    UINT32* addr = get_bank_address();
    memcpy(addr, bank_cache, size);
#else
    SDL_LockSurface(screen);
    auto pixels = (UINT32*)screen->pixels;
    memcpy(pixels, bank_cache, screen->pitch * screen_height);
    SDL_UnlockSurface(screen);
#endif
}

void Graphics::hide_cursors()
{
#ifdef RISCOS
    _kernel_swi_regs regs;
    _kernel_swi(OS_RemoveCursors, &regs, &regs);
#endif
}
void Graphics::show_cursors()
{
#ifdef RISCOS
    _kernel_swi_regs regs;
    _kernel_swi(OS_RestoreCursors, &regs, &regs);
#endif
}

void Graphics::alpha(Colour bg, Colour fg, Colour& out, double a)
{
    out.r = static_cast<BYTE>(static_cast<double>(bg.r) + static_cast<double>(fg.r - bg.r) * a);
    out.g = static_cast<BYTE>(static_cast<double>(bg.g) + static_cast<double>(fg.g - bg.g) * a);
    out.b = static_cast<BYTE>(static_cast<double>(bg.b) + static_cast<double>(fg.b - bg.b) * a);
}

void Graphics::colour(BYTE r, BYTE g, BYTE b)
{
    current_colour.r = r;
    current_colour.g = g;
    current_colour.b = b;
}

void Graphics::colour_bg(int r, int g, int b)
{
    current_bg_colour.r = r;
    current_bg_colour.g = g;
    current_bg_colour.b = b;
}

void Graphics::colour_hex(UINT32 c)
{
    current_colour.r = (c & 0xFF0000) >> 16;
    current_colour.g = (c & 0xFF00) >> 8;
    current_colour.b = (c & 0xFF);
}

void Graphics::set_colour(Colour c)
{
    current_colour = c;
}

void Graphics::colour_bg_hex(UINT32 c)
{
    current_bg_colour.r = (c & 0xFF0000) >> 16;
    current_bg_colour.g = (c & 0xFF00) >> 8;
    current_bg_colour.b = (c & 0xFF);
}

void Graphics::plot(int x, int y)
{
    if (x < minX || x > maxX || y < minY || y > maxY)
        return;
#ifdef RISCOS
    UINT32* addr = get_bank_address();
    int offset = line_address[y] + x;
    addr[offset] = current_colour.get_as_hex();
#else
    SDL_LockSurface(screen);
    auto pixels = (UINT32*)screen->pixels;
    int offset = line_address[y] + x;
    pixels[offset] = current_colour.get_as_hex();
    SDL_UnlockSurface(screen);
#endif
}

VM_INT Graphics::point(int x, int y)
{
    if (x < minX || x > maxX || y < minY || y > maxY)
        return 0;
#ifdef RISCOS
    UINT32* addr = get_bank_address();
    int offset = line_address[y] + x;

    // Convert to RGB
    auto v = addr[offset];
    auto b = (v & 0xFF0000) >> 16;
    auto g = (v & 0x00FF00) >> 8;
    auto r = (v & 0x0000FF);
    return (r << 16) + (g << 8) + b;
#else
    SDL_LockSurface(screen);
    auto pixels = (UINT32*)screen->pixels;
    int offset = line_address[y] + x;
    VM_INT v = pixels[offset];
    SDL_UnlockSurface(screen);
    return v;
#endif
}

void Graphics::cls()
{
#ifdef RISCOS
    auto bg = current_bg_colour.get_as_hex();
    auto addr = get_bank_address();
    memset((void*)addr, bg, size);
#else
    SDL_FillRect(screen, 0, current_bg_colour.get_as_hex());
#endif
    if (!banked)
        flip(false);
    last_cursor_x = 0;
    last_cursor_y = 0;
}

void Graphics::flip(bool user_specified)
{
    // Only allow user banked CLS
    if (!user_specified && banked) {
        return;
    }

    if (!banked && !user_specified) {
        // We only want to do update at a certain frame rate to avoid unnecessary constant flipping
        auto t = std::chrono::high_resolution_clock::now();
        auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(t - last_render);
        if (time_span.count() < 50) {
            return;
        }
    }
    last_render = std::chrono::high_resolution_clock::now();

    // Are we doing FPS timings?
    if (showfps) {
        fps_count++;
        if (fps_count == 10) {
            fps_count = 0;
            auto t = get_clock();
            VM_INT total_time = t - fps_clock;
            double fps = 1.0 / (static_cast<double>(total_time) / 1000.0);

            // Create FPS text
            std::ostringstream fps_string;
            fps_string << std::setprecision(4) << fps << " FPS";
            fps_text = fps_string.str();

            fps_clock = t;
        }
        auto saved_colour = graphics.current_colour;
        colour_hex(0xFFFFFF);
        print_text_right(4, fps_text, screen_width - 1, 0);
        graphics.current_colour = saved_colour;
    }
#ifdef RISCOS
    if (banked) {
        auto addr = get_bank_address();
        _kernel_osbyte(19, 0, 0); // Await sync
        graphics_set_display_bank(bank);
        bank = (bank % max_banks) + 1;
        graphics_set_vdu_bank(bank);
    }
#else
    SDL_UpdateWindowSurface(window);
#endif
}

void Graphics::draw_horz_line(int x1, int x2, int y)
{
    // Off screen?
    if (x1 < minX && x2 < minX)
        return;
    if (x1 > maxX && x2 > minX)
        return;
    if (y < minY)
        return;
    if (y > maxY)
        return;
    if (x1 < minX)
        x1 = minX;
    if (x2 > maxX)
        x2 = maxX;

    // Draw
    for (int x = x1; x <= x2; x++) {
        plot(x, y);
    }
}

void Graphics::rectangle(int x1, int y1, int x2, int y2)
{
    for (int y = y1; y <= y2; y++) {
        draw_horz_line(x1, x2, y);
    }
}

void Graphics::clip(int x1, int y1, int x2, int y2)
{
    minX = x1;
    maxX = x2;
    minY = y1;
    maxY = y2;
}

void Graphics::clipoff()
{
    minX = 0;
    maxX = screen_width - 1;
    minY = 0;
    maxY = screen_height - 1;
}