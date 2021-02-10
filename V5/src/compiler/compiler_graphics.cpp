#include "compiler.h"

antlrcpp::Any Compiler::visitNumColours(DARICParser::NumColoursContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    if (context->RED() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFF0000);
    } else if (context->GREEN() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0x00FF00);
    } else if (context->YELLOW() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFFFF00);
    } else if (context->BLUE() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0x0000FF);
    } else if (context->MAGENTA() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFF00FF);
    } else if (context->CYAN() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0x00FFFF);
    } else if (context->WHITE() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFFFFFF);
    } else if (context->BLACK() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0x000000);
    }
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitDefaultFonts(DARICParser::NumDefaultFontsContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    if (context->MONO15() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0);
    } else if (context->MONO20() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 1);
    } else if (context->MONO25() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 2);
    } else if (context->MONO30() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 3);
    } else if (context->MONO35() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 4);
    } else if (context->MONO40() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 5);
    } else if (context->MONO50() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 6);
    } else if (context->MONO75() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 7);
    } else if (context->MONO100() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 8);
    } else if (context->PROP15() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 9);
    } else if (context->PROP20() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 10);
    } else if (context->PROP25() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 11);
    } else if (context->PROP30() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 12);
    } else if (context->PROP35() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 13);
    } else if (context->PROP40() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 14);
    } else if (context->PROP50() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 15);
    } else if (context->PROP75() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 16);
    } else if (context->PROP100() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 17);
    } else if (context->SERIF15() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 18);
    } else if (context->SERIF20() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 19);
    } else if (context->SERIF25() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 20);
    } else if (context->SERIF30() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 21);
    } else if (context->SERIF35() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 22);
    } else if (context->SERIF40() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 23);
    } else if (context->SERIF50() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 24);
    } else if (context->SERIF75() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 25);
    } else if (context->SERIF100() != NULL) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 26);
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
    visit(context->strExpr());
    stack_pop();
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
    visit(context->strExpr());
    stack_pop();
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
    visit(context->strExpr());
    stack_pop();
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
        ensure_stack_is_integer();
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
        ensure_stack_is_integer();
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

antlrcpp::Any Compiler::visitNumFuncCREATEFONT(DARICParser::NumFuncCREATEFONTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_bytecode(Bytecodes::CREATEFONT, Type::NOTYPE);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncLOADTYPEFACE(DARICParser::NumFuncLOADTYPEFACEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->strExpr());
    stack_pop();
    insert_bytecode(Bytecodes::LOADTYPEFACE, Type::NOTYPE);
    stack_push(Type::INTEGER);
    return NULL;
}
