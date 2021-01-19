#pragma warning(disable : 26812)
#include "../graphics/graphics.h"
#include "compile.h"
#include <cassert>
#include <chrono>
#include <stdlib.h>

UINT32 Compiler::create_print_flag() { return print_right_justify + (print_hex << 1); }

void Compiler::insert_bytecode_based_on_type(std::map<Type, Bytecodes> m, Type type)
{
    auto t = m.find(type);
    vm->insert_bytecode(line_number, file_number, write, (*t).second);
}

void Compiler::insert_instruction_based_on_type(std::map<Type, Bytecodes> m, Type type, UINT32 value)
{
    auto t = m.find(type);
    if (t == m.end()) {
        error("FATAL: Unknown type for instruction");
    }
    vm->insert_instruction(line_number, file_number, write, (*t).second, value);
}

void Compiler::insert_bytecode_based_on_peektype(std::map<Type, Bytecodes> m)
{
    auto t = m.find(peek_type());
    vm->insert_bytecode(line_number, file_number, write, (*t).second);
}

void Compiler::ensure_stack_is_integer()
{
    switch (peek_type()) {
    case Type::INTEGER:
        break;
    case Type::REAL:
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::F_TO_I);
        stack_pop();
        stack_push(Type::INTEGER);
        break;
    default:
        error("Unknown type conversion");
    }
}

void Compiler::get_ensure_is_integer_pop(AST* ast)
{
    compile_node(ast, true);
    ensure_stack_is_integer();
    stack_pop();
}

void Compiler::get_ensure_is_float_pop(AST* ast)
{
    compile_node(ast, true);
    ensure_stack_is_float();
    stack_pop();
}

void Compiler::get_ensure_is_string_pop(AST* ast)
{
    compile_node(ast, true);
    ensure_stack_is_string();
    stack_pop();
}

void Compiler::ensure_stack_is_float()
{
    switch (peek_type()) {
    case Type::REAL:
        break;
    case Type::INTEGER:
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F);
        stack_pop();
        stack_push(Type::REAL);
        break;
    default:
        error("Unknown type conversion");
    }
}

void Compiler::ensure_stack_is_string()
{
    switch (peek_type()) {
    case Type::STRING:
        break;
    default:
        error("String expected");
    }
}

CustomTypeFind Compiler::find_custom_type(std::string field_name)
{
    // Find the type
    if (custom_types.count(custom_type_name) == 0)
        error("Unknown type " + custom_type_name);
    auto g = custom_types.find(custom_type_name);
    auto f = (*g).second;
    CustomTypeFind c;
    c.field_count = static_cast<int>(f.members.size());

    // Get the field id
    if (f.members.count(field_name) == 0)
        error("Unknown field " + field_name);
    auto g2 = f.members.find(field_name);
    auto f2 = (*g2).second;
    c.field_id = f2.index;
    c.field_type = f2.type;
    return c;
}

UINT32 Compiler::find_or_create_variable(VariableScope type, bool expression)
{
    UINT32 var_id = 0;
    if (!expression && type == VariableScope::GLOBAL) {
        // Search locals first as it takes precedence
        if (locals.count(var_name) == 1) {
            auto g = locals.find(var_name);
            var_id = (*g).second.index;
            var_type = (*g).second.type;
            return var_id | LocalVariableFlag;
        } else if (!write && globals.count(var_name) == 0) {
            Boxed _var;
            _var.constant = false;
            _var.name = var_name;
            _var.type = var_type;
            _var.index = global_var_index++;
            _var.value_string = custom_type_name;
            globals[var_name] = _var;
            var = &_var;
            var_id = _var.index;
        } else {
            auto g = globals.find(var_name);
            var_id = (*g).second.index;
            var_type = (*g).second.type;
        }
        return var_id;
    } else if (!expression && type == VariableScope::LOCAL && inside_function) {
        if (locals.count(var_name) == 0) {
            Boxed _var;
            _var.constant = false;
            _var.name = var_name;
            _var.type = var_type;
            _var.index = local_var_index++;
            _var.value_string = custom_type_name;
            locals[var_name] = _var;
            var = &_var;
            var_id = _var.index;
        } else {
            auto g = locals.find(var_name);
            var_id = (*g).second.index;
            var_type = (*g).second.type;
        }
        return var_id | LocalVariableFlag;
    } else {
        // Search locals first, then globals
        if (locals.count(var_name) == 1 && inside_function) {
            auto g = locals.find(var_name);
            var_id = (*g).second.index;
            var_type = (*g).second.type;
            return var_id | LocalVariableFlag;
        } else if (globals.count(var_name) == 1) {
            auto g = globals.find(var_name);
            var_id = (*g).second.index;
            var_type = (*g).second.type;
            return var_id;
        } else {
            error("Variable " + var_name + " not found");
        }
    }
    error("Unknown variable or no type specified");
    return 0;
}

UINT32 Compiler::constant_int_create(VM_INT v)
{
    if (write) {
        // Do we have a matching constant first?
        for (auto c : constants) {
            if (c.type == Type::INTEGER && c.value_int == v) {
                return c.index;
            }
        }
        Boxed _var;
        _var.constant = true;
        _var.value_int = v;
        _var.value_float = (VM_FLOAT)v;
        _var.index = global_var_index++;
        _var.type = Type::INTEGER;
        constants.push_back(_var);
        var = &_var;
        return _var.index;
    } else {
        return 0;
    }
}

UINT32 Compiler::constant_float_create(VM_FLOAT v)
{
    if (write) {
        // Do we have a matching constant first?
        for (auto c : constants) {
            if (c.type == Type::REAL && c.value_float == v) {
                return c.index;
            }
        }
        Boxed _var;
        _var.constant = true;
        _var.value_int = (VM_INT)v;
        _var.value_float = v;
        _var.index = global_var_index++;
        _var.type = Type::REAL;
        constants.push_back(_var);
        var = &_var;
        return _var.index;
    } else {
        return 0;
    }
}

UINT32 Compiler::constant_string_create(std::string v)
{
    if (write) {
        // Do we have a matching constant first?
        for (auto c : constants) {
            if (c.type == Type::STRING && c.value_string.compare(v) == 0) {
                return c.index;
            }
        }
        Boxed _var;
        _var.constant = true;
        _var.value_string = v;
        _var.index = global_var_index++;
        _var.type = Type::STRING;
        constants.push_back(_var);
        var = &_var;
        return _var.index;
    } else {
        return 0;
    }
}

void Compiler::comparison(Bytecodes i, Bytecodes f, Bytecodes s)
{
    switch (peek_type()) {
    case Type::INTEGER:
        vm->insert_bytecode(line_number, file_number, write, i);
        break;
    case Type::REAL:
        vm->insert_bytecode(line_number, file_number, write, f);
        break;
    case Type::STRING:
        vm->insert_bytecode(line_number, file_number, write, s);
        break;
    default:
        error("Unknown type for operator");
    }
    stack_pop();
    stack_pop();
    stack_push(Type::INTEGER);
}

void Compiler::boolean(Bytecodes i)
{
    switch (peek_type()) {
    case Type::INTEGER:
        vm->insert_bytecode(line_number, file_number, write, i);
        break;
    default:
        error("Booleans must be int");
    }
    stack_pop();
    stack_pop();
    stack_push(Type::INTEGER);
}

void Compiler::get_index_ensure_is_int(struct AST* ast)
{
    compile_node(ast, true);
    switch (peek_type()) {
    case Type::INTEGER:
        break;
    default:
        error("Indices must be int");
    }

    // We don't want this showing as a type on the stack, it isn't
    stack_pop();
}

void Compiler::x_and_y(struct AST* ast)
{
    get_ensure_is_integer_pop(ast->items[0]);
    get_ensure_is_integer_pop(ast->items[1]);
}

void Compiler::four_coords(struct AST* ast)
{
    // 1st
    get_ensure_is_integer_pop(ast->items[0]);
    get_ensure_is_integer_pop(ast->items[1]);

    // 2nd
    get_ensure_is_integer_pop(ast->items[2]);
    get_ensure_is_integer_pop(ast->items[3]);
}

void Compiler::three_coords(struct AST* ast)
{
    get_ensure_is_integer_pop(ast->items[0]);
    get_ensure_is_integer_pop(ast->items[1]);
    get_ensure_is_integer_pop(ast->items[2]);
}

void Compiler::three_coords_and_colour(struct AST* ast, int index)
{
    get_ensure_is_float_pop(ast->items[index + 0]);
    get_ensure_is_float_pop(ast->items[index + 1]);
    get_ensure_is_float_pop(ast->items[index + 2]);
    get_ensure_is_integer_pop(ast->items[index + 3]);
}

void Compiler::three_vertices_and_colour(struct AST* ast, int index)
{
    get_ensure_is_integer_pop(ast->items[index + 0]);
    get_ensure_is_integer_pop(ast->items[index + 1]);
    get_ensure_is_integer_pop(ast->items[index + 2]);
    get_ensure_is_integer_pop(ast->items[index + 3]);
}

void Compiler::six_coords(struct AST* ast)
{
    // 1st
    get_ensure_is_integer_pop(ast->items[0]);
    get_ensure_is_integer_pop(ast->items[1]);

    // 2nd
    get_ensure_is_integer_pop(ast->items[2]);
    get_ensure_is_integer_pop(ast->items[3]);

    // 2nd
    get_ensure_is_integer_pop(ast->items[4]);
    get_ensure_is_integer_pop(ast->items[5]);
}

void Compiler::six_coords_with_colour(struct AST* ast)
{
    // 1st
    get_ensure_is_integer_pop(ast->items[0]);
    get_ensure_is_integer_pop(ast->items[1]);
    get_ensure_is_integer_pop(ast->items[2]);

    // 2nd
    get_ensure_is_integer_pop(ast->items[3]);
    get_ensure_is_integer_pop(ast->items[4]);
    get_ensure_is_integer_pop(ast->items[5]);

    // 2nd
    get_ensure_is_integer_pop(ast->items[6]);
    get_ensure_is_integer_pop(ast->items[7]);
    get_ensure_is_integer_pop(ast->items[8]);
}