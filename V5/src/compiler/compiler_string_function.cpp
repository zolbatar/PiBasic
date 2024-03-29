#include "compiler.h"

antlrcpp::Any Compiler::visitStrFunc(DARICParser::StrFuncContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitStrFuncTIMES(DARICParser::StrFuncTIMESContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    insert_bytecode(Bytecodes::TIMES, Type::STRING);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncCHRS(DARICParser::StrFuncCHRSContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::CHRS, Type::STRING);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncLEFTS(DARICParser::StrFuncLEFTSContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
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
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
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
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
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
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
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
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    ensure_stack_is_float();
    stack_pop();
    insert_bytecode(Bytecodes::STRS, Type::STRING);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncSTRSHEX(DARICParser::StrFuncSTRSHEXContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    ensure_stack_is_float();
    stack_pop();
    insert_bytecode(Bytecodes::STRS_H, Type::STRING);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncSTRINGS(DARICParser::StrFuncSTRINGSContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    visit(context->strExpr());
    ensure_stack_is_string();
    insert_bytecode(Bytecodes::STRINGS, Type::STRING);
    return NULL;
}
