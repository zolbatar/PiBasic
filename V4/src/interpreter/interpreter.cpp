#define _CRT_SECURE_NO_WARNINGS
#include "interpreter.h"
#include "../vm/vm.h"
#include "string.h"
#include <iostream>
#include <stdio.h>
#ifdef WINDOWS
#include <windows.h>
#endif

extern VM* parse_and_compile(const char* filename, Graphics& graphics, std::stringstream* logfile, bool temporary);
extern std::string version;
const int buffer_size = 1024;

void Interpreter::run()
{
    graphics.set_margin(20);

    graphics.colour(255, 255, 255);
    graphics.print_console(version + "\r\r");

    std::string temp_filename;
#ifdef WINDOWS
    // Calc temp path for saving intermediate files
    wchar_t buffer[buffer_size];
    auto ret = GetTempPath(buffer_size, buffer);
    if (ret == 0) {
        std::cout << "Error getting temporary path\n";
        exit(1);
    }

    // Temp file name
    wchar_t temp_file[buffer_size];
    auto uRetVal = GetTempFileName(buffer, TEXT("DARIC"), 0, temp_file);
    temp_filename = ws2s(std::wstring(temp_file));
#endif

    while (true) {
        graphics.poll();

        // Take each line in time and process it
        graphics.print_console("> ");
        auto s = graphics.input();

        // Trim spaces
        trim(s);
        if (s.length() > 0) {
            tokenise(s);
            auto upper = s;
            toupper(upper);

            // Is this one of the standard tokens?
            if (upper.compare("RUN") == 0) {
            } else if (upper.compare("LIST") == 0) {
            } else {
                // Is it a line number to add?
                if (std::isdigit(s[0])) {
                    add_line(s);
                } else {
                    execute_line(s, temp_filename);
                }
            }
        }
    }
}

// This is to convert things like LETS=1 into LET S = 1, so we can parse correctly
// We also uppercase all the tokens, because cool
void Interpreter::tokenise(std::string& s)
{
    for (auto it = tokens.begin(); it != tokens.end(); ++it) {
        //std::cout << (*it) << std::endl;
    }
    //s.replace(str.begin(),)
}

void Interpreter::add_line(std::string s)
{
}

void Interpreter::execute_line(std::string s, std::string& temp_filename)
{
    FILE* fp = fopen(temp_filename.c_str(), "w");
    fwrite(s.c_str(), s.length(), 1, fp);
    fclose(fp);

    // Now parse and compile
    auto vm = parse_and_compile(temp_filename.c_str(), graphics, logfile, true);
    vm->run();
    delete vm;
}
