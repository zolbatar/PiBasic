#include "compiler.h"

antlrcpp::Any Compiler::visitStrExpr(DARICParser::StrExprContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    if (context->PLUS() != NULL) {
        visit(context->strExpr(0));
        visit(context->strExpr(1));
        insert_bytecode(Bytecodes::ADD, Type::STRING);
        stack_pop();
    } else {
        visitChildren(context);
    }
    return NULL;
}
