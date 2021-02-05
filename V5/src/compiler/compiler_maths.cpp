#include "compiler.h"

antlrcpp::Any Compiler::visitNumExprHat(DARICParser::NumExprHatContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    insert_bytecode(Bytecodes::POWER, peek_type());
    stack_pop();
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprMultiply(DARICParser::NumExprMultiplyContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    insert_bytecode(Bytecodes::MULTIPLY, peek_type());
    stack_pop();
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprDivide(DARICParser::NumExprDivideContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, true);
    insert_bytecode(Bytecodes::DIVIDE, peek_type());
    stack_pop();
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprDIV(DARICParser::NumExprDIVContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    switch (peek_type()) {
    case Type::INTEGER:
        insert_bytecode(Bytecodes::DIV, peek_type());
        stack_pop();
        break;
    case Type::FLOAT:
        insert_bytecode(Bytecodes::DIV, peek_type());
        stack_pop();
        stack_pop();
        stack_push(Type::INTEGER);
        break;
    default:
        error("Unknown type for DIV");
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprMOD(DARICParser::NumExprMODContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    switch (peek_type()) {
    case Type::INTEGER:
        insert_bytecode(Bytecodes::MOD, peek_type());
        stack_pop();
        break;
    case Type::FLOAT:
        insert_bytecode(Bytecodes::MOD, peek_type());
        stack_pop();
        stack_pop();
        stack_push(Type::INTEGER);
        break;
    default:
        error("Unknown type for MOD");
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprPlus(DARICParser::NumExprPlusContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    insert_bytecode(Bytecodes::ADD, peek_type());
    stack_pop();
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprSubtract(DARICParser::NumExprSubtractContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    insert_bytecode(Bytecodes::SUBTRACT, peek_type());
    stack_pop();
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprSHL(DARICParser::NumExprSHLContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    ensure_stack_is_integer();
    insert_bytecode(Bytecodes::SHL, Type::INTEGER);
    stack_pop();
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprSHR(DARICParser::NumExprSHRContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    ensure_stack_is_integer();
    insert_bytecode(Bytecodes::SHR, Type::INTEGER);
    stack_pop();
    return NULL;
}

void Compiler::expression_type_conversion(DARICParser::NumExprContext* context, bool DIVIDE)
{
    // Check types
    if (stack_size() >= 2) {
        Type type2 = stack_pop();
        Type type1 = stack_pop();

        if (DIVIDE) {
            // Is this a divide? If so, we always promote to a float
            if (type2 == Type::FLOAT && type1 == Type::INTEGER) {
                insert_instruction(Bytecodes::CONV_FLOAT, Type::INTEGER, 1);
            } else if (type2 == Type::INTEGER && type1 == Type::FLOAT) {
                insert_instruction(Bytecodes::CONV_FLOAT, Type::NOTYPE, 0);
            } else if (type2 == Type::INTEGER && type1 == Type::INTEGER) {
                insert_instruction(Bytecodes::CONV_FLOAT, Type::NOTYPE, 0);
                insert_instruction(Bytecodes::CONV_FLOAT, Type::NOTYPE, 1);
            }
            stack_push(Type::FLOAT);
            stack_push(Type::FLOAT);
        } else {
            // Do we need to promote (or demote)?
            if (type2 == Type::FLOAT && type1 == Type::INTEGER) {
                insert_instruction(Bytecodes::CONV_FLOAT, Type::INTEGER, 1);
                stack_push(Type::FLOAT);
                stack_push(Type::FLOAT);
            } else if (type2 == Type::INTEGER && type1 == Type::FLOAT) {
                insert_instruction(Bytecodes::CONV_FLOAT, Type::INTEGER, 0);
                stack_push(Type::FLOAT);
                stack_push(Type::FLOAT);
            } else {
                stack_push(type1);
                stack_push(type2);
            }
        }
    }
}
