#include "compiler.h"

antlrcpp::Any Compiler::visitWhen(DARICParser::WhenContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);

    // Loop around all possibilities
    for (int i = 0; i < context->expr().size(); i++) {

        // Treat as an IF, so keep PC
        UINT32 start_pc = vm->helper_bytecodes().pc;
        IfStatement s;
        s.end_pc = 0;
        if (phase == CompilerPhase::COMPILE) {
            auto f = if_statements.find(start_pc);
            s.end_pc = (*f).second.end_pc;
        }

        // Duplicate expression on stack, then do compare
        insert_bytecode(Bytecodes::DUP, Type::NOTYPE);

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
        insert_instruction(Bytecodes::JNE, Type::NOTYPE, s.end_pc);
        insert_bytecode(Bytecodes::CASE_S, Type::NOTYPE);

        // Code to execute on case match
        visit(context->bodyStar());

        // Set the end PC on write
        if (phase == CompilerPhase::SIZE) {
            s.end_pc = vm->helper_bytecodes().pc;
        }

        // If this is phase 1, save these PC's to use in phase 2
        if (phase == CompilerPhase::SIZE) {
            if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
        }
    }

    return NULL;
}

antlrcpp::Any Compiler::visitStmtCASE(DARICParser::StmtCASEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);

    // Clear case condition
    insert_bytecode(Bytecodes::CASE_C, Type::NOTYPE);

    // Now parse the condition
    visit(context->expr());

    // And then WHENs
    for (int i = 0; i < context->when().size(); i++) {
        visit(context->when(i));
    }

    case_type = stack_pop();

    // And the otherwise if we have it
    if (context->OTHERWISE() != NULL) {

        UINT32 start_pc = vm->helper_bytecodes().pc;
        IfStatement s;
        s.end_pc = 0;
        if (phase == CompilerPhase::COMPILE) {
            auto f = if_statements.find(start_pc);
            s.end_pc = (*f).second.end_pc;
        }

        // We don't know the amount to jump ahead yet
        insert_instruction(Bytecodes::CJUMPT, Type::NOTYPE, s.end_pc);

        // This is the code to execute on OTHERWISE
        visit(context->bodyStar());

        // Set the end PC on write
        if (phase == CompilerPhase::SIZE) {
            s.end_pc = vm->helper_bytecodes().pc;
        }

        // If this is phase 1, save these PC's to use in phase 2
        if (phase == CompilerPhase::SIZE) {
            if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
        }
    }

    // Drop expression
    insert_bytecode(Bytecodes::DROP, Type::NOTYPE);

    return NULL;
}

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
