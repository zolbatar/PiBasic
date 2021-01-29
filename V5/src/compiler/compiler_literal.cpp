#include "compiler.h"

antlrcpp::Any Compiler::visitNumberInteger(DARICParser::NumberIntegerContext* context)
{
    if (state == CompilerState::DATA) {
        switch (phase) {
        case CompilerPhase::LOOKAHEAD: {
            Boxed b;
            b.type = Type::INTEGER;
            //b.value_int = ast->integer;
            vm->add_data(b);
            break;
        }
        case CompilerPhase::SIZE:
        case CompilerPhase::COMPILE:
            break;
        }
    } else {
        //insert_instruction(Bytecodes::CONST_I, ast->integer);
        //vm.get
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
