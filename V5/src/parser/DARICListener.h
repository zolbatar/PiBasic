
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "DARICParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by DARICParser.
 */
class  DARICListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMain(DARICParser::MainContext *ctx) = 0;
  virtual void exitMain(DARICParser::MainContext *ctx) = 0;

  virtual void enterExpr(DARICParser::ExprContext *ctx) = 0;
  virtual void exitExpr(DARICParser::ExprContext *ctx) = 0;


};

