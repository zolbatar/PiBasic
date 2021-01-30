#include "compiler.h"

antlrcpp::Any Compiler::visitNumberInteger(DARICParser::NumberIntegerContext* context)
{
    auto v = context->getText();
    auto i = std::stoi(v, nullptr, 10);
    if (state == CompilerState::DATA) {
        switch (phase) {
        case CompilerPhase::LOOKAHEAD: {
            Boxed b;
            b.type = Type::INTEGER;
            b.value_int = i;
            vm->add_data(b);
            break;
        }
        case CompilerPhase::SIZE:
        case CompilerPhase::COMPILE:
            break;
        }
    } else {
        insert_instruction(Bytecodes::CONST_I, i);
        stack_push(Type::INTEGER);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumberHex(DARICParser::NumberHexContext* context)
{
    auto v = context->getText();
    v.erase(0, 1);
    auto i = std::stoi(v, nullptr, 16);
    if (state == CompilerState::DATA) {
        switch (phase) {
        case CompilerPhase::LOOKAHEAD: {
            Boxed b;
            b.type = Type::INTEGER;
            b.value_int = i;
            vm->add_data(b);
            break;
        }
        case CompilerPhase::SIZE:
        case CompilerPhase::COMPILE:
            break;
        }
    } else {
        insert_instruction(Bytecodes::CONST_I, i);
        stack_push(Type::INTEGER);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumberBinary(DARICParser::NumberBinaryContext* context)
{
    auto v = context->getText();
    v.erase(0, 1);
    auto i = std::stoi(v, nullptr, 2);
    if (state == CompilerState::DATA) {
        switch (phase) {
        case CompilerPhase::LOOKAHEAD: {
            Boxed b;
            b.type = Type::INTEGER;
            b.value_int = i;
            vm->add_data(b);
            break;
        }
        case CompilerPhase::SIZE:
        case CompilerPhase::COMPILE:
            break;
        }
    } else {
        insert_instruction(Bytecodes::CONST_I, i);
        stack_push(Type::INTEGER);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumberFloat(DARICParser::NumberFloatContext* context)
{
    auto v = context->getText();
    auto i = std::stod(v);
    if (state == CompilerState::DATA) {
        switch (phase) {
        case CompilerPhase::LOOKAHEAD: {
            Boxed b;
            b.type = Type::REAL;
            b.value_float = i;
            vm->add_data(b);
            break;
        }
        case CompilerPhase::SIZE:
        case CompilerPhase::COMPILE:
            break;
        }
    } else {
        insert_instruction(Bytecodes::LOAD_F, constant_float_create(i));
        stack_push(Type::REAL);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitString(DARICParser::StringContext* context)
{
    auto v = context->getText();
    if (state == CompilerState::DATA) {
        switch (phase) {
        case CompilerPhase::LOOKAHEAD: {
            Boxed b;
            b.type = Type::STRING;
            b.value_string = v;
            vm->add_data(b);
            break;
        }
        case CompilerPhase::SIZE:
        case CompilerPhase::COMPILE:
            break;
        }
    } else {
        insert_instruction(Bytecodes::LOAD_S, constant_string_create(v));
        stack_push(Type::STRING);
    }
    return NULL;
}
