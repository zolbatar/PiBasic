#define _CRT_SECURE_NO_WARNINGS
#include "interactive.h"
#include "../environment.h"
#include "../exception.h"
#include "../libs/string.h"
#include "../parser/parser.h"
#include "../vm/vm.h"
#include <iomanip>
#include <iostream>
#include <memory>
#include <sstream>
#include <stdio.h>
#ifdef WINDOWS
#include <conio.h>
#include <direct.h>
#include <windows.h>
#endif
#ifdef RISCOS
#include "kernel.h"
#include "swis.h"
#endif

const int buffer_size = 1024;
std::string temp_filename;
extern Environment g_env;
extern VM* g_vm;

void Interactive::welcome_prompt()
{
    g_env.graphics.colour(255, 0, 0);
    g_env.graphics.print_console("D");
    g_env.graphics.colour(255, 255, 0);
    g_env.graphics.print_console("A");
    g_env.graphics.colour(0, 255, 0);
    g_env.graphics.print_console("R");
    g_env.graphics.colour(0, 255, 255);
    g_env.graphics.print_console("I");
    g_env.graphics.colour(0, 0, 255);
    g_env.graphics.print_console("C");
    g_env.graphics.colour(255, 255, 255);
    g_env.graphics.print_console(" " + g_env.version + ", http://dariclang.com\r\r");
    g_env.graphics.colour(255, 255, 0);
    g_env.graphics.print_console("WELCOME");
    g_env.graphics.colour(255, 255, 255);
    g_env.graphics.print_console(" for demos & examples, ");
    g_env.graphics.colour(255, 255, 0);
    g_env.graphics.print_console("TEST");
    g_env.graphics.colour(255, 255, 255);
    g_env.graphics.print_console(" to run the test suite\r");
    g_env.graphics.print_console("Commands: ");
    g_env.graphics.colour(255, 255, 0);
    g_env.graphics.print_console("EXEC LIST LOAD NEW RUN SAVE QUIT\r\r");
    g_env.graphics.colour(255, 255, 255);
}

void Interactive::run()
{
    g_env.interactive = true;

    // Create new "empty" VM so debugger works
    create_empty_vm();

    welcome_prompt();
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
    std::transform(temp_filename.begin(), temp_filename.end(), temp_filename.begin(), ::tolower);
#endif

    while (true) {
        g_env.graphics.poll();

        // Take each line in time and process it
        g_env.graphics.print_console("> ");
        auto s = g_env.graphics.input();

        // Trim spaces
        trim(s);
        if (s.length() > 0) {
            auto upper = s;
            toupper(upper);

            // Is this one of the standard tokens?
            if (upper.compare("RUN") == 0) {
                run_all_lines();
            } else if (upper.compare("QUIT") == 0) {
                return;
            } else if (upper.compare("NEW") == 0) {
                lines.clear();
                create_empty_vm();
                delete compiler;
                compiler = new Compiler();
            } else if (upper.compare("LIST") == 0) {
                for (auto it = lines.begin(); it != lines.end(); it++) {
                    std::stringstream stream;
                    g_env.graphics.colour(180, 180, 0);
                    stream << std::setw(5) << (*it).first << " ";
                    g_env.graphics.print_console(stream.str());
                    stream.str("");
                    g_env.graphics.colour(255, 255, 255);
                    stream << (*it).second << "\r";
                    g_env.graphics.print_console(stream.str());
                    g_env.graphics.poll();
                    if (g_env.graphics.inkey(-4)) {
                        while (g_env.graphics.inkey(-4)) {
                            g_env.graphics.poll();
                        }
                    }
                }
            } else if (upper.compare("WELCOME") == 0) {
                run_demo_file("Welcome");
            } else if (upper.compare("TEST") == 0) {
                run_demo_file("Tester");
            } else if (upper.substr(0, 5).compare("EXEC ") == 0) {
                run_file(s);
            } else if (upper.substr(0, 5).compare("LOAD ") == 0) {
                load(s);
            } else if (upper.substr(0, 5).compare("SAVE ") == 0) {
                save(s);
            } else {
                // Is it a line number to add?
                if (std::isdigit(s[0])) {
                    add_line(s, 0);
                } else {
                    execute_line(s);
                }
            }
        }
    }
}

void Interactive::load(std::string s)
{
    auto filename = s.substr(5, s.length() - 5);
    replaceAll(filename, "\"", "");
#ifdef WINDOWS
    filename += ".daric";
#endif
    lines.clear();
    char line[1024];
    FILE* fp = fopen(filename.c_str(), "r");
    if (fp == NULL) {
        g_env.graphics.print_console("Error loading file\r");
        return;
    }
    UINT32 line_number = 10;
    while (!feof(fp)) {
        if (fgets(line, 1024, fp) != NULL) {
            std::string line_string(line);
            line_number = add_line(line_string, line_number);
        }
    }
}

void Interactive::save(std::string s)
{
    auto filename = s.substr(5, s.length() - 5);
    replaceAll(filename, "\"", "");
#ifdef WINDOWS
    filename += ".daric";
#endif
    FILE* fp = fopen(filename.c_str(), "w");
    if (fp == NULL) {
        g_env.graphics.print_console("Error saving file\r");
        return;
    }
    for (auto it = lines.begin(); it != lines.end(); it++) {
        std::stringstream stream;
        replaceAll((*it).second, "\n", "");
        stream << (*it).first << " " << (*it).second << std::endl;
        fwrite(stream.str().c_str(), stream.str().length(), 1, fp);
    }
    fclose(fp);
}

UINT32 Interactive::add_line(std::string s, UINT32 auto_line)
{
    // Scan for end of line number
    size_t i;
    for (i = 0; i < s.length(); i++) {
        if (!std::isdigit(s[i]))
            break;
    }
    replaceAll(s, "\n", "");

    // Extract line number
    UINT32 line = auto_line;
    auto rest_of_line = s;
    if (i > 0) {
        auto line_as_s = s.substr(0, i);
        line = std::stoi(line_as_s);
        rest_of_line = s.substr(i + 1, s.length() - i);
    }
    if (lines.count(line) != 0) {
        lines.erase(line);
    }

    // If empty, convert to just a colon
    rtrim(rest_of_line);
    if (rest_of_line.length() == 0) {
        rest_of_line = ":";
    }

    lines.insert(std::make_pair(line, rest_of_line));
    return line + 10;
}

void Interactive::execute_line(std::string s)
{
    FILE* fp = fopen(temp_filename.c_str(), "w");
    fwrite(s.c_str(), s.length(), 1, fp);
    fwrite("\n", 1, 1, fp);
    fclose(fp);

    try {
        MyParser parser(temp_filename);
        parser.parse_and_compile(compiler);
    } catch (const DARICException& ex) {
        ex.pretty_print();
        return;
    } catch (const std::runtime_error& ex) {
        g_env.graphics.print_console(ex.what());
        return;
    }

    // Run!
    g_vm->run();

    // Reset PC
    g_vm->helper_bytecodes().pc = 0;
}

void Interactive::run_all_lines()
{
    FILE* fp = fopen(temp_filename.c_str(), "w");
    for (auto it = lines.begin(); it != lines.end(); it++) {
        std::stringstream stream;
        stream << (*it).first << " " << (*it).second << std::endl;
        auto s = stream.str();
        fwrite(s.c_str(), s.length(), 1, fp);
    }
    fclose(fp);

    try {
        MyParser parser(temp_filename);
        parser.parse_and_compile(compiler);
    } catch (const DARICException& ex) {
        ex.pretty_print();
        return;
    } catch (const std::runtime_error& ex) {
        g_env.graphics.print_console(ex.what());
        return;
    }

    // Run!
    g_vm->run();

    // Reset PC
    g_vm->helper_bytecodes().pc = 0;
}

void Interactive::run_file(std::string s)
{
    auto filename = s.substr(5, s.length() - 5);
    replaceAll(filename, "\"", "");
#ifdef WINDOWS
    filename += ".daric";
#endif
    try {
        MyParser parser(filename);
        parser.parse_and_compile(compiler);
    } catch (const DARICException& ex) {
        ex.pretty_print();
        return;
    } catch (const std::runtime_error& ex) {
        g_env.graphics.print_console(ex.what());
        return;
    }

    // Run!
    g_vm->run();
}

void Interactive::run_demo_file(std::string filename)
{
    // Directory for source files
    std::string path(g_env.cwd);
    path += "/Examples";

#ifdef WINDOWS
    // Set current directory
    _chdir(path.c_str());
    char* buffer;
    buffer = _getcwd(NULL, 0);
#endif

#ifdef RISCOS
    // Set current directory
    _kernel_swi_regs regs;
    regs.r[0] = (int)path.c_str();
    _kernel_swi(DDEUtils_Prefix, &regs, &regs);
#endif

#ifdef WINDOWS
    filename += ".daric";
#endif

    try {
        MyParser parser(filename);
        parser.parse_and_compile(compiler);
    } catch (const DARICException& ex) {
        ex.pretty_print();
        return;
    } catch (const std::runtime_error& ex) {
        g_env.graphics.print_console(ex.what());
        return;
    }

    // Run!
    g_vm->run();

    // Clear it all
    lines.clear();
    create_empty_vm();

    g_env.graphics.cls();
    welcome_prompt();
}
