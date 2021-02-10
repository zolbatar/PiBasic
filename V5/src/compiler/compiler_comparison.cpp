#include "compiler.h"

antlrcpp::Any Compiler::visitNumExprNumRelop(DARICParser::NumExprNumRelopContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    if (context->EQ() != NULL) {
        insert_bytecode(Bytecodes::CMP_E, peek_type());
    } else if (context->NE() != NULL) {
        insert_bytecode(Bytecodes::CMP_NE, peek_type());
    } else if (context->GT() != NULL) {
        insert_bytecode(Bytecodes::CMP_G, peek_type());
    } else if (context->LT() != NULL) {
        insert_bytecode(Bytecodes::CMP_L, peek_type());
    } else if (context->GE() != NULL) {
        insert_bytecode(Bytecodes::CMP_GE, peek_type());
    } else if (context->LE() != NULL) {
        insert_bytecode(Bytecodes::CMP_LE, peek_type());
    }
    stack_pop();
    stack_pop();
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprStrRelop(DARICParser::NumExprStrRelopContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->strExpr(0));
    visit(context->strExpr(1));
    expression_type_conversion(context, false);
    if (context->EQ() != NULL) {
        insert_bytecode(Bytecodes::CMP_E, peek_type());
    } else if (context->NE() != NULL) {
        insert_bytecode(Bytecodes::CMP_NE, peek_type());
    } else if (context->GT() != NULL) {
        insert_bytecode(Bytecodes::CMP_G, peek_type());
    } else if (context->LT() != NULL) {
        insert_bytecode(Bytecodes::CMP_L, peek_type());
    } else if (context->GE() != NULL) {
        insert_bytecode(Bytecodes::CMP_GE, peek_type());
    } else if (context->LE() != NULL) {
        insert_bytecode(Bytecodes::CMP_LE, peek_type());
    }
    stack_pop();
    stack_pop();
    stack_push(Type::INTEGER);
    return NULL;
}

