#pragma once
#include "../graphics/graphics.h"
#include "../vm/vm.h"
#include <list>
#include <map>
#include <set>
#include <sstream>

class Interpreter {
public:
    void run();

private:
    std::vector<Boxed> variables;
    std::map<UINT32, std::string> lines;

    void welcome_prompt();
    void add_line(std::string s);
    void execute_line(std::string s);
    void run_welcome();
    void run_all_lines();
    void load(std::string s);
    void save(std::string s);
};