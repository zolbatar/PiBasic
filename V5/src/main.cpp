#include "environment.h"
#include "parser/myparser.h"
#include "interactive/interactive.h"
#include "vm/vm.h"
#include <memory>
#include <chrono>
#include <iostream>
#include <string>

Environment g_env;
extern VM *g_vm;

int main(int argc, char *argv[])
{
    using namespace std::chrono;
    std::cout << "DARIC " << g_env.version << ", https://dariclang.com" << std::endl;

    // Disable escape on RISC OS
#ifdef RISCOS
    _kernel_osbyte(229, 1, 0);
#endif

    // Get program directory
    std::string path(argv[0]);
    g_env.cwd = path.substr(0, path.find_last_of("\\/"));
    g_env.pwd = g_env.cwd;

    // Set up logfile
    g_env.log("Debug Output");
    g_env.log("------------");
    g_env.log("[File :     Line :       PC : Op]  Description");
    g_env.log("");

    // Output some useful into
    std::cout << "Program Directory: " << g_env.cwd << std::endl;

    // RISC OS/SDL graphics
    g_env.graphics = Graphics();
    g_env.graphics.init();

    // Interactive or not?
#ifdef WINDOWS
    if (argc == 2)
#else
    if (argc == 3)
#endif
    {
        // We need to set the current working directory
        std::string filename(argv[1]);
        std::cout << "Filename: " << filename << std::endl;

        // Directory for source files
        std::string just_path;
#ifdef RISCOS
        filename = argv[1];
        just_path = argv[2];
        std::cout << "Directory: " << just_path << std::endl;

        // Set current directory
        _kernel_swi_regs regs;
        regs.r[0] = (int)just_path.c_str();
        _kernel_swi(DDEUtils_Prefix, &regs, &regs);
#else
        path = argv[1];
        just_path = path.substr(0, path.find_last_of("\\/"));
        filename = path.substr(path.find_last_of("\\/") + 1, path.length());

        // Set current directory
        _chdir(just_path.c_str());
        char *buffer;
        buffer = _getcwd(NULL, 0);
#endif

        // Fire up graphics now
        g_env.graphics.open(g_env.graphics.get_screen_width(), g_env.graphics.get_screen_height(), Mode::CLASSIC, g_env.cwd);

        Compiler *compiler = new Compiler();
        create_empty_vm();
        try
        {
            // Load into a stringstream
            std::stringstream ss;
            std::ifstream stream;
            stream.open(filename);
            if (!stream.is_open()) {
                throw std::runtime_error("File '" + filename + "'not found\n");
            }
            ss << stream.rdbuf();
            stream.close();
            MyParser parser;
            parser.parse_and_compile(compiler, false, ss, filename);
        }
        catch (const DARICException &ex)
        {
            ex.pretty_print();
            return 1;
        }
        catch (const std::runtime_error &ex)
        {
            g_env.text.print_console(ex.what());
            return 1;
        }

        // Run!
        g_vm->run();
    }
    else
    {
        // Disable escape on RISC OS
#ifdef RISCOS
        _kernel_osbyte(200, 1, 1);
#endif

        // Fire up graphics now
        std::cout << "Screen resolution: " << g_env.graphics.get_screen_width() << "x" << g_env.graphics.get_screen_height() << std::endl;
        g_env.graphics.open(g_env.graphics.get_screen_width(), g_env.graphics.get_screen_height(), Mode::CLASSIC, g_env.cwd);

        Interactive interactive;
        interactive.run();
#ifdef RISCOS
        _kernel_osbyte(200, 0, 1);
#endif
    }

    // Shutdown
    g_env.graphics.shutdown();

#ifdef RISCOS
    _kernel_swi_regs regs;
    regs.r[0] = 0;
    _kernel_swi(DDEUtils_Prefix, &regs, &regs);
#endif

    return 0;
}
