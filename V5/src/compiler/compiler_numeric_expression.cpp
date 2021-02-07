#include "compiler.h"

antlrcpp::Any Compiler::visitNumExprNumber(DARICParser::NumExprNumberContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumExprVar(DARICParser::NumExprVarContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumExprFunc(DARICParser::NumExprFuncContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumExprNested(DARICParser::NumExprNestedContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any visitStmtFALSE(DARICParser::StmtFALSEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0);
    return NULL;
}

antlrcpp::Any visitStmtTRUE(DARICParser::StmtTRUEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 1);
    return NULL;
}
