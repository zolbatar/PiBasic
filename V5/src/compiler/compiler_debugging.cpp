#include "compiler.h"

antlrcpp::Any Compiler::visitStmtTRACEON(DARICParser::StmtTRACEONContext* context)
{
    set_pos(context->start);
    insert_bytecode(Bytecodes::TRACEON, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTRACEOFF(DARICParser::StmtTRACEOFFContext* context)
{
    set_pos(context->start);
    insert_bytecode(Bytecodes::TRACEOFF, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtBREAKPOINT(DARICParser::StmtBREAKPOINTContext* context)
{
    set_pos(context->start);
    insert_bytecode(Bytecodes::BREAKPOINT, Type::NOTYPE);
    return NULL;
}
