#include "compiler.h"

antlrcpp::Any Compiler::visitStmtFORIN(DARICParser::StmtFORINContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);

    // Get array variable and push onto stack
    visit(context->justVar(1));
    if (context->LOCAL() != NULL) {
        find_or_create_variable(VariableScope::LOCAL);
    } else {
        find_or_create_variable(VariableScope::GLOBAL);
    }
    insert_instruction(Bytecodes::FASTCONST_VAR, Type::NOTYPE, current_var.id);
    auto saved = current_var;

    // Get loop variable
    visit(context->justVar(0));
    if (context->LOCAL() != NULL) {
        find_or_create_variable(VariableScope::LOCAL);
    } else {
        find_or_create_variable(VariableScope::GLOBAL);
    }

    // Check the types match
    switch (saved.type) {
    case Type::INTEGER_ARRAY:
        if (current_var.type != Type::INTEGER) {
            error("INTEGER ARRAY needs an INTEGER variable");
        }
        break;
    case Type::FLOAT_ARRAY:
        if (current_var.type != Type::FLOAT) {
            error("FLOAT ARRAY needs an FLOAT variable");
        }
        break;
    case Type::STRING_ARRAY:
        if (current_var.type != Type::STRING) {
            error("STRING ARRAY needs an STRING variable");
        }
        break;
    default:
        error("Unsupported type in FOR IN");
    }

    // PC
    insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, vm->helper_bytecodes().pc + 2);

    // Actual FOR loop token
    insert_instruction(Bytecodes::FORIN, current_var.type, current_var.id);

    // Process loop content
    visit(context->body());

    // And next
    insert_instruction(Bytecodes::NEXTIN, current_var.type, current_var.id);

    return NULL;
}

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
    visit(context->body());

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
    visit(context->body());

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
    visit(context->body());

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
