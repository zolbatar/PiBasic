
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

    virtual antlrcpp::Any visitNumVar(DARICParser::NumVarContext *context) = 0;

    virtual antlrcpp::Any visitStrVar(DARICParser::StrVarContext *context) = 0;

    virtual antlrcpp::Any visitVarName(DARICParser::VarNameContext *context) = 0;

    virtual antlrcpp::Any visitVarDecl(DARICParser::VarDeclContext *context) = 0;

    virtual antlrcpp::Any visitVarAssign(DARICParser::VarAssignContext *context) = 0;

    virtual antlrcpp::Any visitVarList(DARICParser::VarListContext *context) = 0;

    virtual antlrcpp::Any visitExprList(DARICParser::ExprListContext *context) = 0;

    virtual antlrcpp::Any visitPrintList(DARICParser::PrintListContext *context) = 0;

    virtual antlrcpp::Any visitExpr(DARICParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitNumber(DARICParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitNumberInteger(DARICParser::NumberIntegerContext *context) = 0;

    virtual antlrcpp::Any visitNumberFloat(DARICParser::NumberFloatContext *context) = 0;

    virtual antlrcpp::Any visitStrFunc(DARICParser::StrFuncContext *context) = 0;

    virtual antlrcpp::Any visitString(DARICParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitStrExpr(DARICParser::StrExprContext *context) = 0;

    virtual antlrcpp::Any visitNumFunc(DARICParser::NumFuncContext *context) = 0;

    virtual antlrcpp::Any visitNumExpr(DARICParser::NumExprContext *context) = 0;

    virtual antlrcpp::Any visitRelop(DARICParser::RelopContext *context) = 0;


};

