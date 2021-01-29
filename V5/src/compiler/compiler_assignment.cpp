#include "compiler.h"

antlrcpp::Any Compiler::Compile_LET(DARICParser::StmtContext* context)
{
    return visitChildren(context);
}
