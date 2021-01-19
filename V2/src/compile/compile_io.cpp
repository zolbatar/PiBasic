#include "compile.h"

void Compiler::compile_node_token_io(struct ast *ast, bool expression) {
    switch (ast->token) {
    case Token::OpenIn:
        get_ensure_is_string_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, OPENIN);
        stack_push(Type::Integer);
        break;
    case Token::OpenUp:
        get_ensure_is_string_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, OPENUP);
        stack_push(Type::Integer);
        break;
    case Token::OpenOut:
        get_ensure_is_string_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, OPENOUT);
        stack_push(Type::Integer);
        break;
    case Token::Close:
        get_ensure_is_integer_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, CLOSE);
        break;
    case Token::BGet:
        compile_node(ast->l, true);
        ensure_stack_is_integer();
        vm->insert_bytecode(line_number, file_number, write, BGET);
        break;
    case Token::BPut:
        compile_node(ast->l, true);
        ensure_stack_is_integer();
        stack_pop();
        compile_node(ast->r, true);
        ensure_stack_is_integer();
        stack_pop();
        vm->insert_bytecode(line_number, file_number, write, BPUT);
        break;
    case Token::Eof:
        compile_node(ast->l, true);
        ensure_stack_is_integer();
        vm->insert_bytecode(line_number, file_number, write, EOFH);
        break;
    }
}