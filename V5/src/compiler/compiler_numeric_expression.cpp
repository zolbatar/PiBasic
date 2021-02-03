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
