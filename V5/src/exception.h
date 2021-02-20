#pragma once
#include "compiler/file_lookup.h"
#include "environment.h"
#include "libs/string.h"
#include "types.h"
#include <exception>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string>

extern Environment g_env;
extern std::vector<ParserFiles> parsed_files;

extern std::map<UINT32, UINT32> line_number_mapping;

enum class ErrorLocation {
    PARSER,
    COMPILER,
    RUNTIME
};

class DARICException : public std::runtime_error {
public:
    DARICException(ErrorLocation location, std::string filename, UINT32 line_number, short char_position, std::string error)
        : location(location)
        , filename(filename)
        , line_number(line_number)
        , char_position(char_position)
        , std::runtime_error(error)
        , error(error)
        , show_filename(parsed_files.size() > 1) {};

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
    
#ifdef RISCOS 
    void pretty_print() const throw();
#else
    const void pretty_print() const throw();
#endif
    ErrorLocation location;
    std::string error;
    std::string filename;
    bool show_filename;
    UINT32 line_number;
    short char_position;
};