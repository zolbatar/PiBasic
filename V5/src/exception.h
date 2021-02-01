#pragma once
#include "environment.h"
#include "types.h"
#include <exception>
#include <sstream>
#include <stdexcept>

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
        s << " error [" << error << "] at '" << filename << "':" << line_number << ":" << char_position << "\r";
        return s.str().c_str();
    }

    const void pretty_print() const throw()
    {
        auto saved_colour = g_env.graphics.current_colour;
        g_env.graphics.colour(255, 0, 0);
        g_env.graphics.colour(255, 0, 0);
        switch (location) {
        case ErrorLocation::PARSER:
            g_env.graphics.print_console("[Parser] ");
            break;
        case ErrorLocation::COMPILER:
            g_env.graphics.print_console("[Compiler] ");
            break;
        case ErrorLocation::RUNTIME:
            g_env.graphics.print_console("[Runtime] ");
            break;
        }
        g_env.graphics.colour(255, 255, 255);
        g_env.graphics.print_console(error);
        g_env.graphics.colour(128, 128, 128);
        g_env.graphics.print_console(" at ");
        g_env.graphics.colour(0, 255, 0);
        g_env.graphics.print_console(filename);
        g_env.graphics.colour(128, 128, 128);
        g_env.graphics.print_console(":");
        g_env.graphics.colour(0, 255, 0);
        g_env.graphics.print_console(std::to_string(line_number));
        g_env.graphics.colour(128, 128, 128);
        g_env.graphics.print_console(":");
        g_env.graphics.colour(0, 255, 0);
        g_env.graphics.print_console(std::to_string(char_position));
        g_env.graphics.print_console("\r");
        g_env.graphics.current_colour = saved_colour;
    }

    ErrorLocation location;
    std::string error;
    std::string filename;
    UINT32 line_number;
    short char_position;
};