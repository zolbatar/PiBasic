#include "interpreter.h"
#include <iostream>

extern std::string version;

void Interpreter::run()
{
    graphics->set_margin(20);

    graphics->colour(255, 255, 255);
    graphics->print_console(version + "\r\r");

    while (true) {
        graphics->poll();
        graphics->print_console("> ");
        auto s = graphics->input();
    }
}
