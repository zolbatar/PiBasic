#include "compile.h"

void Compiler::compile_node_integer(struct AST* ast)
{
    if (state == CompilerState::DATA) {
        if (!write) {
            Boxed b;
            b.type = Type::INTEGER;
            b.value_int = ast->integer;
            g_vm->add_data(b);
        }
    } else {
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, ast->integer);
        stack_push(Type::INTEGER);
    }
}

void Compiler::compile_node_float(struct AST* ast)
{
    if (state == CompilerState::DATA) {
        if (!write) {
            Boxed b;
            b.type = Type::REAL;
            b.value_float = ast->real;
            g_vm->add_data(b);
        }
    } else {
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::LOAD_F, constant_float_create(ast->real));
        stack_push(Type::REAL);
    }
}

void Compiler::compile_node_string(struct AST* ast)
{
    if (state == CompilerState::DATA) {
        if (!write) {
            Boxed b;
            b.type = Type::STRING;
            b.value_string = ast->string;
            g_vm->add_data(b);
        }
    } else {
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::LOAD_S, constant_string_create(ast->string));
        stack_push(Type::STRING);
    }
}
