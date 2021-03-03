#pragma once
#ifdef __unix__
#include <SDL2/SDL.h>
#elif RISCOS
#include "kernel.h"
#include "swis.h"
#else
#include <SDL.h>
#endif
#include "colour.h"
#include <vector>
#include <map>

struct Sprite {
	size_t width, height;
#ifdef RISCOS
	std::vector<std::vector<Colour>> banks;
#else
	std::vector<SDL_Texture*> banks;
#endif
};

class Sprites {
public:
	VM_INT create_sprite(VM_INT w, VM_INT h, VM_INT banks);
	void delete_sprite(VM_INT handle);
	bool render_to_sprite(VM_INT handle, VM_INT bank, VM_INT offset_x, VM_INT offset_y);
	void render_to_screen();
	bool draw_sprite(VM_INT handle, VM_INT bank, VM_INT x, VM_INT y, VM_FLOAT rot, VM_FLOAT scale);
	VM_INT create_sprite_from_image(std::string filename);

	size_t bank_width, bank_height;
	size_t bank_x1, bank_y1, bank_x2, bank_y2;
private:
	std::map<VM_INT, Sprite> sprites;
};