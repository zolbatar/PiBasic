#pragma once
#define STBTT_STATIC
#define STB_TRUETYPE_IMPLEMENTATION
#ifdef __unix__
#include <SDL2/SDL.h>
#elif RISCOS
#include "kernel.h"
#include "swis.h"
#else
#include <SDL.h>
#endif
#include "stb_truetype.h"
#include "../types.h"
#include <vector>
#include <map>

const int console_font = 0;
extern int console_font_size;

class Glyph {
public:
	~Glyph() { SDL_DestroyTexture(tex); }
	int width;
	int height;
	float scale;
	int baseline;
	unsigned char* bitmap;
#ifndef RISCOS
	SDL_Texture* tex;
#endif
	int ix0, iy0, ix1, iy1;
	int advance, lsb;
	int sc_width;
};

class Fonts {
public:
	void clear_all();
	VM_INT load_typeface(const char* filename);
	VM_INT get_font_height(VM_INT typeface, VM_INT size);
	Glyph* get_glyph_x(VM_INT typeface, VM_INT size, BYTE ascii);
	int max_horz_chars(int typeface, int size, UINT32 screen_width);
private:
	std::vector<stbtt_fontinfo*> fonts;
	std::map<VM_INT, Glyph> font_glyphs;
	std::map<VM_INT, VM_INT> font_heights;

	VM_INT build_type_size_index(VM_INT typeface, VM_INT size) { return (typeface << 16) + (size << 8); }
	VM_INT build_type_size_char_index(VM_INT typeface, VM_INT size, char ascii) { return (typeface << 16) + (size << 8) + ascii; }
};
