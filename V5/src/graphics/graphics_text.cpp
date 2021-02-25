#define _CRT_SECURE_NO_WARNINGS
#include "graphics.h"
#include "../environment.h"
#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>

extern Environment g_env;

void Graphics::scroll(VM_INT font_row_height, int* cursor_x, int* cursor_y) {
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
	UINT32 bg_hex = current_bg_colour.get_hex();
	SDL_LockSurface(screen);
	auto pixels = (UINT32*)screen->pixels;
	auto offset = (screen->pitch * font_row_height) / 4;
	auto size = (screen->pitch * (screen_height - font_row_height)) / 4;
	for (int i = 0; i < size; i++) {
		pixels[i] = pixels[i + offset];
	}
	for (int i = 0; i < offset; i++) {
		pixels[size + i] = bg_hex;
	}
	SDL_UnlockSurface(screen);
#endif
	* cursor_y -= font_row_height;

}

void Graphics::print_character(int typeface, int size, char c, int* cursor_x, int* cursor_y)
{
	auto font_row_height = g_env.fonts.get_font_height(typeface, size);

	// End of page, need to scroll?
	while (*cursor_y + font_row_height >= screen_height) {
		scroll(font_row_height, cursor_x, cursor_y);
	}

	switch (c) {
	case '\r':
		*cursor_y += font_row_height;
		*cursor_x = 0;
		return;
	case '\n':
		*cursor_y += font_row_height;
		*cursor_x = 0;
		return;
	}
	auto f = g_env.fonts.get_glyph_x(typeface, size, c);
	if (f->bitmap != NULL) {
		auto saved_colour = current_colour;
		for (int j = 0; j < f->height; ++j) {
			for (int i = 0; i < f->width; ++i) {
				auto idx = j * f->width + i;
				auto v = f->bitmap[idx];
				if (v > 0) {
					Colour c;

					// X/Y
					auto x = *cursor_x + i + f->ix0 + margin;
					auto y = *cursor_y + j + f->iy0 + f->baseline;

					// Get current pixel colour, a little expensive but worth it for quality
					auto bg = point(x, y);
					Colour bgC((bg & 0xFF0000) >> 16, (bg & 0xFF00) >> 8, bg & 0xFF);

					alpha(bgC, saved_colour, c, v);
					set_colour(c);
					plot(x, y);
				}
			}
		}
		set_colour(saved_colour);
	}
	*cursor_x += f->sc_width;

	// End of line?
	while (*cursor_x + f->sc_width + (margin * 2) >= screen_width) {
		*cursor_y += font_row_height;
		*cursor_x = 0;
	}
}

void Graphics::print_console(VM_STRING text)
{
	print_text(console_font, console_font_size, text, -1, -1);
}

void Graphics::cursor_back(int typeface, int size)
{
	auto f = g_env.fonts.get_glyph_x(typeface, size, ' ');
	auto font_row_height = g_env.fonts.get_font_height(console_font, console_font_size);
	last_cursor_x -= f->sc_width;
	if (last_cursor_x < 0) {
		auto max_chars = (screen_width - (margin * 2)) / f->sc_width;
		last_cursor_x = (max_chars - 1) * f->sc_width + margin;
		last_cursor_y -= font_row_height;
	}
}

void Graphics::delete_character(int typeface, int size)
{
	if (cursor_enabled && blink_state) {
		undraw_cursor();
	}
	auto f = g_env.fonts.get_glyph_x(typeface, size, ' ');
	last_cursor_x -= f->sc_width;
	auto font_row_height = g_env.fonts.get_font_height(console_font, console_font_size);
	if (last_cursor_x < 0) {
		auto max_chars = (screen_width - (margin * 2)) / f->sc_width;
		last_cursor_x = (max_chars - 1) * f->sc_width;
		last_cursor_y -= font_row_height;
	}
	auto saved_colour = current_colour;
	colour(current_bg_colour.get_r(), current_bg_colour.get_g(), current_bg_colour.get_b());
	rectangle(last_cursor_x + margin, last_cursor_y, last_cursor_x + f->sc_width + margin, last_cursor_y + font_row_height);
	colour(saved_colour.get_r(), saved_colour.get_g(), saved_colour.get_b());
	if (cursor_enabled && blink_state) {
		draw_cursor();
	}
	if (!banked)
		flip(false);
}

void Graphics::set_margin(int margin)
{
	this->margin = margin;
}

void Graphics::print_text(int typeface, int size, VM_STRING text, int cursor_x, int cursor_y)
{
	if (cursor_enabled && blink_state) {
		undraw_cursor();
	}
	if (cursor_x == -1)
		cursor_x = last_cursor_x;
	if (cursor_y == -1)
		cursor_y = last_cursor_y;
	for (auto it = text.begin(); it != text.end(); ++it) {
		auto ch = (*it);
		print_character(typeface, size, ch, &cursor_x, &cursor_y);
	}
	last_cursor_x = cursor_x;
	last_cursor_y = cursor_y;
	if (cursor_enabled && blink_state) {
		draw_cursor();
	}
	if (!banked)
		flip(false);
}

void Graphics::print_text_centre(int typeface, int size, VM_STRING text, int cursor_x, int cursor_y)
{
	if (cursor_x == -1)
		cursor_x = last_cursor_x;
	if (cursor_y == -1)
		cursor_y = last_cursor_y;
	cursor_x -= string_width(typeface, size, text) / 2;
	for (auto it = text.begin(); it != text.end(); ++it) {
		auto ch = (*it);
		print_character(typeface, size, ch, &cursor_x, &cursor_y);
	}
	last_cursor_x = cursor_x;
	last_cursor_y = cursor_y;
}
void Graphics::print_text_right(int typeface, int size, VM_STRING text, int cursor_x, int cursor_y)
{
	if (cursor_x == -1)
		cursor_x = last_cursor_x;
	if (cursor_y == -1)
		cursor_y = last_cursor_y;
	cursor_x -= string_width(typeface, size, text);
	for (auto it = text.begin(); it != text.end(); ++it) {
		auto ch = (*it);
		print_character(typeface, size, ch, &cursor_x, &cursor_y);
	}
	last_cursor_x = cursor_x;
	last_cursor_y = cursor_y;
}

int Graphics::string_width(int typeface, int size, VM_STRING text)
{
	int w = 0;
	for (auto it = text.begin(); it != text.end(); ++it) {
		auto ch = (*it);
		auto f = g_env.fonts.get_glyph_x(typeface, size, ch);
		w += f->sc_width;
	}
	return w;
}
