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
    antlrcpp::Any result = visitChildren(context);
    if (context->LET() != NULL) {
        return Compile_LET(context);
    } else if (context->PRINT() != NULL) {
        return Compile_PRINT(context);
    }
    return result;
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

antlrcpp::Any Compiler::visitPrintList(DARICParser::PrintListContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitExpr(DARICParser::ExprContext* context)
{
    visitChildren(context);

    // Work through the stack and print anything off
    if (state == CompilerState::PRINT) {
        while (stack_size() >= 1) {
            insert_instruction_based_on_type(
                {
                    { Type::INTEGER, Bytecodes::PRINT_I },
                    { Type::REAL, Bytecodes::PRINT_F },
                    { Type::STRING, Bytecodes::PRINT_S },
                },
                peek_type(), create_print_flag());
            stack_pop();
        }
    }

    return NULL;
}

antlrcpp::Any Compiler::visitNumber(DARICParser::NumberContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitStrFunc(DARICParser::StrFuncContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitStrExpr(DARICParser::StrExprContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumFunc(DARICParser::NumFuncContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumExpr(DARICParser::NumExprContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitRelop(DARICParser::RelopContext* context)
{
    return visitChildren(context);
}
