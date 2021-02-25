#include "manual/manual.h"
#include "../debugger/debugger.h"
#include "../environment.h"
#include "../graphics/graphics.h"
#include "../vm/vm.h"

extern Environment g_env;

void create_manual_2d();
void create_manual_3d();
void create_manual_keyboardmouse();
void create_manual_io();
void create_manual_looping();
void create_manual_maths();
void create_manual_fn_proc();
void create_manual_variables_types();
void create_manual_string();
void create_manual_debugging();
void create_manual_boolean();
void create_manual_operators();

int column = 0;
std::vector<ManualKeyword> keywords;
void initialise_manual()
{
	create_manual_2d();
	create_manual_3d();
	create_manual_keyboardmouse();
	create_manual_maths();
	create_manual_io();
	create_manual_looping();
	create_manual_fn_proc();
	create_manual_variables_types();
	create_manual_string();
	create_manual_debugging();
	create_manual_boolean();
	create_manual_operators();
}

int Debugger::debugger_manual_keyword_section(KeywordCategory category, int* index, int selected, std::string* selected_keyword)
{
	g_env.graphics.colour(0, 128, 255);
	g_env.graphics.print_text(fixed_font, fixed_font_size, "   ", column * manual_column_width, -1);
	switch (category) {
	case KeywordCategory::OPERATORS:
		g_env.graphics.print_text(manual_font, manual_font_size, "Operators\r", -1, -1);
		break;
	case KeywordCategory::KEYBOARD_AND_MOUSE:
		g_env.graphics.print_text(manual_font, manual_font_size, "Keyboard & Mouse\r", -1, -1);
		break;
	case KeywordCategory::MATHS_AND_NUMBERS:
		g_env.graphics.print_text(manual_font, manual_font_size, "Maths & Numbers\r", -1, -1);
		break;
	case KeywordCategory::FILE_IO:
		g_env.graphics.print_text(manual_font, manual_font_size, "File I/O\r", -1, -1);
		break;
	case KeywordCategory::GRAPHICS_2D:
		g_env.graphics.print_text(manual_font, manual_font_size, "2D Graphics\r", -1, -1);
		break;
	case KeywordCategory::GRAPHICS_3D:
		g_env.graphics.print_text(manual_font, manual_font_size, "3D Graphics\r", -1, -1);
		break;
	case KeywordCategory::CONDITIONAL_LOOPING:
		g_env.graphics.print_text(manual_font, manual_font_size, "Conditional & Looping\r", -1, -1);
		break;
	case KeywordCategory::FN_AND_PROC:
		g_env.graphics.print_text(manual_font, manual_font_size, "Functions and Procedures\r", -1, -1);
		break;
	case KeywordCategory::VARIABLES_TYPES:
		g_env.graphics.print_text(manual_font, manual_font_size, "Variables, Structured Types and Data\r", -1, -1);
		break;
	case KeywordCategory::STRING:
		g_env.graphics.print_text(manual_font, manual_font_size, "Strings & Text Output\r", -1, -1);
		break;
	case KeywordCategory::DEBUGGING:
		g_env.graphics.print_text(manual_font, manual_font_size, "Debugging & Execution\r", -1, -1);
		break;
	case KeywordCategory::BOOLEAN:
		g_env.graphics.print_text(manual_font, manual_font_size, "Boolean Logic\r", -1, -1);
		break;
	}

	int section_count = 0;
	for (auto it = keywords.begin(); it != keywords.end(); ++it) {
		if ((*it).category == category) {
			section_count++;
			if (*index == selected) {
				*selected_keyword = (*it).keywordLong;
				g_env.graphics.colour(255, 255, 0);
				g_env.graphics.print_text(fixed_font, fixed_font_size, "->", column * manual_column_width, -1);
			}
			else {
				g_env.graphics.print_text(fixed_font, fixed_font_size, "  ", column * manual_column_width, -1);
			}
			if ((*it).description.length() == 0) {
				g_env.graphics.colour(255, 0, 0);
				g_env.graphics.print_text(fixed_font, fixed_font_size, "*", -1, -1);
			}
			else {
				g_env.graphics.print_text(fixed_font, fixed_font_size, " ", -1, -1);
			}
			g_env.graphics.colour(255, 255, 255);
			auto kw = (*it).keywordLong;
			g_env.graphics.print_text(fixed_font, fixed_font_size, kw, -1, -1);
			int a = 15 - static_cast<int>(kw.length());
			for (int i = 0; i < a; i++) {
				kw = " " + kw;
			}
			g_env.graphics.print_text(fixed_font, fixed_font_size, "\r", -1, -1);

			// Are we out of space?
			if (g_env.graphics.get_cursor_y() > static_cast<int>(g_env.graphics.get_actual_height()) - 100) {
				column++;
				g_env.graphics.print_text(fixed_font, fixed_font_size, "", column * manual_column_width, 50);
			}

			(*index)++;
		}
	}
	g_env.graphics.print_text(fixed_font, fixed_font_size, "\r", -1, -1);
	return section_count;
}

void Debugger::debugger_manual()
{
	// Init manual?
	if (keywords.size() == 0) {
		initialise_manual();
	}
	int selected = 0;
	int max_sections = 13;
	int sections_indexes[100];
	std::string selected_keyword = "";
	int max = static_cast<int>(keywords.size());
	bool updated = true;
	while (true) {
		int selected_section = 0;
		if (updated) {
			debugger_options(8, 2);

			g_env.graphics.colour(255, 255, 255);
			g_env.graphics.print_text(fixed_font, fixed_font_size, "Use Up/Down/PgUp/PgDown & Enter  ", 20, g_env.graphics.get_actual_height() - 30);
			g_env.graphics.colour(255, 0, 0);
			g_env.graphics.print_text(fixed_font, fixed_font_size, "* ", -1, -1);
			g_env.graphics.colour(255, 255, 0);
			g_env.graphics.print_text(manual_font, manual_font_size, "No help available yet", -1, -1);

			g_env.graphics.print_text(manual_font, manual_font_size, "", -1, 40);
			int index = 0;
			column = 0;
			g_env.graphics.print_text(fixed_font, fixed_font_size, "", 0, 50);

			sections_indexes[0] = 0;
			int c = debugger_manual_keyword_section(KeywordCategory::BOOLEAN, &index, selected, &selected_keyword);
			sections_indexes[1] = c;
			c += debugger_manual_keyword_section(KeywordCategory::CONDITIONAL_LOOPING, &index, selected, &selected_keyword);
			sections_indexes[2] = c;
			c += debugger_manual_keyword_section(KeywordCategory::DEBUGGING, &index, selected, &selected_keyword);
			sections_indexes[3] = c;
			c += debugger_manual_keyword_section(KeywordCategory::FILE_IO, &index, selected, &selected_keyword);
			sections_indexes[4] = c;
			c += debugger_manual_keyword_section(KeywordCategory::FN_AND_PROC, &index, selected, &selected_keyword);
			sections_indexes[5] = c;
			c += debugger_manual_keyword_section(KeywordCategory::GRAPHICS_2D, &index, selected, &selected_keyword);
			sections_indexes[6] = c;
			c += debugger_manual_keyword_section(KeywordCategory::GRAPHICS_3D, &index, selected, &selected_keyword);
			sections_indexes[7] = c;
			c += debugger_manual_keyword_section(KeywordCategory::KEYBOARD_AND_MOUSE, &index, selected, &selected_keyword);
			sections_indexes[8] = c;
			c += debugger_manual_keyword_section(KeywordCategory::MATHS_AND_NUMBERS, &index, selected, &selected_keyword);
			sections_indexes[9] = c;
			c += debugger_manual_keyword_section(KeywordCategory::STRING, &index, selected, &selected_keyword);
			sections_indexes[10] = c;
			c += debugger_manual_keyword_section(KeywordCategory::VARIABLES_TYPES, &index, selected, &selected_keyword);
			sections_indexes[11] = c;
			c += debugger_manual_keyword_section(KeywordCategory::OPERATORS, &index, selected, &selected_keyword);
			sections_indexes[12] = c;

			// What section?
			selected_section = 0;
			for (int i = 0; i < max_sections - 1; i++) {
				if (selected >= sections_indexes[i]) {
					selected_section = i;
				}
			}
			updated = false;
		}

		g_env.graphics.poll();
		if (g_env.graphics.inkey(-17)) {
			exit(0);
		}
		else if (g_env.graphics.inkey(-58)) {
			while (g_env.graphics.inkey(-58))
				g_env.graphics.poll();
			selected--;
			updated = true;
		}
		else if (g_env.graphics.inkey(-42)) {
			while (g_env.graphics.inkey(-42))
				g_env.graphics.poll();
			selected++;
			updated = true;
		}
		else if (g_env.graphics.inkey(-64)) {
			while (g_env.graphics.inkey(-64))
				g_env.graphics.poll();
			if (selected_section > 0) {
				selected_section--;
				selected = sections_indexes[selected_section];
				updated = true;
			}
		}
		else if (g_env.graphics.inkey(-79)) {
			while (g_env.graphics.inkey(-79))
				g_env.graphics.poll();
			if (selected_section < (max_sections - 2)) {
				selected_section++;
				selected = sections_indexes[selected_section];
				updated = true;
			}
		}
		else if (g_env.graphics.inkey(-74)) {
			// RETURN
			debugger_manual_keyword(selected_keyword);
			updated = true;
		}
		else if (g_env.graphics.inkey(-114) || g_env.graphics.inkey(-115) || g_env.graphics.inkey(-116) || g_env.graphics.inkey(-31)) {
			g_env.graphics.restore();
			return;
		}
		if (selected < 0)
			selected = 0;
		if (selected >= max)
			selected = max - 1;
	}
}

void Debugger::debugger_manual_keyword(std::string keyword)
{
	// Find keyword
	ManualKeyword* kw = &keywords[0];
	for (auto it = keywords.begin(); it != keywords.end(); ++it) {
		if ((*it).keywordLong.compare(keyword) == 0) {
			kw = &(*it);
		}
	}

	debugger_options(8, 2);
	g_env.graphics.print_text(manual_font, manual_font_size, "\r\r", -1, -1);
	g_env.graphics.set_margin(20);

	// Keyword
	g_env.graphics.colour(255, 255, 255);
	g_env.graphics.print_text(fixed_font, fixed_font_size + 10, kw->keywordLong + " ", -1, -1);

	// Category
	g_env.graphics.colour(255, 80, 0);
	switch (kw->category) {
	case KeywordCategory::KEYBOARD_AND_MOUSE:
		g_env.graphics.print_text(manual_font, manual_font_size + 10, "(Keyboard & Mouse)\r\r", -1, -1);
		break;
	case KeywordCategory::MATHS_AND_NUMBERS:
		g_env.graphics.print_text(manual_font, manual_font_size + 10, "(Maths & Numbers)\r\r", -1, -1);
		break;
	case KeywordCategory::GRAPHICS_2D:
		g_env.graphics.print_text(manual_font, manual_font_size + 10, "(2D Graphics)\r\r", -1, -1);
		break;
	case KeywordCategory::GRAPHICS_3D:
		g_env.graphics.print_text(manual_font, manual_font_size + 10, "(3D Graphics)\r\r", -1, -1);
		break;
	case KeywordCategory::OPERATORS:
		g_env.graphics.print_text(manual_font, manual_font_size + 10, "(Operators)\r\r", -1, -1);
		break;
	case KeywordCategory::FILE_IO:
		g_env.graphics.print_text(manual_font, manual_font_size + 10, "(File I/O)\r\r", -1, -1);
		break;
	case KeywordCategory::CONDITIONAL_LOOPING:
		g_env.graphics.print_text(manual_font, manual_font_size + 10, "(Conditional & Looping)\r\r", -1, -1);
		break;
	case KeywordCategory::FN_AND_PROC:
		g_env.graphics.print_text(manual_font, manual_font_size + 10, "(Functions and Procedures)\r\r", -1, -1);
		break;
	case KeywordCategory::VARIABLES_TYPES:
		g_env.graphics.print_text(manual_font, manual_font_size + 10, "(Variables, Structured Types and Data)\r\r", -1, -1);
		break;
	case KeywordCategory::STRING:
		g_env.graphics.print_text(manual_font, manual_font_size + 10, "(Strings & Text Output)\r\r", -1, -1);
		break;
	case KeywordCategory::DEBUGGING:
		g_env.graphics.print_text(manual_font, manual_font_size + 10, "(Debugging & Execution)\r\r", -1, -1);
		break;
	case KeywordCategory::BOOLEAN:
		g_env.graphics.print_text(manual_font, manual_font_size + 10, "(Boolean Logic)\r\r", -1, -1);
		break;
	}

	// Description
	if (kw->description.length() > 0) {
		g_env.graphics.colour(128, 128, 128);
		g_env.graphics.print_text(manual_font, manual_font_size, "Description:\r\r", -1, -1);
		g_env.graphics.colour(255, 255, 255);
		g_env.graphics.print_text(manual_font, manual_font_size, kw->description, -1, -1);
		g_env.graphics.print_text(manual_font, manual_font_size, "\r\r", -1, -1);
	}

	// Syntax
	g_env.graphics.colour(128, 128, 128);
	g_env.graphics.print_text(manual_font, manual_font_size, "Syntax:\r\r", -1, -1);
	g_env.graphics.colour(255, 255, 255);
	g_env.graphics.print_text(fixed_font, fixed_font_size, kw->keyword, -1, -1);
	for (auto its = kw->syntax.begin(); its != kw->syntax.end(); ++its) {
		(*its)->render();
	}
	g_env.graphics.print_text(manual_font, manual_font_size, "\r\r", -1, -1);

	// Arguments
	if (kw->arguments.length() > 0) {
		g_env.graphics.colour(128, 128, 128);
		g_env.graphics.print_text(manual_font, manual_font_size, "Arguments:\r\r", -1, -1);
		g_env.graphics.colour(255, 255, 255);
		g_env.graphics.print_text(manual_font, manual_font_size, kw->arguments, -1, -1);
		g_env.graphics.print_text(manual_font, manual_font_size, "\r\r", -1, -1);
	}

	// Result
	if (kw->result.length() > 0) {
		g_env.graphics.colour(128, 128, 128);
		g_env.graphics.print_text(manual_font, manual_font_size, "Result:\r\r", -1, -1);
		g_env.graphics.colour(255, 255, 255);
		g_env.graphics.print_text(manual_font, manual_font_size, kw->result, -1, -1);
		g_env.graphics.print_text(manual_font, manual_font_size, "\r\r", -1, -1);
	}

	// Example
	if (kw->examples.length() > 0) {
		g_env.graphics.colour(128, 128, 128);
		g_env.graphics.print_text(manual_font, manual_font_size, "Examples:\r\r", -1, -1);
		g_env.graphics.colour(255, 255, 255);
		g_env.graphics.print_text(fixed_font, fixed_font_size, kw->examples, -1, -1);
	}

	g_env.graphics.colour(255, 255, 0);
	g_env.graphics.print_text(prop_font, prop_font_size, "\r\r(Hit Space to return)", -1, -1);

	while (true) {
		g_env.graphics.poll();
		g_env.graphics.set_margin(0);
		if (g_env.graphics.inkey(-17)) {
			exit(0);
		}
		else if (g_env.graphics.inkey(-99) || g_env.graphics.inkey(-114) || g_env.graphics.inkey(-115) || g_env.graphics.inkey(-31)) {
			return;
		}
	}
}
