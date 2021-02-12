#include "compiler.h"

antlrcpp::Any Compiler::visitStmtCHAIN(DARICParser::StmtCHAINContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->strExpr());
    stack_pop();
    insert_bytecode_notype(Bytecodes::CHAIN);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtINSTALL(DARICParser::StmtINSTALLContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->strExpr());
    stack_pop();
    //insert_bytecode_notype(Bytecodes::CHAIN);
    return NULL;
}
