#include "parser.h"
#include "../compiler/compiler.h"
#include "../environment.h"
#include <iostream>

extern Environment g_env;
extern VM* g_vm;
std::string parsing_filename;
using namespace antlr4;
bool fail_on_first_error = false;
bool parse_errors = false;
size_t error_line;
short error_position;
int file_count = 1;
int error_count = 0;

class MyParserErrorListener : public antlr4::BaseErrorListener {

    std::string getLineFromStream(std::string stream, size_t start, size_t end)
    {
        // Scan back for start of line
        auto t = ' ';
        while (t != '\n' && start > 0) {
            start--;
            t = stream[start];
        };

        // Scan for end of line
        while (t != '\n' && end < stream.length()) {
            end++;
            t = stream[end];
        };
        return stream.substr(start, end - start + (t == '\n' ? 0 : 1));
    }

    void syntaxError(
        antlr4::Recognizer* recognizer,
        antlr4::Token* offendingSymbol,
        size_t line,
        size_t charPositionInLine,
        const std::string& msg,
        std::exception_ptr e) override
    {
        if (!parse_errors) {
            error_line = line;
            error_position = charPositionInLine;
            parse_errors = true;
        }
        error_count++;
        if (error_count == 5) {
            throw DARICException(ErrorLocation::PARSER, parsing_filename, static_cast<UINT32>(line), static_cast<short>(charPositionInLine), "Stopping at 5 errors");
        } else if (fail_on_first_error) {
            throw DARICException(ErrorLocation::PARSER, parsing_filename, static_cast<UINT32>(line), static_cast<short>(charPositionInLine), msg);
        } else {
            std::cout << msg << std::endl;
            auto s = offendingSymbol->getInputStream();
            auto l = getLineFromStream(s->toString(), offendingSymbol->getStartIndex(), offendingSymbol->getStopIndex());
            replaceAll(l, "\n", "\r");

            // File, line char etc.
            auto saved_colour = g_env.graphics.current_colour;
            g_env.graphics.colour(255, 0, 0);
            g_env.graphics.print_console("Syntax error");
            g_env.graphics.colour(128, 128, 128);
            g_env.graphics.print_console(" at ");
            if (file_count > 1) {
                g_env.graphics.colour(0, 255, 0);
                g_env.graphics.print_console(parsing_filename);
                g_env.graphics.colour(128, 128, 128);
                g_env.graphics.print_console(":");
            }
            g_env.graphics.colour(0, 255, 0);
            g_env.graphics.print_console(std::to_string(line));
            g_env.graphics.colour(128, 128, 128);
            g_env.graphics.print_console(":");
            g_env.graphics.colour(0, 255, 0);
            g_env.graphics.print_console(std::to_string(charPositionInLine));
            g_env.graphics.print_console("\r");

            // Actual error
            g_env.graphics.colour(0, 255, 255);
            g_env.graphics.print_console(l);
            g_env.graphics.print_console("...\r");
            g_env.graphics.colour(0, 255, 0);
            for (auto i = 0; i < charPositionInLine; i++) {
                g_env.graphics.print_console("-");
            }
            g_env.graphics.print_console("^\r\r");
            g_env.graphics.colour(255, 255, 255);

            g_env.graphics.current_colour = saved_colour;
        }
    }
};

void MyParser::parse_and_compile(Compiler* compiler)
{
    parse_errors = false;
    file_count = 1;
    error_count = 0;
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
    DARICParser parser(&tokens);
    //parser.setErrorHandler(std::make_shared<antlr4::BailErrorStrategy>());
    parser.removeErrorListeners();
    parser.addErrorListener(&errorListener);
    parser.setBuildParseTree(true);
    parser.getInterpreter<atn::ParserATNSimulator>()->setPredictionMode(atn::PredictionMode::SLL);
    //    parser.getInterpreter<atn::ParserATNSimulator>()->setPredictionMode(atn::PredictionMode::LL_EXACT_AMBIG_DETECTION);
    DARICParser::ProgContext* tree = parser.prog();
    /*    try {
        tree = parser.prog();
    } catch (ParseCancellationException& e) {
        std::cout << std::string(e.what()) << std::endl;
        return;
    }*/

    if (parse_errors) {
        if (file_count > 1) {
            throw DARICException(ErrorLocation::PARSER, parsing_filename, static_cast<UINT32>(error_line), static_cast<short>(error_position), "Error(s)");
        } else {
            throw DARICException(ErrorLocation::PARSER, "", static_cast<UINT32>(error_line), static_cast<short>(error_position), "Error(s)");
        }
    }

    // Add to files list
    g_vm->add_filename(filename);

    compiler->compile(g_vm, tree, filename);
}
