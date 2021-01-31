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
    antlrcpp::Any result = visitChildren(context);
    return result;
}

antlrcpp::Any Compiler::visitStmt(DARICParser::StmtContext* context)
{
    if (context->LET() != NULL) {
        return Compile_LET(context);
    } else if (context->PRINT() != NULL) {
        return Compile_PRINT(context);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitVar(DARICParser::VarContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumVar(DARICParser::NumVarContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitStrVar(DARICParser::StrVarContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitVarName(DARICParser::VarNameContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitVarDecl(DARICParser::VarDeclContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitVarAssign(DARICParser::VarAssignContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitVarList(DARICParser::VarListContext* context)
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

antlrcpp::Any Compiler::visitRelop(DARICParser::RelopContext* context)
{
    return visitChildren(context);
}
