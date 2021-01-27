/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "DARIC.y"

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <stdio.h>
#include <sstream>
#include "ast.h"

#define YYDEBUG 1

AST *final = nullptr;
extern int yylex();
extern FILE *yyin;
extern int yyfileno;
extern int yylineno;
extern std::stack<std::string> file_stack;
std::list<std::string> error_list;
extern std::string file;
extern std::map<std::string, int> files_index;
std::list<AST *> ast_statements;
std::map<int, std::list<AST *>> ast_lines;
void yyerror(const char *e);
int yylex_destroy(void);
int status;
extern bool interactive;

#line 100 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "bison.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LINE_NUMBER = 3,                /* LINE_NUMBER  */
  YYSYMBOL_LITERAL_INT = 4,                /* LITERAL_INT  */
  YYSYMBOL_LITERAL_REAL = 5,               /* LITERAL_REAL  */
  YYSYMBOL_LITERAL_STRING = 6,             /* LITERAL_STRING  */
  YYSYMBOL_INTEGER_VARIABLE = 7,           /* INTEGER_VARIABLE  */
  YYSYMBOL_VARIABLE = 8,                   /* VARIABLE  */
  YYSYMBOL_STRING_VARIABLE = 9,            /* STRING_VARIABLE  */
  YYSYMBOL_TYPE_VARIABLE = 10,             /* TYPE_VARIABLE  */
  YYSYMBOL_DEFPROC = 11,                   /* DEFPROC  */
  YYSYMBOL_DEFFN_INTEGER = 12,             /* DEFFN_INTEGER  */
  YYSYMBOL_DEFFN_STRING = 13,              /* DEFFN_STRING  */
  YYSYMBOL_DEFFN_REAL = 14,                /* DEFFN_REAL  */
  YYSYMBOL_PROCEDURE = 15,                 /* PROCEDURE  */
  YYSYMBOL_FN_INTEGER = 16,                /* FN_INTEGER  */
  YYSYMBOL_FN_REAL = 17,                   /* FN_REAL  */
  YYSYMBOL_FN_STRING = 18,                 /* FN_STRING  */
  YYSYMBOL_NL = 19,                        /* NL  */
  YYSYMBOL_COLON = 20,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 21,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 22,                     /* COMMA  */
  YYSYMBOL_SEPARATOR = 23,                 /* SEPARATOR  */
  YYSYMBOL_INTEGERDIVIDE = 24,             /* INTEGERDIVIDE  */
  YYSYMBOL_E = 25,                         /* E  */
  YYSYMBOL_LE = 26,                        /* LE  */
  YYSYMBOL_GE = 27,                        /* GE  */
  YYSYMBOL_NE = 28,                        /* NE  */
  YYSYMBOL_SHL = 29,                       /* SHL  */
  YYSYMBOL_SHR = 30,                       /* SHR  */
  YYSYMBOL_LT = 31,                        /* LT  */
  YYSYMBOL_GT = 32,                        /* GT  */
  YYSYMBOL_PLUS = 33,                      /* PLUS  */
  YYSYMBOL_MINUS = 34,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 35,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 36,                    /* DIVIDE  */
  YYSYMBOL_TILDE = 37,                     /* TILDE  */
  YYSYMBOL_TICK = 38,                      /* TICK  */
  YYSYMBOL_SHL_E = 39,                     /* SHL_E  */
  YYSYMBOL_SHR_E = 40,                     /* SHR_E  */
  YYSYMBOL_PLUS_E = 41,                    /* PLUS_E  */
  YYSYMBOL_MINUS_E = 42,                   /* MINUS_E  */
  YYSYMBOL_MULTIPLY_E = 43,                /* MULTIPLY_E  */
  YYSYMBOL_DIVIDE_E = 44,                  /* DIVIDE_E  */
  YYSYMBOL_INTEGERDIVIDE_E = 45,           /* INTEGERDIVIDE_E  */
  YYSYMBOL_SWAP = 46,                      /* SWAP  */
  YYSYMBOL_SWAP_I = 47,                    /* SWAP_I  */
  YYSYMBOL_SWAP_F = 48,                    /* SWAP_F  */
  YYSYMBOL_SWAP_S = 49,                    /* SWAP_S  */
  YYSYMBOL_ENDFN = 50,                     /* ENDFN  */
  YYSYMBOL_ENDPROC = 51,                   /* ENDPROC  */
  YYSYMBOL_RETURN = 52,                    /* RETURN  */
  YYSYMBOL_RETURN_WITH_VALUE = 53,         /* RETURN_WITH_VALUE  */
  YYSYMBOL_DEFFN = 54,                     /* DEFFN  */
  YYSYMBOL_CALLPROC = 55,                  /* CALLPROC  */
  YYSYMBOL_CALLFN = 56,                    /* CALLFN  */
  YYSYMBOL_RETURN_PARAMETER = 57,          /* RETURN_PARAMETER  */
  YYSYMBOL_BGET = 58,                      /* BGET  */
  YYSYMBOL_BPUT = 59,                      /* BPUT  */
  YYSYMBOL_CLOSE = 60,                     /* CLOSE  */
  YYSYMBOL_EOFH = 61,                      /* EOFH  */
  YYSYMBOL_OPENIN = 62,                    /* OPENIN  */
  YYSYMBOL_OPENUP = 63,                    /* OPENUP  */
  YYSYMBOL_OPENOUT = 64,                   /* OPENOUT  */
  YYSYMBOL_PTR = 65,                       /* PTR  */
  YYSYMBOL_PTRA = 66,                      /* PTRA  */
  YYSYMBOL_GETSH = 67,                     /* GETSH  */
  YYSYMBOL_LISTFILES = 68,                 /* LISTFILES  */
  YYSYMBOL_CASE = 69,                      /* CASE  */
  YYSYMBOL_ELSE = 70,                      /* ELSE  */
  YYSYMBOL_ENDCASE = 71,                   /* ENDCASE  */
  YYSYMBOL_ENDIF = 72,                     /* ENDIF  */
  YYSYMBOL_ENDWHILE = 73,                  /* ENDWHILE  */
  YYSYMBOL_FOR = 74,                       /* FOR  */
  YYSYMBOL_GOSUB = 75,                     /* GOSUB  */
  YYSYMBOL_GOTO = 76,                      /* GOTO  */
  YYSYMBOL_IF = 77,                        /* IF  */
  YYSYMBOL_NEXT = 78,                      /* NEXT  */
  YYSYMBOL_OF = 79,                        /* OF  */
  YYSYMBOL_OTHERWISE = 80,                 /* OTHERWISE  */
  YYSYMBOL_REPEAT = 81,                    /* REPEAT  */
  YYSYMBOL_STEP = 82,                      /* STEP  */
  YYSYMBOL_THEN = 83,                      /* THEN  */
  YYSYMBOL_TO = 84,                        /* TO  */
  YYSYMBOL_UNTIL = 85,                     /* UNTIL  */
  YYSYMBOL_WHEN = 86,                      /* WHEN  */
  YYSYMBOL_WHILE = 87,                     /* WHILE  */
  YYSYMBOL_IN_ = 88,                       /* IN_  */
  YYSYMBOL_FORIN = 89,                     /* FORIN  */
  YYSYMBOL_DATA = 90,                      /* DATA  */
  YYSYMBOL_READ = 91,                      /* READ  */
  YYSYMBOL_RESTORE = 92,                   /* RESTORE  */
  YYSYMBOL_ARRAYSIZE = 93,                 /* ARRAYSIZE  */
  YYSYMBOL_DIM = 94,                       /* DIM  */
  YYSYMBOL_LOCALDIM = 95,                  /* LOCALDIM  */
  YYSYMBOL_ENDTYPE = 96,                   /* ENDTYPE  */
  YYSYMBOL_FIELD = 97,                     /* FIELD  */
  YYSYMBOL_GLOBAL = 98,                    /* GLOBAL  */
  YYSYMBOL_LOCAL = 99,                     /* LOCAL  */
  YYSYMBOL_TYPE_ = 100,                    /* TYPE_  */
  YYSYMBOL_END = 101,                      /* END  */
  YYSYMBOL_TRACEON = 102,                  /* TRACEON  */
  YYSYMBOL_TRACEOFF = 103,                 /* TRACEOFF  */
  YYSYMBOL_BREAKPOINT = 104,               /* BREAKPOINT  */
  YYSYMBOL_RND = 105,                      /* RND  */
  YYSYMBOL_RND0 = 106,                     /* RND0  */
  YYSYMBOL_RND1 = 107,                     /* RND1  */
  YYSYMBOL_RNDREAL = 108,                  /* RNDREAL  */
  YYSYMBOL_RNDRANGE = 109,                 /* RNDRANGE  */
  YYSYMBOL_FLOAT_ = 110,                   /* FLOAT_  */
  YYSYMBOL_INT_ = 111,                     /* INT_  */
  YYSYMBOL_ACS = 112,                      /* ACS  */
  YYSYMBOL_DIV = 113,                      /* DIV  */
  YYSYMBOL_MOD = 114,                      /* MOD  */
  YYSYMBOL_SQR = 115,                      /* SQR  */
  YYSYMBOL_LN = 116,                       /* LN  */
  YYSYMBOL_LOG = 117,                      /* LOG  */
  YYSYMBOL_EXP = 118,                      /* EXP  */
  YYSYMBOL_ATN = 119,                      /* ATN  */
  YYSYMBOL_TAN = 120,                      /* TAN  */
  YYSYMBOL_COS = 121,                      /* COS  */
  YYSYMBOL_SIN = 122,                      /* SIN  */
  YYSYMBOL_ASN = 123,                      /* ASN  */
  YYSYMBOL_ABS = 124,                      /* ABS  */
  YYSYMBOL_DEG = 125,                      /* DEG  */
  YYSYMBOL_RAD = 126,                      /* RAD  */
  YYSYMBOL_SGN = 127,                      /* SGN  */
  YYSYMBOL_VAL = 128,                      /* VAL  */
  YYSYMBOL_PI = 129,                       /* PI  */
  YYSYMBOL_BOOLFALSE = 130,                /* BOOLFALSE  */
  YYSYMBOL_BOOLTRUE = 131,                 /* BOOLTRUE  */
  YYSYMBOL_ASC = 132,                      /* ASC  */
  YYSYMBOL_CHRS = 133,                     /* CHRS  */
  YYSYMBOL_INSTR = 134,                    /* INSTR  */
  YYSYMBOL_LEFTS = 135,                    /* LEFTS  */
  YYSYMBOL_MIDS = 136,                     /* MIDS  */
  YYSYMBOL_RIGHTS = 137,                   /* RIGHTS  */
  YYSYMBOL_LEN = 138,                      /* LEN  */
  YYSYMBOL_STRS = 139,                     /* STRS  */
  YYSYMBOL_STRSHEX = 140,                  /* STRSHEX  */
  YYSYMBOL_STRINGS = 141,                  /* STRINGS  */
  YYSYMBOL_OSCLI = 142,                    /* OSCLI  */
  YYSYMBOL_TIME = 143,                     /* TIME  */
  YYSYMBOL_TIMES = 144,                    /* TIMES  */
  YYSYMBOL_AND = 145,                      /* AND  */
  YYSYMBOL_OR = 146,                       /* OR  */
  YYSYMBOL_EOR = 147,                      /* EOR  */
  YYSYMBOL_NOT = 148,                      /* NOT  */
  YYSYMBOL_CHAIN = 149,                    /* CHAIN  */
  YYSYMBOL_EXPECT = 150,                   /* EXPECT  */
  YYSYMBOL_RED = 151,                      /* RED  */
  YYSYMBOL_GREEN = 152,                    /* GREEN  */
  YYSYMBOL_YELLOW = 153,                   /* YELLOW  */
  YYSYMBOL_BLUE = 154,                     /* BLUE  */
  YYSYMBOL_MAGENTA = 155,                  /* MAGENTA  */
  YYSYMBOL_CYAN = 156,                     /* CYAN  */
  YYSYMBOL_WHITE = 157,                    /* WHITE  */
  YYSYMBOL_BLACK = 158,                    /* BLACK  */
  YYSYMBOL_CLS = 159,                      /* CLS  */
  YYSYMBOL_CLG = 160,                      /* CLG  */
  YYSYMBOL_COLOUR = 161,                   /* COLOUR  */
  YYSYMBOL_COLOURBG = 162,                 /* COLOURBG  */
  YYSYMBOL_COLOUREXP = 163,                /* COLOUREXP  */
  YYSYMBOL_FLIP = 164,                     /* FLIP  */
  YYSYMBOL_GRAPHICS = 165,                 /* GRAPHICS  */
  YYSYMBOL_BANKED = 166,                   /* BANKED  */
  YYSYMBOL_FILL = 167,                     /* FILL  */
  YYSYMBOL_SHADED = 168,                   /* SHADED  */
  YYSYMBOL_LINE = 169,                     /* LINE  */
  YYSYMBOL_PLOT = 170,                     /* PLOT  */
  YYSYMBOL_POINT_ = 171,                   /* POINT_  */
  YYSYMBOL_RECTANGLE = 172,                /* RECTANGLE  */
  YYSYMBOL_RECTANGLEFILL = 173,            /* RECTANGLEFILL  */
  YYSYMBOL_TRIANGLE = 174,                 /* TRIANGLE  */
  YYSYMBOL_TRIANGLEFILL = 175,             /* TRIANGLEFILL  */
  YYSYMBOL_TRIANGLESHADED = 176,           /* TRIANGLESHADED  */
  YYSYMBOL_CLIPON = 177,                   /* CLIPON  */
  YYSYMBOL_CLIPOFF = 178,                  /* CLIPOFF  */
  YYSYMBOL_CIRCLE = 179,                   /* CIRCLE  */
  YYSYMBOL_CIRCLEFILL = 180,               /* CIRCLEFILL  */
  YYSYMBOL_TEXT = 181,                     /* TEXT  */
  YYSYMBOL_TEXTRIGHT = 182,                /* TEXTRIGHT  */
  YYSYMBOL_TEXTCENTRE = 183,               /* TEXTCENTRE  */
  YYSYMBOL_LOADTYPEFACE = 184,             /* LOADTYPEFACE  */
  YYSYMBOL_CREATEFONT = 185,               /* CREATEFONT  */
  YYSYMBOL_MONO15 = 186,                   /* MONO15  */
  YYSYMBOL_MONO20 = 187,                   /* MONO20  */
  YYSYMBOL_MONO25 = 188,                   /* MONO25  */
  YYSYMBOL_MONO30 = 189,                   /* MONO30  */
  YYSYMBOL_MONO35 = 190,                   /* MONO35  */
  YYSYMBOL_MONO40 = 191,                   /* MONO40  */
  YYSYMBOL_MONO50 = 192,                   /* MONO50  */
  YYSYMBOL_MONO75 = 193,                   /* MONO75  */
  YYSYMBOL_MONO100 = 194,                  /* MONO100  */
  YYSYMBOL_PROP15 = 195,                   /* PROP15  */
  YYSYMBOL_PROP20 = 196,                   /* PROP20  */
  YYSYMBOL_PROP25 = 197,                   /* PROP25  */
  YYSYMBOL_PROP30 = 198,                   /* PROP30  */
  YYSYMBOL_PROP35 = 199,                   /* PROP35  */
  YYSYMBOL_PROP40 = 200,                   /* PROP40  */
  YYSYMBOL_PROP50 = 201,                   /* PROP50  */
  YYSYMBOL_PROP75 = 202,                   /* PROP75  */
  YYSYMBOL_PROP100 = 203,                  /* PROP100  */
  YYSYMBOL_SERIF15 = 204,                  /* SERIF15  */
  YYSYMBOL_SERIF20 = 205,                  /* SERIF20  */
  YYSYMBOL_SERIF25 = 206,                  /* SERIF25  */
  YYSYMBOL_SERIF30 = 207,                  /* SERIF30  */
  YYSYMBOL_SERIF35 = 208,                  /* SERIF35  */
  YYSYMBOL_SERIF40 = 209,                  /* SERIF40  */
  YYSYMBOL_SERIF50 = 210,                  /* SERIF50  */
  YYSYMBOL_SERIF75 = 211,                  /* SERIF75  */
  YYSYMBOL_SERIF100 = 212,                 /* SERIF100  */
  YYSYMBOL_SCREENWIDTH = 213,              /* SCREENWIDTH  */
  YYSYMBOL_SCREENHEIGHT = 214,             /* SCREENHEIGHT  */
  YYSYMBOL_SHOWFPS = 215,                  /* SHOWFPS  */
  YYSYMBOL_LASTPOS = 216,                  /* LASTPOS  */
  YYSYMBOL_INKEY = 217,                    /* INKEY  */
  YYSYMBOL_INKEYS = 218,                   /* INKEYS  */
  YYSYMBOL_INPUT_ = 219,                   /* INPUT_  */
  YYSYMBOL_PRINT = 220,                    /* PRINT  */
  YYSYMBOL_SPC = 221,                      /* SPC  */
  YYSYMBOL_SINKEY = 222,                   /* SINKEY  */
  YYSYMBOL_SINKEYS = 223,                  /* SINKEYS  */
  YYSYMBOL_INPUT_NOQUESTIONMARK = 224,     /* INPUT_NOQUESTIONMARK  */
  YYSYMBOL_GET = 225,                      /* GET  */
  YYSYMBOL_GETS = 226,                     /* GETS  */
  YYSYMBOL_GET_S = 227,                    /* GET_S  */
  YYSYMBOL_GETS_S = 228,                   /* GETS_S  */
  YYSYMBOL_MOUSE = 229,                    /* MOUSE  */
  YYSYMBOL_CREATEVERTEX = 230,             /* CREATEVERTEX  */
  YYSYMBOL_CREATETRIANGLE = 231,           /* CREATETRIANGLE  */
  YYSYMBOL_CREATESHAPE = 232,              /* CREATESHAPE  */
  YYSYMBOL_CREATEOBJECT = 233,             /* CREATEOBJECT  */
  YYSYMBOL_TRANSLATE = 234,                /* TRANSLATE  */
  YYSYMBOL_ROTATE = 235,                   /* ROTATE  */
  YYSYMBOL_SCALE = 236,                    /* SCALE  */
  YYSYMBOL_RENDERFRAME = 237,              /* RENDERFRAME  */
  YYSYMBOL_DELETEOBJECT = 238,             /* DELETEOBJECT  */
  YYSYMBOL_SOLID = 239,                    /* SOLID  */
  YYSYMBOL_WIREFRAME = 240,                /* WIREFRAME  */
  YYSYMBOL_FILLEDWIREFRAME = 241,          /* FILLEDWIREFRAME  */
  YYSYMBOL_NEG = 242,                      /* NEG  */
  YYSYMBOL_243_ = 243,                     /* ','  */
  YYSYMBOL_244_ = 244,                     /* '('  */
  YYSYMBOL_245_ = 245,                     /* ')'  */
  YYSYMBOL_YYACCEPT = 246,                 /* $accept  */
  YYSYMBOL_line = 247,                     /* line  */
  YYSYMBOL_embed_lines = 248,              /* embed_lines  */
  YYSYMBOL_statement_list = 249,           /* statement_list  */
  YYSYMBOL_statement = 250,                /* statement  */
  YYSYMBOL_number = 251,                   /* number  */
  YYSYMBOL_expression_numeric = 252,       /* expression_numeric  */
  YYSYMBOL_variable_integer = 253,         /* variable_integer  */
  YYSYMBOL_variable_real = 254,            /* variable_real  */
  YYSYMBOL_variable_numeric = 255,         /* variable_numeric  */
  YYSYMBOL_variable_string = 256,          /* variable_string  */
  YYSYMBOL_variable = 257,                 /* variable  */
  YYSYMBOL_variable_list = 258,            /* variable_list  */
  YYSYMBOL_plain_variable = 259,           /* plain_variable  */
  YYSYMBOL_plain_variable_list = 260,      /* plain_variable_list  */
  YYSYMBOL_dim_variable = 261,             /* dim_variable  */
  YYSYMBOL_dim_variable_list = 262,        /* dim_variable_list  */
  YYSYMBOL_type_variable = 263,            /* type_variable  */
  YYSYMBOL_type = 264,                     /* type  */
  YYSYMBOL_field = 265,                    /* field  */
  YYSYMBOL_field_list = 266,               /* field_list  */
  YYSYMBOL_string = 267,                   /* string  */
  YYSYMBOL_expression_string = 268,        /* expression_string  */
  YYSYMBOL_expression = 269,               /* expression  */
  YYSYMBOL_expression_list = 270,          /* expression_list  */
  YYSYMBOL_assignment_single = 271,        /* assignment_single  */
  YYSYMBOL_assignment_list = 272,          /* assignment_list  */
  YYSYMBOL_assignment = 273,               /* assignment  */
  YYSYMBOL_expression_print = 274,         /* expression_print  */
  YYSYMBOL_expression_print_list = 275,    /* expression_print_list  */
  YYSYMBOL_expression_input = 276,         /* expression_input  */
  YYSYMBOL_expression_input_list = 277,    /* expression_input_list  */
  YYSYMBOL_proc_parameter = 278,           /* proc_parameter  */
  YYSYMBOL_proc_parameter_list = 279,      /* proc_parameter_list  */
  YYSYMBOL_fn_parameter = 280,             /* fn_parameter  */
  YYSYMBOL_fn_parameter_list = 281,        /* fn_parameter_list  */
  YYSYMBOL_when = 282,                     /* when  */
  YYSYMBOL_when_list = 283,                /* when_list  */
  YYSYMBOL_define_function = 284           /* define_function  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  295
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   11077

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  246
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  359
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1035

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   497


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     244,   245,     2,     2,   243,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   104,   109,   110,   111,   112,   113,   117,   118,   122,
     123,   124,   125,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   150,   151,   153,   154,   155,   156,   157,
     158,   160,   162,   163,   165,   166,   167,   168,   170,   171,
     172,   173,   175,   176,   177,   178,   180,   181,   182,   183,
     185,   186,   187,   189,   190,   191,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   225,   226,   228,   229,   231,   232,
     235,   238,   239,   240,   241,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   263,   264,   265,   266,   267,   268,   269,
     273,   274,   275,   276,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     307,   308,   310,   311,   312,   314,   316,   317,   319,   320,
     321,   323,   324,   325,   326,   328,   329,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   383,   384,   385,   386,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   405,   406,   407,   408,   409,   413,
     414,   415,   416,   417,   421,   422,   423,   424,   425,   429,
     430,   434,   435,   436,   437,   441,   442,   446,   447,   451,
     452,   453,   457,   458,   462,   463,   464,   465,   466,   467,
     468,   472,   473,   477,   478,   482,   486,   490,   491,   495,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   509,
     511,   513,   514,   516,   517,   518,   519,   520,   521,   522,
     523,   527,   528,   532,   533,   534,   538,   539,   540,   541,
     545,   546,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   563,   564,   565,   566,   567,   568,   569,   573,
     574,   578,   582,   583,   587,   588,   589,   593,   594,   598,
     599,   603,   604,   608,   612,   613,   616,   617,   618,   619
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "end of file", "error", "invalid token", "LINE_NUMBER", "LITERAL_INT",
  "LITERAL_REAL", "LITERAL_STRING", "INTEGER_VARIABLE", "VARIABLE",
  "STRING_VARIABLE", "TYPE_VARIABLE", "DEFPROC", "DEFFN_INTEGER",
  "DEFFN_STRING", "DEFFN_REAL", "PROCEDURE", "FN_INTEGER", "FN_REAL",
  "FN_STRING", "NL", "COLON", "SEMICOLON", "COMMA", "SEPARATOR",
  "INTEGERDIVIDE", "E", "LE", "GE", "NE", "SHL", "SHR", "LT", "GT", "PLUS",
  "MINUS", "MULTIPLY", "DIVIDE", "TILDE", "TICK", "SHL_E", "SHR_E",
  "PLUS_E", "MINUS_E", "MULTIPLY_E", "DIVIDE_E", "INTEGERDIVIDE_E", "SWAP",
  "SWAP_I", "SWAP_F", "SWAP_S", "ENDFN", "ENDPROC", "RETURN",
  "RETURN_WITH_VALUE", "DEFFN", "CALLPROC", "CALLFN", "RETURN_PARAMETER",
  "BGET", "BPUT", "CLOSE", "EOFH", "OPENIN", "OPENUP", "OPENOUT", "PTR",
  "PTRA", "GETSH", "LISTFILES", "CASE", "ELSE", "ENDCASE", "ENDIF",
  "ENDWHILE", "FOR", "GOSUB", "GOTO", "IF", "NEXT", "OF", "OTHERWISE",
  "REPEAT", "STEP", "THEN", "TO", "UNTIL", "WHEN", "WHILE", "IN_", "FORIN",
  "DATA", "READ", "RESTORE", "ARRAYSIZE", "DIM", "LOCALDIM", "ENDTYPE",
  "FIELD", "GLOBAL", "LOCAL", "TYPE_", "END", "TRACEON", "TRACEOFF",
  "BREAKPOINT", "RND", "RND0", "RND1", "RNDREAL", "RNDRANGE", "FLOAT_",
  "INT_", "ACS", "DIV", "MOD", "SQR", "LN", "LOG", "EXP", "ATN", "TAN",
  "COS", "SIN", "ASN", "ABS", "DEG", "RAD", "SGN", "VAL", "PI",
  "BOOLFALSE", "BOOLTRUE", "ASC", "CHRS", "INSTR", "LEFTS", "MIDS",
  "RIGHTS", "LEN", "STRS", "STRSHEX", "STRINGS", "OSCLI", "TIME", "TIMES",
  "AND", "OR", "EOR", "NOT", "CHAIN", "EXPECT", "RED", "GREEN", "YELLOW",
  "BLUE", "MAGENTA", "CYAN", "WHITE", "BLACK", "CLS", "CLG", "COLOUR",
  "COLOURBG", "COLOUREXP", "FLIP", "GRAPHICS", "BANKED", "FILL", "SHADED",
  "LINE", "PLOT", "POINT_", "RECTANGLE", "RECTANGLEFILL", "TRIANGLE",
  "TRIANGLEFILL", "TRIANGLESHADED", "CLIPON", "CLIPOFF", "CIRCLE",
  "CIRCLEFILL", "TEXT", "TEXTRIGHT", "TEXTCENTRE", "LOADTYPEFACE",
  "CREATEFONT", "MONO15", "MONO20", "MONO25", "MONO30", "MONO35", "MONO40",
  "MONO50", "MONO75", "MONO100", "PROP15", "PROP20", "PROP25", "PROP30",
  "PROP35", "PROP40", "PROP50", "PROP75", "PROP100", "SERIF15", "SERIF20",
  "SERIF25", "SERIF30", "SERIF35", "SERIF40", "SERIF50", "SERIF75",
  "SERIF100", "SCREENWIDTH", "SCREENHEIGHT", "SHOWFPS", "LASTPOS", "INKEY",
  "INKEYS", "INPUT_", "PRINT", "SPC", "SINKEY", "SINKEYS",
  "INPUT_NOQUESTIONMARK", "GET", "GETS", "GET_S", "GETS_S", "MOUSE",
  "CREATEVERTEX", "CREATETRIANGLE", "CREATESHAPE", "CREATEOBJECT",
  "TRANSLATE", "ROTATE", "SCALE", "RENDERFRAME", "DELETEOBJECT", "SOLID",
  "WIREFRAME", "FILLEDWIREFRAME", "NEG", "','", "'('", "')'", "$accept",
  "line", "embed_lines", "statement_list", "statement", "number",
  "expression_numeric", "variable_integer", "variable_real",
  "variable_numeric", "variable_string", "variable", "variable_list",
  "plain_variable", "plain_variable_list", "dim_variable",
  "dim_variable_list", "type_variable", "type", "field", "field_list",
  "string", "expression_string", "expression", "expression_list",
  "assignment_single", "assignment_list", "assignment", "expression_print",
  "expression_print_list", "expression_input", "expression_input_list",
  "proc_parameter", "proc_parameter_list", "fn_parameter",
  "fn_parameter_list", "when", "when_list", "define_function", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,    44,    40,    41
};
#endif

#define YYPACT_NINF (-434)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-152)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    7600,  7600,  -219,  -216,  -209,    -3,  -202,  -165,  -134,  -122,
    -113,   -77,   -71,   -56,   162,  2624,  3718,  3718,  3718,  3718,
    2624,    67,   191,   199,  2624,    -7,  2624,  2624,   696,  -434,
     705,   739,   270,   198,  -434,  -434,  -434,  -434,    87,    87,
     192,  -434,  3718,  3718,  -434,  2862,  3718,  3718,  3076,  3290,
    3718,  -434,  3504,  3718,  3718,  3718,  -434,   -23,   -19,   385,
    2383,  -434,  -434,   220,   226,   233,  3718,  3718,  3718,  -434,
    3718,   132,  -434,  -434,  -434,   747,   234,   669,  -434,     8,
    -434,  -434,  -434,   140,  3718,  3718,  1927,  -434,  -434,  3718,
     120,   696,   696,   696,  2624,  2624,  2624,  2624,    26,    32,
      50,  -434,  -434,  -434,    48,     3,    54,    55,    65,   346,
    3718,  3718,    71,    74,    79,  3718,  3718,   113,   117,  -434,
    -434,   167,   176,   185,   188,   195,   197,   201,   206,   209,
     210,   212,   213,   229,   231,   237,   239,   240,  -434,  -434,
    -434,   241,   247,   253,   255,   258,   259,   271,     6,   272,
    -434,  -434,  3718,  -434,  -434,  -434,  -434,  -434,  -434,  -434,
    -434,   274,  -434,   277,    87,  3718,  -434,  -434,  -434,  -434,
    -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,
    -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,
    -434,  -434,  -434,  -434,  -434,  -434,   278,   279,  -434,  -434,
     322,  3718,  -434,  -434,  -434,  3718,  -434,  4052,  -434,  -434,
    -434,  -434,   805,  -434,    12,  4052,  2857,  4052,  4288,   225,
      24,    58,   301,   264,  -434,  -434,  5790,  5971,  2624,   416,
     172,  -434,  -434,  -434,   265,  -434,   281,   283,   286,   292,
     298,  -434,   417,  -434,   302,   705,  -434,   459,   304,   805,
      88,  -434,  -434,  -434,   299,  -434,  5707,  5888,  3718,  6069,
    6250,  6431,  3718,  6612,  3718,  3718,  6793,  6974,  3718,  7155,
    7336,  7517,  7698,  3718,  3718,    38,  -434,   306,  -434,  -434,
    -434,  -434,   308,  -434,  4052,   805,  2383,  -434,   307,   319,
     324,  7879,  9005,  9045,  4052,  -434,  7600,  7962,  3718,  3718,
    3718,  3718,  3718,  3718,  3718,  3718,    87,  2624,   489,   739,
    7962,    31,   183,   520,   729,  1493,   696,  -434,   326,   290,
    -434,   330,   331,   333,   335,   337,   338,   340,   341,   568,
     579,   580,  3718,  3718,  2624,  2624,  2624,  -434,  -434,  -434,
    -434,  4052,  4052,    87,    87,    87,  4052,  4052,   456,  3718,
    3718,  3718,  3718,  3718,  3718,  3718,  3718,  3718,  3718,  3718,
    3718,  3718,  3718,  3718,  3718,  3718,    87,    87,  3718,    87,
      87,    87,    87,    87,   350,  3718,  3718,  -434,  3718,  3718,
     805,  9072,  3718,  3718,   355,  9107,  1618,  3718,  3718,  3718,
    3718,  3718,  3718,  3718,  3718,  3718,  3718,  3718,  3718,  3718,
    3718,  3718,  3718,  3718,  3718,    87,    87,    87,    87,    87,
      87,    87,  3718,  3718,  3718,   585,  3718,   606,  3718,   607,
     631,    76,    77,   553,  5971,  6152,   145,   577,  6333,  -434,
     629,  5971,   564,   145,  -434,  5971,  2624,   696,  3718,  3718,
    3718,  3718,   705,  2141,  -434,   554,  3718,   192,   192,  3718,
    3718,  9136,  3718,  3718,  3718,  9171,  3718,  9199,  9235,  3718,
    3718,  9270,  3718,  3718,  3718,  3718,  1648,  1754,   696,  -434,
     696,  3718,  -434,   645,  3718,  3718,  3718,  3718,  3718,   156,
    -434,  4052,  4052,  4052,  4052,  4052,  4052,  4052,  4052,   805,
    -434,  2624,  -434,  3718,  -434,  3718,  -434,   586,  3718,  -434,
     460,  -434,   120,   632,   696,   637,   649,   652,  -434,  -434,
    -434,  -434,  -434,  -434,  -434,  1775,   419,   421,   429,   165,
     207,   235,   431,   436,   437,  4119,  4355,  4591,  4827,  5063,
    5299,  5535,  8056,  8122,  8180,  8193,  8215,  8228,  8250,  8285,
    8320,  8355,   275,   381,  8376,   294,   575,   602,   611,   462,
    3718,  8415,  9298,  9327,  9340,  3718,  8450,  8479,   675,  3718,
    -434,    60,   663,   663,   663,   663,  -434,  -434,   663,   663,
     151,   151,    60,    60,    60,    60,  1445,  1144,  1144,   655,
     655,   655,   655,   655,   655,  -434,  8509,  4052,  4524,   609,
   10804,   457, 10826,   464,   465,  3718,   703,  3718,   708,   720,
      34,  5971,    18,  7962,   698,   114,  -434,  -434,  2624,   657,
    -434,  -434,  1036,  1192,  1345,  9362,  -434,   710,   696,   714,
     641,  8522,  -434,  -434,  9397,  9432,  3718,  4052,  9467,  4052,
    3718,  9490,  3718,  3718,  9503,  9525,  3718,  9560,  9595,  9630,
    9652,  -434,  -434,  -434,  -434,  8544,   495,  8580,  8615,  9665,
    9687,  4052,  7962,  -434,  8650,  8672,   497,  8685,  -434,  -434,
    -434,  -434,  7600,  -434,  5971,  5971,  5971,   460,  -434,  -434,
    -434,  -434,  -434,  -434,   507,   522,   523,  -434,  -434,  -434,
    -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,
    -434,  -434,  -434,  -434,  -434,  -434,  -434,    87,  3718,  3718,
    3718,  -434,  8707,  -434,    87,  3718,  3718,  4052,  -434,  -434,
    -434,  9723,   153,  2624,   609,    11,  3718,   524,  3718,   525,
     528, 10895,   534, 10930,   535,   536,   763,  -434,    53,  7600,
    -434,  -434,  -434,  -434,  -434,  3718,  -434,  3718,  -434,  3718,
    -434,   758,   717,  -434,   554,  -434,   784,  3718,  3718,  4052,
    3718,  9758,  3718,  9793,  9815,  3718,  3718,  9828,  3718,  3718,
    3718,  3718,  -434,   787,   552,   555,  3718,  3718,  -434,  -434,
      87,  -434,   171,   750,   753,   754,   563,   565,   570,   125,
    8744,  9850,  8779,  -434,   479,  9885,  8809,  3718,  7600,  -434,
    -434,  7962,  3957,  6514,  4193,  6695,  6876,  3718,   562,  3718,
     569,   572,  5971,   796,  -434,   145,  8837,  8850,  8872,   574,
     576,  -434,  4052,  4052,  9920,  3718,  9955,  3718,  3718,  9978,
    9991,  3718,  4052, 10013, 10048, 10083,  -434,  3718,  3718, 10118,
   10140,   529,  7781,  -434,  -434,  -434,    19,    19,    19,  3718,
    -434,  -434,  3718,  -434,  -434,  3718,  -434, 10153,   115,   802,
    5971,  3718,    69,  5971,   159,  5971,  3718,   291,  5971,   396,
    5971,   398,  4429,  7057,  4665,  7238,  7419,   752,  5971,  -434,
    -434,  -434,  -434,    87,  3718, 10175,  3718, 10211, 10246,  3718,
    3718,  4052,    87,    87,    87, 10281, 10303,  3718,  3718,  -434,
    -434,   179,   582,   583,   589,  8912,  8942,  8977,  3718,  -434,
     751,   761,  4901,  -434,   766,  -434,   768,  5137,  -434,   769,
    -434,   770,  -434,  5971,  3718,   448,  5971,   469,  5971,  3718,
     506,  5971,   510,  5971,   521,  -434,   777,   539,  4052,  3718,
    4052,  3718,  3718, 10316,  4052,   805,   805,   805,  3718,  3718,
    4052,  4052,  -434,  -434,  -434,  -434,  -434,  -434, 10338,  -434,
    -434,  5971,   608,  -434,  -434,  5971,   642,  -434,  -434,   772,
    5373,  -434,   773,  -434,   774,  5609,  -434,   775,  -434,   778,
    -434,  -434,  -434,  4052, 10373, 10408,  3718, 10443, 10466,  3718,
     779,  -434,   781,  -434,  -434,  5971,   647,  -434,  -434,  5971,
     650,  -434,  -434,  3718,  3718, 10479,  3718,  3718, 10501,  -434,
    -434,   783,  -434,   788,  -434, 10536, 10571,  3718, 10606, 10628,
    3718,  -434,  -434,  3718,  3718,  4052,  3718,  3718, 10641,  4052,
   10663,  4052,  4052,  3718,  3718, 10699, 10734,  3718,  3718, 10769,
   10791,  3718,  3718,  4052,  4052
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   249,   254,   261,   283,     0,     0,     0,     0,
      20,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   313,     0,    27,
       0,     0,     0,     0,    19,    30,    31,    32,     0,     0,
       0,   105,     0,     0,   114,   112,     0,     0,     0,     0,
       0,   125,     0,     0,     0,     0,   129,     0,     0,     0,
      96,    50,    51,     0,     0,     0,     0,     0,     0,    98,
       0,     0,     9,   259,   260,     0,     0,     0,    15,   320,
     322,    13,    14,     0,     0,     0,     0,   252,   257,     0,
     344,   349,   349,   349,   313,   313,   313,   313,     0,     0,
       0,   130,   132,   289,   261,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,   225,
     226,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   228,   169,
     168,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     170,   303,     0,   177,   178,   179,   180,   181,   182,   183,
     184,     0,   173,     0,     0,     0,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   188,   189,   185,     0,     0,   166,   301,
       0,     0,   171,   172,   174,     0,   134,   311,   135,   136,
     291,   290,   312,    29,     0,    36,     0,    38,     0,     0,
       0,     0,     0,     0,    42,    43,     0,     0,     0,     0,
     314,    25,   265,   266,   267,    26,     0,     0,     0,     0,
     281,    33,     0,   324,   261,     0,   323,     0,     0,    41,
      16,   269,   270,   271,   272,    18,   106,   108,   113,     0,
       0,     0,     0,     0,     0,   173,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   341,   342,    44,   338,
     335,   336,     0,   334,   333,   332,   339,    97,     0,     0,
       0,     0,     0,     0,   104,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,     0,     0,     0,     0,   345,   347,     0,
     350,   351,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   313,   313,   313,   131,   133,   140,
     141,   220,   219,     0,     0,     0,   165,   299,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   229,     0,     0,
     190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     9,     0,     6,
       0,     7,     0,     2,    61,     0,   313,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,   340,     0,     0,     0,     0,     0,     0,     0,
      10,   316,   325,   326,   327,   328,   329,   330,   331,   317,
     318,     0,   321,     0,   250,     0,   255,     0,     0,   262,
     284,   346,   344,     0,   349,     0,     0,     0,    21,    22,
      23,    24,    63,    64,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     137,   146,   151,   154,   153,   152,   149,   150,   155,   156,
     142,   143,   144,   145,   147,   148,   157,   158,   159,   293,
     296,   295,   294,   297,   298,   292,     0,    35,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,     0,     0,     0,     4,     8,     0,     0,
     315,   268,     0,     0,     0,     0,   282,     0,     0,     0,
       0,     0,    17,   273,     0,     0,     0,   110,     0,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,    46,   343,     0,     0,     0,     0,     0,
       0,   103,    12,   319,     0,     0,     0,     0,   253,   258,
     264,   348,     0,   352,     0,     0,     0,     0,   160,   161,
     300,   221,   223,   222,     0,     0,     0,   227,   138,   139,
     239,   230,   231,   232,   233,   234,   235,   236,   237,   240,
     238,   241,   242,   243,   248,   244,   307,     0,     0,     0,
       0,   245,     0,   304,     0,     0,     0,   191,   167,   302,
     175,     0,     0,   313,   354,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,     0,
      53,     5,     3,    60,    62,     0,   274,     0,   276,     0,
     278,     0,     0,   286,   287,   285,     0,     0,     0,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   337,     0,     0,     0,     0,     0,   251,   256,
       0,   263,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   305,     0,     0,     0,     0,     0,   355,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,    57,     0,     0,     0,     0,
       0,   288,   107,   109,     0,     0,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,   357,   359,   358,     0,     0,     0,     0,
     246,   308,     0,   310,   306,     0,   187,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   275,
     277,   279,   280,     0,     0,     0,     0,     0,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,     0,    39,
     356,     0,     0,     0,     0,     0,     0,     0,     0,   353,
       0,     0,     0,    80,     0,    70,     0,     0,    81,     0,
      69,     0,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,     0,   117,     0,
     118,     0,     0,     0,   124,   126,   127,   128,     0,     0,
     101,   102,   163,   162,   164,   247,   309,   186,     0,    95,
      78,     0,     0,    67,    79,     0,     0,    66,    68,     0,
       0,    88,     0,    76,     0,     0,    89,     0,    75,     0,
      77,    59,    40,   119,     0,     0,     0,     0,     0,     0,
       0,    84,     0,    85,    86,     0,     0,    73,    87,     0,
       0,    72,    74,     0,     0,     0,     0,     0,     0,    82,
      83,     0,    92,     0,    93,     0,     0,     0,     0,     0,
       0,    90,    91,     0,     0,   120,     0,     0,     0,   121,
       0,    99,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,   122
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -434,  -434,   287,   244,  -186,  -433,   -16,   500,   964,    49,
    1226,    -6,   388,  -434,  -218,  -434,  -237,  -434,  -434,  -434,
      97,  -434,   252,    83,   -81,  -434,   -14,  -434,  -434,   581,
    -434,  -266,  -434,   353,  -434,   -86,  -434,   148,  -434
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   431,   432,   433,    72,   206,   207,   208,   209,    75,
      76,   276,   235,   254,   255,   240,   241,    77,    78,   619,
     620,   211,   212,   230,   231,    79,    80,    81,   286,   287,
     277,   278,   318,   319,   321,   322,   714,   715,    82
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     215,   216,   217,   218,    87,    88,   323,   324,   444,   469,
      87,    88,   227,   325,   326,   327,   328,   243,   246,    87,
      88,   296,   234,   101,   102,    84,   256,   257,    85,   259,
     260,   261,   263,   266,   267,    86,   269,   270,   271,   272,
     427,   297,    90,   374,   284,     2,     3,   104,   105,   416,
     291,   292,   293,   891,   294,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   311,   312,
     314,   308,   296,   315,   220,   221,   222,   232,   228,    91,
     242,   242,   790,   418,   317,   320,   320,   320,   729,   392,
     393,   791,   297,   103,   341,   342,   104,   248,   213,   346,
     347,   595,   597,   219,   726,   108,   727,   226,   232,   229,
      92,   480,   417,   405,   406,   407,   408,   296,   296,   409,
     410,   411,    93,   803,   480,   804,   232,     2,     3,   104,
     105,    94,   295,   732,   899,   296,   377,   310,   297,   232,
     232,   232,   232,   296,   400,   401,   419,   903,   296,   381,
     405,   406,   407,   408,   116,   297,   409,   410,   411,   296,
     658,   659,   296,   310,   596,   598,   223,    95,   297,    98,
      99,   100,   316,    96,   296,   387,   402,   403,   404,   652,
     392,   393,   297,   337,   338,   385,   398,   399,    97,   386,
     405,   406,   407,   408,   832,   224,   409,   410,   411,   251,
     252,   253,   643,   225,   644,   616,   247,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     142,   273,   144,   145,   146,   274,   148,   288,   149,   622,
     623,   151,   405,   406,   407,   408,   289,   905,   409,   410,
     411,    89,   451,   290,    71,    83,   455,   333,   457,   458,
     375,   309,   461,   516,   517,   518,   412,   466,   467,   306,
     405,   406,   407,   408,   400,   401,   409,   410,   411,   329,
     284,   421,   422,   423,   493,   330,   494,     2,     3,   244,
       5,   468,   481,   482,   483,   484,   485,   486,   487,   488,
     249,   250,   332,   331,   296,   492,   400,   401,   334,   335,
     405,   406,   407,   408,   415,   197,   409,   410,   411,   336,
     501,   434,   285,   199,   297,   343,   314,   515,   344,   405,
     406,   407,   408,   345,   232,   409,   410,   411,   402,   403,
     404,   447,   384,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     337,   338,   544,     2,     3,   610,   214,   348,   242,   551,
     552,   349,   553,   554,   245,   232,   556,   557,   839,   908,
     840,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   420,
     490,   275,     2,     3,   104,   105,   586,   587,   588,   296,
     590,   296,   592,   892,   893,   894,   405,   406,   407,   408,
     671,   350,   409,   410,   411,   436,   380,   730,   663,   297,
     351,   297,   612,   613,   614,   615,   495,   314,   496,   352,
     621,   234,   353,   624,   625,   435,   627,   628,   629,   354,
     631,   355,   298,   634,   635,   356,   637,   638,   639,   640,
     357,   296,   672,   358,   359,   645,   360,   361,   647,   648,
     649,   650,   651,   522,   523,   524,   480,   658,   659,   660,
     426,   297,   296,   362,   910,   363,   912,   654,   445,   655,
     673,   364,   657,   365,   366,   367,   232,   405,   406,   407,
     408,   368,   297,   409,   410,   411,   317,   369,   320,   370,
      73,    73,   371,   372,   405,   406,   407,   408,   437,   296,
     409,   410,   411,   296,   491,   373,   376,   232,   378,   232,
     694,   379,   382,   383,   296,   438,   961,   439,    73,   297,
     440,    73,    73,   297,   702,   503,   441,   697,   285,   707,
     479,   442,   448,   711,   297,   497,   443,   963,   446,   470,
     473,   232,   471,   232,   405,   406,   407,   408,   489,    73,
     409,   410,   411,   474,   405,   406,   407,   408,   475,   502,
     409,   410,   411,   504,   653,   512,   505,    73,   506,   721,
     507,   723,   508,   509,   966,   510,   511,   513,   968,   514,
      73,    73,    73,    73,   550,   519,   520,   521,   558,   970,
     405,   406,   407,   408,   589,   849,   409,   410,   411,   339,
     749,   296,   743,   591,   751,   593,   753,   754,   542,   543,
     757,   545,   546,   547,   548,   549,   695,   405,   406,   407,
     408,   297,   788,   409,   410,   411,   405,   406,   407,   408,
     594,   599,   409,   410,   411,   296,   480,   603,   606,   608,
     296,   618,   646,   296,   656,   662,   664,   579,   580,   581,
     582,   583,   584,   585,   668,   297,   669,   232,   665,   602,
     297,   666,   605,   297,   670,   674,     2,     3,   104,   105,
     675,   676,   780,   781,   782,   710,   981,   387,   411,   785,
     786,   733,   392,   393,   307,   713,   396,   397,   398,   399,
     792,   717,   794,     2,     3,   104,   105,   701,   719,   720,
     722,   600,   236,   237,   238,   239,   724,   731,   607,   806,
     983,   807,   609,   808,   844,  1002,    73,    73,  1004,   725,
     734,   812,   813,   744,   814,   742,   816,   745,   763,   819,
     820,   770,   822,   823,   824,   825,     2,     3,   104,     5,
     829,   830,   776,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   809,   777,   778,   793,
     795,   847,   298,   796,   889,    73,   400,   401,   798,   800,
     801,   862,   802,   864,   972,   810,   299,   300,   301,   302,
     303,   304,   305,   660,   826,   827,    73,    73,   828,   875,
     833,   877,   878,   834,   835,   881,   836,   863,   837,    73,
      73,   885,   886,   838,   865,   868,    73,   866,   698,   872,
     873,   900,   949,   895,   925,   611,   896,   942,   943,   897,
     405,   406,   407,   408,   944,   902,   409,   410,   411,   950,
     907,   811,   400,   401,   953,   699,   954,   957,   958,   971,
     984,   987,   988,   991,   700,   661,   992,   999,   928,  1000,
     930,  1011,   789,   933,   934,     0,  1012,   472,     0,     0,
       0,   940,   941,     0,   402,   403,   404,     0,     0,     0,
       0,     0,   948,     0,     0,     0,     0,     0,   728,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   960,     0,
       0,     0,     0,   965,     0,     0,   772,     0,     0,     0,
       0,     0,     0,   973,     0,   974,   975,     0,     0,     0,
       0,     0,   977,   978,    73,    73,     0,     0,    73,     0,
       0,    73,     0,     0,     0,    73,     0,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   779,
       0,   773,   774,   775,     0,     0,   784,     0,     0,     0,
     995,     0,     0,   998,    74,    74,     0,     0,    73,     0,
      73,     0,   498,   805,   499,     0,     0,  1005,  1006,     0,
    1008,  1009,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1015,    74,     0,  1018,    74,    74,  1019,  1020,     0,
    1021,  1022,    73,     0,    73,     0,     0,  1025,  1026,     0,
       0,  1029,  1030,     0,     0,  1033,  1034,     0,     0,     0,
       0,     0,   831,    74,     0,     0,     0,     0,     0,     0,
       0,     0,   848,     0,     0,     0,   852,   854,   857,   859,
     861,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    74,    74,    74,     0,     0,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   340,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   867,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,    73,     0,     0,   915,   917,   920,   922,
     924,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,     0,     0,   927,     0,     0,     0,     0,
       0,     0,     0,     0,   935,   936,   937,   901,     0,     0,
     904,     0,   906,     0,     0,   909,   952,   911,     0,   400,
     401,   956,    73,     0,     0,   926,     0,     0,     0,     0,
       0,     0,    73,     0,    73,    73,    73,     0,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   402,   403,   404,     0,     0,     0,     0,     0,     0,
      74,    74,     0,     0,     0,     0,     0,     0,     0,     0,
     959,     0,     0,   962,   986,   964,     0,     0,   967,   990,
     969,     0,     0,     0,     0,     0,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,    73,
       0,     0,     0,     0,     0,     0,     0,     0,   980,    74,
       0,   210,   982,     0,     0,     0,   210,     0,     0,     0,
     210,     0,   210,   210,   233,     0,     0,   400,   401,     0,
      74,    74,     0,     0,   210,   210,     0,     0,     0,     0,
       0,     0,  1001,    74,    74,     0,  1003,     0,     0,   735,
      74,   736,     0,     0,     0,   233,   210,     0,    73,   402,
       0,    73,    73,    73,    73,    73,    73,     0,     0,     0,
       0,     0,    73,   233,     0,   400,   401,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   233,   233,   233,   233,
     210,   210,   210,   210,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   402,   403,   404,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,     0,    73,     0,    73,     0,     0,    73,     0,
      73,     0,    73,    73,    73,    73,    73,     0,    73,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,     0,     0,     0,    74,    74,
     210,     0,    74,     0,     0,    74,     0,     0,     0,    74,
       0,    74,    73,     0,     0,     0,     0,    73,     0,     0,
       0,     0,     0,    73,     0,     0,    73,     0,    73,     0,
       0,    73,     0,    73,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,    74,   737,     0,   738,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,     0,   210,    73,     0,     0,   400,   401,
      73,     0,     0,     0,     0,    73,    74,     0,    74,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,    73,     0,     0,     0,    73,
     402,   403,   404,     0,     0,     0,     0,     0,     0,     0,
       0,   233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   210,     0,     0,     0,     0,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,     0,   210,   210,     0,     0,     0,     0,     0,     0,
       0,     0,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   400,   401,
     210,   210,   210,     0,     0,    74,     0,    74,     0,   210,
     210,   210,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,     0,     0,   739,     0,
     740,     0,   210,   210,     0,   210,   210,   210,   210,   210,
       0,     0,     0,     0,     0,     0,   400,   401,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,    74,    74,
      74,   210,   210,   210,   210,   210,   210,   210,   402,   403,
     404,     0,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,   210,   233,     0,     0,     0,     0,     0,     0,
       0,     0,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,     0,    74,   233,     0,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   233,     0,
     233,   400,   401,     0,     0,     0,     0,     0,   500,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,    74,    74,    74,    74,    74,
      74,   400,   401,   402,   403,   404,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,     0,     0,   402,   403,   404,    74,     0,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,    74,     0,     0,    74,     0,    74,
       0,     0,    74,     0,    74,     0,    74,    74,    74,    74,
      74,     0,    74,     0,   210,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   560,     0,     0,    74,   400,   401,     0,
       0,    74,     0,     0,     0,     0,     0,    74,     0,     0,
      74,     0,    74,     0,     0,    74,     0,    74,   400,   401,
       0,     0,     0,   641,     0,     0,     0,     0,     0,   402,
     403,   404,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,     0,     0,     0,    74,
     402,   403,   404,   210,    74,     0,     0,     0,     0,    74,
     210,   101,   102,     0,     2,     3,     0,   214,     0,   210,
       0,     0,     0,   106,   107,     0,     0,     0,     0,    74,
       0,     0,     0,    74,     0,     0,     0,     0,     0,     0,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,     0,     0,   111,   112,
     113,   114,   115,     0,     0,     0,   210,     0,     0,   642,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     667,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,   119,   120,     0,     0,   121,   122,   123,
       0,     0,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
       0,   143,     0,     0,     0,   147,     0,     0,     0,     0,
     150,     0,     0,     0,     0,   152,     0,     0,   153,   154,
     155,   156,   157,   158,   159,   160,     0,     0,   161,     0,
       0,     0,     0,     0,     0,   162,     0,     0,   163,   210,
       0,     0,     0,     0,     0,     0,     0,     0,   210,   210,
     210,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,     0,   195,   196,   101,   102,     0,     2,     3,
       0,   214,   198,     0,     0,     0,     0,   106,   107,   200,
     201,     0,     0,     0,     0,     0,   202,   203,   204,     0,
       0,   205,   313,     0,     0,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
       0,     0,   111,   112,   113,   114,   115,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,   119,   120,     0,
       0,   121,   122,   123,     0,     0,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,     0,   143,     0,     0,     0,   147,
       0,     0,     0,     0,   150,     0,     0,     0,     0,   152,
       0,     0,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,   161,     0,     0,     0,     0,     0,     0,   162,
       0,     0,   163,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,     0,   195,   196,     0,
       0,     0,     0,     0,     0,     0,   198,     0,     0,     0,
       0,     0,     0,   200,   201,     0,     0,     0,     0,     0,
     202,   203,   204,     0,     0,   205,   617,   101,   102,   103,
       2,     3,   104,   105,     0,     0,     0,     0,     0,   106,
     107,   108,     0,     0,   279,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,     0,     0,
     280,   281,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,   111,   112,   113,   114,   115,     0,
     116,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,   119,
     120,     0,     0,   121,   122,   123,     0,     0,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,   149,     0,   150,   151,     0,     0,
       0,   152,     0,     0,   153,   154,   155,   156,   157,   158,
     159,   160,     0,     0,   161,     0,     0,     0,     0,     0,
       0,   162,     0,     0,   163,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,     0,   195,
     196,   197,     0,     0,   282,     0,     0,     0,   198,   199,
       0,     0,     0,     0,     0,   200,   201,     0,     0,     0,
       0,     0,   202,   203,   204,     0,   283,   205,   101,   102,
     103,     2,     3,   104,   105,     0,     0,     0,     0,     0,
     106,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,     0,   111,   112,   113,   114,   115,
       0,   116,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     119,   120,     0,     0,   121,   122,   123,     0,     0,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,   149,     0,   150,   151,     0,
       0,     0,   152,     0,     0,   153,   154,   155,   156,   157,
     158,   159,   160,     0,     0,   161,     0,     0,     0,     0,
       0,     0,   162,     0,     0,   163,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,     0,
     195,   196,   197,     0,     0,     0,     0,     0,     0,   198,
     199,     0,     0,     0,     0,     0,   200,   201,     0,     0,
       0,     0,     0,   202,   203,   204,   101,   102,   205,     2,
       3,     0,   214,     0,     0,     0,     0,     0,   106,   107,
       0,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,     0,     0,   109,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,     0,     0,   111,   112,   113,   114,   115,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   119,   120,
     400,   401,   121,   122,   123,     0,     0,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,     0,   143,     0,     0,     0,
     147,     0,   402,   403,   404,   150,     0,     0,     0,     0,
     152,     0,     0,   153,   154,   155,   156,   157,   158,   159,
     160,     0,     0,   161,     0,     0,     0,     0,   258,     0,
     162,     0,     0,   163,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,     0,   195,   196,
     101,   102,     0,     2,     3,     0,   214,   198,     0,     0,
       0,     0,   106,   107,   200,   201,     0,     0,     0,     0,
     413,   202,   203,   204,     0,     0,   205,     0,     0,     0,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   110,     0,     0,   111,   112,   113,
     114,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   119,   120,     0,     0,   121,   122,   123,     0,
       0,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,     0,
     143,     0,     0,     0,   147,     0,     0,     0,     0,   150,
       0,     0,     0,     0,   152,     0,     0,   153,   154,   155,
     156,   157,   158,   159,   160,     0,     0,   161,     0,     0,
       0,     0,     0,   262,   162,     0,     0,   163,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,     0,   195,   196,   101,   102,     0,     2,     3,     0,
     214,   198,     0,     0,     0,     0,   106,   107,   200,   201,
       0,     0,     0,     0,     0,   202,   203,   204,     0,     0,
     205,     0,     0,     0,   109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,   111,   112,   113,   114,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,     0,     0,
     121,   122,   123,     0,     0,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,     0,   143,     0,     0,     0,   147,     0,
       0,     0,     0,   150,     0,     0,     0,     0,   152,     0,
       0,   153,   154,   155,   156,   157,   158,   159,   160,     0,
       0,   161,     0,     0,     0,     0,     0,   264,   265,     0,
       0,   163,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   195,   196,   101,   102,
       0,     2,     3,     0,   214,   198,     0,     0,     0,     0,
     106,   107,   200,   201,     0,     0,     0,     0,     0,   202,
     203,   204,     0,     0,   205,     0,     0,     0,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,     0,   111,   112,   113,   114,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     119,   120,     0,     0,   121,   122,   123,     0,     0,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,     0,   143,     0,
       0,     0,   147,     0,     0,     0,     0,   150,     0,     0,
       0,     0,   152,     0,     0,   153,   154,   155,   156,   157,
     158,   159,   160,     0,     0,   161,     0,     0,     0,     0,
       0,   268,   162,     0,     0,   163,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,     0,
     195,   196,   101,   102,     0,     2,     3,     0,   214,   198,
       0,     0,     0,     0,   106,   107,   200,   201,     0,     0,
       0,     0,     0,   202,   203,   204,     0,     0,   205,     0,
       0,     0,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,     0,   111,
     112,   113,   114,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   120,     0,     0,   121,   122,
     123,     0,     0,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,     0,   143,     0,     0,     0,   147,     0,     0,     0,
       0,   150,     0,     0,     0,     0,   152,     0,     0,   153,
     154,   155,   156,   157,   158,   159,   160,     0,     0,   161,
       0,     0,     0,     0,     0,     0,   162,     0,     0,   163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,     0,   195,   196,     0,     0,     0,     0,
       0,     0,     0,   198,     0,     0,     0,     0,     0,     0,
     200,   201,     0,     0,     0,     0,     0,   202,   203,   204,
       1,     0,   205,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   850,     0,     0,     0,
       0,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     0,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    17,    18,     0,     0,
       0,     0,    19,     0,     0,     0,    20,     0,     0,     0,
       0,    21,    22,    23,    24,     0,     0,     0,    25,   851,
       0,     0,     0,     0,    26,     0,     0,    27,    28,    29,
       0,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
     400,   401,     0,     0,     0,     0,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,   402,   403,   404,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,    41,     0,    42,    43,
       0,    44,    45,     0,     0,     0,    46,    47,     0,    48,
       0,    49,     0,     0,    50,    51,    52,     0,    53,    54,
      55,     0,     0,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   400,   401,     0,     0,     0,
       0,     0,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,     0,     0,    63,    64,    65,     0,
       0,    66,    67,    68,    69,    70,     1,   402,   403,   404,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   855,     0,     0,     0,     0,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,     0,   400,   401,     0,     0,     0,     0,     0,    14,
       0,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,    16,    17,    18,     0,     0,     0,     0,    19,     0,
       0,     0,    20,     0,   402,   403,   404,    21,    22,    23,
      24,     0,     0,     0,    25,   856,     0,     0,     0,     0,
      26,     0,     0,    27,    28,    29,     0,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,   400,   401,     0,     0,
       0,     0,   387,   414,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,   402,   403,
     404,     0,    39,    40,     0,     0,     0,     0,     0,     0,
       0,     0,    41,     0,    42,    43,     0,    44,    45,     0,
       0,     0,    46,    47,   677,    48,     0,    49,     0,     0,
      50,    51,    52,     0,    53,    54,    55,     0,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   400,   401,     0,     0,     0,     0,     0,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
       0,     0,    63,    64,    65,     0,     0,    66,    67,    68,
      69,    70,     1,   402,   403,   404,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   913,     0,
       0,     0,     0,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,     0,     0,   400,   401,
       0,     0,     0,     0,     0,    14,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,    16,    17,    18,
       0,     0,     0,     0,    19,     0,     0,     0,    20,     0,
     402,   403,   404,    21,    22,    23,    24,     0,     0,     0,
      25,   914,     0,     0,     0,     0,    26,     0,     0,    27,
      28,    29,     0,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,   400,   401,     0,     0,     0,     0,   387,  -151,
    -151,  -151,  -151,   392,   393,  -151,  -151,   396,   397,   398,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,   402,   403,   404,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    41,     0,
      42,    43,     0,    44,    45,     0,     0,     0,    46,    47,
     678,    48,     0,    49,     0,     0,    50,    51,    52,     0,
      53,    54,    55,     0,     0,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   400,   401,     0,
       0,     0,     0,     0,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,     0,     0,    63,    64,
      65,     0,     0,    66,    67,    68,    69,    70,     1,  -151,
    -151,  -151,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   918,     0,     0,     0,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,   400,   401,     0,     0,     0,     0,
       0,    14,     0,     0,     0,     0,     0,    15,     0,     0,
       0,     0,     0,    16,    17,    18,     0,     0,     0,     0,
      19,     0,     0,     0,    20,     0,   402,   403,   404,    21,
      22,    23,    24,     0,     0,     0,    25,   919,     0,     0,
       0,     0,    26,     0,     0,    27,    28,    29,     0,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,   400,   401,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
     402,   403,   404,     0,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,    41,     0,    42,    43,     0,    44,
      45,     0,     0,     0,    46,    47,   679,    48,     0,    49,
       0,     0,    50,    51,    52,     0,    53,    54,    55,     0,
       0,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,     0,     0,    63,    64,    65,     0,     0,    66,
      67,    68,    69,    70,     1,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     951,     0,     0,     0,     0,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,     0,     0,
     400,   401,     0,     0,     0,     0,     0,    14,     0,     0,
       0,     0,     0,    15,     0,     0,     0,     0,     0,    16,
      17,    18,     0,     0,     0,     0,    19,     0,     0,     0,
      20,     0,   402,   403,   404,    21,    22,    23,    24,     0,
       0,     0,    25,     0,     0,     0,     0,     0,    26,     0,
       0,    27,    28,    29,     0,    30,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,   400,   401,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,   402,   403,   404,     0,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
      41,     0,    42,    43,     0,    44,    45,     0,     0,     0,
      46,    47,   680,    48,     0,    49,     0,     0,    50,    51,
      52,     0,    53,    54,    55,     0,     0,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,     0,     0,
      63,    64,    65,     0,     0,    66,    67,    68,    69,    70,
       1,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   955,     0,     0,     0,
       0,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,     0,     0,   400,   401,     0,     0,
       0,     0,     0,    14,     0,     0,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    17,    18,     0,     0,
       0,     0,    19,     0,     0,     0,    20,     0,   402,   403,
     404,    21,    22,    23,    24,     0,     0,     0,    25,     0,
       0,     0,     0,     0,    26,     0,     0,    27,    28,    29,
       0,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
     400,   401,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,   402,   403,   404,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,    41,     0,    42,    43,
       0,    44,    45,     0,     0,     0,    46,    47,   681,    48,
       0,    49,     0,     0,    50,    51,    52,     0,    53,    54,
      55,     0,     0,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,     0,     0,    63,    64,    65,     0,
       0,    66,    67,    68,    69,    70,     1,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   985,     0,     0,     0,     0,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,     0,   400,   401,     0,     0,     0,     0,     0,    14,
       0,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,    16,    17,    18,     0,     0,     0,     0,    19,     0,
       0,     0,    20,     0,   402,   403,   404,    21,    22,    23,
      24,     0,     0,     0,    25,     0,     0,     0,     0,     0,
      26,     0,     0,    27,    28,    29,     0,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,   400,   401,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,   402,   403,
     404,     0,    39,    40,     0,     0,     0,     0,     0,     0,
       0,     0,    41,     0,    42,    43,     0,    44,    45,     0,
       0,     0,    46,    47,   682,    48,     0,    49,     0,     0,
      50,    51,    52,     0,    53,    54,    55,     0,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
       0,     0,    63,    64,    65,     0,     0,    66,    67,    68,
      69,    70,     1,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   989,     0,
       0,     0,     0,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,     0,     0,   400,   401,
       0,     0,     0,     0,     0,    14,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,    16,    17,    18,
       0,     0,     0,     0,    19,     0,     0,     0,    20,     0,
     402,   403,   404,    21,    22,    23,    24,     0,     0,     0,
      25,     0,     0,     0,     0,     0,    26,     0,     0,    27,
      28,    29,     0,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,   400,   401,     0,     0,     0,     0,     0,     0,
       0,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,   402,   403,   404,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    41,     0,
      42,    43,     0,    44,    45,     0,     0,     0,    46,    47,
     683,    48,     0,    49,     0,     0,    50,    51,    52,     0,
      53,    54,    55,     1,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   424,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     400,   401,     0,     0,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,    14,     0,    63,    64,
      65,     0,    15,    66,    67,    68,    69,    70,    16,    17,
      18,     0,   402,   403,   404,    19,     0,     0,     0,    20,
       0,     0,     0,     0,    21,    22,    23,    24,     0,     0,
       0,    25,     0,   425,     0,     0,     0,    26,     0,     0,
      27,    28,    29,     0,    30,     0,     0,     0,    31,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,    41,
     449,    42,    43,     0,    44,    45,     0,     0,     0,    46,
      47,     0,    48,     0,    49,     0,     0,    50,    51,    52,
       0,    53,    54,    55,   428,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     429,   430,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   400,   401,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,     0,     0,    61,    62,    14,     0,    63,
      64,    65,     0,    15,    66,    67,    68,    69,    70,    16,
      17,    18,     0,   402,   403,   404,    19,     0,     0,     0,
      20,     0,     0,     0,     0,    21,    22,    23,    24,     0,
       0,     0,    25,     0,     0,     0,     0,     0,    26,     0,
       0,    27,    28,    29,     0,    30,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
      41,   450,    42,    43,     0,    44,    45,     0,     0,     0,
      46,    47,     0,    48,     0,    49,     0,     0,    50,    51,
      52,     0,    53,    54,    55,     1,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   601,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   400,   401,     0,     0,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,    14,     0,
      63,    64,    65,     0,    15,    66,    67,    68,    69,    70,
      16,    17,    18,     0,   402,   403,   404,    19,     0,     0,
       0,    20,     0,     0,     0,     0,    21,    22,    23,    24,
       0,     0,     0,    25,     0,     0,     0,     0,     0,    26,
       0,     0,    27,    28,    29,     0,    30,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,     0,     0,
       0,    41,   452,    42,    43,     0,    44,    45,     0,     0,
       0,    46,    47,     0,    48,     0,    49,     0,     0,    50,
      51,    52,     0,    53,    54,    55,     1,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,   604,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   400,   401,     0,     0,    56,     0,    57,
      58,    59,    60,     0,     0,     0,     0,    61,    62,    14,
       0,    63,    64,    65,     0,    15,    66,    67,    68,    69,
      70,    16,    17,    18,     0,   402,   403,   404,    19,     0,
       0,     0,    20,     0,     0,     0,     0,    21,    22,    23,
      24,     0,     0,     0,    25,     0,     0,     0,     0,     0,
      26,     0,     0,    27,    28,    29,     0,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,    39,    40,     0,     0,     0,     0,     0,     0,
       0,     0,    41,   453,    42,    43,     0,    44,    45,     0,
       0,     0,    46,    47,     0,    48,     0,    49,     0,     0,
      50,    51,    52,     0,    53,    54,    55,     1,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   853,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   400,   401,     0,     0,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
      14,     0,    63,    64,    65,     0,    15,    66,    67,    68,
      69,    70,    16,    17,    18,     0,   402,   403,   404,    19,
       0,     0,     0,    20,     0,     0,     0,     0,    21,    22,
      23,    24,     0,     0,     0,    25,     0,     0,     0,     0,
       0,    26,     0,     0,    27,    28,    29,     0,    30,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,    39,    40,     0,     0,     0,     0,     0,
       0,     0,     0,    41,   454,    42,    43,     0,    44,    45,
       0,     0,     0,    46,    47,     0,    48,     0,    49,     0,
       0,    50,    51,    52,     0,    53,    54,    55,     1,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   858,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   400,   401,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,     0,     0,    61,
      62,    14,     0,    63,    64,    65,     0,    15,    66,    67,
      68,    69,    70,    16,    17,    18,     0,   402,   403,   404,
      19,     0,     0,     0,    20,     0,     0,     0,     0,    21,
      22,    23,    24,     0,     0,     0,    25,     0,     0,     0,
       0,     0,    26,     0,     0,    27,    28,    29,     0,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,    41,   456,    42,    43,     0,    44,
      45,     0,     0,     0,    46,    47,     0,    48,     0,    49,
       0,     0,    50,    51,    52,     0,    53,    54,    55,     1,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   860,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   400,   401,     0,     0,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,    14,     0,    63,    64,    65,     0,    15,    66,
      67,    68,    69,    70,    16,    17,    18,     0,   402,   403,
     404,    19,     0,     0,     0,    20,     0,     0,     0,     0,
      21,    22,    23,    24,     0,     0,     0,    25,     0,     0,
       0,     0,     0,    26,     0,     0,    27,    28,    29,     0,
      30,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,    41,   459,    42,    43,     0,
      44,    45,     0,     0,     0,    46,    47,     0,    48,     0,
      49,     0,     0,    50,    51,    52,     0,    53,    54,    55,
       1,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   916,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   400,   401,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,    14,     0,    63,    64,    65,     0,    15,
      66,    67,    68,    69,    70,    16,    17,    18,     0,   402,
     403,   404,    19,     0,     0,     0,    20,     0,     0,     0,
       0,    21,    22,    23,    24,     0,     0,     0,    25,     0,
       0,     0,     0,     0,    26,     0,     0,    27,    28,    29,
       0,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,    41,   460,    42,    43,
       0,    44,    45,     0,     0,     0,    46,    47,     0,    48,
       0,    49,     0,     0,    50,    51,    52,     0,    53,    54,
      55,     1,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   921,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   400,   401,
       0,     0,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,    14,     0,    63,    64,    65,     0,
      15,    66,    67,    68,    69,    70,    16,    17,    18,     0,
     402,   403,   404,    19,     0,     0,     0,    20,     0,     0,
       0,     0,    21,    22,    23,    24,     0,     0,     0,    25,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
      29,     0,    30,     0,     0,     0,    31,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,    41,   462,    42,
      43,     0,    44,    45,     0,     0,     0,    46,    47,     0,
      48,     0,    49,     0,     0,    50,    51,    52,     0,    53,
      54,    55,     1,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   923,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   400,
     401,     0,     0,    56,     0,    57,    58,    59,    60,     0,
       0,     0,     0,    61,    62,    14,     0,    63,    64,    65,
       0,    15,    66,    67,    68,    69,    70,    16,    17,    18,
       0,   402,   403,   404,    19,     0,     0,     0,    20,     0,
       0,     0,     0,    21,    22,    23,    24,     0,     0,     0,
      25,     0,     0,     0,     0,     0,    26,     0,     0,    27,
      28,    29,     0,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    41,   463,
      42,    43,     0,    44,    45,     0,     0,     0,    46,    47,
       0,    48,     0,    49,     0,     0,    50,    51,    52,     0,
      53,    54,    55,     1,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     400,   401,     0,     0,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,    14,     0,    63,    64,
      65,     0,    15,    66,    67,    68,    69,    70,    16,    17,
      18,     0,   402,   403,   404,    19,     0,     0,     0,    20,
       0,     0,     0,     0,    21,    22,    23,    24,     0,     0,
       0,    25,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,    29,     0,    30,     0,     0,     0,    31,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,    41,
     464,    42,    43,     0,    44,    45,     0,     0,     0,    46,
      47,     0,    48,     0,    49,     0,     0,    50,    51,    52,
       0,    53,    54,    55,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   400,   401,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,     0,     0,    61,    62,    14,     0,    63,
      64,    65,   890,    15,    66,    67,    68,    69,    70,    16,
      17,    18,     0,   402,   403,   404,    19,     0,     0,     0,
      20,     0,     0,     0,     0,    21,    22,    23,    24,     0,
       0,     0,    25,     0,     0,     0,     0,     0,    26,     0,
       0,    27,    28,    29,     0,    30,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
      41,   465,    42,    43,     0,    44,    45,     0,     0,     0,
      46,    47,     0,    48,     0,    49,     0,     0,    50,    51,
      52,     0,    53,    54,    55,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   400,   401,     0,     0,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,    14,     0,
      63,    64,    65,     0,    15,    66,    67,    68,    69,    70,
      16,    17,    18,     0,   402,   403,   404,    19,     0,     0,
       0,    20,     0,     0,     0,     0,    21,    22,    23,    24,
       0,     0,     0,    25,     0,     0,     0,     0,     0,    26,
       0,     0,    27,    28,    29,     0,    30,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,     0,     0,
       0,    41,   476,    42,    43,     0,    44,    45,     0,     0,
       0,    46,    47,     0,    48,     0,    49,     0,     0,    50,
      51,    52,     0,    53,    54,    55,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   400,
     401,     0,     0,     0,     0,     0,     0,    56,     0,    57,
      58,    59,    60,     0,     0,     0,     0,    61,    62,     0,
       0,    63,    64,    65,     0,     0,    66,    67,    68,    69,
      70,   402,   403,   404,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,     0,     0,     0,     0,   400,   401,     0,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,     0,     0,   402,   403,   404,
       0,     0,     0,     0,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,     0,     0,     0,
       0,     0,     0,   400,   401,     0,     0,     0,     0,     0,
       0,   684,     0,     0,     0,     0,   400,   401,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,   402,   403,   404,   400,   401,
       0,     0,     0,     0,     0,     0,     0,     0,   402,   403,
     404,   400,   401,     0,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,     0,     0,     0,
     402,   403,   404,   400,   401,     0,     0,   685,     0,     0,
       0,     0,     0,   402,   403,   404,     0,     0,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,   402,   403,   404,   400,   401,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   686,     0,     0,     0,     0,
     402,   403,   404,   400,   401,     0,     0,     0,   687,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
     688,     0,     0,     0,     0,   402,   403,   404,   400,   401,
       0,     0,     0,   689,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,     0,     0,   400,
     401,     0,     0,     0,     0,   690,     0,     0,     0,     0,
     402,   403,   404,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,     0,     0,     0,     0,
       0,   402,   403,   404,     0,     0,     0,     0,   400,   401,
     691,     0,     0,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,     0,
     402,   403,   404,   400,   401,   692,     0,     0,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   400,   401,     0,   402,   403,   404,     0,     0,
     693,     0,     0,     0,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,     0,     0,     0,
       0,   696,   400,   401,   402,   403,   404,     0,     0,     0,
       0,     0,     0,     0,     0,   400,   401,     0,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,   402,   403,   404,   400,   401,     0,
     703,     0,     0,     0,     0,     0,     0,   402,   403,   404,
       0,     0,     0,     0,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,     0,     0,   402,
     403,   404,     0,   400,   401,   708,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,   709,   402,   403,   404,   400,   401,
       0,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   712,     0,     0,     0,     0,     0,
     402,   403,   404,   400,   401,     0,     0,   746,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,     0,     0,     0,     0,   400,   401,     0,     0,   762,
       0,     0,     0,     0,     0,   402,   403,   404,   400,   401,
       0,     0,     0,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,     0,   402,   403,   404,
     400,   401,     0,     0,     0,   764,     0,     0,     0,     0,
     402,   403,   404,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,     0,     0,     0,     0,
       0,     0,   402,   403,   404,     0,     0,   400,   401,     0,
     765,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,     0,     0,   402,
     403,   404,   400,   401,     0,   768,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,     0,
       0,     0,     0,     0,     0,     0,     0,   769,     0,     0,
       0,     0,   400,   401,   402,   403,   404,     0,     0,     0,
     771,     0,     0,     0,     0,     0,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,     0,
     400,   401,   783,     0,   402,   403,   404,     0,     0,     0,
       0,     0,     0,   400,   401,     0,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,     0,
       0,     0,   402,   403,   404,   400,   401,     0,     0,   841,
       0,     0,     0,     0,     0,   402,   403,   404,     0,     0,
       0,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,     0,     0,     0,   402,   403,   404,
       0,     0,     0,     0,   843,   400,   401,     0,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   846,   400,   401,   402,   403,   404,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   869,     0,     0,     0,     0,   402,   403,   404,
     400,   401,     0,     0,     0,   870,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,     0,
       0,     0,     0,     0,     0,     0,     0,   871,   400,   401,
       0,     0,   402,   403,   404,     0,     0,     0,     0,     0,
       0,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,     0,     0,     0,     0,     0,     0,
     402,   403,   404,     0,     0,     0,     0,   945,   400,   401,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   400,   401,   946,     0,     0,
     402,   403,   404,     0,     0,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   402,   403,   404,
     400,   401,   947,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   477,   400,
     401,     0,   402,   403,   404,     0,     0,     0,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   402,   403,   404,   400,   401,     0,     0,   478,     0,
       0,     0,     0,     0,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,     0,     0,     0,
       0,     0,   400,   401,     0,   555,   402,   403,   404,     0,
       0,     0,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   402,   403,   404,     0,   400,   401,
     559,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,     0,     0,   626,
     402,   403,   404,   400,   401,     0,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   400,   401,     0,   630,   402,   403,   404,     0,     0,
       0,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,     0,     0,     0,     0,     0,     0,
     400,   401,   632,   402,   403,   404,     0,     0,     0,     0,
       0,     0,     0,   400,   401,     0,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,     0,
       0,     0,   402,   403,   404,   400,   401,     0,   633,     0,
       0,     0,     0,     0,     0,   402,   403,   404,     0,     0,
       0,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,     0,     0,     0,   402,   403,   404,
     400,   401,     0,   636,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,   704,   402,   403,   404,   400,   401,     0,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
     705,     0,     0,     0,     0,     0,     0,   402,   403,   404,
     400,   401,     0,   706,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,     0,     0,     0,
       0,     0,     0,   400,   401,   741,     0,     0,     0,     0,
       0,     0,   402,   403,   404,     0,   400,   401,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,   402,   403,   404,   400,   401,
     747,     0,     0,     0,     0,     0,     0,     0,   402,   403,
     404,     0,     0,     0,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,     0,     0,     0,
     402,   403,   404,   400,   401,   748,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,   402,   403,   404,   400,   401,
     750,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   752,     0,     0,     0,     0,     0,     0,
     402,   403,   404,   400,   401,     0,   755,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,     0,     0,     0,     0,   400,   401,     0,   756,     0,
       0,     0,     0,     0,     0,   402,   403,   404,   400,   401,
       0,     0,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,     0,     0,   402,   403,   404,
     400,   401,     0,   758,     0,     0,     0,     0,     0,     0,
     402,   403,   404,     0,     0,     0,     0,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,     0,   402,   403,   404,     0,   400,   401,   759,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,     0,     0,     0,   402,   403,
     404,   400,   401,   760,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,     0,     0,     0,
       0,     0,     0,     0,     0,   761,     0,     0,     0,     0,
       0,     0,     0,   402,   403,   404,   400,   401,   766,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,     0,     0,     0,   400,   401,
     767,     0,     0,     0,     0,     0,     0,     0,   402,   403,
     404,   400,   401,     0,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,     0,     0,     0,
     402,   403,   404,   400,   401,     0,   787,     0,     0,     0,
       0,     0,     0,   402,   403,   404,     0,     0,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,   402,   403,   404,   400,   401,
       0,   815,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,     0,     0,
     402,   403,   404,   400,   401,     0,   817,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,     0,     0,     0,     0,     0,     0,     0,   818,     0,
       0,     0,     0,     0,     0,   402,   403,   404,   400,   401,
       0,   821,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,     0,     0,     0,     0,     0,
       0,   400,   401,   842,     0,     0,     0,     0,     0,     0,
     402,   403,   404,     0,   400,   401,     0,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,     0,     0,   402,   403,   404,   400,   401,   845,     0,
       0,     0,     0,     0,     0,     0,   402,   403,   404,     0,
       0,     0,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,     0,     0,     0,   402,   403,
     404,   400,   401,   874,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,     0,     0,   402,   403,   404,   400,   401,   876,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   879,     0,     0,     0,     0,     0,     0,   402,   403,
     404,   400,   401,     0,   880,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,     0,     0,
       0,     0,     0,   400,   401,     0,   882,     0,     0,     0,
       0,     0,     0,   402,   403,   404,   400,   401,     0,     0,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,     0,     0,   402,   403,   404,   400,   401,
       0,   883,     0,     0,     0,     0,     0,     0,   402,   403,
     404,     0,     0,     0,     0,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,     0,     0,
     402,   403,   404,     0,   400,   401,   884,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,     0,     0,     0,   402,   403,   404,   400,
     401,   887,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,     0,   888,     0,     0,     0,     0,     0,     0,
       0,   402,   403,   404,   400,   401,   898,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,     0,     0,     0,     0,     0,   400,   401,   929,     0,
       0,     0,     0,     0,     0,     0,   402,   403,   404,   400,
     401,     0,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,     0,     0,     0,   402,   403,
     404,   400,   401,     0,   931,     0,     0,     0,     0,     0,
       0,   402,   403,   404,     0,     0,     0,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,     0,     0,   402,   403,   404,   400,   401,     0,   932,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,     0,     0,   402,   403,
     404,   400,   401,     0,   938,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,     0,     0,
       0,     0,     0,     0,     0,     0,   939,     0,     0,     0,
       0,     0,     0,   402,   403,   404,   400,   401,     0,   976,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,     0,     0,     0,     0,     0,     0,   400,
     401,   979,     0,     0,     0,     0,     0,     0,   402,   403,
     404,     0,   400,   401,     0,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,     0,     0,
       0,   402,   403,   404,   400,   401,   993,     0,     0,     0,
       0,     0,     0,     0,   402,   403,   404,     0,     0,     0,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,     0,     0,     0,   402,   403,   404,   400,
     401,   994,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,     0,     0,
       0,   402,   403,   404,   400,   401,   996,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   997,
       0,     0,     0,     0,     0,     0,   402,   403,   404,   400,
     401,     0,  1007,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,     0,     0,     0,     0,
       0,   400,   401,     0,  1010,     0,     0,     0,     0,     0,
       0,   402,   403,   404,   400,   401,     0,     0,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,     0,     0,   402,   403,   404,   400,   401,     0,  1013,
       0,     0,     0,     0,     0,     0,   402,   403,   404,     0,
       0,     0,     0,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,     0,     0,   402,   403,
     404,     0,   400,   401,  1014,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,     0,     0,     0,   402,   403,   404,   400,   401,  1016,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,     0,     0,     0,     0,     0,     0,     0,
       0,  1017,     0,     0,     0,     0,     0,     0,     0,   402,
     403,   404,   400,   401,  1023,     0,     0,     0,   716,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   400,   401,  1024,     0,     0,     0,
     718,     0,     0,     0,   402,   403,   404,   400,   401,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,     0,     0,     0,     0,   402,   403,   404,   400,
     401,     0,  1027,     0,     0,     0,     0,     0,     0,   402,
     403,   404,     0,     0,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,     0,     0,     0,
       0,   402,   403,   404,     0,     0,     0,  1028,     0,   797,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   400,   401,
       0,     0,  1031,     0,   799,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1032,     0,     0,     0,     0,     0,
     402,   403,   404,   400,   401,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   402,   403,   404
};

static const yytype_int16 yycheck[] =
{
      16,    17,    18,    19,     7,     8,    92,    93,   245,   275,
       7,     8,    19,    94,    95,    96,    97,    31,    32,     7,
       8,     3,    28,     4,     5,   244,    42,    43,   244,    45,
      46,    47,    48,    49,    50,   244,    52,    53,    54,    55,
     226,    23,   244,    37,    60,     7,     8,     9,    10,    25,
      66,    67,    68,    34,    70,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    84,    85,
      86,    77,     3,    89,     7,     8,     9,    28,    85,   244,
      31,    32,    71,    25,    90,    91,    92,    93,    70,    29,
      30,    80,    23,     6,   110,   111,     9,    10,    15,   115,
     116,    25,    25,    20,    70,    18,    72,    24,    59,    26,
     244,   297,    88,    25,    26,    27,    28,     3,     3,    31,
      32,    33,   244,    70,   310,    72,    77,     7,     8,     9,
      10,   244,     0,    19,    19,     3,   152,    23,    23,    90,
      91,    92,    93,     3,   113,   114,    88,    78,     3,   165,
      25,    26,    27,    28,    67,    23,    31,    32,    33,     3,
       7,     8,     3,    23,    88,    88,    99,   244,    23,     7,
       8,     9,    52,   244,     3,    24,   145,   146,   147,    23,
      29,    30,    23,     4,     5,   201,    35,    36,   244,   205,
      25,    26,    27,    28,    23,     4,    31,    32,    33,     7,
       8,     9,   468,     4,   470,   442,     8,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
     133,   244,   135,   136,   137,   244,   139,     7,   141,   447,
     448,   144,    25,    26,    27,    28,    10,    78,    31,    32,
      33,   244,   258,    10,     0,     1,   262,   244,   264,   265,
     244,   243,   268,   334,   335,   336,   244,   273,   274,    25,
      25,    26,    27,    28,   113,   114,    31,    32,    33,   243,
     286,     7,     8,     9,   243,   243,   245,     7,     8,     9,
      10,   243,   298,   299,   300,   301,   302,   303,   304,   305,
      38,    39,   244,   243,     3,   309,   113,   114,   244,   244,
      25,    26,    27,    28,    79,   218,    31,    32,    33,   244,
     316,   228,    60,   226,    23,   244,   332,   333,   244,    25,
      26,    27,    28,   244,   275,    31,    32,    33,   145,   146,
     147,   243,    10,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
       4,     5,   368,     7,     8,   436,    10,   244,   309,   375,
     376,   244,   378,   379,    94,   316,   382,   383,   243,    78,
     245,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,    88,
     307,     6,     7,     8,     9,    10,   412,   413,   414,     3,
     416,     3,   418,   836,   837,   838,    25,    26,    27,    28,
     245,   244,    31,    32,    33,   243,   164,   603,   504,    23,
     244,    23,   438,   439,   440,   441,   243,   443,   245,   244,
     446,   437,   244,   449,   450,    19,   452,   453,   454,   244,
     456,   244,    25,   459,   460,   244,   462,   463,   464,   465,
     244,     3,   245,   244,   244,   471,   244,   244,   474,   475,
     476,   477,   478,     7,     8,     9,   652,     7,     8,     9,
     226,    23,     3,   244,    78,   244,    78,   493,    19,   495,
     245,   244,   498,   244,   244,   244,   437,    25,    26,    27,
      28,   244,    23,    31,    32,    33,   502,   244,   504,   244,
       0,     1,   244,   244,    25,    26,    27,    28,   243,     3,
      31,    32,    33,     3,    25,   244,   244,   468,   244,   470,
     245,   244,   244,   244,     3,   244,    78,   244,    28,    23,
     244,    31,    32,    23,   550,   245,   244,   243,   286,   555,
     296,   243,   243,   559,    23,    25,   244,    78,   244,   243,
     243,   502,   244,   504,    25,    26,    27,    28,   306,    59,
      31,    32,    33,   244,    25,    26,    27,    28,   244,   243,
      31,    32,    33,   243,   491,     7,   245,    77,   245,   595,
     245,   597,   245,   245,    78,   245,   245,     8,    78,     9,
      90,    91,    92,    93,   244,   343,   344,   345,   243,    78,
      25,    26,    27,    28,    19,   791,    31,    32,    33,   109,
     626,     3,   618,     7,   630,     8,   632,   633,   366,   367,
     636,   369,   370,   371,   372,   373,   245,    25,    26,    27,
      28,    23,   713,    31,    32,    33,    25,    26,    27,    28,
       9,    88,    31,    32,    33,     3,   832,    70,    19,    85,
       3,    97,     7,     3,    68,    23,    19,   405,   406,   407,
     408,   409,   410,   411,   245,    23,   245,   618,    19,   425,
      23,    19,   428,    23,   245,   244,     7,     8,     9,    10,
     244,   244,   698,   699,   700,    10,    78,    24,    33,   705,
     706,   608,    29,    30,    25,    86,    33,    34,    35,    36,
     716,   244,   718,     7,     8,     9,    10,   245,   244,   244,
       7,   424,     7,     8,     9,    10,     8,    19,   431,   735,
      78,   737,   435,   739,   245,    78,   226,   227,    78,     9,
      73,   747,   748,    19,   750,    25,   752,    96,   243,   755,
     756,   244,   758,   759,   760,   761,     7,     8,     9,    10,
     766,   767,   245,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     8,   245,   245,   245,
     245,   787,    25,   245,   245,   275,   113,   114,   244,   244,
     244,   797,    19,   799,   245,    68,    39,    40,    41,    42,
      43,    44,    45,     9,     7,   243,   296,   297,   243,   815,
      50,   817,   818,    50,    50,   821,   243,   245,   243,   309,
     310,   827,   828,   243,   245,    19,   316,   245,   243,   245,
     244,    19,    71,   839,    72,   437,   842,   245,   245,   845,
      25,    26,    27,    28,   245,   851,    31,    32,    33,    78,
     856,   744,   113,   114,    78,   243,    78,    78,    78,    72,
      78,    78,    78,    78,   243,   502,    78,    78,   874,    78,
     876,    78,   714,   879,   880,    -1,    78,   286,    -1,    -1,
      -1,   887,   888,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,   898,    -1,    -1,    -1,    -1,    -1,   601,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   914,    -1,
      -1,    -1,    -1,   919,    -1,    -1,   662,    -1,    -1,    -1,
      -1,    -1,    -1,   929,    -1,   931,   932,    -1,    -1,    -1,
      -1,    -1,   938,   939,   424,   425,    -1,    -1,   428,    -1,
      -1,   431,    -1,    -1,    -1,   435,    -1,   437,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   697,
      -1,   664,   665,   666,    -1,    -1,   704,    -1,    -1,    -1,
     976,    -1,    -1,   979,     0,     1,    -1,    -1,   468,    -1,
     470,    -1,   243,   729,   245,    -1,    -1,   993,   994,    -1,
     996,   997,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1007,    28,    -1,  1010,    31,    32,  1013,  1014,    -1,
    1016,  1017,   502,    -1,   504,    -1,    -1,  1023,  1024,    -1,
      -1,  1027,  1028,    -1,    -1,  1031,  1032,    -1,    -1,    -1,
      -1,    -1,   770,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   788,    -1,    -1,    -1,   792,   793,   794,   795,
     796,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   802,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   601,    -1,   603,    -1,    -1,   862,   863,   864,   865,
     866,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   618,    -1,
      -1,    -1,    -1,    -1,    -1,   873,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   882,   883,   884,   850,    -1,    -1,
     853,    -1,   855,    -1,    -1,   858,   902,   860,    -1,   113,
     114,   907,   652,    -1,    -1,   868,    -1,    -1,    -1,    -1,
      -1,    -1,   662,    -1,   664,   665,   666,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     913,    -1,    -1,   916,   960,   918,    -1,    -1,   921,   965,
     923,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,   729,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   951,   275,
      -1,    15,   955,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      24,    -1,    26,    27,    28,    -1,    -1,   113,   114,    -1,
     296,   297,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,   985,   309,   310,    -1,   989,    -1,    -1,   243,
     316,   245,    -1,    -1,    -1,    59,    60,    -1,   788,   145,
      -1,   791,   792,   793,   794,   795,   796,    -1,    -1,    -1,
      -1,    -1,   802,    77,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   832,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     850,    -1,    -1,   853,    -1,   855,    -1,    -1,   858,    -1,
     860,    -1,   862,   863,   864,   865,   866,    -1,   868,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,   424,   425,
     164,    -1,   428,    -1,    -1,   431,    -1,    -1,    -1,   435,
      -1,   437,   902,    -1,    -1,    -1,    -1,   907,    -1,    -1,
      -1,    -1,    -1,   913,    -1,    -1,   916,    -1,   918,    -1,
      -1,   921,    -1,   923,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   468,    -1,   470,   243,    -1,   245,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   951,    -1,    -1,   228,   955,    -1,    -1,   113,   114,
     960,    -1,    -1,    -1,    -1,   965,   502,    -1,   504,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,   985,    -1,    -1,    -1,   989,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   286,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,   306,   307,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
     334,   335,   336,    -1,    -1,   601,    -1,   603,    -1,   343,
     344,   345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   618,    -1,    -1,    -1,    -1,    -1,   243,    -1,
     245,    -1,   366,   367,    -1,   369,   370,   371,   372,   373,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   652,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   662,    -1,   664,   665,
     666,   405,   406,   407,   408,   409,   410,   411,   145,   146,
     147,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   436,   437,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   729,   468,    -1,   470,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   502,    -1,
     504,   113,   114,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   788,    -1,    -1,   791,   792,   793,   794,   795,
     796,   113,   114,   145,   146,   147,   802,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,   145,   146,   147,   832,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,   850,    -1,    -1,   853,    -1,   855,
      -1,    -1,   858,    -1,   860,    -1,   862,   863,   864,   865,
     866,    -1,   868,    -1,   608,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   618,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,   902,   113,   114,    -1,
      -1,   907,    -1,    -1,    -1,    -1,    -1,   913,    -1,    -1,
     916,    -1,   918,    -1,    -1,   921,    -1,   923,   113,   114,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   951,    -1,    -1,    -1,   955,
     145,   146,   147,   697,   960,    -1,    -1,    -1,    -1,   965,
     704,     4,     5,    -1,     7,     8,    -1,    10,    -1,   713,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,   985,
      -1,    -1,    -1,   989,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,
      63,    64,    65,    -1,    -1,    -1,   770,    -1,    -1,   245,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     245,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,    -1,    -1,   110,   111,   112,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,   134,    -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,    -1,    -1,   161,    -1,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,   171,   873,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   882,   883,
     884,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,    -1,   216,   217,     4,     5,    -1,     7,     8,
      -1,    10,   225,    -1,    -1,    -1,    -1,    16,    17,   232,
     233,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,    -1,
      -1,   244,   245,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,    -1,   134,    -1,    -1,    -1,   138,
      -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
      -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,   168,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,    -1,   216,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,
      -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,
     239,   240,   241,    -1,    -1,   244,   245,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    61,    62,    63,    64,    65,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,
     107,    -1,    -1,   110,   111,   112,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,    -1,   141,    -1,   143,   144,    -1,    -1,
      -1,   148,    -1,    -1,   151,   152,   153,   154,   155,   156,
     157,   158,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,    -1,   216,
     217,   218,    -1,    -1,   221,    -1,    -1,    -1,   225,   226,
      -1,    -1,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,   239,   240,   241,    -1,   243,   244,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,    -1,   110,   111,   112,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,   141,    -1,   143,   144,    -1,
      -1,    -1,   148,    -1,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,    -1,    -1,   161,    -1,    -1,    -1,    -1,
      -1,    -1,   168,    -1,    -1,   171,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,    -1,
     216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,
     226,    -1,    -1,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,   239,   240,   241,     4,     5,   244,     7,
       8,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
     113,   114,   110,   111,   112,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    -1,   134,    -1,    -1,    -1,
     138,    -1,   145,   146,   147,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,    -1,    -1,   161,    -1,    -1,    -1,    -1,   166,    -1,
     168,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,    -1,   216,   217,
       4,     5,    -1,     7,     8,    -1,    10,   225,    -1,    -1,
      -1,    -1,    16,    17,   232,   233,    -1,    -1,    -1,    -1,
     243,   239,   240,   241,    -1,    -1,   244,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,    -1,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,    -1,
     134,    -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,   161,    -1,    -1,
      -1,    -1,    -1,   167,   168,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,    -1,   216,   217,     4,     5,    -1,     7,     8,    -1,
      10,   225,    -1,    -1,    -1,    -1,    16,    17,   232,   233,
      -1,    -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,
     244,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,    -1,
     110,   111,   112,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,    -1,   134,    -1,    -1,    -1,   138,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,    -1,
      -1,   161,    -1,    -1,    -1,    -1,    -1,   167,   168,    -1,
      -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,    -1,   216,   217,     4,     5,
      -1,     7,     8,    -1,    10,   225,    -1,    -1,    -1,    -1,
      16,    17,   232,   233,    -1,    -1,    -1,    -1,    -1,   239,
     240,   241,    -1,    -1,   244,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,    -1,   110,   111,   112,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    -1,   134,    -1,
      -1,    -1,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,    -1,    -1,   161,    -1,    -1,    -1,    -1,
      -1,   167,   168,    -1,    -1,   171,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,    -1,
     216,   217,     4,     5,    -1,     7,     8,    -1,    10,   225,
      -1,    -1,    -1,    -1,    16,    17,   232,   233,    -1,    -1,
      -1,    -1,    -1,   239,   240,   241,    -1,    -1,   244,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,    -1,    -1,   110,   111,
     112,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,    -1,   134,    -1,    -1,    -1,   138,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,    -1,    -1,   161,
      -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,    -1,   216,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,
     232,   233,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,
       3,    -1,   244,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,
      -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,   145,   146,   147,    -1,   149,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,
      -1,   164,   165,    -1,    -1,    -1,   169,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,   178,   179,    -1,   181,   182,
     183,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,   215,    -1,   217,   218,   219,   220,    -1,    -1,
      -1,    -1,   225,   226,    -1,    -1,   229,   230,   231,    -1,
      -1,   234,   235,   236,   237,   238,     3,   145,   146,   147,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    69,    -1,   145,   146,   147,    74,    75,    76,
      77,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,   146,
     147,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,
      -1,    -1,   169,   170,   245,   172,    -1,   174,    -1,    -1,
     177,   178,   179,    -1,   181,   182,   183,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,   215,    -1,
     217,   218,   219,   220,    -1,    -1,    -1,    -1,   225,   226,
      -1,    -1,   229,   230,   231,    -1,    -1,   234,   235,   236,
     237,   238,     3,   145,   146,   147,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    -1,
     145,   146,   147,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,   145,   146,   147,    -1,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
     161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,
     245,   172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,
     181,   182,   183,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,   215,    -1,   217,   218,   219,   220,
      -1,    -1,    -1,    -1,   225,   226,    -1,    -1,   229,   230,
     231,    -1,    -1,   234,   235,   236,   237,   238,     3,   145,
     146,   147,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    69,    -1,   145,   146,   147,    74,
      75,    76,    77,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
     145,   146,   147,    -1,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,   164,
     165,    -1,    -1,    -1,   169,   170,   245,   172,    -1,   174,
      -1,    -1,   177,   178,   179,    -1,   181,   182,   183,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
     225,   226,    -1,    -1,   229,   230,   231,    -1,    -1,   234,
     235,   236,   237,   238,     3,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      69,    -1,   145,   146,   147,    74,    75,    76,    77,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,   145,   146,   147,    -1,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,    -1,
     169,   170,   245,   172,    -1,   174,    -1,    -1,   177,   178,
     179,    -1,   181,   182,   183,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,   217,   218,
     219,   220,    -1,    -1,    -1,    -1,   225,   226,    -1,    -1,
     229,   230,   231,    -1,    -1,   234,   235,   236,   237,   238,
       3,    -1,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    69,    -1,   145,   146,
     147,    74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,
      -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,   145,   146,   147,    -1,   149,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,
      -1,   164,   165,    -1,    -1,    -1,   169,   170,   245,   172,
      -1,   174,    -1,    -1,   177,   178,   179,    -1,   181,   182,
     183,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,    -1,   217,   218,   219,   220,    -1,    -1,
      -1,    -1,   225,   226,    -1,    -1,   229,   230,   231,    -1,
      -1,   234,   235,   236,   237,   238,     3,    -1,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    69,    -1,   145,   146,   147,    74,    75,    76,
      77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,   146,
     147,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,
      -1,    -1,   169,   170,   245,   172,    -1,   174,    -1,    -1,
     177,   178,   179,    -1,   181,   182,   183,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,
     217,   218,   219,   220,    -1,    -1,    -1,    -1,   225,   226,
      -1,    -1,   229,   230,   231,    -1,    -1,   234,   235,   236,
     237,   238,     3,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    -1,
     145,   146,   147,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,   145,   146,   147,    -1,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
     161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,
     245,   172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,
     181,   182,   183,     3,    -1,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,   215,    -1,   217,   218,   219,   220,
      -1,    -1,    -1,    -1,   225,   226,    46,    -1,   229,   230,
     231,    -1,    52,   234,   235,   236,   237,   238,    58,    59,
      60,    -1,   145,   146,   147,    65,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
     243,   161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,
     170,    -1,   172,    -1,   174,    -1,    -1,   177,   178,   179,
      -1,   181,   182,   183,     3,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,   215,    -1,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,   225,   226,    46,    -1,   229,
     230,   231,    -1,    52,   234,   235,   236,   237,   238,    58,
      59,    60,    -1,   145,   146,   147,    65,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,   243,   161,   162,    -1,   164,   165,    -1,    -1,    -1,
     169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,   178,
     179,    -1,   181,   182,   183,     3,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,   215,    -1,   217,   218,
     219,   220,    -1,    -1,    -1,    -1,   225,   226,    46,    -1,
     229,   230,   231,    -1,    52,   234,   235,   236,   237,   238,
      58,    59,    60,    -1,   145,   146,   147,    65,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,   243,   161,   162,    -1,   164,   165,    -1,    -1,
      -1,   169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
     178,   179,    -1,   181,   182,   183,     3,    -1,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,   215,    -1,   217,
     218,   219,   220,    -1,    -1,    -1,    -1,   225,   226,    46,
      -1,   229,   230,   231,    -1,    52,   234,   235,   236,   237,
     238,    58,    59,    60,    -1,   145,   146,   147,    65,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
      -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,   243,   161,   162,    -1,   164,   165,    -1,
      -1,    -1,   169,   170,    -1,   172,    -1,   174,    -1,    -1,
     177,   178,   179,    -1,   181,   182,   183,     3,    -1,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,   215,    -1,
     217,   218,   219,   220,    -1,    -1,    -1,    -1,   225,   226,
      46,    -1,   229,   230,   231,    -1,    52,   234,   235,   236,
     237,   238,    58,    59,    60,    -1,   145,   146,   147,    65,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,   243,   161,   162,    -1,   164,   165,
      -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,   178,   179,    -1,   181,   182,   183,     3,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,   215,
      -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,   225,
     226,    46,    -1,   229,   230,   231,    -1,    52,   234,   235,
     236,   237,   238,    58,    59,    60,    -1,   145,   146,   147,
      65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,   243,   161,   162,    -1,   164,
     165,    -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,
      -1,    -1,   177,   178,   179,    -1,   181,   182,   183,     3,
      -1,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
     225,   226,    46,    -1,   229,   230,   231,    -1,    52,   234,
     235,   236,   237,   238,    58,    59,    60,    -1,   145,   146,
     147,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   243,   161,   162,    -1,
     164,   165,    -1,    -1,    -1,   169,   170,    -1,   172,    -1,
     174,    -1,    -1,   177,   178,   179,    -1,   181,   182,   183,
       3,    -1,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,   215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,
      -1,   225,   226,    46,    -1,   229,   230,   231,    -1,    52,
     234,   235,   236,   237,   238,    58,    59,    60,    -1,   145,
     146,   147,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,
      -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,    -1,   149,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,   243,   161,   162,
      -1,   164,   165,    -1,    -1,    -1,   169,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,   178,   179,    -1,   181,   182,
     183,     3,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,   215,    -1,   217,   218,   219,   220,    -1,    -1,
      -1,    -1,   225,   226,    46,    -1,   229,   230,   231,    -1,
      52,   234,   235,   236,   237,   238,    58,    59,    60,    -1,
     145,   146,   147,    65,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   243,   161,
     162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,    -1,
     172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,   181,
     182,   183,     3,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,   215,    -1,   217,   218,   219,   220,    -1,
      -1,    -1,    -1,   225,   226,    46,    -1,   229,   230,   231,
      -1,    52,   234,   235,   236,   237,   238,    58,    59,    60,
      -1,   145,   146,   147,    65,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   243,
     161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,
     181,   182,   183,     3,    -1,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,   215,    -1,   217,   218,   219,   220,
      -1,    -1,    -1,    -1,   225,   226,    46,    -1,   229,   230,
     231,    -1,    52,   234,   235,   236,   237,   238,    58,    59,
      60,    -1,   145,   146,   147,    65,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
     243,   161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,
     170,    -1,   172,    -1,   174,    -1,    -1,   177,   178,   179,
      -1,   181,   182,   183,    -1,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,   215,    -1,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,   225,   226,    46,    -1,   229,
     230,   231,    51,    52,   234,   235,   236,   237,   238,    58,
      59,    60,    -1,   145,   146,   147,    65,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,   243,   161,   162,    -1,   164,   165,    -1,    -1,    -1,
     169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,   178,
     179,    -1,   181,   182,   183,    -1,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,   215,    -1,   217,   218,
     219,   220,    -1,    -1,    -1,    -1,   225,   226,    46,    -1,
     229,   230,   231,    -1,    52,   234,   235,   236,   237,   238,
      58,    59,    60,    -1,   145,   146,   147,    65,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,   243,   161,   162,    -1,   164,   165,    -1,    -1,
      -1,   169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
     178,   179,    -1,   181,   182,   183,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,   217,
     218,   219,   220,    -1,    -1,    -1,    -1,   225,   226,    -1,
      -1,   229,   230,   231,    -1,    -1,   234,   235,   236,   237,
     238,   145,   146,   147,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,   245,    -1,    -1,    -1,    -1,   113,   114,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,   145,   146,   147,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,   113,   114,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
     145,   146,   147,   113,   114,    -1,    -1,   245,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,   145,   146,   147,   113,   114,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
     145,   146,   147,   113,   114,    -1,    -1,    -1,   245,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,   145,   146,   147,   113,   114,
      -1,    -1,    -1,   245,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
     145,   146,   147,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,   113,   114,
     245,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
     145,   146,   147,   113,   114,   245,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,   145,   146,   147,    -1,    -1,
     245,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,   245,   113,   114,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,   145,   146,   147,   113,   114,    -1,
     245,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,   145,
     146,   147,    -1,   113,   114,   245,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,   245,   145,   146,   147,   113,   114,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,   113,   114,    -1,    -1,   245,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,   245,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,   113,   114,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,   145,   146,   147,
     113,   114,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
     145,   146,   147,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,   113,   114,    -1,
     245,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,   145,
     146,   147,   113,   114,    -1,   245,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,
      -1,    -1,   113,   114,   145,   146,   147,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
     113,   114,   245,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,   145,   146,   147,   113,   114,    -1,    -1,   245,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,   245,   113,   114,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   245,   113,   114,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,   245,    -1,    -1,    -1,    -1,   145,   146,   147,
     113,   114,    -1,    -1,    -1,   245,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,   113,   114,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,   245,   113,   114,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,   245,    -1,    -1,
     145,   146,   147,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
     113,   114,   245,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,   113,
     114,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,   113,   114,    -1,    -1,   243,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,   243,   145,   146,   147,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,   113,   114,
     243,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,   243,
     145,   146,   147,   113,   114,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,   243,   145,   146,   147,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,   243,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,   145,   146,   147,   113,   114,    -1,   243,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,   145,   146,   147,
     113,   114,    -1,   243,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,   243,   145,   146,   147,   113,   114,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     243,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
     113,   114,    -1,   243,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,   243,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,   113,   114,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,   145,   146,   147,   113,   114,
     243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
     145,   146,   147,   113,   114,   243,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,   145,   146,   147,   113,   114,
     243,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,   113,   114,    -1,   243,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,   243,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,   113,   114,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,   145,   146,   147,
     113,   114,    -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,   145,   146,   147,    -1,   113,   114,   243,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,   145,   146,
     147,   113,   114,   243,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,   113,   114,   243,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
     243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,   113,   114,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
     145,   146,   147,   113,   114,    -1,   243,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,   145,   146,   147,   113,   114,
      -1,   243,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
     145,   146,   147,   113,   114,    -1,   243,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,   113,   114,
      -1,   243,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,   243,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,   113,   114,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,   145,   146,   147,   113,   114,   243,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,   145,   146,
     147,   113,   114,   243,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,   145,   146,   147,   113,   114,   243,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,   113,   114,    -1,   243,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,   243,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,   113,   114,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,   145,   146,   147,   113,   114,
      -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
     145,   146,   147,    -1,   113,   114,   243,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,   145,   146,   147,   113,
     114,   243,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,   113,   114,   243,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,   243,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,   113,
     114,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,   145,   146,
     147,   113,   114,    -1,   243,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,   145,   146,   147,   113,   114,    -1,   243,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,   145,   146,
     147,   113,   114,    -1,   243,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,   113,   114,    -1,   243,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,   243,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,   113,   114,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,   145,   146,   147,   113,   114,   243,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,   145,   146,   147,   113,
     114,   243,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,   145,   146,   147,   113,   114,   243,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,   113,
     114,    -1,   243,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,   243,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,   113,   114,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,   145,   146,   147,   113,   114,    -1,   243,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,   145,   146,
     147,    -1,   113,   114,   243,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,   145,   146,   147,   113,   114,   243,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,   113,   114,   243,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,   243,    -1,    -1,    -1,
      84,    -1,    -1,    -1,   145,   146,   147,   113,   114,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,   145,   146,   147,   113,
     114,    -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,   243,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,   243,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    46,    52,    58,    59,    60,    65,
      69,    74,    75,    76,    77,    81,    87,    90,    91,    92,
      94,    98,    99,   100,   101,   102,   103,   104,   142,   149,
     150,   159,   161,   162,   164,   165,   169,   170,   172,   174,
     177,   178,   179,   181,   182,   183,   215,   217,   218,   219,
     220,   225,   226,   229,   230,   231,   234,   235,   236,   237,
     238,   249,   250,   253,   254,   255,   256,   263,   264,   271,
     272,   273,   284,   249,   244,   244,   244,     7,     8,   244,
     244,   244,   244,   244,   244,   244,   244,   244,     7,     8,
       9,     4,     5,     6,     9,    10,    16,    17,    18,    34,
      58,    61,    62,    63,    64,    65,    67,    94,   105,   106,
     107,   110,   111,   112,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   141,
     143,   144,   148,   151,   152,   153,   154,   155,   156,   157,
     158,   161,   168,   171,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   216,   217,   218,   225,   226,
     232,   233,   239,   240,   241,   244,   251,   252,   253,   254,
     256,   267,   268,   269,    10,   252,   252,   252,   252,   269,
       7,     8,     9,    99,     4,     4,   269,    19,    85,   269,
     269,   270,   255,   256,   257,   258,     7,     8,     9,    10,
     261,   262,   255,   272,     9,    94,   272,     8,    10,   268,
     268,     7,     8,     9,   259,   260,   252,   252,   166,   252,
     252,   252,   167,   252,   167,   168,   252,   252,   167,   252,
     252,   252,   252,   244,   244,     6,   257,   276,   277,    21,
      37,    38,   221,   243,   252,   268,   274,   275,     7,    10,
      10,   252,   252,   252,   252,     0,     3,    23,    25,    39,
      40,    41,    42,    43,    44,    45,    25,    25,   257,   243,
      23,   252,   252,   245,   252,   252,    52,   257,   278,   279,
     257,   280,   281,   281,   281,   270,   270,   270,   270,   243,
     243,   243,   244,   244,   244,   244,   244,     4,     5,   253,
     254,   252,   252,   244,   244,   244,   252,   252,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,    37,   244,   244,   252,   244,   244,
     268,   252,   244,   244,    10,   252,   252,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
     113,   114,   145,   146,   147,    25,    26,    27,    28,    31,
      32,    33,   244,   243,    25,    79,    25,    88,    25,    88,
      88,     7,     8,     9,    19,    83,   249,   250,     3,    19,
      20,   247,   248,   249,   269,    19,   243,   243,   244,   244,
     244,   244,   243,   244,   262,    19,   244,   243,   243,   243,
     243,   252,   243,   243,   243,   252,   243,   252,   252,   243,
     243,   252,   243,   243,   243,   243,   252,   252,   243,   277,
     243,   244,   275,   243,   244,   244,   243,   243,   243,   249,
     250,   252,   252,   252,   252,   252,   252,   252,   252,   268,
     269,    25,   272,   243,   245,   243,   245,    25,   243,   245,
     245,   257,   243,   245,   243,   245,   245,   245,   245,   245,
     245,   245,     7,     8,     9,   252,   270,   270,   270,   268,
     268,   268,     7,     8,     9,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   268,   268,   252,   268,   268,   268,   268,   268,
     244,   252,   252,   252,   252,   243,   252,   252,   243,   243,
     245,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   268,
     268,   268,   268,   268,   268,   268,   252,   252,   252,    19,
     252,     7,   252,     8,     9,    25,    88,    25,    88,    88,
     248,    19,   249,    70,    20,   249,    19,   248,    85,   248,
     270,   258,   252,   252,   252,   252,   262,   245,    97,   265,
     266,   252,   260,   260,   252,   252,   243,   252,   252,   252,
     243,   252,   243,   243,   252,   252,   243,   252,   252,   252,
     252,   245,   245,   277,   277,   252,     7,   252,   252,   252,
     252,   252,    23,   269,   252,   252,    68,   252,     7,     8,
       9,   279,    23,   281,    19,    19,    19,   245,   245,   245,
     245,   245,   245,   245,   244,   244,   244,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   243,   243,   243,
     243,   245,   252,   245,   243,   243,   243,   252,   245,   245,
      10,   252,   245,    86,   282,   283,    84,   244,    84,   244,
     244,   252,     7,   252,     8,     9,    70,    72,   248,    70,
     250,    19,    19,   269,    73,   243,   245,   243,   245,   243,
     245,   243,    25,   257,    19,    96,   245,   243,   243,   252,
     243,   252,   243,   252,   252,   243,   243,   252,   243,   243,
     243,   243,   245,   243,   245,   245,   243,   243,   245,   245,
     244,   245,   249,   248,   248,   248,   245,   245,   245,   268,
     252,   252,   252,   245,   268,   252,   252,   243,   270,   283,
      71,    80,   252,   245,   252,   245,   245,    84,   244,    84,
     244,   244,    19,    70,    72,   249,   252,   252,   252,     8,
      68,   266,   252,   252,   252,   243,   252,   243,   243,   252,
     252,   243,   252,   252,   252,   252,     7,   243,   243,   252,
     252,   268,    23,    50,    50,    50,   243,   243,   243,   243,
     245,   245,   243,   245,   245,   243,   245,   252,   249,   250,
      19,    82,   249,    19,   249,    19,    82,   249,    19,   249,
      19,   249,   252,   245,   252,   245,   245,   248,    19,   245,
     245,   245,   245,   244,   243,   252,   243,   252,   252,   243,
     243,   252,   243,   243,   243,   252,   252,   243,   243,   245,
      51,    34,   251,   251,   251,   252,   252,   252,   243,    19,
      19,   248,   252,    78,   248,    78,   248,   252,    78,   248,
      78,   248,    78,    19,    82,   249,    19,   249,    19,    82,
     249,    19,   249,    19,   249,    72,   248,   268,   252,   243,
     252,   243,   243,   252,   252,   268,   268,   268,   243,   243,
     252,   252,   245,   245,   245,   245,   245,   245,   252,    71,
      78,    19,   249,    78,    78,    19,   249,    78,    78,   248,
     252,    78,   248,    78,   248,   252,    78,   248,    78,   248,
      78,    72,   245,   252,   252,   252,   243,   252,   252,   243,
     248,    78,   248,    78,    78,    19,   249,    78,    78,    19,
     249,    78,    78,   243,   243,   252,   243,   243,   252,    78,
      78,   248,    78,   248,    78,   252,   252,   243,   252,   252,
     243,    78,    78,   243,   243,   252,   243,   243,   252,   252,
     252,   252,   252,   243,   243,   252,   252,   243,   243,   252,
     252,   243,   243,   252,   252
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   246,   247,   247,   247,   247,   247,   248,   248,   249,
     249,   249,   249,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     251,   251,   251,   251,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   253,
     253,   253,   253,   253,   254,   254,   254,   254,   254,   255,
     255,   256,   256,   256,   256,   257,   257,   258,   258,   259,
     259,   259,   260,   260,   261,   261,   261,   261,   261,   261,
     261,   262,   262,   263,   263,   264,   265,   266,   266,   267,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   269,   269,   270,   270,   270,   271,   271,   271,   271,
     272,   272,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   274,   274,   274,   274,   274,   274,   274,   275,
     275,   276,   277,   277,   278,   278,   278,   279,   279,   280,
     280,   281,   281,   282,   283,   283,   284,   284,   284,   284
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     3,     1,     1,     2,     1,
       3,     3,     4,     1,     1,     1,     2,     4,     2,     1,
       1,     4,     4,     4,     4,     2,     2,     1,     1,     2,
       1,     1,     1,     2,     3,     4,     2,     4,     2,     8,
       9,     2,     2,     2,     2,     3,     4,     6,     4,     4,
       1,     1,     3,     5,     5,     8,     4,     6,     6,     9,
       5,     3,     5,     4,     4,     4,     9,     9,     9,     8,
       8,     8,    10,    10,    10,     9,     9,     9,     9,     9,
       8,     8,    11,    11,    10,    10,    10,    10,     9,     9,
      12,    12,    11,    11,     6,     9,     1,     2,     1,    13,
      13,     8,     8,     4,     2,     1,     2,     6,     2,     6,
       4,     5,     1,     2,     1,     6,     7,     8,     8,     9,
      12,    13,    19,     4,     8,     1,     8,     8,     8,     1,
       1,     2,     1,     2,     1,     1,     1,     3,     4,     4,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     4,     8,     8,     8,     2,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     4,    18,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     8,     6,     1,     1,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     4,     4,     4,     1,     1,     1,     4,     1,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     6,     8,     4,     1,
       4,     6,     2,     5,     1,     4,     6,     2,     5,     1,
       1,     1,     4,     6,     5,     1,     1,     1,     3,     1,
       1,     1,     1,     3,     4,     6,     4,     6,     4,     6,
       6,     1,     3,     1,     4,     5,     2,     2,     3,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     2,
       4,     1,     4,     1,     4,     5,     6,     4,     6,     8,
       6,     1,     1,     0,     1,     3,     3,     3,     3,     4,
       1,     3,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     4,     1,     1,
       2,     1,     1,     3,     0,     1,     2,     1,     3,     0,
       1,     1,     3,     4,     1,     2,     8,     7,     7,     7
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif



static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yystrlen (yysymbol_name (yyarg[yyi]));
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp = yystpcpy (yyp, yysymbol_name (yyarg[yyi++]));
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* line: LINE_NUMBER statement_list NL  */
#line 110 "DARIC.y"
                                    { (yyval.ast) = link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast)); yylineno = (yyvsp[-2].v_int); }
#line 4396 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 4: /* line: COLON NL  */
#line 111 "DARIC.y"
               { (yyval.ast) = NULL; }
#line 4402 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 5: /* line: LINE_NUMBER COLON NL  */
#line 112 "DARIC.y"
                           { (yyval.ast) = linenumber((yyvsp[-2].v_int)); yylineno = (yyvsp[-2].v_int); }
#line 4408 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 6: /* line: NL  */
#line 113 "DARIC.y"
         { (yyval.ast) = NULL; }
#line 4414 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 8: /* embed_lines: line embed_lines  */
#line 118 "DARIC.y"
                       { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4420 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 9: /* statement_list: statement  */
#line 122 "DARIC.y"
                { (yyval.ast) = (yyvsp[0].ast); ast_statements.push_front((yyvsp[0].ast)); }
#line 4426 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 10: /* statement_list: statement_list SEPARATOR statement  */
#line 123 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4432 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 11: /* statement_list: LINE_NUMBER statement_list SEPARATOR  */
#line 124 "DARIC.y"
                                           { (yyval.ast) = link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast)); yylineno = (yyvsp[-2].v_int); ast_statements.push_front(linenumber((yyvsp[-2].v_int))); }
#line 4438 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 12: /* statement_list: statement_list LINE_NUMBER statement_list SEPARATOR  */
#line 125 "DARIC.y"
                                                          { (yyval.ast) = link((yyvsp[-3].ast), link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast))); yylineno = (yyvsp[-2].v_int); ast_statements.push_front(linenumber((yyvsp[-2].v_int))); }
#line 4444 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 16: /* statement: CHAIN expression_string  */
#line 132 "DARIC.y"
                              { (yyval.ast) = token1(CHAIN, (yyvsp[0].ast)); }
#line 4450 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 17: /* statement: CHAIN expression_string ',' plain_variable_list  */
#line 133 "DARIC.y"
                                                      { (yyval.ast) = token2(CHAIN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4456 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 18: /* statement: EXPECT plain_variable_list  */
#line 134 "DARIC.y"
                                 { (yyval.ast) = token1(EXPECT, (yyvsp[0].ast)); }
#line 4462 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 19: /* statement: END  */
#line 135 "DARIC.y"
          { (yyval.ast) = token(END); }
#line 4468 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 20: /* statement: PROCEDURE  */
#line 136 "DARIC.y"
                { (yyval.ast) = token1(CALLPROC, string((yyvsp[0].v_string))); }
#line 4474 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 21: /* statement: PROCEDURE '(' expression_list ')'  */
#line 137 "DARIC.y"
                                        { (yyval.ast) = token2(CALLPROC, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4480 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 22: /* statement: FN_INTEGER '(' expression_list ')'  */
#line 138 "DARIC.y"
                                         { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4486 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 23: /* statement: FN_REAL '(' expression_list ')'  */
#line 139 "DARIC.y"
                                      { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4492 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 24: /* statement: FN_STRING '(' expression_list ')'  */
#line 140 "DARIC.y"
                                        { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4498 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 25: /* statement: DATA expression_list  */
#line 141 "DARIC.y"
                           { (yyval.ast) = token1(DATA, (yyvsp[0].ast)); }
#line 4504 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 26: /* statement: READ variable_list  */
#line 142 "DARIC.y"
                         { (yyval.ast) = token1(READ, (yyvsp[0].ast)); }
#line 4510 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 27: /* statement: RESTORE  */
#line 143 "DARIC.y"
              { (yyval.ast) = token(RESTORE); }
#line 4516 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 28: /* statement: RETURN  */
#line 144 "DARIC.y"
             { (yyval.ast) = token(RETURN); }
#line 4522 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 29: /* statement: RETURN expression  */
#line 145 "DARIC.y"
                        { (yyval.ast) = token1(RETURN_WITH_VALUE, (yyvsp[0].ast)); }
#line 4528 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 30: /* statement: TRACEON  */
#line 146 "DARIC.y"
              { (yyval.ast) = token(TRACEON); }
#line 4534 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 31: /* statement: TRACEOFF  */
#line 147 "DARIC.y"
               { (yyval.ast) = token(TRACEOFF); }
#line 4540 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 32: /* statement: BREAKPOINT  */
#line 148 "DARIC.y"
                 { (yyval.ast) = token(BREAKPOINT); }
#line 4546 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 33: /* statement: DIM dim_variable_list  */
#line 150 "DARIC.y"
                            { (yyval.ast) = token1(DIM, (yyvsp[0].ast)); }
#line 4552 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 34: /* statement: LOCAL DIM dim_variable_list  */
#line 151 "DARIC.y"
                                  { (yyval.ast) = token1(LOCALDIM, (yyvsp[0].ast)); }
#line 4558 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 35: /* statement: BPUT expression_numeric ',' expression_numeric  */
#line 153 "DARIC.y"
                                                     { (yyval.ast) = token2(BPUT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4564 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 36: /* statement: BGET expression_numeric  */
#line 154 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 4570 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 37: /* statement: PTR expression_numeric E expression_numeric  */
#line 155 "DARIC.y"
                                                  { (yyval.ast) = token2(PTRA, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4576 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 38: /* statement: CLOSE expression_numeric  */
#line 156 "DARIC.y"
                               { (yyval.ast) = token1(CLOSE, (yyvsp[0].ast)); }
#line 4582 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 39: /* statement: STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 157 "DARIC.y"
                                                                    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(GLOBAL)); }
#line 4588 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 40: /* statement: LOCAL STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 158 "DARIC.y"
                                                                          { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(LOCAL)); }
#line 4594 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 41: /* statement: OSCLI expression_string  */
#line 160 "DARIC.y"
                              { (yyval.ast) = token1(OSCLI, (yyvsp[0].ast)); }
#line 4600 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 42: /* statement: GOSUB LITERAL_INT  */
#line 162 "DARIC.y"
                        { (yyval.ast) = token1(GOSUB, integer((yyvsp[0].v_int))); }
#line 4606 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 43: /* statement: GOTO LITERAL_INT  */
#line 163 "DARIC.y"
                       { (yyval.ast) = token1(GOTO, integer((yyvsp[0].v_int))); }
#line 4612 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 44: /* statement: INPUT_ expression_input_list  */
#line 165 "DARIC.y"
                                   { (yyval.ast) = token1(INPUT_, (yyvsp[0].ast)); }
#line 4618 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 45: /* statement: INPUT_ LITERAL_STRING expression_input_list  */
#line 166 "DARIC.y"
                                                  { (yyval.ast) = token2(INPUT_NOQUESTIONMARK, string((yyvsp[-1].v_string)), (yyvsp[0].ast)); }
#line 4624 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 46: /* statement: INPUT_ LITERAL_STRING ',' expression_input_list  */
#line 167 "DARIC.y"
                                                      { (yyval.ast) = token2(INPUT_, string((yyvsp[-2].v_string)), (yyvsp[0].ast)); }
#line 4630 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 47: /* statement: MOUSE INTEGER_VARIABLE ',' INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 168 "DARIC.y"
                                                                       { (yyval.ast) = token3(MOUSE, string((yyvsp[-4].v_string)), string((yyvsp[-2].v_string)), string((yyvsp[0].v_string)) ); }
#line 4636 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 48: /* statement: INKEY '(' expression_numeric ')'  */
#line 170 "DARIC.y"
                                       { (yyval.ast) = token1(SINKEY, (yyvsp[-1].ast)); }
#line 4642 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 49: /* statement: INKEYS '(' expression_numeric ')'  */
#line 171 "DARIC.y"
                                        { (yyval.ast) = token1(SINKEYS, (yyvsp[-1].ast)); }
#line 4648 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 50: /* statement: GET  */
#line 172 "DARIC.y"
          { (yyval.ast) = token(GET_S); }
#line 4654 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 51: /* statement: GETS  */
#line 173 "DARIC.y"
           { (yyval.ast) = token(GETS_S); }
#line 4660 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 52: /* statement: IF expression statement_list  */
#line 175 "DARIC.y"
                                   { (yyval.ast) = token2(IF, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4666 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 53: /* statement: IF expression statement ELSE statement  */
#line 176 "DARIC.y"
                                             { (yyval.ast) = token3(IF, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4672 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 54: /* statement: IF expression NL embed_lines ENDIF  */
#line 177 "DARIC.y"
                                         { (yyval.ast) = token2(IF, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4678 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 55: /* statement: IF expression NL embed_lines ELSE NL embed_lines ENDIF  */
#line 178 "DARIC.y"
                                                             { (yyval.ast) = token3(IF, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4684 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 56: /* statement: IF expression THEN statement_list  */
#line 180 "DARIC.y"
                                        { (yyval.ast) = token2(IF, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4690 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 57: /* statement: IF expression THEN statement_list ELSE statement_list  */
#line 181 "DARIC.y"
                                                            { (yyval.ast) = token3(IF, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4696 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 58: /* statement: IF expression THEN NL embed_lines ENDIF  */
#line 182 "DARIC.y"
                                              { (yyval.ast) = token2(IF, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4702 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 59: /* statement: IF expression THEN NL embed_lines ELSE NL embed_lines ENDIF  */
#line 183 "DARIC.y"
                                                                  { (yyval.ast) = token3(IF, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4708 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 60: /* statement: REPEAT NL embed_lines UNTIL expression  */
#line 185 "DARIC.y"
                                             { (yyval.ast) = token2(REPEAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4714 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 61: /* statement: REPEAT UNTIL expression  */
#line 186 "DARIC.y"
                              { (yyval.ast) = token2(REPEAT, NULL, (yyvsp[0].ast)); }
#line 4720 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 62: /* statement: WHILE expression NL embed_lines ENDWHILE  */
#line 187 "DARIC.y"
                                               { (yyval.ast) = token2(WHILE, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4726 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 63: /* statement: SWAP INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 189 "DARIC.y"
                                                 { (yyval.ast) = token2(SWAP_I, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4732 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 64: /* statement: SWAP VARIABLE ',' VARIABLE  */
#line 190 "DARIC.y"
                                 { (yyval.ast) = token2(SWAP_F, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4738 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 65: /* statement: SWAP STRING_VARIABLE ',' STRING_VARIABLE  */
#line 191 "DARIC.y"
                                                { (yyval.ast) = token2(SWAP_S, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4744 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 66: /* statement: FOR VARIABLE IN_ VARIABLE '(' ')' NL embed_lines NEXT  */
#line 194 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4750 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 67: /* statement: FOR INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 195 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4756 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 68: /* statement: FOR STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 196 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4762 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 69: /* statement: FOR VARIABLE IN_ VARIABLE '(' ')' statement_list NEXT  */
#line 197 "DARIC.y"
                                                                                          { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4768 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 70: /* statement: FOR INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' statement_list NEXT  */
#line 198 "DARIC.y"
                                                                                          { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4774 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 71: /* statement: FOR STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' statement_list NEXT  */
#line 199 "DARIC.y"
                                                                                          { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4780 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 72: /* statement: FOR LOCAL VARIABLE IN_ VARIABLE '(' ')' NL embed_lines NEXT  */
#line 200 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4786 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 73: /* statement: FOR LOCAL INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 201 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4792 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 74: /* statement: FOR LOCAL STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 202 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4798 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 75: /* statement: FOR LOCAL VARIABLE IN_ VARIABLE '(' ')' statement_list NEXT  */
#line 203 "DARIC.y"
                                                                                          { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4804 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 76: /* statement: FOR LOCAL INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' statement_list NEXT  */
#line 204 "DARIC.y"
                                                                                          { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4810 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 77: /* statement: FOR LOCAL STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' statement_list NEXT  */
#line 205 "DARIC.y"
                                                                                          { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4816 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 78: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 208 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4822 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 79: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 209 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4828 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 80: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric statement_list NEXT  */
#line 210 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4834 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 81: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric statement_list NEXT  */
#line 211 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4840 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 82: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 212 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4846 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 83: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 213 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4852 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 84: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statement_list NEXT  */
#line 214 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4858 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 85: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statement_list NEXT  */
#line 215 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4864 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 86: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 216 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4870 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 87: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 217 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4876 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 88: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric statement_list NEXT  */
#line 218 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4882 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 89: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric statement_list NEXT  */
#line 219 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4888 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 90: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 220 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4894 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 91: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 221 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4900 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 92: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statement_list NEXT  */
#line 222 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4906 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 93: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statement_list NEXT  */
#line 223 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4912 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 94: /* statement: CASE expression OF NL when_list ENDCASE  */
#line 225 "DARIC.y"
                                              { (yyval.ast) = token2(CASE, (yyvsp[-4].ast), (yyvsp[-1].ast));  }
#line 4918 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 95: /* statement: CASE expression OF NL when_list OTHERWISE statement NL ENDCASE  */
#line 226 "DARIC.y"
                                                                     { (yyval.ast) = token3(CASE, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-2].ast));  }
#line 4924 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 96: /* statement: PRINT  */
#line 228 "DARIC.y"
            { (yyval.ast) = token(PRINT); }
#line 4930 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 97: /* statement: PRINT expression_print_list  */
#line 229 "DARIC.y"
                                  { (yyval.ast) = token1(PRINT, (yyvsp[0].ast)); }
#line 4936 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 98: /* statement: RENDERFRAME  */
#line 231 "DARIC.y"
                  { (yyval.ast) = token(RENDERFRAME); }
#line 4942 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 99: /* statement: CREATEVERTEX TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 234 "DARIC.y"
                                                      { (yyval.ast) = token6(CREATEVERTEX, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4948 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 100: /* statement: CREATETRIANGLE TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 237 "DARIC.y"
                                                  { (yyval.ast) = token6(CREATETRIANGLE, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4954 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 101: /* statement: TRANSLATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 238 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TRANSLATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4960 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 102: /* statement: ROTATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 239 "DARIC.y"
                                                                                                      { (yyval.ast) = token4(ROTATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4966 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 103: /* statement: SCALE expression_numeric ',' expression_numeric  */
#line 240 "DARIC.y"
                                                      { (yyval.ast) = token2(SCALE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4972 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 104: /* statement: DELETEOBJECT expression_numeric  */
#line 241 "DARIC.y"
                                      { (yyval.ast) = token1(DELETEOBJECT, (yyvsp[0].ast)); }
#line 4978 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 105: /* statement: CLS  */
#line 243 "DARIC.y"
          { (yyval.ast) = token(CLS); }
#line 4984 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 106: /* statement: COLOUR expression_numeric  */
#line 244 "DARIC.y"
                                { (yyval.ast) = token1(COLOUR, (yyvsp[0].ast)); }
#line 4990 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 107: /* statement: COLOUR expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 245 "DARIC.y"
                                                                              { (yyval.ast) = token3(COLOUR, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4996 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 108: /* statement: COLOURBG expression_numeric  */
#line 246 "DARIC.y"
                                  { (yyval.ast) = token1(COLOURBG, (yyvsp[0].ast)); }
#line 5002 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 109: /* statement: COLOURBG expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 247 "DARIC.y"
                                                                                { (yyval.ast) = token3(COLOURBG, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5008 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 110: /* statement: GRAPHICS expression_numeric ',' expression_numeric  */
#line 248 "DARIC.y"
                                                         { (yyval.ast) = token2(GRAPHICS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5014 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 111: /* statement: GRAPHICS BANKED expression_numeric ',' expression_numeric  */
#line 249 "DARIC.y"
                                                                { (yyval.ast) = token2(BANKED, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5020 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 112: /* statement: GRAPHICS  */
#line 250 "DARIC.y"
               { (yyval.ast) = token(GRAPHICS); }
#line 5026 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 113: /* statement: GRAPHICS BANKED  */
#line 251 "DARIC.y"
                      { (yyval.ast) = token(BANKED); }
#line 5032 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 114: /* statement: FLIP  */
#line 252 "DARIC.y"
           { (yyval.ast) = token(FLIP); }
#line 5038 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 115: /* statement: CIRCLE expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 253 "DARIC.y"
                                                                              { (yyval.ast) = token3(CIRCLE, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5044 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 116: /* statement: CIRCLE FILL expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 254 "DARIC.y"
                                                                                   { (yyval.ast) = token3(CIRCLEFILL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5050 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 117: /* statement: LINE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 255 "DARIC.y"
                                                                                                   { (yyval.ast) = token4(LINE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5056 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 118: /* statement: RECTANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 256 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(RECTANGLE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5062 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 119: /* statement: RECTANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 257 "DARIC.y"
                                                                                                             { (yyval.ast) = token4(RECTANGLEFILL, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5068 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 120: /* statement: TRIANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 258 "DARIC.y"
                                                                                                                                                     { (yyval.ast) = token6(TRIANGLE, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5074 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 121: /* statement: TRIANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 259 "DARIC.y"
                                                                                                                                                          { (yyval.ast) = token6(TRIANGLEFILL, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5080 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 122: /* statement: TRIANGLE SHADED expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 262 "DARIC.y"
                                                                                         { (yyval.ast) = token9(TRIANGLESHADED, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5086 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 123: /* statement: PLOT expression_numeric ',' expression_numeric  */
#line 263 "DARIC.y"
                                                     { (yyval.ast) = token2(PLOT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5092 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 124: /* statement: CLIPON expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 264 "DARIC.y"
                                                                                                     { (yyval.ast) = token4(CLIPON, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5098 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 125: /* statement: CLIPOFF  */
#line 265 "DARIC.y"
              { (yyval.ast) = token(CLIPOFF); }
#line 5104 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 126: /* statement: TEXT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 266 "DARIC.y"
                                                                                                  { (yyval.ast) = token4(TEXT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5110 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 127: /* statement: TEXTRIGHT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 267 "DARIC.y"
                                                                                                       { (yyval.ast) = token4(TEXTRIGHT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5116 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 128: /* statement: TEXTCENTRE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 268 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TEXTCENTRE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5122 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 129: /* statement: SHOWFPS  */
#line 269 "DARIC.y"
              { (yyval.ast) = token(SHOWFPS); }
#line 5128 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 130: /* number: LITERAL_INT  */
#line 273 "DARIC.y"
                  { (yyval.ast) = integer((yyvsp[0].v_int)); }
#line 5134 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 131: /* number: MINUS LITERAL_INT  */
#line 274 "DARIC.y"
                                  { (yyval.ast) = integer(-(yyvsp[0].v_int)); }
#line 5140 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 132: /* number: LITERAL_REAL  */
#line 275 "DARIC.y"
                   { (yyval.ast) = real((yyvsp[0].v_real)); }
#line 5146 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 133: /* number: MINUS LITERAL_REAL  */
#line 276 "DARIC.y"
                                   { (yyval.ast) = real(-(yyvsp[0].v_real)); }
#line 5152 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 134: /* expression_numeric: number  */
#line 280 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 5158 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 135: /* expression_numeric: variable_integer  */
#line 281 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5164 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 136: /* expression_numeric: variable_real  */
#line 282 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5170 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 137: /* expression_numeric: '(' expression_numeric ')'  */
#line 283 "DARIC.y"
                                 { (yyval.ast) = (yyvsp[-1].ast); }
#line 5176 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 138: /* expression_numeric: FLOAT_ '(' expression_numeric ')'  */
#line 284 "DARIC.y"
                                        { (yyval.ast) = token1(FLOAT_, (yyvsp[-1].ast)); }
#line 5182 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 139: /* expression_numeric: INT_ '(' expression_numeric ')'  */
#line 285 "DARIC.y"
                                      { (yyval.ast) = token1(INT_, (yyvsp[-1].ast)); }
#line 5188 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 140: /* expression_numeric: MINUS variable_integer  */
#line 286 "DARIC.y"
                             { (yyval.ast) = token2(MINUS, integer(0), (yyvsp[0].ast)); }
#line 5194 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 141: /* expression_numeric: MINUS variable_real  */
#line 287 "DARIC.y"
                          { (yyval.ast) = token2(MINUS, real(0.0), (yyvsp[0].ast)); }
#line 5200 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 142: /* expression_numeric: expression_numeric PLUS expression_numeric  */
#line 288 "DARIC.y"
                                                 { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5206 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 143: /* expression_numeric: expression_numeric MINUS expression_numeric  */
#line 289 "DARIC.y"
                                                  { (yyval.ast) = token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5212 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 144: /* expression_numeric: expression_numeric MULTIPLY expression_numeric  */
#line 290 "DARIC.y"
                                                     { (yyval.ast) = token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5218 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 145: /* expression_numeric: expression_numeric DIVIDE expression_numeric  */
#line 291 "DARIC.y"
                                                   { (yyval.ast) = token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5224 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 146: /* expression_numeric: expression_numeric INTEGERDIVIDE expression_numeric  */
#line 292 "DARIC.y"
                                                          { (yyval.ast) = token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5230 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 147: /* expression_numeric: expression_numeric DIV expression_numeric  */
#line 293 "DARIC.y"
                                                { (yyval.ast) = token2(DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5236 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 148: /* expression_numeric: expression_numeric MOD expression_numeric  */
#line 294 "DARIC.y"
                                                { (yyval.ast) = token2(MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5242 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 149: /* expression_numeric: expression_numeric SHL expression_numeric  */
#line 295 "DARIC.y"
                                                { (yyval.ast) = token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5248 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 150: /* expression_numeric: expression_numeric SHR expression_numeric  */
#line 296 "DARIC.y"
                                                { (yyval.ast) = token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5254 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 151: /* expression_numeric: expression_numeric E expression_numeric  */
#line 297 "DARIC.y"
                                              { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5260 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 152: /* expression_numeric: expression_numeric NE expression_numeric  */
#line 298 "DARIC.y"
                                               { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5266 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 153: /* expression_numeric: expression_numeric GE expression_numeric  */
#line 299 "DARIC.y"
                                               { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5272 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 154: /* expression_numeric: expression_numeric LE expression_numeric  */
#line 300 "DARIC.y"
                                               { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5278 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 155: /* expression_numeric: expression_numeric LT expression_numeric  */
#line 301 "DARIC.y"
                                               { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5284 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 156: /* expression_numeric: expression_numeric GT expression_numeric  */
#line 302 "DARIC.y"
                                               { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5290 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 157: /* expression_numeric: expression_numeric AND expression_numeric  */
#line 303 "DARIC.y"
                                                { (yyval.ast) = token2(AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5296 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 158: /* expression_numeric: expression_numeric OR expression_numeric  */
#line 304 "DARIC.y"
                                               { (yyval.ast) = token2(OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5302 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 159: /* expression_numeric: expression_numeric EOR expression_numeric  */
#line 305 "DARIC.y"
                                                { (yyval.ast) = token2(EOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5308 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 160: /* expression_numeric: FN_INTEGER '(' expression_list ')'  */
#line 307 "DARIC.y"
                                         { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5314 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 161: /* expression_numeric: FN_REAL '(' expression_list ')'  */
#line 308 "DARIC.y"
                                      { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5320 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 162: /* expression_numeric: DIM '(' VARIABLE '(' ')' ',' number ')'  */
#line 310 "DARIC.y"
                                              { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::REAL), (yyvsp[-1].ast)); }
#line 5326 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 163: /* expression_numeric: DIM '(' INTEGER_VARIABLE '(' ')' ',' number ')'  */
#line 311 "DARIC.y"
                                                      { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::INTEGER), (yyvsp[-1].ast)); }
#line 5332 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 164: /* expression_numeric: DIM '(' STRING_VARIABLE '(' ')' ',' number ')'  */
#line 312 "DARIC.y"
                                                     { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::STRING), (yyvsp[-1].ast)); }
#line 5338 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 165: /* expression_numeric: PTR expression_numeric  */
#line 314 "DARIC.y"
                             { (yyval.ast) = token1(PTR, (yyvsp[0].ast)); }
#line 5344 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 166: /* expression_numeric: GET  */
#line 316 "DARIC.y"
          { (yyval.ast) = token(GET); }
#line 5350 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 167: /* expression_numeric: INKEY '(' expression_numeric ')'  */
#line 317 "DARIC.y"
                                       { (yyval.ast) = token1(INKEY, (yyvsp[-1].ast)); }
#line 5356 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 168: /* expression_numeric: BOOLTRUE  */
#line 319 "DARIC.y"
               { (yyval.ast) = integer(1); }
#line 5362 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 169: /* expression_numeric: BOOLFALSE  */
#line 320 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5368 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 170: /* expression_numeric: TIME  */
#line 321 "DARIC.y"
           { (yyval.ast) = token(TIME); }
#line 5374 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 171: /* expression_numeric: SOLID  */
#line 323 "DARIC.y"
                        { (yyval.ast) = integer(0); }
#line 5380 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 172: /* expression_numeric: WIREFRAME  */
#line 324 "DARIC.y"
                        { (yyval.ast) = integer(1); }
#line 5386 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 173: /* expression_numeric: SHADED  */
#line 325 "DARIC.y"
                        { (yyval.ast) = integer(2); }
#line 5392 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 174: /* expression_numeric: FILLEDWIREFRAME  */
#line 326 "DARIC.y"
                        { (yyval.ast) = integer(3); }
#line 5398 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 175: /* expression_numeric: CREATESHAPE TYPE_VARIABLE ',' TYPE_VARIABLE  */
#line 328 "DARIC.y"
                                                  { (yyval.ast) = token2(CREATESHAPE, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 5404 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 176: /* expression_numeric: CREATEOBJECT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 333 "DARIC.y"
                                                  { (yyval.ast) = token9(CREATEOBJECT, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5410 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 177: /* expression_numeric: RED  */
#line 335 "DARIC.y"
                { (yyval.ast) = integer(0xFF0000); }
#line 5416 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 178: /* expression_numeric: GREEN  */
#line 336 "DARIC.y"
                { (yyval.ast) = integer(0x00FF00); }
#line 5422 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 179: /* expression_numeric: YELLOW  */
#line 337 "DARIC.y"
                { (yyval.ast) = integer(0xFFFF00); }
#line 5428 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 180: /* expression_numeric: BLUE  */
#line 338 "DARIC.y"
                { (yyval.ast) = integer(0x0000FF); }
#line 5434 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 181: /* expression_numeric: MAGENTA  */
#line 339 "DARIC.y"
                { (yyval.ast) = integer(0xFF00FF); }
#line 5440 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 182: /* expression_numeric: CYAN  */
#line 340 "DARIC.y"
                { (yyval.ast) = integer(0x00FFFF); }
#line 5446 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 183: /* expression_numeric: WHITE  */
#line 341 "DARIC.y"
                { (yyval.ast) = integer(0xFFFFFF); }
#line 5452 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 184: /* expression_numeric: BLACK  */
#line 342 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5458 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 185: /* expression_numeric: LASTPOS  */
#line 343 "DARIC.y"
                { (yyval.ast) = integer(-1); }
#line 5464 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 186: /* expression_numeric: COLOUR '(' expression_numeric ',' expression_numeric ',' expression_numeric ')'  */
#line 344 "DARIC.y"
                                                                                      { (yyval.ast) = token3(COLOUREXP, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5470 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 187: /* expression_numeric: POINT_ '(' expression_numeric ',' expression_numeric ')'  */
#line 345 "DARIC.y"
                                                               { (yyval.ast) = token2(POINT_, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5476 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 188: /* expression_numeric: SCREENWIDTH  */
#line 346 "DARIC.y"
                  { (yyval.ast) = token(SCREENWIDTH); }
#line 5482 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 189: /* expression_numeric: SCREENHEIGHT  */
#line 347 "DARIC.y"
                   { (yyval.ast) = token(SCREENHEIGHT); }
#line 5488 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 190: /* expression_numeric: LOADTYPEFACE expression_string  */
#line 348 "DARIC.y"
                                     { (yyval.ast) = token1(LOADTYPEFACE, (yyvsp[0].ast)); }
#line 5494 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 191: /* expression_numeric: CREATEFONT expression_numeric ',' expression_numeric  */
#line 349 "DARIC.y"
                                                           { (yyval.ast) = token2(CREATEFONT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5500 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 192: /* expression_numeric: MONO15  */
#line 350 "DARIC.y"
             { (yyval.ast) = integer(0); }
#line 5506 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 193: /* expression_numeric: MONO20  */
#line 351 "DARIC.y"
             { (yyval.ast) = integer(1); }
#line 5512 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 194: /* expression_numeric: MONO25  */
#line 352 "DARIC.y"
             { (yyval.ast) = integer(2); }
#line 5518 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 195: /* expression_numeric: MONO30  */
#line 353 "DARIC.y"
             { (yyval.ast) = integer(3); }
#line 5524 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 196: /* expression_numeric: MONO35  */
#line 354 "DARIC.y"
             { (yyval.ast) = integer(4); }
#line 5530 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 197: /* expression_numeric: MONO40  */
#line 355 "DARIC.y"
             { (yyval.ast) = integer(5); }
#line 5536 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 198: /* expression_numeric: MONO50  */
#line 356 "DARIC.y"
             { (yyval.ast) = integer(6); }
#line 5542 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 199: /* expression_numeric: MONO75  */
#line 357 "DARIC.y"
             { (yyval.ast) = integer(7); }
#line 5548 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 200: /* expression_numeric: MONO100  */
#line 358 "DARIC.y"
              { (yyval.ast) = integer(8); }
#line 5554 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 201: /* expression_numeric: PROP15  */
#line 359 "DARIC.y"
             { (yyval.ast) = integer(9); }
#line 5560 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 202: /* expression_numeric: PROP20  */
#line 360 "DARIC.y"
             { (yyval.ast) = integer(10); }
#line 5566 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 203: /* expression_numeric: PROP25  */
#line 361 "DARIC.y"
             { (yyval.ast) = integer(11); }
#line 5572 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 204: /* expression_numeric: PROP30  */
#line 362 "DARIC.y"
             { (yyval.ast) = integer(12); }
#line 5578 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 205: /* expression_numeric: PROP35  */
#line 363 "DARIC.y"
             { (yyval.ast) = integer(13); }
#line 5584 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 206: /* expression_numeric: PROP40  */
#line 364 "DARIC.y"
             { (yyval.ast) = integer(14); }
#line 5590 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 207: /* expression_numeric: PROP50  */
#line 365 "DARIC.y"
             { (yyval.ast) = integer(15); }
#line 5596 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 208: /* expression_numeric: PROP75  */
#line 366 "DARIC.y"
             { (yyval.ast) = integer(16); }
#line 5602 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 209: /* expression_numeric: PROP100  */
#line 367 "DARIC.y"
              { (yyval.ast) = integer(17); }
#line 5608 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 210: /* expression_numeric: SERIF15  */
#line 368 "DARIC.y"
              { (yyval.ast) = integer(18); }
#line 5614 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 211: /* expression_numeric: SERIF20  */
#line 369 "DARIC.y"
              { (yyval.ast) = integer(19); }
#line 5620 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 212: /* expression_numeric: SERIF25  */
#line 370 "DARIC.y"
              { (yyval.ast) = integer(20); }
#line 5626 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 213: /* expression_numeric: SERIF30  */
#line 371 "DARIC.y"
              { (yyval.ast) = integer(21); }
#line 5632 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 214: /* expression_numeric: SERIF35  */
#line 372 "DARIC.y"
              { (yyval.ast) = integer(22); }
#line 5638 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 215: /* expression_numeric: SERIF40  */
#line 373 "DARIC.y"
              { (yyval.ast) = integer(23); }
#line 5644 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 216: /* expression_numeric: SERIF50  */
#line 374 "DARIC.y"
              { (yyval.ast) = integer(24); }
#line 5650 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 217: /* expression_numeric: SERIF75  */
#line 375 "DARIC.y"
              { (yyval.ast) = integer(25); }
#line 5656 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 218: /* expression_numeric: SERIF100  */
#line 376 "DARIC.y"
               { (yyval.ast) = integer(26); }
#line 5662 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 219: /* expression_numeric: EOFH expression_numeric  */
#line 377 "DARIC.y"
                              { (yyval.ast) = token1(EOFH, (yyvsp[0].ast)); }
#line 5668 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 220: /* expression_numeric: BGET expression_numeric  */
#line 378 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 5674 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 221: /* expression_numeric: OPENIN '(' expression_string ')'  */
#line 379 "DARIC.y"
                                       { (yyval.ast) = token1(OPENIN, (yyvsp[-1].ast)); }
#line 5680 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 222: /* expression_numeric: OPENOUT '(' expression_string ')'  */
#line 380 "DARIC.y"
                                        { (yyval.ast) = token1(OPENOUT, (yyvsp[-1].ast)); }
#line 5686 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 223: /* expression_numeric: OPENUP '(' expression_string ')'  */
#line 381 "DARIC.y"
                                       { (yyval.ast) = token1(OPENUP, (yyvsp[-1].ast)); }
#line 5692 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 224: /* expression_numeric: RND  */
#line 383 "DARIC.y"
          { (yyval.ast) = token(RND); }
#line 5698 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 225: /* expression_numeric: RND0  */
#line 384 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(0)); }
#line 5704 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 226: /* expression_numeric: RND1  */
#line 385 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(1)); }
#line 5710 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 227: /* expression_numeric: RND '(' expression_numeric ')'  */
#line 386 "DARIC.y"
                                     { (yyval.ast) = token1(RNDRANGE, (yyvsp[-1].ast)); }
#line 5716 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 228: /* expression_numeric: PI  */
#line 388 "DARIC.y"
         { (yyval.ast) = token(PI); }
#line 5722 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 229: /* expression_numeric: NOT expression_numeric  */
#line 389 "DARIC.y"
                             { (yyval.ast) = token1(NOT, (yyvsp[0].ast)); }
#line 5728 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 230: /* expression_numeric: SQR '(' expression_numeric ')'  */
#line 390 "DARIC.y"
                                     { (yyval.ast) = token1(SQR, (yyvsp[-1].ast)); }
#line 5734 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 231: /* expression_numeric: LN '(' expression_numeric ')'  */
#line 391 "DARIC.y"
                                    { (yyval.ast) = token1(LN, (yyvsp[-1].ast)); }
#line 5740 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 232: /* expression_numeric: LOG '(' expression_numeric ')'  */
#line 392 "DARIC.y"
                                     { (yyval.ast) = token1(LOG, (yyvsp[-1].ast)); }
#line 5746 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 233: /* expression_numeric: EXP '(' expression_numeric ')'  */
#line 393 "DARIC.y"
                                     { (yyval.ast) = token1(EXP, (yyvsp[-1].ast)); }
#line 5752 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 234: /* expression_numeric: ATN '(' expression_numeric ')'  */
#line 394 "DARIC.y"
                                     { (yyval.ast) = token1(ATN, (yyvsp[-1].ast)); }
#line 5758 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 235: /* expression_numeric: TAN '(' expression_numeric ')'  */
#line 395 "DARIC.y"
                                     { (yyval.ast) = token1(TAN, (yyvsp[-1].ast)); }
#line 5764 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 236: /* expression_numeric: COS '(' expression_numeric ')'  */
#line 396 "DARIC.y"
                                     { (yyval.ast) = token1(COS, (yyvsp[-1].ast)); }
#line 5770 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 237: /* expression_numeric: SIN '(' expression_numeric ')'  */
#line 397 "DARIC.y"
                                     { (yyval.ast) = token1(SIN, (yyvsp[-1].ast)); }
#line 5776 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 238: /* expression_numeric: ABS '(' expression_numeric ')'  */
#line 398 "DARIC.y"
                                     { (yyval.ast) = token1(ABS, (yyvsp[-1].ast)); }
#line 5782 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 239: /* expression_numeric: ACS '(' expression_numeric ')'  */
#line 399 "DARIC.y"
                                     { (yyval.ast) = token1(ACS, (yyvsp[-1].ast)); }
#line 5788 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 240: /* expression_numeric: ASN '(' expression_numeric ')'  */
#line 400 "DARIC.y"
                                     { (yyval.ast) = token1(ASN, (yyvsp[-1].ast)); }
#line 5794 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 241: /* expression_numeric: DEG '(' expression_numeric ')'  */
#line 401 "DARIC.y"
                                     { (yyval.ast) = token1(DEG, (yyvsp[-1].ast)); }
#line 5800 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 242: /* expression_numeric: RAD '(' expression_numeric ')'  */
#line 402 "DARIC.y"
                                     { (yyval.ast) = token1(RAD, (yyvsp[-1].ast)); }
#line 5806 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 243: /* expression_numeric: SGN '(' expression_numeric ')'  */
#line 403 "DARIC.y"
                                     { (yyval.ast) = token1(SGN, (yyvsp[-1].ast)); }
#line 5812 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 244: /* expression_numeric: ASC '(' expression_string ')'  */
#line 405 "DARIC.y"
                                    { (yyval.ast) = token1(ASC, (yyvsp[-1].ast)); }
#line 5818 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 245: /* expression_numeric: LEN '(' expression_string ')'  */
#line 406 "DARIC.y"
                                    { (yyval.ast) = token1(LEN, (yyvsp[-1].ast)); }
#line 5824 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 246: /* expression_numeric: INSTR '(' expression_string ',' expression_string ')'  */
#line 407 "DARIC.y"
                                                            { (yyval.ast) = token3(INSTR, (yyvsp[-3].ast), (yyvsp[-1].ast), integer(1)); }
#line 5830 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 247: /* expression_numeric: INSTR '(' expression_string ',' expression_string ',' expression_numeric ')'  */
#line 408 "DARIC.y"
                                                                                   { (yyval.ast) = token3(INSTR, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5836 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 248: /* expression_numeric: VAL '(' expression_string ')'  */
#line 409 "DARIC.y"
                                    { (yyval.ast) = token1(VAL, (yyvsp[-1].ast)); }
#line 5842 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 249: /* variable_integer: INTEGER_VARIABLE  */
#line 413 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5848 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 250: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 414 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5854 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 251: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 415 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5860 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 252: /* variable_integer: TYPE_VARIABLE INTEGER_VARIABLE  */
#line 416 "DARIC.y"
                                     { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5866 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 253: /* variable_integer: TYPE_VARIABLE '(' expression_numeric ')' INTEGER_VARIABLE  */
#line 417 "DARIC.y"
                                                                { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5872 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 254: /* variable_real: VARIABLE  */
#line 421 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 5878 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 255: /* variable_real: VARIABLE '(' expression_numeric ')'  */
#line 422 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5884 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 256: /* variable_real: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 423 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5890 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 257: /* variable_real: TYPE_VARIABLE VARIABLE  */
#line 424 "DARIC.y"
                             { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5896 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 258: /* variable_real: TYPE_VARIABLE '(' expression_numeric ')' VARIABLE  */
#line 425 "DARIC.y"
                                                        { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5902 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 259: /* variable_numeric: variable_integer  */
#line 429 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5908 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 260: /* variable_numeric: variable_real  */
#line 430 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5914 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 261: /* variable_string: STRING_VARIABLE  */
#line 434 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 5920 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 262: /* variable_string: STRING_VARIABLE '(' expression_numeric ')'  */
#line 435 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5926 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 263: /* variable_string: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 436 "DARIC.y"
                                                                        { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5932 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 264: /* variable_string: TYPE_VARIABLE '(' expression_numeric ')' STRING_VARIABLE  */
#line 437 "DARIC.y"
                                                               { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5938 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 265: /* variable: variable_numeric  */
#line 441 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5944 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 266: /* variable: variable_string  */
#line 442 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 5950 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 267: /* variable_list: variable  */
#line 446 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 5956 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 268: /* variable_list: variable ',' variable_list  */
#line 447 "DARIC.y"
                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5962 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 269: /* plain_variable: INTEGER_VARIABLE  */
#line 451 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5968 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 270: /* plain_variable: VARIABLE  */
#line 452 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 5974 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 271: /* plain_variable: STRING_VARIABLE  */
#line 453 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 5980 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 272: /* plain_variable_list: plain_variable  */
#line 457 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 5986 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 273: /* plain_variable_list: plain_variable ',' plain_variable_list  */
#line 458 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5992 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 274: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 462 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5998 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 275: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 463 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 6004 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 276: /* dim_variable: VARIABLE '(' expression_numeric ')'  */
#line 464 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 6010 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 277: /* dim_variable: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 465 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 6016 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 278: /* dim_variable: STRING_VARIABLE '(' expression_numeric ')'  */
#line 466 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6022 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 279: /* dim_variable: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 467 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6028 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 280: /* dim_variable: TYPE_VARIABLE '(' expression_numeric ',' VARIABLE ')'  */
#line 468 "DARIC.y"
                                                            { (yyval.ast) = typevariable1d((yyvsp[-5].v_string), (yyvsp[-1].v_string), (yyvsp[-3].ast), Type::TYPE_ARRAY); }
#line 6034 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 281: /* dim_variable_list: dim_variable  */
#line 472 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6040 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 282: /* dim_variable_list: dim_variable ',' dim_variable_list  */
#line 473 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6046 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 283: /* type_variable: TYPE_VARIABLE  */
#line 477 "DARIC.y"
                    { (yyval.ast) = variable((yyvsp[0].v_string), Type::TYPE); }
#line 6052 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 284: /* type_variable: TYPE_VARIABLE '(' expression_numeric ')'  */
#line 478 "DARIC.y"
                                               { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::TYPE_ARRAY); }
#line 6058 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 285: /* type: TYPE_ VARIABLE NL field_list ENDTYPE  */
#line 482 "DARIC.y"
                                           { (yyval.ast) = token2(TYPE_, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 6064 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 286: /* field: FIELD variable  */
#line 486 "DARIC.y"
                     { (yyval.ast) = token1(FIELD, (yyvsp[0].ast)); }
#line 6070 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 287: /* field_list: field NL  */
#line 490 "DARIC.y"
              { (yyval.ast) = (yyvsp[-1].ast); }
#line 6076 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 288: /* field_list: field NL field_list  */
#line 491 "DARIC.y"
                          { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6082 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 289: /* string: LITERAL_STRING  */
#line 495 "DARIC.y"
                     { (yyval.ast) = string((yyvsp[0].v_string)); }
#line 6088 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 290: /* expression_string: string  */
#line 499 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 6094 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 291: /* expression_string: variable_string  */
#line 500 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6100 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 292: /* expression_string: expression_string PLUS expression_string  */
#line 501 "DARIC.y"
                                               { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6106 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 293: /* expression_string: expression_string E expression_string  */
#line 502 "DARIC.y"
                                            { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6112 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 294: /* expression_string: expression_string NE expression_string  */
#line 503 "DARIC.y"
                                             { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6118 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 295: /* expression_string: expression_string GE expression_string  */
#line 504 "DARIC.y"
                                             { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6124 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 296: /* expression_string: expression_string LE expression_string  */
#line 505 "DARIC.y"
                                             { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6130 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 297: /* expression_string: expression_string LT expression_string  */
#line 506 "DARIC.y"
                                             { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6136 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 298: /* expression_string: expression_string GT expression_string  */
#line 507 "DARIC.y"
                                             { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6142 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 299: /* expression_string: GETSH expression_numeric  */
#line 509 "DARIC.y"
                               { (yyval.ast) = token1(GETSH, (yyvsp[0].ast)); }
#line 6148 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 300: /* expression_string: FN_STRING '(' expression_list ')'  */
#line 511 "DARIC.y"
                                        { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 6154 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 301: /* expression_string: GETS  */
#line 513 "DARIC.y"
           { (yyval.ast) = token(GETS); }
#line 6160 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 302: /* expression_string: INKEYS '(' expression_numeric ')'  */
#line 514 "DARIC.y"
                                        { (yyval.ast) = token1(INKEYS, (yyvsp[-1].ast)); }
#line 6166 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 303: /* expression_string: TIMES  */
#line 516 "DARIC.y"
            { (yyval.ast) = token(TIMES); }
#line 6172 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 304: /* expression_string: STRS '(' expression_numeric ')'  */
#line 517 "DARIC.y"
                                      { (yyval.ast) = token1(STRS, (yyvsp[-1].ast)); }
#line 6178 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 305: /* expression_string: STRS TILDE '(' expression_numeric ')'  */
#line 518 "DARIC.y"
                                            { (yyval.ast) = token1(STRSHEX, (yyvsp[-1].ast)); }
#line 6184 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 306: /* expression_string: STRINGS '(' expression_numeric ',' expression_string ')'  */
#line 519 "DARIC.y"
                                                               { (yyval.ast) = token2(STRINGS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6190 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 307: /* expression_string: CHRS '(' expression_numeric ')'  */
#line 520 "DARIC.y"
                                      { (yyval.ast) = token1(CHRS, (yyvsp[-1].ast)); }
#line 6196 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 308: /* expression_string: LEFTS '(' expression_string ',' expression_numeric ')'  */
#line 521 "DARIC.y"
                                                             { (yyval.ast) = token2(LEFTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6202 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 309: /* expression_string: MIDS '(' expression_string ',' expression_numeric ',' expression_numeric ')'  */
#line 522 "DARIC.y"
                                                                                   { (yyval.ast) = token3(MIDS, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6208 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 310: /* expression_string: RIGHTS '(' expression_string ',' expression_numeric ')'  */
#line 523 "DARIC.y"
                                                              { (yyval.ast) = token2(RIGHTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6214 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 311: /* expression: expression_numeric  */
#line 527 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6220 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 312: /* expression: expression_string  */
#line 528 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6226 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 313: /* expression_list: %empty  */
#line 532 "DARIC.y"
                     { (yyval.ast) = NULL; }
#line 6232 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 314: /* expression_list: expression  */
#line 533 "DARIC.y"
                 { (yyval.ast) = (yyvsp[0].ast); }
#line 6238 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 315: /* expression_list: expression ',' expression_list  */
#line 534 "DARIC.y"
                                     { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6244 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 316: /* assignment_single: variable_numeric E expression_numeric  */
#line 538 "DARIC.y"
                                            { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6250 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 317: /* assignment_single: variable_string E expression_string  */
#line 539 "DARIC.y"
                                          { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6256 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 318: /* assignment_single: type_variable E expression  */
#line 540 "DARIC.y"
                                 { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6262 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 319: /* assignment_single: type_variable variable E expression  */
#line 541 "DARIC.y"
                                          { (yyval.ast) = assignment(link((yyvsp[-3].ast), (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 6268 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 320: /* assignment_list: assignment_single  */
#line 545 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6274 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 321: /* assignment_list: assignment_single ',' assignment_list  */
#line 546 "DARIC.y"
                                            { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6280 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 322: /* assignment: assignment_list  */
#line 550 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6286 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 323: /* assignment: LOCAL assignment_list  */
#line 551 "DARIC.y"
                            { (yyval.ast) = token1(LOCAL, (yyvsp[0].ast)); }
#line 6292 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 324: /* assignment: GLOBAL assignment_list  */
#line 552 "DARIC.y"
                             { (yyval.ast) = token1(GLOBAL, (yyvsp[0].ast)); }
#line 6298 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 325: /* assignment: variable_numeric SHL_E expression_numeric  */
#line 553 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6304 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 326: /* assignment: variable_numeric SHR_E expression_numeric  */
#line 554 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6310 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 327: /* assignment: variable_numeric PLUS_E expression_numeric  */
#line 555 "DARIC.y"
                                                 { (yyval.ast) = assignment((yyvsp[-2].ast), token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6316 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 328: /* assignment: variable_numeric MINUS_E expression_numeric  */
#line 556 "DARIC.y"
                                                  { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6322 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 329: /* assignment: variable_numeric MULTIPLY_E expression_numeric  */
#line 557 "DARIC.y"
                                                     { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6328 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 330: /* assignment: variable_numeric DIVIDE_E expression_numeric  */
#line 558 "DARIC.y"
                                                   { (yyval.ast) = assignment((yyvsp[-2].ast), token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6334 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 331: /* assignment: variable_numeric INTEGERDIVIDE_E expression_numeric  */
#line 559 "DARIC.y"
                                                          { (yyval.ast) = assignment((yyvsp[-2].ast), token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6340 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 332: /* expression_print: expression_string  */
#line 563 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6346 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 333: /* expression_print: expression_numeric  */
#line 564 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6352 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 334: /* expression_print: ','  */
#line 565 "DARIC.y"
          { (yyval.ast) = token(COMMA); }
#line 6358 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 335: /* expression_print: TILDE  */
#line 566 "DARIC.y"
            { (yyval.ast) = token(TILDE); }
#line 6364 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 336: /* expression_print: TICK  */
#line 567 "DARIC.y"
           { (yyval.ast) = token(TICK); }
#line 6370 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 337: /* expression_print: SPC '(' expression_numeric ')'  */
#line 568 "DARIC.y"
                                     { (yyval.ast) = token1(SPC, (yyvsp[-1].ast)); }
#line 6376 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 338: /* expression_print: SEMICOLON  */
#line 569 "DARIC.y"
                { (yyval.ast) = token(SEMICOLON); }
#line 6382 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 339: /* expression_print_list: expression_print  */
#line 573 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6388 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 340: /* expression_print_list: expression_print expression_print_list  */
#line 574 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6394 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 342: /* expression_input_list: expression_input  */
#line 582 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6400 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 343: /* expression_input_list: expression_input ',' expression_input_list  */
#line 583 "DARIC.y"
                                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6406 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 344: /* proc_parameter: %empty  */
#line 587 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6412 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 345: /* proc_parameter: variable  */
#line 588 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6418 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 346: /* proc_parameter: RETURN variable  */
#line 589 "DARIC.y"
                      { (yyval.ast) = token1(RETURN_PARAMETER, (yyvsp[0].ast)); }
#line 6424 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 347: /* proc_parameter_list: proc_parameter  */
#line 593 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 6430 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 348: /* proc_parameter_list: proc_parameter ',' proc_parameter_list  */
#line 594 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6436 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 349: /* fn_parameter: %empty  */
#line 598 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6442 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 350: /* fn_parameter: variable  */
#line 599 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6448 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 351: /* fn_parameter_list: fn_parameter  */
#line 603 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6454 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 352: /* fn_parameter_list: fn_parameter ',' fn_parameter_list  */
#line 604 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6460 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 353: /* when: WHEN expression_list statement_list NL  */
#line 608 "DARIC.y"
                                             { (yyval.ast) = token2(WHEN, (yyvsp[-2].ast), (yyvsp[-1].ast)); }
#line 6466 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 354: /* when_list: when  */
#line 612 "DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 6472 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 355: /* when_list: when when_list  */
#line 613 "DARIC.y"
                     { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6478 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 356: /* define_function: DEFPROC '(' proc_parameter_list ')' SEPARATOR statement_list SEPARATOR ENDPROC  */
#line 616 "DARIC.y"
                                                                                     { (yyval.ast) = token3typed(DEFPROC, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-2].ast), Type::NOTYPE); }
#line 6484 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 357: /* define_function: DEFFN_INTEGER '(' fn_parameter_list ')' NL embed_lines ENDFN  */
#line 617 "DARIC.y"
                                                                   { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::INTEGER); }
#line 6490 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 358: /* define_function: DEFFN_REAL '(' fn_parameter_list ')' NL embed_lines ENDFN  */
#line 618 "DARIC.y"
                                                                { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::REAL); }
#line 6496 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 359: /* define_function: DEFFN_STRING '(' fn_parameter_list ')' NL embed_lines ENDFN  */
#line 619 "DARIC.y"
                                                                  { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::STRING); }
#line 6502 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;


#line 6506 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 622 "DARIC.y"


int parse(const char *filename) {
    yydebug = 1;
    yyfileno = 0;
    status = 1;
    yyin = fopen(filename, "r");

    if (!yyin) {
        std::stringstream stream;   
        stream << "Error opening source file '" << filename << "'" << std::endl;
        error_list.push_back(stream.str());
        return 0;
    }
    file = filename;
    files_index.insert(std::pair<std::string, int>(file, yyfileno));
    yyparse();
    fclose(yyin);
    yylex_destroy();
    auto a = ast_statements;
    return status;
}

void yyerror(const char *e) {
    std::stringstream stream;
    if (file_stack.size() == 0 && interactive) {
        stream << "Parsing error: " << e << " at line " << yylineno;    
    } else {
        stream << "Parsing error: " << e << " at line " << yylineno << " of file '" << file << "'";
    }
    error_list.push_back(stream.str());
    status = 0;
}
