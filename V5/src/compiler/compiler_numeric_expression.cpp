#include "compiler.h"

void Compiler::visitNumExpr_get_two(DARICParser::NumExprContext* context)
{
    visit(context->numExpr(0));
    visit(context->numExpr(1));

    // Check types
    if (stack_size() >= 2) {
        stack_pop_keep();
        Type type2 = var_type;
        stack_pop_keep();
        Type type1 = var_type;

        if (context->DIVIDE() != NULL) {
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

antlrcpp::Any Compiler::visitNumExpr(DARICParser::NumExprContext* context)
{
    if (context->LPAREN() != NULL) {
        visit(context->numExpr(0));
    } else if (context->PLUS() != NULL) {
        visitNumExpr_get_two(context);
        insert_bytecode_based_on_peektype({
            { Type::INTEGER, Bytecodes::ADD_I },
            { Type::REAL, Bytecodes::ADD_F },
        });
        stack_pop();
    } else if (context->MINUS() != NULL) {
        visitNumExpr_get_two(context);
        insert_bytecode_based_on_peektype({
            { Type::INTEGER, Bytecodes::SUBTRACT_I },
            { Type::REAL, Bytecodes::SUBTRACT_F },
        });
        stack_pop();
    } else if (context->MULTIPLY() != NULL) {
        visitNumExpr_get_two(context);
        insert_bytecode_based_on_peektype({
            { Type::INTEGER, Bytecodes::MULTIPLY_I },
            { Type::REAL, Bytecodes::MULTIPLY_F },
        });
        stack_pop();
    } else if (context->DIVIDE() != NULL) {
        visitNumExpr_get_two(context);
        insert_bytecode(Bytecodes::DIVIDE_F);
        stack_pop();
    } else if (context->DIV() != NULL) {
        visitNumExpr_get_two(context);
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
    } else if (context->MOD() != NULL) {
        visitNumExpr_get_two(context);
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
    } else if (context->NOT() != NULL) {
    } else if (context->AND() != NULL) {
        visitNumExpr_get_two(context);
    } else if (context->OR() != NULL) {
        visitNumExpr_get_two(context);
    } else if (context->EOR() != NULL) {
        visitNumExpr_get_two(context);
    } else if (context->SHL() != NULL) {
        visitNumExpr_get_two(context);
    } else if (context->SHR() != NULL) {
        visitNumExpr_get_two(context);
    } else {
        visitChildren(context);
    }
    return NULL;
}
