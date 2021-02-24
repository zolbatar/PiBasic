#pragma once
#include "compiler/file_lookup.h"
#include "environment.h"
#include "libs/string.h"
#include "types.h"
#include <exception>
#include <fstream>
#include <iostream>
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
        : std::runtime_error(error)
        , location(location)
        , error(error)
        , filename(filename)
        , line_number(line_number)
        , char_position(char_position)
        , show_filename(parsed_files.size() > 1) { };

#ifdef RISCOS 
    virtual const char* what() const throw();
    void pretty_print() const throw();
#else
    virtual const char* what() const throw();
    const void pretty_print() const throw();
#endif
    ErrorLocation location;
    std::string error;
    std::string filename;
    UINT32 line_number;
    short char_position;
    bool show_filename;
};