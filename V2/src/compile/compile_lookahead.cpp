#include "compile.h"
#include <stdlib.h>

void Compiler::compile_node_lookahead(struct ast *ast, bool expression) {
    if (ast == NULL) {
        return;
    }
    line_number = ast->line_number;
    file_number = ast->file_number;
    switch (ast->type) {
    case NodeType::Link:
        compile_node_lookahead(ast->l, expression);
        compile_node_lookahead(ast->r, expression);
        break;
    case NodeType::Function:
        compile_node_function_lookahead(ast);
        break;
    case NodeType::Variable:
        switch (state) {
        case CompilerState::Type: {
            Boxed b;
            b.name = *ast->v_string;
            b.type = ast->var_type;
            b.index = static_cast<int>(members.size());
            members.insert(std::pair<std::string, Boxed>(b.name, std::move(b)));
            break;
        }
        case CompilerState::Function: {
            var_type = ast->var_type;
            var_name.assign(*ast->v_string);
            int var_id = 0;
            if (locals.count(var_name) == 0) {
                Boxed _var;
                _var.constant = false;
                _var.name = var_name;
                _var.type = var_type;
                _var.index = local_var_index++;
                _var.value_string = custom_type_name;
                locals[var_name] = _var;
                var = &_var;
                var_id = _var.index;
            } else {
                error("Duplicated function parameter name");
            }

            // Now add to parameter list
            auto f = functions.find(function_name);
            auto g = locals.find(var_name);
            Boxed b;
            b.name.assign(var_name);
            b.type = var_type;
            b.index = var_id;
            (*f).second.parameters.push_back(std::move(b));
            break;
        }
        }
        break;
    case NodeType::Token:
        switch (ast->token) {

        // Types
        case Token::Type:
            state = CompilerState::Type;
            custom_type_name = *ast->l->v_string;
            break;
        case Token::EndType: {
            state = CompilerState::None;
            CustomType custom_type;
            custom_type.id = custom_type_index++;
            custom_type.members.swap(members);
            custom_types.insert(std::pair<std::string, CustomType>(custom_type_name, std::move(custom_type)));
            break;
        }
        case Token::Field:
            if (state != CompilerState::Type) {
                error("FIELDs must exist within TYPEs");
            }
            compile_node_lookahead(ast->l, false);
            break;
        case Token::ReturnVariable: {
            var_type = ast->l->var_type;
            var_name.assign(*ast->l->v_string);
            int var_id = 0;
            if (locals.count(var_name) == 0) {
                Boxed _var;
                _var.constant = false;
                _var.name = var_name;
                _var.type = var_type;
                _var.index = local_var_index++;
                _var.value_string = custom_type_name;
                locals[var_name] = _var;
                var = &_var;
                var_id = _var.index;
            } else {
                error("Duplicated function parameter name");
            }

            // Now add to parameter list
            auto f = functions.find(function_name);
            auto g = locals.find(var_name);
            Boxed b;
            b.name.assign(var_name);
            b.type = var_type;
            b.index = var_id;
            b.return_to = true;
            (*f).second.parameters.push_back(std::move(b));
            break;
        }
        }
        break;
    }
}

void Compiler::compile_node_function_lookahead(struct ast *ast) {
    inside_function = true;
    UINT32 saved_pc = vm->get_pc() + 1;
    function_name = *ast->l->v_string;

    // Create function element to add stuff to as we build it
    Function f;
    f.id = function_index++;
    f.type = ast->var_type;
    f.pc_start = 0;
    f.pc_end = 0;
    functions.insert(std::pair<std::string, Function>(*ast->l->v_string, std::move(f)));

    // Parse parameters names and types
    state = CompilerState::Function;
    locals.clear();
    local_var_index = 0;
    compile_node_lookahead(ast->r->l, false);
    state = CompilerState::None;

    inside_function = false;
}