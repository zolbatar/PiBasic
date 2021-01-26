#include "compile.h"

void Compiler::compile_node_variable(struct AST* ast, bool expression)
{
    if (!expression) {
        compile_node_variable_nonexpression(ast);
    } else {
        compile_node_variable_expression(ast);
    }
}

void Compiler::compile_node_variable_nonexpression(struct AST* ast)
{
    var_type = ast->var_type;
    var_name.assign(ast->string);
    switch (state) {
    case CompilerState::NOSTATE:
    case CompilerState::GLOBALS:
    case CompilerState::LOCALS:
        // These are handled elsewhere
        break;
    case CompilerState::FUNCTION: {
        local_var_index++;
        break;
    }
    case CompilerState::READ: {
        auto var_id = find_or_create_variable(VariableScope::NOSCOPE, true);
        insert_instruction_based_on_type(
            {
                { Type::INTEGER, Bytecodes::READ_I },
                { Type::REAL, Bytecodes::READ_F },
                { Type::STRING, Bytecodes::READ_S },
            },
            var_type, var_id);
        break;
    }
    case CompilerState::TYPE:
        // Already handled in lookahead phase
        break;
    default:
        error("Unexpected compiler state in variable");
    }
}

void Compiler::compile_node_variable_expression(struct AST* ast)
{
    var_type = ast->var_type;
    if (var_type != Type::TYPE) {
        var_name.assign(ast->string);
    }
    auto var_id = find_or_create_variable(VariableScope::NOSCOPE, true);
    switch (var_type) {
    case Type::INTEGER:
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::LOAD_I, var_id);
        stack_push(var_type);
        break;
    case Type::REAL:
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::LOAD_F, var_id);
        stack_push(var_type);
        break;
    case Type::STRING:
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::LOAD_S, var_id);
        stack_push(var_type);
        break;
    case Type::TYPE: {
        // Find the variable
        if (var_id & LocalVariableFlag) {
            auto g = locals.find(var_name);
            auto f = (*g).second;
            custom_type_name = f.value_string;
        } else if (globals.count(var_name) == 0) {
            auto g = globals.find(var_name);
            auto f = (*g).second;
            custom_type_name = f.value_string;
        }

        // Find the type
        CustomTypeFind c = find_custom_type(ast->items[0]->string);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, c.field_id);
        insert_instruction_based_on_type(
            {
                { Type::INTEGER, Bytecodes::LOAD_I_FIELD },
                { Type::REAL, Bytecodes::LOAD_F_FIELD },
                { Type::STRING, Bytecodes::LOAD_S_FIELD },
            },
            c.field_type, var_id);
        stack_push(c.field_type);
        break;
    }
    default:
        error("Unknown variable type in expression");
    }
}
