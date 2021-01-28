#include "parser.h"
#include "DARICBaseListener.h"
#include "DARICLexer.h"
#include "DARICParser.h"
#include "DARICVisitor.h"
#include "antlr4-runtime.h"
#include <iostream>

using namespace antlr4;

class TreeShapeListener : public DARICBaseListener {
public:
    void enterExpr(DARICParser::ExprContext* ctx) override
    {
        // Do something when entering the key rule.
    }
};
void MyParser::parse()
{
    std::ifstream stream;
    stream.open("Examples\\Tester.daric");

    ANTLRInputStream input(stream);
    DARICLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    DARICParser parser(&tokens);

    tree::ParseTree* tree = parser.expr();
    TreeShapeListener listener;
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
}