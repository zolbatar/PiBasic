#include "compiler.h"

antlrcpp::Any Compiler::visitNumExprNumRelop(DARICParser::NumExprNumRelopContext* context)
{
    return visitChildren(context);
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprStrRelop(DARICParser::NumExprStrRelopContext* context)
{
    return visitChildren(context);
    return NULL;
}

antlrcpp::Any Compiler::visitCompare(DARICParser::CompareContext* context)
{
    return visitChildren(context);
}
