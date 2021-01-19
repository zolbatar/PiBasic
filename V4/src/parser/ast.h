#pragma once
#include "../types.h"
#include "bison.hpp"
#include <list>
#include <vector>

enum class Type {
    NOTYPE,
    INTEGER,
    REAL,
    STRING,
    INTEGER_ARRAY,
    REAL_ARRAY,
    STRING_ARRAY,
    TYPE,
    TYPE_ARRAY
};

enum class ASTType {
    LINK,
    TOKEN,
    LINE_NUMBER,
    INTEGER,
    REAL,
    STRING,
    VARIABLE,
    VARIABLE1D,
    VARIABLE2D,
    ASSIGNMENT
};

struct AST {
    ASTType type;
    yytokentype token;
    Type var_type;
    VM_INT integer;
    VM_FLOAT real;
    VM_STRING string;

    int file_number;
    int line_number;

    // For lists of stuff, so we don't overblow the tree
    std::vector<AST*> items;

    // For the actual tree
    struct AST* l;
    struct AST* r;
};

struct AST* new_ast();
struct AST* assignment(AST* var, AST* exp);
struct AST* link(AST* list, AST* item);
struct AST* linenumber(int line_number);
struct AST* token(yytokentype token);
struct AST* token1(yytokentype token, AST* p1);
struct AST* token2(yytokentype token, AST* p1, AST* p2);
struct AST* token3(yytokentype token, AST* p1, AST* p2, AST* p3);
struct AST* token3typed(yytokentype token, AST* p1, AST* p2, AST* p3, Type type);
struct AST* token4(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4);
struct AST* token4typed(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4, Type type);
struct AST* token5(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4, AST* p5);
struct AST* token5typed(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4, AST* p5, Type type);
struct AST* token6(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4, AST* p5, AST* p6);
struct AST* token6typed(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4, AST* p5, AST* p6, Type type);
struct AST* token8(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4, AST* p5, AST* p6, AST* p7, AST* p8);
struct AST* token9(yytokentype token, AST* p1, AST* p2, AST* p3, AST* p4, AST* p5, AST* p6, AST* p7, AST* p8, AST* p9);
struct AST* integer(VM_INT i);
struct AST* real(VM_FLOAT r);
struct AST* string(const char* s);
struct AST* typevariable(const char* name, const char* field, Type type);
struct AST* typevariable1d(const char* name, const char* field, AST* p1, Type type);
struct AST* variable(const char* name, Type type);
struct AST* variable1d(const char* name, AST* p1, Type type);
struct AST* variable2d(const char* name, AST* p1, AST* p2, Type type);
