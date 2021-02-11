#include "compiler.h"

antlrcpp::Any Compiler::visitStmtTRACEON(DARICParser::StmtTRACEONContext* context)
{
    set_pos(context->start);
    insert_bytecode_notype(Bytecodes::TRACEON);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTRACEOFF(DARICParser::StmtTRACEOFFContext* context)
{
    set_pos(context->start);
    insert_bytecode_notype(Bytecodes::TRACEOFF);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtBREAKPOINT(DARICParser::StmtBREAKPOINTContext* context)
{
    set_pos(context->start);
    insert_bytecode_notype(Bytecodes::BREAKPOINT);
    return NULL;
}
