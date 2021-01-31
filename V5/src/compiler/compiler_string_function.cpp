#include "compiler.h"

antlrcpp::Any Compiler::visitStrFunc(DARICParser::StrFuncContext* context)
{
    if (context->TIMES() != NULL) {
        insert_bytecode(Bytecodes::TIMES);
        stack_push(Type::STRING);
    } else if (context->STRS() != NULL) {
        visit(context->numExpr(0));
        ensure_stack_is_float();
        stack_pop();
        insert_bytecode(Bytecodes::STRS);
        stack_push(Type::STRING);
    } else if (context->STRINGS() != NULL) {
        visit(context->numExpr(0));
        ensure_stack_is_integer();
        stack_pop();
        visit(context->strExpr());
        ensure_stack_is_string();
        insert_bytecode(Bytecodes::STRINGS);
    } else if (context->CHRS() != NULL) {
        visit(context->numExpr(0));
        ensure_stack_is_integer();
        stack_pop();
        insert_bytecode(Bytecodes::CHRS);
        stack_push(Type::STRING);
    } else if (context->LEFTS() != NULL) {
        visit(context->strExpr());
        ensure_stack_is_string();
        stack_pop();
        visit(context->numExpr(0));
        ensure_stack_is_integer();
        stack_pop();
        insert_bytecode(Bytecodes::LEFTS);
        stack_push(Type::STRING);
    } else if (context->MIDS() != NULL) {
        visit(context->strExpr());
        ensure_stack_is_string();
        stack_pop();
        visit(context->numExpr(0));
        ensure_stack_is_integer();
        stack_pop();
        if (context->numExpr().size() == 1) {
            insert_instruction(Bytecodes::CONST_I, 0);
        } else {
            visit(context->numExpr(1));
            ensure_stack_is_integer();
            stack_pop();
        }
        insert_bytecode(Bytecodes::MIDS);
        stack_push(Type::STRING);
    } else if (context->RIGHTS() != NULL) {
        visit(context->strExpr());
        ensure_stack_is_string();
        stack_pop();
        visit(context->numExpr(0));
        ensure_stack_is_integer();
        stack_pop();
        insert_bytecode(Bytecodes::RIGHTS);
        stack_push(Type::STRING);
    } else {
        return visitChildren(context);
    }
    return NULL;
}
