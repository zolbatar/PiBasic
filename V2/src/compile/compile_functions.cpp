#include "compile.h"

void Compiler::compile_node_token_functions(struct ast *ast, bool expression) {
    switch (ast->token) {
    case Token::FunctionCall:
        compile_node_function_call(ast, expression);
        break;
    case Token::FunctionCallExpression:
        compile_node_function_call(ast, true);
        break;
    case Token::Return:
        vm->insert_bytecode(line_number, file_number, write, RETURN);
        break;
    case Token::ReturnValue: {
        compile_node(ast->l, true);
        if (write) {
            auto g = functions.find(function_name);
            auto f = (*g).second;
            switch (f.type) {
            case Type::None:
                error("Function has no return type");
                break;
            case Type::Integer:
                if (peek_type() != Type::Integer)
                    error("Expected string integer type in function");
                break;
            case Type::Float:
                if (peek_type() != Type::Float)
                    error("Expected float return type in function");
                break;
            case Type::String:
                if (peek_type() != Type::String)
                    error("Expected string return type in function");
                break;
            default:
                error("Unsupported return type in function");
            }
        }
        vm->insert_bytecode(line_number, file_number, write, RETURN);
        stack_pop();
        break;
    }
    }
}

void Compiler::compile_node_function_call(struct ast *ast, bool expression) {
    // Now we can do a proper fixup
    if (functions.count(*ast->l->v_string) == 0)
        error("Unknown function " + *ast->l->v_string);
    auto g = functions.find(*ast->l->v_string);

    // Save parameters on the stack
    int saved_stack_index = static_cast<int>(type_list.size());
    compile_node(ast->r, true);
    int diff = static_cast<int>(type_list.size()) - saved_stack_index;
    if (diff != (*g).second.parameters.size())
        error("Function call " + *ast->l->v_string + " mismatched parameters");

    // Now drop them off the internal list as we assume they are present in the function
    while (type_list.size() != saved_stack_index) {
        stack_pop();
    }

    if (!write) {
        vm->insert_instruction(line_number, file_number, write, CONST_I, 0);
        vm->insert_instruction(line_number, file_number, write, CALL, 0);
    } else {
        vm->insert_instruction(line_number, file_number, write, CONST_I, (*g).second.id);
        vm->insert_instruction(line_number, file_number, write, CALL, (*g).second.pc_start);
    }

    // Do we have a return type?
    if (!expression && (*g).second.type != Type::None) {
        vm->insert_bytecode(line_number, file_number, write, DROP);
    } else {
        vm->insert_bytecode(line_number, file_number, write, NOP);

        // Push the return type
        if ((*g).second.type != Type::None) {
            stack_push((*g).second.type);
        }
    }

    // Do we have any RETURN parameters?
    auto p = (*g).second.parameters;
    struct ast *var_ast = ast->r;
    std::stack<struct ast *> reverse;
    for (auto it = (*g).second.parameters.begin(); it != (*g).second.parameters.end(); ++it) {
        if ((*it).return_to) {
            reverse.push(var_ast->l);
        }
        var_ast = var_ast->r;
    }

    // Now go through stack and process each return value
    while (!reverse.empty()) {
        auto top = reverse.top();
        var_name = *top->v_string;
        var_type = top->var_type;
        int var_id = find_or_create_variable(VariableType::NoType, true);
        insert_instruction_based_on_type(
            {
                {Type::Integer, STORE_I},
                {Type::Float, STORE_F},
                {Type::String, STORE_S},
            },
            var_type, var_id);
        reverse.pop();
    }
}

void Compiler::compile_node_function(struct ast *ast) {
    inside_function = true;
    UINT32 saved_pc = vm->get_pc() + 1;
    function_name = *ast->l->v_string;
    local_var_index = 0;
    locals.clear();

    // Make parameters locals
    auto g = functions.find(function_name);
    auto f = (*g).second;
    for (auto it = f.parameters.cbegin(); it != f.parameters.cend(); ++it) {
        auto a = *it;
        Boxed b;
        b.index = a.index;
        b.type = a.type;
        locals.insert(std::pair<std::string, Boxed>(a.name, std::move(b)));
        local_var_index++;
    }

    // Jump around function
    if (!write) {
        vm->insert_instruction(line_number, file_number, write, JUMP, 0);
    } else {
        vm->insert_instruction(line_number, file_number, write, JUMP, (*g).second.pc_end);
    }

    // Push the unpack stuff
    for (auto it = f.parameters.crbegin(); it != f.parameters.crend(); ++it) {
        insert_instruction_based_on_type(
            {
                {Type::Integer, UNPACK_I},
                {Type::Float, UNPACK_F},
                {Type::String, UNPACK_S},
            },
            (*it).type, (*it).index + LocalVariableFlag);
    }

    // Now build the actual statements inside the function
    compile_node(ast->r->r, false);
    inside_function = false;

    // Do we have any RETURNs? If so, push the values onto the stack
    for (auto it = f.parameters.cbegin(); it != f.parameters.cend(); ++it) {
        auto a = *it;
        if (a.return_to) {
            insert_instruction_based_on_type(
                {
                    {Type::Integer, LOAD_I},
                    {Type::Float, LOAD_F},
                    {Type::String, LOAD_S},
                },
                (*it).type, (*it).index + LocalVariableFlag);
        }
    }

    vm->insert_bytecode(line_number, file_number, write, RETURN);
    if (!write) {
        auto f = functions.find(function_name);
        auto g = &(*f).second;
        g->pc_start = saved_pc;
        g->pc_end = vm->get_pc();
        g->local_names.resize(locals.size());
        int i = 0;
        for (auto it = locals.begin(); it != locals.end(); ++it) {
            g->local_names.at(it->second.index) = (*it).first;
            i++;
        }
    }
    locals.clear();
}
