#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "fonts.h"
#include "../environment.h"

int console_font_size = 25;
extern Environment g_env;

void Fonts::clear_all() {
	font_glyphs.clear();
}

VM_INT Fonts::load_typeface(const char* filename)
{
	std::cout << "Loading font '" << filename << "',";

	// Load and build the actual font, we're never going to release this memory EVER
	auto f = (stbtt_fontinfo*)malloc(sizeof(stbtt_fontinfo));
	if (!f) {
		std::cout << "Can't allocate memory for TTF font\n";
		exit(1);
	}

	// Open file and calculate size
	FILE* fp = fopen(filename, "rb");
	if (!fp) {
		std::cout << "Error opening font file\n";
		exit(0);
	}
	fseek(fp, 0L, SEEK_END);
	size_t sz = ftell(fp);
	fseek(fp, 0L, SEEK_SET);
	std::cout << " file size is " << sz << " bytes." << std::endl;

	// Allocate memory (we don't deallocate, so will leave a memory leak)
	char* ttf_buffer = (char*)malloc(sz);
	if (!ttf_buffer) {
		std::cerr << "Can't allocate memory for TTF font\n";
		exit(1);
	}

	// Read into buffer and close file
	auto r = fread(ttf_buffer, 1, sz, fp);
	assert(r == sz);
	fclose(fp);

	// Now create font
	auto index = fonts.size();
	stbtt_InitFont(f, (const unsigned char*)ttf_buffer, stbtt_GetFontOffsetForIndex((const unsigned char*)ttf_buffer, 0));
	fonts.push_back(f);
	return index;
}

Glyph* Fonts::get_glyph_x(VM_INT typeface, VM_INT size, BYTE ascii)
{
	auto index = build_type_size_char_index(typeface, size, ascii);

	// Have we already generated it?
	auto glyph = font_glyphs.find(index);
	if (glyph != font_glyphs.end()) {
		return &glyph->second;
	}

	// Actual font definition from TTF file
	auto ff = fonts[typeface];

	// Create the glpyh
	Glyph f;
	auto sc = stbtt_ScaleForPixelHeight(ff, static_cast<float>(size));
	f.bitmap = stbtt_GetCodepointBitmap(ff, 0, sc, ascii, &f.width, &f.height, 0, 0);

	// Create texture?
#ifndef RISCOS
	f.tex = SDL_CreateTexture(g_env.graphics.get_renderer(), SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC | SDL_TEXTUREACCESS_TARGET, f.width, f.height);
	SDL_SetRenderTarget(g_env.graphics.get_renderer(), f.tex);
	int idx = 0;
	for (int j = 0; j < f.height; ++j) {
		for (int i = 0; i < f.width; ++i) {
			auto v = f.bitmap[idx++];
			SDL_SetRenderDrawColor(g_env.graphics.get_renderer(), 0xFF, 0xFF, 0xFF, v);
			SDL_RenderDrawPoint(g_env.graphics.get_renderer(), i, j);
		}
	}
	SDL_SetRenderTarget(g_env.graphics.get_renderer(), NULL);
	SDL_SetTextureBlendMode(f.tex, SDL_BLENDMODE_BLEND);
#endif

	// Baseline
	f.scale = stbtt_ScaleForPixelHeight(ff, static_cast<float>(size));
	int ascent;
	stbtt_GetFontVMetrics(ff, &ascent, 0, 0);
	f.baseline = (int)(ascent * f.scale);

	// Font adjust
	stbtt_GetCodepointHMetrics(ff, ascii, &f.advance, &f.lsb);
	stbtt_GetCodepointBitmapBox(ff, ascii, f.scale, f.scale, &f.ix0, &f.iy0, &f.ix1, &f.iy1);
	f.sc_width = static_cast<int>(f.advance * f.scale);

	font_glyphs.insert(std::make_pair(index, std::move(f)));
	return &(font_glyphs.find(index)->second);
}

int Fonts::max_horz_chars(int typeface, int size, UINT32 screen_width)
{
	auto f = get_glyph_x(typeface, size, ' ');
	auto w = screen_width / f->sc_width;
	return w;
}

VM_INT Fonts::get_font_height(VM_INT typeface, VM_INT size) {

	auto index = build_type_size_index(typeface, size);

	// Have we already generated it?
	auto height = font_heights.find(typeface);
	if (height != font_heights.end()) {
		return height->second;
	}

	// Row height
	auto f = get_glyph_x(typeface, size, ' ');

	// Actual font definition from TTF file
	auto ff = fonts[typeface];

	int m = 0;
	for (int c = 32; c <= 127; c++) {
		int ix0, iy0, ix1, iy1;
		stbtt_GetCodepointBitmapBox(ff, c, f->scale, f->scale, &ix0, &iy0, &ix1, &iy1);
		if (iy1 > m) {
			m = iy1;
		}
	}
	auto font_row_height = f->baseline + m;
	font_heights.insert(std::make_pair(index, f->baseline + m));

	return font_row_height;
}
