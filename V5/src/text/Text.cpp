#define _CRT_SECURE_NO_WARNINGS
#include "text.h"
#include "../graphics/colour.h"
#include "../environment.h"

extern Environment g_env;

void Text::poll() {
	// Cursor blink?
#ifdef WINDOWS
	if (cursor_enabled) {
		auto t = std::chrono::high_resolution_clock::now();
		auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(t - last_cursor_blink);
		if (time_span.count() > CURSOR_BLINK_TIME) {
			last_cursor_blink = t;

			// Blink on or off?
			if (!blink_state) {
				draw_cursor();
			}
			else {
				undraw_cursor();
			}
			blink_state = !blink_state;
		}
	}
#endif
}

void Text::hide_cursors()
{
#ifdef RISCOS
	_kernel_swi_regs regs;
	_kernel_swi(OS_RemoveCursors, &regs, &regs);
#endif
}

void Text::show_cursors()
{
#ifdef RISCOS
	_kernel_swi_regs regs;
	_kernel_swi(OS_RestoreCursors, &regs, &regs);
#endif
}

void Text::print_character(int typeface, int size, char c, int* cursor_x, int* cursor_y)
{
	auto font_row_height = g_env.fonts.get_font_height(typeface, size);

	// End of page, need to scroll?
	while (*cursor_y + font_row_height >= g_env.graphics.get_actual_height()) {
		g_env.graphics.scroll(font_row_height);
		*cursor_y -= font_row_height;
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
#ifndef RISCOS
		auto xs = *cursor_x + f->ix0 + margin;
		auto ys = *cursor_y + f->iy0 + f->baseline;
		SDL_Rect DestR;
		DestR.x = xs;
		DestR.y = ys;
		DestR.w = f->width;
		DestR.h = f->height;
		SDL_SetTextureColorMod(f->tex, g_env.graphics.current_colour.get_r(), g_env.graphics.current_colour.get_g(), g_env.graphics.current_colour.get_b());
		SDL_RenderCopy(g_env.graphics.get_renderer(), f->tex, NULL, &DestR);
#else
		auto saved_raster = g_env.graphics.get_raster_mode();
		auto xs = *cursor_x + f->ix0 + margin;
		auto ys = *cursor_y + f->iy0 + f->baseline;
		auto idx = 0;
		for (int j = 0; j < f->height; ++j) {
			for (int i = 0; i < f->width; ++i) {
				auto v = f->bitmap[idx++];
				if (v > 0) {
					auto x = xs + i;
					auto y = ys + j;
					g_env.graphics.current_colour.set_a(v);
					g_env.graphics.plot(x, y);
				}
			}
	}
#endif
}
	*cursor_x += f->sc_width;

	// End of line?
	while (*cursor_x + f->sc_width + (margin * 2) >= g_env.graphics.get_actual_width()) {
		*cursor_y += font_row_height;
		*cursor_x = 0;
	}
}

void Text::print_console(VM_STRING text)
{
	print_text(console_font, console_font_size, text, -1, -1);
}

void Text::cursor_back(int typeface, int size)
{
	auto f = g_env.fonts.get_glyph_x(typeface, size, ' ');
	auto font_row_height = g_env.fonts.get_font_height(console_font, console_font_size);
	last_cursor_x -= f->sc_width;
	if (last_cursor_x < 0) {
		auto max_chars = (g_env.graphics.get_actual_width() - (margin * 2)) / f->sc_width;
		last_cursor_x = (max_chars - 1) * f->sc_width + margin;
		last_cursor_y -= font_row_height;
	}
}

void Text::delete_character(int typeface, int size)
{
	if (cursor_enabled && blink_state) {
		undraw_cursor();
	}
	auto f = g_env.fonts.get_glyph_x(typeface, size, ' ');
	last_cursor_x -= f->sc_width;
	auto font_row_height = g_env.fonts.get_font_height(console_font, console_font_size);
	if (last_cursor_x < 0) {
		auto max_chars = (g_env.graphics.get_actual_width() - (margin * 2)) / f->sc_width;
		last_cursor_x = (max_chars - 1) * f->sc_width;
		last_cursor_y -= font_row_height;
	}
	auto saved_colour = g_env.graphics.current_colour;
	g_env.graphics.colour(g_env.graphics.current_bg_colour.get_r(), g_env.graphics.current_bg_colour.get_g(), g_env.graphics.current_bg_colour.get_b());
	g_env.graphics.rectangle(last_cursor_x + margin, last_cursor_y, last_cursor_x + f->sc_width + margin, last_cursor_y + font_row_height);
	g_env.graphics.colour(saved_colour.get_r(), saved_colour.get_g(), saved_colour.get_b());
	if (cursor_enabled && blink_state) {
		draw_cursor();
	}
	if (!g_env.graphics.is_banked())
		g_env.graphics.flip(false);
}

void Text::set_margin(int margin)
{
//	this->margin = margin;
}

void Text::print_text(int typeface, int size, VM_STRING text, int cursor_x, int cursor_y)
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
	if (!g_env.graphics.is_banked())
		g_env.graphics.flip(false);
}

void Text::print_text_centre(int typeface, int size, VM_STRING text, int cursor_x, int cursor_y)
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
void Text::print_text_right(int typeface, int size, VM_STRING text, int cursor_x, int cursor_y)
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

int Text::string_width(int typeface, int size, VM_STRING text)
{
	int w = 0;
	for (auto it = text.begin(); it != text.end(); ++it) {
		auto ch = (*it);
		auto f = g_env.fonts.get_glyph_x(typeface, size, ch);
		w += f->sc_width;
	}
	return w;
}

void Text::draw_cursor() {
	if (!g_env.graphics.is_banked()) {
		auto font_row_height = g_env.fonts.get_font_height(console_font, console_font_size);
		auto saved_colour = g_env.graphics.current_colour;
		g_env.graphics.current_colour = Colour(255, 255, 255);
		auto f = g_env.fonts.get_glyph_x(console_font, console_font_size, ' ');
		g_env.graphics.rectangle(get_cursor_x() + margin, get_cursor_y(), get_cursor_x() + margin + f->sc_width, get_cursor_y() + font_row_height);
		g_env.graphics.current_colour = saved_colour;
	}
}

void Text::undraw_cursor() {
	auto font_row_height = g_env.fonts.get_font_height(console_font, console_font_size);
	auto saved_colour = g_env.graphics.current_colour;
	g_env.graphics.current_colour = g_env.graphics.current_bg_colour;
	auto f = g_env.fonts.get_glyph_x(console_font, console_font_size, ' ');
	g_env.graphics.rectangle(get_cursor_x() + margin, get_cursor_y(), get_cursor_x() + margin + f->sc_width, get_cursor_y() + font_row_height);
	g_env.graphics.current_colour = saved_colour;
}
