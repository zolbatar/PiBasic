#include "debugger.h"

void Debugger::debugger_log()
{
    bool rerender = true;
    g_env.process_log();
    UINT32 pos = (g_env.log_list.size() / log_lines) * log_lines;
    while (true) {
        if (rerender) {
            debugger_options(2, 1);
            g_env.graphics.print_text(disassembly_font, "\r\r", -1, -1);

            int chars = g_env.graphics.max_horz_chars(disassembly_font);
            for (UINT32 i = 0; i < log_lines; i++) {
                auto index = i + pos;
                if (index < g_env.log_list.size()) {
                    
                    // Strip back to line width
                    auto s = g_env.log_list[index];
                    s.resize(chars);

                    g_env.graphics.colour(255, 255, 255);
                    g_env.graphics.print_text(disassembly_font, s, -1, -1);
                    g_env.graphics.print_text(disassembly_font, "\r", -1, -1);
                }
            }

            rerender = false;
        }

        g_env.graphics.poll();
        if (g_env.graphics.inkey(-17)) {
            exit(0);
        } else if (g_env.graphics.inkey(-64)) {
            while (g_env.graphics.inkey(-64))
                g_env.graphics.poll();
            if (pos >= log_lines) {
                pos -= log_lines;
            }
            rerender = true;
        } else if (g_env.graphics.inkey(-79)) {
            while (g_env.graphics.inkey(-79))
                g_env.graphics.poll();
            pos += log_lines;
            rerender = true;
        } else if (g_env.graphics.inkey(-114) || g_env.graphics.inkey(-115) || g_env.graphics.inkey(-31) || g_env.graphics.inkey(-120)) {
            return;
        }
    }
}
