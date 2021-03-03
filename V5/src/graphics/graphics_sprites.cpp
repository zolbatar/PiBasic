#include "graphics.h"
#include "lodepng.h"
#include <iostream>
#include <stdlib.h>
#include "../environment.h"

extern Environment g_env;

VM_INT Sprites::create_sprite(VM_INT w, VM_INT h, VM_INT banks) {
	Sprite s;
	s.width = w;
	s.height = h;
	for (auto i = 0; i < banks; i++) {
#ifdef RISCOS
		std::vector<Colour> bank(s.width * s.height);
		s.banks.push_back(std::move(bank));
#else
		auto texture = SDL_CreateTexture(g_env.graphics.get_renderer(), SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC | SDL_TEXTUREACCESS_TARGET, w, h);
		s.banks.push_back(std::move(texture));
#endif
	}
	auto index = sprites.size();
	sprites.insert(std::make_pair<VM_INT, Sprite>(static_cast<VM_INT>(index), std::move(s)));
	return static_cast<VM_INT>(index);
}

void Sprites::delete_sprite(VM_INT handle) {
	sprites.erase(handle);
}

bool Sprites::render_to_sprite(VM_INT handle, VM_INT bank, VM_INT offset_x, VM_INT offset_y) {
	auto sprite = sprites.find(handle);

	// Does sprite exist?
	if (sprite == sprites.end()) {
		return false;
	}
	auto s = &(sprite->second);

	// Does bank exist?
	if (bank >= s->banks.size()) {
		return false;
	}
#ifdef RISCOS
	g_env.graphics.set_render_bank(&s->banks[bank]);
#else
	g_env.graphics.set_render_bank(s->banks[bank]);
	SDL_SetTextureBlendMode(s->banks[bank], SDL_BLENDMODE_NONE);
#endif
	g_env.sprite.bank_x1 = offset_x;
	g_env.sprite.bank_y1 = offset_y;
	g_env.sprite.bank_x2 = s->width + offset_x - 1;
	g_env.sprite.bank_y2 = s->height + offset_y - 1;
	g_env.sprite.bank_width = s->width;
	g_env.sprite.bank_height = s->height;
	return true;
}

void Sprites::render_to_screen() {
	g_env.graphics.set_render_bank(nullptr);
}

bool Sprites::draw_sprite(VM_INT handle, VM_INT bank, VM_INT sx, VM_INT sy, VM_FLOAT rot, VM_FLOAT scale) {
	auto sprite = sprites.find(handle);

	// Does sprite exist?
	if (sprite == sprites.end()) {
		return false;
	}
	auto s = sprite->second;

	// Does bank exist?
	if (bank >= s.banks.size()) {
		return false;
	}

	// Render!!
#ifdef RISCOS
	auto b = s.banks[bank];
	UINT32* pixels = get_bank_address();

	// Work out how much to clip 
	size_t clip_left = sx < minX ? minX - sx : 0;
	size_t clip_right = (sx + s.width) > maxX ? (sx + s.width) - maxX : 0;
	size_t clip_top = sy < minY ? minY - sy : 0;
	size_t clip_bottom = (sy + s.height) > maxY ? (sy + s.height) - maxY : 0;

	int width = s.width - clip_left - clip_right;
	int height = s.height - clip_top - clip_bottom;

	auto saved_raster = raster_mode;
	raster_mode = RasterMode::MASK;
	if (width > 0 && height > 0) {
		for (size_t y = clip_top; y < s.height - clip_bottom; y++) {
			size_t src_offset = (y * s.width) + clip_left;
			size_t dest_offset = line_address[y + sy] + clip_left + sx;
			size_t count = s.width - clip_right - clip_left;
			blit_fast(count, &b, src_offset, &pixels[dest_offset]);
		}
	}
	raster_mode = saved_raster;
#else
	auto b = s.banks[bank];
	SDL_Rect DestR;
	DestR.x = sx;
	DestR.y = sy;
	DestR.w = s.width * scale;
	DestR.h = s.height * scale;
	SDL_RenderCopyEx(g_env.graphics.get_renderer(), b, NULL, &DestR, rot, NULL, SDL_FLIP_NONE);
#endif
	return true;
}

VM_INT Sprites::create_sprite_from_image(std::string filename) {
	std::vector<unsigned char> image; //the raw pixels
	UINT32 width, height;
	UINT32 error = lodepng::decode(image, width, height, filename);
	if (error) {
		std::cout << "decoder error " << error << ": " << lodepng_error_text(error) << std::endl;
		exit(0);
	}

	// Create sprite
	Sprite s;
	s.width = width;
	s.height = height;
#ifdef RISCOS
	std::vector<Colour> bank(s.width * s.height);
#else
	std::vector<Colour> bank(s.width * s.height);
#endif

	// Populate with data
	auto size = image.size() / 4;
	if (size != (width * height)) {
		std::cout << "Size mismatch on PNG load" << std::endl;
		exit(0);
	}
#ifdef RISCOS
	for (auto i = 0; i < size; i++) {
		size_t index = i * 4;
		Colour c = Colour(image[index], image[index + 1], image[index + 2]);
		bank[i] = c;
	}
	s.banks.push_back(std::move(bank));
#else
	auto texture = SDL_CreateTexture(g_env.graphics.get_renderer(), SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC | SDL_TEXTUREACCESS_TARGET, width, height);
	SDL_SetRenderTarget(g_env.graphics.get_renderer(), texture);
	int idx = 0;
	for (int y = 0; y < height; ++y) {
		for (int x = 0; x < width; ++x) {
			auto r = image[idx++];
			auto g = image[idx++];
			auto b = image[idx++];
			auto a = image[idx++];
			SDL_SetRenderDrawColor(g_env.graphics.get_renderer(), r, g, b, a);
			SDL_RenderDrawPoint(g_env.graphics.get_renderer(), x, y);
		}
	}
	SDL_SetRenderTarget(g_env.graphics.get_renderer(), NULL);
	SDL_SetTextureBlendMode(texture, SDL_BLENDMODE_BLEND);
	s.banks.push_back(std::move(texture));
#endif

	// And save and return
	auto index = sprites.size();
	sprites.insert(std::make_pair<VM_INT, Sprite>(static_cast<VM_INT>(index), std::move(s)));
	return static_cast<VM_INT>(index);

	//the pixels are now in the vector "image", 4 bytes per pixel, ordered RGBARGBA..., use it as texture, draw it, ...
	return 0;
}
