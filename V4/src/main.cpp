#define _CRT_SECURE_NO_WARNINGS
#include <chrono>
#include <memory>
#ifdef WINDOWS
#include <conio.h>
#include <direct.h>
#endif
#ifdef RISCOS
#include "kernel.h"
#include "swis.h"
#endif
#include "interpreter/interpreter.h"
#include "vm/vm.h"
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <sstream>
#include <stdlib.h>
#include <string.h>
#include <vector>

void parse_and_compile(const char* filename, bool temporary, std::vector<Boxed>* variables);
void run_vm();
void reset_parser();

// Working directory
char cwd[1024];

// Nasty old globals - I love em
std::string version = "21.01.22";
std::unique_ptr<VM> g_vm;
std::unique_ptr<Graphics> g_graphics;
std::unique_ptr<std::stringstream> g_logfile;
bool interactive;

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
    g_logfile = std::make_unique<std::stringstream>();
    *g_logfile << "Debug Output\n";
    *g_logfile << "------------\n";
    *g_logfile << "[File :     Line :       PC : Op]  Description\n\n";

    // RISC OS/SDL graphics
    g_graphics = std::make_unique<Graphics>();
    g_graphics->init();

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
        g_vm = std::make_unique<VM>();
        parse_and_compile(filename.c_str(), false, nullptr);

        // Fire up graphics now
        g_graphics->open(g_graphics->get_screen_width(), g_graphics->get_screen_height(), 0);

        run_vm();

    } else {
        // Fire up graphics now
        g_graphics->open(g_graphics->get_screen_width(), g_graphics->get_screen_height(), 0);

        Interpreter interpreter;
        interpreter.run();
    }

    // Shutdown
    g_graphics->shutdown();

    return 0;
}
