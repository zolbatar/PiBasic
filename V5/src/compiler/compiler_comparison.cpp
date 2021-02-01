#include "compiler.h"

/*tlrcpp::Any Compiler::visitStrRelop(DARICParser::StrRelopContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumRelop(DARICParser::NumRelopContext* context)
{
    return visitChildren(context);
}*/

antlrcpp::Any Compiler::visitCompare(DARICParser::CompareContext* context)
{
    return visitChildren(context);
}
