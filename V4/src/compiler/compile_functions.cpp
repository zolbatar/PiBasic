#include "compile.h"
#include <cassert>

void Compiler::compile_node_function_checkreturn()
{
    for (auto it = return_list.begin(); it != return_list.end(); ++it) {
        auto top = *it;
        var_name = top.name;
        var_type = top.type;
        auto var_id = find_or_create_variable(VariableScope::NOSCOPE, true);
        insert_instruction_based_on_type(
            {
                { Type::INTEGER, Bytecodes::LOAD_I },
                { Type::REAL, Bytecodes::LOAD_F },
                { Type::STRING, Bytecodes::LOAD_S },
            },
            var_type, var_id);
    }
}

void Compiler::compile_node_token_functions(struct AST* ast, bool expression)
{
    switch (ast->token) {
    case CALLPROC:
    case CALLFN:
        compile_node_function_call(ast, expression);
        break;
    case RETURN: {
        compile_node_function_checkreturn();
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::RETURN);
        break;
    }
    case RETURN_WITH_VALUE: {
        compile_node(ast->items[0], true);
        if (write) {
            auto g = functions.find(function_name);
            auto f = (*g).second;
            switch (f.type) {
            case Type::NOTYPE:
                error("Function has no return type");
                break;
            case Type::INTEGER:
                if (peek_type() != Type::INTEGER)
                    error("Expected integer return type in function");
                break;
            case Type::REAL:
                if (peek_type() != Type::REAL)
                    error("Expected real return type in function");
                break;
            case Type::STRING:
                if (peek_type() != Type::STRING)
                    error("Expected string return type in function");
                break;
            default:
                error("Unsupported return type in function");
            }
        }
        compile_node_function_checkreturn();
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::RETURN);
        stack_pop();
        break;
    }
    default:
        error("FUNCTIONS: Unknown token");
    }
}

void Compiler::compile_node_function_call(struct AST* ast, bool expression)
{
    // Now we can do a proper fixup
    auto name = ast->items[0]->string;
    if (functions.count(name) == 0)
        error("Unknown function " + name);
    auto g = functions.find(name);
    auto f = (*g).second;

    // Save parameters on the stack
    int saved_stack_index = static_cast<int>(type_list.size());
    compile_node(ast->items[1], true);
    int diff = static_cast<int>(type_list.size()) - saved_stack_index;
    if (diff != static_cast<int>(f.parameters.size()))
        error("Function call " + name + " mismatched parameters");

    // Now drop them off the internal list as we assume they are present in the function
    while (static_cast<int>(type_list.size()) != saved_stack_index) {
        stack_pop();
    }

    if (!write) {
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, 0);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CALL, 0);
    } else {
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, (*g).second.id);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CALL, (*g).second.pc_start);
    }

    // Do we have a return type?
    int return_count = 0;
    if (!expression && f.type != Type::NOTYPE) {
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::DROP);
    } else {
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::NOP);

        // Push the return type
        if (f.type != Type::NOTYPE) {
            stack_push(f.type);
            return_count++;
        }
    }

    // Do we have any RETURN parameters?
    auto p = f.parameters;
    struct AST* var_ast = ast->items[1];
    std::stack<Boxed*> reverse;
    for (auto it = f.parameters.begin(); it != f.parameters.end(); ++it) {
        if ((*it).return_to) {
            reverse.push(&*it);
        }
        var_ast = var_ast->r;
    }

    // Get return variables (in calling namespace)
    struct AST* ast_loop = ast->items[1];
    std::vector<std::string> return_names;
    int index = 0;
    while (ast_loop != NULL) {
        if (ast_loop->type == ASTType::LINK) {
            if (ast_loop->l->type == ASTType::VARIABLE) {
                if (f.parameters[index].return_to) {
                    return_names.push_back(ast_loop->l->string);
                }
            }
        } else {
            if (ast_loop->type == ASTType::VARIABLE) {
                if (f.parameters[index].return_to) {
                    return_names.push_back(ast_loop->string);
                }
            }
        }
        index++;
        ast_loop = ast_loop->r;
    };

    // Now go through stack and process each return value
    assert(reverse.size() == return_names.size());
    index = static_cast<int>(return_names.size()) - 1;
    while (!reverse.empty()) {
        auto top = reverse.top();
        var_name = return_names[index];
        var_type = top->type;
        auto var_id = find_or_create_variable(VariableScope::LOCAL, true);
        insert_instruction_based_on_type(
            {
                { Type::INTEGER, Bytecodes::STORE_I },
                { Type::REAL, Bytecodes::STORE_F },
                { Type::STRING, Bytecodes::STORE_S },
            },
            var_type, var_id);
        reverse.pop();
        index--;
    }
}

void Compiler::compile_node_function(struct AST* ast)
{
    assert(stack_size() == 0);
    inside_function = true;
    UINT32 saved_pc = g_vm->helper_bytecodes().pc + 1;
    function_name = ast->items[0]->string;
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
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::JUMP, 0);
    } else {
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::JUMP, (*g).second.pc_end);
    }

    // Push the unpack stuff
    for (auto it = f.parameters.crbegin(); it != f.parameters.crend(); ++it) {
        insert_instruction_based_on_type(
            {
                { Type::INTEGER, Bytecodes::UNPACK_I },
                { Type::REAL, Bytecodes::UNPACK_F },
                { Type::STRING, Bytecodes::UNPACK_S },
            },
            (*it).type, (*it).index + LocalVariableFlag);
    }

    // Do we have any RETURNs? If so, store in case we return early
    assert(return_list.size() == 0);
    return_list.clear();
    for (auto it = f.parameters.cbegin(); it != f.parameters.cend(); ++it) {
        auto a = *it;
        if (a.return_to) {
            Boxed b;
            b.name = a.name;
            b.type = a.type;
            return_list.push_back(std::move(b));
        }
    }

    // Now build the actual statements inside the function
    compile_node(ast->items[2], false);
    inside_function = false;
    return_list.clear();

    // Do we have any RETURNs? If so, push the values onto the stack
    for (auto it = f.parameters.cbegin(); it != f.parameters.cend(); ++it) {
        auto a = *it;
        if (a.return_to) {
            insert_instruction_based_on_type(
                {
                    { Type::INTEGER, Bytecodes::LOAD_I },
                    { Type::REAL, Bytecodes::LOAD_F },
                    { Type::STRING, Bytecodes::LOAD_S },
                },
                a.type, a.index + LocalVariableFlag);
        }
    }

    g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::RETURN);
    if (!write) {
        auto f2 = &(*g).second;
        f2->pc_start = saved_pc;
        f2->pc_end = g_vm->helper_bytecodes().pc;
        f2->local_names.resize(locals.size());
        int i = 0;
        for (auto it = locals.begin(); it != locals.end(); ++it) {
            f2->local_names.at(it->second.index).name = (*it).first;
            f2->local_names.at(it->second.index).type = (*it).second.type;
            i++;
        }
    }
    locals.clear();
    assert(stack_size() == 0);
}
