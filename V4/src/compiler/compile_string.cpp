#include "compile.h"

void Compiler::compile_node_token_string(struct AST* ast)
{
    switch (ast->token) {
    case ASC:
        get_ensure_is_string_pop(ast->items[0]);
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes:: ASC);
        stack_push(Type::INTEGER);
        break;
    case CHRS:
        get_ensure_is_integer_pop(ast->items[0]);
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes:: CHRS);
        stack_push(Type::STRING);
        break;
    case INSTR:
        get_ensure_is_string_pop(ast->items[0]);
        get_ensure_is_string_pop(ast->items[1]);
        get_ensure_is_integer_pop(ast->items[2]);
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes:: INSTR);
        stack_push(Type::INTEGER);
        break;
    case LEFTS:
        get_ensure_is_string_pop(ast->items[0]);
        get_ensure_is_integer_pop(ast->items[1]);
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes:: LEFTS);
        stack_push(Type::STRING);
        break;
    case MIDS:
        get_ensure_is_string_pop(ast->items[0]);
        get_ensure_is_integer_pop(ast->items[1]);
        get_ensure_is_integer_pop(ast->items[2]);
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes:: MIDS);
        stack_push(Type::STRING);
        break;
    case RIGHTS:
        get_ensure_is_string_pop(ast->items[0]);
        get_ensure_is_integer_pop(ast->items[1]);
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::RIGHTS);
        stack_push(Type::STRING);
        break;
    case LEN:
        get_ensure_is_string_pop(ast->items[0]);
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::LEN);
        stack_push(Type::INTEGER);
        break;
    case VAL:
        get_ensure_is_string_pop(ast->items[0]);
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::VAL);
        stack_push(Type::REAL);
        break;
    case STRS:
        get_ensure_is_float_pop(ast->items[0]);
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes:: STRS);
        stack_push(Type::STRING);
        break;
    case STRSHEX:
        get_ensure_is_float_pop(ast->items[0]);
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes::STRS_H);
        stack_push(Type::STRING);
        break;
    case STRINGS:
        get_ensure_is_integer_pop(ast->items[0]);
        get_ensure_is_string_pop(ast->items[1]);
        g_vm->insert_bytecode(line_number, file_number, write, Bytecodes:: STRINGS);
        stack_push(Type::STRING);
        break;
   default:
        error("STRING: Unknown token");
     }
}