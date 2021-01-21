#pragma once
#include "../graphics/graphics.h"
#include <list>
#include <map>
#include <set>
#include <sstream>

class Interpreter {
public:
    Interpreter(Graphics& graphics, std::stringstream* logfile)
        : graphics(graphics)
        , logfile(logfile) {};
    void run();

private:
    Graphics& graphics;
    std::stringstream* logfile;
    std::map<UINT32, std::string> lines;
    std::set<std::string> tokens = { "DIM" };

    void tokenise(std::string& str);
    void add_line(std::string s);
    void execute_line(std::string s, std::string& temp_filename);
};