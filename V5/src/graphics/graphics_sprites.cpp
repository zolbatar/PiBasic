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
	return index;
}

void Graphics::delete_sprite(VM_INT handle) {
	sprites.erase(handle);
}

void Graphics::render_to_sprite(VM_INT handle, VM_INT bank, VM_INT offset_x, VM_INT offset_y) {

}

void Graphics::render_to_screen() {

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
	auto saved_colour = current_colour;
	for (size_t y = 0; y < s.height; y++) {
		for (size_t x = 0; x < s.width; x++) {
			current_colour = b[y * s.width + x];
			plot(x + sx, y + sy);
		}
	}
	current_colour = saved_colour;
	return true;
}
