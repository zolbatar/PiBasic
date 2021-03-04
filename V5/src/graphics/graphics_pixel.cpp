#include "graphics.h"
#include "../environment.h"

extern Environment g_env;

void Graphics::plot(int x, int y)
{
	if (render_bank != nullptr) {
		if (x < g_env.sprite.bank_x1 || x > g_env.sprite.bank_x2 || y < g_env.sprite.bank_y1 || y > g_env.sprite.bank_y2)
			return;
		int yb = y - static_cast<int>(g_env.sprite.bank_y1);
		int xb = x - static_cast<int>(g_env.sprite.bank_x1);
#ifndef RISCOS
		SDL_SetRenderTarget(g_env.graphics.get_renderer(), render_bank);
		set_sdl_colour();
		SDL_RenderDrawPoint(g_env.graphics.get_renderer(), xb, yb);
		SDL_SetRenderTarget(g_env.graphics.get_renderer(), NULL);
#else
		auto loc = (yb * g_env.sprite.bank_width) + xb;
		(*render_bank)[loc] = current_colour;
#endif
	}
	else {
#ifdef RISCOS
		if (x < minX || x > maxX || y < minY || y > maxY)
			return;
		UINT32* addr = get_bank_address();
		int offset = line_address[y] + x;
		switch (raster_mode) {
		case RasterMode::BLIT:
			addr[offset] = current_colour.get_hex();
		case RasterMode::BLEND: {
			Colour c = current_colour;

			// Get current pixel colour, a little expensive but worth it for quality
			auto bg = point(x, y);
			Colour bgC((bg & 0xFF0000) >> 16, (bg & 0xFF00) >> 8, bg & 0xFF);

			alpha(bgC, current_colour, c, current_colour.get_a());
			pixels[offset] = c.get_hex();
			break;
		}
		}
#else
		set_sdl_colour();
		SDL_RenderDrawPoint(renderer, x, y);
#endif
	}
}

void Graphics::plot_multiple(size_t count, UINT32* dest) {
	for (auto c = 0; c < count; c++) {
		switch (raster_mode) {
		case RasterMode::BLIT:
			break;
		}
	}
}

void Graphics::blit_fast(size_t count, std::vector<Colour>* source, size_t source_index, UINT32* dest) {
	for (auto c = 0; c < count; c++) {
		switch (raster_mode) {
		case RasterMode::BLIT:
			dest[c] = (*source)[source_index + c].get_hex();
			break;
		case RasterMode::MASK: {
			auto col = (*source)[source_index + c].get_hex();
			if (col != 0) {
				dest[c] = col;
			}
			break;
		}
		}
	}
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
	auto surface = SDL_CreateRGBSurfaceWithFormat(0, static_cast<int>(desktop_screen_width * dpi_ratio), static_cast<int>(desktop_screen_height * dpi_ratio), 32, SDL_PIXELFORMAT_RGB888);
	SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_RGB888, surface->pixels, surface->pitch);
	size_t offset = (y * surface->pitch) + x;
	auto ss = (UINT32*)surface->pixels;
	UINT32 p = ss[offset];
	SDL_FreeSurface(surface);
	return p;
#endif
}
