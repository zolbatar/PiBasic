#include "../vm/boxed.h"
#include "DARICLexer.h"
#include "DARICParser.h"
#include "antlr4-runtime.h"
#include <string>

class MyParser {
public:
    MyParser(std::string filename)
        : filename(filename) {};
    void parse_and_compile(std::vector<Boxed>& variables);

private:
    std::string filename;
};