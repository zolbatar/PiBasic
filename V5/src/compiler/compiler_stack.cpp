#include "compiler.h"

void Compiler::ensure_stack_is_integer()
{
    switch (peek_type()) {
    case Type::INTEGER:
        break;
    case Type::FLOAT:
        insert_bytecode(Bytecodes::F_TO_I, Type::NOTYPE);
        stack_pop();
        stack_push(Type::INTEGER);
        break;
    default:
        error("Unknown type conversion");
    }
}

void Compiler::ensure_stack_is_float()
{
    switch (peek_type()) {
    case Type::FLOAT:
        break;
    case Type::INTEGER:
        insert_bytecode(Bytecodes::I_TO_F, Type::NOTYPE);
        stack_pop();
        stack_push(Type::FLOAT);
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
        error("Unknown type conversion: string expected");
    }
}
