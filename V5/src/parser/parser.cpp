#include "parser.h"
#include "DARICLexer.h"
#include "DARICParser.h"
#include "DARICVisitor.h"
#include "antlr4-runtime.h"
#include <iostream>

using namespace antlr4;

void MyParser::parse()
{
    std::ifstream stream;
    stream.open("a.daric");

    ANTLRInputStream input(stream);
    DARICLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    DARICParser parser(&tokens);

/*    tree::ParseTree* tree = parser.expr();
    TreeShapeListener listener;
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);*/
}