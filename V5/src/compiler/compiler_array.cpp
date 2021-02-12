#include "compiler.h"

antlrcpp::Any Compiler::visitStmtDIM(DARICParser::StmtDIMContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    state = context->LOCAL() != NULL ? CompilerState::LOCALDIM : CompilerState::DIM;
    for (auto i = 0; i < context->varDeclWithDimension().size(); i++) {

        // Get variable name and type
        visit(context->varDeclWithDimension(i));
    }
    state = CompilerState::NOSTATE;

    return NULL;
}

antlrcpp::Any Compiler::visitVarDeclWithDimension(DARICParser::VarDeclWithDimensionContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;

    // Regular array?
    if (context->typeVar() == NULL) {

        // Get variable name and type
        auto saved_state = state;
        state = CompilerState::ASSIGNMENT;
        visit(context->justVar());
        state = saved_state;

        // Adjust type to array version
        switch (current_var.type) {
        case Type::INTEGER:
            current_var.type = Type::INTEGER_ARRAY;
            break;
        case Type::FLOAT:
            current_var.type = Type::FLOAT_ARRAY;
            break;
        case Type::STRING:
            current_var.type = Type::STRING_ARRAY;
            break;
        default:
            error("Unexpected array type");
        }
        if (state == CompilerState::DIM) {
            find_or_create_variable_in_scope(VariableScope::GLOBAL);
        } else {
            find_or_create_variable_in_scope(VariableScope::LOCAL);
        }

        // Number of dimensions
        auto saved = current_var;
        last_array_num_dimensions = static_cast<UINT32>(context->numExpr().size());
        for (UINT32 i = 0; i < last_array_num_dimensions; i++) {
            auto saved_state = state;
            state = CompilerState::NOSTATE;
            visit(context->numExpr(i));
            state = saved_state;
            ensure_stack_is_integer();
            stack_pop();
        }
        current_var = saved;

        // Set number of dimensions
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, last_array_num_dimensions);
        insert_instruction(Bytecodes::DIM, current_var.type, current_var.id);
    } else {
        auto varName = context->varName()->getText();
        if (custom_types.count(varName) == 0) {
            error("Type '" + varName + "' not found");
        }
        auto t = (*custom_types.find(varName)).second;

        // Get number of entries
        auto saved = current_var;
        auto saved_state = state;
        state = CompilerState::NOSTATE;
        visit(context->numExpr(0));
        state = saved_state;
        ensure_stack_is_integer();
        stack_pop();
        current_var = saved;

        // Get variable name and type
        visit(context->typeVar());
        current_var.type = Type::TYPE_ARRAY;
        if (state == CompilerState::DIM) {
            find_or_create_variable_in_scope(VariableScope::GLOBAL);
        } else {
            find_or_create_variable_in_scope(VariableScope::LOCAL);
        }

        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 1);
        insert_bytecode(Bytecodes::ADD, Type::INTEGER);
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, static_cast<int>(t.members.size()));
        insert_bytecode(Bytecodes::MULTIPLY, Type::INTEGER);
        insert_instruction_notype(Bytecodes::NEW_TYPE_ARRAY, current_var.id);

        set_custom_type(context->varName()->getText());
    }
    return NULL;
}

antlrcpp::Any Compiler::visitVarDeclArrayed(DARICParser::VarDeclArrayedContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    auto saved_state = state;
    state = CompilerState::NOSTATE;
    last_array_dimensions = 0;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
        last_array_dimensions++;
    }
    state = saved_state;
    visit(context->justVar());

    // Convert to arrayed type
    switch (current_var.type) {
    case Type::INTEGER:
        current_var.type = Type::INTEGER_ARRAY;
        break;
    case Type::FLOAT:
        current_var.type = Type::FLOAT_ARRAY;
        break;
    case Type::STRING:
        current_var.type = Type::STRING_ARRAY;
        break;
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarFloatArray(DARICParser::NumVarFloatArrayContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    auto saved_state = state;
    last_array_dimensions = 0;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
        last_array_dimensions++;
    }
    visit(context->varName());
    if (state == CompilerState::NOSTATE) {
        find_variable(false, true);
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, last_array_num_dimensions);
        insert_instruction(Bytecodes::LOAD_ARRAY, Type::FLOAT_ARRAY, current_var.id);
        stack_push(Type::FLOAT);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarIntegerArray(DARICParser::NumVarIntegerArrayContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    auto saved_state = state;
    last_array_dimensions = 0;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
        last_array_dimensions++;
    }
    visit(context->varNameInteger());
    if (state == CompilerState::NOSTATE) {
        find_variable(false, true);
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, last_array_num_dimensions);
        insert_instruction(Bytecodes::LOAD_ARRAY, Type::INTEGER_ARRAY, current_var.id);
        stack_push(Type::INTEGER);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarStringArray(DARICParser::NumVarStringArrayContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    auto saved_state = state;
    last_array_dimensions = 0;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
        last_array_dimensions++;
    }
    visit(context->varNameString());
    if (state == CompilerState::NOSTATE) {
        find_variable(false, true);
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, last_array_num_dimensions);
        insert_instruction(Bytecodes::LOAD_ARRAY, Type::STRING_ARRAY, current_var.id);
        stack_push(Type::STRING);
    }
    return NULL;
}
