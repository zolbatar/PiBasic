#include "compile.h"

void Compiler::compile_node_expression(struct AST *ast, bool expression) {
    compile_node(ast->l, true);
    compile_node(ast->r, true);

    // Check types
    if (stack_size() >= 2) {
        stack_pop_keep();
        Type type2 = var_type;
        stack_pop_keep();
        Type type1 = var_type;

        switch (ast->oper) {
        case Operator::Divide:
            // Is this a divide? If so, we always promote to a float
            if (type2 == Type::Float && type1 == Type::Integer) {
                vm->insert_bytecode(line_number, file_number, write, I_TO_F2);
            } else if (type2 == Type::Integer && type1 == Type::Float) {
                vm->insert_bytecode(line_number, file_number, write, I_TO_F);
            } else if (type2 == Type::Integer && type1 == Type::Integer) {
                vm->insert_bytecode(line_number, file_number, write, I_TO_F);
                vm->insert_bytecode(line_number, file_number, write, I_TO_F2);
            }
            stack_push(Type::Float);
            stack_push(Type::Float);
            break;
        default:
            // Do we need to promote (or demote)?
            if (type2 == Type::Float && type1 == Type::Integer) {
                vm->insert_bytecode(line_number, file_number, write, I_TO_F2);
                stack_push(Type::Float);
                stack_push(Type::Float);
            } else if (type2 == Type::Integer && type1 == Type::Float) {
                vm->insert_bytecode(line_number, file_number, write, I_TO_F);
                stack_push(Type::Float);
                stack_push(Type::Float);
            } else {
                stack_push(type1);
                stack_push(type2);
            }
            break;
        }
    }

    switch (ast->oper) {
    case PLUS:
        insert_bytecode_based_on_peektype({
            {Type::INTEGER, Tokens::ADD_I},
            {Type::REAL, Tokens::ADD_F},
            {Type::STRING, Tokens::ADD_S},
        });
        stack_pop();
        break;
    case MINUS:
        insert_bytecode_based_on_peektype({
            {Type::INTEGER, Tokens::SUBTRACT_I},
            {Type::REAL, Tokens::SUBTRACT_F},
        });
        stack_pop();
        break;
    case DIVIDE:
        vm->insert_bytecode(line_number, file_number, write, Tokens::DIVIDE_F);
        stack_pop();
        break;
    case MULTIPLY:
        insert_bytecode_based_on_peektype({
            {Type::INTEGER, Tokens::MULTIPLY_I},
            {Type::REAL, Tokens::MULTIPLY_F},
        });
        stack_pop();
        break;
    case INTEGERDIVIDE:
        insert_bytecode_based_on_peektype({
            {Type::INTEGER, Tokens::DIVIDE_I},
            {Type::REAL, Tokens::DIVIDE_F},
        });
        stack_pop();
        break;
    case MOD:
        switch (peek_type()) {
        case Type::INTEGER:
            vm->insert_bytecode(line_number, file_number, write, Tokens::MOD_I);
            stack_pop();
            break;
        case Type::REAL:
            vm->insert_bytecode(line_number, file_number, write, Tokens::MOD_F);
            stack_pop();
            stack_pop();
            stack_push(Type::INTEGER);
            break;
        default:
            error("Unknown type for MOD");
        }
        break;
    case DIV:
        switch (peek_type()) {
        case Type::INTEGER:
            vm->insert_bytecode(line_number, file_number, write, Tokens::DIV_I);
            stack_pop();
            break;
        case Type::REAL:
            vm->insert_bytecode(line_number, file_number, write, Tokens::DIV_F);
            stack_pop();
            stack_pop();
            stack_push(Type::INTEGER);
            break;
        default:
            error("Unknown type for DIV");
        }
        break;
    case SHL:
        ensure_stack_is_integer();
        vm->insert_bytecode(line_number, file_number, write, Tokens::SHL);
        stack_pop();
        break;
    case SHR:
        ensure_stack_is_integer();
        vm->insert_bytecode(line_number, file_number, write, Tokens::SHR);
        stack_pop();
        break;

    case E:
        comparison(Tokens::CMP_E_I, Tokens::CMP_E_F, Tokens::CMP_E_S);
        break;
    case NE:
        comparison(Tokens::CMP_NE_I, Tokens::CMP_NE_F, Tokens::CMP_NE_S);
        break;
    case LE:
        comparison(Tokens::CMP_LE_I, Tokens::CMP_LE_F, Tokens::CMP_LE_S);
        break;
    case GE:
        comparison(Tokens::CMP_GE_I, Tokens::CMP_GE_F, Tokens::CMP_GE_S);
        break;
    case LT:
        comparison(Tokens::CMP_L_I, Tokens::CMP_L_F, Tokens::CMP_L_S);
        break;
    case GT:
        comparison(Tokens::CMP_G_I, Tokens::CMP_G_F, Tokens::CMP_G_S);
        break;

    case OR:
        boolean(Tokens::BOOL_OR);
        break;
    case EOR:
        boolean(Tokens::BOOL_EOR);
        break;
    case AND:
        boolean(Tokens::BOOL_AND);
        break;
    default:
        error("Unknown operator");
    }
}
