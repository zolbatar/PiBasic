#define _GLIBCXX_USE_C99 1
#define _CRT_SECURE_NO_WARNINGS
#include "debugger.h"
#include "../environment.h"
#include "../vm/vm.h"
#include <stdlib.h>

extern Environment g_env;
extern VM* g_vm;
const int debugger_height = 30;
const int open_height = 300;
const int debugger_lines = 11;
const int disassembly_font = 1;
const int prop_font = 10;
bool debugger_open = false;
const int menu_font = 11;

Debugger::Debugger()
{
    if (debugger_open)
        return;
    debugger_open = true;

    // Wait until not pressed
    while (g_env.graphics.inkey(-31)) {
        g_env.graphics.poll();
    }

    // Save the current screen
    g_env.graphics.cache();
    auto x = g_env.graphics.get_cursor_x();
    auto y = g_env.graphics.get_cursor_y();
    auto saved_colour = g_env.graphics.current_colour;

    debugger_options(-1, 0);
    while (true) {
        g_env.graphics.poll();
        if (g_env.graphics.inkey(-17)) {
            exit(0);
        } else if (g_env.graphics.inkey(-114)) {
            // F1
            debugger_disassembly();
        } else if (g_env.graphics.inkey(-115)) {
            // F2
            debugger_variables();
        } else if (g_env.graphics.inkey(-120)) {
            // F9
            debugger_manual();
        } else if (g_env.graphics.inkey(-31)) {
            // F10
            g_env.graphics.restore();

            // Wait until not pressed
            while (g_env.graphics.inkey(-31)) {
                g_env.graphics.poll();
            }

            g_env.graphics.set_cursor_x(x);
            g_env.graphics.set_cursor_y(y);
            g_env.graphics.current_colour = saved_colour;

            debugger_open = false;
            return;
        } else if (g_env.graphics.inkey(-117)) {
            // F5
        }
    }
}

void Debugger::debugger_options(int selected, int open_mode)
{
    int height = 0;
    if (open_mode == 1) {
        height = open_height;
    } else if (open_mode == 2) {
        height = g_env.graphics.get_actual_height() - debugger_height;
    }
    g_env.graphics.colour(40, 40, 40);
    g_env.graphics.rectangle(0, g_env.graphics.get_actual_height() - debugger_height - height, g_env.graphics.get_actual_width() - 1, g_env.graphics.get_actual_height() - height - 1);
    if (open_mode != 2) {
        g_env.graphics.colour(128, 128, 128);
        g_env.graphics.line(0, g_env.graphics.get_actual_height() - debugger_height - height, g_env.graphics.get_actual_width() - 1, g_env.graphics.get_actual_height() - debugger_height - height);
    }
    if (open_mode != 0) {
        g_env.graphics.colour(10, 10, 10);
        g_env.graphics.rectangle(0, g_env.graphics.get_actual_height() - height - 1, g_env.graphics.get_actual_width(), g_env.graphics.get_actual_height() - 1);
    }
    g_env.graphics.print_text(console_font, "", 0, g_env.graphics.get_actual_height() - debugger_height + 3 - height);
    debugger_prompt("F1", "Disassembly", selected == 0);
    debugger_prompt("F2", "Variables", selected == 1);
    //    debugger_prompt("F3", "Trace Log", selected == 2);
    //    debugger_prompt("F6", "Step", false);
    debugger_prompt("F9", "Manual", selected == 8);
    debugger_prompt("F10", "Continue", false);
    debugger_prompt("Q", "Quit", false);
}

void Debugger::debugger_variables()
{
    int selected = 0;
    bool rerender = true;
    int max = 0;
    while (true) {
        if (rerender) {
            debugger_options(1, 1);
            g_env.graphics.print_text(disassembly_font, "\r\r", -1, -1);

            // Count number of ACTUAL local and variables (not just constants)
            std::vector<Boxed*> dis_globals;
            for (auto it = g_vm->helper_variables().get_variables().begin(); it != g_vm->helper_variables().get_variables().end(); ++it) {
                if (!(*it).constant) {
                    dis_globals.push_back(&(*it));
                }
            }
            std::vector<Boxed*> dis_locals;
            for (auto it = g_vm->helper_variables().get_locals().begin(); it != g_vm->helper_variables().get_locals().end(); ++it) {
                if (!(*it).constant) {
                    dis_locals.push_back(&(*it));
                }
            }

            // Show number of variables
            g_env.graphics.colour(128, 128, 128);
            g_env.graphics.print_text(disassembly_font, "Globals : ", -1, -1);
            g_env.graphics.colour(255, 255, 255);
            g_env.graphics.print_text(disassembly_font, std::to_string(dis_globals.size()), -1, -1);
            g_env.graphics.colour(128, 128, 128);
            g_env.graphics.print_text(disassembly_font, ", Locals: ", -1, -1);
            g_env.graphics.colour(255, 255, 255);
            g_env.graphics.print_text(disassembly_font, std::to_string(dis_locals.size()), -1, -1);
            g_env.graphics.print_text(disassembly_font, "\r\r", -1, -1);

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
                        g_env.graphics.print_text(disassembly_font, "-> ", -1, -1);
                    } else {
                        g_env.graphics.print_text(disassembly_font, "   ", -1, -1);
                    }

                    // G or L
                    g_env.graphics.colour(255, 0, 0);
                    g_env.graphics.print_text(disassembly_font, on_local ? "L " : "G ", -1, -1);

                    // Type
                    g_env.graphics.colour(0, 255, 0);
                    switch (v->type) {
                    case Type::INTEGER:
                        g_env.graphics.print_text(disassembly_font, "INTEGER       ", -1, -1);
                        break;
                    case Type::FLOAT:
                        g_env.graphics.print_text(disassembly_font, "FLOAT         ", -1, -1);
                        break;
                    case Type::STRING:
                        g_env.graphics.print_text(disassembly_font, "STRING        ", -1, -1);
                        break;
                    case Type::INTEGER_ARRAY:
                        g_env.graphics.print_text(disassembly_font, "INTEGER ARRAY ", -1, -1);
                        break;
                    case Type::FLOAT_ARRAY:
                        g_env.graphics.print_text(disassembly_font, "FLOAT ARRAY   ", -1, -1);
                        break;
                    case Type::STRING_ARRAY:
                        g_env.graphics.print_text(disassembly_font, "STRING ARRAY  ", -1, -1);
                        break;
                    case Type::TYPE:
                        g_env.graphics.print_text(disassembly_font, "TYPE          ", -1, -1);
                        break;
                    case Type::TYPE_ARRAY:
                        g_env.graphics.print_text(disassembly_font, "TYPE ARRAY    ", -1, -1);
                        break;
                    }

                    // Name
                    g_env.graphics.colour(0, 0, 255);
                    g_env.graphics.print_text(disassembly_font, v->name, -1, -1);
                    int a = 25 - static_cast<int>(v->name.length());
                    for (int i = 0; i < a; i++) {
                        g_env.graphics.print_text(disassembly_font, " ", -1, -1);
                    }

                    // Value
                    g_env.graphics.colour(255, 255, 255);
                    switch (v->type) {
                    case Type::INTEGER:
                        g_env.graphics.print_text(disassembly_font, std::to_string(v->value_int), -1, -1);
                        break;
                    case Type::FLOAT:
                        g_env.graphics.print_text(disassembly_font, std::to_string(v->value_float), -1, -1);
                        break;
                    case Type::STRING:
                        g_env.graphics.print_text(disassembly_font, v->value_string, -1, -1);
                        break;
                    case Type::INTEGER_ARRAY:
                        g_env.graphics.print_text(disassembly_font, std::to_string(v->value_int_array.size()) + " entries", -1, -1);
                        break;
                    case Type::FLOAT_ARRAY:
                        g_env.graphics.print_text(disassembly_font, std::to_string(v->value_float_array.size()) + " entries", -1, -1);
                        break;
                    case Type::STRING_ARRAY:
                        g_env.graphics.print_text(disassembly_font, std::to_string(v->value_string_array.size()) + " entries", -1, -1);
                        break;
                    case Type::TYPE:
                        g_env.graphics.print_text(disassembly_font, "** TYPE VALUE **", -1, -1);
                        break;
                    case Type::TYPE_ARRAY:
                        g_env.graphics.print_text(disassembly_font, "** TYPE ARRAY **", -1, -1);
                        break;
                    }

                    g_env.graphics.print_text(disassembly_font, "\r", -1, -1);
                    shown++;
                }
                index++;
                skip--;
            }
            rerender = false;
            g_env.graphics.flip(true);
        }

        g_env.graphics.poll();
        if (g_env.graphics.inkey(-17)) {
            exit(0);
        } else if (g_env.graphics.inkey(-58)) {
            while (g_env.graphics.inkey(-58))
                g_env.graphics.poll();
            selected--;
            rerender = true;
        } else if (g_env.graphics.inkey(-42)) {
            while (g_env.graphics.inkey(-42))
                g_env.graphics.poll();
            selected++;
            rerender = true;
        } else if (g_env.graphics.inkey(-64)) {
            while (g_env.graphics.inkey(-64))
                g_env.graphics.poll();
            selected -= debugger_lines;
            rerender = true;
        } else if (g_env.graphics.inkey(-79)) {
            while (g_env.graphics.inkey(-79))
                g_env.graphics.poll();
            selected += debugger_lines;
            rerender = true;
        } else if (g_env.graphics.inkey(-114) || g_env.graphics.inkey(-31) || g_env.graphics.inkey(-120)) {
            return;
        }
        if (selected < 0)
            selected = 0;
        if (selected >= max)
            selected = max - 1;
    }
}

void Debugger::debugger_disassembly()
{
    // Load all source files
    std::vector<std::vector<std::string>> line_cache;
    char line[1024];
    auto files = g_vm->get_filenames();
    for (auto it = files.begin(); it != files.end(); ++it) {
        std::vector<std::string> ll;
        FILE* fp = fopen((*it).c_str(), "r");
        while (true) {
            if (fgets(line, 1024, fp) != NULL) {
                ll.push_back(std::string(line));
            } else {
                fclose(fp);
                line_cache.push_back(std::move(ll));
                break;
            }
        }
    }

    // Get disassembly
    auto dis = disassemble_entire_file();

    UINT32 pos = g_vm->helper_bytecodes().pc - 1;
    bool rerender = true;
    while (true) {
        if (rerender) {
            debugger_options(0, 1);
            g_env.graphics.print_text(disassembly_font, "\r\r", -1, -1);

            if (pos >= 0 && pos < g_vm->helper_bytecodes().size) {
                // Show current file and PC
                auto cur_bc = g_vm->helper_bytecodes().get_bytecode(pos);
                g_env.graphics.colour(128, 128, 128);
                g_env.graphics.print_text(disassembly_font, "File: ", -1, -1);
                g_env.graphics.colour(255, 255, 255);
                g_env.graphics.print_text(disassembly_font, cur_bc.filename(), -1, -1);
                g_env.graphics.print_text(disassembly_font, "\r", -1, -1);
                g_env.graphics.colour(128, 128, 128);
                g_env.graphics.print_text(disassembly_font, "Line: ", -1, -1);
                g_env.graphics.colour(255, 255, 255);
                g_env.graphics.print_text(disassembly_font, std::to_string(cur_bc.line_number), -1, -1);
                g_env.graphics.print_text(disassembly_font, " ", -1, -1);
                g_env.graphics.colour(255, 255, 255);
                auto ff = line_cache[cur_bc.file_number];
                auto p = cur_bc.line_number - 1;
                if (p >= ff.size()) {
                    p = static_cast<int>(ff.size()) - 1;
                }
                g_env.graphics.print_text(disassembly_font, ff[p], -1, -1);
                g_env.graphics.print_text(disassembly_font, "\r\r", -1, -1);

                // Bytecode output
                g_env.graphics.colour(180, 180, 180);
                for (UINT32 i = 0; i < debugger_lines; i++) {
                    if (pos + i < g_vm->helper_bytecodes().size) {
                        auto bc = g_vm->helper_bytecodes().get_bytecode(pos + i);
                        if (pos + i == g_vm->helper_bytecodes().pc - 1) {
                            g_env.graphics.colour(255, 255, 0);
                            g_env.graphics.print_text(disassembly_font, "-> ", -1, -1);
                        } else {
                            g_env.graphics.print_text(disassembly_font, "   ", -1, -1);
                        }
                        g_env.graphics.colour(255, 255, 255);
                        auto s = disassemble_instruction(bc, pos + i);
                        g_env.graphics.colour(255, 255, 255);
                        g_env.graphics.print_text(disassembly_font, s.header, -1, -1);
                        g_env.graphics.colour(255, 255, 0);
                        g_env.graphics.print_text(disassembly_font, s.opcode, -1, -1);

                        // Pad out with near invisible dots
                        g_env.graphics.colour(40, 40, 40);
                        int a = 15 - static_cast<int>(s.opcode.length());
                        for (int i = 0; i < a; i++) {
                            g_env.graphics.print_text(disassembly_font, ".", -1, -1);
                        }
                        g_env.graphics.colour(100, 0, 255);
                        g_env.graphics.print_text(disassembly_font, s.type, -1, -1);

                        g_env.graphics.colour(40, 40, 40);
                        a = 15 - static_cast<int>(s.type.length());
                        for (int i = 0; i < a; i++) {
                            g_env.graphics.print_text(disassembly_font, ".", -1, -1);
                        }

                        g_env.graphics.colour(0, 100, 255);
                        g_env.graphics.print_text(disassembly_font, s.operand, -1, -1);

                        g_env.graphics.print_text(prop_font, "\r", -1, -1);
                    }
                }
            }
            rerender = false;
        }

        g_env.graphics.poll();
        if (g_env.graphics.inkey(-17)) {
            exit(0);
        } else if (g_env.graphics.inkey(-58)) {
            while (g_env.graphics.inkey(-58))
                g_env.graphics.poll();
            pos--;
            rerender = true;
        } else if (g_env.graphics.inkey(-42)) {
            while (g_env.graphics.inkey(-42))
                g_env.graphics.poll();
            pos++;
            rerender = true;
        } else if (g_env.graphics.inkey(-64)) {
            while (g_env.graphics.inkey(-64))
                g_env.graphics.poll();
            pos -= debugger_lines;
            rerender = true;
        } else if (g_env.graphics.inkey(-79)) {
            while (g_env.graphics.inkey(-79))
                g_env.graphics.poll();
            pos += debugger_lines;
            rerender = true;
        } else if (g_env.graphics.inkey(-115) || g_env.graphics.inkey(-31) || g_env.graphics.inkey(-120)) {
            return;
        }
        if (pos < 0) {
            pos = 0;
        }
        if (pos > g_vm->helper_bytecodes().size) {
            pos = g_vm->helper_bytecodes().size - 1;
        }
    }
}

void Debugger::debugger_prompt(std::string key, std::string function, bool active)
{
    if (active) {
        g_env.graphics.colour(255, 255, 0);
    } else {
        g_env.graphics.colour(160, 160, 0);
    }
    g_env.graphics.print_text(menu_font, key, -1, -1);
    g_env.graphics.print_text(menu_font, " ", -1, -1);
    if (active) {
        g_env.graphics.colour(255, 255, 255);
    } else {
        g_env.graphics.colour(160, 160, 160);
    }
    g_env.graphics.print_text(menu_font, function, -1, -1);
    g_env.graphics.print_text(menu_font, "    ", -1, -1);
}