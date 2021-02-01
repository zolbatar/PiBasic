#pragma once
#include "graphics/graphics.h"
#include <memory>
#include <sstream>
#include <string>

class Environment {
public:
    std::string version = "21.02.01";
    std::string cwd; // Program directory
    std::stringstream log; // Runtime log
    Graphics graphics;
    bool debugger_requested = false;
    bool interactive;

    std::string get_filename_by_number(short file_number)
    {
        return "<No file>";
        /*
                std::vector<std::string> file_names;
        for (auto it = files_index.begin(); it != files_index.end(); ++it) {
            file_names.push_back((*it).first);
        }
        return file_names[file_number];
        */
    }
};