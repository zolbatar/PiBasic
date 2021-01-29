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
            auto v = context->getText();
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
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumberHex(DARICParser::NumberHexContext* context)
{
    auto v = context->getText();
    auto i = std::stoi(v, nullptr, 16);
    if (state == CompilerState::DATA) {
        switch (phase) {
        case CompilerPhase::LOOKAHEAD: {
            Boxed b;
            b.type = Type::INTEGER;
            auto v = context->getText();
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
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumberBinary(DARICParser::NumberBinaryContext* context)
{
    auto v = context->getText();
    auto i = std::stoi(v, nullptr, 2);
    if (state == CompilerState::DATA) {
        switch (phase) {
        case CompilerPhase::LOOKAHEAD: {
            Boxed b;
            b.type = Type::INTEGER;
            auto v = context->getText();
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
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumberFloat(DARICParser::NumberFloatContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitString(DARICParser::StringContext* context)
{
    return visitChildren(context);
}
