#pragma once
#include "../types.h"
#include <string>

struct ParserFiles {
    std::string filename;
    UINT32 line_start;
};

struct LineFileLookup {
    short file_number;
    std::string filename;
    UINT32 line;
};

extern LineFileLookup file_and_line_lookup(UINT32 line_number);
