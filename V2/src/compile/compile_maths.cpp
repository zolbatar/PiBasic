#include "compile.h"

void Compiler::compile_node_token_maths(struct ast *ast, bool expression) {
    switch (ast->token) {
    case Token::Abs:
        compile_node(ast->l, true);
        switch (peek_type()) {
        case Type::Integer:
            vm->insert_bytecode(line_number, file_number, write, ABS_I);
            break;
        case Type::Float:
            vm->insert_bytecode(line_number, file_number, write, ABS_F);
            break;
        default:
            error("ABS must have a numeric value");
        }
        break;
    case Token::Sqr:
        compile_node(ast->l, true);
        ensure_stack_is_float();
        vm->insert_bytecode(line_number, file_number, write, SQR);
        break;
    case Token::Ln:
        compile_node(ast->l, true);
        ensure_stack_is_float();
        vm->insert_bytecode(line_number, file_number, write, LN);
        break;
    case Token::Log:
        compile_node(ast->l, true);
        ensure_stack_is_float();
        vm->insert_bytecode(line_number, file_number, write, LOG);
        break;
    case Token::Exp:
        compile_node(ast->l, true);
        ensure_stack_is_float();
        vm->insert_bytecode(line_number, file_number, write, EXP);
        break;
    case Token::Atn:
        compile_node(ast->l, true);
        ensure_stack_is_float();
        vm->insert_bytecode(line_number, file_number, write, ATN);
        break;
    case Token::Tan:
        compile_node(ast->l, true);
        ensure_stack_is_float();
        vm->insert_bytecode(line_number, file_number, write, TAN);
        break;
    case Token::Sin:
        compile_node(ast->l, true);
        ensure_stack_is_float();
        vm->insert_bytecode(line_number, file_number, write, SIN);
        break;
    case Token::Cos:
        compile_node(ast->l, true);
        ensure_stack_is_float();
        vm->insert_bytecode(line_number, file_number, write, COS);
        break;
    case Token::Acs:
        compile_node(ast->l, true);
        ensure_stack_is_float();
        vm->insert_bytecode(line_number, file_number, write, ACS);
        break;
    case Token::Asn:
        compile_node(ast->l, true);
        ensure_stack_is_float();
        vm->insert_bytecode(line_number, file_number, write, ASN);
        break;
    case Token::Deg:
        compile_node(ast->l, true);
        ensure_stack_is_float();
        vm->insert_bytecode(line_number, file_number, write, DEG);
        break;
    case Token::Rad:
        compile_node(ast->l, true);
        ensure_stack_is_float();
        vm->insert_bytecode(line_number, file_number, write, RAD);
        break;
    case Token::Not:
        compile_node(ast->l, true);
        ensure_stack_is_integer();
        vm->insert_bytecode(line_number, file_number, write, BOOL_NOT);
        break;
    case Token::Sgn:
        get_ensure_is_float_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, SGN);
        stack_push(Type::Integer);
        break;
    case Token::Pi:
        vm->insert_bytecode(line_number, file_number, write, PI);
        stack_push(Type::Float);
        break;
    case Token::Rnd:
        vm->insert_bytecode(line_number, file_number, write, RND);
        stack_push(Type::Integer);
        break;
    case Token::RndRange:
        compile_node(ast->l, true);
        ensure_stack_is_integer();
        stack_pop();
        vm->insert_bytecode(line_number, file_number, write, RNDRANGE);
        stack_push(Type::Float);
        break;
    }
}
