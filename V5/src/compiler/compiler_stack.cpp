#include "compiler.h"

void Compiler::insert_bytecode_based_on_type(std::map<Type, Bytecodes> m, Type type)
{
    auto t = m.find(type);
    insert_bytecode((*t).second);
}

void Compiler::insert_instruction_based_on_type(std::map<Type, Bytecodes> m, Type type, UINT32 value)
{
    auto t = m.find(type);
    if (t == m.end()) {
        throw std::runtime_error("Unknown type for instruction. This is normally an internal DARIC error.");
    }
    insert_instruction((*t).second, value);
}

void Compiler::insert_bytecode_based_on_peektype(std::map<Type, Bytecodes> m)
{
    auto t = m.find(peek_type());
    insert_bytecode((*t).second);
}

void Compiler::ensure_stack_is_integer()
{
    switch (peek_type()) {
    case Type::INTEGER:
        break;
    case Type::REAL:
        insert_bytecode(Bytecodes::F_TO_I);
        stack_pop();
        stack_push(Type::INTEGER);
        break;
    default:
        throw std::runtime_error("Unknown type conversion");
    }
}

void Compiler::ensure_stack_is_float()
{
    switch (peek_type()) {
    case Type::REAL:
        break;
    case Type::INTEGER:
        insert_bytecode(Bytecodes::I_TO_F);
        stack_pop();
        stack_push(Type::REAL);
        break;
    default:
        throw std::runtime_error("Unknown type conversion");
    }
}
