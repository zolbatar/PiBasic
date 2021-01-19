#include "compile.h"

void Compiler::compile_node_token_string(struct ast *ast, bool expression) {
    switch (ast->token) {
    case Token::Asc:
        get_ensure_is_string_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, ASC);
        stack_push(Type::Integer);
        break;
    case Token::Chrs:
        get_ensure_is_integer_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, CHRS);
        stack_push(Type::String);
        break;
    case Token::Instr:
        get_ensure_is_string_pop(ast->l);
        get_ensure_is_string_pop(ast->r->l);
        get_ensure_is_integer_pop(ast->r->r);
        vm->insert_bytecode(line_number, file_number, write, INSTR);
        stack_push(Type::Integer);
        break;
    case Token::Lefts:
        get_ensure_is_string_pop(ast->l);
        get_ensure_is_integer_pop(ast->r);
        vm->insert_bytecode(line_number, file_number, write, LEFTS);
        stack_push(Type::String);
        break;
    case Token::Mids:
        get_ensure_is_string_pop(ast->l);
        get_ensure_is_integer_pop(ast->r->l);
        get_ensure_is_integer_pop(ast->r->r);
        vm->insert_bytecode(line_number, file_number, write, MIDS);
        stack_push(Type::String);
        break;
    case Token::Rights:
        get_ensure_is_string_pop(ast->l);
        get_ensure_is_integer_pop(ast->r);
        vm->insert_bytecode(line_number, file_number, write, RIGHTS);
        stack_push(Type::String);
        break;
    case Token::Len:
        get_ensure_is_string_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, LEN);
        stack_push(Type::Integer);
        break;
    case Token::Val:
        get_ensure_is_string_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, VAL);
        stack_push(Type::Float);
        break;
    case Token::Strs:
        get_ensure_is_float_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, STRS);
        stack_push(Type::String);
        break;
    case Token::StrsHex:
        get_ensure_is_float_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, STRS_H);
        stack_push(Type::String);
        break;
    case Token::Strings:
        get_ensure_is_integer_pop(ast->l);
        get_ensure_is_string_pop(ast->r);
        vm->insert_bytecode(line_number, file_number, write, STRINGS);
        stack_push(Type::String);
        break;
    }
}