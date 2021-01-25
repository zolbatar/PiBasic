#include "compile.h"

void Compiler::compile_node_token_maths(struct AST* ast)
{
    switch (ast->token) {
    case ABS:
        compile_node(ast->items[0], true);
        switch (peek_type()) {
        case Type::INTEGER:
            g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::ABS_I);
            break;
        case Type::REAL:
            g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::ABS_F);
            break;
        default:
            error("ABS must have a numeric value");
        }
        break;
    case SQR:
        compile_node(ast->items[0], true);
        ensure_stack_is_float();
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::SQR);
        break;
    case LN:
        compile_node(ast->items[0], true);
        ensure_stack_is_float();
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::LN);
        break;
    case LOG:
        compile_node(ast->items[0], true);
        ensure_stack_is_float();
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::LOG);
        break;
    case EXP:
        compile_node(ast->items[0], true);
        ensure_stack_is_float();
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::EXP);
        break;
    case ATN:
        compile_node(ast->items[0], true);
        ensure_stack_is_float();
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::ATN);
        break;
    case TAN:
        compile_node(ast->items[0], true);
        ensure_stack_is_float();
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::TAN);
        break;
    case SIN:
        compile_node(ast->items[0], true);
        ensure_stack_is_float();
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::SIN);
        break;
    case COS:
        compile_node(ast->items[0], true);
        ensure_stack_is_float();
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::COS);
        break;
    case ACS:
        compile_node(ast->items[0], true);
        ensure_stack_is_float();
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::ACS);
        break;
    case ASN:
        compile_node(ast->items[0], true);
        ensure_stack_is_float();
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::ASN);
        break;
    case DEG:
        compile_node(ast->items[0], true);
        ensure_stack_is_float();
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::DEG);
        break;
    case RAD:
        compile_node(ast->items[0], true);
        ensure_stack_is_float();
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::RAD);
        break;
    case SGN:
        get_ensure_is_float_pop(ast->items[0]);
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::SGN);
        stack_push(Type::INTEGER);
        break;
    case PI:
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::PI);
        stack_push(Type::REAL);
        break;
    case RND:
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::RND);
        stack_push(Type::INTEGER);
        break;
    case RNDREAL:
        compile_node(ast->items[0], true);
        ensure_stack_is_integer();
        stack_pop();
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::RNDREAL);
        stack_push(Type::REAL);
        break;
    case RNDRANGE:
        compile_node(ast->items[0], true);
        ensure_stack_is_integer();
        stack_pop();
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::RNDRANGE);
        stack_push(Type::INTEGER);
        break;
    case NOT:
        compile_node(ast->items[0], true);
        ensure_stack_is_integer();
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::BOOL_NOT);
        break;
    default:
        error("MATHS: Unknown token");
    }
}
