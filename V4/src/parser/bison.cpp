/* A Bison parser, made by GNU Bison 3.7.1.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.1"

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

#line 91 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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
  YYSYMBOL_DEFINE_PROCEDURE = 11,          /* DEFINE_PROCEDURE  */
  YYSYMBOL_DEFINE_INTEGER_FUNCTION = 12,   /* DEFINE_INTEGER_FUNCTION  */
  YYSYMBOL_DEFINE_STRING_FUNCTION = 13,    /* DEFINE_STRING_FUNCTION  */
  YYSYMBOL_DEFINE_REAL_FUNCTION = 14,      /* DEFINE_REAL_FUNCTION  */
  YYSYMBOL_PROCEDURE = 15,                 /* PROCEDURE  */
  YYSYMBOL_INTEGER_FUNCTION = 16,          /* INTEGER_FUNCTION  */
  YYSYMBOL_REAL_FUNCTION = 17,             /* REAL_FUNCTION  */
  YYSYMBOL_STRING_FUNCTION = 18,           /* STRING_FUNCTION  */
  YYSYMBOL_NL = 19,                        /* NL  */
  YYSYMBOL_SS = 20,                        /* SS  */
  YYSYMBOL_SEMICOLON = 21,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 22,                     /* COMMA  */
  YYSYMBOL_INTEGER_DIVIDE = 23,            /* INTEGER_DIVIDE  */
  YYSYMBOL_E = 24,                         /* E  */
  YYSYMBOL_LE = 25,                        /* LE  */
  YYSYMBOL_GE = 26,                        /* GE  */
  YYSYMBOL_NE = 27,                        /* NE  */
  YYSYMBOL_SHL = 28,                       /* SHL  */
  YYSYMBOL_SHR = 29,                       /* SHR  */
  YYSYMBOL_LT = 30,                        /* LT  */
  YYSYMBOL_GT = 31,                        /* GT  */
  YYSYMBOL_PLUS = 32,                      /* PLUS  */
  YYSYMBOL_MINUS = 33,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 34,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 35,                    /* DIVIDE  */
  YYSYMBOL_TILDE = 36,                     /* TILDE  */
  YYSYMBOL_TICK = 37,                      /* TICK  */
  YYSYMBOL_SHL_E = 38,                     /* SHL_E  */
  YYSYMBOL_SHR_E = 39,                     /* SHR_E  */
  YYSYMBOL_PLUS_E = 40,                    /* PLUS_E  */
  YYSYMBOL_MINUS_E = 41,                   /* MINUS_E  */
  YYSYMBOL_MULTIPLY_E = 42,                /* MULTIPLY_E  */
  YYSYMBOL_DIVIDE_E = 43,                  /* DIVIDE_E  */
  YYSYMBOL_INTEGERDIVIDE_E = 44,           /* INTEGERDIVIDE_E  */
  YYSYMBOL_SWAP = 45,                      /* SWAP  */
  YYSYMBOL_SWAP_I = 46,                    /* SWAP_I  */
  YYSYMBOL_SWAP_F = 47,                    /* SWAP_F  */
  YYSYMBOL_SWAP_S = 48,                    /* SWAP_S  */
  YYSYMBOL_END_FN = 49,                    /* END_FN  */
  YYSYMBOL_END_PROC = 50,                  /* END_PROC  */
  YYSYMBOL_RETURN = 51,                    /* RETURN  */
  YYSYMBOL_RETURN_WITH_VALUE = 52,         /* RETURN_WITH_VALUE  */
  YYSYMBOL_DEFPROC = 53,                   /* DEFPROC  */
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
  YYSYMBOL_END_CASE = 71,                  /* END_CASE  */
  YYSYMBOL_END_IF = 72,                    /* END_IF  */
  YYSYMBOL_END_WHILE = 73,                 /* END_WHILE  */
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
  YYSYMBOL_END_TYPE = 96,                  /* END_TYPE  */
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
  YYSYMBOL_SCREENWIDTH = 204,              /* SCREENWIDTH  */
  YYSYMBOL_SCREENHEIGHT = 205,             /* SCREENHEIGHT  */
  YYSYMBOL_SHOWFPS = 206,                  /* SHOWFPS  */
  YYSYMBOL_LASTPOS = 207,                  /* LASTPOS  */
  YYSYMBOL_INKEY = 208,                    /* INKEY  */
  YYSYMBOL_INKEYS = 209,                   /* INKEYS  */
  YYSYMBOL_INPUT_ = 210,                   /* INPUT_  */
  YYSYMBOL_PRINT = 211,                    /* PRINT  */
  YYSYMBOL_SPC = 212,                      /* SPC  */
  YYSYMBOL_SINKEY = 213,                   /* SINKEY  */
  YYSYMBOL_SINKEYS = 214,                  /* SINKEYS  */
  YYSYMBOL_INPUT_NOQUESTIONMARK = 215,     /* INPUT_NOQUESTIONMARK  */
  YYSYMBOL_GET = 216,                      /* GET  */
  YYSYMBOL_GETS = 217,                     /* GETS  */
  YYSYMBOL_GET_S = 218,                    /* GET_S  */
  YYSYMBOL_GETS_S = 219,                   /* GETS_S  */
  YYSYMBOL_MOUSE = 220,                    /* MOUSE  */
  YYSYMBOL_CREATEVERTEX = 221,             /* CREATEVERTEX  */
  YYSYMBOL_CREATETRIANGLE = 222,           /* CREATETRIANGLE  */
  YYSYMBOL_CREATESHAPE = 223,              /* CREATESHAPE  */
  YYSYMBOL_CREATEOBJECT = 224,             /* CREATEOBJECT  */
  YYSYMBOL_TRANSLATE = 225,                /* TRANSLATE  */
  YYSYMBOL_ROTATE = 226,                   /* ROTATE  */
  YYSYMBOL_SCALE = 227,                    /* SCALE  */
  YYSYMBOL_RENDERFRAME = 228,              /* RENDERFRAME  */
  YYSYMBOL_DELETEOBJECT = 229,             /* DELETEOBJECT  */
  YYSYMBOL_SOLID = 230,                    /* SOLID  */
  YYSYMBOL_WIREFRAME = 231,                /* WIREFRAME  */
  YYSYMBOL_FILLEDWIREFRAME = 232,          /* FILLEDWIREFRAME  */
  YYSYMBOL_INTEGERDIVIDE = 233,            /* INTEGERDIVIDE  */
  YYSYMBOL_NEG = 234,                      /* NEG  */
  YYSYMBOL_235_ = 235,                     /* ','  */
  YYSYMBOL_236_ = 236,                     /* '('  */
  YYSYMBOL_237_ = 237,                     /* ')'  */
  YYSYMBOL_YYACCEPT = 238,                 /* $accept  */
  YYSYMBOL_daric = 239,                    /* daric  */
  YYSYMBOL_lines = 240,                    /* lines  */
  YYSYMBOL_line = 241,                     /* line  */
  YYSYMBOL_embed_lines = 242,              /* embed_lines  */
  YYSYMBOL_statements = 243,               /* statements  */
  YYSYMBOL_statement = 244,                /* statement  */
  YYSYMBOL_number = 245,                   /* number  */
  YYSYMBOL_expression_numeric = 246,       /* expression_numeric  */
  YYSYMBOL_variable_integer = 247,         /* variable_integer  */
  YYSYMBOL_variable_real = 248,            /* variable_real  */
  YYSYMBOL_variable_numeric = 249,         /* variable_numeric  */
  YYSYMBOL_variable_string = 250,          /* variable_string  */
  YYSYMBOL_variable = 251,                 /* variable  */
  YYSYMBOL_variable_list = 252,            /* variable_list  */
  YYSYMBOL_plain_variable = 253,           /* plain_variable  */
  YYSYMBOL_plain_variable_list = 254,      /* plain_variable_list  */
  YYSYMBOL_dim_variable = 255,             /* dim_variable  */
  YYSYMBOL_dim_variable_list = 256,        /* dim_variable_list  */
  YYSYMBOL_type_variable = 257,            /* type_variable  */
  YYSYMBOL_type = 258,                     /* type  */
  YYSYMBOL_field = 259,                    /* field  */
  YYSYMBOL_field_list = 260,               /* field_list  */
  YYSYMBOL_string = 261,                   /* string  */
  YYSYMBOL_expression_string = 262,        /* expression_string  */
  YYSYMBOL_expression = 263,               /* expression  */
  YYSYMBOL_expression_list = 264,          /* expression_list  */
  YYSYMBOL_assignment_single = 265,        /* assignment_single  */
  YYSYMBOL_assignment_list = 266,          /* assignment_list  */
  YYSYMBOL_assignment = 267,               /* assignment  */
  YYSYMBOL_expression_print = 268,         /* expression_print  */
  YYSYMBOL_expression_print_list = 269,    /* expression_print_list  */
  YYSYMBOL_expression_input = 270,         /* expression_input  */
  YYSYMBOL_expression_input_list = 271,    /* expression_input_list  */
  YYSYMBOL_proc_parameter = 272,           /* proc_parameter  */
  YYSYMBOL_proc_parameter_list = 273,      /* proc_parameter_list  */
  YYSYMBOL_fn_parameter = 274,             /* fn_parameter  */
  YYSYMBOL_fn_parameter_list = 275,        /* fn_parameter_list  */
  YYSYMBOL_when = 276,                     /* when  */
  YYSYMBOL_when_list = 277,                /* when_list  */
  YYSYMBOL_define_function = 278           /* define_function  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  290
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10605

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  238
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  349
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1019

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   489


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
     236,   237,     2,     2,   235,     2,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    90,    90,    94,    95,    99,   100,   101,   104,   105,
     109,   110,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   134,   135,   137,   138,   139,   140,   141,   142,
     144,   146,   147,   149,   150,   151,   152,   154,   155,   156,
     157,   159,   160,   161,   162,   164,   165,   166,   167,   169,
     170,   171,   173,   174,   175,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   209,   210,   212,   213,   215,   216,   219,
     222,   223,   224,   225,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   247,   248,   249,   250,   251,   252,   253,   257,
     258,   259,   260,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   291,
     292,   294,   295,   296,   298,   300,   301,   303,   304,   305,
     307,   308,   309,   310,   312,   313,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   358,   359,   360,   361,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   380,   381,   382,   383,   384,   388,
     389,   390,   391,   392,   396,   397,   398,   399,   400,   404,
     405,   409,   410,   411,   412,   416,   417,   421,   422,   426,
     427,   428,   432,   433,   437,   438,   439,   440,   441,   442,
     443,   447,   448,   452,   453,   457,   461,   465,   466,   470,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   484,
     486,   488,   489,   491,   492,   493,   494,   495,   496,   497,
     498,   502,   503,   507,   508,   509,   513,   514,   515,   516,
     520,   521,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   538,   539,   540,   541,   542,   543,   544,   548,
     549,   553,   557,   558,   562,   563,   564,   568,   569,   573,
     574,   578,   579,   583,   587,   588,   591,   592,   593,   594
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LINE_NUMBER",
  "LITERAL_INT", "LITERAL_REAL", "LITERAL_STRING", "INTEGER_VARIABLE",
  "VARIABLE", "STRING_VARIABLE", "TYPE_VARIABLE", "DEFINE_PROCEDURE",
  "DEFINE_INTEGER_FUNCTION", "DEFINE_STRING_FUNCTION",
  "DEFINE_REAL_FUNCTION", "PROCEDURE", "INTEGER_FUNCTION", "REAL_FUNCTION",
  "STRING_FUNCTION", "NL", "SS", "SEMICOLON", "COMMA", "INTEGER_DIVIDE",
  "E", "LE", "GE", "NE", "SHL", "SHR", "LT", "GT", "PLUS", "MINUS",
  "MULTIPLY", "DIVIDE", "TILDE", "TICK", "SHL_E", "SHR_E", "PLUS_E",
  "MINUS_E", "MULTIPLY_E", "DIVIDE_E", "INTEGERDIVIDE_E", "SWAP", "SWAP_I",
  "SWAP_F", "SWAP_S", "END_FN", "END_PROC", "RETURN", "RETURN_WITH_VALUE",
  "DEFPROC", "DEFFN", "CALLPROC", "CALLFN", "RETURN_PARAMETER", "BGET",
  "BPUT", "CLOSE", "EOFH", "OPENIN", "OPENUP", "OPENOUT", "PTR", "PTRA",
  "GETSH", "LISTFILES", "CASE", "ELSE", "END_CASE", "END_IF", "END_WHILE",
  "FOR", "GOSUB", "GOTO", "IF", "NEXT", "OF", "OTHERWISE", "REPEAT",
  "STEP", "THEN", "TO", "UNTIL", "WHEN", "WHILE", "IN_", "FORIN", "DATA",
  "READ", "RESTORE", "ARRAYSIZE", "DIM", "LOCALDIM", "END_TYPE", "FIELD",
  "GLOBAL", "LOCAL", "TYPE_", "END", "TRACEON", "TRACEOFF", "BREAKPOINT",
  "RND", "RND0", "RND1", "RNDREAL", "RNDRANGE", "FLOAT_", "INT_", "ACS",
  "DIV", "MOD", "SQR", "LN", "LOG", "EXP", "ATN", "TAN", "COS", "SIN",
  "ASN", "ABS", "DEG", "RAD", "SGN", "VAL", "PI", "BOOLFALSE", "BOOLTRUE",
  "ASC", "CHRS", "INSTR", "LEFTS", "MIDS", "RIGHTS", "LEN", "STRS",
  "STRSHEX", "STRINGS", "OSCLI", "TIME", "TIMES", "AND", "OR", "EOR",
  "NOT", "CHAIN", "EXPECT", "RED", "GREEN", "YELLOW", "BLUE", "MAGENTA",
  "CYAN", "WHITE", "BLACK", "CLS", "CLG", "COLOUR", "COLOURBG",
  "COLOUREXP", "FLIP", "GRAPHICS", "BANKED", "FILL", "SHADED", "LINE",
  "PLOT", "POINT_", "RECTANGLE", "RECTANGLEFILL", "TRIANGLE",
  "TRIANGLEFILL", "TRIANGLESHADED", "CLIPON", "CLIPOFF", "CIRCLE",
  "CIRCLEFILL", "TEXT", "TEXTRIGHT", "TEXTCENTRE", "LOADTYPEFACE",
  "CREATEFONT", "MONO15", "MONO20", "MONO25", "MONO30", "MONO35", "MONO40",
  "MONO50", "MONO75", "MONO100", "PROP15", "PROP20", "PROP25", "PROP30",
  "PROP35", "PROP40", "PROP50", "PROP75", "PROP100", "SCREENWIDTH",
  "SCREENHEIGHT", "SHOWFPS", "LASTPOS", "INKEY", "INKEYS", "INPUT_",
  "PRINT", "SPC", "SINKEY", "SINKEYS", "INPUT_NOQUESTIONMARK", "GET",
  "GETS", "GET_S", "GETS_S", "MOUSE", "CREATEVERTEX", "CREATETRIANGLE",
  "CREATESHAPE", "CREATEOBJECT", "TRANSLATE", "ROTATE", "SCALE",
  "RENDERFRAME", "DELETEOBJECT", "SOLID", "WIREFRAME", "FILLEDWIREFRAME",
  "INTEGERDIVIDE", "NEG", "','", "'('", "')'", "$accept", "daric", "lines",
  "line", "embed_lines", "statements", "statement", "number",
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

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
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
     485,   486,   487,   488,   489,    44,    40,    41
};
#endif

#define YYPACT_NINF (-381)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-37)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3749,  7144,  -222,  -216,  -178,    -1,  -154,  -144,  -140,  -118,
    -115,  -112,   -96,   -89,  -381,    54,  2469,  3519,  3519,  3519,
    3519,  2469,    58,    20,   154,  2469,    16,  2469,  2469,   265,
    -381,   342,   378,    38,   160,  -381,  -381,  -381,  -381,   613,
     613,   173,  -381,  3519,  3519,  -381,  2699,  3519,  3519,  2904,
    3109,  3519,  -381,  3314,  3519,  3519,  3519,  -381,   -63,   -50,
     223,  2236,  -381,  -381,   184,   190,   191,  3519,  3519,  3519,
    -381,  3519,   205,  -381,  3749,   174,   192,  -381,  -381,   121,
     187,   168,  -381,   -19,  -381,  -381,  -381,   202,  3519,  3519,
    1797,  -381,  -381,  3519,   120,   265,   265,   265,  2469,  2469,
    2469,  2469,     3,     9,    23,  -381,  -381,  -381,    -2,     1,
      26,    27,    40,   162,  3519,  3519,    50,    51,    59,  3519,
    3519,    60,    64,  -381,  -381,    65,    71,    78,    87,    88,
     117,   128,   129,   153,   158,   166,   181,   186,   196,   200,
     208,   212,  -381,  -381,  -381,   222,   232,   234,   237,   238,
     239,   243,    21,   252,  -381,  -381,  3519,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,   254,  -381,   255,   613,  3519,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,
    -381,   257,   258,  -381,  -381,   279,  3519,  -381,  -381,  -381,
    3519,  -381, 10445,  -381,  -381,  -381,  -381,   602,  -381,    14,
   10445,  7692, 10445, 10458,   236,   -14,    29,   268,   392,  -381,
    -381,  5712,  3749,  2469,   341,   155,  -381,  -381,  -381,   161,
    -381,   261,   262,   263,   264,   169,  -381,   395,  -381,   266,
     342,  -381,   414,   269,   602,   124,  -381,  -381,  -381,   224,
    -381,  7705,  7735,  3519,  7797,  7832,  7860,  3519,  7873,  3519,
    3519,  7889,  7924,  3519,  7965,  8016,  8029,  8057,  3519,  3519,
      33,  -381,   230,  -381,  -381,  -381,  -381,   270,  -381, 10445,
     602,  2236,  -381,   274,   280,   281,  8121,  8156,  8182, 10445,
    -381,  -381,  -381,  7144,  3519,  3519,  3519,  3519,  3519,  3519,
    3519,  3519,   613,  2469,   454,   378,  -381,    81,   617,   477,
    1014,   631,   265,  -381,   283,   282,  -381,   285,   284,   289,
     290,   291,   294,   297,   301,   496,   531,   534,  3519,  3519,
    2469,  2469,  2469,  -381,  -381,  -381,  -381, 10445, 10445,   613,
     613,   613, 10445, 10445,   399,  3519,  3519,  3519,  3519,  3519,
    3519,  3519,  3519,  3519,  3519,  3519,  3519,  3519,  3519,  3519,
    3519,  3519,   613,   613,  3519,   613,   613,   613,   613,   613,
     304,  3519,  3519,   522,  3519,  3519,   602,  8195,  3519,  3519,
     319,  8248,  1493,  3519,  3519,  3519,  3519,  3519,  3519,  3519,
    3519,  3519,  3519,  3519,  3519,  3519,  3519,  3519,  3519,  3519,
    3519,   613,   613,   613,   613,   613,   613,   613,  3519,  3519,
    3519,   537,  3519,   556,  3519,   557,   555,    31,    32,   479,
    3749,  5891,  -381,    61,  3749,   483,  -381,  3749,  2469,   265,
    3519,  3519,  3519,  3519,   342,  2002,  -381,   473,  3519,   173,
     173,  3519,  3519,  8287,  3519,  3519,  3519,  8340,  3519,  8353,
    8379,  3519,  3519,  8414,  3519,  3519,  3519,  3519,  1548,  1602,
     265,  -381,   265,  3519,  -381,   565,  3519,  3519,  3519,  3519,
    3519,  -381, 10445, 10445, 10445, 10445, 10445, 10445, 10445, 10445,
     602,  -381,  2469,  -381,  3519,  -381,  3519,  -381,   505,  3519,
    -381,   403,  -381,   120,   562,   265,   563,   568,   570,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,  1619,   337,   338,   353,
     111,   172,   183,   355,   356,   357,  1727,  3755,  3911,  4134,
    4357,  4580,  4803,  5026,  5249,  5472,  5633,  5798,  5812,  5977,
    5991,  6156,  6170,   193,   229,  6335,   553,   647,   666,  1036,
     267,  3519,  6349,  8478,  8506,  8519,  3519,  6514,  6528,   584,
    3519,  -381, 10445,   448,   448,   448,   448,   522,   522,   448,
     448,   507,   507,   242,   242,   242,   242,  1473,  2024,  2024,
     564,   564,   564,   564,   564,   564,  -381,  6693, 10445,   919,
     509,  1792,   362,  2694,   363,   369,  3519,   601,  3519,   603,
     604,    74,  3749,   540,  7144,  -381,  2469,   539,  -381,  -381,
    1067,  1258,  1310,  8570,  -381,   590,   265,   596,   520,  6707,
    -381,  -381,  8611,  8646,  3519, 10445,  8662, 10445,  3519,  8675,
    3519,  3519,  8703,  8738,  3519,  8800,  8830,  8843,  8892,  -381,
    -381,  -381,  -381,  6872,   383,  6886,  7051,  8935,  8984, 10445,
    -381,  7065,  7229,   388,  7243,  -381,  -381,  -381,  -381,  3749,
    -381,  3749,  3749,  3749,   403,  -381,  -381,  -381,  -381,  -381,
    -381,   393,   398,   400,  -381,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,   613,  3519,  3519,  3519,  -381,  7305,
    -381,   613,  3519,  3519, 10445,  -381,  -381,  -381,  8997,    79,
    2469,   509,   -11,  3519,   401,  3519,   416,   444, 10383,   389,
   10418,   446,   447,   668,  -381,   197,  7144,  -381,  -381,  -381,
    3519,  -381,  3519,  -381,  3519,  -381,   628,   621,  -381,   473,
    -381,   685,  3519,  3519, 10445,  3519,  9027,  3519,  9089,  9124,
    3519,  3519,  9152,  3519,  3519,  3519,  3519,  -381,   688,   465,
     466,  3519,  3519,  -381,  -381,   613,  -381,   652,   655,   657,
     659,   474,   475,   476,    53,  7368,  9165,  7381,  -381,   278,
    9181,  7398,  3519,  7144,  -381,  -381,  7144,  3972,  6070,  4195,
    6249,  6428,  3519,   480,  3519,   482,   484,  3749,   693,  -381,
    -381,  7411,  7474,  7536,   485,   478,  -381, 10445, 10445,  9216,
    3519,  9257,  3519,  3519,  9308,  9321,  3519, 10445,  9349,  9413,
    9448,  -381,  3519,  3519,  9474,  9487,   295,  -381,  -381,  -381,
    -381,    90,    90,    90,  3519,  -381,  -381,  3519,  -381,  -381,
    3519,  -381,  9540,   694,   706,  3749,  3519,   654,  3749,   658,
    3749,  3519,   660,  3749,   661,  3749,   663,  4418,  6607,  4641,
    6786,  6965,   665,  3749,  -381,  -381,  -381,  -381,   613,  3519,
    9579,  3519,  9632,  9645,  3519,  3519, 10445,   613,   613,   613,
    9671,  9706,  3519,  3519,  -381,    95,   506,   510,   514,  7549,
    7599,  7642,  3519,  -381,   671,   675,  4864,  -381,   680,  -381,
     681,  5087,  -381,   682,  -381,   683,  -381,  3749,  3519,   691,
    3749,   692,  3749,  3519,   695,  3749,   701,  3749,   702,  -381,
     699,   430, 10445,  3519, 10445,  3519,  3519,  9770, 10445,   602,
     602,   602,  3519,  3519, 10445, 10445,  -381,  -381,  -381,  -381,
    -381,  -381,  9798,  -381,  -381,  3749,   703,  -381,  -381,  3749,
     704,  -381,  -381,   709,  5310,  -381,   712,  -381,   713,  5533,
    -381,   714,  -381,   715,  -381,  -381,  -381, 10445,  9811,  9862,
    3519,  9903,  9938,  3519,   716,  -381,   720,  -381,  -381,  3749,
     721,  -381,  -381,  3749,   722,  -381,  -381,  3519,  3519,  9954,
    3519,  3519,  9967,  -381,  -381,   728,  -381,   730,  -381,  9995,
   10030,  3519, 10092, 10122,  3519,  -381,  -381,  3519,  3519, 10445,
    3519,  3519, 10135, 10445, 10184, 10445, 10445,  3519,  3519, 10227,
   10276,  3519,  3519, 10289, 10319,  3519,  3519, 10445, 10445
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   239,   244,   251,   273,     0,     0,     0,     0,
      19,     0,     0,     0,     6,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   303,     0,
      26,     0,     0,     0,     0,    18,    29,    30,    31,     0,
       0,     0,   104,     0,     0,   113,   111,     0,     0,     0,
       0,     0,   124,     0,     0,     0,     0,   128,     0,     0,
       0,    95,    49,    50,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     2,     3,     0,    10,   249,   250,     0,
       0,     0,    14,   310,   312,    12,    13,     0,     0,     0,
       0,   242,   247,     0,   334,   339,   339,   339,   303,   303,
     303,   303,     0,     0,     0,   129,   131,   279,   251,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   214,   215,   216,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,   168,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   169,   293,     0,   176,   177,   178,
     179,   180,   181,   182,   183,     0,   172,     0,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   187,   188,
     184,     0,     0,   165,   291,     0,     0,   170,   171,   173,
       0,   133,   301,   134,   135,   281,   280,   302,    28,     0,
      35,     0,    37,     0,     0,     0,     0,     0,     0,    41,
      42,     0,     0,     0,     0,   304,    24,   255,   256,   257,
      25,     0,     0,     0,     0,   271,    32,     0,   314,   251,
       0,   313,     0,     0,    40,    15,   259,   260,   261,   262,
      17,   105,   107,   112,     0,     0,     0,     0,     0,     0,
     172,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   331,   332,    43,   328,   325,   326,     0,   324,   323,
     322,   329,    96,     0,     0,     0,     0,     0,     0,   103,
       1,     4,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,   335,   337,     0,   340,   341,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     303,   303,   303,   130,   132,   139,   140,   210,   209,     0,
       0,     0,   164,   289,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,     0,   189,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,    10,     8,     0,    60,     0,   303,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,     0,   330,     0,     0,     0,     0,     0,
       0,    11,   306,   315,   316,   317,   318,   319,   320,   321,
     307,   308,     0,   311,     0,   240,     0,   245,     0,     0,
     252,   274,   336,   334,     0,   339,     0,     0,     0,    20,
      21,    22,    23,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   136,   145,   150,   153,   152,   151,   148,   149,   154,
     155,   141,   142,   143,   144,   146,   147,   156,   157,   158,
     283,   286,   285,   284,   287,   288,   282,     0,    34,   150,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     9,     0,     0,   305,   258,
       0,     0,     0,     0,   272,     0,     0,     0,     0,     0,
      16,   263,     0,     0,     0,   109,     0,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
      48,    45,   333,     0,     0,     0,     0,     0,     0,   102,
     309,     0,     0,     0,     0,   243,   248,   254,   338,     0,
     342,     0,     0,     0,     0,   159,   160,   290,   211,   213,
     212,     0,     0,     0,   217,   137,   138,   229,   220,   221,
     222,   223,   224,   225,   226,   227,   230,   228,   231,   232,
     233,   238,   234,   297,     0,     0,     0,     0,   235,     0,
     294,     0,     0,     0,   190,   166,   292,   174,     0,     0,
     303,   344,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,    52,    59,    61,
       0,   264,     0,   266,     0,   268,     0,     0,   276,   277,
     275,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   327,     0,     0,
       0,     0,     0,   241,   246,     0,   253,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   295,     0,
       0,     0,     0,     0,   345,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
      56,     0,     0,     0,     0,     0,   278,   106,   108,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
       0,    46,     0,     0,     0,     0,     0,   346,   347,   349,
     348,     0,     0,     0,     0,   236,   298,     0,   300,   296,
       0,   186,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,   267,   269,   270,     0,     0,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,   343,     0,     0,     0,    79,     0,    69,
       0,     0,    80,     0,    68,     0,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,   116,     0,   117,     0,     0,     0,   123,   125,
     126,   127,     0,     0,   100,   101,   162,   161,   163,   237,
     299,   185,     0,    94,    77,     0,     0,    66,    78,     0,
       0,    65,    67,     0,     0,    87,     0,    75,     0,     0,
      88,     0,    74,     0,    76,    58,    39,   118,     0,     0,
       0,     0,     0,     0,     0,    83,     0,    84,    85,     0,
       0,    72,    86,     0,     0,    71,    73,     0,     0,     0,
       0,     0,     0,    81,    82,     0,    91,     0,    92,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,   119,
       0,     0,     0,   120,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   175,   121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -381,  -381,   698,    19,   182,    24,  -210,  -380,   -17,   463,
     837,    93,  1108,    -6,   380,  -381,  -306,  -381,  -212,  -381,
    -381,  -381,    37,  -381,   145,    43,   -83,  -381,   -20,  -381,
    -381,   503,  -381,  -221,  -381,   318,  -381,   -92,  -381,   113,
    -381
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    72,    73,   424,   425,    75,    76,   201,   202,   203,
     204,    79,    80,   271,   230,   249,   250,   235,   236,    81,
      82,   607,   608,   206,   207,   225,   226,    83,    84,    85,
     281,   282,   272,   273,   314,   315,   317,   318,   701,   702,
      86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     210,   211,   212,   213,   319,   320,    91,    92,    91,    92,
     412,   423,   238,   241,    88,   321,   322,   323,   324,    74,
      89,    91,    92,   229,   219,    87,   251,   252,   436,   254,
     255,   256,   258,   261,   262,   222,   264,   265,   266,   267,
       2,     3,   108,   109,   279,     2,     3,   239,     5,   461,
     286,   287,   288,   414,   289,   586,   588,   370,    90,   208,
     775,   102,   103,   104,   214,   215,   216,   217,   221,   776,
     224,   307,   308,   310,   413,   304,   311,   401,   402,   403,
     404,   293,    94,   405,   406,   407,   645,   646,   313,   316,
     316,   316,    95,    74,   105,   106,    96,   337,   338,   333,
     334,   223,   342,   343,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   415,    97,   587,
     589,    98,   227,   875,    99,   237,   237,     2,     3,   108,
     109,   594,   240,   610,   611,   401,   402,   403,   404,   373,
     100,   405,   406,   407,   713,   294,   714,   101,   401,   402,
     403,   404,   377,   227,   405,   406,   407,   218,   220,   295,
     296,   297,   298,   299,   300,   301,   333,   334,   242,     2,
       3,   312,   209,   268,   227,     2,     3,   108,   109,   381,
     246,   247,   248,   382,   244,   245,   269,   227,   227,   227,
     227,   283,   303,   292,   396,   397,   401,   402,   403,   404,
     284,   285,   405,   406,   407,   290,   280,   401,   402,   403,
     404,   302,   293,   405,   406,   407,   305,   401,   402,   403,
     404,   306,   604,   405,   406,   407,   398,   399,   400,   270,
       2,     3,   108,   109,   328,    93,   443,   329,   325,   631,
     447,   632,   449,   450,   326,   422,   453,   507,   508,   509,
     408,   458,   459,   401,   402,   403,   404,   371,   327,   405,
     406,   407,   330,   331,   279,   383,   426,   788,   460,   789,
     388,   389,     2,     3,   108,   109,   332,   472,   473,   474,
     475,   476,   477,   478,   479,   483,   339,   340,   824,   380,
     825,   401,   402,   403,   404,   341,   344,   405,   406,   407,
     345,   346,   401,   402,   403,   404,   492,   347,   405,   406,
     407,   310,   506,   376,   348,   411,   484,   471,   485,   401,
     402,   403,   404,   349,   350,   405,   406,   407,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   598,   481,   535,   658,   231,
     232,   233,   234,   351,   542,   543,   416,   544,   545,   439,
     427,   547,   548,   227,   352,   353,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   717,     2,     3,   108,     5,   354,
     428,   577,   578,   579,   355,   581,   429,   583,   237,   417,
     418,   419,   356,   650,   434,   227,   513,   514,   515,   659,
     645,   646,   647,   600,   601,   602,   603,   357,   310,   294,
     660,   609,   358,   229,   612,   613,   280,   615,   616,   617,
     681,   619,   359,   437,   622,   623,   360,   625,   626,   627,
     628,   876,   877,   878,   361,   593,   633,   480,   362,   635,
     636,   637,   638,   639,   401,   402,   403,   404,   363,   440,
     405,   406,   407,    77,    77,   462,   682,   641,   364,   642,
     365,   383,   644,   366,   367,   368,   388,   389,   482,   369,
     392,   393,   394,   395,   510,   511,   512,   313,   372,   316,
     374,   375,    77,   378,   379,    77,    77,   430,   431,   432,
     433,   488,   435,   503,   688,   438,   463,   533,   534,   465,
     536,   537,   538,   539,   540,   829,   466,   467,   493,   494,
     495,   496,   227,    77,   689,   640,   497,   498,   499,   694,
     383,   500,   874,   698,   501,   388,   389,    77,   502,   504,
     541,   394,   395,   505,    77,   383,   570,   571,   572,   573,
     574,   575,   576,   227,   549,   227,   580,    77,    77,    77,
      77,   396,   397,   582,   585,   584,   834,   590,   596,   708,
     606,   710,   634,   643,   655,   656,   335,   401,   402,   403,
     404,   649,   651,   405,   406,   407,   227,   652,   227,   653,
     657,   661,   662,   663,   697,   700,   407,   734,   704,   706,
     728,   736,   591,   738,   739,   707,   595,   742,   709,   597,
     716,   711,   719,   712,   727,   729,   730,   773,   748,   107,
     396,   397,   108,   243,   755,   783,   401,   402,   403,   404,
     761,   112,   405,   406,   407,   762,   794,   763,   778,   718,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   780,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   956,   765,   766,
     767,   401,   402,   403,   404,   770,   771,   405,   406,   407,
     120,   781,   785,   786,    77,    77,   777,   787,   779,   795,
     401,   402,   403,   404,   647,   811,   405,   406,   407,   227,
     812,   813,   817,   791,   818,   792,   819,   793,   820,   821,
     822,   823,   853,   883,   858,   797,   798,   848,   799,   850,
     801,   851,   857,   804,   805,   884,   807,   808,   809,   810,
     396,   397,   887,    77,   814,   815,   889,   909,   892,   894,
     790,   896,   933,   926,   396,   397,   146,   927,   148,   149,
     150,   928,   152,   934,   153,   832,    77,   155,   937,   938,
     941,   942,   398,   399,   400,   847,   796,   849,    77,   945,
     947,   955,   291,   950,   715,    77,   398,   399,   400,   952,
     954,   965,   967,   860,   464,   862,   863,   968,   684,   866,
     971,   972,   975,   976,   983,   870,   871,   833,   984,   986,
     988,   837,   839,   842,   844,   846,   995,   879,   996,   599,
     880,   648,     0,   881,   774,     0,     0,     0,     0,   886,
       0,     0,   192,     0,   891,     0,     0,     0,     0,   764,
     194,   757,     0,   758,   759,   760,   769,    78,    78,     0,
       0,     0,   912,     0,   914,     0,     0,   917,   918,     0,
       0,     0,   486,     0,   487,   924,   925,     0,     0,     0,
       0,     0,     0,     0,     0,   932,    78,     0,   491,    78,
      78,   899,   901,   904,   906,   908,     0,     0,     0,     0,
       0,   944,   685,    77,    77,     0,   949,    77,     0,     0,
      77,     0,    77,     0,     0,     0,   957,    78,   958,   959,
     816,   686,     0,     0,     0,   961,   962,     0,     0,     0,
     936,    78,     0,     0,     0,   940,     0,     0,    78,     0,
       0,     0,     0,    77,     0,    77,     0,     0,     0,     0,
       0,    78,    78,    78,    78,     0,     0,     0,   -36,   -36,
       0,     0,   383,   979,     0,     0,   982,   388,   389,     0,
     336,   392,   393,   394,   395,     0,    77,     0,    77,     0,
     989,   990,     0,   992,   993,     0,     0,     0,   970,   852,
       0,     0,     0,   974,   999,     0,     0,  1002,     0,     0,
    1003,  1004,     0,  1005,  1006,     0,     0,     0,     0,   -36,
    1009,  1010,     0,     0,  1013,  1014,     0,   -36,  1017,  1018,
       0,     0,     0,   911,     0,     0,     0,     0,     0,     0,
       0,     0,   919,   920,   921,     0,     0,   885,     0,     0,
     888,     0,   890,     0,     0,   893,     0,   895,     0,     0,
       0,     0,   396,   397,     0,   910,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,     0,     0,    77,     0,    77,    78,    78,
     401,   402,   403,   404,     0,     0,   405,   406,   407,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   943,
       0,     0,   946,     0,   948,     0,     0,   951,     0,   953,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,     0,    78,     0,     0,
       0,     0,    77,     0,    77,    77,    77,   964,     0,     0,
       0,   966,     0,     0,   205,     0,     0,   396,   397,   205,
      78,     0,     0,   205,     0,   205,   205,   228,     0,     0,
       0,     0,    78,     0,     0,     0,     0,   205,   205,    78,
       0,   985,     0,     0,     0,   987,     0,     0,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,   228,   205,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
     396,   397,     0,     0,     0,     0,     0,     0,     0,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   228,   228,   228,   228,   205,   205,   205,   205,
       0,     0,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,    77,
      77,    77,    77,    77,    77,     0,     0,     0,     0,   489,
      77,   490,     0,     0,     0,     0,     0,    78,    78,     0,
       0,    78,     0,     0,    78,     0,    78,     0,     0,     0,
       0,   687,     0,     0,     0,     0,   205,     0,     0,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,    78,    77,    78,
       0,    77,   720,    77,   721,     0,    77,     0,    77,     0,
      77,    77,    77,    77,    77,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,   205,    78,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,    77,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
      77,     0,     0,    77,     0,    77,     0,     0,    77,     0,
      77,   396,   397,     0,     0,     0,     0,     0,   228,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   205,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,    77,   398,   399,   400,     0,    77,     0,     0,
     205,   205,    77,     0,     0,     0,     0,     0,     0,     0,
     228,     0,     0,   396,   397,     0,     0,     0,     0,    78,
       0,    78,    77,     0,     0,     0,    77,     0,   205,   205,
     205,     0,     0,    78,     0,     0,     0,   205,   205,   205,
       0,     0,     0,     0,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     205,   205,     0,   205,   205,   205,   205,   205,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,    78,    78,
      78,     0,     0,   722,     0,   723,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   205,
     205,   205,   205,   205,   205,   205,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,     0,   205,   228,     0,     0,
       0,     0,     0,     0,     0,   724,     0,   725,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   228,     0,
     228,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,   396,   397,     0,     0,
     205,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   228,     0,   228,     0,     0,   396,   397,     0,     0,
      78,     0,     0,    78,    78,    78,    78,    78,    78,     0,
       0,     0,     0,     0,    78,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   398,   399,
     400,     0,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,     0,     0,
       0,   396,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,    78,     0,    78,     0,     0,
      78,     0,    78,     0,    78,    78,    78,    78,    78,     0,
      78,     0,     0,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,   205,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   228,   396,   397,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,    78,     0,
     551,     0,   396,   397,    78,     0,     0,    78,     0,    78,
       0,     0,    78,     0,    78,     0,     0,   398,   399,   400,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,   398,   399,   400,     0,     0,     0,
       0,     0,    78,     0,     0,     0,    78,     0,     0,     0,
       0,    78,     0,     0,     0,   629,    78,     0,     0,     0,
       0,     0,   205,     0,     0,     0,     0,     0,     0,   205,
       0,   105,   106,     0,     2,     3,    78,   209,   205,     0,
      78,     0,     0,   110,   111,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,   630,
     396,   397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   654,     0,   115,   116,
     117,   118,   119,   205,     0,     0,     0,     0,     0,     0,
       0,     0,   398,   399,   400,     0,   703,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,   123,   124,   396,   397,   125,   126,   127,
       0,     0,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
       0,   147,     0,     0,     0,   151,     0,   398,   399,   400,
     154,     0,     0,     0,     0,   156,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,     0,     0,   165,     0,
       0,     0,     0,     0,   664,   166,   205,     0,   167,     0,
       0,     0,     0,     0,     0,   205,   205,   205,     0,     0,
       0,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,     0,   190,   191,   105,   106,     0,     2,
       3,     0,   209,   193,     0,     0,     0,     0,   110,   111,
     195,   196,     0,     0,     0,     0,     0,   197,   198,   199,
       0,     0,     0,   200,   309,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     114,     0,     0,   115,   116,   117,   118,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   123,   124,
       0,     0,   125,   126,   127,     0,     0,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,     0,   147,   396,   397,     0,
     151,     0,     0,     0,     0,   154,     0,     0,     0,     0,
     156,     0,     0,   157,   158,   159,   160,   161,   162,   163,
     164,     0,     0,   165,     0,     0,     0,     0,     0,   398,
     166,     0,     0,   167,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,     0,   190,
     191,     0,     0,     0,     0,     0,     0,     0,   193,     0,
       0,     0,     0,     0,     0,   195,   196,     0,     0,     0,
       0,     0,   197,   198,   199,     0,     0,     0,   200,   605,
     105,   106,   107,     2,     3,   108,   109,     0,     0,     0,
       0,     0,   110,   111,   112,     0,     0,   274,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,   275,   276,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,   115,   116,   117,
     118,   119,     0,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   123,   124,     0,     0,   125,   126,   127,     0,
       0,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,     0,   153,     0,   154,
     155,     0,     0,     0,   156,     0,     0,   157,   158,   159,
     160,   161,   162,   163,   164,     0,     0,   165,     0,     0,
       0,     0,     0,     0,   166,     0,     0,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,     0,   190,   191,   192,     0,     0,   277,     0,
       0,     0,   193,   194,     0,     0,     0,     0,     0,   195,
     196,     0,     0,     0,     0,     0,   197,   198,   199,     0,
       0,   278,   200,   105,   106,   107,     2,     3,   108,   109,
       0,     0,     0,     0,     0,   110,   111,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
     115,   116,   117,   118,   119,     0,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,     0,     0,   125,
     126,   127,     0,     0,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,     0,
     153,     0,   154,   155,     0,     0,     0,   156,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,     0,     0,
     165,     0,     0,     0,     0,     0,     0,   166,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,     0,   190,   191,   192,     0,
       0,     0,     0,     0,     0,   193,   194,     0,     0,     0,
       0,     0,   195,   196,     0,     0,     0,     0,     0,   197,
     198,   199,     0,   105,   106,   200,     2,     3,     0,   209,
       0,     0,     0,     0,     0,   110,   111,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   705,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,   396,   397,   125,
     126,   127,     0,     0,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,     0,   147,     0,     0,     0,   151,     0,   398,
     399,   400,   154,     0,     0,     0,     0,   156,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,     0,     0,
     165,     0,     0,     0,     0,   253,     0,   166,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,     0,   190,   191,   105,   106,
       0,     2,     3,     0,   209,   193,     0,     0,     0,     0,
     110,   111,   195,   196,     0,     0,     0,     0,     0,   197,
     198,   199,     0,     0,     0,   200,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,     0,     0,   115,   116,   117,   118,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,   124,     0,     0,   125,   126,   127,     0,     0,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,     0,   147,     0,
       0,     0,   151,     0,     0,     0,     0,   154,     0,     0,
       0,     0,   156,     0,     0,   157,   158,   159,   160,   161,
     162,   163,   164,     0,     0,   165,     0,     0,     0,     0,
       0,   257,   166,     0,     0,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
       0,   190,   191,   105,   106,     0,     2,     3,     0,   209,
     193,     0,     0,     0,     0,   110,   111,   195,   196,     0,
       0,     0,     0,     0,   197,   198,   199,     0,     0,     0,
     200,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,     0,     0,   125,
     126,   127,     0,     0,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,     0,   147,     0,     0,     0,   151,     0,     0,
       0,     0,   154,     0,     0,     0,     0,   156,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,     0,     0,
     165,     0,     0,     0,     0,     0,   259,   260,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,     0,   190,   191,   105,   106,
       0,     2,     3,     0,   209,   193,     0,     0,     0,     0,
     110,   111,   195,   196,     0,     0,     0,     0,     0,   197,
     198,   199,     0,     0,     0,   200,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,     0,     0,   115,   116,   117,   118,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,   124,     0,     0,   125,   126,   127,     0,     0,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,     0,   147,     0,
       0,     0,   151,     0,     0,     0,     0,   154,     0,     0,
       0,     0,   156,     0,     0,   157,   158,   159,   160,   161,
     162,   163,   164,     0,     0,   165,     0,     0,     0,     0,
       0,   263,   166,     0,     0,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
       0,   190,   191,   105,   106,     0,     2,     3,     0,   209,
     193,     0,     0,     0,     0,   110,   111,   195,   196,     0,
       0,     0,     0,     0,   197,   198,   199,     0,     0,     0,
     200,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,     0,     0,   125,
     126,   127,     0,     0,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,     0,   147,     0,     0,     0,   151,     0,     0,
       0,     0,   154,     0,     0,     0,     0,   156,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,     0,     0,
     165,     0,     0,     0,     0,     0,     0,   166,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,     0,   190,   191,     0,     0,
       0,     0,     0,     0,     0,   193,     0,     0,     0,     0,
       0,     0,   195,   196,     0,     0,     0,     0,     0,   197,
     198,   199,     1,     0,     0,   200,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,     0,     0,     0,     0,     0,     0,    17,    18,    19,
       0,     0,     0,     0,    20,     0,     0,     0,    21,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,     0,
      26,     0,     0,     0,     0,     0,    27,     0,     0,    28,
      29,    30,     0,    31,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,     0,     0,     0,    40,    41,
     398,   399,   400,     0,     0,     0,     0,     0,    42,     0,
      43,    44,     0,    45,    46,     0,     0,     0,    47,    48,
       0,    49,     0,    50,     0,     0,    51,    52,    53,     0,
      54,    55,    56,     0,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
      61,     0,     0,     0,     0,    62,    63,     0,     0,    64,
      65,    66,     0,     0,    67,    68,    69,    70,    71,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   835,   665,     0,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     0,     0,
       0,     0,     0,    16,   396,   397,     0,     0,     0,     0,
      17,    18,    19,     0,     0,     0,     0,    20,     0,     0,
       0,    21,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,    26,   836,     0,   398,   399,   400,    27,
       0,     0,    28,    29,    30,     0,    31,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,   398,   399,   400,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,    44,     0,    45,    46,     0,     0,
       0,    47,    48,     0,    49,     0,    50,     0,   666,    51,
      52,    53,     0,    54,    55,    56,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,    61,     0,     0,     0,     0,    62,    63,
       0,     0,    64,    65,    66,     0,     0,    67,    68,    69,
      70,    71,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   840,     0,     0,     0,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,     0,     0,     0,     0,     0,    16,   396,   397,     0,
       0,     0,     0,    17,    18,    19,     0,     0,     0,     0,
      20,     0,     0,     0,    21,     0,     0,     0,     0,    22,
      23,    24,    25,     0,     0,     0,    26,   841,     0,   398,
     399,   400,    27,     0,     0,    28,    29,    30,     0,    31,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,     0,     0,
     398,   399,   400,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,    44,     0,    45,
      46,     0,     0,     0,    47,    48,     0,    49,     0,    50,
       0,   667,    51,    52,    53,     0,    54,    55,    56,     0,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,    61,     0,     0,     0,
       0,    62,    63,     0,     0,    64,    65,    66,     0,     0,
      67,    68,    69,    70,    71,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   897,     0,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,     0,     0,     0,     0,     0,    16,
     396,   397,     0,     0,     0,     0,    17,    18,    19,     0,
       0,     0,     0,    20,     0,     0,     0,    21,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,    26,
     898,     0,   398,   399,   400,    27,     0,     0,    28,    29,
      30,     0,    31,     0,     0,     0,    32,    33,    34,    35,
      36,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,   396,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,   398,   399,   400,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
      44,     0,    45,    46,     0,     0,     0,    47,    48,     0,
      49,     0,    50,     0,   668,    51,    52,    53,     0,    54,
      55,    56,     0,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,    61,
       0,     0,     0,     0,    62,    63,     0,     0,    64,    65,
      66,     0,     0,    67,    68,    69,    70,    71,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     902,     0,     0,     0,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,     0,     0,
       0,     0,    16,   396,   397,     0,     0,     0,     0,    17,
      18,    19,     0,     0,     0,     0,    20,     0,     0,     0,
      21,     0,     0,     0,     0,    22,    23,    24,    25,     0,
       0,     0,    26,   903,     0,   398,   399,   400,    27,     0,
       0,    28,    29,    30,     0,    31,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,   396,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,   398,   399,   400,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,     0,    45,    46,     0,     0,     0,
      47,    48,     0,    49,     0,    50,     0,   669,    51,    52,
      53,     0,    54,    55,    56,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,    61,     0,     0,     0,     0,    62,    63,     0,
       0,    64,    65,    66,     0,     0,    67,    68,    69,    70,
      71,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   935,     0,     0,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,   396,   397,     0,     0,
       0,     0,    17,    18,    19,     0,     0,     0,     0,    20,
       0,     0,     0,    21,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,    26,     0,     0,   398,   399,
     400,    27,     0,     0,    28,    29,    30,     0,    31,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,     0,
       0,     0,     0,     0,     0,     0,     0,   396,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,     0,   398,
     399,   400,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,    44,     0,    45,    46,
       0,     0,     0,    47,    48,     0,    49,     0,    50,     0,
     670,    51,    52,    53,     0,    54,    55,    56,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,    61,     0,     0,     0,     0,
      62,    63,     0,     0,    64,    65,    66,     0,     0,    67,
      68,    69,    70,    71,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   939,     0,     0,     0,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,    16,   396,
     397,     0,     0,     0,     0,    17,    18,    19,     0,     0,
       0,     0,    20,     0,     0,     0,    21,     0,     0,     0,
       0,    22,    23,    24,    25,     0,     0,     0,    26,     0,
       0,   398,   399,   400,    27,     0,     0,    28,    29,    30,
       0,    31,     0,     0,     0,    32,    33,    34,    35,    36,
      37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,   398,   399,   400,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,    44,
       0,    45,    46,     0,     0,     0,    47,    48,     0,    49,
       0,    50,     0,   671,    51,    52,    53,     0,    54,    55,
      56,     0,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,    61,     0,
       0,     0,     0,    62,    63,     0,     0,    64,    65,    66,
       0,     0,    67,    68,    69,    70,    71,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   969,
       0,     0,     0,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,    16,   396,   397,     0,     0,     0,     0,    17,    18,
      19,     0,     0,     0,     0,    20,     0,     0,     0,    21,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,    26,     0,     0,   398,   399,   400,    27,     0,     0,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,   396,   397,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,   398,   399,   400,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,     0,    45,    46,     0,     0,     0,    47,
      48,     0,    49,     0,    50,     0,   672,    51,    52,    53,
       0,    54,    55,    56,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,    58,    59,
      60,    61,     0,     0,     0,     0,    62,    63,     0,     0,
      64,    65,    66,     0,     0,    67,    68,    69,    70,    71,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   973,     0,     0,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,     0,
       0,     0,     0,     0,    16,   396,   397,     0,     0,     0,
       0,    17,    18,    19,     0,     0,     0,     0,    20,     0,
       0,     0,    21,     0,     0,     0,     0,    22,    23,    24,
      25,     0,     0,     0,    26,     0,     0,   398,   399,   400,
      27,     0,     0,    28,    29,    30,     0,    31,     0,     0,
       0,    32,    33,    34,    35,    36,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,   396,   397,     0,     0,
       0,     0,     0,     0,     0,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,    39,     0,     0,   398,   399,
     400,     0,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,     0,    45,    46,     0,
       0,     0,    47,    48,     0,    49,     0,    50,     0,   673,
      51,    52,    53,     0,    54,    55,    56,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   420,     0,     0,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    60,    61,     0,   396,   397,     0,    62,
      63,     0,     0,    64,    65,    66,     0,    15,    67,    68,
      69,    70,    71,    16,     0,     0,     0,     0,     0,     0,
      17,    18,    19,     0,     0,     0,     0,    20,   398,   399,
     400,    21,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,    26,     0,   421,     0,     0,     0,    27,
       0,     0,    28,    29,    30,     0,    31,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    38,     0,     0,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
     674,    42,     0,    43,    44,     0,    45,    46,     0,     0,
       0,    47,    48,     0,    49,     0,    50,     0,     0,    51,
      52,    53,     0,    54,    55,    56,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     592,   396,   397,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,    61,     0,   396,   397,     0,    62,    63,
       0,     0,    64,    65,    66,     0,    15,    67,    68,    69,
      70,    71,    16,   398,   399,   400,     0,     0,     0,    17,
      18,    19,     0,     0,     0,     0,    20,   398,   399,   400,
      21,     0,     0,     0,     0,    22,    23,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,    28,    29,    30,     0,    31,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,     0,
       0,     0,     0,    39,     0,   675,     0,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,   676,
      42,     0,    43,    44,     0,    45,    46,     0,     0,     0,
      47,    48,     0,    49,     0,    50,     0,     0,    51,    52,
      53,     0,    54,    55,    56,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   838,
     396,   397,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,    61,     0,   396,   397,     0,    62,    63,     0,
       0,    64,    65,    66,     0,    15,    67,    68,    69,    70,
      71,    16,   398,   399,   400,     0,     0,     0,    17,    18,
      19,     0,     0,     0,     0,    20,   398,   399,   400,    21,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,    26,     0,     0,     0,     0,     0,    27,     0,     0,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,     0,     0,     0,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,    39,     0,   677,     0,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,   678,    42,
       0,    43,    44,     0,    45,    46,     0,     0,     0,    47,
      48,     0,    49,     0,    50,     0,     0,    51,    52,    53,
       0,    54,    55,    56,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   843,   396,
     397,     0,     0,     0,     0,     0,    57,     0,    58,    59,
      60,    61,     0,   396,   397,     0,    62,    63,     0,     0,
      64,    65,    66,     0,    15,    67,    68,    69,    70,    71,
      16,   398,   399,   400,     0,     0,     0,    17,    18,    19,
       0,     0,     0,     0,    20,   398,   399,   400,    21,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,     0,
      26,     0,     0,     0,     0,     0,    27,     0,     0,    28,
      29,    30,     0,    31,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,     0,     0,     0,     0,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,     0,     0,
       0,    39,     0,   679,     0,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,   680,    42,     0,
      43,    44,     0,    45,    46,     0,     0,     0,    47,    48,
       0,    49,     0,    50,     0,     0,    51,    52,    53,     0,
      54,    55,    56,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   845,   396,   397,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
      61,     0,   396,   397,     0,    62,    63,     0,     0,    64,
      65,    66,     0,    15,    67,    68,    69,    70,    71,    16,
     398,   399,   400,     0,     0,     0,    17,    18,    19,     0,
       0,     0,     0,    20,   398,   399,   400,    21,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,    26,
       0,     0,     0,     0,     0,    27,     0,     0,    28,    29,
      30,     0,    31,     0,     0,     0,    32,    33,    34,    35,
      36,    37,    38,     0,     0,     0,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,     0,     0,     0,
      39,     0,   683,     0,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,   690,    42,     0,    43,
      44,     0,    45,    46,     0,     0,     0,    47,    48,     0,
      49,     0,    50,     0,     0,    51,    52,    53,     0,    54,
      55,    56,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   900,   396,   397,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,    61,
       0,   396,   397,     0,    62,    63,     0,     0,    64,    65,
      66,     0,    15,    67,    68,    69,    70,    71,    16,   398,
     399,   400,     0,     0,     0,    17,    18,    19,     0,     0,
       0,     0,    20,   398,   399,   400,    21,     0,     0,     0,
       0,    22,    23,    24,    25,     0,     0,     0,    26,     0,
       0,     0,     0,     0,    27,     0,     0,    28,    29,    30,
       0,    31,     0,     0,     0,    32,    33,    34,    35,    36,
      37,    38,     0,     0,     0,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,     0,     0,     0,    39,
       0,   695,     0,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,   696,    42,     0,    43,    44,
       0,    45,    46,     0,     0,     0,    47,    48,     0,    49,
       0,    50,     0,     0,    51,    52,    53,     0,    54,    55,
      56,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   905,   396,   397,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,    61,     0,
     396,   397,     0,    62,    63,     0,     0,    64,    65,    66,
       0,    15,    67,    68,    69,    70,    71,    16,   398,   399,
     400,     0,     0,     0,    17,    18,    19,     0,     0,     0,
       0,    20,   398,   399,   400,    21,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,     0,    26,     0,     0,
       0,     0,     0,    27,     0,     0,    28,    29,    30,     0,
      31,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,     0,     0,     0,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,     0,     0,     0,     0,     0,    39,     0,
     699,     0,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,   731,    42,     0,    43,    44,     0,
      45,    46,     0,     0,     0,    47,    48,     0,    49,     0,
      50,     0,     0,    51,    52,    53,     0,    54,    55,    56,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   907,   396,   397,     0,     0,     0,
       0,     0,    57,     0,    58,    59,    60,    61,     0,   396,
     397,     0,    62,    63,     0,     0,    64,    65,    66,     0,
      15,    67,    68,    69,    70,    71,    16,   398,   399,   400,
       0,     0,     0,    17,    18,    19,     0,     0,     0,     0,
      20,   398,   399,   400,    21,     0,     0,     0,     0,    22,
      23,    24,    25,     0,     0,     0,    26,     0,     0,     0,
       0,     0,    27,     0,     0,    28,    29,    30,     0,    31,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
       0,     0,     0,     0,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,     0,     0,     0,     0,    39,     0,   747,
       0,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,   749,    42,     0,    43,    44,     0,    45,
      46,     0,     0,     0,    47,    48,     0,    49,     0,    50,
       0,     0,    51,    52,    53,     0,    54,    55,    56,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,   396,   397,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,    61,     0,   396,   397,
       0,    62,    63,     0,     0,    64,    65,    66,     0,    15,
      67,    68,    69,    70,    71,    16,   398,   399,   400,     0,
       0,     0,    17,    18,    19,     0,     0,     0,     0,    20,
     398,   399,   400,    21,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,    26,     0,     0,     0,     0,
       0,    27,     0,     0,    28,    29,    30,     0,    31,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,     0,
       0,     0,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,     0,    39,     0,   750,     0,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,   753,    42,     0,    43,    44,     0,    45,    46,
       0,     0,     0,    47,    48,     0,    49,     0,    50,     0,
       0,    51,    52,    53,     0,    54,    55,    56,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,   396,   397,     0,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,    61,   396,   397,     0,     0,
      62,    63,     0,     0,    64,    65,    66,     0,     0,    67,
      68,    69,    70,    71,   398,   399,   400,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,   399,
     400,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,   396,   397,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   754,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     756,   396,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   396,   397,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,   396,   397,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,   396,   397,   398,   399,   400,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   768,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,   399,   400,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,   396,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   826,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   828,   398,
     399,   400,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   831,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   854,   396,
     397,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   396,   397,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,   399,   400,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   855,   396,   397,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,     0,   398,   399,   400,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   397,     0,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,   856,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   929,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,   930,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
     398,   399,   400,     0,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   931,
     398,   399,   400,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,   409,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     441,     0,   398,   399,   400,   396,   397,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     442,     0,     0,   396,   397,     0,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,   396,   397,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,   396,   397,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,   399,
     400,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   444,     0,   398,   399,   400,   396,   397,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,   445,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   448,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   451,     0,     0,     0,     0,   396,
     397,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   396,   397,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,   452,
       0,   398,   399,   400,     0,     0,     0,     0,     0,     0,
     396,   397,     0,     0,   398,   399,   400,     0,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,     0,     0,     0,     0,     0,     0,     0,
     454,     0,   398,   399,   400,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,     0,   396,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   455,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   456,     0,   398,   399,   400,   396,
     397,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,     0,     0,     0,
       0,     0,   457,     0,     0,   396,   397,     0,     0,     0,
       0,   398,   399,   400,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   468,     0,     0,     0,
       0,   396,   397,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,   469,     0,   398,   399,   400,     0,     0,     0,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,   470,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     546,     0,   398,   399,   400,     0,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,   396,   397,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   396,   397,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   550,     0,   398,   399,   400,     0,     0,
       0,     0,   396,   397,     0,     0,     0,     0,   398,   399,
     400,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,     0,     0,     0,
       0,     0,   614,     0,   398,   399,   400,   396,   397,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   618,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   620,     0,
       0,   396,   397,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,     0,     0,   621,     0,     0,     0,     0,   396,
     397,     0,     0,   398,   399,   400,     0,     0,     0,     0,
       0,     0,   396,   397,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,   624,
       0,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,   399,   400,     0,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,   396,   397,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,   691,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,   396,   397,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,   692,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   693,     0,   398,   399,   400,   396,
     397,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,   396,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
       0,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   726,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,   396,   397,     0,     0,
     398,   399,   400,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   732,     0,   398,   399,
     400,   396,   397,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,   733,     0,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   735,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     737,     0,     0,   396,   397,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   740,     0,
       0,     0,     0,   396,   397,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,   396,   397,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,   741,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,   399,
     400,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   397,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,   743,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,   744,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   745,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   396,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,   746,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   397,   398,   399,   400,     0,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     751,     0,   398,   399,   400,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,   396,   397,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,   752,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   772,     0,   398,   399,   400,   396,   397,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   800,     0,     0,   396,   397,     0,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,   396,   397,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   802,     0,   398,   399,   400,   396,
     397,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,   803,
       0,   398,   399,   400,     0,     0,     0,     0,     0,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,   806,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     827,     0,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   830,     0,     0,     0,
       0,   396,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   396,   397,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,   859,     0,   398,   399,   400,     0,     0,     0,     0,
       0,     0,   396,   397,     0,     0,   398,   399,   400,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,     0,     0,     0,
       0,     0,   861,     0,   398,   399,   400,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,   396,   397,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   864,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   865,     0,   398,   399,
     400,   396,   397,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,     0,     0,   867,     0,     0,   396,   397,     0,
       0,     0,     0,   398,   399,   400,     0,     0,     0,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   868,     0,
       0,     0,     0,   396,   397,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,   869,     0,   398,   399,   400,     0,     0,
       0,     0,   396,   397,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,   872,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   873,     0,   398,   399,   400,     0,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,     0,     0,   396,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   882,     0,   398,   399,   400,
       0,     0,     0,     0,   396,   397,     0,     0,     0,     0,
     398,   399,   400,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,     0,     0,   913,     0,   398,   399,   400,   396,
     397,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,     0,
       0,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   915,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     916,     0,     0,   396,   397,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,     0,     0,   922,     0,     0,     0,
       0,   396,   397,     0,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,   396,   397,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,   923,     0,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,   399,   400,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,   396,   397,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,   960,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,   396,   397,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,   963,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   977,     0,   398,   399,
     400,   396,   397,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,   396,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   397,     0,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   978,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,   396,   397,
       0,     0,   398,   399,   400,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   980,     0,
     398,   399,   400,   396,   397,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,   981,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   991,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   994,     0,     0,   396,   397,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     997,     0,     0,     0,     0,   396,   397,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,   998,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   396,   397,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,  1000,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,  1001,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1007,     0,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   396,
     397,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   396,   397,     0,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,  1008,
       0,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,   396,   397,   398,   399,   400,     0,     0,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,     0,     0,     0,
       0,     0,  1011,     0,   398,   399,   400,   782,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   383,   410,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,   396,   397,     0,     0,
       0,     0,   784,     0,     0,     0,     0,     0,     0,     0,
       0,  1012,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1015,     0,     0,     0,   398,   399,
     400,   396,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1016,     0,     0,     0,   396,   397,
       0,     0,     0,   398,   399,   400,     0,     0,     0,     0,
       0,   396,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   398,   399,   400
};

static const yytype_int16 yycheck[] =
{
      17,    18,    19,    20,    96,    97,     7,     8,     7,     8,
      24,   221,    32,    33,   236,    98,    99,   100,   101,     0,
     236,     7,     8,    29,     4,     1,    43,    44,   240,    46,
      47,    48,    49,    50,    51,    19,    53,    54,    55,    56,
       7,     8,     9,    10,    61,     7,     8,     9,    10,   270,
      67,    68,    69,    24,    71,    24,    24,    36,   236,    16,
      71,     7,     8,     9,    21,     7,     8,     9,    25,    80,
      27,    88,    89,    90,    88,    81,    93,    24,    25,    26,
      27,    20,   236,    30,    31,    32,     7,     8,    94,    95,
      96,    97,   236,    74,     4,     5,   236,   114,   115,     4,
       5,    85,   119,   120,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    88,   236,    88,
      88,   236,    29,    33,   236,    32,    33,     7,     8,     9,
      10,    70,    94,   439,   440,    24,    25,    26,    27,   156,
     236,    30,    31,    32,    70,    24,    72,   236,    24,    25,
      26,    27,   169,    60,    30,    31,    32,    99,     4,    38,
      39,    40,    41,    42,    43,    44,     4,     5,     8,     7,
       8,    51,    10,   236,    81,     7,     8,     9,    10,   196,
       7,     8,     9,   200,    39,    40,   236,    94,    95,    96,
      97,     7,    24,    19,   113,   114,    24,    25,    26,    27,
      10,    10,    30,    31,    32,     0,    61,    24,    25,    26,
      27,    24,    20,    30,    31,    32,   235,    24,    25,    26,
      27,    19,   434,    30,    31,    32,   145,   146,   147,     6,
       7,     8,     9,    10,   236,   236,   253,   236,   235,   460,
     257,   462,   259,   260,   235,   221,   263,   330,   331,   332,
     236,   268,   269,    24,    25,    26,    27,   236,   235,    30,
      31,    32,   236,   236,   281,    23,   223,    70,   235,    72,
      28,    29,     7,     8,     9,    10,   236,   294,   295,   296,
     297,   298,   299,   300,   301,   305,   236,   236,   235,    10,
     237,    24,    25,    26,    27,   236,   236,    30,    31,    32,
     236,   236,    24,    25,    26,    27,   312,   236,    30,    31,
      32,   328,   329,   168,   236,    79,   235,   293,   237,    24,
      25,    26,    27,   236,   236,    30,    31,    32,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   428,   303,   364,   237,     7,
       8,     9,    10,   236,   371,   372,    88,   374,   375,   235,
      19,   378,   379,   270,   236,   236,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   594,     7,     8,     9,    10,   236,
     235,   408,   409,   410,   236,   412,   235,   414,   305,     7,
       8,     9,   236,   495,   235,   312,     7,     8,     9,   237,
       7,     8,     9,   430,   431,   432,   433,   236,   435,    24,
     237,   438,   236,   429,   441,   442,   281,   444,   445,   446,
     237,   448,   236,    19,   451,   452,   236,   454,   455,   456,
     457,   821,   822,   823,   236,   421,   463,   302,   236,   466,
     467,   468,   469,   470,    24,    25,    26,    27,   236,   235,
      30,    31,    32,     0,     1,   235,   237,   484,   236,   486,
     236,    23,   489,   236,   236,   236,    28,    29,    24,   236,
      32,    33,    34,    35,   339,   340,   341,   493,   236,   495,
     236,   236,    29,   236,   236,    32,    33,   236,   236,   236,
     236,    24,   236,     7,   237,   236,   236,   362,   363,   235,
     365,   366,   367,   368,   369,   237,   236,   236,   235,   237,
     235,   237,   429,    60,   541,   482,   237,   237,   237,   546,
      23,   237,   237,   550,   237,    28,    29,    74,   237,     8,
     236,    34,    35,     9,    81,    23,   401,   402,   403,   404,
     405,   406,   407,   460,   235,   462,    19,    94,    95,    96,
      97,   113,   114,     7,     9,     8,   776,    88,    85,   586,
      97,   588,     7,    68,   237,   237,   113,    24,    25,    26,
      27,    19,    19,    30,    31,    32,   493,    19,   495,    19,
     237,   236,   236,   236,    10,    86,    32,   614,   236,   236,
     606,   618,   420,   620,   621,   236,   424,   624,     7,   427,
      70,     8,    73,     9,    24,    19,    96,   700,   235,     6,
     113,   114,     9,    10,   236,   236,    24,    25,    26,    27,
     237,    18,    30,    31,    32,   237,     8,   237,   237,   596,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   237,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   237,   685,   686,
     687,    24,    25,    26,    27,   692,   693,    30,    31,    32,
      67,   237,   236,   236,   221,   222,   703,    19,   705,    68,
      24,    25,    26,    27,     9,     7,    30,    31,    32,   606,
     235,   235,    50,   720,    49,   722,    49,   724,    49,   235,
     235,   235,    19,    19,   236,   732,   733,   237,   735,   237,
     737,   237,   237,   740,   741,    19,   743,   744,   745,   746,
     113,   114,    78,   270,   751,   752,    78,    72,    78,    78,
     716,    78,    71,   237,   113,   114,   133,   237,   135,   136,
     137,   237,   139,    78,   141,   772,   293,   144,    78,    78,
      78,    78,   145,   146,   147,   782,   729,   784,   305,    78,
      78,    72,    74,    78,   592,   312,   145,   146,   147,    78,
      78,    78,    78,   800,   281,   802,   803,    78,   235,   806,
      78,    78,    78,    78,    78,   812,   813,   773,    78,    78,
      78,   777,   778,   779,   780,   781,    78,   824,    78,   429,
     827,   493,    -1,   830,   701,    -1,    -1,    -1,    -1,   836,
      -1,    -1,   209,    -1,   841,    -1,    -1,    -1,    -1,   684,
     217,   649,    -1,   651,   652,   653,   691,     0,     1,    -1,
      -1,    -1,   859,    -1,   861,    -1,    -1,   864,   865,    -1,
      -1,    -1,   235,    -1,   237,   872,   873,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   882,    29,    -1,   237,    32,
      33,   847,   848,   849,   850,   851,    -1,    -1,    -1,    -1,
      -1,   898,   235,   420,   421,    -1,   903,   424,    -1,    -1,
     427,    -1,   429,    -1,    -1,    -1,   913,    60,   915,   916,
     755,   235,    -1,    -1,    -1,   922,   923,    -1,    -1,    -1,
     886,    74,    -1,    -1,    -1,   891,    -1,    -1,    81,    -1,
      -1,    -1,    -1,   460,    -1,   462,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    -1,    -1,    -1,    19,    20,
      -1,    -1,    23,   960,    -1,    -1,   963,    28,    29,    -1,
     113,    32,    33,    34,    35,    -1,   493,    -1,   495,    -1,
     977,   978,    -1,   980,   981,    -1,    -1,    -1,   944,   787,
      -1,    -1,    -1,   949,   991,    -1,    -1,   994,    -1,    -1,
     997,   998,    -1,  1000,  1001,    -1,    -1,    -1,    -1,    70,
    1007,  1008,    -1,    -1,  1011,  1012,    -1,    78,  1015,  1016,
      -1,    -1,    -1,   858,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   867,   868,   869,    -1,    -1,   835,    -1,    -1,
     838,    -1,   840,    -1,    -1,   843,    -1,   845,    -1,    -1,
      -1,    -1,   113,   114,    -1,   853,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,   592,    -1,   594,   221,   222,
      24,    25,    26,    27,    -1,    -1,    30,    31,    32,   606,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   897,
      -1,    -1,   900,    -1,   902,    -1,    -1,   905,    -1,   907,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,   270,    -1,    -1,
      -1,    -1,   649,    -1,   651,   652,   653,   935,    -1,    -1,
      -1,   939,    -1,    -1,    16,    -1,    -1,   113,   114,    21,
     293,    -1,    -1,    25,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    39,    40,   312,
      -1,   969,    -1,    -1,    -1,   973,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   716,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   773,    -1,    -1,   776,
     777,   778,   779,   780,   781,    -1,    -1,    -1,    -1,   235,
     787,   237,    -1,    -1,    -1,    -1,    -1,   420,   421,    -1,
      -1,   424,    -1,    -1,   427,    -1,   429,    -1,    -1,    -1,
      -1,   235,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,   460,   835,   462,
      -1,   838,   235,   840,   237,    -1,   843,    -1,   845,    -1,
     847,   848,   849,   850,   851,    -1,   853,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     493,   223,   495,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,   886,
      -1,    -1,    -1,    -1,   891,    -1,    -1,    -1,    -1,    -1,
     897,    -1,    -1,   900,    -1,   902,    -1,    -1,   905,    -1,
     907,   113,   114,    -1,    -1,    -1,    -1,    -1,   270,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   935,    -1,
      -1,    -1,   939,   145,   146,   147,    -1,   944,    -1,    -1,
     302,   303,   949,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     312,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,   592,
      -1,   594,   969,    -1,    -1,    -1,   973,    -1,   330,   331,
     332,    -1,    -1,   606,    -1,    -1,    -1,   339,   340,   341,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     362,   363,    -1,   365,   366,   367,   368,   369,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   649,    -1,   651,   652,
     653,    -1,    -1,   235,    -1,   237,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   401,
     402,   403,   404,   405,   406,   407,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   428,   429,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,   237,    -1,    -1,
      -1,    -1,    -1,   716,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   460,    -1,
     462,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,   113,   114,    -1,    -1,
     482,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   493,    -1,   495,    -1,    -1,   113,   114,    -1,    -1,
     773,    -1,    -1,   776,   777,   778,   779,   780,   781,    -1,
      -1,    -1,    -1,    -1,   787,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   145,   146,
     147,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   835,    -1,    -1,   838,    -1,   840,    -1,    -1,
     843,    -1,   845,    -1,   847,   848,   849,   850,   851,    -1,
     853,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   596,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   606,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,   886,    -1,    -1,    -1,    -1,   891,    -1,
     237,    -1,   113,   114,   897,    -1,    -1,   900,    -1,   902,
      -1,    -1,   905,    -1,   907,    -1,    -1,   145,   146,   147,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,   935,    -1,    -1,    -1,   939,    -1,    -1,    -1,
      -1,   944,    -1,    -1,    -1,   237,   949,    -1,    -1,    -1,
      -1,    -1,   684,    -1,    -1,    -1,    -1,    -1,    -1,   691,
      -1,     4,     5,    -1,     7,     8,   969,    10,   700,    -1,
     973,    -1,    -1,    16,    17,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,   237,    -1,    61,    62,
      63,    64,    65,   755,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,   113,   114,   110,   111,   112,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,   134,    -1,    -1,    -1,   138,    -1,   145,   146,   147,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,    -1,    -1,   161,    -1,
      -1,    -1,    -1,    -1,   237,   168,   858,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    -1,   867,   868,   869,    -1,    -1,
      -1,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,    -1,   207,   208,     4,     5,    -1,     7,
       8,    -1,    10,   216,    -1,    -1,    -1,    -1,    16,    17,
     223,   224,    -1,    -1,    -1,    -1,    -1,   230,   231,   232,
      -1,    -1,    -1,   236,   237,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      58,    -1,    -1,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
      -1,    -1,   110,   111,   112,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    -1,   134,   113,   114,    -1,
     138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,   145,
     168,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,    -1,   207,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,
      -1,    -1,    -1,    -1,    -1,   223,   224,    -1,    -1,    -1,
      -1,    -1,   230,   231,   232,    -1,    -1,    -1,   236,   237,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,    -1,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,    -1,   141,    -1,   143,
     144,    -1,    -1,    -1,   148,    -1,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,   161,    -1,    -1,
      -1,    -1,    -1,    -1,   168,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,    -1,   207,   208,   209,    -1,    -1,   212,    -1,
      -1,    -1,   216,   217,    -1,    -1,    -1,    -1,    -1,   223,
     224,    -1,    -1,    -1,    -1,    -1,   230,   231,   232,    -1,
      -1,   235,   236,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,   107,    -1,    -1,   110,
     111,   112,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,    -1,   143,   144,    -1,    -1,    -1,   148,    -1,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,    -1,    -1,
     161,    -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,    -1,   207,   208,   209,    -1,
      -1,    -1,    -1,    -1,    -1,   216,   217,    -1,    -1,    -1,
      -1,    -1,   223,   224,    -1,    -1,    -1,    -1,    -1,   230,
     231,   232,    -1,     4,     5,   236,     7,     8,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,   107,   113,   114,   110,
     111,   112,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,    -1,   134,    -1,    -1,    -1,   138,    -1,   145,
     146,   147,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,    -1,    -1,
     161,    -1,    -1,    -1,    -1,   166,    -1,   168,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,    -1,   207,   208,     4,     5,
      -1,     7,     8,    -1,    10,   216,    -1,    -1,    -1,    -1,
      16,    17,   223,   224,    -1,    -1,    -1,    -1,    -1,   230,
     231,   232,    -1,    -1,    -1,   236,    -1,    33,    -1,    -1,
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
      -1,   207,   208,     4,     5,    -1,     7,     8,    -1,    10,
     216,    -1,    -1,    -1,    -1,    16,    17,   223,   224,    -1,
      -1,    -1,    -1,    -1,   230,   231,   232,    -1,    -1,    -1,
     236,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,   107,    -1,    -1,   110,
     111,   112,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,    -1,   134,    -1,    -1,    -1,   138,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,    -1,    -1,
     161,    -1,    -1,    -1,    -1,    -1,   167,   168,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,    -1,   207,   208,     4,     5,
      -1,     7,     8,    -1,    10,   216,    -1,    -1,    -1,    -1,
      16,    17,   223,   224,    -1,    -1,    -1,    -1,    -1,   230,
     231,   232,    -1,    -1,    -1,   236,    -1,    33,    -1,    -1,
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
      -1,   207,   208,     4,     5,    -1,     7,     8,    -1,    10,
     216,    -1,    -1,    -1,    -1,    16,    17,   223,   224,    -1,
      -1,    -1,    -1,    -1,   230,   231,   232,    -1,    -1,    -1,
     236,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,   107,    -1,    -1,   110,
     111,   112,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,    -1,   134,    -1,    -1,    -1,   138,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,    -1,    -1,
     161,    -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,    -1,   207,   208,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,
      -1,    -1,   223,   224,    -1,    -1,    -1,    -1,    -1,   230,
     231,   232,     3,    -1,    -1,   236,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,   159,    -1,
     161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,
     181,   182,   183,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   206,    -1,   208,   209,   210,
     211,    -1,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,
     221,   222,    -1,    -1,   225,   226,   227,   228,   229,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   237,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    51,   113,   114,    -1,    -1,    -1,    -1,
      58,    59,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    82,    -1,   145,   146,   147,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,   145,   146,   147,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,
      -1,   169,   170,    -1,   172,    -1,   174,    -1,   237,   177,
     178,   179,    -1,   181,   182,   183,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,
     208,   209,   210,   211,    -1,    -1,    -1,    -1,   216,   217,
      -1,    -1,   220,   221,   222,    -1,    -1,   225,   226,   227,
     228,   229,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    51,   113,   114,    -1,
      -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    81,    82,    -1,   145,
     146,   147,    87,    -1,    -1,    90,    91,    92,    -1,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
     145,   146,   147,    -1,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,   164,
     165,    -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,
      -1,   237,   177,   178,   179,    -1,   181,   182,   183,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   206,    -1,   208,   209,   210,   211,    -1,    -1,    -1,
      -1,   216,   217,    -1,    -1,   220,   221,   222,    -1,    -1,
     225,   226,   227,   228,   229,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,
     113,   114,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    -1,   145,   146,   147,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,   145,   146,   147,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,
     162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,    -1,
     172,    -1,   174,    -1,   237,   177,   178,   179,    -1,   181,
     182,   183,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   206,    -1,   208,   209,   210,   211,
      -1,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,   221,
     222,    -1,    -1,   225,   226,   227,   228,   229,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    51,   113,   114,    -1,    -1,    -1,    -1,    58,
      59,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    81,    82,    -1,   145,   146,   147,    87,    -1,
      -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,   145,   146,   147,    -1,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,    -1,
     169,   170,    -1,   172,    -1,   174,    -1,   237,   177,   178,
     179,    -1,   181,   182,   183,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,   208,
     209,   210,   211,    -1,    -1,    -1,    -1,   216,   217,    -1,
      -1,   220,   221,   222,    -1,    -1,   225,   226,   227,   228,
     229,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    51,   113,   114,    -1,    -1,
      -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,   145,   146,
     147,    87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,
     146,   147,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,   161,   162,    -1,   164,   165,
      -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,    -1,
     237,   177,   178,   179,    -1,   181,   182,   183,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    -1,   208,   209,   210,   211,    -1,    -1,    -1,    -1,
     216,   217,    -1,    -1,   220,   221,   222,    -1,    -1,   225,
     226,   227,   228,   229,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,   113,
     114,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,
      -1,   145,   146,   147,    87,    -1,    -1,    90,    91,    92,
      -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,   145,   146,   147,    -1,   149,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,
      -1,   164,   165,    -1,    -1,    -1,   169,   170,    -1,   172,
      -1,   174,    -1,   237,   177,   178,   179,    -1,   181,   182,
     183,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,   208,   209,   210,   211,    -1,
      -1,    -1,    -1,   216,   217,    -1,    -1,   220,   221,   222,
      -1,    -1,   225,   226,   227,   228,   229,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    51,   113,   114,    -1,    -1,    -1,    -1,    58,    59,
      60,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    -1,    -1,   145,   146,   147,    87,    -1,    -1,
      90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,   145,   146,   147,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,   161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,
     170,    -1,   172,    -1,   174,    -1,   237,   177,   178,   179,
      -1,   181,   182,   183,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,   208,   209,
     210,   211,    -1,    -1,    -1,    -1,   216,   217,    -1,    -1,
     220,   221,   222,    -1,    -1,   225,   226,   227,   228,   229,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    51,   113,   114,    -1,    -1,    -1,
      -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    -1,    -1,    -1,    81,    -1,    -1,   145,   146,   147,
      87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,   146,
     147,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,
      -1,    -1,   169,   170,    -1,   172,    -1,   174,    -1,   237,
     177,   178,   179,    -1,   181,   182,   183,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,   208,   209,   210,   211,    -1,   113,   114,    -1,   216,
     217,    -1,    -1,   220,   221,   222,    -1,    45,   225,   226,
     227,   228,   229,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    -1,    -1,    -1,    -1,    65,   145,   146,
     147,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    -1,    83,    -1,    -1,    -1,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     237,   159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,
      -1,   169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
     178,   179,    -1,   181,   182,   183,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,   113,   114,    -1,    -1,    -1,    -1,    -1,   206,    -1,
     208,   209,   210,   211,    -1,   113,   114,    -1,   216,   217,
      -1,    -1,   220,   221,   222,    -1,    45,   225,   226,   227,
     228,   229,    51,   145,   146,   147,    -1,    -1,    -1,    58,
      59,    60,    -1,    -1,    -1,    -1,    65,   145,   146,   147,
      69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,   237,    -1,    -1,    -1,    -1,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,
     159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,    -1,
     169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,   178,
     179,    -1,   181,   182,   183,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
     113,   114,    -1,    -1,    -1,    -1,    -1,   206,    -1,   208,
     209,   210,   211,    -1,   113,   114,    -1,   216,   217,    -1,
      -1,   220,   221,   222,    -1,    45,   225,   226,   227,   228,
     229,    51,   145,   146,   147,    -1,    -1,    -1,    58,    59,
      60,    -1,    -1,    -1,    -1,    65,   145,   146,   147,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,   237,    -1,    -1,    -1,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,   159,
      -1,   161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,
     170,    -1,   172,    -1,   174,    -1,    -1,   177,   178,   179,
      -1,   181,   182,   183,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,   113,
     114,    -1,    -1,    -1,    -1,    -1,   206,    -1,   208,   209,
     210,   211,    -1,   113,   114,    -1,   216,   217,    -1,    -1,
     220,   221,   222,    -1,    45,   225,   226,   227,   228,   229,
      51,   145,   146,   147,    -1,    -1,    -1,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,   145,   146,   147,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,   237,    -1,    -1,    -1,    -1,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,   159,    -1,
     161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,
     181,   182,   183,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   113,   114,
      -1,    -1,    -1,    -1,    -1,   206,    -1,   208,   209,   210,
     211,    -1,   113,   114,    -1,   216,   217,    -1,    -1,   220,
     221,   222,    -1,    45,   225,   226,   227,   228,   229,    51,
     145,   146,   147,    -1,    -1,    -1,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,   145,   146,   147,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
     142,    -1,   237,    -1,    -1,    -1,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   237,   159,    -1,   161,
     162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,    -1,
     172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,   181,
     182,   183,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   113,   114,    -1,
      -1,    -1,    -1,    -1,   206,    -1,   208,   209,   210,   211,
      -1,   113,   114,    -1,   216,   217,    -1,    -1,   220,   221,
     222,    -1,    45,   225,   226,   227,   228,   229,    51,   145,
     146,   147,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,
      -1,    -1,    65,   145,   146,   147,    69,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,
      -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,   237,    -1,    -1,    -1,    -1,   149,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   237,   159,    -1,   161,   162,
      -1,   164,   165,    -1,    -1,    -1,   169,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,   178,   179,    -1,   181,   182,
     183,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   113,   114,    -1,    -1,
      -1,    -1,    -1,   206,    -1,   208,   209,   210,   211,    -1,
     113,   114,    -1,   216,   217,    -1,    -1,   220,   221,   222,
      -1,    45,   225,   226,   227,   228,   229,    51,   145,   146,
     147,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,
      -1,    65,   145,   146,   147,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
     237,    -1,    -1,    -1,    -1,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   237,   159,    -1,   161,   162,    -1,
     164,   165,    -1,    -1,    -1,   169,   170,    -1,   172,    -1,
     174,    -1,    -1,   177,   178,   179,    -1,   181,   182,   183,
      -1,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,   113,   114,    -1,    -1,    -1,
      -1,    -1,   206,    -1,   208,   209,   210,   211,    -1,   113,
     114,    -1,   216,   217,    -1,    -1,   220,   221,   222,    -1,
      45,   225,   226,   227,   228,   229,    51,   145,   146,   147,
      -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,
      65,   145,   146,   147,    69,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,   237,
      -1,    -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   237,   159,    -1,   161,   162,    -1,   164,
     165,    -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,
      -1,    -1,   177,   178,   179,    -1,   181,   182,   183,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,   113,   114,    -1,    -1,    -1,    -1,
      -1,   206,    -1,   208,   209,   210,   211,    -1,   113,   114,
      -1,   216,   217,    -1,    -1,   220,   221,   222,    -1,    45,
     225,   226,   227,   228,   229,    51,   145,   146,   147,    -1,
      -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
     145,   146,   147,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,   237,    -1,
      -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   237,   159,    -1,   161,   162,    -1,   164,   165,
      -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,   178,   179,    -1,   181,   182,   183,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    -1,   208,   209,   210,   211,   113,   114,    -1,    -1,
     216,   217,    -1,    -1,   220,   221,   222,    -1,    -1,   225,
     226,   227,   228,   229,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   113,   114,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     237,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   113,   114,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   237,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,   145,
     146,   147,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,   237,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   237,   113,   114,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   237,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,   237,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
     145,   146,   147,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,
     145,   146,   147,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,   145,   146,   147,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,   113,   114,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   113,   114,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,   145,   146,   147,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   235,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   235,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   235,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,   145,   146,   147,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,   145,   146,   147,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,   145,   146,   147,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,
      -1,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   235,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,   145,   146,   147,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    -1,    -1,   145,   146,
     147,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,   145,   146,   147,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
      -1,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   235,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   235,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,   145,   146,   147,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
     145,   146,   147,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,   145,   146,
     147,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   235,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
      -1,    -1,    -1,   113,   114,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   235,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   235,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   235,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   235,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,   145,   146,   147,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,   145,   146,   147,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,   145,   146,   147,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,   113,   114,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   113,   114,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,   145,   146,   147,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   235,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   235,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,   145,   146,   147,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,   145,   146,   147,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,   145,   146,
     147,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
      -1,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   235,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,   145,   146,   147,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,
     145,   146,   147,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,   145,   146,   147,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   235,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   235,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,   145,   146,
     147,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,   145,   146,   147,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
     145,   146,   147,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   235,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,    -1,    -1,   113,   114,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   235,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   235,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   235,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,   145,   146,   147,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,   145,   146,   147,    84,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,   145,   146,
     147,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    45,    51,    58,    59,    60,
      65,    69,    74,    75,    76,    77,    81,    87,    90,    91,
      92,    94,    98,    99,   100,   101,   102,   103,   104,   142,
     149,   150,   159,   161,   162,   164,   165,   169,   170,   172,
     174,   177,   178,   179,   181,   182,   183,   206,   208,   209,
     210,   211,   216,   217,   220,   221,   222,   225,   226,   227,
     228,   229,   239,   240,   241,   243,   244,   247,   248,   249,
     250,   257,   258,   265,   266,   267,   278,   243,   236,   236,
     236,     7,     8,   236,   236,   236,   236,   236,   236,   236,
     236,   236,     7,     8,     9,     4,     5,     6,     9,    10,
      16,    17,    18,    33,    58,    61,    62,    63,    64,    65,
      67,    94,   105,   106,   107,   110,   111,   112,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   141,   143,   144,   148,   151,   152,   153,
     154,   155,   156,   157,   158,   161,   168,   171,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     207,   208,   209,   216,   217,   223,   224,   230,   231,   232,
     236,   245,   246,   247,   248,   250,   261,   262,   263,    10,
     246,   246,   246,   246,   263,     7,     8,     9,    99,     4,
       4,   263,    19,    85,   263,   263,   264,   249,   250,   251,
     252,     7,     8,     9,    10,   255,   256,   249,   266,     9,
      94,   266,     8,    10,   262,   262,     7,     8,     9,   253,
     254,   246,   246,   166,   246,   246,   246,   167,   246,   167,
     168,   246,   246,   167,   246,   246,   246,   246,   236,   236,
       6,   251,   270,   271,    21,    36,    37,   212,   235,   246,
     262,   268,   269,     7,    10,    10,   246,   246,   246,   246,
       0,   240,    19,    20,    24,    38,    39,    40,    41,    42,
      43,    44,    24,    24,   251,   235,    19,   246,   246,   237,
     246,   246,    51,   251,   272,   273,   251,   274,   275,   275,
     275,   264,   264,   264,   264,   235,   235,   235,   236,   236,
     236,   236,   236,     4,     5,   247,   248,   246,   246,   236,
     236,   236,   246,   246,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
      36,   236,   236,   246,   236,   236,   262,   246,   236,   236,
      10,   246,   246,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,   113,   114,   145,   146,
     147,    24,    25,    26,    27,    30,    31,    32,   236,   235,
      24,    79,    24,    88,    24,    88,    88,     7,     8,     9,
      19,    83,   243,   244,   241,   242,   263,    19,   235,   235,
     236,   236,   236,   236,   235,   236,   256,    19,   236,   235,
     235,   235,   235,   246,   235,   235,   235,   246,   235,   246,
     246,   235,   235,   246,   235,   235,   235,   235,   246,   246,
     235,   271,   235,   236,   269,   235,   236,   236,   235,   235,
     235,   243,   246,   246,   246,   246,   246,   246,   246,   246,
     262,   263,    24,   266,   235,   237,   235,   237,    24,   235,
     237,   237,   251,   235,   237,   235,   237,   237,   237,   237,
     237,   237,   237,     7,     8,     9,   246,   264,   264,   264,
     262,   262,   262,     7,     8,     9,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   262,   262,   246,   262,   262,   262,   262,
     262,   236,   246,   246,   246,   246,   235,   246,   246,   235,
     235,   237,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     262,   262,   262,   262,   262,   262,   262,   246,   246,   246,
      19,   246,     7,   246,     8,     9,    24,    88,    24,    88,
      88,   242,    19,   243,    70,   242,    85,   242,   264,   252,
     246,   246,   246,   246,   256,   237,    97,   259,   260,   246,
     254,   254,   246,   246,   235,   246,   246,   246,   235,   246,
     235,   235,   246,   246,   235,   246,   246,   246,   246,   237,
     237,   271,   271,   246,     7,   246,   246,   246,   246,   246,
     263,   246,   246,    68,   246,     7,     8,     9,   273,    19,
     275,    19,    19,    19,   237,   237,   237,   237,   237,   237,
     237,   236,   236,   236,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   235,   235,   235,   235,   237,   246,
     237,   235,   235,   235,   246,   237,   237,    10,   246,   237,
      86,   276,   277,    84,   236,    84,   236,   236,   246,     7,
     246,     8,     9,    70,    72,   242,    70,   244,   263,    73,
     235,   237,   235,   237,   235,   237,   235,    24,   251,    19,
      96,   237,   235,   235,   246,   235,   246,   235,   246,   246,
     235,   235,   246,   235,   235,   235,   235,   237,   235,   237,
     237,   235,   235,   237,   237,   236,   237,   242,   242,   242,
     242,   237,   237,   237,   262,   246,   246,   246,   237,   262,
     246,   246,   235,   264,   277,    71,    80,   246,   237,   246,
     237,   237,    84,   236,    84,   236,   236,    19,    70,    72,
     243,   246,   246,   246,     8,    68,   260,   246,   246,   246,
     235,   246,   235,   235,   246,   246,   235,   246,   246,   246,
     246,     7,   235,   235,   246,   246,   262,    50,    49,    49,
      49,   235,   235,   235,   235,   237,   237,   235,   237,   237,
     235,   237,   246,   243,   244,    19,    82,   243,    19,   243,
      19,    82,   243,    19,   243,    19,   243,   246,   237,   246,
     237,   237,   242,    19,   237,   237,   237,   237,   236,   235,
     246,   235,   246,   246,   235,   235,   246,   235,   235,   235,
     246,   246,   235,   235,   237,    33,   245,   245,   245,   246,
     246,   246,   235,    19,    19,   242,   246,    78,   242,    78,
     242,   246,    78,   242,    78,   242,    78,    19,    82,   243,
      19,   243,    19,    82,   243,    19,   243,    19,   243,    72,
     242,   262,   246,   235,   246,   235,   235,   246,   246,   262,
     262,   262,   235,   235,   246,   246,   237,   237,   237,   237,
     237,   237,   246,    71,    78,    19,   243,    78,    78,    19,
     243,    78,    78,   242,   246,    78,   242,    78,   242,   246,
      78,   242,    78,   242,    78,    72,   237,   246,   246,   246,
     235,   246,   246,   235,   242,    78,   242,    78,    78,    19,
     243,    78,    78,    19,   243,    78,    78,   235,   235,   246,
     235,   235,   246,    78,    78,   242,    78,   242,    78,   246,
     246,   235,   246,   246,   235,    78,    78,   235,   235,   246,
     235,   235,   246,   246,   246,   246,   246,   235,   235,   246,
     246,   235,   235,   246,   246,   235,   235,   246,   246
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   238,   239,   240,   240,   241,   241,   241,   242,   242,
     243,   243,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   245,
     245,   245,   245,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   247,
     247,   247,   247,   247,   248,   248,   248,   248,   248,   249,
     249,   250,   250,   250,   250,   251,   251,   252,   252,   253,
     253,   253,   254,   254,   255,   255,   255,   255,   255,   255,
     255,   256,   256,   257,   257,   258,   259,   260,   260,   261,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   263,   263,   264,   264,   264,   265,   265,   265,   265,
     266,   266,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   268,   268,   268,   268,   268,   268,   268,   269,
     269,   270,   271,   271,   272,   272,   272,   273,   273,   274,
     274,   275,   275,   276,   277,   277,   278,   278,   278,   278
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     3,     1,     2,
       1,     3,     1,     1,     1,     2,     4,     2,     1,     1,
       4,     4,     4,     4,     2,     2,     1,     1,     2,     1,
       1,     1,     2,     3,     4,     2,     4,     2,     8,     9,
       2,     2,     2,     2,     3,     4,     6,     4,     4,     1,
       1,     3,     5,     5,     8,     4,     6,     6,     9,     5,
       3,     5,     4,     4,     4,     9,     9,     9,     8,     8,
       8,    10,    10,    10,     9,     9,     9,     9,     9,     8,
       8,    11,    11,    10,    10,    10,    10,     9,     9,    12,
      12,    11,    11,     6,     9,     1,     2,     1,    13,    13,
       8,     8,     4,     2,     1,     2,     6,     2,     6,     4,
       5,     1,     2,     1,     6,     7,     8,     8,     9,    12,
      13,    19,     4,     8,     1,     8,     8,     8,     1,     1,
       2,     1,     2,     1,     1,     1,     3,     4,     4,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       4,     8,     8,     8,     2,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     4,    18,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     6,     1,     1,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
       1,     1,     3,     4,     1,     2,     7,     7,     7,     7
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
  case 2: /* daric: lines  */
#line 90 "DARIC.y"
            { (yyval.ast) = (yyvsp[0].ast); }
#line 4059 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 3: /* lines: line  */
#line 94 "DARIC.y"
           { ast_lines[yyfileno].push_front((yyvsp[0].ast)); (yyval.ast) = (yyvsp[0].ast); }
#line 4065 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 4: /* lines: line lines  */
#line 95 "DARIC.y"
                 { ast_lines[yyfileno].push_front((yyvsp[-1].ast)); (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4071 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 5: /* line: statements NL  */
#line 99 "DARIC.y"
                    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4077 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 6: /* line: NL  */
#line 100 "DARIC.y"
         { (yyval.ast) = NULL; }
#line 4083 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 7: /* line: LINE_NUMBER statements NL  */
#line 101 "DARIC.y"
                                { (yyval.ast) = link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast)); }
#line 4089 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 8: /* embed_lines: line  */
#line 104 "DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 4095 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 9: /* embed_lines: line embed_lines  */
#line 105 "DARIC.y"
                       { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4101 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 10: /* statements: statement  */
#line 109 "DARIC.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 4107 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 11: /* statements: statement SS statements  */
#line 110 "DARIC.y"
                              { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4113 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 15: /* statement: CHAIN expression_string  */
#line 116 "DARIC.y"
                              { (yyval.ast) = token1(CHAIN, (yyvsp[0].ast)); }
#line 4119 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 16: /* statement: CHAIN expression_string ',' plain_variable_list  */
#line 117 "DARIC.y"
                                                      { (yyval.ast) = token2(CHAIN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4125 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 17: /* statement: EXPECT plain_variable_list  */
#line 118 "DARIC.y"
                                 { (yyval.ast) = token1(EXPECT, (yyvsp[0].ast)); }
#line 4131 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 18: /* statement: END  */
#line 119 "DARIC.y"
          { (yyval.ast) = token(END); }
#line 4137 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 19: /* statement: PROCEDURE  */
#line 120 "DARIC.y"
                { (yyval.ast) = token1(CALLPROC, string((yyvsp[0].v_string))); }
#line 4143 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 20: /* statement: PROCEDURE '(' expression_list ')'  */
#line 121 "DARIC.y"
                                        { (yyval.ast) = token2(CALLPROC, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4149 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 21: /* statement: INTEGER_FUNCTION '(' expression_list ')'  */
#line 122 "DARIC.y"
                                               { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4155 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 22: /* statement: REAL_FUNCTION '(' expression_list ')'  */
#line 123 "DARIC.y"
                                            { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4161 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 23: /* statement: STRING_FUNCTION '(' expression_list ')'  */
#line 124 "DARIC.y"
                                              { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4167 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 24: /* statement: DATA expression_list  */
#line 125 "DARIC.y"
                           { (yyval.ast) = token1(DATA, (yyvsp[0].ast)); }
#line 4173 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 25: /* statement: READ variable_list  */
#line 126 "DARIC.y"
                         { (yyval.ast) = token1(READ, (yyvsp[0].ast)); }
#line 4179 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 26: /* statement: RESTORE  */
#line 127 "DARIC.y"
              { (yyval.ast) = token(RESTORE); }
#line 4185 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 27: /* statement: RETURN  */
#line 128 "DARIC.y"
             { (yyval.ast) = token(RETURN); }
#line 4191 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 28: /* statement: RETURN expression  */
#line 129 "DARIC.y"
                        { (yyval.ast) = token1(RETURN_WITH_VALUE, (yyvsp[0].ast)); }
#line 4197 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 29: /* statement: TRACEON  */
#line 130 "DARIC.y"
              { (yyval.ast) = token(TRACEON); }
#line 4203 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 30: /* statement: TRACEOFF  */
#line 131 "DARIC.y"
               { (yyval.ast) = token(TRACEOFF); }
#line 4209 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 31: /* statement: BREAKPOINT  */
#line 132 "DARIC.y"
                 { (yyval.ast) = token(BREAKPOINT); }
#line 4215 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 32: /* statement: DIM dim_variable_list  */
#line 134 "DARIC.y"
                            { (yyval.ast) = token1(DIM, (yyvsp[0].ast)); }
#line 4221 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 33: /* statement: LOCAL DIM dim_variable_list  */
#line 135 "DARIC.y"
                                  { (yyval.ast) = token1(LOCALDIM, (yyvsp[0].ast)); }
#line 4227 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 34: /* statement: BPUT expression_numeric ',' expression_numeric  */
#line 137 "DARIC.y"
                                                     { (yyval.ast) = token2(BPUT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4233 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 35: /* statement: BGET expression_numeric  */
#line 138 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 4239 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 36: /* statement: PTR expression_numeric E expression_numeric  */
#line 139 "DARIC.y"
                                                  { (yyval.ast) = token2(PTRA, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4245 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 37: /* statement: CLOSE expression_numeric  */
#line 140 "DARIC.y"
                               { (yyval.ast) = token1(CLOSE, (yyvsp[0].ast)); }
#line 4251 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 38: /* statement: STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 141 "DARIC.y"
                                                                    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(GLOBAL)); }
#line 4257 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 39: /* statement: LOCAL STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 142 "DARIC.y"
                                                                          { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(LOCAL)); }
#line 4263 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 40: /* statement: OSCLI expression_string  */
#line 144 "DARIC.y"
                              { (yyval.ast) = token1(OSCLI, (yyvsp[0].ast)); }
#line 4269 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 41: /* statement: GOSUB LITERAL_INT  */
#line 146 "DARIC.y"
                        { (yyval.ast) = token1(GOSUB, integer((yyvsp[0].v_int))); }
#line 4275 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 42: /* statement: GOTO LITERAL_INT  */
#line 147 "DARIC.y"
                       { (yyval.ast) = token1(GOTO, integer((yyvsp[0].v_int))); }
#line 4281 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 43: /* statement: INPUT_ expression_input_list  */
#line 149 "DARIC.y"
                                   { (yyval.ast) = token1(INPUT_, (yyvsp[0].ast)); }
#line 4287 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 44: /* statement: INPUT_ LITERAL_STRING expression_input_list  */
#line 150 "DARIC.y"
                                                  { (yyval.ast) = token2(INPUT_NOQUESTIONMARK, string((yyvsp[-1].v_string)), (yyvsp[0].ast)); }
#line 4293 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 45: /* statement: INPUT_ LITERAL_STRING ',' expression_input_list  */
#line 151 "DARIC.y"
                                                      { (yyval.ast) = token2(INPUT_, string((yyvsp[-2].v_string)), (yyvsp[0].ast)); }
#line 4299 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 46: /* statement: MOUSE INTEGER_VARIABLE ',' INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 152 "DARIC.y"
                                                                       { (yyval.ast) = token3(MOUSE, string((yyvsp[-4].v_string)), string((yyvsp[-2].v_string)), string((yyvsp[0].v_string)) ); }
#line 4305 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 47: /* statement: INKEY '(' expression_numeric ')'  */
#line 154 "DARIC.y"
                                       { (yyval.ast) = token1(SINKEY, (yyvsp[-1].ast)); }
#line 4311 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 48: /* statement: INKEYS '(' expression_numeric ')'  */
#line 155 "DARIC.y"
                                        { (yyval.ast) = token1(SINKEYS, (yyvsp[-1].ast)); }
#line 4317 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 49: /* statement: GET  */
#line 156 "DARIC.y"
          { (yyval.ast) = token(GET_S); }
#line 4323 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 50: /* statement: GETS  */
#line 157 "DARIC.y"
           { (yyval.ast) = token(GETS_S); }
#line 4329 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 51: /* statement: IF expression statements  */
#line 159 "DARIC.y"
                               { (yyval.ast) = token2(IF, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4335 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 52: /* statement: IF expression statement ELSE statement  */
#line 160 "DARIC.y"
                                             { (yyval.ast) = token3(IF, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4341 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 53: /* statement: IF expression NL embed_lines END_IF  */
#line 161 "DARIC.y"
                                          { (yyval.ast) = token2(IF, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4347 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 54: /* statement: IF expression NL embed_lines ELSE NL embed_lines END_IF  */
#line 162 "DARIC.y"
                                                              { (yyval.ast) = token3(IF, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4353 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 55: /* statement: IF expression THEN statements  */
#line 164 "DARIC.y"
                                    { (yyval.ast) = token2(IF, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4359 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 56: /* statement: IF expression THEN statements ELSE statements  */
#line 165 "DARIC.y"
                                                    { (yyval.ast) = token3(IF, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4365 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 57: /* statement: IF expression THEN NL embed_lines END_IF  */
#line 166 "DARIC.y"
                                               { (yyval.ast) = token2(IF, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4371 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 58: /* statement: IF expression THEN NL embed_lines ELSE NL embed_lines END_IF  */
#line 167 "DARIC.y"
                                                                   { (yyval.ast) = token3(IF, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4377 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 59: /* statement: REPEAT NL embed_lines UNTIL expression  */
#line 169 "DARIC.y"
                                             { (yyval.ast) = token2(REPEAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4383 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 60: /* statement: REPEAT UNTIL expression  */
#line 170 "DARIC.y"
                              { (yyval.ast) = token2(REPEAT, NULL, (yyvsp[0].ast)); }
#line 4389 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 61: /* statement: WHILE expression NL embed_lines END_WHILE  */
#line 171 "DARIC.y"
                                                { (yyval.ast) = token2(WHILE, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4395 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 62: /* statement: SWAP INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 173 "DARIC.y"
                                                 { (yyval.ast) = token2(SWAP_I, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4401 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 63: /* statement: SWAP VARIABLE ',' VARIABLE  */
#line 174 "DARIC.y"
                                 { (yyval.ast) = token2(SWAP_F, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4407 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 64: /* statement: SWAP STRING_VARIABLE ',' STRING_VARIABLE  */
#line 175 "DARIC.y"
                                                { (yyval.ast) = token2(SWAP_S, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4413 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 65: /* statement: FOR VARIABLE IN_ VARIABLE '(' ')' NL embed_lines NEXT  */
#line 178 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4419 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 66: /* statement: FOR INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 179 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4425 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 67: /* statement: FOR STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 180 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4431 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 68: /* statement: FOR VARIABLE IN_ VARIABLE '(' ')' statements NEXT  */
#line 181 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4437 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 69: /* statement: FOR INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' statements NEXT  */
#line 182 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4443 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 70: /* statement: FOR STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' statements NEXT  */
#line 183 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4449 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 71: /* statement: FOR LOCAL VARIABLE IN_ VARIABLE '(' ')' NL embed_lines NEXT  */
#line 184 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4455 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 72: /* statement: FOR LOCAL INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 185 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4461 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 73: /* statement: FOR LOCAL STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 186 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4467 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 74: /* statement: FOR LOCAL VARIABLE IN_ VARIABLE '(' ')' statements NEXT  */
#line 187 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4473 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 75: /* statement: FOR LOCAL INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' statements NEXT  */
#line 188 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4479 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 76: /* statement: FOR LOCAL STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' statements NEXT  */
#line 189 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4485 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 77: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 192 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4491 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 78: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 193 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4497 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 79: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 194 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4503 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 80: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 195 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4509 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 81: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 196 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4515 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 82: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 197 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4521 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 83: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 198 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4527 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 84: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 199 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4533 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 85: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 200 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4539 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 86: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 201 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4545 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 87: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 202 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4551 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 88: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 203 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4557 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 89: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 204 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4563 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 90: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 205 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4569 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 91: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 206 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4575 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 92: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 207 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4581 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 93: /* statement: CASE expression OF NL when_list END_CASE  */
#line 209 "DARIC.y"
                                               { (yyval.ast) = token2(CASE, (yyvsp[-4].ast), (yyvsp[-1].ast));  }
#line 4587 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 94: /* statement: CASE expression OF NL when_list OTHERWISE statement NL END_CASE  */
#line 210 "DARIC.y"
                                                                      { (yyval.ast) = token3(CASE, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-2].ast));  }
#line 4593 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 95: /* statement: PRINT  */
#line 212 "DARIC.y"
            { (yyval.ast) = token(PRINT); }
#line 4599 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 96: /* statement: PRINT expression_print_list  */
#line 213 "DARIC.y"
                                  { (yyval.ast) = token1(PRINT, (yyvsp[0].ast)); }
#line 4605 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 97: /* statement: RENDERFRAME  */
#line 215 "DARIC.y"
                  { (yyval.ast) = token(RENDERFRAME); }
#line 4611 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 98: /* statement: CREATEVERTEX TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 218 "DARIC.y"
                                                      { (yyval.ast) = token6(CREATEVERTEX, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4617 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 99: /* statement: CREATETRIANGLE TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 221 "DARIC.y"
                                                  { (yyval.ast) = token6(CREATETRIANGLE, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4623 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 100: /* statement: TRANSLATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 222 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TRANSLATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4629 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 101: /* statement: ROTATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 223 "DARIC.y"
                                                                                                      { (yyval.ast) = token4(ROTATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4635 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 102: /* statement: SCALE expression_numeric ',' expression_numeric  */
#line 224 "DARIC.y"
                                                      { (yyval.ast) = token2(SCALE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4641 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 103: /* statement: DELETEOBJECT expression_numeric  */
#line 225 "DARIC.y"
                                      { (yyval.ast) = token1(DELETEOBJECT, (yyvsp[0].ast)); }
#line 4647 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 104: /* statement: CLS  */
#line 227 "DARIC.y"
          { (yyval.ast) = token(CLS); }
#line 4653 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 105: /* statement: COLOUR expression_numeric  */
#line 228 "DARIC.y"
                                { (yyval.ast) = token1(COLOUR, (yyvsp[0].ast)); }
#line 4659 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 106: /* statement: COLOUR expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 229 "DARIC.y"
                                                                              { (yyval.ast) = token3(COLOUR, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4665 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 107: /* statement: COLOURBG expression_numeric  */
#line 230 "DARIC.y"
                                  { (yyval.ast) = token1(COLOURBG, (yyvsp[0].ast)); }
#line 4671 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 108: /* statement: COLOURBG expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 231 "DARIC.y"
                                                                                { (yyval.ast) = token3(COLOURBG, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4677 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 109: /* statement: GRAPHICS expression_numeric ',' expression_numeric  */
#line 232 "DARIC.y"
                                                         { (yyval.ast) = token2(GRAPHICS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4683 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 110: /* statement: GRAPHICS BANKED expression_numeric ',' expression_numeric  */
#line 233 "DARIC.y"
                                                                { (yyval.ast) = token2(BANKED, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4689 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 111: /* statement: GRAPHICS  */
#line 234 "DARIC.y"
               { (yyval.ast) = token(GRAPHICS); }
#line 4695 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 112: /* statement: GRAPHICS BANKED  */
#line 235 "DARIC.y"
                      { (yyval.ast) = token(BANKED); }
#line 4701 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 113: /* statement: FLIP  */
#line 236 "DARIC.y"
           { (yyval.ast) = token(FLIP); }
#line 4707 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 114: /* statement: CIRCLE expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 237 "DARIC.y"
                                                                              { (yyval.ast) = token3(CIRCLE, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4713 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 115: /* statement: CIRCLE FILL expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 238 "DARIC.y"
                                                                                   { (yyval.ast) = token3(CIRCLEFILL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4719 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 116: /* statement: LINE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 239 "DARIC.y"
                                                                                                   { (yyval.ast) = token4(LINE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4725 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 117: /* statement: RECTANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 240 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(RECTANGLE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4731 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 118: /* statement: RECTANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 241 "DARIC.y"
                                                                                                             { (yyval.ast) = token4(RECTANGLEFILL, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4737 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 119: /* statement: TRIANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 242 "DARIC.y"
                                                                                                                                                     { (yyval.ast) = token6(TRIANGLE, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4743 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 120: /* statement: TRIANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 243 "DARIC.y"
                                                                                                                                                          { (yyval.ast) = token6(TRIANGLEFILL, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4749 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 121: /* statement: TRIANGLE SHADED expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 246 "DARIC.y"
                                                                                         { (yyval.ast) = token9(TRIANGLESHADED, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4755 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 122: /* statement: PLOT expression_numeric ',' expression_numeric  */
#line 247 "DARIC.y"
                                                     { (yyval.ast) = token2(PLOT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4761 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 123: /* statement: CLIPON expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 248 "DARIC.y"
                                                                                                     { (yyval.ast) = token4(CLIPON, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4767 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 124: /* statement: CLIPOFF  */
#line 249 "DARIC.y"
              { (yyval.ast) = token(CLIPOFF); }
#line 4773 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 125: /* statement: TEXT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 250 "DARIC.y"
                                                                                                  { (yyval.ast) = token4(TEXT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4779 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 126: /* statement: TEXTRIGHT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 251 "DARIC.y"
                                                                                                       { (yyval.ast) = token4(TEXTRIGHT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4785 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 127: /* statement: TEXTCENTRE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 252 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TEXTCENTRE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4791 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 128: /* statement: SHOWFPS  */
#line 253 "DARIC.y"
              { (yyval.ast) = token(SHOWFPS); }
#line 4797 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 129: /* number: LITERAL_INT  */
#line 257 "DARIC.y"
                  { (yyval.ast) = integer((yyvsp[0].v_int)); }
#line 4803 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 130: /* number: MINUS LITERAL_INT  */
#line 258 "DARIC.y"
                                  { (yyval.ast) = integer(-(yyvsp[0].v_int)); }
#line 4809 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 131: /* number: LITERAL_REAL  */
#line 259 "DARIC.y"
                   { (yyval.ast) = real((yyvsp[0].v_real)); }
#line 4815 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 132: /* number: MINUS LITERAL_REAL  */
#line 260 "DARIC.y"
                                   { (yyval.ast) = real(-(yyvsp[0].v_real)); }
#line 4821 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 133: /* expression_numeric: number  */
#line 264 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 4827 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 134: /* expression_numeric: variable_integer  */
#line 265 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 4833 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 135: /* expression_numeric: variable_real  */
#line 266 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 4839 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 136: /* expression_numeric: '(' expression_numeric ')'  */
#line 267 "DARIC.y"
                                 { (yyval.ast) = (yyvsp[-1].ast); }
#line 4845 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 137: /* expression_numeric: FLOAT_ '(' expression_numeric ')'  */
#line 268 "DARIC.y"
                                        { (yyval.ast) = token1(FLOAT_, (yyvsp[-1].ast)); }
#line 4851 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 138: /* expression_numeric: INT_ '(' expression_numeric ')'  */
#line 269 "DARIC.y"
                                      { (yyval.ast) = token1(INT_, (yyvsp[-1].ast)); }
#line 4857 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 139: /* expression_numeric: MINUS variable_integer  */
#line 270 "DARIC.y"
                             { (yyval.ast) = token2(MINUS, integer(0), (yyvsp[0].ast)); }
#line 4863 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 140: /* expression_numeric: MINUS variable_real  */
#line 271 "DARIC.y"
                          { (yyval.ast) = token2(MINUS, real(0.0), (yyvsp[0].ast)); }
#line 4869 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 141: /* expression_numeric: expression_numeric PLUS expression_numeric  */
#line 272 "DARIC.y"
                                                 { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4875 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 142: /* expression_numeric: expression_numeric MINUS expression_numeric  */
#line 273 "DARIC.y"
                                                  { (yyval.ast) = token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4881 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 143: /* expression_numeric: expression_numeric MULTIPLY expression_numeric  */
#line 274 "DARIC.y"
                                                     { (yyval.ast) = token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4887 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 144: /* expression_numeric: expression_numeric DIVIDE expression_numeric  */
#line 275 "DARIC.y"
                                                   { (yyval.ast) = token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4893 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 145: /* expression_numeric: expression_numeric INTEGER_DIVIDE expression_numeric  */
#line 276 "DARIC.y"
                                                           { (yyval.ast) = token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4899 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 146: /* expression_numeric: expression_numeric DIV expression_numeric  */
#line 277 "DARIC.y"
                                                { (yyval.ast) = token2(DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4905 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 147: /* expression_numeric: expression_numeric MOD expression_numeric  */
#line 278 "DARIC.y"
                                                { (yyval.ast) = token2(MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4911 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 148: /* expression_numeric: expression_numeric SHL expression_numeric  */
#line 279 "DARIC.y"
                                                { (yyval.ast) = token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4917 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 149: /* expression_numeric: expression_numeric SHR expression_numeric  */
#line 280 "DARIC.y"
                                                { (yyval.ast) = token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4923 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 150: /* expression_numeric: expression_numeric E expression_numeric  */
#line 281 "DARIC.y"
                                              { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4929 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 151: /* expression_numeric: expression_numeric NE expression_numeric  */
#line 282 "DARIC.y"
                                               { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4935 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 152: /* expression_numeric: expression_numeric GE expression_numeric  */
#line 283 "DARIC.y"
                                               { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4941 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 153: /* expression_numeric: expression_numeric LE expression_numeric  */
#line 284 "DARIC.y"
                                               { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4947 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 154: /* expression_numeric: expression_numeric LT expression_numeric  */
#line 285 "DARIC.y"
                                               { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4953 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 155: /* expression_numeric: expression_numeric GT expression_numeric  */
#line 286 "DARIC.y"
                                               { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4959 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 156: /* expression_numeric: expression_numeric AND expression_numeric  */
#line 287 "DARIC.y"
                                                { (yyval.ast) = token2(AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4965 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 157: /* expression_numeric: expression_numeric OR expression_numeric  */
#line 288 "DARIC.y"
                                               { (yyval.ast) = token2(OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4971 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 158: /* expression_numeric: expression_numeric EOR expression_numeric  */
#line 289 "DARIC.y"
                                                { (yyval.ast) = token2(EOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4977 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 159: /* expression_numeric: INTEGER_FUNCTION '(' expression_list ')'  */
#line 291 "DARIC.y"
                                               { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4983 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 160: /* expression_numeric: REAL_FUNCTION '(' expression_list ')'  */
#line 292 "DARIC.y"
                                            { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4989 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 161: /* expression_numeric: DIM '(' VARIABLE '(' ')' ',' number ')'  */
#line 294 "DARIC.y"
                                              { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::REAL), (yyvsp[-1].ast)); }
#line 4995 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 162: /* expression_numeric: DIM '(' INTEGER_VARIABLE '(' ')' ',' number ')'  */
#line 295 "DARIC.y"
                                                      { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::INTEGER), (yyvsp[-1].ast)); }
#line 5001 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 163: /* expression_numeric: DIM '(' STRING_VARIABLE '(' ')' ',' number ')'  */
#line 296 "DARIC.y"
                                                     { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::STRING), (yyvsp[-1].ast)); }
#line 5007 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 164: /* expression_numeric: PTR expression_numeric  */
#line 298 "DARIC.y"
                             { (yyval.ast) = token1(PTR, (yyvsp[0].ast)); }
#line 5013 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 165: /* expression_numeric: GET  */
#line 300 "DARIC.y"
          { (yyval.ast) = token(GET); }
#line 5019 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 166: /* expression_numeric: INKEY '(' expression_numeric ')'  */
#line 301 "DARIC.y"
                                       { (yyval.ast) = token1(INKEY, (yyvsp[-1].ast)); }
#line 5025 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 167: /* expression_numeric: BOOLTRUE  */
#line 303 "DARIC.y"
               { (yyval.ast) = integer(1); }
#line 5031 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 168: /* expression_numeric: BOOLFALSE  */
#line 304 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5037 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 169: /* expression_numeric: TIME  */
#line 305 "DARIC.y"
           { (yyval.ast) = token(TIME); }
#line 5043 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 170: /* expression_numeric: SOLID  */
#line 307 "DARIC.y"
                        { (yyval.ast) = integer(0); }
#line 5049 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 171: /* expression_numeric: WIREFRAME  */
#line 308 "DARIC.y"
                        { (yyval.ast) = integer(1); }
#line 5055 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 172: /* expression_numeric: SHADED  */
#line 309 "DARIC.y"
                        { (yyval.ast) = integer(2); }
#line 5061 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 173: /* expression_numeric: FILLEDWIREFRAME  */
#line 310 "DARIC.y"
                        { (yyval.ast) = integer(3); }
#line 5067 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 174: /* expression_numeric: CREATESHAPE TYPE_VARIABLE ',' TYPE_VARIABLE  */
#line 312 "DARIC.y"
                                                  { (yyval.ast) = token2(CREATESHAPE, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 5073 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 175: /* expression_numeric: CREATEOBJECT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 317 "DARIC.y"
                                                  { (yyval.ast) = token9(CREATEOBJECT, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5079 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 176: /* expression_numeric: RED  */
#line 319 "DARIC.y"
                { (yyval.ast) = integer(0xFF0000); }
#line 5085 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 177: /* expression_numeric: GREEN  */
#line 320 "DARIC.y"
                { (yyval.ast) = integer(0x00FF00); }
#line 5091 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 178: /* expression_numeric: YELLOW  */
#line 321 "DARIC.y"
                { (yyval.ast) = integer(0xFFFF00); }
#line 5097 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 179: /* expression_numeric: BLUE  */
#line 322 "DARIC.y"
                { (yyval.ast) = integer(0x0000FF); }
#line 5103 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 180: /* expression_numeric: MAGENTA  */
#line 323 "DARIC.y"
                { (yyval.ast) = integer(0xFF00FF); }
#line 5109 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 181: /* expression_numeric: CYAN  */
#line 324 "DARIC.y"
                { (yyval.ast) = integer(0x00FFFF); }
#line 5115 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 182: /* expression_numeric: WHITE  */
#line 325 "DARIC.y"
                { (yyval.ast) = integer(0xFFFFFF); }
#line 5121 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 183: /* expression_numeric: BLACK  */
#line 326 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5127 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 184: /* expression_numeric: LASTPOS  */
#line 327 "DARIC.y"
                { (yyval.ast) = integer(-1); }
#line 5133 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 185: /* expression_numeric: COLOUR '(' expression_numeric ',' expression_numeric ',' expression_numeric ')'  */
#line 328 "DARIC.y"
                                                                                      { (yyval.ast) = token3(COLOUREXP, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5139 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 186: /* expression_numeric: POINT_ '(' expression_numeric ',' expression_numeric ')'  */
#line 329 "DARIC.y"
                                                               { (yyval.ast) = token2(POINT_, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5145 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 187: /* expression_numeric: SCREENWIDTH  */
#line 330 "DARIC.y"
                  { (yyval.ast) = token(SCREENWIDTH); }
#line 5151 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 188: /* expression_numeric: SCREENHEIGHT  */
#line 331 "DARIC.y"
                   { (yyval.ast) = token(SCREENHEIGHT); }
#line 5157 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 189: /* expression_numeric: LOADTYPEFACE expression_string  */
#line 332 "DARIC.y"
                                     { (yyval.ast) = token1(LOADTYPEFACE, (yyvsp[0].ast)); }
#line 5163 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 190: /* expression_numeric: CREATEFONT expression_numeric ',' expression_numeric  */
#line 333 "DARIC.y"
                                                           { (yyval.ast) = token2(CREATEFONT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5169 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 191: /* expression_numeric: MONO15  */
#line 334 "DARIC.y"
             { (yyval.ast) = integer(0); }
#line 5175 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 192: /* expression_numeric: MONO20  */
#line 335 "DARIC.y"
             { (yyval.ast) = integer(1); }
#line 5181 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 193: /* expression_numeric: MONO25  */
#line 336 "DARIC.y"
             { (yyval.ast) = integer(2); }
#line 5187 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 194: /* expression_numeric: MONO30  */
#line 337 "DARIC.y"
             { (yyval.ast) = integer(3); }
#line 5193 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 195: /* expression_numeric: MONO35  */
#line 338 "DARIC.y"
             { (yyval.ast) = integer(4); }
#line 5199 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 196: /* expression_numeric: MONO40  */
#line 339 "DARIC.y"
             { (yyval.ast) = integer(5); }
#line 5205 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 197: /* expression_numeric: MONO50  */
#line 340 "DARIC.y"
             { (yyval.ast) = integer(6); }
#line 5211 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 198: /* expression_numeric: MONO75  */
#line 341 "DARIC.y"
             { (yyval.ast) = integer(7); }
#line 5217 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 199: /* expression_numeric: MONO100  */
#line 342 "DARIC.y"
              { (yyval.ast) = integer(8); }
#line 5223 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 200: /* expression_numeric: PROP15  */
#line 343 "DARIC.y"
             { (yyval.ast) = integer(9); }
#line 5229 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 201: /* expression_numeric: PROP20  */
#line 344 "DARIC.y"
             { (yyval.ast) = integer(10); }
#line 5235 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 202: /* expression_numeric: PROP25  */
#line 345 "DARIC.y"
             { (yyval.ast) = integer(11); }
#line 5241 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 203: /* expression_numeric: PROP30  */
#line 346 "DARIC.y"
             { (yyval.ast) = integer(12); }
#line 5247 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 204: /* expression_numeric: PROP35  */
#line 347 "DARIC.y"
             { (yyval.ast) = integer(13); }
#line 5253 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 205: /* expression_numeric: PROP40  */
#line 348 "DARIC.y"
             { (yyval.ast) = integer(14); }
#line 5259 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 206: /* expression_numeric: PROP50  */
#line 349 "DARIC.y"
             { (yyval.ast) = integer(15); }
#line 5265 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 207: /* expression_numeric: PROP75  */
#line 350 "DARIC.y"
             { (yyval.ast) = integer(16); }
#line 5271 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 208: /* expression_numeric: PROP100  */
#line 351 "DARIC.y"
              { (yyval.ast) = integer(17); }
#line 5277 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 209: /* expression_numeric: EOFH expression_numeric  */
#line 352 "DARIC.y"
                              { (yyval.ast) = token1(EOFH, (yyvsp[0].ast)); }
#line 5283 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 210: /* expression_numeric: BGET expression_numeric  */
#line 353 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 5289 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 211: /* expression_numeric: OPENIN '(' expression_string ')'  */
#line 354 "DARIC.y"
                                       { (yyval.ast) = token1(OPENIN, (yyvsp[-1].ast)); }
#line 5295 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 212: /* expression_numeric: OPENOUT '(' expression_string ')'  */
#line 355 "DARIC.y"
                                        { (yyval.ast) = token1(OPENOUT, (yyvsp[-1].ast)); }
#line 5301 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 213: /* expression_numeric: OPENUP '(' expression_string ')'  */
#line 356 "DARIC.y"
                                       { (yyval.ast) = token1(OPENUP, (yyvsp[-1].ast)); }
#line 5307 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 214: /* expression_numeric: RND  */
#line 358 "DARIC.y"
          { (yyval.ast) = token(RND); }
#line 5313 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 215: /* expression_numeric: RND0  */
#line 359 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(0)); }
#line 5319 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 216: /* expression_numeric: RND1  */
#line 360 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(1)); }
#line 5325 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 217: /* expression_numeric: RND '(' expression_numeric ')'  */
#line 361 "DARIC.y"
                                     { (yyval.ast) = token1(RNDRANGE, (yyvsp[-1].ast)); }
#line 5331 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 218: /* expression_numeric: PI  */
#line 363 "DARIC.y"
         { (yyval.ast) = token(PI); }
#line 5337 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 219: /* expression_numeric: NOT expression_numeric  */
#line 364 "DARIC.y"
                             { (yyval.ast) = token1(NOT, (yyvsp[0].ast)); }
#line 5343 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 220: /* expression_numeric: SQR '(' expression_numeric ')'  */
#line 365 "DARIC.y"
                                     { (yyval.ast) = token1(SQR, (yyvsp[-1].ast)); }
#line 5349 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 221: /* expression_numeric: LN '(' expression_numeric ')'  */
#line 366 "DARIC.y"
                                    { (yyval.ast) = token1(LN, (yyvsp[-1].ast)); }
#line 5355 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 222: /* expression_numeric: LOG '(' expression_numeric ')'  */
#line 367 "DARIC.y"
                                     { (yyval.ast) = token1(LOG, (yyvsp[-1].ast)); }
#line 5361 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 223: /* expression_numeric: EXP '(' expression_numeric ')'  */
#line 368 "DARIC.y"
                                     { (yyval.ast) = token1(EXP, (yyvsp[-1].ast)); }
#line 5367 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 224: /* expression_numeric: ATN '(' expression_numeric ')'  */
#line 369 "DARIC.y"
                                     { (yyval.ast) = token1(ATN, (yyvsp[-1].ast)); }
#line 5373 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 225: /* expression_numeric: TAN '(' expression_numeric ')'  */
#line 370 "DARIC.y"
                                     { (yyval.ast) = token1(TAN, (yyvsp[-1].ast)); }
#line 5379 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 226: /* expression_numeric: COS '(' expression_numeric ')'  */
#line 371 "DARIC.y"
                                     { (yyval.ast) = token1(COS, (yyvsp[-1].ast)); }
#line 5385 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 227: /* expression_numeric: SIN '(' expression_numeric ')'  */
#line 372 "DARIC.y"
                                     { (yyval.ast) = token1(SIN, (yyvsp[-1].ast)); }
#line 5391 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 228: /* expression_numeric: ABS '(' expression_numeric ')'  */
#line 373 "DARIC.y"
                                     { (yyval.ast) = token1(ABS, (yyvsp[-1].ast)); }
#line 5397 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 229: /* expression_numeric: ACS '(' expression_numeric ')'  */
#line 374 "DARIC.y"
                                     { (yyval.ast) = token1(ACS, (yyvsp[-1].ast)); }
#line 5403 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 230: /* expression_numeric: ASN '(' expression_numeric ')'  */
#line 375 "DARIC.y"
                                     { (yyval.ast) = token1(ASN, (yyvsp[-1].ast)); }
#line 5409 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 231: /* expression_numeric: DEG '(' expression_numeric ')'  */
#line 376 "DARIC.y"
                                     { (yyval.ast) = token1(DEG, (yyvsp[-1].ast)); }
#line 5415 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 232: /* expression_numeric: RAD '(' expression_numeric ')'  */
#line 377 "DARIC.y"
                                     { (yyval.ast) = token1(RAD, (yyvsp[-1].ast)); }
#line 5421 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 233: /* expression_numeric: SGN '(' expression_numeric ')'  */
#line 378 "DARIC.y"
                                     { (yyval.ast) = token1(SGN, (yyvsp[-1].ast)); }
#line 5427 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 234: /* expression_numeric: ASC '(' expression_string ')'  */
#line 380 "DARIC.y"
                                    { (yyval.ast) = token1(ASC, (yyvsp[-1].ast)); }
#line 5433 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 235: /* expression_numeric: LEN '(' expression_string ')'  */
#line 381 "DARIC.y"
                                    { (yyval.ast) = token1(LEN, (yyvsp[-1].ast)); }
#line 5439 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 236: /* expression_numeric: INSTR '(' expression_string ',' expression_string ')'  */
#line 382 "DARIC.y"
                                                            { (yyval.ast) = token3(INSTR, (yyvsp[-3].ast), (yyvsp[-1].ast), integer(1)); }
#line 5445 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 237: /* expression_numeric: INSTR '(' expression_string ',' expression_string ',' expression_numeric ')'  */
#line 383 "DARIC.y"
                                                                                   { (yyval.ast) = token3(INSTR, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5451 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 238: /* expression_numeric: VAL '(' expression_string ')'  */
#line 384 "DARIC.y"
                                    { (yyval.ast) = token1(VAL, (yyvsp[-1].ast)); }
#line 5457 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 239: /* variable_integer: INTEGER_VARIABLE  */
#line 388 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5463 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 240: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 389 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5469 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 241: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 390 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5475 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 242: /* variable_integer: TYPE_VARIABLE INTEGER_VARIABLE  */
#line 391 "DARIC.y"
                                     { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5481 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 243: /* variable_integer: TYPE_VARIABLE '(' expression_numeric ')' INTEGER_VARIABLE  */
#line 392 "DARIC.y"
                                                                { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5487 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 244: /* variable_real: VARIABLE  */
#line 396 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 5493 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 245: /* variable_real: VARIABLE '(' expression_numeric ')'  */
#line 397 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5499 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 246: /* variable_real: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 398 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5505 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 247: /* variable_real: TYPE_VARIABLE VARIABLE  */
#line 399 "DARIC.y"
                             { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5511 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 248: /* variable_real: TYPE_VARIABLE '(' expression_numeric ')' VARIABLE  */
#line 400 "DARIC.y"
                                                        { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5517 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 249: /* variable_numeric: variable_integer  */
#line 404 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5523 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 250: /* variable_numeric: variable_real  */
#line 405 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5529 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 251: /* variable_string: STRING_VARIABLE  */
#line 409 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 5535 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 252: /* variable_string: STRING_VARIABLE '(' expression_numeric ')'  */
#line 410 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5541 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 253: /* variable_string: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 411 "DARIC.y"
                                                                        { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5547 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 254: /* variable_string: TYPE_VARIABLE '(' expression_numeric ')' STRING_VARIABLE  */
#line 412 "DARIC.y"
                                                               { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5553 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 255: /* variable: variable_numeric  */
#line 416 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5559 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 256: /* variable: variable_string  */
#line 417 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 5565 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 257: /* variable_list: variable  */
#line 421 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 5571 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 258: /* variable_list: variable ',' variable_list  */
#line 422 "DARIC.y"
                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5577 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 259: /* plain_variable: INTEGER_VARIABLE  */
#line 426 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5583 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 260: /* plain_variable: VARIABLE  */
#line 427 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 5589 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 261: /* plain_variable: STRING_VARIABLE  */
#line 428 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 5595 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 262: /* plain_variable_list: plain_variable  */
#line 432 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 5601 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 263: /* plain_variable_list: plain_variable ',' plain_variable_list  */
#line 433 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5607 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 264: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 437 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5613 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 265: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 438 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5619 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 266: /* dim_variable: VARIABLE '(' expression_numeric ')'  */
#line 439 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5625 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 267: /* dim_variable: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 440 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5631 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 268: /* dim_variable: STRING_VARIABLE '(' expression_numeric ')'  */
#line 441 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5637 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 269: /* dim_variable: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 442 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5643 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 270: /* dim_variable: TYPE_VARIABLE '(' expression_numeric ',' VARIABLE ')'  */
#line 443 "DARIC.y"
                                                            { (yyval.ast) = typevariable1d((yyvsp[-5].v_string), (yyvsp[-1].v_string), (yyvsp[-3].ast), Type::TYPE_ARRAY); }
#line 5649 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 271: /* dim_variable_list: dim_variable  */
#line 447 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 5655 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 272: /* dim_variable_list: dim_variable ',' dim_variable_list  */
#line 448 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5661 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 273: /* type_variable: TYPE_VARIABLE  */
#line 452 "DARIC.y"
                    { (yyval.ast) = variable((yyvsp[0].v_string), Type::TYPE); }
#line 5667 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 274: /* type_variable: TYPE_VARIABLE '(' expression_numeric ')'  */
#line 453 "DARIC.y"
                                               { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::TYPE_ARRAY); }
#line 5673 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 275: /* type: TYPE_ VARIABLE NL field_list END_TYPE  */
#line 457 "DARIC.y"
                                            { (yyval.ast) = token2(TYPE_, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5679 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 276: /* field: FIELD variable  */
#line 461 "DARIC.y"
                     { (yyval.ast) = token1(FIELD, (yyvsp[0].ast)); }
#line 5685 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 277: /* field_list: field NL  */
#line 465 "DARIC.y"
              { (yyval.ast) = (yyvsp[-1].ast); }
#line 5691 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 278: /* field_list: field NL field_list  */
#line 466 "DARIC.y"
                          { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5697 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 279: /* string: LITERAL_STRING  */
#line 470 "DARIC.y"
                     { (yyval.ast) = string((yyvsp[0].v_string)); }
#line 5703 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 280: /* expression_string: string  */
#line 474 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 5709 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 281: /* expression_string: variable_string  */
#line 475 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 5715 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 282: /* expression_string: expression_string PLUS expression_string  */
#line 476 "DARIC.y"
                                               { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5721 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 283: /* expression_string: expression_string E expression_string  */
#line 477 "DARIC.y"
                                            { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5727 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 284: /* expression_string: expression_string NE expression_string  */
#line 478 "DARIC.y"
                                             { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5733 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 285: /* expression_string: expression_string GE expression_string  */
#line 479 "DARIC.y"
                                             { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5739 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 286: /* expression_string: expression_string LE expression_string  */
#line 480 "DARIC.y"
                                             { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5745 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 287: /* expression_string: expression_string LT expression_string  */
#line 481 "DARIC.y"
                                             { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5751 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 288: /* expression_string: expression_string GT expression_string  */
#line 482 "DARIC.y"
                                             { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5757 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 289: /* expression_string: GETSH expression_numeric  */
#line 484 "DARIC.y"
                               { (yyval.ast) = token1(GETSH, (yyvsp[0].ast)); }
#line 5763 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 290: /* expression_string: STRING_FUNCTION '(' expression_list ')'  */
#line 486 "DARIC.y"
                                              { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5769 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 291: /* expression_string: GETS  */
#line 488 "DARIC.y"
           { (yyval.ast) = token(GETS); }
#line 5775 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 292: /* expression_string: INKEYS '(' expression_numeric ')'  */
#line 489 "DARIC.y"
                                        { (yyval.ast) = token1(INKEYS, (yyvsp[-1].ast)); }
#line 5781 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 293: /* expression_string: TIMES  */
#line 491 "DARIC.y"
            { (yyval.ast) = token(TIMES); }
#line 5787 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 294: /* expression_string: STRS '(' expression_numeric ')'  */
#line 492 "DARIC.y"
                                      { (yyval.ast) = token1(STRS, (yyvsp[-1].ast)); }
#line 5793 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 295: /* expression_string: STRS TILDE '(' expression_numeric ')'  */
#line 493 "DARIC.y"
                                            { (yyval.ast) = token1(STRSHEX, (yyvsp[-1].ast)); }
#line 5799 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 296: /* expression_string: STRINGS '(' expression_numeric ',' expression_string ')'  */
#line 494 "DARIC.y"
                                                               { (yyval.ast) = token2(STRINGS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5805 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 297: /* expression_string: CHRS '(' expression_numeric ')'  */
#line 495 "DARIC.y"
                                      { (yyval.ast) = token1(CHRS, (yyvsp[-1].ast)); }
#line 5811 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 298: /* expression_string: LEFTS '(' expression_string ',' expression_numeric ')'  */
#line 496 "DARIC.y"
                                                             { (yyval.ast) = token2(LEFTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5817 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 299: /* expression_string: MIDS '(' expression_string ',' expression_numeric ',' expression_numeric ')'  */
#line 497 "DARIC.y"
                                                                                   { (yyval.ast) = token3(MIDS, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5823 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 300: /* expression_string: RIGHTS '(' expression_string ',' expression_numeric ')'  */
#line 498 "DARIC.y"
                                                              { (yyval.ast) = token2(RIGHTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5829 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 301: /* expression: expression_numeric  */
#line 502 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 5835 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 302: /* expression: expression_string  */
#line 503 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5841 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 303: /* expression_list: %empty  */
#line 507 "DARIC.y"
                     { (yyval.ast) = NULL; }
#line 5847 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 304: /* expression_list: expression  */
#line 508 "DARIC.y"
                 { (yyval.ast) = (yyvsp[0].ast); }
#line 5853 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 305: /* expression_list: expression ',' expression_list  */
#line 509 "DARIC.y"
                                     { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5859 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 306: /* assignment_single: variable_numeric E expression_numeric  */
#line 513 "DARIC.y"
                                            { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5865 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 307: /* assignment_single: variable_string E expression_string  */
#line 514 "DARIC.y"
                                          { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5871 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 308: /* assignment_single: type_variable E expression  */
#line 515 "DARIC.y"
                                 { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5877 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 309: /* assignment_single: type_variable variable E expression  */
#line 516 "DARIC.y"
                                          { (yyval.ast) = assignment(link((yyvsp[-3].ast), (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 5883 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 310: /* assignment_list: assignment_single  */
#line 520 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5889 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 311: /* assignment_list: assignment_single ',' assignment_list  */
#line 521 "DARIC.y"
                                            { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5895 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 312: /* assignment: assignment_list  */
#line 525 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 5901 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 313: /* assignment: LOCAL assignment_list  */
#line 526 "DARIC.y"
                            { (yyval.ast) = token1(LOCAL, (yyvsp[0].ast)); }
#line 5907 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 314: /* assignment: GLOBAL assignment_list  */
#line 527 "DARIC.y"
                             { (yyval.ast) = token1(GLOBAL, (yyvsp[0].ast)); }
#line 5913 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 315: /* assignment: variable_numeric SHL_E expression_numeric  */
#line 528 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5919 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 316: /* assignment: variable_numeric SHR_E expression_numeric  */
#line 529 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5925 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 317: /* assignment: variable_numeric PLUS_E expression_numeric  */
#line 530 "DARIC.y"
                                                 { (yyval.ast) = assignment((yyvsp[-2].ast), token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5931 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 318: /* assignment: variable_numeric MINUS_E expression_numeric  */
#line 531 "DARIC.y"
                                                  { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5937 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 319: /* assignment: variable_numeric MULTIPLY_E expression_numeric  */
#line 532 "DARIC.y"
                                                     { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5943 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 320: /* assignment: variable_numeric DIVIDE_E expression_numeric  */
#line 533 "DARIC.y"
                                                   { (yyval.ast) = assignment((yyvsp[-2].ast), token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5949 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 321: /* assignment: variable_numeric INTEGERDIVIDE_E expression_numeric  */
#line 534 "DARIC.y"
                                                          { (yyval.ast) = assignment((yyvsp[-2].ast), token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5955 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 322: /* expression_print: expression_string  */
#line 538 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5961 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 323: /* expression_print: expression_numeric  */
#line 539 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 5967 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 324: /* expression_print: ','  */
#line 540 "DARIC.y"
          { (yyval.ast) = token(COMMA); }
#line 5973 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 325: /* expression_print: TILDE  */
#line 541 "DARIC.y"
            { (yyval.ast) = token(TILDE); }
#line 5979 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 326: /* expression_print: TICK  */
#line 542 "DARIC.y"
           { (yyval.ast) = token(TICK); }
#line 5985 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 327: /* expression_print: SPC '(' expression_numeric ')'  */
#line 543 "DARIC.y"
                                     { (yyval.ast) = token1(SPC, (yyvsp[-1].ast)); }
#line 5991 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 328: /* expression_print: SEMICOLON  */
#line 544 "DARIC.y"
                { (yyval.ast) = token(SEMICOLON); }
#line 5997 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 329: /* expression_print_list: expression_print  */
#line 548 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6003 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 330: /* expression_print_list: expression_print expression_print_list  */
#line 549 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6009 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 332: /* expression_input_list: expression_input  */
#line 557 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6015 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 333: /* expression_input_list: expression_input ',' expression_input_list  */
#line 558 "DARIC.y"
                                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6021 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 334: /* proc_parameter: %empty  */
#line 562 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6027 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 335: /* proc_parameter: variable  */
#line 563 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6033 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 336: /* proc_parameter: RETURN variable  */
#line 564 "DARIC.y"
                      { (yyval.ast) = token1(RETURN_PARAMETER, (yyvsp[0].ast)); }
#line 6039 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 337: /* proc_parameter_list: proc_parameter  */
#line 568 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 6045 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 338: /* proc_parameter_list: proc_parameter ',' proc_parameter_list  */
#line 569 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6051 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 339: /* fn_parameter: %empty  */
#line 573 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6057 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 340: /* fn_parameter: variable  */
#line 574 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6063 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 341: /* fn_parameter_list: fn_parameter  */
#line 578 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6069 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 342: /* fn_parameter_list: fn_parameter ',' fn_parameter_list  */
#line 579 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6075 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 343: /* when: WHEN expression_list statements NL  */
#line 583 "DARIC.y"
                                         { (yyval.ast) = token2(WHEN, (yyvsp[-2].ast), (yyvsp[-1].ast)); }
#line 6081 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 344: /* when_list: when  */
#line 587 "DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 6087 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 345: /* when_list: when when_list  */
#line 588 "DARIC.y"
                     { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6093 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 346: /* define_function: DEFINE_PROCEDURE '(' proc_parameter_list ')' NL embed_lines END_PROC  */
#line 591 "DARIC.y"
                                                                           { (yyval.ast) = token3typed(DEFPROC, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::NOTYPE); }
#line 6099 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 347: /* define_function: DEFINE_INTEGER_FUNCTION '(' fn_parameter_list ')' NL embed_lines END_FN  */
#line 592 "DARIC.y"
                                                                              { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::INTEGER); }
#line 6105 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 348: /* define_function: DEFINE_REAL_FUNCTION '(' fn_parameter_list ')' NL embed_lines END_FN  */
#line 593 "DARIC.y"
                                                                           { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::REAL); }
#line 6111 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 349: /* define_function: DEFINE_STRING_FUNCTION '(' fn_parameter_list ')' NL embed_lines END_FN  */
#line 594 "DARIC.y"
                                                                             { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::STRING); }
#line 6117 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;


#line 6121 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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
      yyerror (YY_("syntax error"));
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


#if !defined yyoverflow
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

  return yyresult;
}

#line 597 "DARIC.y"


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
