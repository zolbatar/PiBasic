#define _GLIBCXX_USE_C99 1
#pragma warning(disable : 26812)
#include "compile.h"
#include "../graphics/graphics.h"
#include <cassert>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <map>
#include <memory>
#include <sstream>
#include <stdlib.h>

extern std::map<std::string, int> files_index;
extern std::list<std::string> error_list;
extern std::string temp_filename;
extern struct AST* final;

void compile_recurse(Compiler& compiler, struct AST* node)
{
    if (node->type == ASTType::STATEMENT_LINK) {
        if (node->l != nullptr) {
            compile_recurse(compiler, node->l);
        }
        if (node->r != nullptr) {
            compile_recurse(compiler, node->r);
        }
    } else {
        compiler.compile_node(node, false);
    }
}

void compile(std::vector<Boxed>* variables)
{
    // Hold compile state
    Compiler compiler;
    compiler.state = CompilerState::NOSTATE;

    // Put variables into compiler
    if (variables != nullptr) {
        compiler.global_var_index = static_cast<int>(variables->size());
        for (auto it = (*variables).begin(); it != (*variables).end(); ++it) {
            auto v = (*it);
            compiler.globals.insert(std::make_pair(v.name, std::move(v)));
        }
    }

    // Look ahead and parse functions and types
    compiler.compile_lookahead();
    assert(compiler.stack_size() == 0);

    // Recurse the tree and compile as we go
    try {
        for (int pass = 1; pass <= 2; pass++) {
            compiler.write = pass == 2;

            // Loop through all lines and AST elements in order
            auto it = final;
            compile_recurse(compiler, final);
            assert(compiler.stack_size() == 0);

            compiler.local_var_index = 0;
            g_vm->helper_bytecodes().insert_bytecode(0, 0, compiler.write, Bytecodes::HALT);
            if (pass == 1) {
                *g_logfile << "-> Bytecode is " << g_vm->helper_bytecodes().pc << " instructions." << std::endl;
                g_vm->helper_bytecodes().build_bytecode();
            }
        }
    } catch (const std::exception& e) {
        error_list.push_back(std::move(e.what()));
        g_vm->compile_successful = false;
        return;
    }

    // Now we MOVE the variables into the VM class
    g_vm->helper_variables().set_variables_size(compiler.global_var_index);
    for (auto g = compiler.globals.begin(); g != compiler.globals.end(); ++g) {
        auto glob = (*g).second;
        g_vm->helper_variables().add_variable((*g).second, glob.index);
    }
    for (auto g = compiler.constants.begin(); g != compiler.constants.end(); ++g) {
        auto glob = (*g);
        g_vm->helper_variables().add_variable(glob, glob.index);
    }

    // Size to number of functions
    g_vm->resize_function_locals(static_cast<int>(compiler.functions.size()));

    // Setup each function locals now
    for (auto g = compiler.functions.begin(); g != compiler.functions.end(); ++g) {
        auto func = (*g).second;

        VMFunction b;
        b.id = func.id;
        b.pc_start = func.pc_start;
        b.pc_end = func.pc_end;
        g_vm->functions.push_back(std::move(b));

        for (auto l = func.local_names.begin(); l != func.local_names.end(); ++l) {
            Boxed b;
            b.name = (*l).name;
            b.type = (*l).type;
            g_vm->get_function_locals(func.id).push_back(std::move(b));
        }
    }
}

void Compiler::setup_3d_types()
{
    // Pi3D_Vertex
    CustomType custom_type;
    custom_type.id = custom_type_index++;
    custom_type.members.insert(std::pair<std::string, Boxed>("x", std::move(Boxed("x", Type::REAL, 0))));
    custom_type.members.insert(std::pair<std::string, Boxed>("y", std::move(Boxed("y", Type::REAL, 1))));
    custom_type.members.insert(std::pair<std::string, Boxed>("z", std::move(Boxed("z", Type::REAL, 2))));
    custom_type.members.insert(std::pair<std::string, Boxed>("rgb%", std::move(Boxed("rgb%", Type::INTEGER, 3))));
    custom_types.insert(std::pair<std::string, CustomType>("Vertex3D", std::move(custom_type)));

    // Pi3D_Vertex
    CustomType custom_type2;
    custom_type2.id = custom_type_index++;
    custom_type2.members.insert(std::pair<std::string, Boxed>("v1", std::move(Boxed("v1", Type::INTEGER, 0))));
    custom_type2.members.insert(std::pair<std::string, Boxed>("v2", std::move(Boxed("v2", Type::INTEGER, 1))));
    custom_type2.members.insert(std::pair<std::string, Boxed>("v3", std::move(Boxed("v3", Type::INTEGER, 2))));
    custom_type2.members.insert(std::pair<std::string, Boxed>("rgb%", std::move(Boxed("rgb%", Type::INTEGER, 3))));
    custom_types.insert(std::pair<std::string, CustomType>("Triangle3D", std::move(custom_type2)));
}

void Compiler::compile_node(struct AST* ast, bool expression)
{
    if (ast == NULL) {
        return;
    }
    level++;
    line_number = ast->line_number;
    file_number = ast->file_number;
    switch (ast->type) {
    case ASTType::LINK:
        compile_node(ast->l, expression);
        compile_node(ast->r, expression);
        break;
    case ASTType::TOKEN:
        compile_node_token(ast, expression);
        break;
    case ASTType::LINE_NUMBER:
        if (!write) {
            line_no_to_bytecode.insert(std::pair<UINT32, UINT32>(ast->integer, g_vm->helper_bytecodes().pc));
        }
        assert(stack_size() == 0);
        break;
    case ASTType::INTEGER:
        compile_node_integer(ast);
        break;
    case ASTType::REAL:
        compile_node_float(ast);
        break;
    case ASTType::STRING:
        compile_node_string(ast);
        break;
    case ASTType::VARIABLE:
        compile_node_variable(ast, expression);
        break;
    case ASTType::VARIABLE1D:
        compile_node_variable1d(ast, expression);
        break;
    case ASTType::VARIABLE2D:
        compile_node_variable2d(ast, expression);
        break;
    case ASTType::ASSIGNMENT:
        compile_node_assignment(ast);
        assert(stack_size() == 0);
        break;

    default:
        error("Unknown type " + (int)ast->type);
    };
    level--;

    // Do we have to print stuff?
    if (stack_size() >= 1 && state == CompilerState::PRINT && level == print_level) {
        insert_instruction_based_on_type(
            {
                { Type::INTEGER, Bytecodes::PRINT_I },
                { Type::REAL, Bytecodes::PRINT_F },
                { Type::STRING, Bytecodes::PRINT_S },
            },
            peek_type(), create_print_flag());
        stack_pop();
    }
}

void Compiler::compile_node_type(struct AST* ast)
{
    custom_type_name.assign(ast->string);
    if (custom_types.count(custom_type_name) == 0) {
        error("Unknown type " + ast->l->string);
    }
}

void Compiler::error(std::string message)
{
    // Get filename
    for (auto it = files_index.rbegin(); it != files_index.rend(); ++it) {
        if ((*it).second == file_number) {
            std::stringstream stream;
            auto f = (*it).first;
            if (f.compare(temp_filename) == 0) {
                stream << message << std::endl;
            } else {
                stream << message << " at line " << line_number << " in file '" << f << "'" << std::endl;
            }
            throw std::exception(stream.str().c_str());
        }
    }
}
