#include "compile.h"

void Compiler::compile_node_token_data(struct AST* ast)
{
    switch (ast->token) {
    case READ:
        state = CompilerState::READ;
        compile_node(ast->items[0], false);
        state = CompilerState::NOSTATE;
        break;
    case DATA:
        state = CompilerState::DATA;
        compile_node(ast->items[0], false);
        state = CompilerState::NOSTATE;
        break;
    case RESTORE:
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::RESTORE);
        break;
    default:
        error("DATA: Unknown token");
    }
}