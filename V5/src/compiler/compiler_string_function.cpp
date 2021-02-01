#include "compiler.h"

antlrcpp::Any Compiler::visitStrFunc(DARICParser::StrFuncContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitStrFuncTIMES(DARICParser::StrFuncTIMESContext* context)
{
    set_pos(context->start);
    insert_bytecode(Bytecodes::TIMES);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncCHRSP(DARICParser::StrFuncCHRSPContext* context)
{
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::CHRS);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncCHRS(DARICParser::StrFuncCHRSContext* context)
{
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::CHRS);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncLEFTS(DARICParser::StrFuncLEFTSContext* context)
{
    set_pos(context->start);
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::LEFTS);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncMIDS3(DARICParser::StrFuncMIDS3Context* context)
{
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
    insert_bytecode(Bytecodes::MIDS);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncMIDS2(DARICParser::StrFuncMIDS2Context* context)
{
    set_pos(context->start);
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_instruction(Bytecodes::CONST_I, 0);
    insert_bytecode(Bytecodes::MIDS);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncRIGHTS(DARICParser::StrFuncRIGHTSContext* context)
{
    set_pos(context->start);
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::RIGHTS);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncSTRS(DARICParser::StrFuncSTRSContext* context)
{
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    stack_pop();
    insert_bytecode(Bytecodes::STRS);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncSTRSHEX(DARICParser::StrFuncSTRSHEXContext* context)
{
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_float();
    stack_pop();
    insert_bytecode(Bytecodes::STRS_H);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncSTRINGS(DARICParser::StrFuncSTRINGSContext* context)
{
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    visit(context->strExpr());
    ensure_stack_is_string();
    insert_bytecode(Bytecodes::STRINGS);
    return NULL;
}
