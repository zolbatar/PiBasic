#pragma warning(disable : 26812)
#include "../graphics/graphics.h"
#include "compile.h"
#include <cassert>
#include <chrono>
#include <stdlib.h>

void Compiler::compile_node_assignment(struct AST* ast)
{
    // Get variable type and name
    CustomTypeFind c;
    compile_node(ast->l, false);
    Type saved_type = var_type;
    if (ast->l->items.size() == 1) {
        auto saved_name = var_name;
        compile_node(ast->l->items[0], true);
        stack_pop();
        var_name = saved_name;
    } else if (ast->l->items.size() == 2) {
        auto saved_name = var_name;
        if (saved_type != Type::TYPE_ARRAY) {
            compile_node(ast->l->items[0], true);
            stack_pop();
        }
        compile_node(ast->l->items[1], true);
        stack_pop();
        var_name = saved_name;
    }

    // Does it exist?
    int var_id = -1;
    switch (state) {
    case CompilerState::LOCALS:
        var_id = find_or_create_variable(VariableScope::LOCAL, false);
        break;
    case CompilerState::GLOBALS:
    case CompilerState::NOSTATE:
        var_id = find_or_create_variable(VariableScope::GLOBAL, false);
        break;
    default:
        error("ASSIGNMENT: Unknown state");
    }

    // This is a field?
    if (ast->l->type == ASTType::VARIABLE && saved_type == Type::TYPE_ARRAY) {
        c = find_custom_type(ast->l->items[0]->string);

        // Value
        compile_node(ast->r, true);
    } else if (ast->l->type == ASTType::VARIABLE1D && saved_type == Type::TYPE_ARRAY) {
        c = find_custom_type(ast->l->items[0]->string);
        compile_node(ast->r, true);
    } else if (ast->l->type == ASTType::VARIABLE && ast->r->type != ASTType::VARIABLE && saved_type == Type::TYPE) {
        c = find_custom_type(ast->l->items[0]->string);
        compile_node(ast->r, true);
    } else if (ast->l->type == ASTType::VARIABLE && ast->r->type == ASTType::VARIABLE && saved_type == Type::TYPE) {
        // Instantiate type
    } else {
        compile_node(ast->r, true);
    }

    assignment(saved_type, var_id, c.field_id, c.field_type, c.field_count, static_cast<int>(ast->l->items.size()));
}

void Compiler::assignment(Type type, int var_id, int field_id, Type field_type, int field_count, int dimensions)
{
    switch (type) {
    case Type::INTEGER:
        if (stack_size() == 0)
            error("No value to assign");
        switch (peek_type()) {
        case Type::REAL:
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::F_TO_I);
            vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_I, var_id);
            break;
        case Type::INTEGER:
            vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_I, var_id);
            break;
        default:
            error("Failed conversion for assignment");
        }
        stack_pop();
        break;
    case Type::REAL:
        if (stack_size() == 0)
            error("No value to assign");
        switch (peek_type()) {
        case Type::INTEGER:
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F);
            vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_F, var_id);
            break;
        case Type::REAL:
            vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_F, var_id);
            break;
        default:
            error("Failed conversion for assignment");
        }
        stack_pop();
        break;
    case Type::STRING:
        if (stack_size() == 0)
            error("No value to assign");
        switch (peek_type()) {
        case Type::STRING:
            vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_S, var_id);
            break;
        default:
            error("Failed conversion for assignment");
        }
        stack_pop();
        break;
    case Type::INTEGER_ARRAY:
        vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, dimensions); // 1 dimension
        vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_I_ARRAY, var_id);
        stack_pop();
        break;
    case Type::REAL_ARRAY:
        vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, dimensions); // 1 dimension
        vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_F_ARRAY, var_id);
        stack_pop();
        break;
    case Type::STRING_ARRAY:
        vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, dimensions); // 1 dimension
        vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_S_ARRAY, var_id);
        stack_pop();
        break;
    case Type::TYPE: {
        if (field_id == -1) {
            // Pop on the stack the number of fields, we don't want at runtime to know some of the gritty details
            auto g = custom_types.find(custom_type_name);
            auto f = (*g).second;
            vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, static_cast<int>(f.members.size()));
            vm->insert_instruction(line_number, file_number, write, Bytecodes::NEW_TYPE, var_id);
        } else {
            vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, field_id);
            switch (field_type) {
            case Type::INTEGER:
                assert(stack_size() == 1);
                switch (peek_type()) {
                case Type::REAL:
                    vm->insert_bytecode(line_number, file_number, write, Bytecodes::F_TO_I);
                    vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_I_FIELD, var_id);
                    break;
                case Type::INTEGER:
                    vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_I_FIELD, var_id);
                    break;
                default:
                    error("Failed conversion for assignment");
                }
                stack_pop();
                break;
            case Type::REAL:
                assert(stack_size() == 1);
                switch (peek_type()) {
                case Type::INTEGER:
                    vm->insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F);
                    vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_F_FIELD, var_id);
                    break;
                case Type::REAL:
                    vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_F_FIELD, var_id);
                    break;
                default:
                    error("Failed conversion for assignment");
                    break;
                }
                stack_pop();
                break;
            case Type::STRING:
                assert(stack_size() == 1);
                switch (peek_type()) {
                case Type::STRING:
                    vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_S_FIELD, var_id);
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
    case Type::TYPE_ARRAY: {
        vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, field_id);
        vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, field_count);
        switch (field_type) {
        case Type::INTEGER:
            assert(stack_size() == 1);
            switch (peek_type()) {
            case Type::REAL:
                vm->insert_bytecode(line_number, file_number, write, Bytecodes::F_TO_I);
                vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_I_FIELD_ARRAY, var_id);
                break;
            case Type::INTEGER:
                vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_I_FIELD_ARRAY, var_id);
                break;
            default:
                error("Failed conversion for assignment");
            }
            stack_pop();
            break;
        case Type::REAL:
            assert(stack_size() == 1);
            switch (peek_type()) {
            case Type::INTEGER:
                vm->insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F);
                vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_F_FIELD_ARRAY, var_id);
                break;
            case Type::REAL:
                vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_F_FIELD_ARRAY, var_id);
                break;
            default:
                error("Failed conversion for assignment");
                break;
            }
            stack_pop();
            break;
        case Type::STRING:
            assert(stack_size() == 1);
            switch (peek_type()) {
            case Type::STRING:
                vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_S_FIELD_ARRAY, var_id);
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