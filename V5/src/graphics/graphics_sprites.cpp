#include "graphics.h"

VM_INT Graphics::create_sprite(VM_INT w, VM_INT h, VM_INT banks) {
	Sprite s;
	s.width = w;
	s.height = h;
	for (auto i = 0; i < banks; i++) {
		std::vector<Colour> bank(s.width * s.height);
		s.banks.push_back(std::move(bank));
	}
	auto index = sprites.size();
	sprites.insert(std::make_pair<VM_INT, Sprite>(static_cast<VM_INT>(index), std::move(s)));
	return static_cast<VM_INT>(index);
}

void Graphics::delete_sprite(VM_INT handle) {
	sprites.erase(handle);
}

bool Graphics::render_to_sprite(VM_INT handle, VM_INT bank, VM_INT offset_x, VM_INT offset_y) {
	auto sprite = sprites.find(handle);

	// Does sprite exist?
	if (sprite == sprites.end()) {
		return false;
	}
	auto s = &((*sprite).second);

	// Does bank exist?
	if (bank >= s->banks.size()) {
		return false;
	}
	render_bank = &s->banks[bank];
	bank_x1 = offset_x;
	bank_y1 = offset_y;
	bank_x2 = s->width + offset_x - 1;
	bank_y2 = s->height + offset_y - 1;
	bank_width = s->width;
	bank_height = s->height;
	return true;
}

void Graphics::render_to_screen() {
	render_bank = nullptr;
}

bool Graphics::draw_sprite(VM_INT handle, VM_INT bank, VM_INT sx, VM_INT sy) {
	auto sprite = sprites.find(handle);

	// Does sprite exist?
	if (sprite == sprites.end()) {
		return false;
	}
	auto s = (*sprite).second;

	// Does bank exist?
	if (bank >= s.banks.size()) {
		return false;
	}
	auto b = s.banks[bank];

	// Render!!
#ifdef RISCOS
	UINT32* pixels = get_bank_address();
#else
	SDL_LockSurface(screen);
	UINT32* pixels = (UINT32*)screen->pixels;
#endif

	// Work out how much to clip 
	size_t clip_left = sx < minX ? minX - sx : 0;
	size_t clip_right = (sx + s.width) > maxX ? (sx + s.width) - maxX : 0;
	size_t clip_top = sy < minY ? minY - sy : 0;
	size_t clip_bottom = (sy + s.height) > maxY ? (sy + s.height) - maxY : 0;

	int width = s.width - clip_left - clip_right;
	int height = s.height - clip_top - clip_bottom;

	if (width > 0 && height > 0) {
		for (size_t y = clip_top; y < s.height - clip_bottom; y++) {
			size_t src_offset = (y * s.width) + clip_left;
			size_t dest_offset = line_address[y + sy] + clip_left + sx;
			size_t count = s.width - clip_right - clip_left;
			blit_fast(count, &b, src_offset, &pixels[dest_offset]);
		}
	}

#ifdef RISCOS
#else
	SDL_UnlockSurface(screen);
#endif
	return true;
}