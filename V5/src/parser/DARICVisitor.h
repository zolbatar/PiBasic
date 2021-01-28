
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
    virtual antlrcpp::Any visitProg(DARICParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitLine(DARICParser::LineContext *context) = 0;

    virtual antlrcpp::Any visitLinenumber(DARICParser::LinenumberContext *context) = 0;

    virtual antlrcpp::Any visitStmt(DARICParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitVar(DARICParser::VarContext *context) = 0;

    virtual antlrcpp::Any visitNum_var(DARICParser::Num_varContext *context) = 0;

    virtual antlrcpp::Any visitStr_var(DARICParser::Str_varContext *context) = 0;

    virtual antlrcpp::Any visitVarname(DARICParser::VarnameContext *context) = 0;

    virtual antlrcpp::Any visitVardecl(DARICParser::VardeclContext *context) = 0;

    virtual antlrcpp::Any visitVariableassignment(DARICParser::VariableassignmentContext *context) = 0;

    virtual antlrcpp::Any visitVarlist(DARICParser::VarlistContext *context) = 0;

    virtual antlrcpp::Any visitExprlist(DARICParser::ExprlistContext *context) = 0;

    virtual antlrcpp::Any visitPrintlist(DARICParser::PrintlistContext *context) = 0;

    virtual antlrcpp::Any visitExpr(DARICParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitNumber(DARICParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitStr_func(DARICParser::Str_funcContext *context) = 0;

    virtual antlrcpp::Any visitStr_expr(DARICParser::Str_exprContext *context) = 0;

    virtual antlrcpp::Any visitNum_func(DARICParser::Num_funcContext *context) = 0;

    virtual antlrcpp::Any visitNum_expr(DARICParser::Num_exprContext *context) = 0;

    virtual antlrcpp::Any visitRelop(DARICParser::RelopContext *context) = 0;


};

