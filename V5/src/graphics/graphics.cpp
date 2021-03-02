#include "../environment.h"
#include "graphics.h"
#include "../debugger/debugger.h"
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string.h>

extern Environment g_env;
extern int console_font_size;

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

	if (DEBUGWINDOW) {
		return dm.w * 0.75;
	}
	else {
		return dm.w;
	}
}

UINT32 Graphics::get_screen_height()
{
	SDL_DisplayMode dm;
	if (SDL_GetDesktopDisplayMode(0, &dm) != 0) {
		SDL_Log("SDL_GetDesktopDisplayMode failed: %s", SDL_GetError());
		return 1;
	}
	if (DEBUGWINDOW) {
		return dm.h * 0.75;
	}
	else {
		return dm.h;
	}
}
#endif

void Graphics::open(int width, int height, Mode mode, std::string& cwd)
{
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
	banked = mode == Mode::BANKED;
	screen_width = width;
	screen_height = height;
	minX = 0;
	maxX = screen_width - 1;
	minY = 0;
	maxY = screen_height - 1;

	// Load standard fonts
	if (!default_fonts_loaded) {
		std::string fp = cwd + "/RobotoMono-Regular.ttf";
		g_env.fonts.load_typeface(fp.c_str());
		fp = std::string(cwd) + "/Roboto-Regular.ttf";
		g_env.fonts.load_typeface(fp.c_str());
		fp = std::string(cwd) + "/RobotoSlab-Regular.ttf";
		g_env.fonts.load_typeface(fp.c_str());
		default_fonts_loaded = true;
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
		std::string mode_string_c = "X" + std::to_string(width) + " Y" + std::to_string(height) + " C16M";
		regs.r[0] = 15;
		const char* s = mode_string_c.c_str();
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
#ifdef _DEBUG
			params |= SDL_WINDOW_FULLSCREEN_DESKTOP;
#else
			params |= SDL_WINDOW_FULLSCREEN;
#endif
		}

		window = SDL_CreateWindow("DARIC", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, screen_width, screen_height, params);
		if (!window) {
			SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't create window: %s", SDL_GetError());
			exit(1);
		}

		/*		float ddpi, hdpi, vdpi;
				if (SDL_GetDisplayDPI(0, &ddpi, &hdpi, &vdpi) != 0) {
					fprintf(stderr, "Failed to obtain DPI information for display 0: %s\n", SDL_GetError());
					exit(1);
				}
				dpi_ratio = ddpi / 96;
				console_font_size = static_cast<int>(25.0 * dpi_ratio);*/

		screen = SDL_GetWindowSurface(window);
		renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
		SDL_StopTextInput();

		// Format
		SDL_PixelFormat* pixelFormat = screen->format;
		Uint32 pixelFormatEnum = pixelFormat->format;
		const char* surfacePixelFormatName = SDL_GetPixelFormatName(pixelFormatEnum);
		std::cout << "Pixel format: " << surfacePixelFormatName << std::endl;

		// DOes this work in hwaccel mode?
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
	if (DEBUGWINDOW) {
		memcpy(bank_cache, pixels, get_actual_width() * get_actual_height() * 4);
	}
	else {
		memcpy(bank_cache, pixels, screen->pitch * screen_height);
	}
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
	if (DEBUGWINDOW) {
		memcpy(pixels, bank_cache, get_actual_width() * get_actual_height() * 4);
	}
	else {
		memcpy(pixels, bank_cache, screen->pitch * screen_height);
	}
	SDL_UnlockSurface(screen);
#endif
}

void Graphics::alpha(Colour bg, Colour fg, Colour& out, BYTE a)
{
	out.set_rgb(((fg.get_r() * a) >> 8) + ((bg.get_r() * (255 - a)) >> 8),
		((fg.get_g() * a) >> 8) + ((bg.get_g() * (255 - a)) >> 8),
		((fg.get_b() * a) >> 8) + ((bg.get_b() * (255 - a)) >> 8));
}

void Graphics::colour(BYTE r, BYTE g, BYTE b)
{
	current_colour.set_rgb(r, g, b);
}

void Graphics::colour_bg(int r, int g, int b)
{
	current_bg_colour.set_rgb(r, g, b);
}

void Graphics::colour_hex(UINT32 c)
{
	current_colour.set_rgb((c & 0xFF0000) >> 16, (c & 0xFF00) >> 8, (c & 0xFF));
}

void Graphics::set_colour(Colour c)
{
	current_colour = c;
}

void Graphics::colour_bg_hex(UINT32 c)
{
	current_bg_colour.set_rgb((c & 0xFF0000) >> 16, (c & 0xFF00) >> 8, (c & 0xFF));
}

void Graphics::cls()
{
#ifdef RISCOS
	auto bg = current_bg_colour.get_hex();
	auto addr = get_bank_address();
	memset((void*)addr, bg, size);
#else
	SDL_SetRenderDrawColor(renderer, current_bg_colour.get_r(), current_bg_colour.get_g(), current_bg_colour.get_b(), SDL_ALPHA_OPAQUE);
	SDL_RenderClear(renderer);
#endif
	if (!banked)
		flip(false);
	g_env.text.cls();
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
		if (time_span.count() < FRAMETIME) {
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
			fps_text = std::to_string(fps) + " FPS";

			fps_clock = t;
		}
		auto saved_colour = current_colour;
		colour_hex(0xFFFFFF);
		g_env.text.print_text_right(0, 20, fps_text, screen_width - 1, 0);
		current_colour = saved_colour;
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
	SDL_RenderPresent(renderer);
#endif
}

void Graphics::draw_horz_line(int x1, int x2, int y)
{
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
	for (int x = x1; x <= x2; x++) {
		plot(x, y);
	}
#else	
	set_sdl_colour();
	SDL_RenderDrawLine(renderer, x1, y, x2, y);
#endif
}

#ifndef RISCOS
void Graphics::set_sdl_colour() {
	switch (raster_mode) {
	case RasterMode::BLIT:
		SDL_SetRenderDrawColor(renderer, current_colour.get_r(), current_colour.get_g(), current_colour.get_b(), SDL_ALPHA_OPAQUE);
		break;
	case RasterMode::BLEND:
		SDL_SetRenderDrawColor(renderer, current_colour.get_r(), current_colour.get_g(), current_colour.get_b(), current_colour.get_a());
		break;
	}
}
#endif

void Graphics::rectangle(int x1, int y1, int x2, int y2)
{
#ifndef RISCOS
	SDL_Rect rect;
	rect.x = x1;
	rect.y = y1;
	rect.w = x2 - x1;
	rect.h = y2 - y1;
	set_sdl_colour();
	SDL_RenderFillRect(renderer, &rect);
#else
	for (int y = y1; y <= y2; y++) {
		draw_horz_line(x1, x2, y);
	}
#endif
}

void Graphics::clip(int x1, int y1, int x2, int y2)
{
#ifndef RISCOS
	SDL_Rect clip;
	clip.x = x1;
	clip.y = y1;
	clip.w = x2 - x1;
	clip.h = y2 - y1;
	SDL_RenderSetClipRect(renderer, &clip);
#else
	minX = x1;
	maxX = x2;
	minY = y1;
	maxY = y2;
#endif
}

void Graphics::clipoff()
{
#ifndef RISCOS
	SDL_RenderSetClipRect(renderer, NULL);
#else
	minX = 0;
	maxX = screen_width - 1;
	minY = 0;
	maxY = screen_height - 1;
#endif
}

void Graphics::poll()
{
	flip(false);
	if (g_env.debugger_requested) {
		g_env.debugger_requested = false;
		Debugger();
	}
	g_env.input.poll();
	g_env.text.poll();
}

void Graphics::scroll(VM_INT font_row_height) {
#ifdef RISCOS
	auto addr = get_bank_address();
	auto bg = current_bg_colour.get_hex();

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
	auto surface = SDL_CreateRGBSurfaceWithFormat(0, screen_width, screen_height, 32, SDL_PIXELFORMAT_RGBA8888);
	SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_RGBA8888, surface->pixels, surface->pitch);
	auto tex = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_Rect SourceR;
	SourceR.x = 0;
	SourceR.y = font_row_height;
	SourceR.w = screen_width;
	SourceR.h = screen_height - font_row_height;
	SDL_Rect DestR;
	DestR.x = 0;
	DestR.y = 0;
	DestR.w = screen_width;
	DestR.h = screen_height - font_row_height;
	SDL_RenderCopy(g_env.graphics.get_renderer(), tex, &SourceR, &DestR);
	SDL_SetRenderDrawColor(renderer, current_bg_colour.get_r(), current_bg_colour.get_g(), current_bg_colour.get_b(), SDL_ALPHA_OPAQUE);
	SDL_Rect rect;
	rect.x = 0;
	rect.y = screen_height - font_row_height;
	rect.w = screen_width;
	rect.h = font_row_height;
	SDL_RenderFillRect(renderer, &rect);
#endif
}
