%{
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <map>
#include <vector>
#include <stdio.h>
#include "ast.h"

AST *final = nullptr;
extern int yylex();
extern FILE *yyin;
extern int yyfileno;
extern int yylineno;
extern std::string file;
extern std::map<std::string, int> files_index;
std::map<int, std::list<AST *>> ast_lines;
void yyerror(const char *e);
int yylex_destroy(void);
%}

%locations

%union {
    int v_int;
    double v_real;
    const char *v_string;
    struct AST *ast;
}

%token <v_int> LINE_NUMBER LITERAL_INT
%token <v_real> LITERAL_REAL
%token <v_string> LITERAL_STRING INTEGER_VARIABLE VARIABLE STRING_VARIABLE TYPE_VARIABLE
%token <v_string> DEFINE_PROCEDURE DEFINE_INTEGER_FUNCTION DEFINE_STRING_FUNCTION DEFINE_REAL_FUNCTION 
%token <v_string> PROCEDURE INTEGER_FUNCTION REAL_FUNCTION STRING_FUNCTION
%token NL SS SEMICOLON COMMA
%token INTEGER_DIVIDE
%token E LE GE NE SHL SHR LT GT PLUS MINUS MULTIPLY DIVIDE TILDE TICK
%token SHL_E SHR_E PLUS_E MINUS_E MULTIPLY_E DIVIDE_E INTEGERDIVIDE_E
%token SWAP SWAP_I SWAP_F SWAP_S
%token END_FN END_PROC RETURN RETURN_WITH_VALUE DEFPROC DEFFN CALLPROC CALLFN RETURN_PARAMETER
%token BGET BPUT CLOSE EOFH OPENIN OPENUP OPENOUT PTR PTRA GETSH LISTFILES
%token CASE ELSE END_CASE END_IF END_WHILE FOR GOSUB GOTO IF NEXT OF OTHERWISE REPEAT STEP THEN TO UNTIL WHEN WHILE IN_ FORIN
%token DATA READ RESTORE
%token ARRAYSIZE DIM LOCALDIM END_TYPE FIELD GLOBAL LOCAL TYPE_
%token END TRACEON TRACEOFF BREAKPOINT
%token RND RND0 RND1 RNDREAL RNDRANGE FLOAT_ INT_ ACS DIV MOD SQR LN LOG EXP ATN TAN COS SIN ASN ABS DEG RAD SGN VAL PI BOOLFALSE BOOLTRUE
%token ASC CHRS INSTR LEFTS MIDS RIGHTS LEN STRS STRSHEX STRINGS
%token OSCLI TIME TIMES
%token AND OR EOR NOT
%token CHAIN EXPECT

%token RED GREEN YELLOW BLUE MAGENTA CYAN WHITE BLACK
%token CLS CLG COLOUR COLOURBG COLOUREXP FLIP GRAPHICS BANKED FILL SHADED LINE PLOT POINT_ RECTANGLE RECTANGLEFILL TRIANGLE TRIANGLEFILL TRIANGLESHADED
%token CLIPON CLIPOFF CIRCLE CIRCLEFILL 
%token TEXT TEXTRIGHT TEXTCENTRE LOADTYPEFACE CREATEFONT
%token MONO15 MONO20 MONO25 MONO30 MONO35 MONO40 MONO50 MONO75 MONO100
%token PROP15 PROP20 PROP25 PROP30 PROP35 PROP40 PROP50 PROP75 PROP100
%token SCREENWIDTH SCREENHEIGHT 
%token SHOWFPS LASTPOS

%token INKEY INKEYS INPUT_ PRINT SPC SINKEY SINKEYS INPUT_NOQUESTIONMARK GET GETS GET_S GETS_S MOUSE

%token CREATEVERTEX CREATETRIANGLE CREATESHAPE CREATEOBJECT TRANSLATE ROTATE SCALE RENDERFRAME DELETEOBJECT
%token SOLID WIREFRAME FILLEDWIREFRAME

%left OR EOR
%left AND
%left E GE LE NE LT GT
%left PLUS MINUS
%left MULTIPLY DIVIDE MOD DIV INTEGERDIVIDE
%left SHL SHR
%left NOT
%left NEG  /* negation--unary minus */

%type <ast> daric lines line statements statement embed_lines
%type <ast> number expression_numeric
%type <ast> string expression_string
%type <ast> expression expression_list
%type <ast> assignment assignment_list assignment_single variable_integer variable_real variable_numeric variable_string 
%type <ast> variable variable_list type_variable dim_variable dim_variable_list plain_variable plain_variable_list
%type <ast> expression_print expression_print_list expression_input expression_input_list 
%type <ast> define_function proc_parameter proc_parameter_list fn_parameter fn_parameter_list
%type <ast> when_list when
%type <ast> type field field_list 

%start daric

%%
daric
    : lines { $$ = $1; }
    ;

lines
    : line { ast_lines[yyfileno].push_front($1); $$ = $1; } 
    | line lines { ast_lines[yyfileno].push_front($1); $$ = link($1, $2); } 
    ;

line
    : statements NL { $$ = $1; }
    | NL { $$ = NULL; }
    | LINE_NUMBER statements NL { $$ = link(linenumber($1), $2); } 

embed_lines
    : line { $$ = $1; } 
    | line embed_lines { $$ = link($1, $2); } 
    ;

statements
    : statement { $$ = $1; } 
    | statement SS statements { $$ = link($1, $3); } 

statement
    : assignment
    | define_function
    | type
    | CHAIN expression_string { $$ = token1(CHAIN, $2); }
    | CHAIN expression_string ',' plain_variable_list { $$ = token2(CHAIN, $2, $4); }
    | EXPECT plain_variable_list { $$ = token1(EXPECT, $2); }
    | END { $$ = token(END); }
    | PROCEDURE { $$ = token1(CALLPROC, string($1)); }
    | PROCEDURE '(' expression_list ')' { $$ = token2(CALLPROC, string($1), $3); }
    | INTEGER_FUNCTION '(' expression_list ')' { $$ = token2(CALLFN, string($1), $3); } 
    | REAL_FUNCTION '(' expression_list ')' { $$ = token2(CALLFN, string($1), $3); } 
    | STRING_FUNCTION '(' expression_list ')' { $$ = token2(CALLFN, string($1), $3); } 
    | DATA expression_list { $$ = token1(DATA, $2); }
    | READ variable_list { $$ = token1(READ, $2); }
    | RESTORE { $$ = token(RESTORE); }
    | RETURN { $$ = token(RETURN); }
    | RETURN expression { $$ = token1(RETURN_WITH_VALUE, $2); }
    | TRACEON { $$ = token(TRACEON); }
    | TRACEOFF { $$ = token(TRACEOFF); }
    | BREAKPOINT { $$ = token(BREAKPOINT); }

    | DIM dim_variable_list { $$ = token1(DIM, $2); }
    | LOCAL DIM dim_variable_list { $$ = token1(LOCALDIM, $3); }

    | BPUT expression_numeric ',' expression_numeric { $$ = token2(BPUT, $2, $4); }
    | BGET expression_numeric { $$ = token1(BGET, $2); }
    | PTR expression_numeric E expression_numeric { $$ = token2(PTRA, $2, $4); }
    | CLOSE expression_numeric { $$ = token1(CLOSE, $2); }
    | STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')' { $$ = token3(LISTFILES, variable($1, Type::STRING_ARRAY), $7, token(GLOBAL)); }
    | LOCAL STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')' { $$ = token3(LISTFILES, variable($2, Type::STRING_ARRAY), $8, token(LOCAL)); }

    | OSCLI expression_string { $$ = token1(OSCLI, $2); }

    | GOSUB LITERAL_INT { $$ = token1(GOSUB, integer($2)); } 
    | GOTO LITERAL_INT { $$ = token1(GOTO, integer($2)); } 

    | INPUT_ expression_input_list { $$ = token1(INPUT_, $2); }
    | INPUT_ LITERAL_STRING expression_input_list { $$ = token2(INPUT_NOQUESTIONMARK, string($2), $3); }
    | INPUT_ LITERAL_STRING ',' expression_input_list { $$ = token2(INPUT_, string($2), $4); }
    | MOUSE INTEGER_VARIABLE ',' INTEGER_VARIABLE ',' INTEGER_VARIABLE { $$ = token3(MOUSE, string($2), string($4), string($6) ); }

    | INKEY '(' expression_numeric ')' { $$ = token1(SINKEY, $3); } 
    | INKEYS '(' expression_numeric ')' { $$ = token1(SINKEYS, $3); } 
    | GET { $$ = token(GET_S); } 
    | GETS { $$ = token(GETS_S); } 

    | IF expression statements { $$ = token2(IF, $2, $3); }
    | IF expression statement ELSE statement { $$ = token3(IF, $2, $3, $5); }
    | IF expression NL embed_lines END_IF { $$ = token2(IF, $2, $4); }
    | IF expression NL embed_lines ELSE NL embed_lines END_IF { $$ = token3(IF, $2, $4, $7); }
    /* with optional THEN */
    | IF expression THEN statements { $$ = token2(IF, $2, $4); }
    | IF expression THEN statements ELSE statements { $$ = token3(IF, $2, $4, $6); }
    | IF expression THEN NL embed_lines END_IF { $$ = token2(IF, $2, $5); }
    | IF expression THEN NL embed_lines ELSE NL embed_lines END_IF { $$ = token3(IF, $2, $5, $8); }

    | REPEAT NL embed_lines UNTIL expression { $$ = token2(REPEAT, $3, $5); };
    | REPEAT UNTIL expression { $$ = token2(REPEAT, NULL, $3); };
    | WHILE expression NL embed_lines END_WHILE { $$ = token2(WHILE, $2, $4); }

    | SWAP INTEGER_VARIABLE ',' INTEGER_VARIABLE { $$ = token2(SWAP_I, string($2), string($4)); }
    | SWAP VARIABLE ',' VARIABLE { $$ = token2(SWAP_F, string($2), string($4)); }
    | SWAP STRING_VARIABLE ',' STRING_VARIABLE  { $$ = token2(SWAP_S, string($2), string($4)); }

    /* FOR IN */
    | FOR VARIABLE                  IN_ VARIABLE '(' ')'         NL embed_lines  NEXT { $$ = token4typed(FORIN, string($2), string($4), $8, token(GLOBAL), Type::REAL); }
    | FOR INTEGER_VARIABLE          IN_ INTEGER_VARIABLE '(' ')' NL embed_lines  NEXT { $$ = token4typed(FORIN, string($2), string($4), $8, token(GLOBAL), Type::INTEGER); }
    | FOR STRING_VARIABLE           IN_ STRING_VARIABLE '(' ')'  NL embed_lines  NEXT { $$ = token4typed(FORIN, string($2), string($4), $8, token(GLOBAL), Type::STRING); }
    | FOR VARIABLE                  IN_ VARIABLE '(' ')'         statements      NEXT { $$ = token4typed(FORIN, string($2), string($4), $7, token(GLOBAL), Type::REAL); }
    | FOR INTEGER_VARIABLE          IN_ INTEGER_VARIABLE '(' ')' statements      NEXT { $$ = token4typed(FORIN, string($2), string($4), $7, token(GLOBAL), Type::INTEGER); }
    | FOR STRING_VARIABLE           IN_ STRING_VARIABLE '(' ')'  statements      NEXT { $$ = token4typed(FORIN, string($2), string($4), $7, token(GLOBAL), Type::STRING); }
    | FOR LOCAL VARIABLE            IN_ VARIABLE '(' ')'         NL embed_lines  NEXT { $$ = token4typed(FORIN, string($3), string($5), $9, token(LOCAL), Type::REAL); }
    | FOR LOCAL INTEGER_VARIABLE    IN_ INTEGER_VARIABLE '(' ')' NL embed_lines  NEXT { $$ = token4typed(FORIN, string($3), string($5), $9, token(LOCAL), Type::INTEGER); }
    | FOR LOCAL STRING_VARIABLE     IN_ STRING_VARIABLE '(' ')'  NL embed_lines  NEXT { $$ = token4typed(FORIN, string($3), string($5), $9, token(LOCAL), Type::STRING); }
    | FOR LOCAL VARIABLE            IN_ VARIABLE '(' ')'         statements      NEXT { $$ = token4typed(FORIN, string($3), string($5), $8, token(LOCAL), Type::REAL); }
    | FOR LOCAL INTEGER_VARIABLE    IN_ INTEGER_VARIABLE '(' ')' statements      NEXT { $$ = token4typed(FORIN, string($3), string($5), $8, token(LOCAL), Type::INTEGER); }
    | FOR LOCAL STRING_VARIABLE     IN_ STRING_VARIABLE '(' ')'  statements      NEXT { $$ = token4typed(FORIN, string($3), string($5), $8, token(LOCAL), Type::STRING); }

    /* Variants: single & multiple lines, STEP/no STEP and INT/FLOAT, and also LOCAL and GLOBAL */
    | FOR INTEGER_VARIABLE          E expression_numeric TO expression_numeric NL embed_lines                           NEXT { $$ = token5typed(FOR, string($2), $4, $6, $8, token(GLOBAL), Type::INTEGER); }
    | FOR VARIABLE                  E expression_numeric TO expression_numeric NL embed_lines                           NEXT { $$ = token5typed(FOR, string($2), $4, $6, $8, token(GLOBAL), Type::REAL); }
    | FOR INTEGER_VARIABLE          E expression_numeric TO expression_numeric statements                               NEXT { $$ = token5typed(FOR, string($2), $4, $6, $7, token(GLOBAL), Type::INTEGER); }
    | FOR VARIABLE                  E expression_numeric TO expression_numeric statements                               NEXT { $$ = token5typed(FOR, string($2), $4, $6, $7, token(GLOBAL), Type::REAL); }
    | FOR INTEGER_VARIABLE          E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines   NEXT { $$ = token6typed(FOR, string($2), $4, $6, $8, $10, token(GLOBAL), Type::INTEGER); }
    | FOR VARIABLE                  E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines   NEXT { $$ = token6typed(FOR, string($2), $4, $6, $8, $10, token(GLOBAL), Type::REAL); }
    | FOR INTEGER_VARIABLE          E expression_numeric TO expression_numeric STEP expression_numeric statements       NEXT { $$ = token6typed(FOR, string($2), $4, $6, $8, $9, token(GLOBAL), Type::INTEGER); }
    | FOR VARIABLE                  E expression_numeric TO expression_numeric STEP expression_numeric statements       NEXT { $$ = token6typed(FOR, string($2), $4, $6, $8, $9, token(GLOBAL), Type::REAL); }
    | FOR LOCAL INTEGER_VARIABLE    E expression_numeric TO expression_numeric NL embed_lines                           NEXT { $$ = token5typed(FOR, string($3), $5, $7, $9, token(LOCAL), Type::INTEGER); }
    | FOR LOCAL VARIABLE            E expression_numeric TO expression_numeric NL embed_lines                           NEXT { $$ = token5typed(FOR, string($3), $5, $7, $9, token(LOCAL), Type::REAL); }
    | FOR LOCAL INTEGER_VARIABLE    E expression_numeric TO expression_numeric statements                               NEXT { $$ = token5typed(FOR, string($3), $5, $7, $8, token(LOCAL), Type::INTEGER); }
    | FOR LOCAL VARIABLE            E expression_numeric TO expression_numeric statements                               NEXT { $$ = token5typed(FOR, string($3), $5, $7, $8, token(LOCAL), Type::REAL); }
    | FOR LOCAL INTEGER_VARIABLE    E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines   NEXT { $$ = token6typed(FOR, string($3), $5, $7, $9, $11, token(LOCAL), Type::INTEGER); }
    | FOR LOCAL VARIABLE            E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines   NEXT { $$ = token6typed(FOR, string($3), $5, $7, $9, $11, token(LOCAL), Type::REAL); }
    | FOR LOCAL INTEGER_VARIABLE    E expression_numeric TO expression_numeric STEP expression_numeric statements       NEXT { $$ = token6typed(FOR, string($3), $5, $7, $9, $10, token(LOCAL), Type::INTEGER); }
    | FOR LOCAL VARIABLE            E expression_numeric TO expression_numeric STEP expression_numeric statements       NEXT { $$ = token6typed(FOR, string($3), $5, $7, $9, $10, token(LOCAL), Type::REAL); }

    | CASE expression OF NL when_list END_CASE { $$ = token2(CASE, $2, $5);  }
    | CASE expression OF NL when_list OTHERWISE statement NL END_CASE { $$ = token3(CASE, $2, $5, $7);  }

    | PRINT { $$ = token(PRINT); }
    | PRINT expression_print_list { $$ = token1(PRINT, $2); }

    | RENDERFRAME { $$ = token(RENDERFRAME); }
    | CREATEVERTEX TYPE_VARIABLE '(' expression_numeric ')' ',' 
            expression_numeric ',' expression_numeric ',' 
            expression_numeric ',' expression_numeric { $$ = token6(CREATEVERTEX, string($2), $4, $7, $9, $11, $13); }
    | CREATETRIANGLE TYPE_VARIABLE '(' expression_numeric ')' ','
        expression_numeric ',' expression_numeric ',' 
        expression_numeric ',' expression_numeric { $$ = token6(CREATETRIANGLE, string($2), $4, $7, $9, $11, $13); }
    | TRANSLATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric { $$ = token4(TRANSLATE, $2, $4, $6, $8); }
    | ROTATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  { $$ = token4(ROTATE, $2, $4, $6, $8); }
    | SCALE expression_numeric ',' expression_numeric { $$ = token2(SCALE, $2, $4); }
    | DELETEOBJECT expression_numeric { $$ = token1(DELETEOBJECT, $2); }

    | CLS { $$ = token(CLS); } 
    | COLOUR expression_numeric { $$ = token1(COLOUR, $2); } 
    | COLOUR expression_numeric ',' expression_numeric ',' expression_numeric { $$ = token3(COLOUR, $2, $4, $6); } 
    | COLOURBG expression_numeric { $$ = token1(COLOURBG, $2); } 
    | COLOURBG expression_numeric ',' expression_numeric ',' expression_numeric { $$ = token3(COLOURBG, $2, $4, $6); } 
    | GRAPHICS expression_numeric ',' expression_numeric { $$ = token2(GRAPHICS, $2, $4); } 
    | GRAPHICS BANKED expression_numeric ',' expression_numeric { $$ = token2(BANKED, $3, $5); } 
    | GRAPHICS { $$ = token(GRAPHICS); } 
    | GRAPHICS BANKED { $$ = token(BANKED); } 
    | FLIP { $$ = token(FLIP); }
    | CIRCLE expression_numeric ',' expression_numeric ',' expression_numeric { $$ = token3(CIRCLE, $2, $4, $6); }
    | CIRCLE FILL expression_numeric ',' expression_numeric ',' expression_numeric { $$ = token3(CIRCLEFILL, $3, $5, $7); }
    | LINE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric { $$ = token4(LINE, $2, $4, $6, $8); }
    | RECTANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric { $$ = token4(RECTANGLE, $2, $4, $6, $8); }
    | RECTANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric { $$ = token4(RECTANGLEFILL, $3, $5, $7, $9); }
    | TRIANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric { $$ = token6(TRIANGLE, $2, $4, $6, $8, $10, $12); }
    | TRIANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric { $$ = token6(TRIANGLEFILL, $3, $5, $7, $9, $11, $13); }
    | TRIANGLE SHADED   expression_numeric ',' expression_numeric ',' expression_numeric ',' 
                        expression_numeric ',' expression_numeric ',' expression_numeric ',' 
                        expression_numeric ',' expression_numeric ',' expression_numeric { $$ = token9(TRIANGLESHADED, $3, $5, $7, $9, $11, $13, $15, $17, $19); }
    | PLOT expression_numeric ',' expression_numeric { $$ = token2(PLOT, $2, $4); }
    | CLIPON expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric { $$ = token4(CLIPON, $2, $4, $6, $8); }
    | CLIPOFF { $$ = token(CLIPOFF); }    
    | TEXT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string { $$ = token4(TEXT, $2, $4, $6, $8); }
    | TEXTRIGHT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string { $$ = token4(TEXTRIGHT, $2, $4, $6, $8); }
    | TEXTCENTRE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string { $$ = token4(TEXTCENTRE, $2, $4, $6, $8); }
    | SHOWFPS { $$ = token(SHOWFPS); }
    ;

number
    : LITERAL_INT { $$ = integer($1); }
    | MINUS LITERAL_INT %prec NEG { $$ = integer(-$2); }
    | LITERAL_REAL { $$ = real($1); }
    | MINUS LITERAL_REAL %prec NEG { $$ = real(-$2); }
    ;

expression_numeric
    : number { $$ = $1; }
    | variable_integer { $$ = $1; }
    | variable_real { $$ = $1; }
    | '(' expression_numeric ')' { $$ = $2; }
    | FLOAT_ '(' expression_numeric ')' { $$ = token1(FLOAT_, $3); };
    | INT_ '(' expression_numeric ')' { $$ = token1(INT_, $3); };
    | MINUS variable_integer { $$ = token2(MINUS, integer(0), $2); }
    | MINUS variable_real { $$ = token2(MINUS, real(0.0), $2); }
    | expression_numeric PLUS expression_numeric { $$ = token2(PLUS, $1, $3); }
    | expression_numeric MINUS expression_numeric { $$ = token2(MINUS, $1, $3); }
    | expression_numeric MULTIPLY expression_numeric { $$ = token2(MULTIPLY, $1, $3); }
    | expression_numeric DIVIDE expression_numeric { $$ = token2(DIVIDE, $1, $3); }
    | expression_numeric INTEGER_DIVIDE expression_numeric { $$ = token2(INTEGERDIVIDE, $1, $3); }
    | expression_numeric DIV expression_numeric { $$ = token2(DIV, $1, $3); }
    | expression_numeric MOD expression_numeric { $$ = token2(MOD, $1, $3); }
    | expression_numeric SHL expression_numeric { $$ = token2(SHL, $1, $3); }
    | expression_numeric SHR expression_numeric { $$ = token2(SHR, $1, $3); }
    | expression_numeric E expression_numeric { $$ = token2(E, $1, $3); }
    | expression_numeric NE expression_numeric { $$ = token2(NE, $1, $3); }
    | expression_numeric GE expression_numeric { $$ = token2(GE, $1, $3); }
    | expression_numeric LE expression_numeric { $$ = token2(LE, $1, $3); }
    | expression_numeric LT expression_numeric { $$ = token2(LT, $1, $3); }
    | expression_numeric GT expression_numeric { $$ = token2(GT, $1, $3); }
    | expression_numeric AND expression_numeric { $$ = token2(AND, $1, $3); }
    | expression_numeric OR expression_numeric { $$ = token2(OR, $1, $3); }
    | expression_numeric EOR expression_numeric { $$ = token2(EOR, $1, $3); }

    | INTEGER_FUNCTION '(' expression_list ')' { $$ = token2(CALLFN, string($1), $3); } 
    | REAL_FUNCTION '(' expression_list ')' { $$ = token2(CALLFN, string($1), $3); } 

    | DIM '(' VARIABLE '(' ')' ',' number ')' { $$ = token2(ARRAYSIZE, variable($3, Type::REAL), $7); }
    | DIM '(' INTEGER_VARIABLE '(' ')' ',' number ')' { $$ = token2(ARRAYSIZE, variable($3, Type::INTEGER), $7); }
    | DIM '(' STRING_VARIABLE '(' ')' ',' number ')' { $$ = token2(ARRAYSIZE, variable($3, Type::STRING), $7); }

    | PTR expression_numeric { $$ = token1(PTR, $2); }

    | GET { $$ = token(GET); } 
    | INKEY '(' expression_numeric ')' { $$ = token1(INKEY, $3); } 

    | BOOLTRUE { $$ = integer(1); }
    | BOOLFALSE { $$ = integer(0); }
    | TIME { $$ = token(TIME); };

    | SOLID             { $$ = integer(0); }
    | WIREFRAME         { $$ = integer(1); }
    | SHADED            { $$ = integer(2); }
    | FILLEDWIREFRAME   { $$ = integer(3); }

    | CREATESHAPE TYPE_VARIABLE ',' TYPE_VARIABLE { $$ = token2(CREATESHAPE, string($2), string($4)); }
    | CREATEOBJECT 
        expression_numeric ',' 
        expression_numeric ',' expression_numeric ',' expression_numeric ','
        expression_numeric ',' expression_numeric ',' expression_numeric ','
        expression_numeric ',' expression_numeric { $$ = token9(CREATEOBJECT, $2, $4, $6, $8, $10, $12, $14, $16, $18); }

    | RED       { $$ = integer(0xFF0000); }
    | GREEN     { $$ = integer(0x00FF00); }
    | YELLOW    { $$ = integer(0xFFFF00); }
    | BLUE      { $$ = integer(0x0000FF); }
    | MAGENTA   { $$ = integer(0xFF00FF); }
    | CYAN      { $$ = integer(0x00FFFF); }
    | WHITE     { $$ = integer(0xFFFFFF); }
    | BLACK     { $$ = integer(0); }
    | LASTPOS   { $$ = integer(-1); }
    | COLOUR '(' expression_numeric ',' expression_numeric ',' expression_numeric ')' { $$ = token3(COLOUREXP, $3, $5, $7); }
    | POINT_ '(' expression_numeric ',' expression_numeric ')' { $$ = token2(POINT_, $3, $5); }
    | SCREENWIDTH { $$ = token(SCREENWIDTH); }
    | SCREENHEIGHT { $$ = token(SCREENHEIGHT); }
    | LOADTYPEFACE expression_string { $$ = token1(LOADTYPEFACE, $2); }
    | CREATEFONT expression_numeric ',' expression_numeric { $$ = token2(CREATEFONT, $2, $4); }
    | MONO15 { $$ = integer(0); }
    | MONO20 { $$ = integer(1); }
    | MONO25 { $$ = integer(2); }
    | MONO30 { $$ = integer(3); }
    | MONO35 { $$ = integer(4); }
    | MONO40 { $$ = integer(5); }
    | MONO50 { $$ = integer(6); }
    | MONO75 { $$ = integer(7); }
    | MONO100 { $$ = integer(8); }
    | PROP15 { $$ = integer(9); }
    | PROP20 { $$ = integer(10); }
    | PROP25 { $$ = integer(11); }
    | PROP30 { $$ = integer(12); }
    | PROP35 { $$ = integer(13); }
    | PROP40 { $$ = integer(14); }
    | PROP50 { $$ = integer(15); }
    | PROP75 { $$ = integer(16); }
    | PROP100 { $$ = integer(17); }
    | EOFH expression_numeric { $$ = token1(EOFH, $2); }
    | BGET expression_numeric { $$ = token1(BGET, $2); }
    | OPENIN '(' expression_string ')' { $$ = token1(OPENIN, $3); }
    | OPENOUT '(' expression_string ')' { $$ = token1(OPENOUT, $3); }
    | OPENUP '(' expression_string ')' { $$ = token1(OPENUP, $3); }

    | RND { $$ = token(RND); }
    | RND0 { $$ = token1(RNDREAL, integer(0)); }
    | RND1 { $$ = token1(RNDREAL, integer(1)); }
    | RND '(' expression_numeric ')' { $$ = token1(RNDRANGE, $3); }

    | PI { $$ = token(PI); }
    | NOT expression_numeric { $$ = token1(NOT, $2); }
    | SQR '(' expression_numeric ')' { $$ = token1(SQR, $3); }
    | LN '(' expression_numeric ')' { $$ = token1(LN, $3); }
    | LOG '(' expression_numeric ')' { $$ = token1(LOG, $3); }
    | EXP '(' expression_numeric ')' { $$ = token1(EXP, $3); }
    | ATN '(' expression_numeric ')' { $$ = token1(ATN, $3); }
    | TAN '(' expression_numeric ')' { $$ = token1(TAN, $3); }
    | COS '(' expression_numeric ')' { $$ = token1(COS, $3); }
    | SIN '(' expression_numeric ')' { $$ = token1(SIN, $3); }
    | ABS '(' expression_numeric ')' { $$ = token1(ABS, $3); }
    | ACS '(' expression_numeric ')' { $$ = token1(ACS, $3); }
    | ASN '(' expression_numeric ')' { $$ = token1(ASN, $3); }
    | DEG '(' expression_numeric ')' { $$ = token1(DEG, $3); }
    | RAD '(' expression_numeric ')' { $$ = token1(RAD, $3); }
    | SGN '(' expression_numeric ')' { $$ = token1(SGN, $3); }

    | ASC '(' expression_string ')' { $$ = token1(ASC, $3); }
    | LEN '(' expression_string ')' { $$ = token1(LEN, $3); }
    | INSTR '(' expression_string ',' expression_string ')' { $$ = token3(INSTR, $3, $5, integer(1)); }
    | INSTR '(' expression_string ',' expression_string ',' expression_numeric ')' { $$ = token3(INSTR, $3, $5, $7); }
    | VAL '(' expression_string ')' { $$ = token1(VAL, $3); }
    ;

variable_integer
    : INTEGER_VARIABLE { $$ = variable($1, Type::INTEGER); }
    | INTEGER_VARIABLE '(' expression_numeric ')' { $$ = variable1d($1, $3, Type::INTEGER_ARRAY); }
    | INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')' { $$ = variable2d($1, $3, $5, Type::INTEGER_ARRAY); }
    | TYPE_VARIABLE INTEGER_VARIABLE { $$ = typevariable($1, $2, Type::TYPE); }
    | TYPE_VARIABLE '(' expression_numeric ')' INTEGER_VARIABLE { $$ = typevariable1d($1, $5, $3, Type::TYPE_ARRAY); }
    ;

variable_real
    : VARIABLE { $$ = variable($1, Type::REAL); }
    | VARIABLE '(' expression_numeric ')' { $$ = variable1d($1, $3, Type::REAL_ARRAY); }
    | VARIABLE '(' expression_numeric ',' expression_numeric ')' { $$ = variable2d($1, $3, $5, Type::REAL_ARRAY); }
    | TYPE_VARIABLE VARIABLE { $$ = typevariable($1, $2, Type::TYPE); }
    | TYPE_VARIABLE '(' expression_numeric ')' VARIABLE { $$ = typevariable1d($1, $5, $3, Type::TYPE_ARRAY); }
    ;

variable_numeric
    : variable_integer { $$ = $1; }
    | variable_real { $$ = $1; }
    ;

variable_string 
    : STRING_VARIABLE { $$ = variable($1, Type::STRING); }
    | STRING_VARIABLE '(' expression_numeric ')' { $$ = variable1d($1, $3, Type::STRING_ARRAY); }
    | STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')' { $$ = variable2d($1, $3, $5, Type::STRING_ARRAY); }
    | TYPE_VARIABLE '(' expression_numeric ')' STRING_VARIABLE { $$ = typevariable1d($1, $5, $3, Type::TYPE_ARRAY); }
    ;

variable
    : variable_numeric { $$ = $1; }
    | variable_string { $$ = $1; }
    ;

variable_list
    : variable { $$ = $1; }
    | variable ',' variable_list { $$ = link($1, $3); }
    ;

plain_variable
    : INTEGER_VARIABLE { $$ = variable($1, Type::INTEGER); }
    | VARIABLE { $$ = variable($1, Type::REAL); }
    | STRING_VARIABLE { $$ = variable($1, Type::STRING); }
    ;

plain_variable_list
    : plain_variable { $$ = $1; }
    | plain_variable ',' plain_variable_list { $$ = link($1, $3); }
    ;

dim_variable
    : INTEGER_VARIABLE '(' expression_numeric ')' { $$ = variable1d($1, $3, Type::INTEGER_ARRAY); }
    | INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')' { $$ = variable2d($1, $3, $5, Type::INTEGER_ARRAY); }
    | VARIABLE '(' expression_numeric ')' { $$ = variable1d($1, $3, Type::REAL_ARRAY); }
    | VARIABLE '(' expression_numeric ',' expression_numeric ')' { $$ = variable2d($1, $3, $5, Type::REAL_ARRAY); }
    | STRING_VARIABLE '(' expression_numeric ')' { $$ = variable1d($1, $3, Type::STRING_ARRAY); }
    | STRING_VARIABLE  '(' expression_numeric ',' expression_numeric ')' { $$ = variable2d($1, $3, $5, Type::STRING_ARRAY); }
    | TYPE_VARIABLE '(' expression_numeric ',' VARIABLE ')' { $$ = typevariable1d($1, $5, $3, Type::TYPE_ARRAY); }
    ;

dim_variable_list
    : dim_variable { $$ = $1; }
    | dim_variable ',' dim_variable_list { $$ = link($1, $3); }
    ;

type_variable
    : TYPE_VARIABLE { $$ = variable($1, Type::TYPE); }
    | TYPE_VARIABLE '(' expression_numeric ')' { $$ = variable1d($1, $3, Type::TYPE_ARRAY); } 
    ;

type
    : TYPE_ VARIABLE NL field_list END_TYPE { $$ = token2(TYPE_, string($2), $4); }
    ;

field
    : FIELD variable { $$ = token1(FIELD, $2); }
    ;

field_list
    : field NL{ $$ = $1; }
    | field NL field_list { $$ = link($1, $3); }
    ;

string
    : LITERAL_STRING { $$ = string($1); }
    ;

expression_string
    : string { $$ = $1; }
    | variable_string { $$ = $1; }
    | expression_string PLUS expression_string { $$ = token2(PLUS, $1, $3); }
    | expression_string E expression_string { $$ = token2(E, $1, $3); }
    | expression_string NE expression_string { $$ = token2(NE, $1, $3); }
    | expression_string GE expression_string { $$ = token2(GE, $1, $3); }
    | expression_string LE expression_string { $$ = token2(LE, $1, $3); }
    | expression_string LT expression_string { $$ = token2(LT, $1, $3); }
    | expression_string GT expression_string { $$ = token2(GT, $1, $3); }

    | GETSH expression_numeric { $$ = token1(GETSH, $2); }

    | STRING_FUNCTION '(' expression_list ')' { $$ = token2(CALLFN, string($1), $3); } 

    | GETS { $$ = token(GETS); } 
    | INKEYS '(' expression_numeric ')' { $$ = token1(INKEYS, $3); } 

    | TIMES { $$ = token(TIMES); }
    | STRS '(' expression_numeric ')' { $$ = token1(STRS, $3); }
    | STRS TILDE '(' expression_numeric ')' { $$ = token1(STRSHEX, $4); }
    | STRINGS '(' expression_numeric ',' expression_string ')' { $$ = token2(STRINGS, $3, $5); }
    | CHRS '(' expression_numeric ')' { $$ = token1(CHRS, $3); }
    | LEFTS '(' expression_string ',' expression_numeric ')' { $$ = token2(LEFTS, $3, $5); }
    | MIDS '(' expression_string ',' expression_numeric ',' expression_numeric ')' { $$ = token3(MIDS, $3, $5, $7); }
    | RIGHTS '(' expression_string ',' expression_numeric ')' { $$ = token2(RIGHTS, $3, $5); }
    ;

expression
    : expression_numeric { $$ = $1; }
    | expression_string { $$ = $1; }
    ;

expression_list
    : /* nothing */  { $$ = NULL; }
    | expression { $$ = $1; }
    | expression ',' expression_list { $$ = link($1, $3); }
    ;

assignment_single
    : variable_numeric E expression_numeric { $$ = assignment($1, $3); }
    | variable_string E expression_string { $$ = assignment($1, $3); }
    | type_variable E expression { $$ = assignment($1, $3); }
    | type_variable variable E expression { $$ = assignment(link($1, $2), $4); }
    ;

assignment_list
    : assignment_single { $$ = $1; }
    | assignment_single ',' assignment_list { $$ = link($1, $3); } 
    ;

assignment
    : assignment_list { $$ = $1; }
    | LOCAL assignment_list { $$ = token1(LOCAL, $2); }
    | GLOBAL assignment_list { $$ = token1(GLOBAL, $2); }
    | variable_numeric SHL_E expression_numeric { $$ = assignment($1, token2(SHL, $1, $3)); }
    | variable_numeric SHR_E expression_numeric { $$ = assignment($1, token2(SHR, $1, $3)); }
    | variable_numeric PLUS_E expression_numeric { $$ = assignment($1, token2(PLUS, $1, $3)); }
    | variable_numeric MINUS_E expression_numeric { $$ = assignment($1, token2(MINUS, $1, $3)); }
    | variable_numeric MULTIPLY_E expression_numeric { $$ = assignment($1, token2(MULTIPLY, $1, $3)); }
    | variable_numeric DIVIDE_E expression_numeric { $$ = assignment($1, token2(DIVIDE, $1, $3)); }
    | variable_numeric INTEGERDIVIDE_E expression_numeric { $$ = assignment($1, token2(INTEGERDIVIDE, $1, $3)); }
    ;

expression_print
    : expression_string { $$ = $1; }
    | expression_numeric { $$ = $1; }
    | ',' { $$ = token(COMMA); }
    | TILDE { $$ = token(TILDE); }
    | TICK { $$ = token(TICK); }
    | SPC '(' expression_numeric ')' { $$ = token1(SPC, $3); };
    | SEMICOLON { $$ = token(SEMICOLON); }
    ;

expression_print_list
    : expression_print { $$ = $1; }
    | expression_print expression_print_list { $$ = link($1, $2); } 
    ;

expression_input
    : variable
    ;

expression_input_list
    : expression_input { $$ = $1; }
    | expression_input ',' expression_input_list { $$ = link($1, $3); }
    ;   

proc_parameter
    : /* nothing */ { $$ = NULL; }
    | variable { $$ = $1; } 
    | RETURN variable { $$ = token1(RETURN_PARAMETER, $2); }
    ;

proc_parameter_list
    : proc_parameter { $$ = $1; }
    | proc_parameter ',' proc_parameter_list { $$ = link($1, $3); }
    ;

fn_parameter
    : /* nothing */ { $$ = NULL; }
    | variable { $$ = $1; }
    ;

fn_parameter_list
    : fn_parameter { $$ = $1; }
    | fn_parameter ',' fn_parameter_list { $$ = link($1, $3); }
    ;

when
    : WHEN expression_list statements NL { $$ = token2(WHEN, $2, $3); }
    ;

when_list
    : when { $$ = $1; }
    | when when_list { $$ = link($1, $2); };

define_function
    : DEFINE_PROCEDURE '(' proc_parameter_list ')' NL embed_lines END_PROC { $$ = token3typed(DEFPROC, string($1), $3, $6, Type::NOTYPE); }
    | DEFINE_INTEGER_FUNCTION '(' fn_parameter_list ')' NL embed_lines END_FN { $$ = token3typed(DEFFN, string($1), $3, $6, Type::INTEGER); }
    | DEFINE_REAL_FUNCTION '(' fn_parameter_list ')' NL embed_lines END_FN { $$ = token3typed(DEFFN, string($1), $3, $6, Type::REAL); }
    | DEFINE_STRING_FUNCTION '(' fn_parameter_list ')' NL embed_lines END_FN { $$ = token3typed(DEFFN, string($1), $3, $6, Type::STRING); }
    ;

%%

void parse(const char *filename) {
    yyfileno = 0;
    yyin = fopen(filename, "r");

    if (!yyin) {
        std::cout << "Error opening source file '" << filename << "'" << std::endl;
        exit(0);
    }
    file = filename;
    files_index.insert(std::pair<std::string, int>(file, yyfileno));
    yyparse();
    fclose(yyin);
    yylex_destroy();
}

void yyerror(const char *e) {
    std::cout << "Parsing error: " << e << " at line " << yylineno << " of file '" << file << "'" << std::endl;
    exit(1);
}