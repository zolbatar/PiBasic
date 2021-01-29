
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "DARICVisitor.h"


/**
 * This class provides an empty implementation of DARICVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  DARICBaseVisitor : public DARICVisitor {
public:

  virtual antlrcpp::Any visitProg(DARICParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLine(DARICParser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLinenumber(DARICParser::LinenumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(DARICParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar(DARICParser::VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVar(DARICParser::NumVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrVar(DARICParser::StrVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarName(DARICParser::VarNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDecl(DARICParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarAssign(DARICParser::VarAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarList(DARICParser::VarListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprList(DARICParser::ExprListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintList(DARICParser::PrintListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(DARICParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(DARICParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberInteger(DARICParser::NumberIntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberFloat(DARICParser::NumberFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrFunc(DARICParser::StrFuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(DARICParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrExpr(DARICParser::StrExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFunc(DARICParser::NumFuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExpr(DARICParser::NumExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelop(DARICParser::RelopContext *ctx) override {
    return visitChildren(ctx);
  }


};

