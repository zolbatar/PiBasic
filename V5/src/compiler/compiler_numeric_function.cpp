#include "compiler.h"

antlrcpp::Any Compiler::visitNumFuncPI(DARICParser::NumFuncPIContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_bytecode(Bytecodes::PI, Type::FLOAT);
    stack_push(Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncTIME(DARICParser::NumFuncTIMEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_bytecode(Bytecodes::TIME, Type::INTEGER);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncRND(DARICParser::NumFuncRNDContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_bytecode(Bytecodes::RND, Type::INTEGER);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncRND0(DARICParser::NumFuncRND0Context* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0);
    insert_bytecode(Bytecodes::RNDREAL, Type::FLOAT);
    stack_push(Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncRND1(DARICParser::NumFuncRND1Context* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 1);
    insert_bytecode(Bytecodes::RNDREAL, Type::FLOAT);
    stack_push(Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncRNDRANGE(DARICParser::NumFuncRNDRANGEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_integer();
    insert_bytecode(Bytecodes::RNDRANGE, Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncLN(DARICParser::NumFuncLNContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::LN, Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncLOG(DARICParser::NumFuncLOGContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::LOG, Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncEXP(DARICParser::NumFuncEXPContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::EXP, Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncATN(DARICParser::NumFuncATNContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::ATN, Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncTAN(DARICParser::NumFuncTANContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::TAN, Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncCOS(DARICParser::NumFuncCOSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::COS, Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncSIN(DARICParser::NumFuncSINContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::SIN, Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncABS(DARICParser::NumFuncABSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    switch (peek_type()) {
    case Type::INTEGER:
        insert_bytecode(Bytecodes::ABS, Type::INTEGER);
        break;
    case Type::FLOAT:
        insert_bytecode(Bytecodes::ABS, Type::FLOAT);
        break;
    default:
        error("ABS must have a numeric value");
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncACS(DARICParser::NumFuncACSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::ACS, Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncASN(DARICParser::NumFuncASNContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::ASN, Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncDEG(DARICParser::NumFuncDEGContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::DEG, Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncRAD(DARICParser::NumFuncRADContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::RAD, Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncSQR(DARICParser::NumFuncSQRContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::SQR, Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncSGN(DARICParser::NumFuncSGNContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    stack_pop();
    insert_bytecode(Bytecodes::SGN, Type::INTEGER);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncASC(DARICParser::NumFuncASCContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    insert_bytecode(Bytecodes::ASC, Type::INTEGER);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncLEN(DARICParser::NumFuncLENContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    insert_bytecode(Bytecodes::LEN, Type::INTEGER);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncINSTR2(DARICParser::NumFuncINSTR2Context* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->strExpr(0));
    ensure_stack_is_string();
    stack_pop();
    visit(context->strExpr(1));
    ensure_stack_is_string();
    stack_pop();
    insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0);
    insert_bytecode(Bytecodes::INSTR, Type::INTEGER);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncINSTR3(DARICParser::NumFuncINSTR3Context* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->strExpr(0));
    ensure_stack_is_string();
    stack_pop();
    visit(context->strExpr(1));
    ensure_stack_is_string();
    stack_pop();
    visit(context->numExpr());
    stack_pop();
    insert_bytecode(Bytecodes::INSTR, Type::INTEGER);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncVAL(DARICParser::NumFuncVALContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    insert_bytecode(Bytecodes::VAL, Type::FLOAT);
    stack_push(Type::FLOAT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncFALSE(DARICParser::NumFuncFALSEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncTRUE(DARICParser::NumFuncTRUEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 1);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncINT(DARICParser::NumFuncINTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    auto type = stack_pop();
    switch (type) {
    case Type::INTEGER:
        break;
    case Type::FLOAT:
        insert_instruction(Bytecodes::CONV_INT, type, 0);
        break;
    }
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncFLOAT(DARICParser::NumFuncFLOATContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    auto type = stack_pop();
    switch (type) {
    case Type::INTEGER:
        insert_instruction(Bytecodes::CONV_FLOAT, type, 0);
        break;
    case Type::FLOAT:
        break;
    }
    stack_push(Type::FLOAT);
    return NULL;
}
