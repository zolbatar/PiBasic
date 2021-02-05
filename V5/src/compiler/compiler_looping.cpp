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

antlrcpp::Any Compiler::visitStmtWHILE(DARICParser::StmtWHILEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);

    UINT32 start_pc = vm->helper_bytecodes().pc;
    IfStatement s;
    s.end_pc = 0;
    if (phase == CompilerPhase::COMPILE) {
        auto f = if_statements.find(start_pc);
        s.end_pc = (*f).second.end_pc;
    }

    // This is the condition
    visit(context->expr());
    stack_pop();

    // We don't know the amount to jump ahead yet
    insert_instruction(Bytecodes::JNE, Type::NOTYPE, s.end_pc);

    // Body
    for (int i = 0; i < context->body().size(); i++) {
        visit(context->body(i));
    }

    insert_instruction(Bytecodes::JUMP, Type::NOTYPE, start_pc);

    if (phase == CompilerPhase::SIZE) {
        s.end_pc = vm->helper_bytecodes().pc;
    }

    // If this is phase 1, save these PC's to use in phase 2
    if (phase == CompilerPhase::SIZE) {
        if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
    }

    return NULL;
}
