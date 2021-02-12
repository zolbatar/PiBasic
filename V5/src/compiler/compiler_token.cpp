#include "compiler.h"

antlrcpp::Any Compiler::visitStmtEND(DARICParser::StmtENDContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    insert_bytecode_notype(Bytecodes::HALT);
    return NULL;
}
