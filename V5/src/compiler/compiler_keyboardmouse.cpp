#include "compiler.h"

antlrcpp::Any Compiler::visitStmtMOUSE(DARICParser::StmtMOUSEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtINKEY(DARICParser::StmtINKEYContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtINKEYS(DARICParser::StmtINKEYSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtGET(DARICParser::StmtGETContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtGETS(DARICParser::StmtGETSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}
