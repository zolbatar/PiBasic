#include "compile.h"

void Compiler::compile_node_expression(struct AST* ast)
{
    compile_node(ast->items[0], true);
    if (ast->items.size() == 2) {
        compile_node(ast->items[1], true);
    }

    // Check types
    if (stack_size() >= 2) {
        stack_pop_keep();
        Type type2 = var_type;
        stack_pop_keep();
        Type type1 = var_type;

        switch (ast->token) {
        case DIVIDE:
            // Is this a divide? If so, we always promote to a float
            if (type2 == Type::REAL && type1 == Type::INTEGER) {
                g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F2);
            } else if (type2 == Type::INTEGER && type1 == Type::REAL) {
                g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F);
            } else if (type2 == Type::INTEGER && type1 == Type::INTEGER) {
                g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F);
                g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F2);
            }
            stack_push(Type::REAL);
            stack_push(Type::REAL);
            break;
        default:
            // Do we need to promote (or demote)?
            if (type2 == Type::REAL && type1 == Type::INTEGER) {
                g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F2);
                stack_push(Type::REAL);
                stack_push(Type::REAL);
            } else if (type2 == Type::INTEGER && type1 == Type::REAL) {
                g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F);
                stack_push(Type::REAL);
                stack_push(Type::REAL);
            } else {
                stack_push(type1);
                stack_push(type2);
            }
            break;
        }
    }

    switch (ast->token) {
    case PLUS:
        insert_bytecode_based_on_peektype({
            { Type::INTEGER, Bytecodes::ADD_I },
            { Type::REAL, Bytecodes::ADD_F },
            { Type::STRING, Bytecodes::ADD_S },
        });
        stack_pop();
        break;
    case MINUS:
        insert_bytecode_based_on_peektype({
            { Type::INTEGER, Bytecodes::SUBTRACT_I },
            { Type::REAL, Bytecodes::SUBTRACT_F },
        });
        stack_pop();
        break;
    case DIVIDE:
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::DIVIDE_F);
        stack_pop();
        break;
    case MULTIPLY:
        insert_bytecode_based_on_peektype({
            { Type::INTEGER, Bytecodes::MULTIPLY_I },
            { Type::REAL, Bytecodes::MULTIPLY_F },
        });
        stack_pop();
        break;
    case INTEGERDIVIDE:
        insert_bytecode_based_on_peektype({
            { Type::INTEGER, Bytecodes::DIVIDE_I },
            { Type::REAL, Bytecodes::DIVIDE_F },
        });
        stack_pop();
        stack_pop();
        stack_push(Type::INTEGER);
        break;
    case MOD:
        switch (peek_type()) {
        case Type::INTEGER:
            g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::MOD_I);
            stack_pop();
            break;
        case Type::REAL:
            g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::MOD_F);
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
            g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::DIV_I);
            stack_pop();
            break;
        case Type::REAL:
            g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::DIV_F);
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
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::SHL);
        stack_pop();
        break;
    case SHR:
        ensure_stack_is_integer();
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::SHR);
        stack_pop();
        break;

    case E:
        comparison(Bytecodes::CMP_E_I, Bytecodes::CMP_E_F, Bytecodes::CMP_E_S);
        break;
    case NE:
        comparison(Bytecodes::CMP_NE_I, Bytecodes::CMP_NE_F, Bytecodes::CMP_NE_S);
        break;
    case LE:
        comparison(Bytecodes::CMP_LE_I, Bytecodes::CMP_LE_F, Bytecodes::CMP_LE_S);
        break;
    case GE:
        comparison(Bytecodes::CMP_GE_I, Bytecodes::CMP_GE_F, Bytecodes::CMP_GE_S);
        break;
    case LT:
        comparison(Bytecodes::CMP_L_I, Bytecodes::CMP_L_F, Bytecodes::CMP_L_S);
        break;
    case GT:
        comparison(Bytecodes::CMP_G_I, Bytecodes::CMP_G_F, Bytecodes::CMP_G_S);
        break;

    case OR:
        boolean(Bytecodes::BOOL_OR);
        break;
    case EOR:
        boolean(Bytecodes::BOOL_EOR);
        break;
    case AND:
        boolean(Bytecodes::BOOL_AND);
        break;
    default:
        error("Unknown operator");
    }
}
