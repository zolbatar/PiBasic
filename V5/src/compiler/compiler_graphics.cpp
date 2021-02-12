#include "compiler.h"

antlrcpp::Any Compiler::visitNumColours(DARICParser::NumColoursContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
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

antlrcpp::Any Compiler::visitDefaultFonts(DARICParser::DefaultFontsContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
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
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    insert_bytecode_notype(Bytecodes::CLS);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCOLOUR(DARICParser::StmtCOLOURContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    if (context->numExpr().size() == 1) {
        insert_bytecode_notype(Bytecodes::COLOURHEX);
    } else {
        insert_bytecode_notype(Bytecodes::COLOURRGB);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCOLOURBG(DARICParser::StmtCOLOURBGContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    if (context->numExpr().size() == 1) {
        insert_bytecode_notype(Bytecodes::COLOURBGHEX);
    } else {
        insert_bytecode_notype(Bytecodes::COLOURBGRGB);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtGRAPHICS(DARICParser::StmtGRAPHICSContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;

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
    insert_bytecode_notype(Bytecodes::GRAPHICS);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtFLIP(DARICParser::StmtFLIPContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    insert_bytecode_notype(Bytecodes::FLIP);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCIRCLE(DARICParser::StmtCIRCLEContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    if (context->FILL() != NULL) {
        insert_bytecode_notype(Bytecodes::CIRCLEFILL);
    } else {
        insert_bytecode_notype(Bytecodes::CIRCLE);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtLINE(DARICParser::StmtLINEContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_bytecode_notype(Bytecodes::LINE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtRECTANGLE(DARICParser::StmtRECTANGLEContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    if (context->FILL() != NULL) {
        insert_bytecode_notype(Bytecodes::RECTANGLEFILL);
    } else {
        insert_bytecode_notype(Bytecodes::RECTANGLE);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTRIANGLE(DARICParser::StmtTRIANGLEContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    if (context->FILL() != NULL) {
        insert_bytecode_notype(Bytecodes::TRIANGLEFILL);
    } else if (context->SHADED() != NULL) {
        insert_bytecode_notype(Bytecodes::TRIANGLESHADED);
    } else {
        insert_bytecode_notype(Bytecodes::TRIANGLE);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtPLOT(DARICParser::StmtPLOTContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_bytecode_notype(Bytecodes::PLOT);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCLIPON(DARICParser::StmtCLIPONContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_bytecode_notype(Bytecodes::CLIP);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCLIPOFF(DARICParser::StmtCLIPOFFContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    insert_bytecode_notype(Bytecodes::CLIPOFF);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTEXT(DARICParser::StmtTEXTContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    visit(context->strExpr());
    stack_pop();
    insert_bytecode_notype(Bytecodes::TEXT);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTEXTRIGHT(DARICParser::StmtTEXTRIGHTContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    visit(context->strExpr());
    stack_pop();
    insert_bytecode_notype(Bytecodes::TEXTRIGHT);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTEXTCENTRE(DARICParser::StmtTEXTCENTREContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    visit(context->strExpr());
    stack_pop();
    insert_bytecode_notype(Bytecodes::TEXTCENTRE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtSHOWFPS(DARICParser::StmtSHOWFPSContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    insert_bytecode_notype(Bytecodes::SHOWFPS);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncPOINT(DARICParser::NumFuncPOINTContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_bytecode_notype(Bytecodes::POINT);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncCOLOUR(DARICParser::NumFuncCOLOURContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_bytecode_notype(Bytecodes::COLOUREXPRESSION);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncSCREENWIDTH(DARICParser::NumFuncSCREENWIDTHContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    insert_bytecode_notype(Bytecodes::SCREENWIDTH);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncSCREENHEIGHT(DARICParser::NumFuncSCREENHEIGHTContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    insert_bytecode_notype(Bytecodes::SCREENHEIGHT);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncCREATEFONT(DARICParser::NumFuncCREATEFONTContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_bytecode_notype(Bytecodes::CREATEFONT);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncLOADTYPEFACE(DARICParser::NumFuncLOADTYPEFACEContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->strExpr());
    stack_pop();
    insert_bytecode_notype(Bytecodes::LOADTYPEFACE);
    stack_push(Type::INTEGER);
    return NULL;
}
