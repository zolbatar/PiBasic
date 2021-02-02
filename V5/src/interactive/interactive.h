#pragma once
#include "../compiler/compiler.h"
#include "../graphics/graphics.h"
#include "../vm/boxed.h"
#include <list>
#include <map>
#include <set>
#include <sstream>

class Interactive {
public:
    void run();

private:
    std::map<UINT32, std::string> lines;
    Compiler *compiler = new Compiler();

    void welcome_prompt();
    UINT32 add_line(std::string s, UINT32 auto_line);
    void execute_line(std::string s);
    void run_file(std::string s);
    void run_demo_file(std::string filename);
    void run_all_lines();
    void load(std::string s);
    void save(std::string s);
};