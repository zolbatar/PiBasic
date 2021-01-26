#include "compile.h"

void Compiler::compile_node_variable2d(struct AST* ast, bool expression)
{
    if (!expression) {
        compile_node_variable2d_nonexpression(ast);
    } else {
        compile_node_variable2d_expression(ast);
    }
}

void Compiler::compile_node_variable2d_nonexpression(struct AST* ast)
{
    var_type = ast->var_type;
    var_name.assign(ast->string);
    switch (state) {
    case CompilerState::NOSTATE:
    case CompilerState::GLOBALS:
    case CompilerState::LOCALS:
        // These are handled elsewhere
        break;
    case CompilerState::DIM: {
        auto var_id = find_or_create_variable(VariableScope::GLOBAL, false);
        compile_node_variable2d_dim(ast, var_id);
        break;
    }
    case CompilerState::LOCALDIM: {
        auto var_id = find_or_create_variable(VariableScope::LOCAL, false);
        compile_node_variable2d_dim(ast, var_id);
        break;
    }
    default:
        error("Unexpected compiler state in variable");
    }
}

void Compiler::compile_node_variable2d_dim(struct AST* ast, int var_id)
{
    auto saved_type = var_type;
    compile_node(ast->items[0], true);
    stack_pop();
    compile_node(ast->items[1], true);
    stack_pop();
    g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, 2); // 2 dimension
    insert_instruction_based_on_type(
        {
            { Type::INTEGER_ARRAY, Bytecodes::DIM_I },
            { Type::REAL_ARRAY, Bytecodes::DIM_F },
            { Type::STRING_ARRAY, Bytecodes::DIM_S },
        },
        saved_type, var_id);
}

void Compiler::compile_node_variable2d_expression(struct AST* ast)
{
    var_name.assign(ast->string);
    auto var_id = find_or_create_variable(VariableScope::NOSCOPE, true);
    auto saved_type = var_type;
    compile_node(ast->items[0], true);
    stack_pop();
    compile_node(ast->items[1], true);
    stack_pop();
    switch (saved_type) {
    case Type::INTEGER_ARRAY:
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, 2); // 2 dimensions
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::LOAD_I_ARRAY, var_id);
        stack_push(Type::INTEGER);
        break;
    case Type::REAL_ARRAY:
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, 2); // 2 dimensions
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::LOAD_F_ARRAY, var_id);
        stack_push(Type::REAL);
        break;
    case Type::STRING_ARRAY:
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, 2); // 2 dimensions
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::LOAD_S_ARRAY, var_id);
        stack_push(Type::STRING);
        break;
    default:
        error("Unknown variable type in expression");
    }
}