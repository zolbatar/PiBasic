#define _CRT_SECURE_NO_WARNINGS
#include "../environment.h"
#include "../vm/vm.h"
#include "debugger.h"
#include <stdlib.h>
#include <string>

extern bool debugger_open;
extern std::vector<std::string> concat_file_cache;

void Debugger::debugger_disassembly()
{
	// Get disassembly
	auto dis = disassemble_entire_file();

	UINT32 pos = 0;
	bool rerender = true;
	while (true) {
		if (rerender) {
			debugger_options(0, 1);
			g_env.text.print_text(disassembly_font, disassembly_font_size, "\r\r", -1, -1);

			if (pos >= 0 && pos < g_vm->helper_bytecodes().get_size()) {
				// Show current file and PC
				auto cur_bc = g_vm->helper_bytecodes().get_bytecode(pos);
				auto flp = file_and_line_lookup(cur_bc.line_number);
				g_env.graphics.colour(128, 128, 128);
				g_env.text.print_text(disassembly_font, disassembly_font_size, "File: ", -1, -1);
				g_env.graphics.colour(255, 255, 255);
				g_env.text.print_text(disassembly_font, disassembly_font_size, flp.filename, -1, -1);
				g_env.text.print_text(disassembly_font, disassembly_font_size, "\r", -1, -1);
				g_env.graphics.colour(128, 128, 128);
				g_env.text.print_text(disassembly_font, disassembly_font_size, "Line (", -1, -1);
				g_env.graphics.colour(255, 255, 255);
				g_env.text.print_text(disassembly_font, disassembly_font_size, std::to_string(flp.line), -1, -1);
				g_env.graphics.colour(128, 128, 128);
				g_env.text.print_text(disassembly_font, disassembly_font_size, "): ", -1, -1);
				g_env.graphics.colour(255, 255, 255);
				g_env.text.print_text(disassembly_font, disassembly_font_size, concat_file_cache[cur_bc.line_number - 1], -1, -1);
				g_env.text.print_text(disassembly_font, disassembly_font_size, "\r\r", -1, -1);

				// Bytecode output
				g_env.graphics.colour(180, 180, 180);
				for (UINT32 i = 0; i < debugger_lines; i++) {
					if (pos + i < g_vm->helper_bytecodes().get_size()) {
						auto bc = g_vm->helper_bytecodes().get_bytecode(pos + i);
						if (pos + i == g_vm->helper_bytecodes().pc - 1) {
							g_env.graphics.colour(255, 255, 0);
							g_env.text.print_text(disassembly_font, disassembly_font_size, "-> ", -1, -1);
						}
						else {
							g_env.text.print_text(disassembly_font, disassembly_font_size, "   ", -1, -1);
						}
						g_env.graphics.colour(255, 255, 255);
						auto s = disassemble_instruction(bc, pos + i);
						g_env.graphics.colour(255, 255, 255);
						g_env.text.print_text(disassembly_font, disassembly_font_size, s.header, -1, -1);
						g_env.graphics.colour(255, 255, 0);
						g_env.text.print_text(disassembly_font, disassembly_font_size, s.opcode, -1, -1);

						// Pad out with near invisible dots
						g_env.graphics.colour(40, 40, 40);
						int a = 25 - static_cast<int>(s.opcode.length());
						for (int i = 0; i < a; i++) {
							g_env.text.print_text(disassembly_font, disassembly_font_size, " ", -1, -1);
						}
						g_env.graphics.colour(100, 0, 255);
						g_env.text.print_text(disassembly_font, disassembly_font_size, s.type, -1, -1);

						if (s.operand.length() > 0) {
							g_env.graphics.colour(40, 40, 40);
							a = 20 - static_cast<int>(s.type.length());
							for (int i = 0; i < a; i++) {
								g_env.text.print_text(disassembly_font, disassembly_font_size, " ", -1, -1);
							}

							g_env.graphics.colour(0, 100, 255);
							g_env.text.print_text(disassembly_font, disassembly_font_size, s.operand, -1, -1);
						}

						g_env.text.print_text(prop_font, prop_font_size, "\r", -1, -1);
					}
				}
			}
			rerender = false;
		}

		g_env.graphics.poll();
		if (g_env.input.inkey(-17)) {
			exit(0);
		}
		else if (g_env.input.inkey(-58)) {
			while (g_env.input.inkey(-58))
				g_env.graphics.poll();
			if (pos > 0) {
				pos--;
			}
			rerender = true;
		}
		else if (g_env.input.inkey(-42)) {
			while (g_env.input.inkey(-42))
				g_env.graphics.poll();
			pos++;
			rerender = true;
		}
		else if (g_env.input.inkey(-64)) {
			while (g_env.input.inkey(-64))
				g_env.graphics.poll();
			if (pos >= debugger_lines) {
				pos -= debugger_lines;
			}
			rerender = true;
		}
		else if (g_env.input.inkey(-79)) {
			while (g_env.input.inkey(-79))
				g_env.graphics.poll();
			pos += debugger_lines;
			rerender = true;
		}
		else if (g_env.input.inkey(-115) || g_env.input.inkey(-116) || g_env.input.inkey(-31) || g_env.input.inkey(-120)) {
			return;
		}
		if (pos > g_vm->helper_bytecodes().get_size()) {
			pos = g_vm->helper_bytecodes().get_size() - 1;
		}
	}
}
