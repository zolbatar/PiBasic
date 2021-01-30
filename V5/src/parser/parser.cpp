#include "parser.h"
#include "../compiler/compiler.h"
#include "../environment.h"
#include <iostream>

extern Environment g_env;
extern VM* g_vm;

using namespace antlr4;

class MyParserErrorListener : public antlr4::BaseErrorListener {
    void syntaxError(
        antlr4::Recognizer* recognizer,
        antlr4::Token* offendingSymbol,
        size_t line,
        size_t charPositionInLine,
        const std::string& msg,
        std::exception_ptr e) override
    {
        std::stringstream s;
        s << "Line(" << line << ":" << charPositionInLine << ") Error(" << msg << ")"
          << "\r";
        throw std::runtime_error(s.str());
    }
};

void MyParser::parse_and_compile()
{
    std::ifstream stream;
    stream.open(filename);

    ANTLRInputStream input(stream);

    // Tokeniser
    DARICLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    // Parser
    MyParserErrorListener errorListener;
    DARICParser parser(&tokens);
    parser.addErrorListener(&errorListener);
    parser.setBuildParseTree(true);
    DARICParser::ProgContext* tree = parser.prog();

    std::cout << tree->toStringTree() << std::endl;

    // Add to files list
    g_vm->add_filename(filename);

    Compiler compiler(g_vm, tree);
}
