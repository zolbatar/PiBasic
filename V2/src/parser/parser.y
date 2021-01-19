%{
#include <iostream>
#include <stack>
#include <stdio.h>
#include <map>
#include "../ast/ast.h"
extern int yylex();
extern int yylineno;
extern int yyfileno;
extern FILE *yyin;
void yyerror(const char *e);
int yylex_destroy(void);
struct ast *final;
extern std::string file;
extern std::stack<std::string> file_stack;
extern std::map<std::string, int> files_index;
%}

//%define parse.error verbose
//%require "2.7"

%union {
    int v_int;
    double v_float;
    const char *v_string;
    struct ast *ast;
}

// Declare tokens
%token TERM
%token TYPE END_TYPE FIELD RETURN RETURNVALUE REF
%token <v_int> LINE_NUMBER LITERAL_INT
%token <v_float> LITERAL_FLOAT
%token <v_string> LITERAL_STRING STAR INTEGER_VARIABLE VARIABLE STRING_VARIABLE TYPE_VARIABLE
%token <v_string> STRING_FUNCTION INTEGER_FUNCTION FLOAT_FUNCTION PROCEDURE DEFINE_PROCEDURE DEFINE_INTEGER_FUNCTION DEFINE_FLOAT_FUNCTION DEFINE_STRING_FUNCTION
%token DEFINE 
%token DOUBLESEMI
%token DATA DIM ELSE END END_IF END_FUNCTION END_PROCEDURE END_WHILE FOR FUNCTION GLOBAL IF INPUT LOCAL NEXT OSCLI PRINT READ REPEAT WHILE
%token CASE WHEN END_CASE OF OTHERWISE
%token RESTORE RND SPC STEP TAB THEN TO TIME TIMES TRACEON TRACEOFF UNTIL
%token CLOSE OPENIN OPENOUT OPENUP BGET BPUT EOFH
%token INKEY INKEYS
%token SHL SHR
%token INT FLOAT 
%token FALSE TRUE
%token INTEGERDIVIDE
%token E GE LE NE
%token AND OR EOR
%token GOSUB GOTO
%token ASC CHRS INSTR LEFTS MIDS RIGHTS LEN STRS STRINGS
%token ACS DIV MOD SQR LN LOG EXP ATN TAN COS SIN ABS ASN DEG RAD SGN VAL PI
%token CLS CLG COLOUR COLOURBG FLIP GRAPHICS LINE PLOT RECTANGLE TRIANGLE CLIP CLIPOFF FILL SHADED CIRCLE ELLIPSE 
%token TEXT TEXTRIGHT TEXTCENTRE LOADTYPEFACE CREATEFONT
%token MONO10 MONO15 MONO20 MONO25 MONO30 MONO40 MONO50 MONO75 MONO100
%token PROP10 PROP15 PROP20 PROP25 PROP30 PROP40 PROP50 PROP75 PROP100
%token SCREENWIDTH SCREENHEIGHT 
%token PI3D_CREATEVERTEX PI3D_CREATETRIANGLE PI3D_CREATESHAPE PI3D_CREATEOBJECT PI3D_TRANSLATE PI3D_ROTATE PI3D_SCALE PI3D_RENDERFRAME
%token SOLID WIREFRAME EDGEDWIREFRAME

%type <ast> pibasic line_number statement_list statement
%type <ast> numeric_variable number numeric_expression
%type <ast> string_variable string string_expression
%type <ast> expression expression_list numeric_expr_list
%type <ast> type_variable
%type <ast> variable variable_list assignment assignment_list proc_variable_list
%type <ast> global local dim_variable dim_2d_variable dim_variable_list
%type <ast> type end_type field
%type <ast> function
%type <ast> print_expression print_expression_list input_expression input_expression_list
%type <ast> when when_list

%left OR EOR
%left AND
%left E GE LE NE '<' '>'
%left '+' '-'
%left '*' '/' MOD DIV INTEGERDIVIDE
%left SHL SHR
%left NOT
%left NEG  /* negation--unary minus */

%start pibasic

%%
pibasic:                 statement_list { final = $1; };

line_number:             LINE_NUMBER { yylineno = $1; $$ = new_line_number_ast($1); };

statement_list:          TERM { $$ = NULL; }
                       | statement TERM { $$ = new_ast($1, NULL); }
                       | statement TERM statement_list { $$ = new_ast($1, $3); }
                       | line_number statement_list { $$ = new_ast($1, $2); }

statement:               global
                       | local
                       | function
                       | GOSUB LITERAL_INT { $$ = new_token_ast(Token::Gosub, new_int_ast($2), NULL); } 
                       | GOTO LITERAL_INT { $$ = new_token_ast(Token::Goto, new_int_ast($2), NULL); } 
                       | PROCEDURE { $$ = new_token_ast(Token::FunctionCall, new_variable_ast($1, Type::None), NULL); } 
                       | PROCEDURE '(' expression_list ')' { $$ = new_token_ast(Token::FunctionCall, new_variable_ast($1, Type::None), $3); } 
                       | RETURNVALUE expression { $$ = new_token_ast(Token::ReturnValue, $2, NULL); }
                       | RETURN { $$ = new_token_ast(Token::Return, NULL, NULL); }
                       | type
                       | end_type
                       | field
                       
                       /* Standard tokens */
                       | DATA expression_list { $$ = new_token_ast(Token::Data, $2, NULL); }
                       | DIM dim_variable_list { $$ = new_token_ast(Token::Dim, $2, NULL); }
                       | LOCAL DIM dim_variable_list { $$ = new_token_ast(Token::LocalDim, $3, NULL); }
                       | END { $$ = new_token_ast(Token::End, NULL, NULL); }

                       | CASE variable OF when_list END_CASE { $$ = new_token_ast(Token::Case, $2, $4);  }
                       | IF expression statement_list ELSE statement_list END_IF { $$ =     new_token_ast(Token::If, $2, new_ast($3, $5)); }
                       | IF expression statement_list END_IF { $$ = new_token_ast(Token::If, $2, new_ast($3, NULL)); }
                       | IF expression THEN statement ELSE statement { $$ = new_token_ast(Token::If, $2, new_ast($4, $6)); }
                       | IF expression THEN statement { $$ = new_token_ast(Token::If, $2, new_ast($4, NULL)); }

                       | FOR INTEGER_VARIABLE E numeric_expression TO numeric_expression statement_list NEXT 
                            { $$ = new_token_ast(Token::For, new_assignment_ast(new_variable_ast($2, Type::Integer), $4), new_ast($6, $7)); }
                       | FOR VARIABLE E numeric_expression TO numeric_expression statement_list NEXT 
                            { $$ = new_token_ast(Token::For, new_assignment_ast(new_variable_ast($2, Type::Float), $4), new_ast($6, $7)); }
                       | FOR INTEGER_VARIABLE E numeric_expression TO numeric_expression STEP numeric_expression statement_list NEXT 
                            { $$ = new_token_ast(Token::ForStep, new_assignment_ast(new_variable_ast($2, Type::Integer), $4), 
                                new_ast($6, new_ast($8, $9))); }
                       | FOR VARIABLE E numeric_expression TO numeric_expression STEP numeric_expression 
                            statement_list NEXT { $$ = new_token_ast(Token::ForStep, new_assignment_ast(new_variable_ast($2, Type::Float), $4), 
                                new_ast($6, new_ast($8, $9))); }

                       | INKEY '(' numeric_expression ')' { $$ = new_token_ast(Token::SInkey, $3, NULL); } 
                       | INKEYS '(' numeric_expression ')' { $$ = new_token_ast(Token::SInkeys, $3, NULL); } 
                       | OSCLI string_expression { $$ = new_token_ast(Token::Oscli, $2, NULL); }
                       | INPUT input_expression_list { $$ = new_token_ast(Token::Input, $2, NULL); }
                       | INPUT LITERAL_STRING input_expression_list { $$ = new_token_ast(Token::InputNoQuestionMark, new_string_ast($2), $3); }
                       | INPUT LITERAL_STRING ',' input_expression_list { $$ = new_token_ast(Token::Input, new_string_ast($2), $4); }
                       | PRINT { $$ = new_token_ast(Token::Print, NULL, NULL); }
                       | PRINT print_expression { $$ = new_token_ast(Token::Print, $2, NULL); }
                       | PRINT print_expression ';' { $$ = new_token_ast(Token::PrintN, $2, NULL); }
                       | PRINT print_expression_list { $$ = new_token_ast(Token::Print, $2, NULL); }
                       | PRINT print_expression_list DOUBLESEMI { $$ = new_token_ast(Token::PrintN, $2, NULL); }
                       | TEXT numeric_expression ',' numeric_expression ',' numeric_expression ',' string_expression { $$ = new_token_ast(Token::Text, new_ast($2, $4), new_ast($6, $8)); }
                       | TEXTRIGHT numeric_expression ',' numeric_expression ',' numeric_expression ',' string_expression { $$ = new_token_ast(Token::TextRight, new_ast($2, $4), new_ast($6, $8)); }
                       | TEXTCENTRE numeric_expression ',' numeric_expression ',' numeric_expression ',' string_expression { $$ = new_token_ast(Token::TextCentre, new_ast($2, $4), new_ast($6, $8)); }
                       | READ variable_list { $$ = new_token_ast(Token::Read, $2, NULL); }
                       | REPEAT { $$ = new_token_ast(Token::Repeat, NULL, NULL); };
                       | UNTIL expression { $$ = new_token_ast(Token::Until, $2, NULL); }
                       | RESTORE { $$ = new_token_ast(Token::Restore, NULL, NULL); }
                       | STAR numeric_expr_list { $$ = new_star_command_ast(new_string_ast($1), $2); }
                       | WHILE expression statement_list END_WHILE { $$ = new_token_ast(Token::While, $2, $3); }
                       | TRACEON { $$ = new_token_ast(Token::TraceOn, NULL, NULL); }
                       | TRACEOFF { $$ = new_token_ast(Token::TraceOff, NULL, NULL); }

                       /* File operations */
                       | BPUT numeric_expression ',' numeric_expression { $$ = new_token_ast(Token::BPut, $2, $4); }
                       | BGET numeric_expression { $$ = new_token_ast(Token::BGet, $2, NULL); }
                       | CLOSE numeric_expression { $$ = new_token_ast(Token::Close, $2, NULL); }

                       /* 3D stuff */
                       | PI3D_RENDERFRAME { $$ = new_token_ast(Token::RenderFrame, NULL, NULL); }
                       | PI3D_CREATEVERTEX TYPE_VARIABLE '(' numeric_expression ')' ','
                            numeric_expression ',' numeric_expression ',' numeric_expression ',' 
                            numeric_expression { $$ = new_token_ast(Token::CreateVertex, 
                                new_variable_with_index_ast($2, $4, Type::TypeArray), 
                                new_ast(new_ast($7, $9), new_ast($11, $13))); };
                       | PI3D_CREATETRIANGLE TYPE_VARIABLE '(' numeric_expression ')' ','
                            numeric_expression ',' numeric_expression ',' numeric_expression ',' 
                            numeric_expression { $$ = new_token_ast(Token::CreateTriangle,
                                new_variable_with_index_ast($2, $4, Type::TypeArray), 
                                new_ast(new_ast($7, $9), new_ast($11, $13))); };
                       | PI3D_TRANSLATE numeric_expression ',' numeric_expression ',' numeric_expression ',' numeric_expression
                            { $$ = new_token_ast(Token::ObjectTranslate, new_ast($2, $4), new_ast($6, $8)); }
                       | PI3D_ROTATE numeric_expression ',' numeric_expression ',' numeric_expression ',' numeric_expression
                            { $$ = new_token_ast(Token::ObjectRotate, new_ast($2, $4), new_ast($6, $8)); }
                       | PI3D_SCALE numeric_expression ',' numeric_expression
                            { $$ = new_token_ast(Token::ObjectScale, $2, $4); }

                       /* 2D Graphics */
                       | CLS { $$ = new_token_ast(Token::Cls, NULL, NULL); }
                       | COLOUR numeric_expression ',' numeric_expression ',' numeric_expression { $$ = new_token_ast(Token::ColourRGB, new_ast($2, $4), $6); }
                       | COLOUR numeric_expression { $$ = new_token_ast(Token::ColourHEX, $2, NULL); }
                       | COLOURBG numeric_expression ',' numeric_expression ',' numeric_expression { $$ = new_token_ast(Token::ColourBgRGB, new_ast($2, $4), $6); }
                       | COLOURBG numeric_expression { $$ = new_token_ast(Token::ColourBgHEX, $2, NULL); }
                       | FLIP { $$ = new_token_ast(Token::Flip, NULL, NULL); }
                       | GRAPHICS numeric_expression ',' numeric_expression ',' numeric_expression { $$ = new_token_ast(Token::Graphics, $2, new_ast($4, $6)); }
                       | CIRCLE
                            numeric_expression ',' numeric_expression ',' 
                            numeric_expression { $$ = new_token_ast(Token::Circle, new_ast($2, $4), $6); }
                       | CIRCLE FILL
                            numeric_expression ',' numeric_expression ',' 
                            numeric_expression { $$ = new_token_ast(Token::CircleFill, new_ast($3, $5), $7); }
                       | LINE 
                            numeric_expression ',' numeric_expression ',' 
                            numeric_expression ',' numeric_expression { $$ = new_token_ast(Token::Line, new_ast($2, $4), new_ast($6, $8)); }
                       | RECTANGLE 
                            numeric_expression ',' numeric_expression ',' 
                            numeric_expression ',' numeric_expression { $$ = new_token_ast(Token::Rectangle, new_ast($2, $4), new_ast($6, $8)); }
                       | RECTANGLE FILL 
                            numeric_expression ',' numeric_expression ',' 
                            numeric_expression ',' numeric_expression { $$ = new_token_ast(Token::RectangleFill, new_ast($3, $5), new_ast($7, $9)); }
                       | TRIANGLE 
                                numeric_expression ',' numeric_expression ',' 
                                numeric_expression ',' numeric_expression ',' 
                                numeric_expression ',' numeric_expression 
                                    { $$ = new_token_ast(Token::Triangle, new_ast(new_ast($2, $4), new_ast($6, $8)), new_ast($10, $12)); }
                       | TRIANGLE FILL 
                                numeric_expression ',' numeric_expression ',' 
                                numeric_expression ',' numeric_expression ',' 
                                numeric_expression ',' numeric_expression 
                                    { $$ = new_token_ast(Token::TriangleFill, new_ast(new_ast($3, $5), new_ast($7, $9)), new_ast($11, $13)); }
                       | TRIANGLE SHADED 
                                numeric_expression ',' numeric_expression ',' numeric_expression ',' 
                                numeric_expression ',' numeric_expression ',' numeric_expression ',' 
                                numeric_expression ',' numeric_expression ',' numeric_expression
                                    { $$ = new_token_ast(Token::TriangleShaded, 
                                        new_ast(new_ast(new_ast($3, $5), $7), new_ast(new_ast($9, $11), $13)),
                                        new_ast(new_ast($15, $17), $19)); }
                       | PLOT numeric_expression ',' numeric_expression { $$ = new_token_ast(Token::Plot, $2, $4); }
                       | CLIP 
                            numeric_expression ',' numeric_expression ',' 
                            numeric_expression ',' numeric_expression { $$ = new_token_ast(Token::Clip, new_ast($2, $4), new_ast($6, $8)); }
                       | CLIPOFF { $$ = new_token_ast(Token::ClipOff, NULL, NULL); }

type_variable:           TYPE_VARIABLE { $$ = new_variable_ast($1, Type::Type); }
                       | TYPE_VARIABLE '(' numeric_expression ')' { $$ = new_variable_with_index_ast($1, $3, Type::TypeArray); }

numeric_variable:        INTEGER_VARIABLE { $$ = new_variable_ast($1, Type::Integer); }
                       | INTEGER_VARIABLE '(' numeric_expression ')' { $$ = new_variable_with_index_ast($1, $3, Type::IntegerArray); }
                       | INTEGER_VARIABLE '(' numeric_expression ',' numeric_expression ')' { $$ = new_variable_with_index_ast($1, new_ast($3, $5), Type::IntegerArray); }
                       | VARIABLE { $$ = new_variable_ast($1, Type::Float); }
                       | VARIABLE '(' numeric_expression ')' { $$ = new_variable_with_index_ast($1, $3, Type::FloatArray); }
                       | VARIABLE '(' numeric_expression ',' numeric_expression ')' { $$ = new_variable_with_index_ast($1, new_ast($3, $5), Type::FloatArray); }
                       | TYPE_VARIABLE '(' numeric_expression ')' INTEGER_VARIABLE { $$ = new_type_variable_with_index_ast($1, $3, $5, Type::TypeArray); }
                       | TYPE_VARIABLE '(' numeric_expression ')' VARIABLE { $$ = new_type_variable_with_index_ast($1, $3, $5, Type::TypeArray); }

number:                  LITERAL_INT { $$ = new_int_ast($1); }
                       | '-' LITERAL_INT %prec NEG { $$ = new_int_ast(-$2); }
                       | LITERAL_FLOAT { $$ = new_float_ast($1); }
                       | '-' LITERAL_FLOAT %prec NEG { $$ = new_float_ast(-$2); };
numeric_expression:      number 
                       | numeric_variable
                       | '-' numeric_variable { $$ = new_expression_ast(new_float_ast(0.0), $2, Operator::Subtract); }
                       | TYPE_VARIABLE numeric_variable { $$ = new_fieldvariable_ast($1, Type::Type, $2); }
                       | numeric_expression '+' numeric_expression { $$ = new_expression_ast($1, $3, Operator::Plus); }
                       | numeric_expression '-' numeric_expression { $$ = new_expression_ast($1, $3, Operator::Subtract); }
                       | numeric_expression '*' numeric_expression { $$ = new_expression_ast($1, $3, Operator::Multiply); }
                       | numeric_expression '/' numeric_expression { $$ = new_expression_ast($1, $3, Operator::Divide); }
                       | numeric_expression INTEGERDIVIDE numeric_expression { $$ = new_expression_ast($1, $3, Operator::IntegerDivide); }
                       | numeric_expression DIV numeric_expression { $$ = new_expression_ast($1, $3, Operator::Div); }
                       | numeric_expression MOD numeric_expression { $$ = new_expression_ast($1, $3, Operator::Mod); }
                       | numeric_expression SHL numeric_expression { $$ = new_expression_ast($1, $3, Operator::ShiftLeft); }
                       | numeric_expression SHR numeric_expression { $$ = new_expression_ast($1, $3, Operator::ShiftRight); }

                       | INTEGER_FUNCTION { $$ = new_token_ast(Token::FunctionCall, new_variable_ast($1, Type::None), NULL); } 
                       | INTEGER_FUNCTION '(' expression_list ')' { $$ = new_token_ast(Token::FunctionCall, new_variable_ast($1, Type::None), $3); } 
                       | FLOAT_FUNCTION '(' expression_list ')' { $$ = new_token_ast(Token::FunctionCall, new_variable_ast($1, Type::None), $3); } 

                       | INKEY '(' numeric_expression ')' { $$ = new_token_ast(Token::Inkey, $3, NULL); } 

                       | COLOUR '(' numeric_expression ',' numeric_expression ',' numeric_expression ')' { $$ = new_token_ast(Token::ColourExpression, new_ast($3, $5), $7); }
                       | SCREENWIDTH { $$ = new_token_ast(Token::ScreenWidth, NULL, NULL); }
                       | SCREENHEIGHT { $$ = new_token_ast(Token::ScreenHeight, NULL, NULL); }
                       | LOADTYPEFACE string_expression { $$ = new_token_ast(Token::LoadTypeface, $2, NULL); }
                       | CREATEFONT numeric_expression ',' numeric_expression { $$ = new_token_ast(Token::CreateFont, $2, $4); }
                       | MONO10 { $$ = new_int_ast(0); }
                       | MONO15 { $$ = new_int_ast(1); }
                       | MONO20 { $$ = new_int_ast(2); }
                       | MONO25 { $$ = new_int_ast(3); }
                       | MONO30 { $$ = new_int_ast(4); }
                       | MONO40 { $$ = new_int_ast(5); }
                       | MONO50 { $$ = new_int_ast(6); }
                       | MONO75 { $$ = new_int_ast(7); }
                       | MONO100 { $$ = new_int_ast(8); }
                       | PROP10 { $$ = new_int_ast(9); }
                       | PROP15 { $$ = new_int_ast(10); }
                       | PROP20 { $$ = new_int_ast(11); }
                       | PROP25 { $$ = new_int_ast(12); }
                       | PROP30 { $$ = new_int_ast(13); }
                       | PROP40 { $$ = new_int_ast(14); }
                       | PROP50 { $$ = new_int_ast(15); }
                       | PROP75 { $$ = new_int_ast(16); }
                       | PROP100 { $$ = new_int_ast(17); }

                       | RND { $$ = new_token_ast(Token::Rnd, NULL, NULL); }
                       | RND '(' numeric_expression ')' { $$ = new_token_ast(Token::RndRange, $3, NULL); }

                       | PI3D_CREATESHAPE TYPE_VARIABLE ',' TYPE_VARIABLE { $$ = new_token_ast(Token::CreateShape, new_variable_ast($2, Type::Type), new_variable_ast($4, Type::Type)); }
                       | PI3D_CREATEOBJECT 
                            numeric_expression ',' 
                            numeric_expression ',' numeric_expression ',' numeric_expression ','
                            numeric_expression ',' numeric_expression ',' numeric_expression ','
                            numeric_expression ',' SOLID { $$ = new_token_ast(Token::CreateObjectSolid, 
                            new_ast($2, new_ast($4, new_ast($6, $8))),  
                            new_ast(new_ast($10, new_ast($12, $14)), $16)); } 
                       | PI3D_CREATEOBJECT 
                            numeric_expression ',' 
                            numeric_expression ',' numeric_expression ',' numeric_expression ','
                            numeric_expression ',' numeric_expression ',' numeric_expression ','
                            numeric_expression ',' WIREFRAME { $$ = new_token_ast(Token::CreateObjectWireframe, 
                            new_ast($2, new_ast($4, new_ast($6, $8))),  
                            new_ast(new_ast($10, new_ast($12, $14)), $16)); } 
                       | PI3D_CREATEOBJECT 
                            numeric_expression ',' 
                            numeric_expression ',' numeric_expression ',' numeric_expression ','
                            numeric_expression ',' numeric_expression ',' numeric_expression ','
                            numeric_expression ',' SHADED { $$ = new_token_ast(Token::CreateObjectShaded, 
                            new_ast($2, new_ast($4, new_ast($6, $8))),  
                            new_ast(new_ast($10, new_ast($12, $14)), $16)); } 
                       | PI3D_CREATEOBJECT 
                            numeric_expression ',' 
                            numeric_expression ',' numeric_expression ',' numeric_expression ','
                            numeric_expression ',' numeric_expression ',' numeric_expression ','
                            numeric_expression ',' EDGEDWIREFRAME { $$ = new_token_ast(Token::CreateObjectEdgedWireframe, 
                            new_ast($2, new_ast($4, new_ast($6, $8))),  
                            new_ast(new_ast($10, new_ast($12, $14)), $16)); }                             

                       | EOFH numeric_expression { $$ = new_token_ast(Token::Eof, $2, NULL); }
                       | BGET numeric_expression { $$ = new_token_ast(Token::BGet, $2, NULL); }
                       | OPENIN string_expression { $$ = new_token_ast(Token::OpenIn, $2, NULL); }
                       | OPENOUT string_expression { $$ = new_token_ast(Token::OpenOut, $2, NULL); }
                       | OPENUP string_expression { $$ = new_token_ast(Token::OpenUp, $2, NULL); }

                       | PI { $$ = new_token_ast(Token::Pi, NULL, NULL); }
                       | NOT numeric_expression { $$ = new_token_ast(Token::Not, $2, NULL); }
                       | SQR '(' numeric_expression ')' { $$ = new_token_ast(Token::Sqr, $3, NULL); }
                       | LN '(' numeric_expression ')' { $$ = new_token_ast(Token::Ln, $3, NULL); }
                       | LOG '(' numeric_expression ')' { $$ = new_token_ast(Token::Log, $3, NULL); }
                       | EXP '(' numeric_expression ')' { $$ = new_token_ast(Token::Exp, $3, NULL); }
                       | ATN '(' numeric_expression ')' { $$ = new_token_ast(Token::Atn, $3, NULL); }
                       | TAN '(' numeric_expression ')' { $$ = new_token_ast(Token::Tan, $3, NULL); }
                       | COS '(' numeric_expression ')' { $$ = new_token_ast(Token::Cos, $3, NULL); }
                       | SIN '(' numeric_expression ')' { $$ = new_token_ast(Token::Sin, $3, NULL); }
                       | ABS '(' numeric_expression ')' { $$ = new_token_ast(Token::Abs, $3, NULL); }
                       | ACS '(' numeric_expression ')' { $$ = new_token_ast(Token::Acs, $3, NULL); }
                       | ASN '(' numeric_expression ')' { $$ = new_token_ast(Token::Asn, $3, NULL); }
                       | DEG '(' numeric_expression ')' { $$ = new_token_ast(Token::Deg, $3, NULL); }
                       | RAD '(' numeric_expression ')' { $$ = new_token_ast(Token::Rad, $3, NULL); }
                       | SGN '(' numeric_expression ')' { $$ = new_token_ast(Token::Sgn, $3, NULL); }

                       | TIME { $$ = new_token_ast(Token::Time, NULL, NULL); };
                       | FALSE { $$ = new_token_ast(Token::False, NULL, NULL); }
                       | TRUE { $$ = new_token_ast(Token::True, NULL, NULL); }
                       
                       | ASC '(' string_expression ')' { $$ = new_token_ast(Token::Asc, $3, NULL); }
                       | LEN '(' string_expression ')' { $$ = new_token_ast(Token::Len, $3, NULL); }
                       | INSTR '(' string_expression ',' string_expression ')' { $$ = new_token_ast(Token::Instr, $3, new_ast($5, new_int_ast(1))); }
                       | INSTR '(' string_expression ',' string_expression ',' numeric_expression ')' { $$ = new_token_ast(Token::Instr, $3, new_ast($5, $7)); }
                       | VAL '(' string_expression ')' { $$ = new_token_ast(Token::Val, $3, NULL); }

                       | numeric_expression E numeric_expression { $$ = new_expression_ast($1, $3, Operator::Equal); }
                       | numeric_expression NE numeric_expression { $$ = new_expression_ast($1, $3, Operator::NotEqual); }
                       | numeric_expression GE numeric_expression { $$ = new_expression_ast($1, $3, Operator::GreaterEqual); }
                       | numeric_expression LE numeric_expression { $$ = new_expression_ast($1, $3, Operator::LessEqual); }
                       | numeric_expression '<' numeric_expression { $$ = new_expression_ast($1, $3, Operator::Less); }
                       | numeric_expression '>' numeric_expression { $$ = new_expression_ast($1, $3, Operator::Greater); }

                       | numeric_expression AND numeric_expression { $$ = new_expression_ast($1, $3, Operator::And); }
                       | numeric_expression OR numeric_expression { $$ = new_expression_ast($1, $3, Operator::Or); }
                       | numeric_expression EOR numeric_expression { $$ = new_expression_ast($1, $3, Operator::Eor); }

                       | FLOAT '(' numeric_expression ')' { $$ = new_token_ast(Token::Float, $3, NULL); };
                       | INT '(' numeric_expression ')' { $$ = new_token_ast(Token::Int, $3, NULL); };
                       | '(' numeric_expression ')' { $$ = new_expression_ast($2, NULL, Operator::None); };

string_variable:         STRING_VARIABLE { $$ = new_variable_ast($1, Type::String); }
                       | STRING_VARIABLE '(' numeric_expression ')' { $$ = new_variable_with_index_ast($1, $3, Type::StringArray); }
                       | STRING_VARIABLE '(' numeric_expression ',' numeric_expression ')' { $$ = new_variable_with_index_ast($1, new_ast($3, $5), Type::StringArray); };
string:                  LITERAL_STRING { $$ = new_string_ast($1); }
string_expression:       string
                       | string_variable
                       | string_expression '+' string_expression { $$ = new_expression_ast($1, $3, Operator::Plus); }
                       | string_expression '-' string_expression { $$ = new_expression_ast($1, $3, Operator::Subtract); }
                       | string_expression '*' string_expression { $$ = new_expression_ast($1, $3, Operator::Multiply); }
                       | string_expression '/' string_expression { $$ = new_expression_ast($1, $3, Operator::Divide); }

                       | STRING_FUNCTION { $$ = new_token_ast(Token::FunctionCall, new_variable_ast($1, Type::None), NULL); } 
                       | STRING_FUNCTION '(' expression_list ')' { $$ = new_token_ast(Token::FunctionCall, new_variable_ast($1, Type::None), $3); } 

                       | INKEYS '(' numeric_expression ')' { $$ = new_token_ast(Token::Inkeys, $3, NULL); } 

                       | TIMES { $$ = new_token_ast(Token::Times, NULL, NULL); }
                       | STRS '(' numeric_expression ')' { $$ = new_token_ast(Token::Strs, $3, NULL); }
                       | STRS '~' '(' numeric_expression ')' { $$ = new_token_ast(Token::StrsHex, $4, NULL); }
                       | STRINGS '(' numeric_expression ',' string_expression ')' { $$ = new_token_ast(Token::Strings, $3, $5); }
                       | CHRS '(' numeric_expression ')' { $$ = new_token_ast(Token::Chrs, $3, NULL); }
                       | LEFTS '(' string_expression ',' numeric_expression ')' { $$ = new_token_ast(Token::Lefts, $3, $5); }
                       | MIDS '(' string_expression ',' numeric_expression ',' numeric_expression ')' { $$ = new_token_ast(Token::Mids, $3, new_ast($5, $7)); }
                       | RIGHTS '(' string_expression ',' numeric_expression ')' { $$ = new_token_ast(Token::Rights, $3, $5); }

                       | string_expression E string_expression { $$ = new_expression_ast($1, $3, Operator::Equal); }
                       | string_expression NE string_expression { $$ = new_expression_ast($1, $3, Operator::NotEqual); }
                       | string_expression GE string_expression { $$ = new_expression_ast($1, $3, Operator::GreaterEqual); }
                       | string_expression LE string_expression { $$ = new_expression_ast($1, $3, Operator::LessEqual); }
                       | string_expression '<' string_expression { $$ = new_expression_ast($1, $3, Operator::Less); }
                       | string_expression '>' string_expression { $$ = new_expression_ast($1, $3, Operator::Greater); }
                       
                       | '(' string_expression ')' { $$ = new_expression_ast($2, NULL, Operator::None); };

expression:              numeric_expression
                       | string_expression;
expression_list:       /* nothing */ { $$ = NULL; }
                       | expression { $$ = new_ast($1, NULL); }
                       | expression ',' expression_list { $$ = new_ast($1, $3); };
numeric_expr_list:       numeric_expression { $$ = new_ast($1, NULL); }
                       | numeric_expression ',' numeric_expr_list { $$ = new_ast($1, $3); };

variable:                numeric_variable
                       | string_variable;
variable_list:           /* nothing */ { $$ = NULL; }
                       | variable
                       | variable ',' variable_list { $$ = new_ast($1, $3); };   
proc_variable_list:    /* nothing */ { $$ = NULL; }
                       | variable
                       | RETURN variable { $$ = new_token_ast(Token::ReturnVariable, $2, NULL); }
                       | variable ',' proc_variable_list { $$ = new_ast($1, $3); }
                       | RETURN variable ',' proc_variable_list { $$ = new_ast(new_token_ast(Token::ReturnVariable, $2, NULL), $4); };   

assignment:              variable E expression { $$ = new_assignment_ast($1, $3); }
                       | type_variable E VARIABLE { $$ = new_assignment_ast($1, new_type_ast($3)); }
                       | type_variable variable E expression { $$ = new_assignment_ast($1, new_ast($2, $4)); };
assignment_list:         assignment
                       | assignment ',' assignment_list { $$ = new_ast($1, $3); };

global:                  GLOBAL assignment_list { $$ = new_token_ast(Token::Global, $2, NULL); }
                       | assignment_list { $$ = new_token_ast(Token::Global, $1, NULL); };
local:                   LOCAL assignment_list { $$ = new_token_ast(Token::Local, $2, NULL); };

type:                    TYPE VARIABLE { $$ = new_token_ast(Token::Type, new_variable_ast($2, Type::None), NULL); };
end_type:                END_TYPE { $$ = new_token_ast(Token::EndType, NULL, NULL); };
field:                   FIELD variable { $$ = new_token_ast(Token::Field, $2, NULL); };

when:                    WHEN expression_list statement { $$ = new_token_ast(Token::When, $2, $3); }
                       | OTHERWISE statement { $$ = new_token_ast(Token::Otherwise, $2, NULL); };
when_list:               when 
                       | when when_list { $$ = new_ast($1, $2); };

input_expression:        variable;
input_expression_list:   input_expression
                       | input_expression ',' input_expression_list { $$ = new_ast($1, $3); };   

print_expression:        expression
                       | '\'' print_expression { $$ = new_token_ast(Token::PrintNewLine, $2, NULL); }
                       | '~' { $$ = new_token_ast(Token::PrintHex, NULL, NULL); }
                       | SPC '(' numeric_expression ')' { $$ = new_token_ast(Token::PrintSpc, $3, NULL); };
print_expression_list:   print_expression 
                       | print_expression ',' print_expression_list { $$ = new_ast(new_token_ast(Token::PrintComma, NULL, NULL), new_ast($1, $3)); }
                       | print_expression ';' print_expression_list { $$ = new_ast(new_token_ast(Token::PrintSemiColon, NULL, NULL), new_ast($1, $3)); };

dim_variable:            INTEGER_VARIABLE '(' numeric_expression ')' { $$ = new_variable_with_index_ast($1, $3, Type::IntegerArray); }
                       | VARIABLE '(' numeric_expression ')' { $$ = new_variable_with_index_ast($1, $3, Type::FloatArray); }
                       | STRING_VARIABLE '(' numeric_expression ')' { $$ = new_variable_with_index_ast($1, $3, Type::StringArray); }
                       | TYPE_VARIABLE '(' numeric_expression ',' VARIABLE ')' { $$ = new_type_variable_with_index_ast($1, $3, $5, Type::TypeArray); };

dim_2d_variable:         INTEGER_VARIABLE '(' numeric_expression ',' numeric_expression ')' { $$ = new_variable_with_index_ast($1, new_ast($3, $5), Type::IntegerArray); }
                       | VARIABLE '(' numeric_expression ',' numeric_expression ')' { $$ = new_variable_with_index_ast($1, new_ast($3, $5), Type::FloatArray); }
                       | STRING_VARIABLE '(' numeric_expression ',' numeric_expression ')' { $$ = new_variable_with_index_ast($1, new_ast($3, $5), Type::StringArray); };

dim_variable_list:       dim_variable
                       | dim_2d_variable
                       | dim_variable ',' dim_variable_list { $$ = new_ast($1, $3); }
                       | dim_2d_variable ',' dim_variable_list { $$ = new_ast($1, $3); };
                       
function:                DEFINE PROCEDURE '(' proc_variable_list ')' statement_list END_PROCEDURE       { $$ = new_function_ast(Type::None, new_variable_ast($2, Type::None), new_ast($4, $6)); }
                       | DEFINE PROCEDURE statement_list END_PROCEDURE                                  { $$ = new_function_ast(Type::None, new_variable_ast($2, Type::None), new_ast(NULL, $3)); }
                       | DEFINE_PROCEDURE'(' proc_variable_list ')' statement_list END_PROCEDURE        { $$ = new_function_ast(Type::None, new_variable_ast($1, Type::None), new_ast($3, $5)); }
                       | DEFINE_PROCEDURE statement_list END_PROCEDURE                                  { $$ = new_function_ast(Type::None, new_variable_ast($1, Type::None), new_ast(NULL, $2)); }

function:                DEFINE PROCEDURE '(' variable_list ')' statement_list END_PROCEDURE            { $$ = new_function_ast(Type::None, new_variable_ast($2, Type::None), new_ast($4, $6)); }
                       | DEFINE PROCEDURE statement_list END_PROCEDURE                                  { $$ = new_function_ast(Type::None, new_variable_ast($2, Type::None), new_ast(NULL, $3)); }
                       | DEFINE_PROCEDURE'(' variable_list ')' statement_list END_PROCEDURE             { $$ = new_function_ast(Type::None, new_variable_ast($1, Type::None), new_ast($3, $5)); }
                       | DEFINE_PROCEDURE statement_list END_PROCEDURE                                  { $$ = new_function_ast(Type::None, new_variable_ast($1, Type::None), new_ast(NULL, $2)); }

                       | DEFINE INTEGER_FUNCTION '(' variable_list ')' statement_list END_FUNCTION      { $$ = new_function_ast(Type::Integer, new_variable_ast($2, Type::Integer), new_ast($4, $6)); }
                       | DEFINE INTEGER_FUNCTION statement_list END_FUNCTION                            { $$ = new_function_ast(Type::Integer, new_variable_ast($2, Type::Integer), new_ast(NULL, $3)); }
                       | DEFINE_INTEGER_FUNCTION '(' variable_list ')' statement_list END_FUNCTION      { $$ = new_function_ast(Type::Integer, new_variable_ast($1, Type::Integer), new_ast($3, $5)); }
                       | DEFINE_INTEGER_FUNCTION statement_list END_FUNCTION                            { $$ = new_function_ast(Type::Integer, new_variable_ast($1, Type::Integer), new_ast(NULL, $2)); }

                       | DEFINE FLOAT_FUNCTION '(' variable_list ')' statement_list END_FUNCTION        { $$ = new_function_ast(Type::Float, new_variable_ast($2, Type::Integer), new_ast($4, $6)); }
                       | DEFINE FLOAT_FUNCTION statement_list END_FUNCTION                              { $$ = new_function_ast(Type::Float, new_variable_ast($2, Type::Integer), new_ast(NULL, $3)); }
                       | DEFINE_FLOAT_FUNCTION '(' variable_list ')' statement_list END_FUNCTION        { $$ = new_function_ast(Type::Float, new_variable_ast($1, Type::Integer), new_ast($3, $5)); }
                       | DEFINE_FLOAT_FUNCTION statement_list END_FUNCTION                              { $$ = new_function_ast(Type::Float, new_variable_ast($1, Type::Integer), new_ast(NULL, $2)); }

                       | DEFINE STRING_FUNCTION '(' variable_list ')' statement_list END_FUNCTION       { $$ = new_function_ast(Type::String, new_variable_ast($2, Type::Integer), new_ast($4, $6)); }
                       | DEFINE STRING_FUNCTION statement_list END_FUNCTION                             { $$ = new_function_ast(Type::String, new_variable_ast($2, Type::Integer), new_ast(NULL, $3)); }
                       | DEFINE_STRING_FUNCTION '(' variable_list ')' statement_list END_FUNCTION       { $$ = new_function_ast(Type::String, new_variable_ast($1, Type::Integer), new_ast($3, $5)); };
                       | DEFINE_STRING_FUNCTION statement_list END_FUNCTION                             { $$ = new_function_ast(Type::String, new_variable_ast($1, Type::Integer), new_ast(NULL, $2)); };

%%

struct ast *parse(const char *filename) {
#if defined(_WIN32) || defined(WIN32)
    errno_t err = fopen_s(&yyin, filename, "r");
#else
    yyin = fopen(filename, "r");
#endif

    if (!yyin) {
        std::cout << "Error opening source file '" << filename << "'" << std::endl;
        exit(0);
    }
    file = filename;
    files_index.insert(std::pair<std::string, int>(file, yyfileno));
    yyparse();
    fclose(yyin);
    yylex_destroy();
    return final;
}

void yyerror(const char *e) {
    std::cout << "Parsing error: " << e << " at line " << yylineno << " of file '" << file << "'" << std::endl;
    exit(1);
}
