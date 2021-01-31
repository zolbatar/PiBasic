#include "compiler.h"

void Compiler::boolean(Bytecodes i)
{
    switch (peek_type()) {
    case Type::INTEGER:
        insert_bytecode(i);
        break;
    default:
        throw std::runtime_error("Booleans must be int");
    }
    stack_pop();
    stack_pop();
    stack_push(Type::INTEGER);
}
