#pragma once

#include <iostream>

extern void yyerror(const char *e);
typedef int VM_INT;
typedef double VM_FLOAT;

enum class Type { None, Integer, Float, String, IntegerArray, FloatArray, StringArray, Type, TypeArray };

enum class NodeType { None, Assignment, Expression, Float, Function, Integer, LineNumber, Link, StarCommand, String, Token, Variable, VariableWithIndex, Type };

enum class Operator {
    None,
    Plus,
    Subtract,
    Multiply,
    Divide,
    IntegerDivide,
    Equal,
    NotEqual,
    GreaterEqual,
    LessEqual,
    Less,
    Greater,
    Div,
    Mod,
    Or,
    And,
    Eor,
    ShiftLeft,
    ShiftRight
};

enum class Token {
    None,
    Case,
    Data,
    Dim,
    End,
    For,
    ForStep,
    FunctionCall,
    FunctionCallExpression,
    Global,
    Gosub,
    Goto,
    If,
    Input,
    InputNoQuestionMark,
    Instr,
    Local,
    LocalDim,
    Of,
    Otherwise,
    Oscli,
    Read,
    Repeat,
    Return,
    ReturnValue,
    ReturnVariable,
    Restore,
    Rnd,
    RndRange,
    Time,
    Times,
    TraceOn,
    TraceOff,
    Until,
    When,
    While,

    BGet,
    BPut,
    Close,
    OpenIn,
    OpenUp,
    OpenOut,
    Eof,

    Print,
    PrintN,
    PrintComma,
    PrintHex,
    PrintNewLine,
    PrintNoNewLine,
    PrintSemiColon,
    PrintSpc,

    Asc,
    Chrs,
    Lefts,
    Mids,
    Rights,
    Len,
    Strs,
    StrsHex,
    Strings,

    False,
    True,

    Int,
    Float,

    Pi,
    Not,
    Sqr,
    Ln,
    Log,
    Exp,
    Atn,
    Tan,
    Cos,
    Sin,
    Abs,
    Acs,
    Asn,
    Deg,
    Rad,
    Sgn,
    Val,

    Type,
    EndType,
    Field,

    Inkey,
    Inkeys,
    SInkey,
    SInkeys,

    Circle,
    CircleFill,
    Cls,
    ColourExpression,
    ColourRGB,
    ColourHEX,
    ColourBgRGB,
    ColourBgHEX,
    Ellipse,
    EllipseFill,
    Flip,
    Graphics,
    Line,
    Rectangle,
    RectangleFill,
    Triangle,
    TriangleFill,
    TriangleShaded,
    Plot,
    Clip,
    ClipOff,
    Text,
    TextRight,
    TextCentre,
    LoadTypeface,
    CreateFont,
    ScreenWidth,
    ScreenHeight,

    CreateVertex,
    CreateTriangle,
    CreateShape,
    CreateObjectSolid,
    CreateObjectShaded,
    CreateObjectWireframe,
    CreateObjectEdgedWireframe,
    ObjectTranslate,
    ObjectRotate,
    ObjectScale,
    RenderFrame,
};

struct ast {
    NodeType type;
    Operator oper;
    Type var_type;
    VM_INT v_int;
    VM_FLOAT v_float;
    Token token;
    std::string *v_string;
    struct ast *l;
    struct ast *r;
    short file_number;
    int line_number;
};

struct ast *new_line_number_ast(int o);
struct ast *new_int_ast(int o);
struct ast *new_float_ast(double o);
struct ast *new_string_ast(const char *o);
struct ast *new_type_ast(const char *name);
struct ast *new_variable_ast(const char *name, Type type);
struct ast *new_fieldvariable_ast(const char *name, Type type, struct ast *index);
struct ast *new_variable_with_index_ast(const char *name, struct ast *index, Type type);
struct ast *new_type_variable_with_index_ast(const char *name, struct ast *index, const char *type_name, Type type);
struct ast *new_function_ast(Type type, struct ast *l, struct ast *r);
struct ast *new_token_ast(Token token, struct ast *l, struct ast *r);
struct ast *new_ast(struct ast *l, struct ast *r);
struct ast *new_expression_ast(struct ast *l, struct ast *r, Operator o);
struct ast *new_assignment_ast(struct ast *l, struct ast *r);
struct ast *new_star_command_ast(struct ast *l, struct ast *r);

void debug_ast(struct ast *ast, std::ostream *file);
void free_ast(struct ast *ast);