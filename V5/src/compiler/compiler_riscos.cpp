#include "compiler.h"

antlrcpp::Any Compiler::visitStmtOSCLI(DARICParser::StmtOSCLIContext* context)
{
    set_pos(context->start);
    //visit(context->strExpr());
    return NULL;
}
