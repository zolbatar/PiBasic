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
        insert_instruction(Bytecodes::CONST_I, last_array_num_dimensions);
        insert_instruction_based_on_type(
            {
                { Type::INTEGER_ARRAY, Bytecodes::DIM_I },
                { Type::REAL_ARRAY, Bytecodes::DIM_F },
                { Type::STRING_ARRAY, Bytecodes::DIM_S },
            },
            last_var.type, last_var.id);
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
    switch (last_var.type) {
    case Type::INTEGER:
        last_var.type = Type::INTEGER_ARRAY;
        break;
    case Type::REAL:
        last_var.type = Type::REAL_ARRAY;
        break;
    case Type::STRING:
        last_var.type = Type::STRING_ARRAY;
        break;
    default:
        error("Unexpected array type");
    }
    auto saved_type = last_var.type;

    // Number of dimensions
    last_array_num_dimensions = static_cast<UINT32>(context->numExpr().size());
    for (auto i = 0; i < last_array_num_dimensions; i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }

    last_var.type = saved_type;
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
    }
    state = saved_state;
    return NULL;
}
