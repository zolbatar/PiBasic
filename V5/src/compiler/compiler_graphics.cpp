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

antlrcpp::Any Compiler::visitStmtCLS(DARICParser::StmtCLSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCOLOUR(DARICParser::StmtCOLOURContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCOLOURBG(DARICParser::StmtCOLOURBGContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtGRAPHICS(DARICParser::StmtGRAPHICSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtFLIP(DARICParser::StmtFLIPContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCIRCLE(DARICParser::StmtCIRCLEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtLINE(DARICParser::StmtLINEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtRECTANGLE(DARICParser::StmtRECTANGLEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTRIANGLE(DARICParser::StmtTRIANGLEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtPLOT(DARICParser::StmtPLOTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCLIPON(DARICParser::StmtCLIPONContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCLIPOFF(DARICParser::StmtCLIPOFFContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTEXT(DARICParser::StmtTEXTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTEXTRIGHT(DARICParser::StmtTEXTRIGHTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTEXTCENTRE(DARICParser::StmtTEXTCENTREContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtSHOWFPS(DARICParser::StmtSHOWFPSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncPOINT(DARICParser::NumFuncPOINTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}
