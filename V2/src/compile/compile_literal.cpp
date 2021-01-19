#include "compile.h"

void Compiler::compile_node_integer(struct ast *ast, bool expression) {
    if (state == CompilerState::Data) {
        if (!write) {
            Boxed b;
            b.type = Type::Integer;
            b.value_int = ast->v_int;
            vm->add_data(b);
        }
    } else {
        vm->insert_instruction(line_number, file_number, write, CONST_I, ast->v_int);
        stack_push(Type::Integer);
    }
}

void Compiler::compile_node_float(struct ast *ast, bool expression) {
    if (state == CompilerState::Data) {
        if (!write) {
            Boxed b;
            b.type = Type::Float;
            b.value_float = ast->v_float;
            vm->add_data(b);
        }
    } else {
        vm->insert_instruction(line_number, file_number, write, LOAD_F, constant_float_create(ast->v_float));
        stack_push(Type::Float);
    }
}

void Compiler::compile_node_string(struct ast *ast, bool expression) {
    if (state == CompilerState::Data) {
        if (!write) {
            Boxed b;
            b.type = Type::String;
            b.value_string = *ast->v_string;
            vm->add_data(b);
        }
    } else {
        vm->insert_instruction(line_number, file_number, write, LOAD_S, constant_string_create(ast->v_string));
        stack_push(Type::String);
    }
}
