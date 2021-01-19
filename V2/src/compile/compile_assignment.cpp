#pragma warning(disable : 26812)
#include "../graphics/graphics.h"
#include "compile.h"
#include <stdlib.h>
#include <cassert>
#include <chrono>

void Compiler::compile_node_assignment(struct ast *ast, bool expression) {
    // Get variable type and name
    CustomTypeFind c;
    compile_node(ast->l, false);
    Type saved_type = var_type;

    // Does it exist?
    int var_id = -1;
    var_name.assign(*ast->l->v_string);
    switch (state) {
    case CompilerState::Locals:
        var_id = find_or_create_variable(VariableType::Local, false);
        break;
    case CompilerState::Globals:
    case CompilerState::None:
        var_id = find_or_create_variable(VariableType::Global, false);
        break;
    }

    // This is a field
    if (ast->l->type == NodeType::VariableWithIndex && ast->l->var_type == Type::TypeArray) {
        c = find_custom_type(*ast->l->r->v_string);

        // Value
        compile_node(ast->r, true);
    } else if (ast->r->type == NodeType::Link) {
        c = find_custom_type(*ast->r->l->v_string);

        // Value
        compile_node(ast->r->r, true);
    } else {
        compile_node(ast->r, true);
    }

    assignment(saved_type, var_id, c.field_id, c.field_type, c.field_count);
}

void Compiler::assignment(Type type, int var_id, int field_id, Type field_type, int field_count) {
    switch (type) {
    case Type::Integer:
        if (stack_size() == 0)
            error("No value to assign");
        switch (peek_type()) {
        case Type::Float:
            vm->insert_bytecode(line_number, file_number, write, F_TO_I);
            // Now fall through to store
        case Type::Integer:
            vm->insert_instruction(line_number, file_number, write, STORE_I, var_id);
            break;
        default:
            error("Failed conversion for assignment");
        }
        stack_pop();
        break;
    case Type::Float:
        if (stack_size() == 0)
            error("No value to assign");
        switch (peek_type()) {
        case Type::Integer:
            vm->insert_bytecode(line_number, file_number, write, I_TO_F);
            // Now fall through to store
        case Type::Float:
            vm->insert_instruction(line_number, file_number, write, STORE_F, var_id);
            break;
        default:
            error("Failed conversion for assignment");
        }
        stack_pop();
        break;
    case Type::String:
        if (stack_size() == 0)
            error("No value to assign");
        switch (peek_type()) {
        case Type::String:
            vm->insert_instruction(line_number, file_number, write, STORE_S, var_id);
            break;
        default:
            error("Failed conversion for assignment");
        }
        stack_pop();
        break;
    case Type::IntegerArray:
        vm->insert_instruction(line_number, file_number, write, STORE_I_ARRAY_FLIP, var_id);
        stack_pop();
        break;
    case Type::FloatArray:
        vm->insert_instruction(line_number, file_number, write, STORE_F_ARRAY_FLIP, var_id);
        stack_pop();
        break;
    case Type::StringArray:
        vm->insert_instruction(line_number, file_number, write, STORE_S_ARRAY_FLIP, var_id);
        stack_pop();
        break;
    case Type::Type: {
        if (field_id == -1) {
            // Pop on the stack the number of fields, we don't want at runtime to know some of the gritty details
            auto g = custom_types.find(custom_type_name);
            auto f = (*g).second;
            vm->insert_instruction(line_number, file_number, write, CONST_I, static_cast<int>(f.members.size()));
            vm->insert_instruction(line_number, file_number, write, NEW_TYPE, var_id);
        } else {
            vm->insert_instruction(line_number, file_number, write, CONST_I, field_id);
            switch (field_type) {
            case Type::Integer:
                assert(stack_size() == 1);
                switch (peek_type()) {
                case Type::Float:
                    vm->insert_bytecode(line_number, file_number, write, F_TO_I);
                    // Now fall through to store
                case Type::Integer:
                    vm->insert_instruction(line_number, file_number, write, STORE_I_FIELD, var_id);
                    break;
                default:
                    error("Failed conversion for assignment");
                }
                stack_pop();
                break;
            case Type::Float:
                assert(stack_size() == 1);
                switch (peek_type()) {
                case Type::Integer:
                    vm->insert_bytecode(line_number, file_number, write, I_TO_F);
                    // Now fall through to store
                case Type::Float:
                    vm->insert_instruction(line_number, file_number, write, STORE_F_FIELD, var_id);
                    break;
                default:
                    error("Failed conversion for assignment");
                    break;
                }
                stack_pop();
                break;
            case Type::String:
                assert(stack_size() == 1);
                switch (peek_type()) {
                case Type::String:
                    vm->insert_instruction(line_number, file_number, write, STORE_S_FIELD, var_id);
                    break;
                default:
                    error("Failed conversion for assignment");
                    break;
                }
                stack_pop();
                break;
            default:
                error("Unknown field variable type");
            }
        }
        break;
    }
    case Type::TypeArray: {
        vm->insert_instruction(line_number, file_number, write, CONST_I, field_id);
        vm->insert_instruction(line_number, file_number, write, CONST_I, field_count);
        switch (field_type) {
        case Type::Integer:
            assert(stack_size() == 1);
            switch (peek_type()) {
            case Type::Float:
                vm->insert_bytecode(line_number, file_number, write, F_TO_I);
                // Now fall through to store
            case Type::Integer:
                vm->insert_instruction(line_number, file_number, write, STORE_I_FIELD_ARRAY, var_id);
                break;
            default:
                error("Failed conversion for assignment");
            }
            stack_pop();
            break;
        case Type::Float:
            assert(stack_size() == 1);
            switch (peek_type()) {
            case Type::Integer:
                vm->insert_bytecode(line_number, file_number, write, I_TO_F);
                // Now fall through to store
            case Type::Float:
                vm->insert_instruction(line_number, file_number, write, STORE_F_FIELD_ARRAY, var_id);
                break;
            default:
                error("Failed conversion for assignment");
                break;
            }
            stack_pop();
            break;
        case Type::String:
            assert(stack_size() == 1);
            switch (peek_type()) {
            case Type::String:
                vm->insert_instruction(line_number, file_number, write, STORE_S_FIELD_ARRAY, var_id);
                break;
            default:
                error("Failed conversion for assignment");
                break;
            }
            stack_pop();
            break;
        default:
            error("Unknown field variable type");
        }
        break;
    }
    default:
        error("Unknown assignment type");
    }
}