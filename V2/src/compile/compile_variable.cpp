#include "compile.h"

void Compiler::compile_node_token_variable(struct ast *ast, bool expression) {
    switch (ast->token) {
    case Token::Global:
        state = CompilerState::Globals;
        compile_node(ast->l, false);
        state = CompilerState::None;
        break;
    case Token::Local:
        state = CompilerState::Locals;
        compile_node(ast->l, false);
        state = CompilerState::None;
        break;
    case Token::Dim:
        state = CompilerState::Dim;
        compile_node(ast->l, false);
        state = CompilerState::None;
        break;
    case Token::LocalDim:
        state = CompilerState::LocalDim;
        compile_node(ast->l, false);
        state = CompilerState::None;
        break;
    }
}

void Compiler::compile_node_variable(struct ast *ast, bool expression) {
    if (!expression) {
        var_type = ast->var_type;
        var_name.assign(*ast->v_string);
        switch (state) {
        case CompilerState::None:
        case CompilerState::Globals:
        case CompilerState::Locals:
            break;
        case CompilerState::Function: {
            local_var_index++;
            break;
        }
        case CompilerState::Read: {
            int var_id = find_or_create_variable(VariableType::NoType, true);
            insert_instruction_based_on_type(
                {
                    {Type::Integer, READ_I},
                    {Type::Float, READ_F},
                    {Type::String, READ_S},
                },
                var_type, var_id);
            break;
        }
        case CompilerState::Dim: {
            int var_id = find_or_create_variable(VariableType::Global, false);
            insert_instruction_based_on_type(
                {
                    {Type::IntegerArray, DIM_I},
                    {Type::FloatArray, DIM_F},
                    {Type::StringArray, DIM_S},
                },
                var_type, var_id);
            break;
        }
        case CompilerState::LocalDim: {
            int var_id = find_or_create_variable(VariableType::Local, false);
            insert_instruction_based_on_type(
                {
                    {Type::IntegerArray, DIM_I},
                    {Type::FloatArray, DIM_F},
                    {Type::StringArray, DIM_S},
                },
                var_type, var_id);
            break;
        }
        case CompilerState::Type:
            // Already handled
            break;
        default:
            error("Unexpected compiler state in variable");
        }
    } else {
        var_name.assign(*ast->v_string);
        int var_id = find_or_create_variable(VariableType::NoType, true);
        switch (var_type) {
        case Type::Integer:
            vm->insert_instruction(line_number, file_number, write, LOAD_I, var_id);
            stack_push(var_type);
            break;
        case Type::Float:
            vm->insert_instruction(line_number, file_number, write, LOAD_F, var_id);
            stack_push(var_type);
            break;
        case Type::String:
            vm->insert_instruction(line_number, file_number, write, LOAD_S, var_id);
            stack_push(var_type);
            break;
        case Type::Type: {
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
            CustomTypeFind c = find_custom_type(*ast->l->v_string);
            vm->insert_instruction(line_number, file_number, write, CONST_I, c.field_id);
            insert_instruction_based_on_type(
                {
                    {Type::Integer, LOAD_I_FIELD},
                    {Type::Float, LOAD_F_FIELD},
                    {Type::String, LOAD_S_FIELD},
                },
                c.field_type, var_id);
            stack_push(c.field_type);
            break;
        }
        default:
            error("Unknown variable type in expression");
        }
    }
}

void Compiler::compile_node_variablewithindex(struct ast *ast, bool expression) {
    // Find variable
    var_type = ast->var_type;

    // Work out dimensions
    Type saved_type = var_type;
    if (ast->l->type == NodeType::Link) {
        get_index_ensure_is_int(ast->l->l);
        get_index_ensure_is_int(ast->l->r);
        vm->insert_instruction(line_number, file_number, write, CONST_I, 2);
    } else {
        get_index_ensure_is_int(ast->l);
        vm->insert_instruction(line_number, file_number, write, CONST_I, 1);
    }
    var_name.assign(*ast->v_string);
    var_type = saved_type;
    if (!expression) {
        switch (state) {
        case CompilerState::Globals:
        case CompilerState::Locals:
        case CompilerState::None: {
            break;
        }
        case CompilerState::Read: {
            Type saved_type = var_type;
            int var_id = find_or_create_variable(VariableType::NoType, true);
            insert_instruction_based_on_type(
                {
                    {Type::IntegerArray, READ_I_ARRAY},
                    {Type::FloatArray, READ_F_ARRAY},
                    {Type::StringArray, READ_S_ARRAY},
                },
                saved_type, var_id);
            break;
        }
        case CompilerState::Dim: {
            Type saved_type = var_type;
            int var_id = find_or_create_variable(VariableType::Global, false);

            switch (saved_type) {
            case Type::IntegerArray:
                vm->insert_instruction(line_number, file_number, write, DIM_I, var_id);
                break;
            case Type::FloatArray:
                vm->insert_instruction(line_number, file_number, write, DIM_F, var_id);
                break;
            case Type::StringArray:
                vm->insert_instruction(line_number, file_number, write, DIM_S, var_id);
                break;
            case Type::TypeArray: {
                custom_type_name = *ast->r->v_string;

                // Find the type
                if (custom_types.count(custom_type_name) == 0) {
                    error("Unknown type " + *ast->r->v_string);
                }
                auto g = custom_types.find(custom_type_name);
                auto f = (*g).second;

                vm->insert_bytecode(line_number, file_number, write, DROP); // Drop number of dimensions
                vm->insert_instruction(line_number, file_number, write, CONST_I, static_cast<int>(f.members.size()));
                vm->insert_bytecode(line_number, file_number, write, MULTIPLY_I);
                vm->insert_instruction(line_number, file_number, write, NEW_TYPE, var_id);
                break;
            }
            default:
                error("Variable type not supported in DIM yet");
            }
            break;
        }
        case CompilerState::LocalDim: {
            Type saved_type = var_type;
            int var_id = find_or_create_variable(VariableType::Local, false);

            switch (saved_type) {
            case Type::IntegerArray:
                vm->insert_instruction(line_number, file_number, write, DIM_I, var_id);
                break;
            case Type::FloatArray:
                vm->insert_instruction(line_number, file_number, write, DIM_F, var_id);
                break;
            case Type::StringArray:
                vm->insert_instruction(line_number, file_number, write, DIM_S, var_id);
                break;
            case Type::TypeArray: {
                custom_type_name = *ast->r->v_string;

                // Find the type
                if (custom_types.count(custom_type_name) == 0)
                    error("Unknown type " + *ast->r->v_string);
                auto g = custom_types.find(custom_type_name);
                auto f = (*g).second;

                vm->insert_bytecode(line_number, file_number, write, DROP); // Drop number of dimensions
                vm->insert_instruction(line_number, file_number, write, CONST_I, static_cast<int>(f.members.size()));
                vm->insert_bytecode(line_number, file_number, write, MULTIPLY_I);
                vm->insert_instruction(line_number, file_number, write, NEW_TYPE, var_id);
                break;
            }
            default:
                error("Variable type not supported in DIM yet");
            }
            break;
        }
        default:
            error("Unexpected compiler state in variable with index");
        }
    } else {
        int var_id = find_or_create_variable(VariableType::NoType, true);
        switch (var_type) {
        case Type::IntegerArray:
            vm->insert_instruction(line_number, file_number, write, LOAD_I_ARRAY, var_id);
            stack_push(Type::Integer);
            break;
        case Type::FloatArray:
            vm->insert_instruction(line_number, file_number, write, LOAD_F_ARRAY, var_id);
            stack_push(Type::Float);
            break;
        case Type::StringArray:
            vm->insert_instruction(line_number, file_number, write, LOAD_S_ARRAY, var_id);
            stack_push(Type::String);
            break;
        case Type::TypeArray: {
            CustomTypeFind c = find_custom_type(*ast->r->v_string);
            vm->insert_instruction(line_number, file_number, write, CONST_I, static_cast<int>(c.field_id));    // Field index
            vm->insert_instruction(line_number, file_number, write, CONST_I, static_cast<int>(c.field_count)); // Field count
            insert_instruction_based_on_type(
                {
                    {Type::Integer, LOAD_I_FIELD_ARRAY},
                    {Type::Float, LOAD_F_FIELD_ARRAY},
                    {Type::String, LOAD_S_FIELD_ARRAY},
                },
                c.field_type, var_id);
            stack_push(c.field_type);
            break;
        }
        default:
            error("Unexpected type in variable with index");
        }
    }
}
