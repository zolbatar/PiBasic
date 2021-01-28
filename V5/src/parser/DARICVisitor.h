
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "DARICParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by DARICParser.
 */
class  DARICVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by DARICParser.
   */
    virtual antlrcpp::Any visitMain(DARICParser::MainContext *context) = 0;

    virtual antlrcpp::Any visitExpr(DARICParser::ExprContext *context) = 0;


};

