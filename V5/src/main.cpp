#include "environment.h"
#include "interactive/interactive.h"
#include <chrono>
#include <iostream>

Environment g_env;

int main(int argc, char* argv[])
{
    using namespace std::chrono;
    std::cout << "DARIC " << g_env.version << ", https://dariclang.com" << std::endl;

    // Get program directory
    std::string path(argv[0]);
    g_env.cwd = path.substr(0, path.find_last_of("\\/"));

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
    if (argc == 2) {
        // A file has been clicked typically
    } else {
        // Fire up graphics now
        std::cout << "Screen resolution: " << g_env.graphics.get_screen_width() << "x" << g_env.graphics.get_screen_height() << std::endl;
        g_env.graphics.open(g_env.graphics.get_screen_width(), g_env.graphics.get_screen_height(), Mode::CLASSIC, g_env.cwd);

        Interactive interactive;
        interactive.run();
    }

    // Shutdown
    g_env.graphics.shutdown();

    return 0;
}
