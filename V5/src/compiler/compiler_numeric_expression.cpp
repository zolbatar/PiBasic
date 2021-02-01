#include "compiler.h"

antlrcpp::Any Compiler::visitNumExprFunc(DARICParser::NumExprFuncContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumExprNested(DARICParser::NumExprNestedContext* context)
{
    return visitChildren(context);
}
