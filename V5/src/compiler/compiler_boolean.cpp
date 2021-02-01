#include "compiler.h"

antlrcpp::Any Compiler::visitNumExprNOT(DARICParser::NumExprNOTContext* context)
{
    visit(context->numExpr());
    ensure_stack_is_integer();
    insert_bytecode(Bytecodes::BOOL_NOT);
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprAND(DARICParser::NumExprANDContext* context)
{
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    boolean(Bytecodes::BOOL_AND);
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprOR(DARICParser::NumExprORContext* context)
{
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    boolean(Bytecodes::BOOL_OR);
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprEOR(DARICParser::NumExprEORContext* context)
{
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    boolean(Bytecodes::BOOL_EOR);
    return NULL;
}

void Compiler::boolean(Bytecodes i)
{
    switch (peek_type()) {
    case Type::INTEGER:
        insert_bytecode(i);
        break;
    default:
        throw std::runtime_error("Booleans must be int");
    }
    stack_pop();
    stack_pop();
    stack_push(Type::INTEGER);
}
