#pragma once
#include "environment.h"
#include "libs/string.h"
#include "types.h"
#include <exception>
#include <sstream>
#include <stdexcept>
#include <iostream>
#include <fstream>

extern Environment g_env;

enum class ErrorLocation {
    PARSER,
    COMPILER,
    RUNTIME
};

class DARICException : public std::runtime_error {
public:
    DARICException(ErrorLocation location, std::string filename, UINT32 line_number, short char_position, std::string error)
        : std::runtime_error(error)
        , error(error)
        , location(location)
        , filename(filename)
        , line_number(line_number)
        , show_filename(false)
        , char_position(char_position) {};

    virtual const char* what() const throw()
    {
        std::stringstream s;
        switch (location) {
        case ErrorLocation::PARSER:
            s << "Parser";
            break;
        case ErrorLocation::COMPILER:
            s << "Compiler";
            break;
        case ErrorLocation::RUNTIME:
            s << "Runtime";
            break;
        }
        std::string serror = error;
        s << "[" << error << "] at '" << filename << "':" << line_number << ":" << char_position << "\r";
        return s.str().c_str();
    }

    const void pretty_print() const throw()
    {
        auto saved_colour = g_env.graphics.current_colour;
        g_env.graphics.colour(255, 0, 0);
        g_env.graphics.colour(255, 0, 0);
        switch (location) {
        case ErrorLocation::PARSER:
            g_env.graphics.print_console("[Syntax] ");
            break;
        case ErrorLocation::COMPILER:
            g_env.graphics.print_console("[Compiler] ");
            break;
        case ErrorLocation::RUNTIME:
            g_env.graphics.print_console("[Runtime] ");
            break;
        }
        g_env.log << "[" << error << "] at '" << filename << "':" << line_number << ":" << char_position << "\n";
        std::string serror = error;
        // Take first 60 and last 60
        if (error.length() > 120) {
            serror = error.substr(0, 60) + "..." + error.substr(error.length() - 60, 60);
        }
        replaceAll(serror, "\\n", " ");
        g_env.graphics.colour(255, 255, 255);
        g_env.graphics.print_console(serror);
        g_env.graphics.colour(128, 128, 128);
        g_env.graphics.print_console(" at ");
        if (show_filename) {
            g_env.graphics.colour(0, 255, 0);
            g_env.graphics.print_console(filename);
            g_env.graphics.colour(128, 128, 128);
            g_env.graphics.print_console(":");
        }
        g_env.graphics.colour(0, 255, 0);
        g_env.graphics.print_console(std::to_string(line_number));
        g_env.graphics.colour(128, 128, 128);
        g_env.graphics.print_console(":");
        g_env.graphics.colour(0, 255, 0);
        g_env.graphics.print_console(std::to_string(char_position));
        g_env.graphics.print_console("\r");
        if (location == ErrorLocation::COMPILER) {
            g_env.graphics.colour(0, 255, 255);
            std::ifstream in(filename);
            std::string l;
            for (UINT32 i = 1; i < line_number; i++) {
                std::getline(in, l);
            }
            std::getline(in, l);
            g_env.graphics.print_console(l);
            g_env.graphics.print_console("\r");
            g_env.graphics.colour(0, 255, 0);
            for (auto i = 0; i < char_position; i++) {
                g_env.graphics.print_console("-");
            }
            g_env.graphics.print_console("^\r");
        }
        g_env.graphics.current_colour = saved_colour;
    }

    ErrorLocation location;
    std::string error;
    std::string filename;
    bool show_filename;
    UINT32 line_number;
    short char_position;
};