#pragma once
#include <chrono>
#include "../types.h"

const int CURSOR_BLINK_TIME = 250;

class Text {
public:
	void poll();
	void cls() {
		last_cursor_x = 0;
		last_cursor_y = 0;
	}
	int get_cursor_x() { return last_cursor_x; }
	int get_cursor_y() { return last_cursor_y; }
	void set_cursor_x(int x) { last_cursor_x = x; }
	void set_cursor_y(int y) { last_cursor_y = y; }
	void cursor_back(int typeface, int size);
	void delete_character(int typeface, int size);
	void print_character(int typeface, int size, char c, int* cursor_x, int* cursor_y);
	void print_console(VM_STRING text);
	void print_text(int typeface, int size, VM_STRING text, int cursor_x, int cursor_y);
	void print_text_centre(int typeface, int size, VM_STRING text, int cursor_x, int cursor_y);
	void print_text_right(int typeface, int size, VM_STRING text, int cursor_x, int cursor_y);
	int string_width(int typeface, int size, VM_STRING text);
	void set_margin(int margin);
	int get_margin() { return margin; }
	void cursor_on() {
		cursor_enabled = true; last_cursor_blink = std::chrono::high_resolution_clock::now();
	}
	void cursor_off() { cursor_enabled = false; }
	bool is_cursor_enabled() { return cursor_enabled; }
	void draw_cursor();
	void undraw_cursor();
	void hide_cursors();
	void show_cursors();

private:
	std::chrono::high_resolution_clock::time_point last_cursor_blink;
	int margin = 0;
	bool cursor_enabled = false;
	bool blink_state = true;
	int last_cursor_x = 0, last_cursor_y = 0;
};