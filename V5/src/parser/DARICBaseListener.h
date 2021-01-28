
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "DARICListener.h"


/**
 * This class provides an empty implementation of DARICListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  DARICBaseListener : public DARICListener {
public:

  virtual void enterMain(DARICParser::MainContext * /*ctx*/) override { }
  virtual void exitMain(DARICParser::MainContext * /*ctx*/) override { }

  virtual void enterExpr(DARICParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(DARICParser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

