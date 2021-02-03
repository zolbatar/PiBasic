#include "compiler.h"

antlrcpp::Any Compiler::visitStmtEND(DARICParser::StmtENDContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    insert_bytecode(Bytecodes::HALT, Type::NOTYPE);
    return NULL;
}
