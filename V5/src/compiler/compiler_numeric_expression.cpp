#include "compiler.h"

antlrcpp::Any Compiler::visitNumExprNumber(DARICParser::NumExprNumberContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumExprFunc(DARICParser::NumExprFuncContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumExprNested(DARICParser::NumExprNestedContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}
