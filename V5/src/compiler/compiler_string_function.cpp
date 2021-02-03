#include "compiler.h"

antlrcpp::Any Compiler::visitStrFunc(DARICParser::StrFuncContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitStrFuncTIMES(DARICParser::StrFuncTIMESContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_bytecode(Bytecodes::TIMES, Type::STRING);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncCHRSP(DARICParser::StrFuncCHRSPContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::CHRS, Type::STRING);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncCHRS(DARICParser::StrFuncCHRSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::CHRS, Type::STRING);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncLEFTS(DARICParser::StrFuncLEFTSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::LEFTS, Type::STRING);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncMIDS3(DARICParser::StrFuncMIDS3Context* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    visit(context->numExpr(0));
    ensure_stack_is_integer();
    stack_pop();
    visit(context->numExpr(1));
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::MIDS, Type::STRING);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncMIDS2(DARICParser::StrFuncMIDS2Context* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0);
    insert_bytecode(Bytecodes::MIDS, Type::STRING);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncRIGHTS(DARICParser::StrFuncRIGHTSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::RIGHTS, Type::STRING);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncSTRS(DARICParser::StrFuncSTRSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    stack_pop();
    insert_bytecode(Bytecodes::STRS, Type::STRING);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncSTRSHEX(DARICParser::StrFuncSTRSHEXContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    stack_pop();
    insert_bytecode(Bytecodes::STRS_H, Type::STRING);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncSTRINGS(DARICParser::StrFuncSTRINGSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    visit(context->strExpr());
    ensure_stack_is_string();
    insert_bytecode(Bytecodes::STRINGS, Type::STRING);
    return NULL;
}
