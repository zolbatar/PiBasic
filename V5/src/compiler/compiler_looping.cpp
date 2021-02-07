#include "compiler.h"

antlrcpp::Any Compiler::visitStmtFOR(DARICParser::StmtFORContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);

    // Get variable
    visit(context->justNumberVar());
    if (context->LOCAL() != NULL) {
        find_or_create_variable(VariableScope::LOCAL);
    } else {
        find_or_create_variable(VariableScope::GLOBAL);
    }

    // From value (and store in variable)
    visit(context->numExpr(0));
    switch (stack_pop()) {
    case Type::INTEGER:
        switch (current_var.type) {
        case Type::INTEGER:
            break;
        case Type::FLOAT:
            insert_bytecode(Bytecodes::CONV_INT, Type::FLOAT);
            break;
        default:
            error("Invalid type in FOR loop");
        }
        break;
    case Type::FLOAT:
        switch (current_var.type) {
        case Type::INTEGER:
            insert_bytecode(Bytecodes::CONV_FLOAT, Type::INTEGER);
            break;
        case Type::FLOAT:
            break;
        default:
            error("Invalid type in FOR loop");
        }
        break;
    default:
        error("Invalid type in FOR loop");
    }
    insert_bytecode(Bytecodes::STORE, current_var.type);

    // To value
    visit(context->numExpr(1));
    switch (stack_pop()) {
    case Type::INTEGER:
        switch (current_var.type) {
        case Type::INTEGER:
            break;
        case Type::FLOAT:
            insert_bytecode(Bytecodes::CONV_INT, Type::FLOAT);
            break;
        default:
            error("Invalid type in FOR loop");
        }
        break;
    case Type::FLOAT:
        switch (current_var.type) {
        case Type::INTEGER:
            insert_bytecode(Bytecodes::CONV_FLOAT, Type::INTEGER);
            break;
        case Type::FLOAT:
            break;
        default:
            error("Invalid type in FOR loop");
        }
        break;
    default:
        error("Invalid type in FOR loop");
    }
    insert_instruction(Bytecodes::LOAD, current_var.type, current_var.id);
    insert_bytecode(Bytecodes::SUBTRACT, current_var.type);

    // Step?
    if (context->STEP() != NULL) {
        visit(context->numExpr(2));
        switch (stack_pop()) {
        case Type::INTEGER:
            switch (current_var.type) {
            case Type::INTEGER:
                break;
            case Type::FLOAT:
                insert_bytecode(Bytecodes::CONV_INT, Type::FLOAT);
                break;
            default:
                error("Invalid type in FOR loop");
            }
            break;
        case Type::FLOAT:
            switch (current_var.type) {
            case Type::INTEGER:
                insert_bytecode(Bytecodes::CONV_FLOAT, Type::INTEGER);
                break;
            case Type::FLOAT:
                break;
            default:
                error("Invalid type in FOR loop");
            }
            break;
        default:
            error("Invalid type in FOR loop");
        }
    } else {
        switch (current_var.type) {
        case Type::INTEGER:
            insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 1);
            break;
        case Type::FLOAT:
            insert_instruction(Bytecodes::LOAD, Type::FLOAT, constant_float_create(1.0));
            break;
        }
    }

    // PC
    insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, vm->helper_bytecodes().pc + 2);

    // Actual FOR loop token
    insert_instruction(Bytecodes::FOR, current_var.type, current_var.id);

    // Process body
    visit(context->bodyStar());

    // And next
    insert_instruction(Bytecodes::NEXT, current_var.type, current_var.id);

    return NULL;
}

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
