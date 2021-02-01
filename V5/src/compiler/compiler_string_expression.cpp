#include "compiler.h"

antlrcpp::Any Compiler::visitStrExpr(DARICParser::StrExprContext* context)
{
    set_pos(context->start);
    if (context->PLUS() != NULL) {
        visit(context->strExpr(0));
        visit(context->strExpr(1));
        insert_bytecode(Bytecodes::ADD_S);
        stack_pop();
    } else {
        visitChildren(context);
    }
    return NULL;
}
