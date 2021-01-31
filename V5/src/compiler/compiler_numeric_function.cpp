#include "compiler.h"

antlrcpp::Any Compiler::visitNumFunc(DARICParser::NumFuncContext* context)
{
    if (context->PI() != NULL) {
        visit(context->numExpr());
        insert_bytecode(Bytecodes::PI);
        stack_push(Type::REAL);
    } else if (context->LN() != NULL) {
        visit(context->numExpr());
        ensure_stack_is_float();
        insert_bytecode(Bytecodes::LN);
    } else if (context->LOG() != NULL) {
        visit(context->numExpr());
        ensure_stack_is_float();
        insert_bytecode(Bytecodes::LOG);
    } else if (context->EXP() != NULL) {
        visit(context->numExpr());
        ensure_stack_is_float();
        insert_bytecode(Bytecodes::EXP);
    } else if (context->ATN() != NULL) {
        visit(context->numExpr());
        ensure_stack_is_float();
        insert_bytecode(Bytecodes::ATN);
    } else if (context->TAN() != NULL) {
        visit(context->numExpr());
        ensure_stack_is_float();
        insert_bytecode(Bytecodes::TAN);
    } else if (context->COS() != NULL) {
        visit(context->numExpr());
        ensure_stack_is_float();
        insert_bytecode(Bytecodes::COS);
    } else if (context->SIN() != NULL) {
        visit(context->numExpr());
        ensure_stack_is_float();
        insert_bytecode(Bytecodes::SIN);
    } else if (context->ABS() != NULL) {
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
    } else if (context->ACS() != NULL) {
        visit(context->numExpr());
        ensure_stack_is_float();
        insert_bytecode(Bytecodes::ACS);
    } else if (context->ASN() != NULL) {
        visit(context->numExpr());
        ensure_stack_is_float();
        insert_bytecode(Bytecodes::ASN);
    } else if (context->DEG() != NULL) {
        visit(context->numExpr());
        ensure_stack_is_float();
        insert_bytecode(Bytecodes::DEG);
    } else if (context->RAD() != NULL) {
        visit(context->numExpr());
        ensure_stack_is_float();
        insert_bytecode(Bytecodes::RAD);
    } else if (context->SQR() != NULL) {
        visit(context->numExpr());
        ensure_stack_is_float();
        insert_bytecode(Bytecodes::SQR);
    } else if (context->SGN() != NULL) {
        visit(context->numExpr());
        ensure_stack_is_float();
        insert_bytecode(Bytecodes::SGN);
        stack_push(Type::INTEGER);
    } else if (context->RND() != NULL) {
        visit(context->numExpr());
        if (context->numExpr() == NULL) {
            insert_bytecode(Bytecodes::RND);
            stack_push(Type::INTEGER);
        } else {
            ensure_stack_is_integer();
            insert_bytecode(Bytecodes::RNDRANGE);
        }
    } else if (context->RND0() != NULL) {
        insert_instruction(Bytecodes::CONST_I, 0);
        insert_bytecode(Bytecodes::RNDREAL);
        stack_push(Type::REAL);
    } else if (context->RND1() != NULL) {
        insert_instruction(Bytecodes::CONST_I, 1);
        insert_bytecode(Bytecodes::RNDREAL);
        stack_push(Type::REAL);
    } else {
        return visitChildren(context);
    }
    return NULL;
}
