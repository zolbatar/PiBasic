#include "../graphics/graphics.h"
#include <list>
#include <map>
#include <set>

class Interpreter {
public:
    Interpreter(Graphics* graphics)
        : graphics(graphics) {};
    void run();

private:
    Graphics* graphics;
    std::map<UINT32, std::string> lines;
    std::set<std::string> tokens = { "DIM" };

    void tokenise(std::string& str);
    void add_line(std::string s);
    void execute_line(std::string s);
};