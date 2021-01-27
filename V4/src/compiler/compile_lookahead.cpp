#include "compile.h"
#include <cassert>

extern struct AST* final;

void Compiler::compile_lookahead_recurse(struct AST* node)
{
    if (node->type == ASTType::STATEMENT_LINK) {
        if (node->l != nullptr) {
            compile_lookahead_recurse(node->l);
        }
        if (node->r != nullptr) {
            compile_lookahead_recurse(node->r);
        }
    } else {
        compile_node_lookahead(node, false);
    }
}


void Compiler::compile_lookahead()
{
    compile_lookahead_recurse(final);
}

void Compiler::compile_node_lookahead(struct AST* ast, bool expression)
{
    if (ast == NULL) {
        return;
    }
    line_number = ast->line_number;
    file_number = ast->file_number;

    switch (ast->type) {
    case ASTType::LINK:
        compile_node_lookahead(ast->l, expression);
        compile_node_lookahead(ast->r, expression);
        break;
    case ASTType::VARIABLE:
        switch (state) {
        case CompilerState::TYPE: {
            Boxed b;
            b.name = ast->string;
            b.type = ast->var_type;
            b.index = static_cast<int>(members.size());
            members.insert(std::pair<std::string, Boxed>(b.name, std::move(b)));
            break;
        }
        case CompilerState::FUNCTION: {
            var_type = ast->var_type;
            var_name.assign(ast->string);
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
            Boxed b;
            b.name.assign(var_name);
            b.type = var_type;
            b.index = var_id;
            (*f).second.parameters.push_back(std::move(b));
            break;
        }
        default:
            error("LOOKAHEAD: Unknown state");
        }
        break;
    case ASTType::TOKEN:
        switch (ast->token) {

        case DEFPROC:
        case DEFFN:
            compile_node_function_lookahead(ast);
            break;

            // Types
        case TYPE_: {
            state = CompilerState::TYPE;
            custom_type_name = ast->items[0]->string;
            compile_node_lookahead(ast->items[1], false);
            state = CompilerState::NOSTATE;
            CustomType custom_type;
            custom_type.id = custom_type_index++;
            custom_type.members.swap(members);
            custom_types.insert(std::pair<std::string, CustomType>(custom_type_name, std::move(custom_type)));
            break;
        }
        case FIELD:
            if (state != CompilerState::TYPE) {
                error("FIELDs must exist within TYPEs");
            }
            compile_node_lookahead(ast->items[0], false);
            break;
        case RETURN_PARAMETER: {
            var_type = ast->items[0]->var_type;
            var_name.assign(ast->items[0]->string);
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
            Boxed b;
            b.name.assign(var_name);
            b.type = var_type;
            b.index = var_id;
            b.return_to = true;
            (*f).second.parameters.push_back(std::move(b));
            break;
        }
        default:
            break;
        }
        break;
    default:
    break;
    }
}

void Compiler::compile_node_function_lookahead(struct AST* ast)
{
    inside_function = true;
    function_name = ast->items[0]->string;

    // Create function element to add stuff to as we build it
    Function f;
    f.id = function_index++;
    f.type = ast->var_type;
    f.pc_start = 0;
    f.pc_end = 0;
    functions.insert(std::pair<std::string, Function>(function_name, std::move(f)));

    // Parse parameters names and types
    state = CompilerState::FUNCTION;
    locals.clear();
    local_var_index = 0;
    compile_node_lookahead(ast->items[1], false);
    state = CompilerState::NOSTATE;
    locals.clear();

    inside_function = false;
}