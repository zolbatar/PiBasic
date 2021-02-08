#include "parser.h"
#include "../compiler/compiler.h"
#include "../environment.h"
#include <iostream>

extern Environment g_env;
extern VM* g_vm;
std::string parsing_filename;

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
        throw DARICException(ErrorLocation::PARSER, parsing_filename, static_cast<UINT32>(line), static_cast<short>(charPositionInLine), msg);
    }
};

void MyParser::parse_and_compile(Compiler* compiler)
{
    std::ifstream stream;
    stream.open(filename);
    if (!stream.is_open()) {
        throw std::runtime_error("File not found\r");
    }
    parsing_filename = filename;

    ANTLRInputStream input(stream);

    // Tokeniser
    DARICLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    // Parser
    MyParserErrorListener errorListener;
    //    DiagnosticErrorListener diagListener;
    DARICParser parser(&tokens);
    parser.removeErrorListeners();
    parser.addErrorListener(&errorListener);
    //    parser.addErrorListener(&diagListener);
    parser.setBuildParseTree(true);
    parser.getInterpreter<atn::ParserATNSimulator>()->setPredictionMode(atn::PredictionMode::SLL);
    //    parser.getInterpreter<atn::ParserATNSimulator>()->setPredictionMode(atn::PredictionMode::LL_EXACT_AMBIG_DETECTION);
    DARICParser::ProgContext* tree = parser.prog();

    // Add to files list
    g_vm->add_filename(filename);

    compiler->compile(g_vm, tree, filename);
}
