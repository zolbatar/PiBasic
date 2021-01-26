#include "compile.h"

void Compiler::compile_print_element(struct AST* ast)
{
    switch (ast->type) {
    case ASTType::TOKEN:
        switch (ast->token) {
        case COMMA:
            print_right_justify = true;
            print_hex = false;
            print_semicolon_active = false;
            break;
        case SEMICOLON:
            print_right_justify = false;
            print_hex = false;
            print_semicolon_active = true;
            break;
        case TILDE:
            print_hex = true;
            print_semicolon_active = false;
            break;
        case TICK:
            print_semicolon_active = false;
            g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::PRINT_NL);
            break;
        case SPC:
            print_semicolon_active = false;
            state = CompilerState::NOSTATE;
            compile_node(ast->items[0], true);
            state = CompilerState::PRINT;
            ensure_stack_is_integer();
            stack_pop();
            g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::PRINT_SPC);
            break;
        default:
            print_semicolon_active = false;
            compile_node(ast, true);
            break;
        }
        break;
    default:
        print_semicolon_active = false;
        compile_node(ast, true);
    }
}

void Compiler::compile_input_variable(struct AST* ast)
{
    var_name = ast->string;
    var_type = ast->var_type;
    auto var_id = find_or_create_variable(VariableScope::GLOBAL, false);
    insert_instruction_based_on_type(
        {
            { Type::INTEGER, Bytecodes::INPUT_I },
            { Type::REAL, Bytecodes::INPUT_F },
            { Type::STRING, Bytecodes::INPUT_S },
        },
        var_type, var_id);
}

void Compiler::compile_node_token_printinput(struct AST* ast)
{
    bool show_q_mark = true;
    switch (ast->token) {
    case INPUT_NOQUESTIONMARK:
        show_q_mark = false;
    case INPUT_:
        if (ast->items.size() == 1) {
            // No prompt
            struct AST* ast_loop = ast->items[0];
            do {
                g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, true);
                if (ast_loop->type == ASTType::LINK) {
                    compile_input_variable(ast_loop->l);
                } else {
                    compile_input_variable(ast_loop);
                }
                ast_loop = ast_loop->r;
            } while (ast_loop != NULL);
        } else if (ast->items.size() == 2) {
            // Prompt
            auto s = ast->items[0]->string;
            g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::LOAD_S, constant_string_create(s));
            g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::PRINT_S);

            struct AST* ast_loop = ast->items[1];
            do {
                if (ast_loop->type == ASTType::LINK) {
                    g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, show_q_mark);
                    compile_input_variable(ast_loop->l);
                } else {
                    g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, show_q_mark);
                    compile_input_variable(ast_loop);
                }
                ast_loop = ast_loop->r;
            } while (ast_loop != NULL);
        }
        break;
    case INKEY:
        get_ensure_is_integer_pop(ast->items[0]);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::INKEY);
        stack_push(Type::INTEGER);
        break;
    case SINKEY:
        get_ensure_is_integer_pop(ast->items[0]);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::INKEY);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::DROP);
        break;
    case INKEYS:
        get_ensure_is_integer_pop(ast->items[0]);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::INKEYS);
        stack_push(Type::STRING);
        break;
    case SINKEYS:
        get_ensure_is_integer_pop(ast->items[0]);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::INKEYS);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::DROP);
        break;
    case GET:
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::GET);
        stack_push(Type::INTEGER);
        break;
    case GETS:
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::GETS);
        stack_push(Type::STRING);
        break;
    case GET_S:
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::GET);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::DROP);
        break;
    case GETS_S:
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::GETS);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::DROP);
        break;

    case MOUSE: {
        var_name = ast->items[0]->string;
        auto var_id1 = find_or_create_variable(VariableScope::NOSCOPE, false);
        var_name = ast->items[1]->string;
        auto var_id2 = find_or_create_variable(VariableScope::NOSCOPE, false);
        var_name = ast->items[2]->string;
        auto var_id3 = find_or_create_variable(VariableScope::NOSCOPE, false);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I_VAR, var_id3);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I_VAR, var_id2);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::MOUSE, var_id1);
        break;
    }

    case PRINT: {
        print_semicolon_active = false;
        state = CompilerState::PRINT;
        print_level = level;
        print_hex = false;
        print_right_justify = false;
        if (ast->items.size() == 1) {
            struct AST* ast_loop = ast->items[0];
            do {
                if (ast_loop->type == ASTType::LINK) {
                    compile_print_element(ast_loop->l);
                } else {
                    compile_print_element(ast_loop);
                }
                ast_loop = ast_loop->r;
            } while (ast_loop != NULL);
        }
        state = CompilerState::NOSTATE;
        if (!print_semicolon_active) {
            g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::PRINT_NL);
        }
        break;
    }
    default:
        error("PRINT/INPUT: Unknown token");
    }
}
