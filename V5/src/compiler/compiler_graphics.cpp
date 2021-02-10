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
    insert_bytecode(Bytecodes::CLS, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCOLOUR(DARICParser::StmtCOLOURContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    if (context->numExpr().size() == 1) {
        insert_bytecode(Bytecodes::COLOURHEX, Type::NOTYPE);
    } else {
        insert_bytecode(Bytecodes::COLOURRGB, Type::NOTYPE);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCOLOURBG(DARICParser::StmtCOLOURBGContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    if (context->numExpr().size() == 1) {
        insert_bytecode(Bytecodes::COLOURBGHEX, Type::NOTYPE);
    } else {
        insert_bytecode(Bytecodes::COLOURBGRGB, Type::NOTYPE);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtGRAPHICS(DARICParser::StmtGRAPHICSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);

    // Dimensions?
    if (context->numExpr().size() == 2) {
        visit(context->numExpr(0));
        ensure_stack_is_integer();
        stack_pop();
        visit(context->numExpr(1));
        ensure_stack_is_integer();
        stack_pop();
    } else {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, -1);
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, -1);
    }

    // Banked?
    if (context->BANKED() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 1);
    } else {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0);
    }
    insert_bytecode(Bytecodes::GRAPHICS, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtFLIP(DARICParser::StmtFLIPContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_bytecode(Bytecodes::FLIP, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCIRCLE(DARICParser::StmtCIRCLEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    if (context->FILL() != NULL) {
        insert_bytecode(Bytecodes::CIRCLEFILL, Type::NOTYPE);
    } else {
        insert_bytecode(Bytecodes::CIRCLE, Type::NOTYPE);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtLINE(DARICParser::StmtLINEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_bytecode(Bytecodes::LINE, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtRECTANGLE(DARICParser::StmtRECTANGLEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    if (context->FILL() != NULL) {
        insert_bytecode(Bytecodes::RECTANGLEFILL, Type::NOTYPE);
    } else {
        insert_bytecode(Bytecodes::RECTANGLE, Type::NOTYPE);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTRIANGLE(DARICParser::StmtTRIANGLEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    if (context->FILL() != NULL) {
        insert_bytecode(Bytecodes::TRIANGLEFILL, Type::NOTYPE);
    } else if (context->SHADED() != NULL) {
        insert_bytecode(Bytecodes::TRIANGLESHADED, Type::NOTYPE);
    } else {
        insert_bytecode(Bytecodes::TRIANGLE, Type::NOTYPE);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtPLOT(DARICParser::StmtPLOTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_bytecode(Bytecodes::PLOT, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCLIPON(DARICParser::StmtCLIPONContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_bytecode(Bytecodes::CLIP, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCLIPOFF(DARICParser::StmtCLIPOFFContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_bytecode(Bytecodes::CLIPOFF, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTEXT(DARICParser::StmtTEXTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_bytecode(Bytecodes::TEXT, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTEXTRIGHT(DARICParser::StmtTEXTRIGHTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_bytecode(Bytecodes::TEXTRIGHT, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTEXTCENTRE(DARICParser::StmtTEXTCENTREContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_bytecode(Bytecodes::TEXTCENTRE, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtSHOWFPS(DARICParser::StmtSHOWFPSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_bytecode(Bytecodes::SHOWFPS, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncPOINT(DARICParser::NumFuncPOINTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        stack_pop();
    }
    insert_bytecode(Bytecodes::POINT, Type::NOTYPE);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncCOLOUR(DARICParser::NumFuncCOLOURContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        stack_pop();
    }
    insert_bytecode(Bytecodes::COLOUREXPRESSION, Type::NOTYPE);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncSCREENWIDTH(DARICParser::NumFuncSCREENWIDTHContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_bytecode(Bytecodes::SCREENWIDTH, Type::NOTYPE);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncSCREENHEIGHT(DARICParser::NumFuncSCREENHEIGHTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_bytecode(Bytecodes::SCREENHEIGHT, Type::NOTYPE);
    stack_push(Type::INTEGER);
    return NULL;
}
