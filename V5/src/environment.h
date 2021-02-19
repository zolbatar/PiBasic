#pragma once
#include "graphics/graphics.h"
#include <memory>
#include <sstream>
#include <string>

class Environment {
public:
    std::string version = "21.02.18";
    std::string cwd; // Program directory
    std::vector<std::string> log_list; // Runtime log
    std::stringstream log; // Runtime log
    Graphics graphics;
    bool debugger_requested = false;
    bool interactive;

    bool is_debugger_requested() { return debugger_requested; }

    void process_log()
    {
        // Convert to list of vectors for performance of log
        std::string tmp;
        while (std::getline(log, tmp, '\n')) {
            log_list.push_back(tmp);
        }

        log.clear();
    }
};