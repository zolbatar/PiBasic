#define _CRT_SECURE_NO_WARNINGS
#include "../environment.h"
#include "../vm/vm.h"
#include "debugger.h"
#include <stdlib.h>

extern bool debugger_open;

void Debugger::debugger_variables()
{
    int selected = 0;
    bool rerender = true;
    int max = 0;
    while (true) {
        if (rerender) {
            debugger_options(1, 1);
            g_env.text.print_text(disassembly_font, disassembly_font_size, "\r\r", -1, -1);

            // Count number of ACTUAL local and variables (not just constants)
            std::vector<Boxed*> dis_globals;
            for (auto it = g_vm->helper_variables().get_variables().begin(); it != g_vm->helper_variables().get_variables().end(); ++it) {
                if (!(*it).is_constant()) {
                    dis_globals.push_back(&(*it));
                }
            }
            std::vector<Boxed*> dis_locals;
            for (auto it = g_vm->helper_variables().get_locals().begin(); it != g_vm->helper_variables().get_locals().end(); ++it) {
                if (!(*it).is_constant()) {
                    dis_locals.push_back(&(*it));
                }
            }

            // Show number of variables
            g_env.graphics.colour(128, 128, 128);
            g_env.text.print_text(disassembly_font, disassembly_font_size, "Globals : ", -1, -1);
            g_env.graphics.colour(255, 255, 255);
            g_env.text.print_text(disassembly_font, disassembly_font_size, std::to_string(dis_globals.size()), -1, -1);
            g_env.graphics.colour(128, 128, 128);
            g_env.text.print_text(disassembly_font, disassembly_font_size, ", Locals: ", -1, -1);
            g_env.graphics.colour(255, 255, 255);
            g_env.text.print_text(disassembly_font, disassembly_font_size, std::to_string(dis_locals.size()), -1, -1);
            g_env.text.print_text(disassembly_font, disassembly_font_size, "\r\r", -1, -1);

            // How many to skip
            int skip = (selected / debugger_lines) * debugger_lines;

            int index = 0;
            bool on_local = true;
            max = static_cast<int>(dis_globals.size() + dis_locals.size());
            int shown = 0;
            while (shown < debugger_lines && index < max) {
                Boxed* v = nullptr;
                if (on_local) {
                    if (index >= dis_locals.size()) {
                        on_local = false;
                        index = 0;
                    } else {
                        v = dis_locals[index];
                    }
                }
                if (!on_local) {
                    if (index < dis_globals.size()) {
                        v = dis_globals[index];
                    }
                }

                if (v != nullptr && skip <= 0) {
                    if (index == selected) {
                        g_env.graphics.colour(255, 255, 0);
                        g_env.text.print_text(disassembly_font, disassembly_font_size, "-> ", -1, -1);
                    } else {
                        g_env.text.print_text(disassembly_font, disassembly_font_size, "   ", -1, -1);
                    }

                    // G or L
                    g_env.graphics.colour(255, 0, 0);
                    g_env.text.print_text(disassembly_font, disassembly_font_size, on_local ? "L " : "G ", -1, -1);

                    // Type
                    g_env.graphics.colour(0, 255, 0);
                    switch (v->get_type()) {
                    case Type::INTEGER:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, "INTEGER       ", -1, -1);
                        break;
                    case Type::FLOAT:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, "REAL          ", -1, -1);
                        break;
                    case Type::STRING:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, "STRING        ", -1, -1);
                        break;
                    case Type::INTEGER_ARRAY:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, "INTEGER ARRAY ", -1, -1);
                        break;
                    case Type::FLOAT_ARRAY:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, "READ ARRAY    ", -1, -1);
                        break;
                    case Type::STRING_ARRAY:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, "STRING ARRAY  ", -1, -1);
                        break;
                    case Type::TYPE:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, "TYPE          ", -1, -1);
                        break;
                    case Type::TYPE_ARRAY:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, "TYPE ARRAY    ", -1, -1);
                        break;
                    }

                    // Name
                    g_env.graphics.colour(0, 0, 255);
                    g_env.text.print_text(disassembly_font, disassembly_font_size, v->get_name(), -1, -1);
                    int a = 25 - static_cast<int>(v->get_name().length());
                    for (int i = 0; i < a; i++) {
                        g_env.text.print_text(disassembly_font, disassembly_font_size, " ", -1, -1);
                    }

                    // Value
                    g_env.graphics.colour(255, 255, 255);
                    switch (v->get_type()) {
                    case Type::INTEGER:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, std::to_string(v->get_integer()), -1, -1);
                        break;
                    case Type::FLOAT:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, std::to_string(v->get_float()), -1, -1);
                        break;
                    case Type::STRING:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, v->get_string(), -1, -1);
                        break;
                    case Type::INTEGER_ARRAY:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, std::to_string(v->get_integer_array_size()) + " entries", -1, -1);
                        break;
                    case Type::FLOAT_ARRAY:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, std::to_string(v->get_float_array_size()) + " entries", -1, -1);
                        break;
                    case Type::STRING_ARRAY:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, std::to_string(v->get_string_array_size()) + " entries", -1, -1);
                        break;
                    case Type::TYPE:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, "** TYPE VALUE **", -1, -1);
                        break;
                    case Type::TYPE_ARRAY:
                        g_env.text.print_text(disassembly_font, disassembly_font_size, "** TYPE ARRAY **", -1, -1);
                        break;
                    }

                    g_env.text.print_text(disassembly_font, disassembly_font_size, "\r", -1, -1);
                    shown++;
                }
                index++;
                skip--;
            }
            rerender = false;
            g_env.graphics.flip(true);
        }

        g_env.graphics.poll();
        if (g_env.input.inkey(-17)) {
            exit(0);
        } else if (g_env.input.inkey(-58)) {
            while (g_env.input.inkey(-58))
                g_env.graphics.poll();
            selected--;
            rerender = true;
        } else if (g_env.input.inkey(-42)) {
            while (g_env.input.inkey(-42))
                g_env.graphics.poll();
            selected++;
            rerender = true;
        } else if (g_env.input.inkey(-64)) {
            while (g_env.input.inkey(-64))
                g_env.graphics.poll();
            selected -= debugger_lines;
            rerender = true;
        } else if (g_env.input.inkey(-79)) {
            while (g_env.input.inkey(-79))
                g_env.graphics.poll();
            selected += debugger_lines;
            rerender = true;
        } else if (g_env.input.inkey(-114) || g_env.input.inkey(-116) || g_env.input.inkey(-31) || g_env.input.inkey(-120)) {
            return;
        }
        if (selected < 0)
            selected = 0;
        if (selected >= max)
            selected = max - 1;
    }
}
