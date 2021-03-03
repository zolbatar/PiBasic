#include "debugger.h"

void Debugger::debugger_log()
{
    bool rerender = true;
    g_env.process_log();
    UINT32 pos = g_env.log_list.size() - log_lines;
    if (pos < 0) { pos = 0; }
    while (true) {
        if (rerender) {
            debugger_options(2, 1);
            g_env.text.print_text(disassembly_font, disassembly_font_size, "\r\r", -1, -1);

            g_env.graphics.colour(255, 255, 255);
            int chars = g_env.fonts.max_horz_chars(disassembly_font, disassembly_font_size, g_env.graphics.get_screen_width());
            for (UINT32 i = 0; i < log_lines; i++) {
                auto index = i + pos;
                if (index < g_env.log_list.size()) {
                    
                    // Strip back to line width
                    auto s = g_env.log_list[index];
                    s.resize(chars);

                    g_env.text.print_text(disassembly_font, disassembly_font_size, s, 0, -1);
                    //g_env.text.print_text(disassembly_font, disassembly_font_size, "\r", -1, -1);
                }
            }

            rerender = false;
        }

        g_env.graphics.poll();
        if (g_env.input.inkey(-17)) {
            exit(0);
        } else if (g_env.input.inkey(-64)) {
            while (g_env.input.inkey(-64))
                g_env.graphics.poll();
            if (pos >= log_lines) {
                pos -= log_lines;
            }
            rerender = true;
        } else if (g_env.input.inkey(-79)) {
            while (g_env.input.inkey(-79))
                g_env.graphics.poll();
            pos += log_lines;
            rerender = true;
        } else if (g_env.input.inkey(-114) || g_env.input.inkey(-115) || g_env.input.inkey(-31)) {
            return;
        }
    }
}
