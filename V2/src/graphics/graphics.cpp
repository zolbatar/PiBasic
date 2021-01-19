#include "graphics.h"
#include "../engine/engine.h"
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string.h>

extern World world;

// This is for stuff called from compiled C programs
Graphics graphics;

void graphics_init() {
#if defined(_WIN32) || defined(WIN32) || defined(__unix__)
    graphics.init();
#endif
}

void graphics_shutdown() {
#if defined(_WIN32) || defined(WIN32) || defined(__unix__)
    if (graphics.is_open()) {
        graphics.poll();
    }
#endif
}

#ifdef RISCOS
void Graphics::graphics_shadow_state_on() { _kernel_osbyte(114, 0, 0); }

void Graphics::graphics_shadow_state_off() { _kernel_osbyte(114, 1, 0); }

void Graphics::graphics_set_vdu_bank(int bank) { _kernel_osbyte(112, bank, 0); }

void Graphics::graphics_set_display_bank(int bank) { _kernel_osbyte(113, bank, 0); }

UINT32 *Graphics::get_bank_address() { return (UINT32 *)(bank_address[bank - 1]); }

BYTE *Graphics::get_bank_address_byte() { return (BYTE *)(bank_address[bank - 1]); }
#endif

void Graphics::init() {
#ifdef RISCOS
    // Get current screen mode
    os_VDU_VAR_LIST(5) vduvars = {{os_VDUVAR_GWR_COL, os_VDUVAR_GWT_ROW, os_VDUVAR_XEIG_FACTOR, os_VDUVAR_YEIG_FACTOR, os_VDUVAR_END_LIST}};
    int vduvals[4];
    os_read_vdu_variables((const os_vdu_var_list *)&vduvars, (int *)&vduvals);
    eigen_x = vduvals[2];
    eigen_y = vduvals[3];
    desktop_screen_width = vduvals[0] + 1;
    desktop_screen_height = vduvals[1] + 1;
    printf("Desktop screen: %d x %d, with %d banks\n", desktop_screen_width, desktop_screen_height);

#else
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        std::cout << "SDL initialization failed. SDL Error: " << SDL_GetError() << std::endl;
    }
#endif
    init_text();
}

void Graphics::shutdown() {
#ifdef RISCOS
    if (!opened) {
        return;
    }

    graphics_shadow_state_off();
    graphics_set_display_bank(1);
    graphics_set_vdu_bank(1);

    // Cursor on
    os_restore_cursors();
    _kernel_swi_regs regs;

    if (!is_windowed) {
        // Change resolution back
        std::ostringstream mode_string;
        mode_string << "X" << desktop_screen_width << " Y" << desktop_screen_height << " C16M";
        std::string s = mode_string.str();
        osscreenmode_select_mode_with_mode_string(s.c_str());
    }

    wimp_close_window(win_handle);
    // wimp_close_down(task_id);
#else
    SDL_Quit();
#endif
}

#ifdef RISCOS
void Graphics::win_initialise(int width, int height, bool windowed) {
    // task_id = wimp_initialise(500, "DARIC!", 0, 0);

    wimp_window window_definition;

    if (windowed) {
        window_definition.visible.x0 = 48;
        window_definition.visible.y0 = 0;
        window_definition.visible.x1 = 0;
        window_definition.visible.y1 = desktop_screen_height * 2 - 48;
    } else {
        window_definition.visible.x0 = 0;
        window_definition.visible.y0 = 0;
        window_definition.visible.x1 = 0;
        window_definition.visible.y1 = 0;
    }
    window_definition.xscroll = 0;
    window_definition.yscroll = 0;
    window_definition.next = wimp_TOP;

    /* The values above this point aren't directly used by the Wimp */
    window_definition.flags = wimp_WINDOW_NEW_FORMAT | wimp_WINDOW_BOUNDED;
    window_definition.title_fg = wimp_COLOUR_BLACK;
    window_definition.title_bg = wimp_COLOUR_LIGHT_GREY;
    window_definition.work_fg = wimp_COLOUR_BLACK;
    window_definition.work_bg = wimp_COLOUR_VERY_LIGHT_GREY;
    window_definition.scroll_outer = wimp_COLOUR_MID_LIGHT_GREY;
    window_definition.scroll_inner = wimp_COLOUR_VERY_LIGHT_GREY;
    window_definition.highlight_bg = wimp_COLOUR_CREAM;
    window_definition.extra_flags = 0;
    window_definition.extent.x0 = 0;
    window_definition.extent.y0 = 0;
    window_definition.extent.x1 = 0;
    window_definition.extent.y1 = 0;
    window_definition.title_flags = wimp_ICON_TEXT | wimp_ICON_BORDER | wimp_ICON_HCENTRED | wimp_ICON_VCENTRED | wimp_ICON_FILLED;
    window_definition.work_flags = wimp_BUTTON_NEVER << wimp_ICON_BUTTON_TYPE_SHIFT;
    window_definition.sprite_area = wimpspriteop_AREA;
    if (windowed) {
        window_definition.xmin = screen_width * 2;
        window_definition.ymin = screen_height * 2;
    } else {
        window_definition.xmin = desktop_screen_width * 2;
        window_definition.ymin = desktop_screen_height * 2;
    }
    strncpy(window_definition.title_data.text, "DARIC", 12);
    window_definition.icon_count = 0;

    // Create window
    win_handle = wimp_create_window(&window_definition);

    // Show window
    wimp_window_state state;
    state.w = win_handle;
    wimp_get_window_state(&state);
    state.next = wimp_TOP;
    wimp_open_window((wimp_open *)&state);

    // Get position
    wimp_outline outline;
    outline.w = win_handle;
    wimp_get_window_outline(&outline);
}
#endif

#ifdef RISCOS
UINT32 Graphics::get_screen_width() { return desktop_screen_width; }

UINT32 Graphics::get_screen_height() { return desktop_screen_height; }
#else
UINT32 Graphics::get_screen_width() {
    SDL_DisplayMode dm;
    if (SDL_GetDesktopDisplayMode(0, &dm) != 0) {
        SDL_Log("SDL_GetDesktopDisplayMode failed: %s", SDL_GetError());
        return 1;
    }
    return dm.w;
}

UINT32 Graphics::get_screen_height() {
    SDL_DisplayMode dm;
    if (SDL_GetDesktopDisplayMode(0, &dm) != 0) {
        SDL_Log("SDL_GetDesktopDisplayMode failed: %s", SDL_GetError());
        return 1;
    }
    return dm.h;
}
#endif

void Graphics::open(int width, int height, bool fullscreen) {
    screen_width = width;
    screen_height = height;
    minX = 0;
    maxX = width - 1;
    minY = 0;
    maxY = height - 1;
    world.x_origin = width / 2;
    world.y_origin = height / 2;
    is_windowed = !fullscreen;
    if (fullscreen) {
        std::cout << "Fullscreen mode." << std::endl;
    } else {
        std::cout << "Windowed mode." << std::endl;
    }

#ifdef RISCOS

    // Create a window
    win_initialise(width, height, is_windowed);

    bool buffering = true;
    size = screen_width * screen_height;

    // Set mode
    if (fullscreen) {
        std::ostringstream mode_string;
        mode_string << "X" << width << " Y" << height << " C16M";
        std::string s = mode_string.str();
        osscreenmode_select_mode_with_mode_string(s.c_str());
    }

    // Get current screen mode
    os_VDU_VAR_LIST(4) vduvars = {{os_VDUVAR_TOTAL_SCREEN_SIZE, os_VDUVAR_END_LIST}};
    int vduvals[1];
    os_read_vdu_variables((const os_vdu_var_list *)&vduvars, (int *)&vduvals);
    max_banks = vduvals[0] / screen_width / screen_height / 4;
    if (max_banks > 3)
        max_banks = 3;
    if (!buffering)
        max_banks = 1;

    // Enable shadow mode
    if (banks > 1) {
        graphics_shadow_state_on();
    }

    // Fast lookup of line addresses
    line_address = (int *)(malloc(sizeof(int) * screen_height));
    UINT32 offset = is_windowed ? (24 * desktop_screen_width) : 0;
    for (int i = 0; i < screen_height; i++) {
        line_address[i] = offset;
        offset += is_windowed ? desktop_screen_width : screen_width;
    }

    // Cursor off
    os_remove_cursors();

    // Bank 3
    os_VDU_VAR_LIST(2) vduvars_bank = {{os_VDUVAR_DISPLAY_START, os_VDUVAR_END_LIST}};
    if (max_banks >= 3) {
        graphics_set_display_bank(3);
        graphics_set_vdu_bank(3);
        os_read_vdu_variables((const os_vdu_var_list *)&vduvars_bank, (int *)&vduvals);
        bank_address[2] = vduvals[0];
    }

    // Bank 2
    if (max_banks >= 2) {
        graphics_set_display_bank(2);
        graphics_set_vdu_bank(2);
        os_read_vdu_variables((const os_vdu_var_list *)&vduvars_bank, (int *)&vduvals);
        bank_address[1] = vduvals[0];
    }

    // Bank 1
    os_read_vdu_variables((const os_vdu_var_list *)&vduvars_bank, (int *)&vduvals);
    bank_address[0] = vduvals[0];
    if (max_banks >= 1) {
        graphics_set_display_bank(1);
        graphics_set_vdu_bank(1);
    }

    printf("Screen: %d x %d, with %d banks\n", screen_width, screen_height, max_banks);
    printf("Bank 0: %p\n", bank_address[0]);
    if (max_banks >= 2)
        printf("Bank 1: 0x%p\n", bank_address[1]);
    if (max_banks >= 3)
        printf("Bank 2: 0x%p\n", bank_address[2]);
    opened = true;
    current_colour = 0;
    cls();
#else
    int params = SDL_WINDOW_ALLOW_HIGHDPI;
    if (!is_windowed) {
        params |= SDL_WINDOW_FULLSCREEN;
    } else {
        params |= SDL_WINDOW_OPENGL;
    }
    if (SDL_CreateWindowAndRenderer(screen_width, screen_height, params, &window, &renderer)) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't create window and renderer: %s", SDL_GetError());
        exit(1);
    }
    //SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);

    // Load standard fonts
    int index = load_font("RobotoMono-Regular.ttf");
    create_font_by_size(index, 10);
    create_font_by_size(index, 15);
    create_font_by_size(index, 20);
    create_font_by_size(index, 25);
    create_font_by_size(index, 30);
    create_font_by_size(index, 40);
    create_font_by_size(index, 50);
    create_font_by_size(index, 75);
    create_font_by_size(index, 100);
    index = load_font("Roboto-Regular.ttf");
    create_font_by_size(index, 10);
    create_font_by_size(index, 15);
    create_font_by_size(index, 20);
    create_font_by_size(index, 25);
    create_font_by_size(index, 30);
    create_font_by_size(index, 40);
    create_font_by_size(index, 50);
    create_font_by_size(index, 75);
    create_font_by_size(index, 100);
#endif
}

void Graphics::colour(BYTE r, BYTE g, BYTE b) {
    if (!is_open()) {
        std::cout << "Use GRAPHICS before COLOUR" << std::endl;
        exit(1);
    }
    current_colour.r = r;
    current_colour.g = g;
    current_colour.b = b;
    current_colour.a = 255;
#ifndef RISCOS
    current_colour.hex = (b << 16) + (g << 8) + r;
#else
    current_colour.hex = (a << 24) + (r << 16) + (g << 8) + b;
#endif
}

void Graphics::coloura(BYTE r, BYTE g, BYTE b, BYTE a) {
    if (!is_open()) {
        std::cout << "Use GRAPHICS before COLOUR" << std::endl;
        exit(1);
    }
    current_colour.r = r;
    current_colour.g = g;
    current_colour.b = b;
    current_colour.a = a;
#ifndef RISCOS
    current_colour.hex = (b << 16) + (g << 8) + r;
#else
    current_colour.hex = (a << 24) + (r << 16) + (g << 8) + b;
#endif
}

void Graphics::colour_bg(int r, int g, int b) {
    if (!is_open()) {
        std::cout << "Use GRAPHICS before COLOUR" << std::endl;
        exit(1);
    }
    current_bg_colour.r = r;
    current_bg_colour.g = g;
    current_bg_colour.b = b;
    current_bg_colour.a = 255;
#ifndef RISCOS
    current_bg_colour.hex = (b << 16) + (g << 8) + r;
#else
    current_bg_colour.hex = (r << 16) + (g << 8) + b;
#endif
}

void Graphics::colour_hex(UINT32 c) {
    if (!is_open()) {
        std::cout << "Use GRAPHICS before COLOUR" << std::endl;
        exit(1);
    }
    current_colour.a = 255;
    current_colour.r = (c & 0xFF0000) >> 16;
    current_colour.g = (c & 0xFF00) >> 8;
    current_colour.b = (c & 0xFF);
#ifndef RISCOS
    current_colour.hex = c;
#else
    current_colour.hex = (current_colour.b << 16) + (current_colour.g << 8) + current_colour.r;
#endif
}

void Graphics::colour_bg_hex(UINT32 c) {
    if (!is_open()) {
        std::cout << "Use GRAPHICS before COLOUR" << std::endl;
        exit(1);
    }
    current_bg_colour.a = 255;
    current_bg_colour.r = (c & 0xFF0000) >> 16;
    current_bg_colour.g = (c & 0xFF00) >> 8;
    current_bg_colour.b = (c & 0xFF);
#ifndef RISCOS
    current_bg_colour.hex = c;
#else
    current_bg_colour.hex = (current_colour.b << 16) + (current_colour.g << 8) + current_colour.r;
#endif
}

void Graphics::plot(int x, int y) {
    if (!is_open()) {
        std::cout << "Use GRAPHICS before PLOT" << std::endl;
        exit(1);
    }
#ifdef RISCOS
    if (x < minX || x > maxX || y < minY || y > maxY)
        return;
    UINT32 *addr = get_bank_address();
    int offset = line_address[y] + x + (is_windowed ? 24 : 0);
    addr[offset] = current_colour.hex;
#else
    SDL_SetRenderDrawColor(renderer, current_colour.r, current_colour.g, current_colour.b, current_colour.a);
    SDL_RenderDrawPoint(renderer, x, y);
#endif
}

void Graphics::cls() {
    if (!is_open()) {
        std::cout << "Use GRAPHICS before CLS" << std::endl;
        exit(1);
    }
#ifdef RISCOS
    if (!is_windowed) {
        UINT32 *addr = get_bank_address();
        for (int i = 0; i < size; i++) {
            addr[i] = current_bg_colour.hex;
        }
    } else {
        UINT32 *addr = get_bank_address();
        for (int y = 0; y < screen_height; y++) {
            int offset = line_address[y] + 24;
            for (int x = 0; x < screen_width; x++) {
                addr[offset++] = current_bg_colour.hex;
            }
        }
    }
#else
    SDL_SetRenderDrawColor(renderer, current_bg_colour.r, current_bg_colour.g, current_bg_colour.b, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);
#endif
}

void Graphics::flip() {
    if (!is_open()) {
        std::cout << "Use GRAPHICS before FLIP" << std::endl;
        exit(1);
    }
#ifdef RISCOS
    if (max_banks > 1) {
        _kernel_osbyte(19, bank, 0); // Await sync
        graphics_set_display_bank(bank);
        bank = (bank % max_banks) + 1;
        graphics_set_vdu_bank(bank);
        //    _kernel_oswrch(30); // Cursor to home
    }
#else
    SDL_RenderPresent(renderer);
#endif
}

void Graphics::draw_horz_line(int x1, int x2, int y) {
#ifdef RISCOS
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
    for (int x = x1; x < x2; x++) {
        plot(x, y);
    }
#else
    SDL_SetRenderDrawColor(renderer, current_colour.r, current_colour.g, current_colour.b, current_colour.a);
    SDL_RenderDrawLine(renderer, x1, y, x2, y);
#endif
}

void Graphics::rectangle(int x1, int y1, int x2, int y2) {
    if (!is_open()) {
        std::cout << "Use GRAPHICS before RECTANGLE" << std::endl;
        exit(1);
    }
    for (int y = y1; y < y2; y++) {
        draw_horz_line(x1, x2, y);
    }
}

void Graphics::clip(int x1, int y1, int x2, int y2) {
    if (!is_open()) {
        std::cout << "Use GRAPHICS before CLIPON" << std::endl;
        exit(1);
    }
    minX = x1;
    maxX = x2;
    minY = y1;
    maxY = y2;
}

void Graphics::clipoff() {
    if (!is_open()) {
        std::cout << "Use GRAPHICS before CLIPOFF" << std::endl;
        exit(1);
    }
    minX = 0;
    maxX = screen_width - 1;
    minY = 0;
    maxY = screen_height - 1;
}