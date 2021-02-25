#include "graphics.h"

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
		addr[offset] = current_colour.get_hex();
#else
		SDL_LockSurface(screen);
		auto pixels = (UINT32*)screen->pixels;
		int offset = line_address[y] + x;
		pixels[offset] = current_colour.get_hex();
		SDL_UnlockSurface(screen);
#endif
	}
}

void Graphics::blit_fast(size_t count, std::vector<Colour>* source, size_t source_index, UINT32* dest) {
	for (auto c = 0; c < count; c++) {
		switch (raster_mode) {
		case RasterMode::BLIT:
			dest[c] = (*source)[source_index + c].get_hex();
			break;
		case RasterMode::BLEND: {
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
