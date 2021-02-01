#include "compiler.h"

antlrcpp::Any Compiler::visitNumFuncPI(DARICParser::NumFuncPIContext* context)
{
    insert_bytecode(Bytecodes::PI);
    stack_push(Type::REAL);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncTIME(DARICParser::NumFuncTIMEContext* context)
{
    insert_bytecode(Bytecodes::TIME);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncRND(DARICParser::NumFuncRNDContext* context)
{
    insert_bytecode(Bytecodes::RND);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncRND0(DARICParser::NumFuncRND0Context* context)
{
    insert_instruction(Bytecodes::CONST_I, 0);
    insert_bytecode(Bytecodes::RNDREAL);
    stack_push(Type::REAL);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncRND1(DARICParser::NumFuncRND1Context* context)
{
    insert_instruction(Bytecodes::CONST_I, 1);
    insert_bytecode(Bytecodes::RNDREAL);
    stack_push(Type::REAL);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncRNDRANGE(DARICParser::NumFuncRNDRANGEContext* context)
{
    visit(context->numExpr());
    ensure_stack_is_integer();
    insert_bytecode(Bytecodes::RNDRANGE);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncLN(DARICParser::NumFuncLNContext* context)
{
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::LN);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncLOG(DARICParser::NumFuncLOGContext* context)
{
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::LOG);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncEXP(DARICParser::NumFuncEXPContext* context)
{
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::EXP);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncATN(DARICParser::NumFuncATNContext* context)
{
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::ATN);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncTAN(DARICParser::NumFuncTANContext* context)
{
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::TAN);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncCOS(DARICParser::NumFuncCOSContext* context)
{
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::COS);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncSIN(DARICParser::NumFuncSINContext* context)
{
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::SIN);
}

antlrcpp::Any Compiler::visitNumFuncABS(DARICParser::NumFuncABSContext* context)
{
    visit(context->numExpr());
    switch (peek_type()) {
    case Type::INTEGER:
        insert_bytecode(Bytecodes::ABS_I);
        break;
    case Type::REAL:
        insert_bytecode(Bytecodes::ABS_F);
        break;
    default:
        throw std::runtime_error("ABS must have a numeric value");
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncACS(DARICParser::NumFuncACSContext* context)
{
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::ACS);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncASN(DARICParser::NumFuncASNContext* context)
{
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::ASN);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncDEG(DARICParser::NumFuncDEGContext* context)
{
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::DEG);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncRAD(DARICParser::NumFuncRADContext* context)
{
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::RAD);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncSQR(DARICParser::NumFuncSQRContext* context)
{
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::SQR);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncSGN(DARICParser::NumFuncSGNContext* context)
{
    visit(context->numExpr());
    ensure_stack_is_float();
    insert_bytecode(Bytecodes::SGN);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncASC(DARICParser::NumFuncASCContext* context)
{
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    insert_bytecode(Bytecodes::ASC);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncLEN(DARICParser::NumFuncLENContext* context)
{
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    insert_bytecode(Bytecodes::LEN);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncINSTR2(DARICParser::NumFuncINSTR2Context* context)
{
    visit(context->strExpr(0));
    ensure_stack_is_string();
    stack_pop();
    visit(context->strExpr(1));
    ensure_stack_is_string();
    stack_pop();
    insert_instruction(Bytecodes::CONST_I, 0);
    insert_bytecode(Bytecodes::INSTR);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncINSTR3(DARICParser::NumFuncINSTR3Context* context)
{
    visit(context->strExpr(0));
    ensure_stack_is_string();
    stack_pop();
    visit(context->strExpr(1));
    ensure_stack_is_string();
    stack_pop();
    visit(context->numExpr());
    stack_pop();
    insert_bytecode(Bytecodes::INSTR);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncVAL(DARICParser::NumFuncVALContext* context)
{
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    insert_bytecode(Bytecodes::VAL);
    stack_push(Type::REAL);
    return NULL;
}
