#include "compiler.h"

antlrcpp::Any Compiler::visitNumExprNumRelop(DARICParser::NumExprNumRelopContext* context)
{
    set_pos(context->start);
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    visit(context->compare());
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprStrRelop(DARICParser::NumExprStrRelopContext* context)
{
    set_pos(context->start);
    visit(context->strExpr(0));
    visit(context->strExpr(1));
    visit(context->compare());
    return NULL;
}

antlrcpp::Any Compiler::visitCompare(DARICParser::CompareContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitCompareEQ(DARICParser::CompareEQContext* context)
{
    set_pos(context->start);
    insert_bytecode(Bytecodes::CMP_E, peek_type());
    stack_pop();
    stack_pop();
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitCompareNE(DARICParser::CompareNEContext* context)
{
    set_pos(context->start);
    insert_bytecode(Bytecodes::CMP_NE, peek_type());
    stack_pop();
    stack_pop();
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitCompareGT(DARICParser::CompareGTContext* context)
{
    set_pos(context->start);
    insert_bytecode(Bytecodes::CMP_G, peek_type());
    stack_pop();
    stack_pop();
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitCompareGE(DARICParser::CompareGEContext* context)
{
    set_pos(context->start);
    insert_bytecode(Bytecodes::CMP_GE, peek_type());
    stack_pop();
    stack_pop();
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitCompareLT(DARICParser::CompareLTContext* context)
{
    set_pos(context->start);
    insert_bytecode(Bytecodes::CMP_L, peek_type());
    stack_pop();
    stack_pop();
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitCompareLE(DARICParser::CompareLEContext* context)
{
    set_pos(context->start);
    insert_bytecode(Bytecodes::CMP_LE, peek_type());
    stack_pop();
    stack_pop();
    stack_push(Type::INTEGER);
    return NULL;
}
