#pragma once
#include "../libs/clock.h"
#include "../types.h"
#ifdef __unix__
#include <SDL2/SDL.h>
#elif RISCOS
#include "kernel.h"
#include "swis.h"
#else
#include <SDL.h>
#endif
#include <array>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <vector>

typedef int OutCode;

const int INSIDE = 0; // 0000
const int LEFT = 1; // 0001
const int RIGHT = 2; // 0010
const int BOTTOM = 4; // 0100
const int TOP = 8; // 1000

extern bool debugger_open;

enum class Mode {
	CLASSIC,
	BANKED
};

enum class EventType {
	Text
};

const int console_font = 2;

enum class RasterMode {
	BLIT,
	BLEND
};

class Colour {
public:
	Colour()
	{
		r = 0;
		g = 0;
		b = 0;
		encode_hex();
	};
	Colour(const Colour& c)
		: r(c.r)
		, g(c.g)
		, b(c.b) {
		encode_hex();
	};
	Colour(BYTE r, BYTE g, BYTE b)
		: r(r)
		, g(g)
		, b(b) {
		encode_hex();
	};
	UINT32 get_hex() { 
		return encoded_hex; 
	}
	void set_rgb(BYTE r, BYTE g, BYTE b) {
		this->r = r;
		this->g = g;
		this->b = b;
		encode_hex();
	}
	BYTE get_r() { return r; }
	BYTE get_g() { return g; }
	BYTE get_b() { return b; }
private:
	BYTE r;
	BYTE g;
	BYTE b;
	UINT32 encoded_hex;

	void encode_hex() {
#ifdef RISCOS
		encoded_hex = (b << 16) + (g << 8) + r;
#else
		encoded_hex = (r << 16) + (g << 8) + b;
#endif
	}
};

struct Sprite {
	size_t width, height;
	std::vector<std::vector<Colour>> banks;
};

struct Event {
	EventType type;
	int key_code;
	char ascii;
};

struct Font {
	int width;
	int height;
	float scale;
	int baseline;
	unsigned char* bitmap;
	int ix0, iy0, ix1, iy1;
	int advance, lsb;
	int sc_width;
};

const int CURSOR_BLINK_TIME = 250;

class Graphics {
public:
	Graphics()
	{
#ifndef RISCOS
		window = NULL;
#endif
		screen_width = 0;
		screen_height = 0;
		minX = 0;
		maxX = 0;
		minY = 0;
		maxY = 0;
	}
	bool is_open() { return opened; }
	bool is_banked() { return banked; }
	~Graphics()
	{
		delete bank_cache;
		delete_fonts();
	}
	void init();
	void delete_fonts();
	void shutdown();
	void open(int width, int height, Mode mode, std::string& cwd);
	void colour(BYTE r, BYTE g, BYTE b);
	void colour_hex(UINT32 c);
	void set_colour(Colour c);
	void colour_bg(int r, int g, int b);
	void colour_bg_hex(UINT32 c);
	void cls();
	void plot(int x, int y);
	void blit_fast(size_t count, std::vector<Colour>* source, size_t source_index, UINT32 *dest);
	VM_INT point(int x, int y);
	void flip(bool user_specified);
	void poll();
	void draw_horz_line(int x1, int x2, int y);
	void eight_way_symmetric_plot(int xc, int yc, int x, int y, bool fill);
	void circle(int x, int y, int r, bool fill);
	void rectangle(int x1, int y1, int x2, int y2);
	void clipoff();
	void clip(int x1, int y1, int x2, int y2);
	void alpha(Colour bg, Colour fg, Colour& out, BYTE a);
	void show_fps() { showfps = true; }
	void cache();
	void restore();
#ifndef RISCOS
	int key_riscos_translate(SDL_Keysym key);
#endif
	void RISCOS_debugger_key_check();
	VM_STRING input();
	VM_INT inkey(VM_INT timeout_or_keycode);
	VM_STRING inkeys(VM_INT timeout_or_keycode);
	VM_INT get();
	VM_STRING gets();
	void mouse(VM_INT* x, VM_INT* y, VM_INT* state);
	UINT32 get_screen_width();
	UINT32 get_screen_height();
	UINT32 get_actual_width() { return screen_width; }
	UINT32 get_actual_height() { return screen_height; }
	void hide_cursors();
	void show_cursors();

	// Text stuff
	void init_text();
	VM_INT load_font(const char* filename);
	VM_INT create_font_by_size(int index, int font_size);
	Font* get_glyph(VM_INT index, VM_INT index_ff, BYTE ascii, VM_INT font_size);
	int get_cursor_x() { return last_cursor_x; }
	int get_cursor_y() { return last_cursor_y; }
	void set_cursor_x(int x) { last_cursor_x = x; }
	void set_cursor_y(int y) { last_cursor_y = y; }
	void cursor_back(int index_ff);
	void delete_character(int index_ff);
	void print_character(int index_ff, char c, int* cursor_x, int* cursor_y);
	void print_console(VM_STRING text);
	int max_horz_chars(int index_ff);
	void print_text(int index_ff, VM_STRING text, int cursor_x, int cursor_y);
	void print_text_centre(int index_ff, VM_STRING text, int cursor_x, int cursor_y);
	void print_text_right(int index_ff, VM_STRING text, int cursor_x, int cursor_y);
	int string_width(int index_ff, VM_STRING text);
	void set_margin(int margin);
	void cursor_on() {
		cursor_enabled = true; last_cursor_blink = std::chrono::high_resolution_clock::now();
	}
	void cursor_off() { cursor_enabled = false; }
	bool is_cursor_enabled() { return cursor_enabled; }
	void draw_cursor();
	void undraw_cursor();

	// Sprites
	VM_INT create_sprite(VM_INT w, VM_INT h, VM_INT banks);
	void delete_sprite(VM_INT handle);
	bool render_to_sprite(VM_INT handle, VM_INT bank, VM_INT offset_x, VM_INT offset_y);
	void render_to_screen();
	bool draw_sprite(VM_INT handle, VM_INT bank, VM_INT x, VM_INT y);
	VM_INT create_sprite_from_image(std::string filename);

#ifdef RISCOS
	void graphics_shadow_state_on();
	void graphics_shadow_state_off();
	void graphics_set_vdu_bank(int bank);
	void graphics_set_display_bank(int bank);
	UINT32* get_bank_address();
	BYTE* get_bank_address_byte();
#endif

	UINT32* bank_cache = nullptr;

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

	Colour current_colour = Colour(255, 255, 255);
	Colour current_bg_colour = Colour(0, 0, 0);

private:
	std::chrono::high_resolution_clock::time_point last_render;
	std::queue<Event> key_events;
	std::queue<Event> mouse_events;
	std::map<VM_INT, Font> font_glyphs;
	std::map<VM_INT, VM_INT> font_heights;
	int font_face_index = 0;
	int font_index = 0;
	bool showfps = false;
	int fps_count = 0;
	int margin = 0;
	std::string fps_text = "0 FPS";
	VM_INT fps_clock = get_clock();
	std::array<bool, 256> key_pressed;
	std::chrono::high_resolution_clock::time_point last_cursor_blink;
	bool cursor_enabled = false;
	bool blink_state = false;
	std::map<VM_INT, Sprite> sprites;
	size_t bank_width, bank_height;
	size_t bank_x1, bank_y1, bank_x2, bank_y2;
	std::vector<Colour>* render_bank = nullptr;
	RasterMode raster_mode = RasterMode::BLIT;

	// Fast line lookup
	std::vector<size_t> line_address;
#ifndef RISCOS
	SDL_Window* window = NULL;
	SDL_Surface* screen;
#else
	int size;
	int desktop_screen_width = 0;
	int desktop_screen_height = 0;
	int eigen_x;
	int eigen_y;

	// Bank switching
	int max_banks = 0;
	UINT32 bank_address[3];
	int bank = 1;
#endif
	bool opened = false;
	bool banked = false;
	Mode mode;
	int screen_width, screen_height;
	int minX, maxX, minY, maxY;
	int last_cursor_x = 0, last_cursor_y = 0;
};