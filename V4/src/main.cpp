#define _CRT_SECURE_NO_WARNINGS
#include "compiler/compile.h"
#include "interpreter/interpreter.h"
#include "parser/ast.h"
#include <chrono>
#ifdef WINDOWS
#include <conio.h>
#include <direct.h>
#endif
#ifdef RISCOS
#include "kernel.h"
#include "swis.h"
#endif
#include <iostream>
#include <list>
#include <map>
#include <sstream>
#include <stdlib.h>
#include <string.h>
#include <unordered_set>
#include <vector>

// From BISON grammar file
int parse(const char* filename);
VM* parse_and_compile(const char* filename, Graphics* graphics, std::stringstream* logfile, bool temporary, bool interactive);
void run_vm(VM* vm, Graphics* graphics, std::stringstream* logfile, bool interactive);
void reset_parser();

// Working directory
char cwd[1024];

// For running debugger
VM* current_vm;

extern std::list<std::string> error_list;
extern std::unordered_set<std::string> included_files;
extern std::stack<std::string> file_stack;
extern std::stack<int> yylineno_stack;
extern std::map<int, std::list<AST*>> ast_lines;
extern std::map<std::string, int> files_index;

std::string version = "21.01.22";

int main(int argc, char* argv[])
{
    using namespace std::chrono;
    std::cout << "DARIC " << version << ", https://dariclang.com" << std::endl;

    // Get program directory
    std::string path(argv[0]);
    auto cwd_ = path.substr(0, path.find_last_of("\\/"));
    strcpy((char*)&cwd, cwd_.c_str());
    std::cout << "Program Directory: " << cwd << std::endl;

    // Create logfile for TRACE stuff
    std::stringstream logfile;
    logfile << "Debug Output\n";
    logfile << "------------\n";
    logfile << "[File :     Line :       PC : Op]  Description\n\n";

    // RISC OS/SDL graphics
    Graphics graphics;
    graphics.init();

    // Interactive or not?
    if (argc == 2) {
        // We need to set the current working directory
        std::string filename(argv[1]);
        std::cout << "Filename: " << filename << std::endl;

        // Directory for source files
        std::string just_path;
#ifdef RISCOS
        filename = argv[1];
        just_path = argv[2];
#else
        path = argv[1];
        just_path = path.substr(0, path.find_last_of("\\/"));
        filename = path.substr(path.find_last_of("\\/") + 1, path.length());
#endif

#ifdef WINDOWS
        // Set current directory
        _chdir(just_path.c_str());
        char* buffer;
        buffer = _getcwd(NULL, 0);
#endif

#ifdef RISCOS
        // Set current directory
        _kernel_swi_regs regs;
        regs.r[0] = (int)just_path.c_str();
        _kernel_swi(DDEUtils_Prefix, &regs, &regs);
#endif
        std::cout << "Source directory: " << just_path << std::endl;

        // Parse
        auto vm = parse_and_compile(filename.c_str(), &graphics, &logfile, false, false);

        // Fire up graphics now
        graphics.open(graphics.get_screen_width(), graphics.get_screen_height(), 0);

        current_vm = vm;
        run_vm(vm, &graphics, &logfile, false);

        // Shutdown
        graphics.shutdown();

    } else {
        // Fire up graphics now
        graphics.open(graphics.get_screen_width(), graphics.get_screen_height(), 0);

        Interpreter interpreter(&graphics, &logfile);
        interpreter.run();

        // Shutdown
        graphics.shutdown();
    }

    return 0;
}

bool endsWith(const std::string& mainStr, const std::string& toMatch)
{
    if (mainStr.size() >= toMatch.size() && mainStr.compare(mainStr.size() - toMatch.size(), toMatch.size(), toMatch) == 0)
        return true;
    else
        return false;
}

VM* parse_and_compile(const char* filename, Graphics* graphics, std::stringstream* logfile, bool temporary, bool interactive)
{
    using namespace std::chrono;
    *logfile << "Filename: " << filename << std::endl;
    reset_parser();
    std::string filename_with_ext(filename);

    // Convert to lower
#ifdef WINDOWS
    std::transform(filename_with_ext.begin(), filename_with_ext.end(), filename_with_ext.begin(),
        [](unsigned char c) { return std::tolower(c); });

    // Make a longer filename with .daric added (if needed)
    if (!temporary) {
        if (!endsWith(filename_with_ext, ".daric")) {
            filename_with_ext += ".daric";
        }
    }
#endif

    // Parse
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    auto pr = parse(filename_with_ext.c_str());
    if (pr == 0) {
        for (auto it = error_list.begin(); it != error_list.end(); ++it) {
            if (interactive) {
                graphics->print_console((*it));
                graphics->print_console("\r");
            } else {
                std::cout << (*it) << std::endl;
            }
        }
        if (!interactive) {
            std::cout << "Errors encountered, exiting.\n";
            exit(1);
        }
    }

    // Compile
    auto vm = compile(graphics, logfile);
    current_vm = vm;
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
    *logfile << "-> Parsing & compilation took " << time_span.count() << " seconds." << std::endl;

    return vm;
}

void run_vm(VM* vm, Graphics* graphics, std::stringstream* logfile, bool interactive)
{
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    bool done = true;
    do {
        std::string chain = vm->run();
        done = true;
        if (chain.length() > 0) {
            auto chained_variables = vm->get_chained_variables();
            delete vm;
            vm = parse_and_compile(chain.c_str(), graphics, logfile, false, interactive);
            current_vm = vm;
            vm->inject_variables(chained_variables);
            done = false;
        }
    } while (!done);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
    *logfile << "-> Runtime was " << time_span.count() << " seconds." << std::endl;
}

void reset_parser()
{
    // Clear all previous stuff
    error_list.clear();
    ast_lines.clear();
    files_index.clear();
    included_files.clear();
    while (!file_stack.empty())
        file_stack.pop();
    while (!yylineno_stack.empty())
        yylineno_stack.pop();
}
