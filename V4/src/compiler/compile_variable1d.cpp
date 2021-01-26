#include "compile.h"

void Compiler::compile_node_variable1d(struct AST* ast, bool expression)
{
    if (!expression) {
        compile_node_variable1d_nonexpression(ast);
    } else {
        compile_node_variable1d_expression(ast);
    }
}

void Compiler::compile_node_variable1d_nonexpression(struct AST* ast)
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
        compile_node_variable1d_dim(ast, var_id);
        break;
    }
    case CompilerState::LOCALDIM: {
        auto var_id = find_or_create_variable(VariableScope::LOCAL, false);
        compile_node_variable1d_dim(ast, var_id);
        break;
    }
    case CompilerState::READ: {
        Type saved_type = var_type;
        get_index_ensure_is_int(ast->items[0]);
        var_name.assign(ast->string);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, 1);
        auto var_id = find_or_create_variable(VariableScope::NOSCOPE, true);
        insert_instruction_based_on_type(
            {
                { Type::INTEGER_ARRAY, Bytecodes::READ_I_ARRAY },
                { Type::REAL_ARRAY, Bytecodes::READ_F_ARRAY },
                { Type::STRING_ARRAY, Bytecodes::READ_S_ARRAY },
            },
            saved_type, var_id);
        break;
    }
    default:
        error("Unexpected compiler state in variable");
    }
}

void Compiler::compile_node_variable1d_dim(struct AST* ast, int var_id)
{
    if (var_type == Type::TYPE_ARRAY) {
        custom_type_name = ast->items[0]->string;

        // Find the type
        if (custom_types.count(custom_type_name) == 0) {
            error("Unknown type " + custom_type_name);
        }
        auto g = custom_types.find(custom_type_name);
        auto f = (*g).second;

        // Dump dimensions
        compile_node(ast->items[1], true);
        stack_pop();

        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, static_cast<int>(f.members.size()));
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::MULTIPLY_I);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::NEW_TYPE, var_id);
    } else {
        auto saved_type = var_type;
        compile_node(ast->items[0], true);
        stack_pop();
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, 1); // 1 dimension
        insert_instruction_based_on_type(
            {
                { Type::INTEGER_ARRAY, Bytecodes::DIM_I },
                { Type::REAL_ARRAY, Bytecodes::DIM_F },
                { Type::STRING_ARRAY, Bytecodes::DIM_S },
            },
            saved_type, var_id);
    }
}

void Compiler::compile_node_variable1d_expression(struct AST* ast)
{
    var_name.assign(ast->string);
    auto var_id = find_or_create_variable(VariableScope::NOSCOPE, true);
    auto saved_type = var_type;
    if (var_type != Type::TYPE_ARRAY) {
        compile_node(ast->items[0], true);
        stack_pop();
    } else {
        compile_node(ast->items[1], true);
        stack_pop();
    }
    switch (saved_type) {
    case Type::INTEGER_ARRAY:
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, 1); // 1 dimension
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::LOAD_I_ARRAY, var_id);
        stack_push(Type::INTEGER);
        break;
    case Type::REAL_ARRAY:
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, 1); // 1 dimension
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::LOAD_F_ARRAY, var_id);
        stack_push(Type::REAL);
        break;
    case Type::STRING_ARRAY:
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, 1); // 1 dimension
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::LOAD_S_ARRAY, var_id);
        stack_push(Type::STRING);
        break;
    case Type::TYPE_ARRAY: {
        CustomTypeFind c = find_custom_type(ast->items[0]->string);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, static_cast<int>(c.field_id)); // Field index
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, static_cast<int>(c.field_count)); // Field count
        insert_instruction_based_on_type(
            {
                { Type::INTEGER, Bytecodes::LOAD_I_FIELD_ARRAY },
                { Type::REAL, Bytecodes::LOAD_F_FIELD_ARRAY },
                { Type::STRING, Bytecodes::LOAD_S_FIELD_ARRAY },
            },
            c.field_type, var_id);
        stack_push(c.field_type);
        break;
    }
    default:
        error("Unknown variable or variable type in expression");
    }
}
