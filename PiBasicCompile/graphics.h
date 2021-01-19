#pragma once
#include "types.h"
#ifdef __unix__
#include <SDL2/SDL.h>
#elif RISCOS
#include "kernel.h"
#include "oslib/wimp.h"
#include "oslib/wimpspriteop.h"
#include "swis.h"
#else
#include <SDL.h>
#endif

typedef int OutCode;

const int INSIDE = 0; // 0000
const int LEFT = 1;   // 0001
const int RIGHT = 2;  // 0010
const int BOTTOM = 4; // 0100
const int TOP = 8;    // 1000

class Graphics {
  public:
    Graphics() {
#ifndef RISCOS
        window = NULL;
        renderer = NULL;
#endif
        screen_width = 0;
        screen_height = 0;
        minX = 0;
        maxX = 0;
        minY = 0;
        maxY = 0;
    }
#ifndef RISCOS
    bool is_open() { return window != NULL; }
#else
    bool is_open() { return opened; }
#endif
    void init();
    void shutdown();
    void open(int width, int height, bool fullscreen);
    void colour(int r, int g, int b);
    void colour_hex(UINT32 c);
    void clear();
    void plot(int x, int y);
    void flip();
    void loop();
    void draw_horz_line(int x1, int x2, int y);
    void rectangle(int x1, int y1, int x2, int y2);
    void clipoff();
    void clip(int x1, int y1, int x2, int y2);
    UINT32 get_screen_width();
    UINT32 get_screen_height();
#ifdef RISCOS
    void graphics_shadow_state_on();
    void graphics_shadow_state_off();
    void graphics_set_vdu_bank(int bank);
    void graphics_set_display_bank(int bank);
    UINT32 *get_bank_address();
    BYTE *get_bank_address_byte();
#endif

    // Triangle
    void triangle(int x1, int y1, int x2, int y2, int x3, int y3);
    void flat_triangle(int x1, int y1, int x2, int y2, int x3, int y3);
    void gouraud_triangle(const int x1, const int y1, const int x2, const int y2, const int x3, const int y3, const UINT32 colour1, const UINT32 colour2,
                          const UINT32 colour3, const bool flat);
    void gouraud_triangle_with_colour(const int x1, const int y1, const int x2, const int y2, const int x3, const int y3, const BYTE r1, const BYTE g1,
                                      const BYTE b1, const BYTE r2, const BYTE g2, const BYTE b2, const BYTE r3, const BYTE g3, const BYTE b3);

    // Clipped line drawing
    void line(int x1, int y1, int x2, int y2);
    void draw_line_raw(int x1, int y1, int x2, int y2);
    OutCode ComputeOutCode(int x, int y);

    UINT32 current_colour;
  private:
#ifndef RISCOS
    SDL_Window *window = NULL;
    SDL_Renderer *renderer;
#else
    bool opened;
    int size;
    int desktop_screen_width = 0;
    int desktop_screen_height = 0;
    int eigen_x;
    int eigen_y;

    wimp_w win_handle;
    wimp_t task_id;
    // Fast line lookup
    int *line_address;

    // Bank switching
    int max_banks = 0;
    UINT32 bank_address[3];
    int bank = 1;
    void win_initialise(int width, int height, bool windowed);
#endif
    bool is_windowed;
    int screen_width, screen_height;
    int minX, maxX, minY, maxY;
};
