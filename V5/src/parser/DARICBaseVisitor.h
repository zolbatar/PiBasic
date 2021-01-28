
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

  virtual antlrcpp::Any visitNum_var(DARICParser::Num_varContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStr_var(DARICParser::Str_varContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarname(DARICParser::VarnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVardecl(DARICParser::VardeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableassignment(DARICParser::VariableassignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarlist(DARICParser::VarlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprlist(DARICParser::ExprlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintlist(DARICParser::PrintlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(DARICParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(DARICParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStr_func(DARICParser::Str_funcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStr_expr(DARICParser::Str_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNum_func(DARICParser::Num_funcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNum_expr(DARICParser::Num_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelop(DARICParser::RelopContext *ctx) override {
    return visitChildren(ctx);
  }


};

