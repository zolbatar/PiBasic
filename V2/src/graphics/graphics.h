#pragma once
#include "../types.h"
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
#include <list>
#include <map>
#include <queue>
#include <vector>

typedef int OutCode;

const int INSIDE = 0; // 0000
const int LEFT = 1;   // 0001
const int RIGHT = 2;  // 0010
const int BOTTOM = 4; // 0100
const int TOP = 8;    // 1000

enum class EventType { KeyDown, KeyUp };

class Colour {
  public:
    Colour() {
        r = 0;
        g = 0;
        b = 0;
        a = 0;
        hex = 0;
    };
    Colour(BYTE r, BYTE g, BYTE b) : r(r), g(g), b(b), a(0), hex((a << 24) + (r << 16) + (g << 8) + b){};
    Colour(BYTE r, BYTE g, BYTE b, BYTE a) : r(r), g(g), b(b), hex(){};
    Colour(VM_INT colour) : a((colour & 0xFF000000) >> 24), r((colour & 0xFF0000) >> 16), g((colour & 0xFF00) >> 8), b(colour & 0xFF), hex(colour){};
    BYTE r;
    BYTE g;
    BYTE b;
    BYTE a;
    UINT32 hex;
};

struct Event {
    EventType type;
    int key_code;
};

struct Font {
    int width;
    int height;
    float scale;
    int baseline;
    unsigned char *bitmap;
    int ix0, iy0, ix1, iy1;
    int advance, lsb;
    int sc_width;
#ifndef RISCOS
    SDL_Texture *texture;
#endif
};

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
    void colour(BYTE r, BYTE g, BYTE b);
    void coloura(BYTE r, BYTE g, BYTE b, BYTE a);
    void colour_hex(UINT32 c);
    void colour_bg(int r, int g, int b);
    void colour_bg_hex(UINT32 c);
    void cls();
    void plot(int x, int y);
    void flip();
    void poll();
    void draw_horz_line(int x1, int x2, int y);
    void eight_way_symmetric_plot(int xc, int yc, int x, int y, bool fill);
    void circle(int x, int y, int r, bool fill);
    void rectangle(int x1, int y1, int x2, int y2);
    void clipoff();
    void clip(int x1, int y1, int x2, int y2);
#ifndef RISCOS
    int key_riscos_translate(SDL_Keysym key);
#endif
    VM_INT inkey(VM_INT timeout);
    VM_STRING inkeys(VM_INT timeout);
    UINT32 get_screen_width();
    UINT32 get_screen_height();

    // Text stuff
    void init_text();
    VM_INT load_font(const char *filename);
    VM_INT create_font_by_size(int index, int font_size);
    Font *get_glyph(VM_INT index, VM_INT index_ff, BYTE ascii, VM_INT font_size);
    void print_character(int index_ff, char c, int *cursor_x, int *cursor_y);
    void print_text(int index_ff, VM_STRING text, int cursor_x, int cursor_y);
    void print_text_centre(int index_ff, VM_STRING text, int cursor_x, int cursor_y);
    void print_text_right(int index_ff, VM_STRING text, int cursor_x, int cursor_y);
    int string_width(int index_ff, VM_STRING text);
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

#ifndef RISCOS
    Colour current_colour = Colour(0xFFFFFFFF);
#else
    Colour current_colour = Colour(0xFFFFFF);
#endif
    Colour current_bg_colour = Colour(0x000000);

  private:
    std::queue<Event> key_events;
    std::queue<Event> mouse_events;
    std::map<VM_INT, Font> font_glyphs;
    std::map<VM_INT, VM_INT> font_heights;
    int font_face_index = 0;
    int font_index = 0;
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