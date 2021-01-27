#include "ast.h"
#include <iostream>
#include <stdlib.h>

extern int yyfileno;
extern int yylineno;

struct AST* new_ast()
{
    auto a = new AST();
    a->file_number = yyfileno;
    a->line_number = yylineno;
    a->l = nullptr;
    a->r = nullptr;
    if (a == NULL) {
        std::cout << "Error allocating memory for AST\n";
        exit(1);
    }
    return a;
}

struct AST* assignment(AST* var, AST* exp)
{
    auto a = new_ast();
    a->type = ASTType::ASSIGNMENT;
    a->l = var;
    a->r = exp;
    return a;
}

struct AST* statement_link(AST* list, AST* item)
{
    auto a = new_ast();
    a->type = ASTType::STATEMENT_LINK;
    a->l = list;
    a->r = item;
    return a;
}

struct AST* link(AST* list, AST* item)
{
    auto a = new_ast();
    a->type = ASTType::LINK;
    a->l = list;
    a->r = item;
    return a;
}

struct AST* linenumber(int line_number)
{
    auto a = new_ast();
    a->type = ASTType::LINE_NUMBER;
    a->integer = line_number;
    return a;
}

struct AST* token(yytokentype token)
{
    auto a = new_ast();
    a->type = ASTType::TOKEN;
    a->token = token;
    return a;
}

struct AST* token1(yytokentype token, AST* p1)
{
    auto a = new_ast();
    a->type = ASTType::TOKEN;
    a->token = token;
    a->items.push_back(p1);
    return a;
}

struct AST* token2(yytokentype token, AST* p1, AST* p2)
{
    auto a = new_ast();
    a->type = ASTType::TOKEN;
    a->token = token;
    a->items.push_back(p1);
    a->items.push_back(p2);
    return a;
}

struct AST* token3(yytokentype token, AST* p1, AST* p2, AST* p3)
{
    auto a = new_ast();
    a->type = ASTType::TOKEN;
    a->token = token;
    a->items.push_back(p1);
    a->items.push_back(p2);
    a->items.push_back(p3);
    return a;
}

struct AST* token3typed(yytokentype token, AST* p1, AST* p2, AST* p3, Type type)
{
    auto a = new_ast();
    a->type = ASTType::TOKEN;
    a->var_type = type;
    a->token = token;
    a->items.push_back(p1);
    a->items.push_back(p2);
    a->items.push_back(p3);
    return a;
}

struct AST* token4(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4)
{
    auto a = new_ast();
    a->type = ASTType::TOKEN;
    a->token = token;
    a->items.push_back(p1);
    a->items.push_back(p2);
    a->items.push_back(p3);
    a->items.push_back(p4);
    return a;
}

struct AST* token4typed(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4, Type type)
{
    auto a = new_ast();
    a->type = ASTType::TOKEN;
    a->var_type = type;
    a->token = token;
    a->items.push_back(p1);
    a->items.push_back(p2);
    a->items.push_back(p3);
    a->items.push_back(p4);
    return a;
}

struct AST* token5(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4, AST* p5)
{
    auto a = new_ast();
    a->type = ASTType::TOKEN;
    a->token = token;
    a->items.push_back(p1);
    a->items.push_back(p2);
    a->items.push_back(p3);
    a->items.push_back(p4);
    a->items.push_back(p5);
    return a;
}

struct AST* token5typed(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4, AST* p5, Type type)
{
    auto a = new_ast();
    a->type = ASTType::TOKEN;
    a->var_type = type;
    a->token = token;
    a->items.push_back(p1);
    a->items.push_back(p2);
    a->items.push_back(p3);
    a->items.push_back(p4);
    a->items.push_back(p5);
    return a;
}

struct AST* token6(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4, AST* p5, AST* p6)
{
    auto a = new_ast();
    a->type = ASTType::TOKEN;
    a->token = token;
    a->items.push_back(p1);
    a->items.push_back(p2);
    a->items.push_back(p3);
    a->items.push_back(p4);
    a->items.push_back(p5);
    a->items.push_back(p6);
    return a;
}

struct AST* token6typed(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4, AST* p5, AST* p6, Type type)
{
    auto a = new_ast();
    a->type = ASTType::TOKEN;
    a->var_type = type;
    a->token = token;
    a->items.push_back(p1);
    a->items.push_back(p2);
    a->items.push_back(p3);
    a->items.push_back(p4);
    a->items.push_back(p5);
    a->items.push_back(p6);
    return a;
}

struct AST* token8(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4, AST* p5, AST* p6, AST* p7, AST* p8)
{
    auto a = new_ast();
    a->type = ASTType::TOKEN;
    a->token = token;
    a->items.push_back(p1);
    a->items.push_back(p2);
    a->items.push_back(p3);
    a->items.push_back(p4);
    a->items.push_back(p5);
    a->items.push_back(p6);
    a->items.push_back(p7);
    a->items.push_back(p8);
    return a;
}

struct AST* token9(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4, AST* p5, AST* p6, AST* p7, AST* p8, AST* p9)
{
    auto a = new_ast();
    a->type = ASTType::TOKEN;
    a->token = token;
    a->items.push_back(p1);
    a->items.push_back(p2);
    a->items.push_back(p3);
    a->items.push_back(p4);
    a->items.push_back(p5);
    a->items.push_back(p6);
    a->items.push_back(p7);
    a->items.push_back(p8);
    a->items.push_back(p9);
    return a;
}

struct AST* integer(VM_INT i)
{
    auto a = new_ast();
    a->type = ASTType::INTEGER;
    a->integer = i;
    return a;
}

struct AST* real(VM_FLOAT r)
{
    auto a = new_ast();
    a->type = ASTType::REAL;
    a->real = r;
    return a;
}

struct AST* string(const char* s)
{
    auto a = new_ast();
    a->type = ASTType::STRING;
    a->string = s;
    if (a->string[0] == '"') {
        a->string.pop_back();
        a->string.erase(0, 1);
    }
    return a;
}

struct AST* typevariable(const char* name, const char* field, Type type)
{
    auto a = new_ast();
    a->type = ASTType::VARIABLE;
    a->var_type = type;
    a->string = name;
    a->items.push_back(string(field));
    return a;
}

struct AST* typevariable1d(const char* name, const char* field, AST* p1, Type type)
{
    auto a = new_ast();
    a->type = ASTType::VARIABLE1D;
    a->var_type = type;
    a->string = name;
    a->items.push_back(string(field));
    a->items.push_back(p1);
    return a;
}

struct AST* variable(const char* name, Type type)
{
    auto a = new_ast();
    a->type = ASTType::VARIABLE;
    a->var_type = type;
    a->string = name;
    return a;
}

struct AST* variable1d(const char* name, AST* p1, Type type)
{
    auto a = new_ast();
    a->type = ASTType::VARIABLE1D;
    a->var_type = type;
    a->string = name;
    a->items.push_back(p1);
    return a;
}

struct AST* variable2d(const char* name, AST* p1, AST* p2, Type type)
{
    auto a = new_ast();
    a->type = ASTType::VARIABLE2D;
    a->var_type = type;
    a->string = name;
    a->items.push_back(p1);
    a->items.push_back(p2);
    return a;
}
