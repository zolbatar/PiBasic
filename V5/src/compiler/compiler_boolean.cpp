#include "compiler.h"

antlrcpp::Any Compiler::visitNumExprNOT(DARICParser::NumExprNOTContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    ensure_stack_is_integer();
    insert_bytecode(Bytecodes::BOOL_NOT, Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprANDOREOR(DARICParser::NumExprANDOREORContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr(0));
    ensure_stack_is_integer();
    visit(context->numExpr(1));
    ensure_stack_is_integer();
    if (context->AND() != NULL) {
        boolean(Bytecodes::BOOL_AND);
    } else if (context->OR() != NULL) {
        boolean(Bytecodes::BOOL_OR);
    } else if (context->EOR() != NULL) {
        boolean(Bytecodes::BOOL_EOR);
    }
    return NULL;
}

void Compiler::boolean(Bytecodes i)
{
    switch (peek_type()) {
    case Type::INTEGER:
        insert_bytecode(i, Type::INTEGER);
        break;
    default:
        error("Booleans must be integers");
    }
    stack_pop();
    stack_pop();
    stack_push(Type::INTEGER);
}
