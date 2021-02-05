#include "compiler.h"

antlrcpp::Any Compiler::visitStmtREPEAT(DARICParser::StmtREPEATContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);

    insert_bytecode(Bytecodes::REPEAT, Type::NOTYPE);

    // Body
    for (int i = 0; i < context->body().size(); i++) {
        visit(context->body(i));
    }

    // Comparison
    visit(context->expr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::JNEREP, Type::NOTYPE);

    return NULL;
}
