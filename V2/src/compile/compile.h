#pragma once
#include <list>
#include <map>
#include <memory>
#include <stack>
#include <string>

#include "../ast/ast.h"
#include "../vm/vm.h"

enum class CompilerState { None, Data, Globals, Locals, Read, Type, Function, FunctionParameters, Print, Dim, LocalDim };

enum class VariableType { Local, Global, NoType };

typedef struct {
    UINT32 end_pc;
    UINT32 false_pc;
} IfStatement;

typedef struct {
    int id;
    UINT32 pc_start;
    UINT32 pc_end;
    Type type;
    std::vector<Boxed> parameters;
    std::vector<std::string> local_names;
} Function;

struct CustomType {
    int id;
    std::map<std::string, Boxed> members;
};

struct CustomTypeFind {
    int field_count = 0;
    int field_id = -1;
    Type field_type = Type::None;
};

class Compiler {
  public:
    Compiler(VM *vm) {
        this->vm = vm;
        setup_3d_types();
    }
    void optimise();
    bool write = false;
    CompilerState state = CompilerState::None;
    int global_var_index = 0;
    int local_var_index = 0;
    std::map<std::string, Boxed> globals;
    std::map<std::string, Boxed> locals;
    std::list<Boxed> constants;
    std::map<std::string, Function> functions;

    void compile_node(struct ast *ast, bool expression);
    void compile_node_lookahead(struct ast *ast, bool expression);

  private:
    VM *vm;
    int line_number = 0;
    int file_number = 0;
    int level = 0;
    int print_level = -1;
    bool print_semicolon_active = false;
    bool print_right_justify = false;
    bool print_hex = false;

    // Creating variables
    Type var_type = Type::None;
    std::stack<Type> type_list;
    std::string var_name;
    std::string function_name;
    Boxed *var = NULL;

    // Functions
    int function_index = 0;
    bool inside_function = false;

    // Looping
    std::map<UINT32, IfStatement> if_statements;

    // GOTO/GOSUB
    std::map<UINT32, UINT32> line_no_to_bytecode;

    // Custom types
    std::map<std::string, Boxed> members;
    std::map<std::string, CustomType> custom_types;
    std::string custom_type_name;
    int custom_type_index = 0;

    // Stack
    int stack_size() { return static_cast<int>(type_list.size()); }
    void stack_push(Type type) { type_list.push(type); }
    void stack_pop() {
        var_type = type_list.top();
        type_list.pop();
        if (type_list.empty())
            var_type = Type::None;
    }
    void stack_pop_keep() {
        var_type = type_list.top();
        type_list.pop();
    }
    Type peek_type() { return type_list.top(); }

    // Helper stuff
    void setup_3d_types();
    int constant_int_create(VM_INT v);
    int constant_float_create(VM_FLOAT v);
    int constant_string_create(std::string *v);
    int find_or_create_variable(VariableType type, bool expression);
    CustomTypeFind find_custom_type(std::string field_name);
    void assignment(Type type, int var_id, int field_id, Type field_type, int field_count);
    void get_index_ensure_is_int(struct ast *ast);
    void insert_bytecode_based_on_type(std::map<Type, BYTE>, Type type);
    void insert_instruction_based_on_type(std::map<Type, BYTE> m, Type type, UINT32 value);
    void insert_bytecode_based_on_peektype(std::map<Type, BYTE>);
    void ensure_stack_is_integer();
    void get_ensure_is_integer_pop(ast *);
    void get_ensure_is_float_pop(ast *);
    void get_ensure_is_string_pop(ast *);
    void ensure_stack_is_string();
    void ensure_stack_is_float();
    void comparison(Tokens i, Tokens f, Tokens s);
    void boolean(Tokens i);
    void error(std::string message);

    // Graphics helpers
    void x_and_y(struct ast *ast);
    void four_coords(struct ast *ast);
    void six_coords(struct ast *ast);
    void six_coords_with_colour(struct ast *ast);
    void three_coords(struct ast *ast);
    void three_coords_and_colour(struct ast *ast);
    void three_vertices_and_colour(struct ast *ast);

    // Text stuff
    UINT32 create_print_flag();

    void compile_node_token(struct ast *ast, bool expression);
    void compile_node_token_printinput(struct ast *ast, bool expression);
    void compile_node_token_io(struct ast *ast, bool expression);
    void compile_node_token_maths(struct ast *ast, bool expression);
    void compile_node_token_string(struct ast *ast, bool expression);
    void compile_node_token_graphics(struct ast *ast, bool expression);
    void compile_node_token_graphics_3d(struct ast *ast, bool expression);
    void compile_node_token_functions(struct ast *ast, bool expression);
    void compile_node_token_looping(struct ast *ast, bool expression);
    void compile_node_token_data(struct ast *ast, bool expression);
    void compile_node_token_variable(struct ast *ast, bool expression);
    void compile_input_variable(struct ast *ast);
    void compile_node_case(struct ast *ast);
    void compile_node_when(struct ast *var, struct ast *when);
    void compile_node_when_single(struct ast *var, struct ast *expression, struct ast *action);
    void compile_node_otherwise(struct ast *action);
    void compile_node_for(struct ast *ast);
    void compile_node_for_step(struct ast *ast);
    void compile_node_while(struct ast *ast);
    void compile_node_if(struct ast *ast);
    void compile_node_type(struct ast *ast);
    void compile_node_assignment(struct ast *ast, bool expression);
    void compile_node_variable(struct ast *ast, bool expression);
    void compile_node_variablewithindex(struct ast *ast, bool expression);
    void compile_node_expression(struct ast *ast, bool expression);
    void compile_node_integer(struct ast *ast, bool expression);
    void compile_node_float(struct ast *ast, bool expression);
    void compile_node_string(struct ast *ast, bool expression);
    void compile_node_function(struct ast *ast);
    void compile_node_function_lookahead(struct ast *ast);
    void compile_node_function_call(struct ast *ast, bool expression);
};

VM *compile(struct ast *ast, Graphics *graphics, bool optimise);
