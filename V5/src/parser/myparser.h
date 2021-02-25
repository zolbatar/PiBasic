#include "../compiler/compiler.h"
#include "../vm/boxed.h"
#include "DARICLexer.h"
#include "DARICParser.h"
#include "antlr4-runtime.h"
#include <string>
#include <sstream>

class MyParser {
public:
//	bool check_if_installs(std::string line, std::string filename, std::set<std::string>* installs);
	void parse_and_compile(Compiler* compiler, bool interactive, std::stringstream *input, std::string filename);
};