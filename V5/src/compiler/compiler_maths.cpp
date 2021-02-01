#include "compiler.h"

antlrcpp::Any Compiler::visitNumExprHat(DARICParser::NumExprHatContext* context)
{
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    insert_bytecode_based_on_peektype({
        { Type::INTEGER, Bytecodes::POWER_I },
        { Type::REAL, Bytecodes::POWER_F },
    });
    stack_pop();
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprMultiply(DARICParser::NumExprMultiplyContext* context)
{
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    insert_bytecode_based_on_peektype({
        { Type::INTEGER, Bytecodes::MULTIPLY_I },
        { Type::REAL, Bytecodes::MULTIPLY_F },
    });
    stack_pop();
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprDivide(DARICParser::NumExprDivideContext* context)
{
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, true);
    insert_bytecode(Bytecodes::DIVIDE_F);
    stack_pop();
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprDIV(DARICParser::NumExprDIVContext* context)
{
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    switch (peek_type()) {
    case Type::INTEGER:
        insert_bytecode(Bytecodes::DIV_I);
        stack_pop();
        break;
    case Type::REAL:
        insert_bytecode(Bytecodes::DIV_F);
        stack_pop();
        stack_pop();
        stack_push(Type::INTEGER);
        break;
    default:
        throw std::runtime_error("Unknown type for DIV");
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprMOD(DARICParser::NumExprMODContext* context)
{
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    switch (peek_type()) {
    case Type::INTEGER:
        insert_bytecode(Bytecodes::MOD_I);
        stack_pop();
        break;
    case Type::REAL:
        insert_bytecode(Bytecodes::MOD_F);
        stack_pop();
        stack_pop();
        stack_push(Type::INTEGER);
        break;
    default:
        throw std::runtime_error("Unknown type for MOD");
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprPlus(DARICParser::NumExprPlusContext* context)
{
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    insert_bytecode_based_on_peektype({
        { Type::INTEGER, Bytecodes::ADD_I },
        { Type::REAL, Bytecodes::ADD_F },
    });
    stack_pop();
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprSubtract(DARICParser::NumExprSubtractContext* context)
{
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    insert_bytecode_based_on_peektype({
        { Type::INTEGER, Bytecodes::SUBTRACT_I },
        { Type::REAL, Bytecodes::SUBTRACT_F },
    });
    stack_pop();
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprSHL(DARICParser::NumExprSHLContext* context)
{
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    ensure_stack_is_integer();
    insert_bytecode(Bytecodes::SHL);
    stack_pop();
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprSHR(DARICParser::NumExprSHRContext* context)
{
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    ensure_stack_is_integer();
    insert_bytecode(Bytecodes::SHR);
    stack_pop();
    return NULL;
}

void Compiler::expression_type_conversion(DARICParser::NumExprContext* context, bool DIVIDE)
{
    // Check types
    if (stack_size() >= 2) {
        stack_pop_keep();
        Type type2 = var_type;
        stack_pop_keep();
        Type type1 = var_type;

        if (DIVIDE) {
            // Is this a divide? If so, we always promote to a float
            if (type2 == Type::REAL && type1 == Type::INTEGER) {
                insert_bytecode(Bytecodes::I_TO_F2);
            } else if (type2 == Type::INTEGER && type1 == Type::REAL) {
                insert_bytecode(Bytecodes::I_TO_F);
            } else if (type2 == Type::INTEGER && type1 == Type::INTEGER) {
                insert_bytecode(Bytecodes::I_TO_F);
                insert_bytecode(Bytecodes::I_TO_F2);
            }
            stack_push(Type::REAL);
            stack_push(Type::REAL);
        } else {
            // Do we need to promote (or demote)?
            if (type2 == Type::REAL && type1 == Type::INTEGER) {
                insert_bytecode(Bytecodes::I_TO_F2);
                stack_push(Type::REAL);
                stack_push(Type::REAL);
            } else if (type2 == Type::INTEGER && type1 == Type::REAL) {
                insert_bytecode(Bytecodes::I_TO_F);
                stack_push(Type::REAL);
                stack_push(Type::REAL);
            } else {
                stack_push(type1);
                stack_push(type2);
            }
        }
    }
}
