#include "compiler.h"

antlrcpp::Any Compiler::visitStmtDIM(DARICParser::StmtDIMContext* context)
{
    set_pos(context->start);
    state = CompilerState::DIM;
    for (auto i = 0; i < context->varDeclWithDimension().size(); i++) {

        // Get variable name and type
        visit(context->varDeclWithDimension(i));
        find_or_create_variable(VariableScope::GLOBAL);

        // Set number of dimensions
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, last_array_num_dimensions);
        insert_instruction(Bytecodes::DIM, current_var.type, current_var.id);
    }

    state = CompilerState::NOSTATE;
    return NULL;
}

antlrcpp::Any Compiler::visitVarDeclWithDimension(DARICParser::VarDeclWithDimensionContext* context)
{
    set_pos(context->start);

    // Get variable name and type
    visit(context->var());

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
    auto saved_type = current_var.type;

    // Number of dimensions
    last_array_num_dimensions = static_cast<UINT32>(context->numExpr().size());
    for (UINT32 i = 0; i < last_array_num_dimensions; i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }

    current_var.type = saved_type;
    return NULL;
}

antlrcpp::Any Compiler::visitVarDeclArrayed(DARICParser::VarDeclArrayedContext* context)
{
    set_pos(context->start);
    auto saved_state = state;
    state = CompilerState::NOSTATE;
    last_array_num_dimensions = static_cast<UINT32>(context->numExpr().size());
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    state = saved_state;
    visit(context->var());
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarFloatArray(DARICParser::NumVarFloatArrayContext* context)
{
    set_pos(context->start);
    auto saved_state = state;
    last_array_num_dimensions = static_cast<UINT32>(context->numExpr().size());
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
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
    auto saved_state = state;
    last_array_num_dimensions = static_cast<UINT32>(context->numExpr().size());
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
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
    auto saved_state = state;
    last_array_num_dimensions = static_cast<UINT32>(context->numExpr().size());
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
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
