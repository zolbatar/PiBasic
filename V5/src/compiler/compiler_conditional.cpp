#include "compiler.h"

antlrcpp::Any Compiler::visitWhen(DARICParser::WhenContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;

    // Loop around all possibilities
    for (int i = 0; i < context->expr().size(); i++) {

        // Treat as an IF, so keep PC
        UINT32 start_pc = vm->helper_bytecodes().pc;
        IfStatement s;
        s.end_pc = 0;
        if (phase == CompilerPhase::COMPILE) {
            auto f = if_statements.find(start_pc);
            s.end_pc = f->second.end_pc;
        }

        // Duplicate expression on stack, then do compare
        insert_bytecode(Bytecodes::DUP, case_type);

        // And get comparison expression
        visit(context->expr(i));

        // Same or compatible type?
        switch (stack_pop()) {
        case Type::INTEGER:
            switch (case_type) {
            case Type::INTEGER:
                break;
            case Type::FLOAT:
                insert_bytecode(Bytecodes::CONV_INT, Type::FLOAT);
                break;
            default:
                error("Invalid type in WHEN expression");
            }
            break;
        case Type::FLOAT:
            switch (case_type) {
            case Type::INTEGER:
                insert_bytecode(Bytecodes::CONV_FLOAT, Type::INTEGER);
                break;
            case Type::FLOAT:
                break;
            default:
                error("Invalid type in WHEN expression");
            }
            break;
        case Type::STRING:
            switch (case_type) {
            case Type::STRING:
                break;
            default:
                error("Invalid type in WHEN expression");
            }
            break;
        default:
            error("Invalid type in WHEN expression");
        }

        // And do = check
        insert_bytecode(Bytecodes::CMP_E, case_type);

        // We don't know the amount to jump ahead yet
        insert_instruction_notype(Bytecodes::JNE, s.end_pc);
        insert_bytecode_notype(Bytecodes::CASE_S);

        // Code to execute on case match
        visit(context->body());

        // Jump to end of CASE
        insert_instruction_notype(Bytecodes::JUMP, case_end_pc);

        // Set the end PC on write
        if (phase == CompilerPhase::SIZE) {
            s.end_pc = vm->helper_bytecodes().pc;
            if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
        }
    }

    return NULL;
}

antlrcpp::Any Compiler::visitStmtCASE(DARICParser::StmtCASEContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;

    // Use this to work out the end of the CASE for performance
    UINT32 start_pc = vm->helper_bytecodes().pc;
    IfStatement s;
    if (phase == CompilerPhase::COMPILE) {
        auto f = if_statements.find(start_pc);
        case_end_pc = f->second.end_pc;
    }

    // Clear case condition
    insert_bytecode_notype(Bytecodes::CASE_C);

    // Now parse the condition
    visit(context->expr());
    case_type = stack_pop();

    // And then WHENs
    for (int i = 0; i < context->when().size(); i++) {
        visit(context->when(i));
    }

    // And the otherwise if we have it
    if (context->OTHERWISE() != NULL) {

        UINT32 start_pc_otherwise = vm->helper_bytecodes().pc;
        IfStatement s_oth;
        s_oth.end_pc = 0;
        if (phase == CompilerPhase::COMPILE) {
            auto f = if_statements.find(start_pc);
            s_oth.end_pc = f->second.end_pc;
        }

        // We don't know the amount to jump ahead yet
        insert_instruction_notype(Bytecodes::CJUMPT, s_oth.end_pc);

        // This is the code to execute on OTHERWISE
        visit(context->body());

        // Set the end PC on write
        if (phase == CompilerPhase::SIZE) {
            s_oth.end_pc = vm->helper_bytecodes().pc;
            if_statements.insert(std::pair<UINT32, IfStatement>(start_pc_otherwise, std::move(s_oth)));
        }
    }

    // Set the end PC on write
    if (phase == CompilerPhase::SIZE) {
        s.end_pc = vm->helper_bytecodes().pc;
        if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
    }

    // Drop expression
    insert_bytecode_notype(Bytecodes::DROP);

    return NULL;
}

antlrcpp::Any Compiler::visitStmtIF(DARICParser::StmtIFContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;

    // Store stuff like PC
    UINT32 start_pc = vm->helper_bytecodes().pc;
    IfStatement s;
    s.end_pc = 0;
    s.false_pc = 0;
    if (phase == CompilerPhase::COMPILE) {
        auto f = if_statements.find(start_pc);
        s.false_pc = f->second.false_pc;
        s.end_pc = f->second.end_pc;
    }

    // Condition
    visit(context->expr());
    ensure_stack_is_integer();
    stack_pop();

    // We don't know the amount to jump ahead yet
    insert_instruction_notype(Bytecodes::JNE, s.false_pc);

    // This is the truth section
    visit(context->content(0));
    insert_instruction_notype(Bytecodes::JUMP, s.end_pc);

    // and false section (the else bit)
    if (phase == CompilerPhase::SIZE) {
        s.false_pc = vm->helper_bytecodes().pc;
    }
    if (context->content().size() == 2) {
        visit(context->content(1));
    }

    // If this is phase 1, save these PC's to use in phase 2
    if (phase == CompilerPhase::SIZE) {
        s.end_pc = vm->helper_bytecodes().pc;
        if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
    }

    return NULL;
}

antlrcpp::Any Compiler::visitStmtIFMultiline(DARICParser::StmtIFMultilineContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;

    // Store stuff like PC
    UINT32 start_pc = vm->helper_bytecodes().pc;
    IfStatement s;
    s.end_pc = 0;
    s.false_pc = 0;
    if (phase == CompilerPhase::COMPILE) {
        auto f = if_statements.find(start_pc);
        s.false_pc = f->second.false_pc;
        s.end_pc = f->second.end_pc;
    }

    // Condition
    visit(context->expr());
    ensure_stack_is_integer();
    stack_pop();

    // We don't know the amount to jump ahead yet
    insert_instruction_notype(Bytecodes::JNE, s.false_pc);

    // This is the truth section
    visit(context->linePlus(0));
    insert_instruction_notype(Bytecodes::JUMP, s.end_pc);

    // and false section (the else bit)
    if (phase == CompilerPhase::SIZE) {
        s.false_pc = vm->helper_bytecodes().pc;
    }
    if (context->linePlus().size() == 2) {
        visit(context->linePlus(1));
    }

    // If this is phase 1, save these PC's to use in phase 2
    if (phase == CompilerPhase::SIZE) {
        s.end_pc = vm->helper_bytecodes().pc;
        if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
    }

    return NULL;
}
