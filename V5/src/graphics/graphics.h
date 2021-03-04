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
#include "colour.h"
#include "sprite.h"

#ifdef _DEBUG
const bool DEBUGWINDOW = true;
#else
const bool DEBUGWINDOW = false;
#endif

const int FRAMETIME = 10;

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

enum class RasterMode {
	BLIT,
	MASK,
	BLEND
};

struct Event {
	EventType type;
	int key_code;
	char ascii;
};

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
#ifdef RISCOS
		delete bank_cache;
#else
		if (bank_cache != nullptr)
			SDL_FreeSurface(bank_cache);
#endif
	}
	void init();
	void shutdown();
	void open(int width, int height, Mode mode, std::string& cwd);
	void colour(BYTE r, BYTE g, BYTE b);
	void colour_hex(UINT32 c);
	void set_colour(Colour c);
	void colour_bg(int r, int g, int b);
	void colour_bg_hex(UINT32 c);
	void cls();
	void plot(int x, int y);
#ifndef RISCOS
	void set_sdl_colour();
#endif
	void plot_multiple(size_t count, UINT32* dest);
	void blit_fast(size_t count, std::vector<Colour>* source, size_t source_index, UINT32* dest);
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
	void scroll(VM_INT font_row_height);
#ifndef RISCOS
	SDL_Surface* get_screen() { return screen; }
	SDL_Renderer* get_renderer() { return renderer; }
#endif
	RasterMode get_raster_mode() { return raster_mode; }
	void set_raster_mode(RasterMode rm) { raster_mode = rm; }
	UINT32 get_screen_width() { return desktop_screen_width; }
	UINT32 get_screen_height() { return desktop_screen_height; }
	UINT32 get_actual_width() { return screen_width; }
	UINT32 get_actual_height() { return screen_height; }

#ifdef RISCOS
	void graphics_shadow_state_on();
	void graphics_shadow_state_off();
	void graphics_set_vdu_bank(int bank);
	void graphics_set_display_bank(int bank);
	UINT32* get_bank_address();
	BYTE* get_bank_address_byte();
#endif

#ifdef RISCOS
	UINT32* bank_cache = nullptr;
#else
	Uint32 pixelFormatEnum;
	SDL_Surface* bank_cache = nullptr;
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

	Colour current_colour = Colour(255, 255, 255);
	Colour current_bg_colour = Colour(0, 0, 0);

#ifdef RISCOS
	void set_render_bank(std::vector<Colour>* b) { render_bank = b }
#else
	void set_render_bank(SDL_Texture* b) { render_bank = b; }
#endif

private:
	bool default_fonts_loaded = false;
	std::chrono::high_resolution_clock::time_point last_render;
	bool showfps = false;
	int fps_count = 0;
	std::string fps_text = "0 FPS";
	VM_INT fps_clock = get_clock();
#ifdef RISCOS
	std::vector<Colour>* render_bank = nullptr;
#else
	SDL_Texture* render_bank = nullptr;
#endif
	RasterMode raster_mode = RasterMode::BLIT;
	double dpi_ratio = 1.0;

#ifndef RISCOS
	SDL_Window* window = nullptr;
	SDL_Surface* screen = nullptr;
	SDL_Renderer* renderer = nullptr;
	SDL_Cursor* cursor = nullptr;
#else
	std::vector<size_t> line_address;
	int size;
	int eigen_x;
	int eigen_y;

	// Bank switching
	int max_banks = 0;
	UINT32 bank_address[3];
	int bank = 1;
#endif
	int desktop_screen_width = 0;
	int desktop_screen_height = 0;
	bool opened = false;
	bool banked = false;
	Mode mode;
	int screen_width, screen_height;
	int minX, maxX, minY, maxY;
};