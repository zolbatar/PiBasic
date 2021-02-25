#include "../compiler/compiler.h"
#include "../vm/boxed.h"
#include "DARICLexer.h"
#include "DARICParser.h"
#include "antlr4-runtime.h"
#include <string>
#include <sstream>

class MyParser {
public:
	void load_stream(std::string filename, bool interactive, std::stringstream* ss);
	void parse_and_compile(Compiler* compiler, bool interactive, std::stringstream *input, std::string filename);
};