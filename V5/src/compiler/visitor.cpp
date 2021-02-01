#include "compiler.h"

antlrcpp::Any Compiler::visitProg(DARICParser::ProgContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitLine(DARICParser::LineContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitLinenumber(DARICParser::LinenumberContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitStmt(DARICParser::StmtContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitExprList(DARICParser::ExprListContext* context)
{
    return visitChildren(context);
}

    antlrcpp::Any Compiler::visitExpr(DARICParser::ExprContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumber(DARICParser::NumberContext* context)
{
    return visitChildren(context);
}
