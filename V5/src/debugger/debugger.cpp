#define _GLIBCXX_USE_C99 1
#define _CRT_SECURE_NO_WARNINGS
#include "debugger.h"
#include "../environment.h"
#include "../vm/vm.h"
#include <stdlib.h>

bool debugger_open = false;

Debugger::Debugger()
{
    if (debugger_open)
        return;
    debugger_open = true;

    // Was this breakpoint triggered?
    bool breakpoint = false;
    if (g_vm->helper_bytecodes().pc > 0 && g_vm->helper_bytecodes().get_size() > 0 && g_vm->helper_bytecodes().get_previous_bytecode().opcode == Bytecodes::BREAKPOINT) {
        breakpoint = true;
    }

    // Wait until not pressed
    if (!breakpoint) {
        while (g_env.graphics.inkey(-31)) {
            g_env.graphics.poll();
        }
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
        } else if (breakpoint || g_env.graphics.inkey(-114)) {
            breakpoint = false;
            // F1
            debugger_disassembly();
        } else if (g_env.graphics.inkey(-115)) {
            // F2
            debugger_variables();
        } else if (g_env.graphics.inkey(-116)) {
            // F3
            debugger_log();
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
    debugger_prompt("F3", "Trace Log", selected == 2);
    //    debugger_prompt("F6", "Step", false);
    debugger_prompt("F9", "Manual", selected == 8);
    debugger_prompt("F10", "Continue", false);
    debugger_prompt("Q", "Quit", false);
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