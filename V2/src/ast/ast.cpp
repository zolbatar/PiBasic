#include <stdlib.h>
#include <stack>
#include "ast.h"

extern int yylineno;
extern int statement;
extern int yyfileno;

struct ast *get_empty_ast() {
    struct ast *v = (struct ast *)malloc(sizeof(struct ast));
    if (!v) {
        yyerror("out of space");
        exit(1);
    }
    v->type = NodeType::None;
    v->oper = Operator::None;
    v->var_type = Type::None;
    v->v_int = 0;
    v->v_float = 0.0;
    v->token = Token::None;
    v->v_string = NULL;
    v->l = NULL;
    v->r = NULL;
    v->line_number = yylineno;
    v->file_number = yyfileno;
    return v;
}

// These are nodes
struct ast *new_line_number_ast(int o) {    
    struct ast *v = get_empty_ast();
    v->type = NodeType::LineNumber;
    v->v_int = o;
    v->l = NULL;
    v->r = NULL;
    return v;
}

struct ast *new_int_ast(int o) {
    struct ast *v = get_empty_ast();
    v->type = NodeType::Integer;
    v->v_int = o;
    v->l = NULL;
    v->r = NULL;
    return v;
}

struct ast *new_float_ast(double o) {
    struct ast *v = get_empty_ast();
    v->type = NodeType::Float;
    v->v_float = o;
    v->l = NULL;
    v->r = NULL;
    return v;
}

struct ast *new_string_ast(const char *o) {
    struct ast *v = get_empty_ast();
    v->type = NodeType::String;
    v->v_string = new std::string(o);
    if ((*v->v_string)[0] == '"') {
        v->v_string->pop_back();
        v->v_string->erase(0, 1);
    }
    v->l = NULL;
    v->r = NULL;
    return v;
}

struct ast *new_type_ast(const char *name) {
    struct ast *v = get_empty_ast();
    v->type = NodeType::Type;
    v->v_string = new std::string(name);
    v->l = NULL;
    v->r = NULL;
    return v;
}

struct ast *new_variable_ast(const char *name, Type type) {
    struct ast *v = get_empty_ast();
    v->type = NodeType::Variable;
    v->v_string = new std::string(name);
    free((void *)name);
    v->var_type = type;
    v->l = NULL;
    v->r = NULL;
    return v;
}

struct ast *new_fieldvariable_ast(const char *name, Type type, struct ast *index) {
    struct ast *v = get_empty_ast();
    v->type = NodeType::Variable;
    v->v_string = new std::string(name);
    free((void *)name);
    v->var_type = type;
    v->l = index;
    v->r = NULL;
    return v;
}

struct ast *new_variable_with_index_ast(const char *name, struct ast *index, Type type) {
    struct ast *v = get_empty_ast();
    v->type = NodeType::VariableWithIndex;
    v->v_string = new std::string(name);
    free((void *)name);
    v->var_type = type;
    v->l = index;
    v->r = NULL;
    return v;
}

struct ast *new_type_variable_with_index_ast(const char *name, struct ast *index, const char *type_name, Type type) {
    struct ast *v = get_empty_ast();
    v->type = NodeType::VariableWithIndex;
    v->v_string = new std::string(name);
    free((void *)name);
    v->var_type = type;
    v->l = index;
    v->r = new_string_ast(type_name);
    return v;
}

struct ast *new_function_ast(Type type, struct ast *l, struct ast *r) {
    struct ast *v = get_empty_ast();
    v->type = NodeType::Function;
    v->var_type = type;
    v->l = l;
    v->r = r;
    return v;
}

struct ast *new_token_ast(Token token, struct ast *l, struct ast *r) {
    struct ast *v = get_empty_ast();
    v->type = NodeType::Token;
    v->token = token;
    v->l = l;
    v->r = r;
    return v;
}

// The following do the connecting of other nodes together

struct ast *new_ast(struct ast *l, struct ast *r) {
    struct ast *v = get_empty_ast();
    v->type = NodeType::Link;
    v->l = l;
    v->r = r;
    return v;
}

struct ast *new_expression_ast(struct ast *l, struct ast *r, Operator o) {
    struct ast *v = get_empty_ast();
    v->type = NodeType::Expression;
    v->l = l;
    v->r = r;
    v->oper = o;
    return v;
}

struct ast *new_assignment_ast(struct ast *l, struct ast *r) {
    struct ast *v = get_empty_ast();
    v->type = NodeType::Assignment;
    v->l = l;
    v->r = r;
    return v;
}

struct ast *new_star_command_ast(struct ast *l, struct ast *r) {
    struct ast *v = get_empty_ast();
    v->type = NodeType::StarCommand;
    v->l = l;
    v->r = r;
    return v;
}

void free_element(struct ast *ast) {
    if (ast == NULL) {
        return;
    }
    switch (ast->type) {
    case NodeType::Token:
    case NodeType::Link:
    case NodeType::Assignment:
    case NodeType::Function:
    case NodeType::Expression:
    case NodeType::StarCommand:
        if (ast->l != NULL)
            free_element(ast->l);
        if (ast->r != NULL)
            free_element(ast->r);
        free(ast);
        break;
    case NodeType::Variable:
    case NodeType::Integer:
    case NodeType::String:
    case NodeType::Float:
    case NodeType::LineNumber:
        free(ast);
        break;
    }
}

void free_ast(struct ast *ast) { free_element(ast); }