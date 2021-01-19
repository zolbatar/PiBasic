#pragma once
#include "../ast/ast.h"
#include "compile.h"
#include <fstream>
#include <iostream>
#include <set>
#include <sstream>
#include <stdlib.h>

class CCompile {
  public:
    CCompile(std::ostream *file, struct ast *ast);

  private:
    void compile_node(struct ast *ast, bool expression);
    void compile_variable_type_and_name(std::ostringstream &s, Type type, std::string munged, bool terminate);
    void compile_node_expression(struct ast *ast, bool expression);
    void compile_node_variable(struct ast *ast, bool expression);
    void compile_node_variablewithindex(struct ast *ast, bool expression);
    void strip_trailing_comma(std::ostringstream *out);
    std::string munge_variable_name(std::string name);

    CompilerState state = CompilerState::None;
    std::ostringstream globals_code;
    std::ostringstream data_code;
    std::ostringstream text_code;
    std::set<std::string> global_variables;
    std::set<std::string> local_variables;
    bool inside_function = false;
    int level = 0;
    int parameters_level = 0;
    int for_index = 0;
};