#define _GLIBCXX_USE_C99 1
#define _CRT_SECURE_NO_WARNINGS
#include "vm.h"
#include <stdlib.h>

const int debugger_height = 30;
const int open_height = 300;
const int debugger_lines = 12;
const int disassembly_font = console_font;
const int prop_font = console_font + 9;
extern std::map<std::string, int> files_index;
bool debugger_open = false;
const int menu_font = 11;

void VM::run_debugger()
{
    if (debugger_open)
        return;
    debugger_open = true;

    // Save the current screen
    graphics->cache();

    debugger_options(-1, 0);
    graphics->flip();
    while (true) {
        graphics->poll();
        if (graphics->inkey(-17)) {
            exit(0);
        } else if (graphics->inkey(-114)) {
            // F1
            debugger_disassembly();
        } else if (graphics->inkey(-115)) {
            // F2
            debugger_variables();
        } else if (graphics->inkey(-120)) {
            // F9
            debugger_manual();
        } else if (graphics->inkey(-31)) {
            // F10
            graphics->restore();
            graphics->flip();
            debugger_open = false;
            return;
        } else if (graphics->inkey(-117)) {
            // F5
        }
    }
}

void VM::debugger_options(int selected, int open_mode)
{
    int height = 0;
    if (open_mode == 1) {
        height = open_height;
    } else if (open_mode == 2) {
        height = graphics->get_actual_height() - debugger_height;
    }
    graphics->colour(40, 40, 40);
    graphics->rectangle(0, graphics->get_actual_height() - debugger_height - height, graphics->get_actual_width() - 1, graphics->get_actual_height() - height - 1);
    if (open_mode != 2) {
        graphics->colour(128, 128, 128);
        graphics->line(0, graphics->get_actual_height() - debugger_height - height, graphics->get_actual_width() - 1, graphics->get_actual_height() - debugger_height - height);
    }
    if (open_mode != 0) {
        graphics->colour(10, 10, 10);
        graphics->rectangle(0, graphics->get_actual_height() - height - 1, graphics->get_actual_width(), graphics->get_actual_height() - 1);
    }
    graphics->print_text(console_font, "", 0, graphics->get_actual_height() - debugger_height + 3 - height);
    debugger_prompt("F1", "Disassembly", selected == 0);
    debugger_prompt("F2", "Variables", selected == 1);
    //    debugger_prompt("F3", "Trace Log", selected == 2);
    //    debugger_prompt("F6", "Step", false);
    debugger_prompt("F9", "Manual", selected == 8);
    debugger_prompt("F10", "Continue", false);
    debugger_prompt("Q", "Quit", false);
}

void VM::debugger_variables()
{
    int selected = 0;
    while (true) {
        debugger_options(1, 1);
        graphics->print_text(disassembly_font, "\r\r", -1, -1);

        // Count number of ACTUAL local and variables (not just constants)
        std::vector<Boxed*> dis_globals;
        for (auto it = variables.begin(); it != variables.end(); ++it) {
            if (!(*it).constant) {
                dis_globals.push_back(&(*it));
            }
        }
        std::vector<Boxed*> dis_locals;
        for (auto it = locals->begin(); it != locals->end(); ++it) {
            if (!(*it).constant) {
                dis_locals.push_back(&(*it));
            }
        }

        // Show number of variables
        graphics->colour(128, 128, 128);
        graphics->print_text(disassembly_font, "Globals : ", -1, -1);
        graphics->colour(255, 255, 255);
        graphics->print_text(disassembly_font, std::to_string(dis_globals.size()), -1, -1);
        graphics->colour(128, 128, 128);
        graphics->print_text(disassembly_font, ", Locals: ", -1, -1);
        graphics->colour(255, 255, 255);
        graphics->print_text(disassembly_font, std::to_string(dis_locals.size()), -1, -1);
        graphics->print_text(disassembly_font, "\r\r", -1, -1);

        // How many to skip
        int skip = (selected / debugger_lines) * debugger_lines;

        int index = 0;
        bool on_local = true;
        int max = static_cast<int>(dis_globals.size() + dis_locals.size());
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
                    graphics->colour(255, 255, 0);
                    graphics->print_text(disassembly_font, "-> ", -1, -1);
                } else {
                    graphics->print_text(disassembly_font, "   ", -1, -1);
                }

                // G or L
                graphics->colour(255, 0, 0);
                graphics->print_text(disassembly_font, on_local ? "L " : "G ", -1, -1);

                // Type
                graphics->colour(0, 255, 0);
                switch (v->type) {
                case Type::INTEGER:
                    graphics->print_text(disassembly_font, "INTEGER       ", -1, -1);
                    break;
                case Type::REAL:
                    graphics->print_text(disassembly_font, "FLOAT         ", -1, -1);
                    break;
                case Type::STRING:
                    graphics->print_text(disassembly_font, "STRING        ", -1, -1);
                    break;
                case Type::INTEGER_ARRAY:
                    graphics->print_text(disassembly_font, "INTEGER ARRAY ", -1, -1);
                    break;
                case Type::REAL_ARRAY:
                    graphics->print_text(disassembly_font, "FLOAT ARRAY   ", -1, -1);
                    break;
                case Type::STRING_ARRAY:
                    graphics->print_text(disassembly_font, "STRING ARRAY  ", -1, -1);
                    break;
                case Type::TYPE:
                    graphics->print_text(disassembly_font, "TYPE          ", -1, -1);
                    break;
                case Type::TYPE_ARRAY:
                    graphics->print_text(disassembly_font, "TYPE ARRAY    ", -1, -1);
                    break;
                }

                // Name
                graphics->colour(0, 0, 255);
                graphics->print_text(disassembly_font, v->name, -1, -1);
                int a = 25 - static_cast<int>(v->name.length());
                for (int i = 0; i < a; i++) {
                    graphics->print_text(disassembly_font, " ", -1, -1);
                }

                // Value
                graphics->colour(255, 255, 255);
                switch (v->type) {
                case Type::INTEGER:
                    graphics->print_text(disassembly_font, std::to_string(v->value_int), -1, -1);
                    break;
                case Type::REAL:
                    graphics->print_text(disassembly_font, std::to_string(v->value_float), -1, -1);
                    break;
                case Type::STRING:
                    graphics->print_text(disassembly_font, v->value_string, -1, -1);
                    break;
                case Type::INTEGER_ARRAY:
                    graphics->print_text(disassembly_font, std::to_string(v->value_int_array.size()) + " entries", -1, -1);
                    break;
                case Type::REAL_ARRAY:
                    graphics->print_text(disassembly_font, std::to_string(v->value_float_array.size()) + " entries", -1, -1);
                    break;
                case Type::STRING_ARRAY:
                    graphics->print_text(disassembly_font, std::to_string(v->value_string_array.size()) + " entries", -1, -1);
                    break;
                case Type::TYPE:
                    graphics->print_text(disassembly_font, "** TYPE VALUE **", -1, -1);
                    break;
                case Type::TYPE_ARRAY:
                    graphics->print_text(disassembly_font, "** TYPE ARRAY **", -1, -1);
                    break;
                }

                graphics->print_text(disassembly_font, "\r", -1, -1);
                shown++;
            }
            index++;
            skip--;
        }

        graphics->flip();
        graphics->poll();
        if (graphics->inkey(-17)) {
            exit(0);
        } else if (graphics->inkey(-58)) {
            while (graphics->inkey(-58))
                graphics->poll();
            selected--;
        } else if (graphics->inkey(-42)) {
            while (graphics->inkey(-42))
                graphics->poll();
            selected++;
        } else if (graphics->inkey(-64)) {
            while (graphics->inkey(-64))
                graphics->poll();
            selected -= debugger_lines;
        } else if (graphics->inkey(-79)) {
            while (graphics->inkey(-79))
                graphics->poll();
            selected += debugger_lines;
        } else if (graphics->inkey(-114) || graphics->inkey(-31) || graphics->inkey(-120)) {
            return;
        }
        if (selected < 0)
            selected = 0;
        if (selected >= max)
            selected = max - 1;
    }
}

void VM::debugger_disassembly()
{
    // Load all source files
    std::vector<std::vector<std::string>> line_cache;
    std::vector<std::string> file_names;
    char line[1024];
    for (auto it = files_index.begin(); it != files_index.end(); ++it) {
        file_names.push_back((*it).first);
        std::vector<std::string> ll;
        FILE* fp = fopen((*it).first.c_str(), "r");
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

    int pos = pc - 1;
    while (true) {
        debugger_options(0, 1);
        graphics->print_text(disassembly_font, "\r\r", -1, -1);

        // Show current file and PC
        Bytecode cur_bc = code[pos];
        graphics->colour(128, 128, 128);
        graphics->print_text(disassembly_font, "File: ", -1, -1);
        graphics->colour(255, 255, 255);
        graphics->print_text(disassembly_font, file_names[cur_bc.file_number], -1, -1);
        graphics->print_text(disassembly_font, "\r", -1, -1);
        graphics->colour(128, 128, 128);
        graphics->print_text(disassembly_font, "Line: ", -1, -1);
        graphics->colour(255, 255, 255);
        graphics->print_text(disassembly_font, std::to_string(cur_bc.line_number), -1, -1);
        graphics->print_text(disassembly_font, " ", -1, -1);
        graphics->colour(255, 255, 255);
        auto ff = line_cache[cur_bc.file_number];
        auto p = cur_bc.line_number - 1;
        if (p >= ff.size()) {
            p = static_cast<int>(ff.size()) - 1;
        }
        graphics->print_text(disassembly_font, ff[p], -1, -1);
        graphics->print_text(disassembly_font, "\r\r", -1, -1);

        // Bytecode output
        graphics->colour(180, 180, 180);
        for (UINT32 i = 0; i < debugger_lines; i++) {
            if (pos + i < size) {
                Bytecode bc = code[pos + i];
                if (pos + i == pc - 1) {
                    graphics->colour(255, 255, 0);
                    graphics->print_text(disassembly_font, "-> ", -1, -1);
                } else {
                    graphics->print_text(disassembly_font, "   ", -1, -1);
                }
                graphics->colour(255, 255, 255);
                auto s = disassemble_instruction(bc, pos + i);
                graphics->colour(255, 255, 255);
                graphics->print_text(disassembly_font, s.header, -1, -1);
                graphics->colour(255, 255, 0);
                graphics->print_text(disassembly_font, s.opcode, -1, -1);

                // Pad out with near invisible dots
                graphics->colour(40, 40, 40);
                int a = 15 - static_cast<int>(s.opcode.length());
                for (int i = 0; i < a; i++) {
                    graphics->print_text(disassembly_font, ".", -1, -1);
                }

                graphics->colour(0, 100, 255);
                graphics->print_text(disassembly_font, s.operand, -1, -1);

                // Pad out with near invisible dots
                if (s.description.length() > 0) {
                    graphics->colour(40, 40, 40);
                    a = 40 - static_cast<int>(s.operand.length());
                    for (int i = 0; i < a; i++) {
                        graphics->print_text(disassembly_font, ".", -1, -1);
                    }
                }

                graphics->colour(128, 128, 128);
                graphics->print_text(prop_font, s.description, -1, -1);
                graphics->print_text(prop_font, "\r", -1, -1);
            }
        }
        graphics->flip();
        graphics->poll();
        if (graphics->inkey(-17)) {
            exit(0);
        } else if (graphics->inkey(-58)) {
            while (graphics->inkey(-58))
                graphics->poll();
            pos--;
        } else if (graphics->inkey(-42)) {
            while (graphics->inkey(-42))
                graphics->poll();
            pos++;
        } else if (graphics->inkey(-64)) {
            while (graphics->inkey(-64))
                graphics->poll();
            pos -= debugger_lines;
        } else if (graphics->inkey(-79)) {
            while (graphics->inkey(-79))
                graphics->poll();
            pos += debugger_lines;
        } else if (graphics->inkey(-115) || graphics->inkey(-31) || graphics->inkey(-120)) {
            return;
        }
        if (pos < 1) {
            pos = 1;
        }
        if (pos > size) {
            pos = size - 1;
        }
    }
}

void VM::debugger_prompt(std::string key, std::string function, bool active)
{
    if (active) {
        graphics->colour(255, 255, 0);
    } else {
        graphics->colour(160, 160, 0);
    }
    graphics->print_text(menu_font, key, -1, -1);
    graphics->print_text(menu_font, " ", -1, -1);
    if (active) {
        graphics->colour(255, 255, 255);
    } else {
        graphics->colour(160, 160, 160);
    }
    graphics->print_text(menu_font, function, -1, -1);
    graphics->print_text(menu_font, "    ", -1, -1);
}