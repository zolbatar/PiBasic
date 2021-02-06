#include "compiler.h"

antlrcpp::Any Compiler::visitNumberInteger(DARICParser::NumberIntegerContext* context)
{
    set_pos(context->start);
    auto v = context->getText();
    auto i = std::stoi(v, nullptr, 10);
    if (state == CompilerState::DATA) {
        switch (phase) {
        case CompilerPhase::LOOKAHEAD: {
            Boxed b;
            b.set_integer(i);
            vm->add_data(b);
            break;
        }
        case CompilerPhase::SIZE:
        case CompilerPhase::COMPILE:
            break;
        }
    } else {
        if (phase != CompilerPhase::LOOKAHEAD) {
            insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, i);
            stack_push(Type::INTEGER);
        }
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumberHex(DARICParser::NumberHexContext* context)
{
    set_pos(context->start);
    auto v = context->getText();
    v.erase(0, 1);
    auto i = std::stoi(v, nullptr, 16);
    if (state == CompilerState::DATA) {
        switch (phase) {
        case CompilerPhase::LOOKAHEAD: {
            Boxed b;
            b.set_integer(i);
            vm->add_data(b);
            break;
        }
        case CompilerPhase::SIZE:
        case CompilerPhase::COMPILE:
            break;
        }
    } else {
        if (phase != CompilerPhase::LOOKAHEAD) {
            insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, i);
            stack_push(Type::INTEGER);
        }
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumberBinary(DARICParser::NumberBinaryContext* context)
{
    set_pos(context->start);
    auto v = context->getText();
    v.erase(0, 1);
    auto i = std::stoi(v, nullptr, 2);
    if (state == CompilerState::DATA) {
        switch (phase) {
        case CompilerPhase::LOOKAHEAD: {
            Boxed b;
            b.set_integer(i);
            vm->add_data(b);
            break;
        }
        case CompilerPhase::SIZE:
        case CompilerPhase::COMPILE:
            break;
        }
    } else {
        if (phase != CompilerPhase::LOOKAHEAD) {
            insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, i);
            stack_push(Type::INTEGER);
        }
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumberFloat(DARICParser::NumberFloatContext* context)
{
    set_pos(context->start);
    auto v = context->getText();
    auto i = std::stod(v);
    if (state == CompilerState::DATA) {
        switch (phase) {
        case CompilerPhase::LOOKAHEAD: {
            Boxed b;
            b.set_float(i);
            vm->add_data(b);
            break;
        }
        case CompilerPhase::SIZE:
        case CompilerPhase::COMPILE:
            break;
        }
    } else {
        if (phase != CompilerPhase::LOOKAHEAD) {
            insert_instruction(Bytecodes::LOAD, Type::FLOAT, constant_float_create(i));
            stack_push(Type::FLOAT);
        }
    }
    return NULL;
}

antlrcpp::Any Compiler::visitString(DARICParser::StringContext* context)
{
    set_pos(context->start);
    auto v = context->getText();
    v.erase(0, 1);
    v.erase(v.length() - 1, 1);
    if (state == CompilerState::DATA) {
        switch (phase) {
        case CompilerPhase::LOOKAHEAD: {
            Boxed b;
            b.set_string(v);
            vm->add_data(b);
            break;
        }
        case CompilerPhase::SIZE:
        case CompilerPhase::COMPILE:
            break;
        }
    } else {
        if (phase != CompilerPhase::LOOKAHEAD) {
            insert_instruction(Bytecodes::LOAD, Type::STRING, constant_string_create(v));
            stack_push(Type::STRING);
        }
    }
    return NULL;
}
