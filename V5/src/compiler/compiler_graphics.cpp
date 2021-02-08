#include "compiler.h"

antlrcpp::Any Compiler::visitNumColours(DARICParser::NumColoursContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    if (context->RED() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFF0000);
    }
    if (context->GREEN() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0x00FF00);
    }
    if (context->YELLOW() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFFFF00);
    }
    if (context->BLUE() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0x0000FF);
    }
    if (context->MAGENTA() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFF00FF);
    }
    if (context->CYAN() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0x00FFFF);
    }
    if (context->WHITE() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFFFFFF);
    }
    if (context->BLACK() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0x000000);
    }
    stack_push(Type::INTEGER);
    return NULL;
}
