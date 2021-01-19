#include "compile.h"

void Compiler::compile_input_variable(struct ast *ast) {
    var_name = *ast->v_string;
    var_type = ast->var_type;
    int var_id = find_or_create_variable(VariableType::Global, false);
    insert_instruction_based_on_type(
        {
            {Type::Integer, INPUT_I},
            {Type::Float, INPUT_F},
            {Type::String, INPUT_S},
        },
        var_type, var_id);
}

void Compiler::compile_node_token_printinput(struct ast *ast, bool expression) {
    bool show_q_mark = true;
    switch (ast->token) {
    case Token::InputNoQuestionMark:
        show_q_mark = false;
    case Token::Input:
        if (ast->l->type == NodeType::String && ast->r->type == NodeType::Link) {
            // Multiple list with prompt

            // Show prompt
            auto s = *ast->l->v_string;
            if (show_q_mark)
                s += "?";
            vm->insert_instruction(line_number, file_number, write, LOAD_S, constant_string_create(&s));
            vm->insert_bytecode(line_number, file_number, write, PRINT_S);

            struct ast *ast_loop = ast->r;
            do {
                if (ast_loop->type == NodeType::Link) {
                    compile_input_variable(ast_loop->l);
                } else {
                    compile_input_variable(ast_loop);
                }
                ast_loop = ast_loop->r;
            } while (ast_loop != NULL);
        } else if (ast->l->type == NodeType::Link) {
            // Multiple list
            struct ast *ast_loop = ast->l;
            do {
                if (ast_loop->type == NodeType::Link) {
                    compile_input_variable(ast_loop->l);
                } else {
                    compile_input_variable(ast_loop);
                }
                ast_loop = ast_loop->r;
            } while (ast_loop != NULL);
        } else if (ast->l->type == NodeType::String) {
            // Single variable with prompt

            // Show prompt
            auto s = *ast->l->v_string;
            if (show_q_mark)
                s += "?";
            vm->insert_instruction(line_number, file_number, write, LOAD_S, constant_string_create(&s));
            vm->insert_bytecode(line_number, file_number, write, PRINT_S);

            compile_input_variable(ast->r);
        } else {
            // Single variable
            compile_input_variable(ast->l);
        }
        break;
    case Token::Inkey:
        get_ensure_is_integer_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, INKEY);
        stack_push(Type::Integer);
        break;
    case Token::SInkey:
        get_ensure_is_integer_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, INKEY);
        vm->insert_bytecode(line_number, file_number, write, DROP);
        break;
    case Token::Inkeys:
        get_ensure_is_integer_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, INKEYS);
        stack_push(Type::Integer);
        break;
    case Token::SInkeys:
        get_ensure_is_integer_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, INKEYS);
        vm->insert_bytecode(line_number, file_number, write, DROP);
        break;

    case Token::PrintNewLine:
        compile_node(ast->l, false);
        vm->insert_bytecode(line_number, file_number, write, PRINT_NL);
        break;
    case Token::PrintSpc:
        compile_node(ast->l, true);
        ensure_stack_is_integer();
        stack_pop();
        vm->insert_bytecode(line_number, file_number, write, PRINT_SPC);
        break;
    case Token::PrintComma:
        print_right_justify = true;
        print_hex = false;
        break;
    case Token::PrintSemiColon:
        print_right_justify = false;
        print_hex = false;
        break;
    case Token::Print:
    case Token::PrintN: {
        state = CompilerState::Print;
        print_level = level;
        print_hex = false;
        print_right_justify = false;
        compile_node(ast->l, true);
        compile_node(ast->r, true);
        if (ast->token == Token::Print) {
            vm->insert_bytecode(line_number, file_number, write, PRINT_NL);
        }
        state = CompilerState::None;
        break;
    }
    case Token::PrintHex:
        print_hex = false;
        break;
    }
}
