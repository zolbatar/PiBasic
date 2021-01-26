#include "compile.h"

void Compiler::compile_node_token_io(struct AST* ast)
{
    switch (ast->token) {
    case OPENIN:
        get_ensure_is_string_pop(ast->items[0]);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::OPENIN);
        stack_push(Type::INTEGER);
        break;
    case OPENUP:
        get_ensure_is_string_pop(ast->items[0]);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::OPENUP);
        stack_push(Type::INTEGER);
        break;
    case OPENOUT:
        get_ensure_is_string_pop(ast->items[0]);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::OPENOUT);
        stack_push(Type::INTEGER);
        break;
    case CLOSE:
        get_ensure_is_integer_pop(ast->items[0]);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::CLOSE);
        break;
    case BGET:
        get_ensure_is_integer_pop(ast->items[0]);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::BGET);
        stack_push(Type::INTEGER);
        break;
    case BPUT:
        get_ensure_is_integer_pop(ast->items[0]);
        get_ensure_is_integer_pop(ast->items[1]);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::BPUT);
        break;
    case EOFH:
        get_ensure_is_integer_pop(ast->items[0]);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::EOFH);
        stack_push(Type::INTEGER);
        break;
    case PTR:
        get_ensure_is_integer_pop(ast->items[0]);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::PTR);
        stack_push(Type::INTEGER);
        break;
    case PTRA:
        get_ensure_is_integer_pop(ast->items[0]);
        get_ensure_is_integer_pop(ast->items[1]);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::PTRA);
        break;
    case GETSH:
        get_ensure_is_integer_pop(ast->items[0]);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::GETSH);
        stack_push(Type::STRING);
        break;
    case LISTFILES: {
        // Calc scope
        auto scope = VariableScope::NOSCOPE;
        switch (ast->items[2]->token) {
        case LOCAL:
            scope = VariableScope::LOCAL;
            break;
        case GLOBAL:
        default:
            scope = VariableScope::GLOBAL;
        }
        var_type = Type::STRING_ARRAY;
        var_name = ast->items[0]->string;
        auto var_id = find_or_create_variable(scope, false);
        get_ensure_is_string_pop(ast->items[1]); // Directory name
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::LISTFILES, var_id);
        break;
    }

    default:
        error("IO: Unknown token");
    }
}