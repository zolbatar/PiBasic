#include "compiler.h"

antlrcpp::Any Compiler::visitStmtOperatorEqual(DARICParser::StmtOperatorEqualContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    state = CompilerState::ASSIGNMENT;
    visit(context->varDecl());
    state = CompilerState::NOSTATE;
    find_variable(false, true);
    auto saved = current_var;

    // Push value
    insert_instruction(Bytecodes::LOAD, saved.type, current_var.id);

    // Now push new value
    visit(context->numExpr());

    // Operator
    if (context->PLUS_E() != NULL) {
        insert_bytecode(Bytecodes::ADD, current_var.type);
    } else if (context->MINUS_E() != NULL) {
        insert_bytecode(Bytecodes::SUBTRACT, current_var.type);
    } else if (context->MULTIPLY_E() != NULL) {
        insert_bytecode(Bytecodes::MULTIPLY, current_var.type);
    } else if (context->DIVIDE_E() != NULL) {
        insert_bytecode(Bytecodes::DIVIDE, current_var.type);
    } else if (context->SHL_E() != NULL) {
        ensure_stack_is_integer();
        insert_bytecode(Bytecodes::SHL, current_var.type);
    } else if (context->SHR_E() != NULL) {
        ensure_stack_is_integer();
        insert_bytecode(Bytecodes::SHR, current_var.type);
    }

    save_to_variable(stack_pop(), saved);

    return NULL;
}

antlrcpp::Any Compiler::visitNumExprHat(DARICParser::NumExprHatContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    insert_bytecode(Bytecodes::POWER, peek_type());
    stack_pop();
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprUnary(DARICParser::NumExprUnaryContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    insert_bytecode(Bytecodes::UNARY, peek_type());
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprMultiplyDivide(DARICParser::NumExprMultiplyDivideContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    if (context->MULTIPLY() != NULL) {
        expression_type_conversion(context, false);
        insert_bytecode(Bytecodes::MULTIPLY, peek_type());
    } else if (context->DIVIDE() != NULL) {
        expression_type_conversion(context, true);
        insert_bytecode(Bytecodes::DIVIDE, peek_type());
    }
    stack_pop();
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprDIVMOD(DARICParser::NumExprDIVMODContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    switch (peek_type()) {
    case Type::INTEGER:
        if (context->DIV() != NULL) {
            insert_bytecode(Bytecodes::DIV, peek_type());
        } else if (context->MOD() != NULL) {
            insert_bytecode(Bytecodes::MOD, peek_type());
        }
        stack_pop();
        break;
    case Type::FLOAT:
        if (context->DIV() != NULL) {
            insert_bytecode(Bytecodes::DIV, peek_type());
        } else if (context->MOD() != NULL) {
            insert_bytecode(Bytecodes::MOD, peek_type());
        }
        stack_pop();
        stack_pop();
        stack_push(Type::INTEGER);
        break;
    default:
        error("Unknown type for DIV");
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprAddSubtract(DARICParser::NumExprAddSubtractContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    if (context->PLUS() != NULL) {
        insert_bytecode(Bytecodes::ADD, peek_type());
    } else if (context->MINUS() != NULL) {
        insert_bytecode(Bytecodes::SUBTRACT, peek_type());
    }
    stack_pop();
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprSHLSHR(DARICParser::NumExprSHLSHRContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    expression_type_conversion(context, false);
    ensure_stack_is_integer();
    if (context->SHL() != NULL) {
        insert_bytecode(Bytecodes::SHL, Type::INTEGER);
    } else if (context->SHR() != NULL) {
        insert_bytecode(Bytecodes::SHR, Type::INTEGER);
    }
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
                insert_instruction(Bytecodes::CONV_FLOAT, Type::INTEGER, 0);
            } else if (type2 == Type::INTEGER && type1 == Type::INTEGER) {
                insert_instruction(Bytecodes::CONV_FLOAT, Type::INTEGER, 0);
                insert_instruction(Bytecodes::CONV_FLOAT, Type::INTEGER, 1);
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
