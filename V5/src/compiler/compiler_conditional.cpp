#include "compiler.h"

antlrcpp::Any Compiler::visitStmtIF(DARICParser::StmtIFContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);

    // Store stuff like PC
    UINT32 start_pc = vm->helper_bytecodes().pc;
    IfStatement s;
    s.end_pc = 0;
    s.false_pc = 0;
    if (phase == CompilerPhase::COMPILE) {
        auto f = if_statements.find(start_pc);
        s.false_pc = (*f).second.false_pc;
        s.end_pc = (*f).second.end_pc;
    }

    // Condition
    visit(context->expr());
    ensure_stack_is_integer();
    stack_pop();

    // We don't know the amount to jump ahead yet
    insert_instruction(Bytecodes::JNE, Type::NOTYPE, s.false_pc);

    // This is the truth section
    if (context->t != nullptr) {
        visit(context->t);
    }
    insert_instruction(Bytecodes::JUMP, Type::NOTYPE, s.end_pc);

    // and false section (the else bit)
    if (phase == CompilerPhase::SIZE) {
        s.false_pc = vm->helper_bytecodes().pc;
    }
    if (context->f != nullptr) {
        visit(context->f);
    }
    if (phase == CompilerPhase::SIZE) {
        s.end_pc = vm->helper_bytecodes().pc;
    }

    // If this is phase 1, save these PC's to use in phase 2
    if (phase == CompilerPhase::SIZE) {
        if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
    }

    return NULL;
}

antlrcpp::Any Compiler::visitStmtIFMultiline(DARICParser::StmtIFMultilineContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);

    // Store stuff like PC
    UINT32 start_pc = vm->helper_bytecodes().pc;
    IfStatement s;
    s.end_pc = 0;
    s.false_pc = 0;
    if (phase == CompilerPhase::COMPILE) {
        auto f = if_statements.find(start_pc);
        s.false_pc = (*f).second.false_pc;
        s.end_pc = (*f).second.end_pc;
    }

    // Condition
    visit(context->expr());
    ensure_stack_is_integer();
    stack_pop();

    // We don't know the amount to jump ahead yet
    insert_instruction(Bytecodes::JNE, Type::NOTYPE, s.false_pc);

    // This is the truth section
    if (context->t != nullptr) {
        visit(context->t);
    }
    insert_instruction(Bytecodes::JUMP, Type::NOTYPE, s.end_pc);

    // and false section (the else bit)
    if (phase == CompilerPhase::SIZE) {
        s.false_pc = vm->helper_bytecodes().pc;
    }
    if (context->f != nullptr) {
        visit(context->f);
    }
    if (phase == CompilerPhase::SIZE) {
        s.end_pc = vm->helper_bytecodes().pc;
    }

    // If this is phase 1, save these PC's to use in phase 2
    if (phase == CompilerPhase::SIZE) {
        if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
    }

    return NULL;
}
