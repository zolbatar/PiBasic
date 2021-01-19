#include "compile.h"

void Compiler::compile_node_token_data(struct ast *ast, bool expression) {
    switch (ast->token) {
    case Token::Read:
        state = CompilerState::Read;
        compile_node(ast->l, false);
        state = CompilerState::None;
        break;
    case Token::Data:
        state = CompilerState::Data;
        compile_node(ast->l, false);
        state = CompilerState::None;
        break;
    case Token::Restore:
        vm->insert_bytecode(line_number, file_number, write, RESTORE);
        break;
    }
}