#pragma once
#include "../parser/ast.h"
#include "../types.h"
#include "../vm/vm.h"
#include <list>
#include <map>
#include <memory>
#include <stack>
#include <string>
#include <vector>

enum class CompilerState {
    NOSTATE,
    DATA,
    GLOBALS,
    LOCALS,
    READ,
    TYPE,
    FUNCTION,
    FUNCTIONPARAMETERS,
    PRINT,
    DIM,
    LOCALDIM
};

enum class VariableScope {
    LOCAL,
    GLOBAL,
    NOSCOPE
};

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
    std::vector<Boxed> local_names;
} Function;

struct CustomType {
    int id;
    std::map<std::string, Boxed> members;
};

struct CustomTypeFind {
    int field_count = 0;
    int field_id = -1;
    Type field_type = Type::NOTYPE;
};

extern std::map<int, std::list<AST*>> ast_lines;

class Compiler {
public:
    Compiler(VM* vm)
    {
        this->vm = vm;
        setup_3d_types();
    }
    bool write = false;
    CompilerState state = CompilerState::NOSTATE;
    int global_var_index = 0;
    int local_var_index = 0;
    std::map<std::string, Boxed> globals;
    std::map<std::string, Boxed> locals;
    std::list<Boxed> constants;
    std::map<std::string, Function> functions;
    std::list<Boxed> return_list;

    void compile_node(struct AST* ast, bool expression);
    void compile_lookahead();
    void compile_node_lookahead(struct AST* ast, bool expression);
    int stack_size() { return static_cast<int>(type_list.size()); }

private:
    VM* vm;
    int line_number = 0;
    int file_number = 0;
    int level = 0;
    int print_level = -1;
    bool print_semicolon_active = false;
    bool print_right_justify = false;
    bool print_hex = false;

    // Creating variables
    Type var_type = Type::NOTYPE;
    std::stack<Type> type_list;
    std::string var_name;
    std::string function_name;
    Boxed* var = NULL;

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
    void stack_push(Type type) { type_list.push(type); }
    void stack_pop()
    {
        var_type = type_list.top();
        type_list.pop();
        if (type_list.empty())
            var_type = Type::NOTYPE;
    }
    void stack_pop_keep()
    {
        var_type = type_list.top();
        type_list.pop();
    }
    Type peek_type() { return type_list.top(); }

    // Helper stuff
    void setup_3d_types();
    void error(std::string message);
    UINT32 constant_int_create(VM_INT v);
    UINT32 constant_float_create(VM_FLOAT v);
    UINT32 constant_string_create(std::string v);
    UINT32 find_or_create_variable(VariableScope type, bool expression);
    CustomTypeFind find_custom_type(std::string field_name);
    void assignment(Type type, int var_id, int field_id, Type field_type, int field_count, int dimensions);
    void get_index_ensure_is_int(struct AST* ast);
    void insert_bytecode_based_on_type(std::map<Type, Bytecodes>, Type type);
    void insert_instruction_based_on_type(std::map<Type, Bytecodes> m, Type type, UINT32 value);
    void insert_bytecode_based_on_peektype(std::map<Type, Bytecodes>);
    void ensure_stack_is_integer();
    void get_ensure_is_integer_pop(AST*);
    void get_ensure_is_float_pop(AST*);
    void get_ensure_is_string_pop(AST*);
    void ensure_stack_is_string();
    void ensure_stack_is_float();
    void comparison(Bytecodes i, Bytecodes f, Bytecodes s);
    void boolean(Bytecodes i);

    // Graphics helpers
    void x_and_y(struct AST* ast);
    void four_coords(struct AST* ast);
    void six_coords(struct AST* ast);
    void six_coords_with_colour(struct AST* ast);
    void three_coords(struct AST* ast);
    void three_coords_and_colour(struct AST* ast, int index);
    void three_vertices_and_colour(struct AST* ast, int index);

    // Text stuff
    UINT32 create_print_flag();

    void compile_node_token(struct AST* ast, bool expression);
    void compile_node_token_printinput(struct AST* ast);
    void compile_node_token_io(struct AST* ast);
    void compile_node_token_maths(struct AST* ast);
    void compile_node_token_string(struct AST* ast);
    void compile_node_token_graphics(struct AST* ast);
    void compile_node_token_graphics_3d(struct AST* ast);
    void compile_node_token_functions(struct AST* ast, bool expression);
    void compile_node_token_looping(struct AST* ast);
    void compile_node_token_data(struct AST* ast);
    void compile_node_token_chain(struct AST* ast);
    void compile_node_token_expect(struct AST* ast);

    void compile_node_variable(struct AST* ast, bool expression);
    void compile_node_variable1d(struct AST* ast, bool expression);
    void compile_node_variable2d(struct AST* ast, bool expression);
    void compile_node_variable_expression(struct AST* ast);
    void compile_node_variable1d_expression(struct AST* ast);
    void compile_node_variable2d_expression(struct AST* ast);
    void compile_node_variable_nonexpression(struct AST* ast);
    void compile_node_variable1d_nonexpression(struct AST* ast);
    void compile_node_variable2d_nonexpression(struct AST* ast);
    void compile_node_variable1d_dim(struct AST* ast, int var_id);
    void compile_node_variable2d_dim(struct AST* ast, int var_id);

    void compile_input_variable(struct AST* ast);
    void compile_print_element(struct AST* ast);

    void compile_node_case(struct AST* ast);
    void compile_node_when(struct AST* var, struct AST* when);
    void compile_node_when_single(struct AST* var, struct AST* expression, struct AST* action);
    void compile_node_otherwise(struct AST* action);
    void compile_node_for(struct AST* ast);
    void compile_node_for_step(struct AST* ast);
    void compile_node_forin(struct AST* ast);
    void compile_node_repeat(struct AST* ast);
    void compile_node_while(struct AST* ast);
    void compile_node_if(struct AST* ast);
    void compile_node_type(struct AST* ast);
    void compile_node_assignment(struct AST* ast);
    void compile_node_expression(struct AST* ast);
    void compile_node_integer(struct AST* ast);
    void compile_node_float(struct AST* ast);
    void compile_node_string(struct AST* ast);
    void compile_node_function(struct AST* ast);
    void compile_node_function_checkreturn();
    void compile_node_function_lookahead(struct AST* ast);
    void compile_node_function_call(struct AST* ast, bool expression);
};

VM* compile(Graphics* graphics, std::stringstream* logfile);
