#include "compiler.h"

antlrcpp::Any Compiler::visitStmtFORIN(DARICParser::StmtFORINContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;

    // Get array variable and push onto stack
    visit(context->justVar(1));
    find_variable(false, true);
    insert_instruction_notype(Bytecodes::FASTCONST_VAR, current_var.id);
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
    saved = current_var;

    // Process loop content
    visit(context->body());

    // And next
    insert_instruction(Bytecodes::NEXTIN, saved.type, saved.id);

    return NULL;
}

antlrcpp::Any Compiler::visitStmtFOR(DARICParser::StmtFORContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;

    // Get variable
    visit(context->justNumberVar());
    if (context->LOCAL() != NULL) {
        find_or_create_variable(VariableScope::LOCAL);
    } else {
        find_or_create_variable(VariableScope::GLOBAL);
    }
    auto saved = current_var;

    // From value (and store in variable)
    visit(context->numExpr(0));
    switch (stack_pop()) {
    case Type::INTEGER:
        switch (saved.type) {
        case Type::INTEGER:
            break;
        case Type::FLOAT:
            insert_bytecode(Bytecodes::CONV_FLOAT, Type::INTEGER);
            break;
        default:
            error("Invalid type in FOR loop");
        }
        break;
    case Type::FLOAT:
        switch (saved.type) {
        case Type::INTEGER:
            insert_bytecode(Bytecodes::CONV_INT, Type::FLOAT);
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
    insert_instruction(Bytecodes::STORE, saved.type, saved.id);

    // To value
    visit(context->numExpr(1));
    switch (stack_pop()) {
    case Type::INTEGER:
        switch (saved.type) {
        case Type::INTEGER:
            break;
        case Type::FLOAT:
            insert_bytecode(Bytecodes::CONV_FLOAT, Type::INTEGER);
            break;
        default:
            error("Invalid type in FOR loop");
        }
        break;
    case Type::FLOAT:
        switch (saved.type) {
        case Type::INTEGER:
            insert_bytecode(Bytecodes::CONV_INT, Type::FLOAT);
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
    insert_instruction(Bytecodes::LOAD, saved.type, saved.id);
    insert_bytecode(Bytecodes::SUBTRACT, saved.type);

    // Step?
    if (context->STEP() != NULL) {
        visit(context->numExpr(2));
        switch (stack_pop()) {
        case Type::INTEGER:
            switch (saved.type) {
            case Type::INTEGER:
                break;
            case Type::FLOAT:
                insert_bytecode(Bytecodes::CONV_FLOAT, Type::INTEGER);
                break;
            default:
                error("Invalid type in FOR loop");
            }
            break;
        case Type::FLOAT:
            switch (saved.type) {
            case Type::INTEGER:
                insert_bytecode(Bytecodes::CONV_INT, Type::FLOAT);
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
        switch (saved.type) {
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
    insert_instruction(Bytecodes::FOR, saved.type, saved.id);

    // Process body
    visit(context->body());

    // And next
    insert_instruction(Bytecodes::NEXT, saved.type, saved.id);

    return NULL;
}

antlrcpp::Any Compiler::visitStmtREPEAT(DARICParser::StmtREPEATContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;

    insert_bytecode_notype(Bytecodes::REPEAT);

    // Body
    visit(context->body());

    // Comparison
    visit(context->expr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode_notype(Bytecodes::JNEREP);

    return NULL;
}

antlrcpp::Any Compiler::visitStmtWHILE(DARICParser::StmtWHILEContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;

    UINT32 start_pc = vm->helper_bytecodes().pc;
    IfStatement s;
    s.end_pc = 0;
    if (phase == CompilerPhase::COMPILE) {
        auto f = if_statements.find(start_pc);
        s.end_pc = f->second.end_pc;
    }

    // This is the condition
    visit(context->expr());
    stack_pop();

    // We don't know the amount to jump ahead yet
    insert_instruction_notype(Bytecodes::JNE, s.end_pc);

    // Body
    visit(context->body());

    insert_instruction_notype(Bytecodes::JUMP, start_pc);

    if (phase == CompilerPhase::SIZE) {
        s.end_pc = vm->helper_bytecodes().pc;
    }

    // If this is phase 1, save these PC's to use in phase 2
    if (phase == CompilerPhase::SIZE) {
        if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
    }

    return NULL;
}
