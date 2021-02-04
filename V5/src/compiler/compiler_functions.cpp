#include "compiler.h"

antlrcpp::Any Compiler::visitStmtDEF(DARICParser::StmtDEFContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitStmtRETURN(DARICParser::StmtRETURNContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    if (context->expr() != NULL) {
        visit(context->expr());
        stack_pop();
    }
    return NULL;
}
