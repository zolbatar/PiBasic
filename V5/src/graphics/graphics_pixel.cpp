#include "graphics.h"

void Graphics::plot_sdl(int x, int y, UINT32* pixels) {
	if (x < minX || x > maxX || y < minY || y > maxY)
		return;
	int offset = line_address[y] + x;
	switch (raster_mode) {
	case RasterMode::BLIT:
		pixels[offset] = current_colour.get_hex();
		break;
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
}

void Graphics::plot(int x, int y)
{
	if (render_bank != nullptr) {
		if (x < bank_x1 || x > bank_x2 || y < bank_y1 || y > bank_y2)
			return;
		auto yb = y - bank_y1;
		auto xb = x - bank_x1;
		auto loc = (yb * bank_width) + xb;
		(*render_bank)[loc] = current_colour;
	}
	else {
		if (x < minX || x > maxX || y < minY || y > maxY)
			return;
#ifdef RISCOS
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
		SDL_LockSurface(screen);
		auto pixels = (UINT32*)screen->pixels;
		int offset = line_address[y] + x;
		switch (raster_mode) {
		case RasterMode::BLIT:
			pixels[offset] = current_colour.get_hex();
			break;
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
		SDL_UnlockSurface(screen);
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
	SDL_LockSurface(screen);
	auto pixels = (UINT32*)screen->pixels;
	int offset = line_address[y] + x;
	VM_INT v = pixels[offset];
	SDL_UnlockSurface(screen);
	return v;
#endif
}
