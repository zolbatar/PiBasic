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

AST *final = nullptr;
extern int yylex();
extern FILE *yyin;
extern int yyfileno;
extern int yylineno;
extern std::stack<std::string> file_stack;
std::list<std::string> error_list;
extern std::string file;
extern std::map<std::string, int> files_index;
std::map<int, std::list<AST *>> ast_lines;
void yyerror(const char *e);
int yylex_destroy(void);
int status;
extern bool interactive;

#line 97 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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
  YYSYMBOL_INTEGERDIVIDE = 23,             /* INTEGERDIVIDE  */
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
  YYSYMBOL_ENDFN = 49,                     /* ENDFN  */
  YYSYMBOL_ENDPROC = 50,                   /* ENDPROC  */
  YYSYMBOL_RETURN = 51,                    /* RETURN  */
  YYSYMBOL_RETURN_WITH_VALUE = 52,         /* RETURN_WITH_VALUE  */
  YYSYMBOL_DEFFN = 53,                     /* DEFFN  */
  YYSYMBOL_CALLPROC = 54,                  /* CALLPROC  */
  YYSYMBOL_CALLFN = 55,                    /* CALLFN  */
  YYSYMBOL_RETURN_PARAMETER = 56,          /* RETURN_PARAMETER  */
  YYSYMBOL_BGET = 57,                      /* BGET  */
  YYSYMBOL_BPUT = 58,                      /* BPUT  */
  YYSYMBOL_CLOSE = 59,                     /* CLOSE  */
  YYSYMBOL_EOFH = 60,                      /* EOFH  */
  YYSYMBOL_OPENIN = 61,                    /* OPENIN  */
  YYSYMBOL_OPENUP = 62,                    /* OPENUP  */
  YYSYMBOL_OPENOUT = 63,                   /* OPENOUT  */
  YYSYMBOL_PTR = 64,                       /* PTR  */
  YYSYMBOL_PTRA = 65,                      /* PTRA  */
  YYSYMBOL_GETSH = 66,                     /* GETSH  */
  YYSYMBOL_LISTFILES = 67,                 /* LISTFILES  */
  YYSYMBOL_CASE = 68,                      /* CASE  */
  YYSYMBOL_ELSE = 69,                      /* ELSE  */
  YYSYMBOL_ENDCASE = 70,                   /* ENDCASE  */
  YYSYMBOL_ENDIF = 71,                     /* ENDIF  */
  YYSYMBOL_ENDWHILE = 72,                  /* ENDWHILE  */
  YYSYMBOL_FOR = 73,                       /* FOR  */
  YYSYMBOL_GOSUB = 74,                     /* GOSUB  */
  YYSYMBOL_GOTO = 75,                      /* GOTO  */
  YYSYMBOL_IF = 76,                        /* IF  */
  YYSYMBOL_NEXT = 77,                      /* NEXT  */
  YYSYMBOL_OF = 78,                        /* OF  */
  YYSYMBOL_OTHERWISE = 79,                 /* OTHERWISE  */
  YYSYMBOL_REPEAT = 80,                    /* REPEAT  */
  YYSYMBOL_STEP = 81,                      /* STEP  */
  YYSYMBOL_THEN = 82,                      /* THEN  */
  YYSYMBOL_TO = 83,                        /* TO  */
  YYSYMBOL_UNTIL = 84,                     /* UNTIL  */
  YYSYMBOL_WHEN = 85,                      /* WHEN  */
  YYSYMBOL_WHILE = 86,                     /* WHILE  */
  YYSYMBOL_IN_ = 87,                       /* IN_  */
  YYSYMBOL_FORIN = 88,                     /* FORIN  */
  YYSYMBOL_DATA = 89,                      /* DATA  */
  YYSYMBOL_READ = 90,                      /* READ  */
  YYSYMBOL_RESTORE = 91,                   /* RESTORE  */
  YYSYMBOL_ARRAYSIZE = 92,                 /* ARRAYSIZE  */
  YYSYMBOL_DIM = 93,                       /* DIM  */
  YYSYMBOL_LOCALDIM = 94,                  /* LOCALDIM  */
  YYSYMBOL_ENDTYPE = 95,                   /* ENDTYPE  */
  YYSYMBOL_FIELD = 96,                     /* FIELD  */
  YYSYMBOL_GLOBAL = 97,                    /* GLOBAL  */
  YYSYMBOL_LOCAL = 98,                     /* LOCAL  */
  YYSYMBOL_TYPE_ = 99,                     /* TYPE_  */
  YYSYMBOL_END = 100,                      /* END  */
  YYSYMBOL_TRACEON = 101,                  /* TRACEON  */
  YYSYMBOL_TRACEOFF = 102,                 /* TRACEOFF  */
  YYSYMBOL_BREAKPOINT = 103,               /* BREAKPOINT  */
  YYSYMBOL_RND = 104,                      /* RND  */
  YYSYMBOL_RND0 = 105,                     /* RND0  */
  YYSYMBOL_RND1 = 106,                     /* RND1  */
  YYSYMBOL_RNDREAL = 107,                  /* RNDREAL  */
  YYSYMBOL_RNDRANGE = 108,                 /* RNDRANGE  */
  YYSYMBOL_FLOAT_ = 109,                   /* FLOAT_  */
  YYSYMBOL_INT_ = 110,                     /* INT_  */
  YYSYMBOL_ACS = 111,                      /* ACS  */
  YYSYMBOL_DIV = 112,                      /* DIV  */
  YYSYMBOL_MOD = 113,                      /* MOD  */
  YYSYMBOL_SQR = 114,                      /* SQR  */
  YYSYMBOL_LN = 115,                       /* LN  */
  YYSYMBOL_LOG = 116,                      /* LOG  */
  YYSYMBOL_EXP = 117,                      /* EXP  */
  YYSYMBOL_ATN = 118,                      /* ATN  */
  YYSYMBOL_TAN = 119,                      /* TAN  */
  YYSYMBOL_COS = 120,                      /* COS  */
  YYSYMBOL_SIN = 121,                      /* SIN  */
  YYSYMBOL_ASN = 122,                      /* ASN  */
  YYSYMBOL_ABS = 123,                      /* ABS  */
  YYSYMBOL_DEG = 124,                      /* DEG  */
  YYSYMBOL_RAD = 125,                      /* RAD  */
  YYSYMBOL_SGN = 126,                      /* SGN  */
  YYSYMBOL_VAL = 127,                      /* VAL  */
  YYSYMBOL_PI = 128,                       /* PI  */
  YYSYMBOL_BOOLFALSE = 129,                /* BOOLFALSE  */
  YYSYMBOL_BOOLTRUE = 130,                 /* BOOLTRUE  */
  YYSYMBOL_ASC = 131,                      /* ASC  */
  YYSYMBOL_CHRS = 132,                     /* CHRS  */
  YYSYMBOL_INSTR = 133,                    /* INSTR  */
  YYSYMBOL_LEFTS = 134,                    /* LEFTS  */
  YYSYMBOL_MIDS = 135,                     /* MIDS  */
  YYSYMBOL_RIGHTS = 136,                   /* RIGHTS  */
  YYSYMBOL_LEN = 137,                      /* LEN  */
  YYSYMBOL_STRS = 138,                     /* STRS  */
  YYSYMBOL_STRSHEX = 139,                  /* STRSHEX  */
  YYSYMBOL_STRINGS = 140,                  /* STRINGS  */
  YYSYMBOL_OSCLI = 141,                    /* OSCLI  */
  YYSYMBOL_TIME = 142,                     /* TIME  */
  YYSYMBOL_TIMES = 143,                    /* TIMES  */
  YYSYMBOL_AND = 144,                      /* AND  */
  YYSYMBOL_OR = 145,                       /* OR  */
  YYSYMBOL_EOR = 146,                      /* EOR  */
  YYSYMBOL_NOT = 147,                      /* NOT  */
  YYSYMBOL_CHAIN = 148,                    /* CHAIN  */
  YYSYMBOL_EXPECT = 149,                   /* EXPECT  */
  YYSYMBOL_RED = 150,                      /* RED  */
  YYSYMBOL_GREEN = 151,                    /* GREEN  */
  YYSYMBOL_YELLOW = 152,                   /* YELLOW  */
  YYSYMBOL_BLUE = 153,                     /* BLUE  */
  YYSYMBOL_MAGENTA = 154,                  /* MAGENTA  */
  YYSYMBOL_CYAN = 155,                     /* CYAN  */
  YYSYMBOL_WHITE = 156,                    /* WHITE  */
  YYSYMBOL_BLACK = 157,                    /* BLACK  */
  YYSYMBOL_CLS = 158,                      /* CLS  */
  YYSYMBOL_CLG = 159,                      /* CLG  */
  YYSYMBOL_COLOUR = 160,                   /* COLOUR  */
  YYSYMBOL_COLOURBG = 161,                 /* COLOURBG  */
  YYSYMBOL_COLOUREXP = 162,                /* COLOUREXP  */
  YYSYMBOL_FLIP = 163,                     /* FLIP  */
  YYSYMBOL_GRAPHICS = 164,                 /* GRAPHICS  */
  YYSYMBOL_BANKED = 165,                   /* BANKED  */
  YYSYMBOL_FILL = 166,                     /* FILL  */
  YYSYMBOL_SHADED = 167,                   /* SHADED  */
  YYSYMBOL_LINE = 168,                     /* LINE  */
  YYSYMBOL_PLOT = 169,                     /* PLOT  */
  YYSYMBOL_POINT_ = 170,                   /* POINT_  */
  YYSYMBOL_RECTANGLE = 171,                /* RECTANGLE  */
  YYSYMBOL_RECTANGLEFILL = 172,            /* RECTANGLEFILL  */
  YYSYMBOL_TRIANGLE = 173,                 /* TRIANGLE  */
  YYSYMBOL_TRIANGLEFILL = 174,             /* TRIANGLEFILL  */
  YYSYMBOL_TRIANGLESHADED = 175,           /* TRIANGLESHADED  */
  YYSYMBOL_CLIPON = 176,                   /* CLIPON  */
  YYSYMBOL_CLIPOFF = 177,                  /* CLIPOFF  */
  YYSYMBOL_CIRCLE = 178,                   /* CIRCLE  */
  YYSYMBOL_CIRCLEFILL = 179,               /* CIRCLEFILL  */
  YYSYMBOL_TEXT = 180,                     /* TEXT  */
  YYSYMBOL_TEXTRIGHT = 181,                /* TEXTRIGHT  */
  YYSYMBOL_TEXTCENTRE = 182,               /* TEXTCENTRE  */
  YYSYMBOL_LOADTYPEFACE = 183,             /* LOADTYPEFACE  */
  YYSYMBOL_CREATEFONT = 184,               /* CREATEFONT  */
  YYSYMBOL_MONO15 = 185,                   /* MONO15  */
  YYSYMBOL_MONO20 = 186,                   /* MONO20  */
  YYSYMBOL_MONO25 = 187,                   /* MONO25  */
  YYSYMBOL_MONO30 = 188,                   /* MONO30  */
  YYSYMBOL_MONO35 = 189,                   /* MONO35  */
  YYSYMBOL_MONO40 = 190,                   /* MONO40  */
  YYSYMBOL_MONO50 = 191,                   /* MONO50  */
  YYSYMBOL_MONO75 = 192,                   /* MONO75  */
  YYSYMBOL_MONO100 = 193,                  /* MONO100  */
  YYSYMBOL_PROP15 = 194,                   /* PROP15  */
  YYSYMBOL_PROP20 = 195,                   /* PROP20  */
  YYSYMBOL_PROP25 = 196,                   /* PROP25  */
  YYSYMBOL_PROP30 = 197,                   /* PROP30  */
  YYSYMBOL_PROP35 = 198,                   /* PROP35  */
  YYSYMBOL_PROP40 = 199,                   /* PROP40  */
  YYSYMBOL_PROP50 = 200,                   /* PROP50  */
  YYSYMBOL_PROP75 = 201,                   /* PROP75  */
  YYSYMBOL_PROP100 = 202,                  /* PROP100  */
  YYSYMBOL_SERIF15 = 203,                  /* SERIF15  */
  YYSYMBOL_SERIF20 = 204,                  /* SERIF20  */
  YYSYMBOL_SERIF25 = 205,                  /* SERIF25  */
  YYSYMBOL_SERIF30 = 206,                  /* SERIF30  */
  YYSYMBOL_SERIF35 = 207,                  /* SERIF35  */
  YYSYMBOL_SERIF40 = 208,                  /* SERIF40  */
  YYSYMBOL_SERIF50 = 209,                  /* SERIF50  */
  YYSYMBOL_SERIF75 = 210,                  /* SERIF75  */
  YYSYMBOL_SERIF100 = 211,                 /* SERIF100  */
  YYSYMBOL_SCREENWIDTH = 212,              /* SCREENWIDTH  */
  YYSYMBOL_SCREENHEIGHT = 213,             /* SCREENHEIGHT  */
  YYSYMBOL_SHOWFPS = 214,                  /* SHOWFPS  */
  YYSYMBOL_LASTPOS = 215,                  /* LASTPOS  */
  YYSYMBOL_INKEY = 216,                    /* INKEY  */
  YYSYMBOL_INKEYS = 217,                   /* INKEYS  */
  YYSYMBOL_INPUT_ = 218,                   /* INPUT_  */
  YYSYMBOL_PRINT = 219,                    /* PRINT  */
  YYSYMBOL_SPC = 220,                      /* SPC  */
  YYSYMBOL_SINKEY = 221,                   /* SINKEY  */
  YYSYMBOL_SINKEYS = 222,                  /* SINKEYS  */
  YYSYMBOL_INPUT_NOQUESTIONMARK = 223,     /* INPUT_NOQUESTIONMARK  */
  YYSYMBOL_GET = 224,                      /* GET  */
  YYSYMBOL_GETS = 225,                     /* GETS  */
  YYSYMBOL_GET_S = 226,                    /* GET_S  */
  YYSYMBOL_GETS_S = 227,                   /* GETS_S  */
  YYSYMBOL_MOUSE = 228,                    /* MOUSE  */
  YYSYMBOL_CREATEVERTEX = 229,             /* CREATEVERTEX  */
  YYSYMBOL_CREATETRIANGLE = 230,           /* CREATETRIANGLE  */
  YYSYMBOL_CREATESHAPE = 231,              /* CREATESHAPE  */
  YYSYMBOL_CREATEOBJECT = 232,             /* CREATEOBJECT  */
  YYSYMBOL_TRANSLATE = 233,                /* TRANSLATE  */
  YYSYMBOL_ROTATE = 234,                   /* ROTATE  */
  YYSYMBOL_SCALE = 235,                    /* SCALE  */
  YYSYMBOL_RENDERFRAME = 236,              /* RENDERFRAME  */
  YYSYMBOL_DELETEOBJECT = 237,             /* DELETEOBJECT  */
  YYSYMBOL_SOLID = 238,                    /* SOLID  */
  YYSYMBOL_WIREFRAME = 239,                /* WIREFRAME  */
  YYSYMBOL_FILLEDWIREFRAME = 240,          /* FILLEDWIREFRAME  */
  YYSYMBOL_NEG = 241,                      /* NEG  */
  YYSYMBOL_242_ = 242,                     /* ','  */
  YYSYMBOL_243_ = 243,                     /* '('  */
  YYSYMBOL_244_ = 244,                     /* ')'  */
  YYSYMBOL_YYACCEPT = 245,                 /* $accept  */
  YYSYMBOL_daric = 246,                    /* daric  */
  YYSYMBOL_lines = 247,                    /* lines  */
  YYSYMBOL_line = 248,                     /* line  */
  YYSYMBOL_embed_lines = 249,              /* embed_lines  */
  YYSYMBOL_statements = 250,               /* statements  */
  YYSYMBOL_statement = 251,                /* statement  */
  YYSYMBOL_number = 252,                   /* number  */
  YYSYMBOL_expression_numeric = 253,       /* expression_numeric  */
  YYSYMBOL_variable_integer = 254,         /* variable_integer  */
  YYSYMBOL_variable_real = 255,            /* variable_real  */
  YYSYMBOL_variable_numeric = 256,         /* variable_numeric  */
  YYSYMBOL_variable_string = 257,          /* variable_string  */
  YYSYMBOL_variable = 258,                 /* variable  */
  YYSYMBOL_variable_list = 259,            /* variable_list  */
  YYSYMBOL_plain_variable = 260,           /* plain_variable  */
  YYSYMBOL_plain_variable_list = 261,      /* plain_variable_list  */
  YYSYMBOL_dim_variable = 262,             /* dim_variable  */
  YYSYMBOL_dim_variable_list = 263,        /* dim_variable_list  */
  YYSYMBOL_type_variable = 264,            /* type_variable  */
  YYSYMBOL_type = 265,                     /* type  */
  YYSYMBOL_field = 266,                    /* field  */
  YYSYMBOL_field_list = 267,               /* field_list  */
  YYSYMBOL_string = 268,                   /* string  */
  YYSYMBOL_expression_string = 269,        /* expression_string  */
  YYSYMBOL_expression = 270,               /* expression  */
  YYSYMBOL_expression_list = 271,          /* expression_list  */
  YYSYMBOL_assignment_single = 272,        /* assignment_single  */
  YYSYMBOL_assignment_list = 273,          /* assignment_list  */
  YYSYMBOL_assignment = 274,               /* assignment  */
  YYSYMBOL_expression_print = 275,         /* expression_print  */
  YYSYMBOL_expression_print_list = 276,    /* expression_print_list  */
  YYSYMBOL_expression_input = 277,         /* expression_input  */
  YYSYMBOL_expression_input_list = 278,    /* expression_input_list  */
  YYSYMBOL_proc_parameter = 279,           /* proc_parameter  */
  YYSYMBOL_proc_parameter_list = 280,      /* proc_parameter_list  */
  YYSYMBOL_fn_parameter = 281,             /* fn_parameter  */
  YYSYMBOL_fn_parameter_list = 282,        /* fn_parameter_list  */
  YYSYMBOL_when = 283,                     /* when  */
  YYSYMBOL_when_list = 284,                /* when_list  */
  YYSYMBOL_define_function = 285           /* define_function  */
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
#define YYFINAL  302
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10874

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  245
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  361
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1034

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   496


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
     243,   244,     2,     2,   242,     2,     2,     2,     2,     2,
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
     235,   236,   237,   238,   239,   240,   241
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    99,    99,   103,   104,   108,   109,   110,   111,   112,
     116,   117,   121,   122,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   147,   148,   150,   151,   152,   153,
     154,   155,   157,   159,   160,   162,   163,   164,   165,   167,
     168,   169,   170,   172,   173,   174,   175,   177,   178,   179,
     180,   182,   183,   184,   186,   187,   188,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   222,   223,   225,   226,   228,
     229,   232,   235,   236,   237,   238,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   260,   261,   262,   263,   264,   265,
     266,   270,   271,   272,   273,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   304,   305,   307,   308,   309,   311,   313,   314,   316,
     317,   318,   320,   321,   322,   323,   325,   326,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   380,   381,   382,   383,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   402,   403,   404,   405,   406,
     410,   411,   412,   413,   414,   418,   419,   420,   421,   422,
     426,   427,   431,   432,   433,   434,   438,   439,   443,   444,
     448,   449,   450,   454,   455,   459,   460,   461,   462,   463,
     464,   465,   469,   470,   474,   475,   479,   483,   487,   488,
     492,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     506,   508,   510,   511,   513,   514,   515,   516,   517,   518,
     519,   520,   524,   525,   529,   530,   531,   535,   536,   537,
     538,   542,   543,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   560,   561,   562,   563,   564,   565,   566,
     570,   571,   575,   579,   580,   584,   585,   586,   590,   591,
     595,   596,   600,   601,   605,   609,   610,   613,   614,   615,
     616,   617
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
  "FN_STRING", "NL", "COLON", "SEMICOLON", "COMMA", "INTEGERDIVIDE", "E",
  "LE", "GE", "NE", "SHL", "SHR", "LT", "GT", "PLUS", "MINUS", "MULTIPLY",
  "DIVIDE", "TILDE", "TICK", "SHL_E", "SHR_E", "PLUS_E", "MINUS_E",
  "MULTIPLY_E", "DIVIDE_E", "INTEGERDIVIDE_E", "SWAP", "SWAP_I", "SWAP_F",
  "SWAP_S", "ENDFN", "ENDPROC", "RETURN", "RETURN_WITH_VALUE", "DEFFN",
  "CALLPROC", "CALLFN", "RETURN_PARAMETER", "BGET", "BPUT", "CLOSE",
  "EOFH", "OPENIN", "OPENUP", "OPENOUT", "PTR", "PTRA", "GETSH",
  "LISTFILES", "CASE", "ELSE", "ENDCASE", "ENDIF", "ENDWHILE", "FOR",
  "GOSUB", "GOTO", "IF", "NEXT", "OF", "OTHERWISE", "REPEAT", "STEP",
  "THEN", "TO", "UNTIL", "WHEN", "WHILE", "IN_", "FORIN", "DATA", "READ",
  "RESTORE", "ARRAYSIZE", "DIM", "LOCALDIM", "ENDTYPE", "FIELD", "GLOBAL",
  "LOCAL", "TYPE_", "END", "TRACEON", "TRACEOFF", "BREAKPOINT", "RND",
  "RND0", "RND1", "RNDREAL", "RNDRANGE", "FLOAT_", "INT_", "ACS", "DIV",
  "MOD", "SQR", "LN", "LOG", "EXP", "ATN", "TAN", "COS", "SIN", "ASN",
  "ABS", "DEG", "RAD", "SGN", "VAL", "PI", "BOOLFALSE", "BOOLTRUE", "ASC",
  "CHRS", "INSTR", "LEFTS", "MIDS", "RIGHTS", "LEN", "STRS", "STRSHEX",
  "STRINGS", "OSCLI", "TIME", "TIMES", "AND", "OR", "EOR", "NOT", "CHAIN",
  "EXPECT", "RED", "GREEN", "YELLOW", "BLUE", "MAGENTA", "CYAN", "WHITE",
  "BLACK", "CLS", "CLG", "COLOUR", "COLOURBG", "COLOUREXP", "FLIP",
  "GRAPHICS", "BANKED", "FILL", "SHADED", "LINE", "PLOT", "POINT_",
  "RECTANGLE", "RECTANGLEFILL", "TRIANGLE", "TRIANGLEFILL",
  "TRIANGLESHADED", "CLIPON", "CLIPOFF", "CIRCLE", "CIRCLEFILL", "TEXT",
  "TEXTRIGHT", "TEXTCENTRE", "LOADTYPEFACE", "CREATEFONT", "MONO15",
  "MONO20", "MONO25", "MONO30", "MONO35", "MONO40", "MONO50", "MONO75",
  "MONO100", "PROP15", "PROP20", "PROP25", "PROP30", "PROP35", "PROP40",
  "PROP50", "PROP75", "PROP100", "SERIF15", "SERIF20", "SERIF25",
  "SERIF30", "SERIF35", "SERIF40", "SERIF50", "SERIF75", "SERIF100",
  "SCREENWIDTH", "SCREENHEIGHT", "SHOWFPS", "LASTPOS", "INKEY", "INKEYS",
  "INPUT_", "PRINT", "SPC", "SINKEY", "SINKEYS", "INPUT_NOQUESTIONMARK",
  "GET", "GETS", "GET_S", "GETS_S", "MOUSE", "CREATEVERTEX",
  "CREATETRIANGLE", "CREATESHAPE", "CREATEOBJECT", "TRANSLATE", "ROTATE",
  "SCALE", "RENDERFRAME", "DELETEOBJECT", "SOLID", "WIREFRAME",
  "FILLEDWIREFRAME", "NEG", "','", "'('", "')'", "$accept", "daric",
  "lines", "line", "embed_lines", "statements", "statement", "number",
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
     495,   496,    44,    40,    41
};
#endif

#define YYPACT_NINF (-588)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-39)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3833,  6043,  -194,  -162,  -159,     0,  -118,  -116,   -73,   -52,
     -51,   -47,   -35,   -15,  -588,   208,   274,  2506,  3595,  3595,
    3595,  3595,  2506,    33,   228,   233,  2506,    37,  2506,  2506,
     130,  -588,   312,   390,   159,   236,  -588,  -588,  -588,  -588,
     450,   450,   353,  -588,  3595,  3595,  -588,  2743,  3595,  3595,
    2956,  3169,  3595,  -588,  3382,  3595,  3595,  3595,  -588,     2,
      12,   414,  2266,  -588,  -588,   251,   254,   259,  3595,  3595,
    3595,  -588,  3595,   270,  -588,  3833,   255,   276,  -588,  -588,
     433,   287,   277,  -588,    72,  -588,  -588,  -588,   297,   298,
    3595,  3595,  1776,  -588,  -588,  3595,   142,   130,   130,   130,
    2506,  2506,  2506,  2506,  -588,    83,    84,    92,  -588,  -588,
    -588,    96,     3,   115,   121,   122,   302,  3595,  3595,   129,
     133,   134,  3595,  3595,   163,   165,  -588,  -588,   171,   188,
     189,   191,   199,   201,   202,   205,   211,   212,   223,   224,
     226,   235,   240,   243,   244,  -588,  -588,  -588,   250,   257,
     260,   265,   266,   275,   279,    -1,   280,  -588,  -588,  3595,
    -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,   300,  -588,
     301,   450,  3595,  -588,  -588,  -588,  -588,  -588,  -588,  -588,
    -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,
    -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,
    -588,  -588,  -588,   303,   304,  -588,  -588,   325,  3595,  -588,
    -588,  -588,  3595,  -588,  1771,  -588,  -588,  -588,  -588,   624,
    -588,    13,  1771,   608,  1771, 10728,   290,    19,    61,   315,
     506,  -588,  -588,  5862,  3833,  2506,   461,   252,  -588,  -588,
    -588,   256,  -588,   305,   308,   310,   313,   278,  -588,   478,
    -588,   314,   312,  -588,   521,   316,   624,   386,  -588,  -588,
    -588,   307,  -588,  2020,  2738,  3595,  4925,  5156,  5387,  3595,
    5618,  3595,  3595,  5779,  5960,  3595,  6141,  6322,  6503,  6684,
    3595,  3595,    38,  -588,   318,  -588,  -588,  -588,  -588,   333,
    -588,  1771,   624,  2266,  -588,   335,   336,   337,  6865,  7046,
    7227,  1771,  -588,  -588,  -588,  7491,  3595,  3595,  3595,  3595,
    3595,  3595,  3595,  3595,   450,  2506,   531,   390,  -588,  -588,
      34,    85,   563,   540,  1094,   130,  -588,   349,   348,  -588,
     352,   351,   358,   363,   364,   367,   370,   373,   590,   610,
     611,  3595,  3595,  2506,  2506,  2506,  -588,  -588,  -588,  -588,
    1771,  1771,   450,   450,   450,  1771,  1771,   526,  3595,  3595,
    3595,  3595,  3595,  3595,  3595,  3595,  3595,  3595,  3595,  3595,
    3595,  3595,  3595,  3595,  3595,   450,   450,  3595,   450,   450,
     450,   450,   450,   378,  3595,  3595,  -588,  3595,  3595,   624,
    7408,  3595,  3595,   380,  8758,  1218,  3595,  3595,  3595,  3595,
    3595,  3595,  3595,  3595,  3595,  3595,  3595,  3595,  3595,  3595,
    3595,  3595,  3595,  3595,   450,   450,   450,   450,   450,   450,
     450,  3595,  3595,  3595,   604,  3595,   623,  3595,   637,   638,
      98,    99,   559,  3833,  6224,  -588,    63,  3833,   573,  -588,
    3833,  2506,   130,  3595,  3595,  3595,  3595,   312,  2025,  -588,
     562,  3595,   353,   353,  3595,  3595,  8771,  3595,  3595,  3595,
    8796,  3595,  8826,  8864,  3595,  3595,  8899,  3595,  3595,  3595,
    3595,  1522,  1583,   130,  -588,   130,  3595,  -588,   652,  3595,
    3595,  3595,  3595,  3595,  -588,  1771,  1771,  1771,  1771,  1771,
    1771,  1771,  1771,   624,  -588,  2506,  -588,  3595,  -588,  3595,
    -588,   593,  3595,  -588,   530,  -588,   142,   642,   130,   643,
     644,   645,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  3840,
     422,   424,   425,   131,   157,   175,   427,   429,   430,  7585,
    7651,  7709,  7722,  7744,  7757,  7779,  7814,  7849,  7884,  7905,
    7944,  7979,  8008,  8038,  8051,  8073,   185,   194,  8109,   465,
     480,   500,   574,   209,  3595,  8144,  8927,  8957,  8992,  3595,
    8179,  8201,   664,  3595,  -588,    42,   101,   101,   101,   101,
    -588,  -588,   101,   101,    59,    59,    42,    42,    42,    42,
    2071,  1326,  1326,   646,   646,   646,   646,   646,   646,  -588,
    8214,  1771,   736,   591, 10597,   434, 10632,   436,   440,  3595,
     682,  3595,   683,   681,   -57,  3833,   625,  7491,  -588,  2506,
     620,  -588,  -588,   898,   920,  1054,  9027,  -588,   669,   130,
     676,   601,  8236,  -588,  -588,  9051,  9064,  3595,  1771,  9091,
    1771,  3595,  9119,  3595,  3595,  9155,  9190,  3595,  9218,  9247,
    9289,  9317,  -588,  -588,  -588,  -588,  8273,   455,  8308,  8338,
    9342,  9355,  1771,  -588,  8366,  8379,   456,  8401,  -588,  -588,
    -588,  -588,  3833,  -588,  3833,  3833,  3833,   530,  -588,  -588,
    -588,  -588,  -588,  -588,   457,   458,   459,  -588,  -588,  -588,
    -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,
    -588,  -588,  -588,  -588,  -588,  -588,  -588,   450,  3595,  3595,
    3595,  -588,  8441,  -588,   450,  3595,  3595,  1771,  -588,  -588,
    -588,  9380,   152,  2506,   591,   125,  3595,   460,  3595,   462,
     464, 10667,   466, 10702,   467,   468,   686,  -588,   -16,  7491,
    -588,  -588,  -588,  3595,  -588,  3595,  -588,  3595,  -588,   704,
     647,  -588,   562,  -588,   707,  3595,  3595,  1771,  3595,  9393,
    3595,  9416,  9486,  3595,  3595,  9521,  3595,  3595,  3595,  3595,
    -588,   706,   476,   481,  3595,  3595,  -588,  -588,   450,  -588,
     123,   675,   677,   680,   483,   489,   491,    71,  8471,  9540,
    8506,  -588,   241,  9577,  8534,  3595,  7491,  -588,  -588,  7491,
    4064,  6405,  4295,  6586,  6767,  3595,   490,  3595,   493,   499,
    3833,   725,  -588,  -588,  8574,  8601,  8630,   501,   505,  -588,
    1771,  1771,  9613,  3595,  9648,  3595,  3595,  9668,  9683,  3595,
    1771,  9708,  9721,  9774,  -588,  3595,  3595,  9814,  9849,   273,
     699,  -588,  -588,  -588,  -588,   170,   170,   170,  3595,  -588,
    -588,  3595,  -588,  -588,  3595,  -588,  9868,   731,   732,  3833,
    3595,   689,  3833,   695,  3833,  3595,   696,  3833,   697,  3833,
     698,  4526,  6948,  4757,  7129,  7310,   687,  3833,  -588,  -588,
    -588,  -588,   450,  3595,  9905,  3595,  9941,  9976,  3595,  3595,
    1771,   450,   450,   450,  9996, 10011,  3595,  3595,  -588,  -588,
     160,   513,   516,   519,  8667,  8702,  8731,  3595,  -588,   708,
     703,  4988,  -588,   709,  -588,   710,  5219,  -588,   711,  -588,
     712,  -588,  3833,  3595,   713,  3833,   716,  3833,  3595,   717,
    3833,   719,  3833,   722,  -588,   705,   306,  1771,  3595,  1771,
    3595,  3595, 10036,  1771,   624,   624,   624,  3595,  3595,  1771,
    1771,  -588,  -588,  -588,  -588,  -588,  -588, 10049,  -588,  -588,
    3833,   723,  -588,  -588,  3833,   726,  -588,  -588,   727,  5450,
    -588,   729,  -588,   734,  5681,  -588,   735,  -588,   737,  -588,
    -588,  -588,  1771, 10102, 10142,  3595, 10177, 10196,  3595,   738,
    -588,   740,  -588,  -588,  3833,   741,  -588,  -588,  3833,   742,
    -588,  -588,  3595,  3595, 10233,  3595,  3595, 10269,  -588,  -588,
     745,  -588,   750,  -588, 10304, 10324,  3595, 10339, 10364,  3595,
    -588,  -588,  3595,  3595,  1771,  3595,  3595, 10377,  1771, 10430,
    1771,  1771,  3595,  3595, 10470, 10505,  3595,  3595, 10524, 10561,
    3595,  3595,  1771,  1771
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   250,   255,   262,   284,     0,     0,     0,     0,
      21,     0,     0,     0,     9,     0,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   314,
       0,    28,     0,     0,     0,     0,    20,    31,    32,    33,
       0,     0,     0,   106,     0,     0,   115,   113,     0,     0,
       0,     0,     0,   126,     0,     0,     0,     0,   130,     0,
       0,     0,    97,    51,    52,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     2,     3,     0,    12,   260,   261,
       0,     0,     0,    16,   321,   323,    14,    15,     0,     0,
       0,     0,     0,   253,   258,     0,   345,   350,   350,   350,
     314,   314,   314,   314,     7,     0,     0,     0,   131,   133,
     290,   262,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,   226,   227,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   229,   170,   169,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   171,   304,     0,
     178,   179,   180,   181,   182,   183,   184,   185,     0,   174,
       0,     0,     0,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     189,   190,   186,     0,     0,   167,   302,     0,     0,   172,
     173,   175,     0,   135,   312,   136,   137,   292,   291,   313,
      30,     0,    37,     0,    39,     0,     0,     0,     0,     0,
       0,    43,    44,     0,     0,     0,     0,   315,    26,   266,
     267,   268,    27,     0,     0,     0,     0,   282,    34,     0,
     325,   262,     0,   324,     0,     0,    42,    17,   270,   271,
     272,   273,    19,   107,   109,   114,     0,     0,     0,     0,
       0,     0,   174,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   342,   343,    45,   339,   336,   337,     0,
     335,   334,   333,   340,    98,     0,     0,     0,     0,     0,
       0,   105,     1,     4,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     6,
       0,     0,     0,     0,     0,     0,   346,   348,     0,   351,
     352,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   314,   314,   314,   132,   134,   141,   142,
     221,   220,     0,     0,     0,   166,   300,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   230,     0,     0,   191,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    12,    10,     0,    62,
       0,   314,     0,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,     0,     0,   341,     0,     0,
       0,     0,     0,     0,    13,   317,   326,   327,   328,   329,
     330,   331,   332,   318,   319,     0,   322,     0,   251,     0,
     256,     0,     0,   263,   285,   347,   345,     0,   350,     0,
       0,     0,    22,    23,    24,    25,    64,    65,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   147,   152,   155,   154,   153,
     150,   151,   156,   157,   143,   144,   145,   146,   148,   149,
     158,   159,   160,   294,   297,   296,   295,   298,   299,   293,
       0,    36,   152,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,    11,     0,
       0,   316,   269,     0,     0,     0,     0,   283,     0,     0,
       0,     0,     0,    18,   274,     0,     0,     0,   111,     0,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    50,    47,   344,     0,     0,     0,     0,
       0,     0,   104,   320,     0,     0,     0,     0,   254,   259,
     265,   349,     0,   353,     0,     0,     0,     0,   161,   162,
     301,   222,   224,   223,     0,     0,     0,   228,   139,   140,
     240,   231,   232,   233,   234,   235,   236,   237,   238,   241,
     239,   242,   243,   244,   249,   245,   308,     0,     0,     0,
       0,   246,     0,   305,     0,     0,     0,   192,   168,   303,
     176,     0,     0,   314,   355,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
      54,    61,    63,     0,   275,     0,   277,     0,   279,     0,
       0,   287,   288,   286,     0,     0,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     338,     0,     0,     0,     0,     0,   252,   257,     0,   264,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   306,     0,     0,     0,     0,     0,   356,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    58,     0,     0,     0,     0,     0,   289,
     108,   110,     0,     0,     0,     0,     0,     0,     0,     0,
     116,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,   357,   359,   361,   360,     0,     0,     0,     0,   247,
     309,     0,   311,   307,     0,   188,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   276,   278,
     280,   281,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,     0,    40,   358,
       0,     0,     0,     0,     0,     0,     0,     0,   354,     0,
       0,     0,    81,     0,    71,     0,     0,    82,     0,    70,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,     0,     0,   118,     0,   119,
       0,     0,     0,   125,   127,   128,   129,     0,     0,   102,
     103,   164,   163,   165,   248,   310,   187,     0,    96,    79,
       0,     0,    68,    80,     0,     0,    67,    69,     0,     0,
      89,     0,    77,     0,     0,    90,     0,    76,     0,    78,
      60,    41,   120,     0,     0,     0,     0,     0,     0,     0,
      85,     0,    86,    87,     0,     0,    74,    88,     0,     0,
      73,    75,     0,     0,     0,     0,     0,     0,    83,    84,
       0,    93,     0,    94,     0,     0,     0,     0,     0,     0,
      91,    92,     0,     0,   121,     0,     0,     0,   122,     0,
     100,   101,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   177,   123
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -588,  -588,   753,    78,   617,   237,  -211,  -587,   -18,   528,
     791,    46,  1245,    -7,   339,  -588,  -276,  -588,  -224,  -588,
    -588,  -588,    41,  -588,   800,   -13,   -84,  -588,    -9,  -588,
    -588,   492,  -588,  -196,  -588,   296,  -588,   -93,  -588,    95,
    -588
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    73,    74,   437,   438,    76,    77,   213,   214,   215,
     216,    80,    81,   283,   242,   261,   262,   247,   248,    82,
      83,   620,   621,   218,   219,   237,   238,    84,    85,    86,
     293,   294,   284,   285,   327,   328,   330,   331,   714,   715,
      87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     222,   223,   224,   225,   220,   332,   333,    93,    94,   226,
      93,    94,   726,   233,   727,   236,   334,   335,   336,   337,
      93,    94,   436,   241,   250,   253,   263,   264,   449,   266,
     267,   268,   270,   273,   274,   383,   276,   277,   278,   279,
     227,   228,   229,   425,   291,     2,     3,   111,   112,    90,
     298,   299,   300,   801,   301,   802,   234,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     401,   402,   320,   321,   323,   316,   239,   324,    75,   249,
     249,    91,   396,   305,    92,   427,   474,   401,   402,   326,
     329,   329,   329,   407,   408,   414,   415,   416,   417,   350,
     351,   418,   419,   420,   355,   356,   426,   239,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   235,   599,   601,   396,    96,   830,    97,   239,   401,
     402,   230,   607,   405,   406,   407,   408,     2,     3,   111,
     112,   386,   239,   239,   239,   239,   409,   410,   428,     2,
       3,   111,   112,    75,   390,   414,   415,   416,   417,   658,
     659,   418,   419,   420,   346,   347,     2,     3,   251,     5,
      98,   409,   410,   831,   108,   109,   623,   624,   411,   412,
     413,   414,   415,   416,   417,   600,   602,   418,   419,   420,
     394,    99,   100,   325,   395,   788,   101,   409,   410,   414,
     415,   416,   417,   890,   789,   418,   419,   420,   102,   414,
     415,   416,   417,   409,   410,   418,   419,   420,   414,   415,
     416,   417,   439,   617,   418,   419,   420,   104,   103,   411,
     412,   413,   231,   414,   415,   416,   417,   232,    89,   418,
     419,   420,   384,    95,   254,   280,   342,   456,   891,   892,
     893,   460,   252,   462,   463,   281,   421,   466,   295,   520,
     521,   522,   471,   472,   296,   414,   415,   416,   417,   297,
     302,   418,   419,   420,   304,   291,   497,   644,   498,   645,
     473,   105,   106,   107,     2,     3,   111,   112,   485,   486,
     487,   488,   489,   490,   491,   492,   305,   414,   415,   416,
     417,   315,   494,   418,   419,   420,   346,   347,   496,     2,
       3,   314,   221,   838,   317,   839,   318,   319,   505,   243,
     244,   245,   246,   323,   519,   338,   339,   499,   239,   500,
     414,   415,   416,   417,   340,   393,   418,   419,   420,   341,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   611,   343,   548,
     258,   259,   260,   249,   344,   345,   555,   556,   424,   557,
     558,   239,   352,   560,   561,   671,   353,   354,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   730,     2,     3,   111,
       5,   672,   429,   590,   591,   592,   357,   594,   358,   596,
     414,   415,   416,   417,   359,   663,   418,   419,   420,   673,
     282,     2,     3,   111,   112,   613,   614,   615,   616,   694,
     323,   360,   361,   622,   362,   241,   625,   626,   695,   628,
     629,   630,   363,   632,   364,   365,   635,   636,   366,   638,
     639,   640,   641,   701,   367,   368,   110,   306,   646,   111,
     255,   648,   649,   650,   651,   652,   369,   370,   115,   371,
     435,   307,   308,   309,   310,   311,   312,   313,   372,   654,
     440,   655,   653,   373,   657,   843,   374,   375,   239,   414,
     415,   416,   417,   376,   441,   418,   419,   420,   442,   326,
     377,   329,   306,   378,   414,   415,   416,   417,   379,   380,
     418,   419,   420,   430,   431,   432,   123,   888,   381,   239,
     447,   239,   382,   385,   414,   415,   416,   417,    78,    78,
     418,   419,   420,   526,   527,   528,   702,   658,   659,   660,
     450,   707,   484,   387,   388,   711,   391,   392,   443,   453,
     971,   444,   239,   445,   239,   495,   446,   448,    78,   451,
     475,    78,    78,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   476,   478,   848,   479,
     480,   721,   149,   723,   151,   152,   153,   501,   155,    78,
     156,   506,   507,   158,   508,   509,   731,   516,   414,   415,
     416,   417,   510,    78,   418,   419,   420,   511,   512,   747,
      78,   513,   741,   749,   514,   751,   752,   515,   517,   755,
     518,   554,   562,   593,    78,    78,    78,    78,   452,   786,
     595,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   348,   597,   603,   598,   414,   415,
     416,   417,   409,   410,   418,   419,   420,   609,   619,   647,
     656,   662,   664,   665,   666,   239,   668,   204,   669,   670,
     674,   606,   675,   676,   710,   206,   713,   717,   420,   719,
     778,   779,   780,   720,   411,   412,   413,   783,   784,   722,
     725,   724,   732,   740,   729,   742,   743,   761,   790,   768,
     792,   774,   775,   776,   791,   800,   793,   697,   794,   796,
     798,   799,   807,   824,   808,   804,   660,   805,   825,   806,
     409,   410,   698,   826,   832,   835,   833,   810,   811,   834,
     812,   836,   814,   837,   862,   817,   818,   864,   820,   821,
     822,   823,   699,   865,   867,   871,   827,   828,   872,   889,
     898,   899,   411,   412,   413,   -38,   -38,   941,   924,   396,
     942,    78,    78,   943,   401,   402,   902,   846,   405,   406,
     407,   408,   904,   907,   909,   911,   970,   861,   948,   863,
     949,   612,   502,   809,   503,   477,   952,   953,   956,   957,
     960,    79,    79,   962,   965,   874,   967,   876,   877,   969,
     980,   880,   661,   982,   983,   -38,   986,   884,   885,   787,
      78,   987,   990,   -38,   991,   998,   700,   999,  1001,  1003,
     894,    79,  1010,   895,    79,    79,   896,  1011,   303,     0,
       0,     0,   901,    78,     0,     0,     0,   906,     0,     0,
     256,   257,     0,     0,     0,    78,     0,     0,   409,   410,
     422,     0,    79,    78,     0,   927,     0,   929,     0,     0,
     932,   933,   292,     0,     0,     0,    79,     0,   939,   940,
       0,     0,     0,    79,     0,     0,     0,     0,     0,   947,
       0,     0,     0,     0,     0,     0,     0,    79,    79,    79,
      79,     0,     0,     0,     0,   959,     0,     0,     0,     0,
     964,     0,     0,     0,     0,     0,     0,   349,     0,     0,
     972,     0,   973,   974,     0,     0,     0,     0,     0,   976,
     977,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,     0,   994,     0,     0,
     997,    78,    78,     0,     0,    78,   803,     0,    78,     0,
      78,   389,     0,     0,  1004,  1005,     0,  1007,  1008,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1014,     0,
       0,  1017,     0,     0,  1018,  1019,     0,  1020,  1021,     0,
       0,    78,     0,    78,  1024,  1025,     0,     0,  1028,  1029,
     409,   410,  1032,  1033,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   847,    79,    79,     0,   851,   853,   856,
     858,   860,   409,   410,    78,     0,    78,     0,     0,     0,
       0,     0,   411,   412,   413,     0,     0,     0,     0,     0,
     604,     0,     0,     0,   608,     0,     0,   610,     0,     0,
       0,     0,     0,     0,   411,   412,   413,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,     0,   292,     0,     0,    79,     0,   914,   916,
     919,   921,   923,     0,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,   493,     0,    79,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,     0,    78,     0,    78,     0,     0,   951,     0,
     733,     0,   734,   955,     0,     0,     0,    78,     0,     0,
       0,     0,   523,   524,   525,     0,     0,     0,     0,     0,
       0,     0,   735,     0,   736,     0,   409,   410,     0,     0,
       0,     0,     0,     0,     0,   546,   547,     0,   549,   550,
     551,   552,   553,     0,     0,     0,     0,     0,     0,     0,
      78,     0,    78,    78,    78,     0,   985,     0,   411,   412,
     413,   989,     0,     0,     0,     0,   409,   410,     0,     0,
       0,     0,     0,     0,   583,   584,   585,   586,   587,   588,
     589,     0,   728,     0,    79,    79,     0,     0,    79,     0,
       0,    79,     0,    79,     0,     0,     0,     0,   411,   412,
     413,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,     0,     0,     0,    78,     0,     0,
       0,     0,   217,     0,    79,     0,    79,   217,     0,     0,
       0,   217,     0,   217,   217,   240,     0,     0,     0,   770,
       0,   771,   772,   773,     0,   217,   217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   737,    79,   738,    79,
       0,     0,     0,     0,     0,     0,   240,   217,     0,     0,
       0,     0,     0,     0,    78,     0,     0,    78,    78,    78,
      78,    78,    78,     0,     0,     0,     0,   240,    78,     0,
     409,   410,     0,     0,     0,     0,     0,     0,   504,     0,
       0,   240,   240,   240,   240,   217,   217,   217,   217,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   411,   412,   413,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
      78,     0,    78,     0,     0,    78,     0,    78,     0,    78,
      78,    78,    78,    78,     0,    78,    79,     0,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,   217,   866,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,    78,     0,     0,     0,   409,   410,
      78,     0,     0,    78,     0,    78,     0,     0,    78,     0,
      78,     0,     0,    79,     0,    79,    79,    79,     0,     0,
       0,     0,   564,     0,     0,     0,   900,     0,     0,   903,
     411,   905,     0,     0,   908,     0,   910,     0,    78,     0,
     217,     0,    78,     0,   925,     0,     0,    78,     0,     0,
       0,     0,    78,     0,     0,     0,     0,   777,     0,     0,
       0,     0,     0,     0,   782,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,    78,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,   240,     0,   958,
       0,     0,   961,     0,   963,     0,     0,   966,   217,   968,
       0,     0,     0,     0,     0,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,     0,   217,
     217,     0,     0,     0,     0,     0,     0,   979,   829,     0,
     240,   981,     0,     0,     0,     0,     0,    79,     0,     0,
      79,    79,    79,    79,    79,    79,     0,     0,   217,   217,
     217,    79,     0,     0,     0,     0,     0,   217,   217,   217,
       0,  1000,     0,     0,     0,  1002,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,     0,
     217,   217,     0,   217,   217,   217,   217,   217,     0,     0,
       0,     0,     0,     0,   409,   410,     0,     0,     0,     0,
      79,     0,     0,    79,     0,    79,     0,     0,    79,     0,
      79,     0,    79,    79,    79,    79,    79,     0,    79,   217,
     217,   217,   217,   217,   217,   217,   411,   412,   413,     0,
       0,     0,   926,     0,     0,     0,     0,     0,     0,     0,
       0,   934,   935,   936,     0,     0,   217,   240,     0,     0,
       0,     0,    79,     0,     0,   409,   410,    79,     0,     0,
       0,     0,     0,    79,     0,     0,    79,     0,    79,     0,
       0,    79,     0,    79,     0,     0,     0,     0,   240,     0,
     240,     0,     0,     0,     0,     0,     0,   411,   412,   413,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     217,    79,     0,     0,     0,    79,     0,     0,     0,     0,
      79,   240,     0,   240,     0,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   642,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,    79,
     108,   109,     0,     2,     3,     0,   221,     0,     0,     0,
       0,     0,   113,   114,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,     0,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   643,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   240,     0,     0,     0,     0,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,   409,   410,   128,   129,   130,     0,     0,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,   150,
       0,     0,     0,   154,     0,   411,   412,   413,   157,     0,
       0,     0,     0,   159,     0,     0,   160,   161,   162,   163,
     164,   165,   166,   167,     0,     0,   168,     0,     0,     0,
       0,     0,   217,   169,     0,     0,   170,     0,     0,   217,
       0,     0,     0,     0,     0,     0,     0,     0,   217,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
       0,   202,   203,     0,     0,     0,     0,     0,     0,     0,
     205,     0,     0,     0,     0,     0,     0,   207,   208,     0,
       0,     0,     0,   217,   209,   210,   211,     0,     0,   212,
     322,     0,     0,     0,     0,     0,     0,     0,     0,   108,
     109,     0,     2,     3,     0,   221,     0,     0,     0,     0,
       0,   113,   114,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,     0,     0,   116,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
       0,     0,     0,     0,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   217,   124,     0,
       0,     0,     0,     0,     0,     0,   217,   217,   217,   125,
     126,   127,   409,   410,   128,   129,   130,     0,     0,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,   150,     0,
       0,     0,   154,     0,   411,   412,   413,   157,     0,     0,
       0,     0,   159,     0,     0,   160,   161,   162,   163,   164,
     165,   166,   167,   409,   410,   168,     0,     0,     0,     0,
       0,     0,   169,     0,     0,   170,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,     0,
     202,   203,     0,     0,     0,     0,     0,     0,     0,   205,
       0,     0,     0,     0,     0,     0,   207,   208,     0,     0,
       0,     0,   454,   209,   210,   211,     0,     0,   212,   618,
     108,   109,   110,     2,     3,   111,   112,     0,     0,     0,
       0,     0,   113,   114,   115,     0,     0,   286,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,   287,   288,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,     0,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,     0,     0,   128,   129,   130,     0,     0,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,     0,   156,     0,   157,   158,
       0,     0,     0,   159,     0,     0,   160,   161,   162,   163,
     164,   165,   166,   167,     0,     0,   168,     0,     0,     0,
       0,     0,     0,   169,     0,     0,   170,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
       0,   202,   203,   204,     0,     0,   289,     0,     0,     0,
     205,   206,     0,     0,     0,     0,     0,   207,   208,     0,
       0,     0,     0,     0,   209,   210,   211,     0,   290,   212,
     108,   109,   110,     2,     3,   111,   112,     0,     0,     0,
       0,     0,   113,   114,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,     0,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,     0,     0,   128,   129,   130,     0,     0,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,     0,   156,     0,   157,   158,
       0,     0,     0,   159,     0,     0,   160,   161,   162,   163,
     164,   165,   166,   167,     0,     0,   168,     0,     0,     0,
       0,     0,     0,   169,     0,     0,   170,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
       0,   202,   203,   204,     0,     0,     0,     0,     0,     0,
     205,   206,     0,     0,     0,     0,     0,   207,   208,     0,
       0,     0,     0,     0,   209,   210,   211,   108,   109,   212,
       2,     3,     0,   221,     0,     0,     0,     0,     0,   113,
     114,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,     0,     0,   116,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   125,   126,   127,
     409,   410,   128,   129,   130,     0,     0,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,   150,     0,     0,     0,
     154,     0,   411,   412,   413,   157,     0,     0,     0,     0,
     159,     0,     0,   160,   161,   162,   163,   164,   165,   166,
     167,     0,     0,   168,     0,     0,     0,     0,   265,     0,
     169,     0,     0,   170,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,     0,   202,   203,
     108,   109,     0,     2,     3,     0,   221,   205,     0,     0,
       0,     0,   113,   114,   207,   208,     0,     0,     0,     0,
     455,   209,   210,   211,     0,     0,   212,     0,     0,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,     0,     0,   128,   129,   130,     0,     0,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,   150,
       0,     0,     0,   154,     0,     0,     0,     0,   157,     0,
       0,     0,     0,   159,     0,     0,   160,   161,   162,   163,
     164,   165,   166,   167,     0,     0,   168,     0,     0,     0,
       0,     0,   269,   169,     0,     0,   170,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
       0,   202,   203,   108,   109,     0,     2,     3,     0,   221,
     205,     0,     0,     0,     0,   113,   114,   207,   208,     0,
       0,     0,     0,     0,   209,   210,   211,     0,     0,   212,
       0,     0,   116,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,   120,   121,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   127,     0,     0,   128,   129,
     130,     0,     0,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,   150,     0,     0,     0,   154,     0,     0,     0,
       0,   157,     0,     0,     0,     0,   159,     0,     0,   160,
     161,   162,   163,   164,   165,   166,   167,     0,     0,   168,
       0,     0,     0,     0,     0,   271,   272,     0,     0,   170,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,     0,   202,   203,   108,   109,     0,     2,
       3,     0,   221,   205,     0,     0,     0,     0,   113,   114,
     207,   208,     0,     0,     0,     0,     0,   209,   210,   211,
       0,     0,   212,     0,     0,   116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,   126,   127,     0,
       0,   128,   129,   130,     0,     0,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,   150,     0,     0,     0,   154,
       0,     0,     0,     0,   157,     0,     0,     0,     0,   159,
       0,     0,   160,   161,   162,   163,   164,   165,   166,   167,
       0,     0,   168,     0,     0,     0,     0,     0,   275,   169,
       0,     0,   170,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,     0,   202,   203,   108,
     109,     0,     2,     3,     0,   221,   205,     0,     0,     0,
       0,   113,   114,   207,   208,     0,     0,     0,     0,     0,
     209,   210,   211,     0,     0,   212,     0,     0,   116,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
     126,   127,     0,     0,   128,   129,   130,     0,     0,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,   150,     0,
       0,     0,   154,     0,     0,     0,     0,   157,     0,     0,
       0,     0,   159,     0,     0,   160,   161,   162,   163,   164,
     165,   166,   167,     0,     0,   168,     0,     0,     0,     0,
       0,     0,   169,     0,     0,   170,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,     0,
     202,   203,     0,     0,     0,     0,     0,     0,     0,   205,
       0,     0,     0,     0,     0,     0,   207,   208,     0,     0,
       0,     0,     0,   209,   210,   211,     1,     0,   212,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,     0,     0,    16,     0,
       0,     0,     0,     0,    17,     0,     0,     0,     0,     0,
      18,    19,    20,     0,     0,     0,     0,    21,     0,     0,
       0,    22,     0,     0,     0,     0,    23,    24,    25,    26,
       0,     0,     0,    27,     0,     0,     0,     0,     0,    28,
       0,     0,    29,    30,    31,     0,    32,     0,     0,     0,
      33,    34,    35,    36,    37,    38,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   409,   410,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,     0,     0,     0,     0,     0,
       0,    41,    42,     0,   411,   412,   413,     0,     0,     0,
       0,    43,     0,    44,    45,     0,    46,    47,     0,     0,
       0,    48,    49,     0,    50,     0,    51,     0,     0,    52,
      53,    54,     0,    55,    56,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,    59,
      60,    61,    62,     0,     0,     0,     0,    63,    64,     0,
       0,    65,    66,    67,     0,     0,    68,    69,    70,    71,
      72,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   849,   667,     0,     0,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,    18,    19,    20,     0,     0,     0,     0,    21,     0,
       0,     0,    22,     0,     0,     0,     0,    23,    24,    25,
      26,     0,     0,     0,    27,   850,     0,     0,     0,     0,
      28,     0,     0,    29,    30,    31,     0,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,   409,   410,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,   411,   412,
     413,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,     0,    46,    47,     0,
       0,     0,    48,    49,     0,    50,     0,    51,     0,     0,
      52,    53,    54,     0,    55,    56,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
      59,    60,    61,    62,     0,     0,     0,     0,    63,    64,
       0,     0,    65,    66,    67,     0,     0,    68,    69,    70,
      71,    72,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   854,     0,     0,     0,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,     0,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,    18,    19,    20,     0,     0,     0,     0,    21,
       0,     0,     0,    22,     0,     0,     0,     0,    23,    24,
      25,    26,     0,     0,     0,    27,   855,     0,     0,     0,
       0,    28,     0,     0,    29,    30,    31,     0,    32,     0,
       0,     0,    33,    34,    35,    36,    37,    38,    39,     0,
       0,     0,     0,     0,     0,     0,     0,   409,   410,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    40,     0,     0,   411,
     412,   413,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,    45,     0,    46,    47,
       0,     0,     0,    48,    49,     0,    50,     0,    51,     0,
       0,    52,    53,    54,     0,    55,    56,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,    59,    60,    61,    62,     0,     0,     0,     0,    63,
      64,     0,     0,    65,    66,    67,     0,     0,    68,    69,
      70,    71,    72,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   912,     0,     0,     0,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,    18,    19,    20,     0,     0,     0,     0,
      21,     0,     0,     0,    22,     0,     0,     0,     0,    23,
      24,    25,    26,     0,     0,     0,    27,   913,     0,     0,
       0,     0,    28,     0,     0,    29,    30,    31,     0,    32,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,   409,   410,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,     0,     0,
     411,   412,   413,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,    45,     0,    46,
      47,     0,     0,     0,    48,    49,     0,    50,     0,    51,
       0,     0,    52,    53,    54,     0,    55,    56,    57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,     0,    59,    60,    61,    62,     0,     0,     0,     0,
      63,    64,     0,     0,    65,    66,    67,     0,     0,    68,
      69,    70,    71,    72,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   917,     0,     0,     0,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,    18,    19,    20,     0,     0,     0,
       0,    21,     0,     0,     0,    22,     0,     0,     0,     0,
      23,    24,    25,    26,     0,     0,     0,    27,   918,     0,
       0,     0,     0,    28,     0,     0,    29,    30,    31,     0,
      32,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,     0,     0,     0,     0,     0,     0,     0,     0,   409,
     410,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,     0,
       0,   411,   412,   413,     0,    41,    42,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,     0,
      46,    47,     0,     0,     0,    48,    49,     0,    50,     0,
      51,     0,     0,    52,    53,    54,     0,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,    59,    60,    61,    62,     0,     0,     0,
       0,    63,    64,     0,     0,    65,    66,    67,     0,     0,
      68,    69,    70,    71,    72,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   950,     0,     0,
       0,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,     0,   409,   410,    17,
       0,     0,     0,     0,     0,    18,    19,    20,     0,     0,
       0,     0,    21,     0,     0,     0,    22,     0,     0,     0,
       0,    23,    24,    25,    26,     0,     0,     0,    27,   411,
     412,   413,     0,     0,    28,     0,     0,    29,    30,    31,
       0,    32,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,     0,     0,     0,     0,     0,     0,     0,     0,
     409,   410,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
       0,     0,   411,   412,   413,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
       0,    46,    47,     0,     0,     0,    48,    49,     0,    50,
       0,    51,     0,     0,    52,    53,    54,   457,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,     0,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,    59,    60,    61,    62,     0,     0,
       0,     0,    63,    64,     0,     0,    65,    66,    67,     0,
       0,    68,    69,    70,    71,    72,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   954,     0,
       0,     0,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,     0,     0,     0,   409,   410,
      17,     0,     0,     0,     0,     0,    18,    19,    20,     0,
       0,     0,     0,    21,     0,     0,     0,    22,     0,     0,
       0,     0,    23,    24,    25,    26,     0,     0,     0,    27,
     411,   412,   413,     0,     0,    28,     0,     0,    29,    30,
      31,     0,    32,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,   409,   410,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,     0,     0,   411,   412,   413,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,     0,    46,    47,     0,     0,     0,    48,    49,     0,
      50,     0,    51,     0,     0,    52,    53,    54,   458,    55,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,    59,    60,    61,    62,     0,
       0,     0,     0,    63,    64,     0,     0,    65,    66,    67,
       0,     0,    68,    69,    70,    71,    72,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   984,
       0,     0,     0,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,     0,     0,     0,   409,
     410,    17,     0,     0,     0,     0,     0,    18,    19,    20,
       0,     0,     0,     0,    21,     0,     0,     0,    22,     0,
       0,     0,     0,    23,    24,    25,    26,     0,     0,     0,
      27,   411,   412,   413,     0,     0,    28,     0,     0,    29,
      30,    31,     0,    32,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,   409,   410,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,     0,     0,   411,   412,   413,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,    45,     0,    46,    47,     0,     0,     0,    48,    49,
       0,    50,     0,    51,     0,     0,    52,    53,    54,   459,
      55,    56,    57,     0,     0,     0,     0,     0,     0,     0,
       0,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,     0,    59,    60,    61,    62,
       0,     0,     0,     0,    63,    64,     0,     0,    65,    66,
      67,     0,     0,    68,    69,    70,    71,    72,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     988,     0,     0,     0,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,     0,     0,     0,
     409,   410,    17,     0,     0,     0,     0,     0,    18,    19,
      20,     0,     0,     0,     0,    21,     0,     0,     0,    22,
       0,     0,     0,     0,    23,    24,    25,    26,     0,     0,
       0,    27,   411,   412,   413,     0,     0,    28,     0,     0,
      29,    30,    31,     0,    32,     0,     0,     0,    33,    34,
      35,    36,    37,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,   409,   410,     0,     0,     0,     0,     0,
       0,     0,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,     0,     0,     0,     0,     0,
       0,     0,    40,     0,     0,   411,   412,   413,     0,    41,
      42,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,     0,    46,    47,     0,     0,     0,    48,
      49,     0,    50,     0,    51,     0,     0,    52,    53,    54,
     461,    55,    56,    57,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   433,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   409,   410,     0,     0,    58,     0,    59,    60,    61,
      62,     0,     0,     0,     0,    63,    64,    16,     0,    65,
      66,    67,     0,    17,    68,    69,    70,    71,    72,    18,
      19,    20,     0,   411,   412,   413,    21,     0,     0,     0,
      22,     0,     0,     0,     0,    23,    24,    25,    26,     0,
       0,     0,    27,     0,   434,     0,     0,     0,    28,     0,
       0,    29,    30,    31,     0,    32,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,     0,     0,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,     0,
      43,   464,    44,    45,     0,    46,    47,     0,     0,     0,
      48,    49,     0,    50,     0,    51,     0,     0,    52,    53,
      54,     0,    55,    56,    57,     0,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,    88,     0,     0,     0,     0,     0,     0,
       0,     0,   409,   410,     0,     0,    58,     0,    59,    60,
      61,    62,     0,     0,     0,     0,    63,    64,    16,     0,
      65,    66,    67,     0,    17,    68,    69,    70,    71,    72,
      18,    19,    20,     0,   411,   412,   413,    21,     0,     0,
       0,    22,     0,     0,     0,     0,    23,    24,    25,    26,
       0,     0,     0,    27,     0,     0,     0,     0,     0,    28,
       0,     0,    29,    30,    31,     0,    32,     0,     0,     0,
      33,    34,    35,    36,    37,    38,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,     0,     0,
       0,     0,     0,     0,    40,     0,     0,     0,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
       0,    43,   465,    44,    45,     0,    46,    47,     0,     0,
       0,    48,    49,     0,    50,     0,    51,     0,     0,    52,
      53,    54,     0,    55,    56,    57,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   605,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   409,   410,     0,     0,    58,     0,    59,
      60,    61,    62,     0,     0,     0,     0,    63,    64,    16,
       0,    65,    66,    67,     0,    17,    68,    69,    70,    71,
      72,    18,    19,    20,     0,   411,   412,   413,    21,     0,
       0,     0,    22,     0,     0,     0,     0,    23,    24,    25,
      26,     0,     0,     0,    27,     0,     0,     0,     0,     0,
      28,     0,     0,    29,    30,    31,     0,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,    43,   467,    44,    45,     0,    46,    47,     0,
       0,     0,    48,    49,     0,    50,     0,    51,     0,     0,
      52,    53,    54,     0,    55,    56,    57,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   852,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   409,   410,     0,     0,    58,     0,
      59,    60,    61,    62,     0,     0,     0,     0,    63,    64,
      16,     0,    65,    66,    67,     0,    17,    68,    69,    70,
      71,    72,    18,    19,    20,     0,   411,   412,   413,    21,
       0,     0,     0,    22,     0,     0,     0,     0,    23,    24,
      25,    26,     0,     0,     0,    27,     0,     0,     0,     0,
       0,    28,     0,     0,    29,    30,    31,     0,    32,     0,
       0,     0,    33,    34,    35,    36,    37,    38,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,     0,
       0,     0,     0,     0,     0,     0,    40,     0,     0,     0,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,     0,    43,   468,    44,    45,     0,    46,    47,
       0,     0,     0,    48,    49,     0,    50,     0,    51,     0,
       0,    52,    53,    54,     0,    55,    56,    57,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   857,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   409,   410,     0,     0,    58,
       0,    59,    60,    61,    62,     0,     0,     0,     0,    63,
      64,    16,     0,    65,    66,    67,     0,    17,    68,    69,
      70,    71,    72,    18,    19,    20,     0,   411,   412,   413,
      21,     0,     0,     0,    22,     0,     0,     0,     0,    23,
      24,    25,    26,     0,     0,     0,    27,     0,     0,     0,
       0,     0,    28,     0,     0,    29,    30,    31,     0,    32,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,     0,    43,   469,    44,    45,     0,    46,
      47,     0,     0,     0,    48,    49,     0,    50,     0,    51,
       0,     0,    52,    53,    54,     0,    55,    56,    57,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   859,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   409,   410,     0,     0,
      58,     0,    59,    60,    61,    62,     0,     0,     0,     0,
      63,    64,    16,     0,    65,    66,    67,     0,    17,    68,
      69,    70,    71,    72,    18,    19,    20,     0,   411,   412,
     413,    21,     0,     0,     0,    22,     0,     0,     0,     0,
      23,    24,    25,    26,     0,     0,     0,    27,     0,     0,
       0,     0,     0,    28,     0,     0,    29,    30,    31,     0,
      32,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,     0,     0,     0,     0,     0,     0,     0,    40,     0,
       0,     0,     0,     0,     0,    41,    42,     0,     0,     0,
       0,     0,     0,     0,     0,    43,   470,    44,    45,     0,
      46,    47,     0,     0,     0,    48,    49,     0,    50,     0,
      51,     0,     0,    52,    53,    54,     0,    55,    56,    57,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   915,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   409,   410,     0,
       0,    58,     0,    59,    60,    61,    62,     0,     0,     0,
       0,    63,    64,    16,     0,    65,    66,    67,     0,    17,
      68,    69,    70,    71,    72,    18,    19,    20,     0,   411,
     412,   413,    21,     0,     0,     0,    22,     0,     0,     0,
       0,    23,    24,    25,    26,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     0,     0,    29,    30,    31,
       0,    32,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,     0,     0,     0,     0,     0,     0,     0,    40,
       0,     0,     0,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,     0,    43,   481,    44,    45,
       0,    46,    47,     0,     0,     0,    48,    49,     0,    50,
       0,    51,     0,     0,    52,    53,    54,     0,    55,    56,
      57,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   920,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   409,   410,
       0,     0,    58,     0,    59,    60,    61,    62,     0,     0,
       0,     0,    63,    64,    16,     0,    65,    66,    67,     0,
      17,    68,    69,    70,    71,    72,    18,    19,    20,     0,
     411,   412,   413,    21,     0,     0,     0,    22,     0,     0,
       0,     0,    23,    24,    25,    26,     0,     0,     0,    27,
       0,     0,     0,     0,     0,    28,     0,     0,    29,    30,
      31,     0,    32,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,     0,     0,     0,     0,     0,     0,
      40,     0,     0,     0,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    43,   482,    44,
      45,     0,    46,    47,     0,     0,     0,    48,    49,     0,
      50,     0,    51,     0,     0,    52,    53,    54,     0,    55,
      56,    57,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   922,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   409,
     410,     0,     0,    58,     0,    59,    60,    61,    62,     0,
       0,     0,     0,    63,    64,    16,     0,    65,    66,    67,
       0,    17,    68,    69,    70,    71,    72,    18,    19,    20,
       0,   411,   412,   413,    21,     0,     0,     0,    22,     0,
       0,     0,     0,    23,    24,    25,    26,     0,     0,     0,
      27,     0,     0,     0,     0,     0,    28,     0,     0,    29,
      30,    31,     0,    32,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,     0,     0,     0,     0,     0,     0,
       0,    40,     0,     0,     0,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,     0,    43,   483,
      44,    45,     0,    46,    47,     0,     0,     0,    48,    49,
       0,    50,     0,    51,     0,     0,    52,    53,    54,     0,
      55,    56,    57,     0,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     409,   410,     0,     0,    58,     0,    59,    60,    61,    62,
       0,     0,     0,     0,    63,    64,    16,     0,    65,    66,
      67,     0,    17,    68,    69,    70,    71,    72,    18,    19,
      20,     0,   411,   412,   413,    21,     0,     0,     0,    22,
       0,     0,     0,     0,    23,    24,    25,    26,     0,     0,
       0,    27,     0,     0,     0,     0,     0,    28,     0,     0,
      29,    30,    31,     0,    32,     0,     0,     0,    33,    34,
      35,    36,    37,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    40,     0,     0,     0,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,     0,     0,     0,    43,
     559,    44,    45,     0,    46,    47,     0,     0,     0,    48,
      49,     0,    50,     0,    51,     0,     0,    52,    53,    54,
       0,    55,    56,    57,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   409,   410,     0,
       0,     0,     0,     0,     0,    58,     0,    59,    60,    61,
      62,     0,     0,     0,     0,    63,    64,     0,     0,    65,
      66,    67,     0,     0,    68,    69,    70,    71,    72,   411,
     412,   413,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,     0,     0,
       0,     0,     0,   409,   410,     0,     0,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,     0,   411,   412,   413,     0,     0,
       0,     0,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,     0,     0,     0,     0,     0,
       0,   409,   410,     0,     0,     0,     0,     0,     0,   677,
       0,     0,     0,     0,   409,   410,     0,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,     0,   411,   412,   413,   409,   410,     0,     0,
       0,     0,     0,     0,     0,     0,   411,   412,   413,   409,
     410,     0,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,     0,     0,     0,   411,   412,
     413,   409,   410,     0,     0,   678,     0,     0,     0,     0,
       0,   411,   412,   413,     0,     0,     0,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,     0,   411,   412,   413,   409,   410,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   679,     0,     0,     0,     0,   411,   412,
     413,   409,   410,     0,     0,     0,   680,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,     0,     0,     0,     0,     0,     0,   681,     0,
       0,     0,     0,   411,   412,   413,   409,   410,     0,     0,
       0,   682,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,     0,     0,   409,   410,     0,
       0,     0,     0,   683,     0,     0,     0,     0,   411,   412,
     413,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,     0,     0,     0,     0,     0,   411,
     412,   413,     0,     0,     0,     0,   409,   410,   684,     0,
       0,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,   411,   412,
     413,   409,   410,   685,     0,     0,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     409,   410,     0,   411,   412,   413,     0,     0,   686,     0,
       0,     0,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,     0,     0,     0,     0,   687,
     409,   410,   411,   412,   413,     0,     0,     0,     0,     0,
       0,     0,     0,   409,   410,     0,     0,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,   411,   412,   413,   409,   410,     0,   688,     0,
       0,     0,     0,     0,     0,   411,   412,   413,     0,     0,
       0,     0,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,     0,     0,   411,   412,   413,
       0,   409,   410,   689,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,   690,   411,   412,   413,   409,   410,     0,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   691,     0,     0,     0,     0,     0,   411,   412,
     413,   409,   410,     0,     0,   692,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,     0,
       0,     0,     0,   409,   410,     0,     0,   693,     0,     0,
       0,     0,     0,   411,   412,   413,   409,   410,     0,     0,
       0,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,     0,   411,   412,   413,   409,   410,
       0,     0,     0,   696,     0,     0,     0,     0,   411,   412,
     413,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,     0,     0,     0,     0,     0,     0,
     411,   412,   413,     0,     0,   409,   410,     0,   703,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,     0,     0,   411,   412,   413,
     409,   410,     0,   708,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,     0,     0,
       0,     0,     0,     0,     0,   709,     0,     0,     0,     0,
     409,   410,   411,   412,   413,     0,     0,     0,   712,     0,
       0,     0,     0,     0,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,   409,   410,
     744,     0,   411,   412,   413,     0,     0,     0,     0,     0,
       0,   409,   410,     0,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,     0,     0,
     411,   412,   413,   409,   410,     0,     0,   760,     0,     0,
       0,     0,     0,   411,   412,   413,     0,     0,     0,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,     0,     0,     0,   411,   412,   413,     0,     0,
       0,     0,   762,   409,   410,     0,     0,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   763,   409,   410,   411,   412,   413,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     766,     0,     0,     0,     0,   411,   412,   413,   409,   410,
       0,     0,     0,   767,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,     0,     0,
       0,     0,     0,     0,     0,   769,   409,   410,     0,     0,
     411,   412,   413,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   411,   412,
     413,     0,     0,     0,     0,   781,   409,   410,     0,     0,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   409,   410,   840,     0,     0,   411,   412,
     413,     0,     0,     0,     0,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,     0,     0,
       0,     0,   409,   410,     0,   411,   412,   413,     0,     0,
     842,     0,     0,     0,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,     0,     0,
       0,     0,     0,     0,   411,   412,   413,     0,   845,   409,
     410,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,     0,     0,
       0,   411,   412,   413,   409,   410,     0,     0,   868,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   409,   410,   869,   411,   412,   413,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,     0,     0,     0,     0,     0,     0,     0,     0,
     409,   410,     0,     0,   870,   411,   412,   413,     0,     0,
       0,     0,     0,   409,   410,     0,     0,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,   411,   412,   413,     0,     0,     0,   409,   410,
       0,   944,     0,     0,     0,   411,   412,   413,     0,     0,
       0,     0,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,     0,     0,     0,   409,   410,
     411,   412,   413,     0,     0,     0,   945,     0,     0,     0,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,     0,     0,     0,     0,     0,     0,
     411,   412,   413,     0,     0,   946,   409,   410,     0,     0,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,     0,     0,     0,     0,     0,     0,
     563,     0,     0,     0,     0,     0,     0,     0,   411,   412,
     413,   409,   410,   627,     0,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   631,   409,
     410,     0,     0,   411,   412,   413,     0,     0,     0,     0,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,     0,     0,     0,     0,   633,   409,
     410,   411,   412,   413,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,   411,   412,   413,   409,   410,   634,     0,     0,     0,
       0,     0,     0,     0,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   411,   412,   413,   409,
     410,   637,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,     0,     0,     0,     0,     0,
       0,     0,     0,   409,   410,     0,     0,     0,     0,   704,
       0,   411,   412,   413,     0,     0,   409,   410,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,     0,     0,     0,     0,   411,   412,   413,     0,   705,
       0,     0,     0,   409,   410,     0,     0,     0,   411,   412,
     413,     0,     0,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,     0,     0,     0,     0,
       0,   409,   410,     0,   706,   411,   412,   413,     0,     0,
       0,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   411,   412,   413,     0,   409,   410,   739,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   745,     0,     0,     0,     0,     0,   411,
     412,   413,   409,   410,     0,     0,   746,     0,     0,     0,
       0,     0,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,     0,     0,     0,     0,     0,
     409,   410,     0,   748,   411,   412,   413,     0,     0,     0,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,     0,     0,     0,     0,     0,   409,
     410,   750,   411,   412,   413,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   411,   412,   413,     0,     0,     0,   753,     0,     0,
       0,   409,   410,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,     0,   754,   411,   412,   413,     0,     0,     0,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,     0,     0,   409,   410,     0,     0,     0,     0,
     756,   411,   412,   413,     0,     0,     0,   409,   410,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   411,   412,   413,   757,
       0,     0,   409,   410,     0,     0,     0,     0,     0,   411,
     412,   413,     0,     0,     0,   409,   410,     0,     0,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,     0,     0,   411,   412,   413,     0,   409,   410,
       0,   758,     0,     0,     0,     0,     0,   411,   412,   413,
       0,     0,     0,     0,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,     0,   759,
     411,   412,   413,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,     0,     0,     0,     0,
       0,     0,     0,     0,   764,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   765,   409,   410,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   785,     0,     0,     0,     0,     0,     0,     0,
     411,   412,   413,   409,   410,   813,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,     0,
       0,     0,   409,   410,     0,     0,     0,     0,   815,     0,
       0,     0,     0,     0,     0,   411,   412,   413,     0,     0,
       0,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   411,   412,   413,     0,     0,   409,
     410,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,     0,     0,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,     0,
       0,   411,   412,   413,     0,   409,   410,     0,   816,     0,
       0,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   411,   412,   413,
     409,   410,     0,   819,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     409,   410,   841,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   411,   412,   413,   409,   410,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,   411,   412,   413,     0,     0,     0,     0,   844,
     409,   410,     0,     0,     0,     0,     0,   411,   412,   413,
       0,     0,     0,   409,   410,     0,     0,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,   411,   412,   413,   873,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   411,   412,   413,     0,     0,
       0,     0,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,     0,   409,   410,     0,     0,
     875,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,     0,     0,     0,     0,     0,     0,
     878,     0,     0,     0,     0,     0,     0,     0,   411,   412,
     413,     0,     0,     0,     0,   879,   409,   410,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     881,     0,     0,     0,     0,     0,     0,     0,   411,   412,
     413,   409,   410,   882,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,     0,     0,
     409,   410,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   411,   412,   413,     0,     0,     0,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   411,   412,   413,     0,   883,   409,   410,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,     0,     0,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,     0,   411,
     412,   413,     0,   409,   410,     0,   886,     0,     0,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   411,   412,   413,   409,   410,
       0,   887,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   409,   410,
     897,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     411,   412,   413,   409,   410,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,     0,     0,
     411,   412,   413,     0,     0,     0,     0,   928,   409,   410,
       0,     0,     0,     0,     0,   411,   412,   413,     0,     0,
       0,   409,   410,     0,     0,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,     0,     0,
     411,   412,   413,   930,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   411,   412,   413,     0,     0,     0,     0,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,   409,   410,     0,     0,   931,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,     0,     0,     0,     0,     0,     0,   937,     0,
       0,     0,     0,     0,     0,     0,   411,   412,   413,     0,
       0,     0,     0,   938,   409,   410,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   975,     0,
       0,     0,     0,     0,     0,     0,   411,   412,   413,   409,
     410,   978,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,     0,     0,     0,   409,   410,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   411,   412,   413,     0,     0,     0,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     411,   412,   413,     0,   992,   409,   410,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,     0,     0,   411,   412,   413,
       0,   409,   410,     0,   993,     0,     0,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   411,   412,   413,   409,   410,     0,   995,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   409,   410,   996,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   411,   412,
     413,   409,   410,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,     0,     0,   411,   412,
     413,     0,     0,     0,     0,  1006,   409,   410,     0,     0,
       0,     0,     0,   411,   412,   413,     0,     0,     0,   409,
     410,     0,     0,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,     0,     0,   411,   412,
     413,  1009,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   411,   412,   413,     0,     0,     0,     0,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,     0,   409,   410,     0,     0,  1012,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,     0,     0,     0,     0,  1013,     0,     0,     0,
       0,     0,     0,     0,   411,   412,   413,     0,     0,     0,
       0,  1015,   409,   410,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1016,     0,     0,     0,
       0,     0,     0,     0,   411,   412,   413,   409,   410,  1022,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,     0,     0,   409,   410,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   411,
     412,   413,     0,     0,     0,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   411,   412,
     413,     0,  1023,   409,   410,     0,     0,     0,     0,     0,
     716,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,     0,     0,   411,   412,   413,     0,   409,
     410,     0,  1026,     0,     0,   718,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,     0,     0,
       0,   411,   412,   413,   409,   410,     0,  1027,     0,     0,
     795,   396,   423,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,     0,     0,  1030,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   411,   412,   413,   409,
     410,     0,     0,     0,     0,   797,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1031,     0,     0,     0,     0,     0,     0,
       0,   411,   412,   413,   409,   410,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     409,   410,     0,     0,     0,     0,   411,   412,   413,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   411,   412,   413
};

static const yytype_int16 yycheck[] =
{
      18,    19,    20,    21,    17,    98,    99,     7,     8,    22,
       7,     8,    69,    26,    71,    28,   100,   101,   102,   103,
       7,     8,   233,    30,    33,    34,    44,    45,   252,    47,
      48,    49,    50,    51,    52,    36,    54,    55,    56,    57,
       7,     8,     9,    24,    62,     7,     8,     9,    10,   243,
      68,    69,    70,    69,    72,    71,    19,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      28,    29,    90,    91,    92,    82,    30,    95,     0,    33,
      34,   243,    23,    20,   243,    24,   282,    28,    29,    96,
      97,    98,    99,    34,    35,    24,    25,    26,    27,   117,
     118,    30,    31,    32,   122,   123,    87,    61,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    84,    24,    24,    23,   243,     3,   243,    82,    28,
      29,    98,    69,    32,    33,    34,    35,     7,     8,     9,
      10,   159,    96,    97,    98,    99,   112,   113,    87,     7,
       8,     9,    10,    75,   172,    24,    25,    26,    27,     7,
       8,    30,    31,    32,     4,     5,     7,     8,     9,    10,
     243,   112,   113,    50,     4,     5,   452,   453,   144,   145,
     146,    24,    25,    26,    27,    87,    87,    30,    31,    32,
     208,   243,   243,    51,   212,    70,   243,   112,   113,    24,
      25,    26,    27,    33,    79,    30,    31,    32,   243,    24,
      25,    26,    27,   112,   113,    30,    31,    32,    24,    25,
      26,    27,   235,   447,    30,    31,    32,    19,   243,   144,
     145,   146,     4,    24,    25,    26,    27,     4,     1,    30,
      31,    32,   243,   243,     8,   243,   243,   265,   835,   836,
     837,   269,    93,   271,   272,   243,   243,   275,     7,   343,
     344,   345,   280,   281,    10,    24,    25,    26,    27,    10,
       0,    30,    31,    32,    19,   293,   242,   473,   244,   475,
     242,     7,     8,     9,     7,     8,     9,    10,   306,   307,
     308,   309,   310,   311,   312,   313,    20,    24,    25,    26,
      27,    24,   315,    30,    31,    32,     4,     5,   317,     7,
       8,    24,    10,   242,   242,   244,    19,    19,   325,     7,
       8,     9,    10,   341,   342,   242,   242,   242,   282,   244,
      24,    25,    26,    27,   242,    10,    30,    31,    32,   243,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   441,   243,   377,
       7,     8,     9,   317,   243,   243,   384,   385,    78,   387,
     388,   325,   243,   391,   392,   244,   243,   243,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   607,     7,     8,     9,
      10,   244,    87,   421,   422,   423,   243,   425,   243,   427,
      24,    25,    26,    27,   243,   508,    30,    31,    32,   244,
       6,     7,     8,     9,    10,   443,   444,   445,   446,   244,
     448,   243,   243,   451,   243,   442,   454,   455,   244,   457,
     458,   459,   243,   461,   243,   243,   464,   465,   243,   467,
     468,   469,   470,   244,   243,   243,     6,    24,   476,     9,
      10,   479,   480,   481,   482,   483,   243,   243,    18,   243,
     233,    38,    39,    40,    41,    42,    43,    44,   243,   497,
      19,   499,   495,   243,   502,   244,   243,   243,   442,    24,
      25,    26,    27,   243,   242,    30,    31,    32,   242,   506,
     243,   508,    24,   243,    24,    25,    26,    27,   243,   243,
      30,    31,    32,     7,     8,     9,    66,   244,   243,   473,
     242,   475,   243,   243,    24,    25,    26,    27,     0,     1,
      30,    31,    32,     7,     8,     9,   554,     7,     8,     9,
      19,   559,   305,   243,   243,   563,   243,   243,   243,   242,
     244,   243,   506,   243,   508,    24,   243,   243,    30,   243,
     242,    33,    34,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,   243,   242,   789,   243,
     243,   599,   132,   601,   134,   135,   136,    24,   138,    61,
     140,   242,   244,   143,   242,   244,   609,     7,    24,    25,
      26,    27,   244,    75,    30,    31,    32,   244,   244,   627,
      82,   244,   619,   631,   244,   633,   634,   244,     8,   637,
       9,   243,   242,    19,    96,    97,    98,    99,   242,   713,
       7,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,   116,     8,    87,     9,    24,    25,
      26,    27,   112,   113,    30,    31,    32,    84,    96,     7,
      67,    19,    19,    19,    19,   619,   244,   217,   244,   244,
     243,   434,   243,   243,    10,   225,    85,   243,    32,   243,
     698,   699,   700,   243,   144,   145,   146,   705,   706,     7,
       9,     8,    72,    24,    69,    19,    95,   242,   716,   243,
     718,   244,   244,   244,   244,    19,   244,   242,   244,   243,
     243,   243,     8,     7,    67,   733,     9,   735,   242,   737,
     112,   113,   242,   242,    49,   242,    49,   745,   746,    49,
     748,   242,   750,   242,   244,   753,   754,   244,   756,   757,
     758,   759,   242,   244,    19,   244,   764,   765,   243,    50,
      19,    19,   144,   145,   146,    19,    20,   244,    71,    23,
     244,   233,   234,   244,    28,    29,    77,   785,    32,    33,
      34,    35,    77,    77,    77,    77,    71,   795,    70,   797,
      77,   442,   242,   742,   244,   293,    77,    77,    77,    77,
      77,     0,     1,    77,    77,   813,    77,   815,   816,    77,
      77,   819,   506,    77,    77,    69,    77,   825,   826,   714,
     282,    77,    77,    77,    77,    77,   242,    77,    77,    77,
     838,    30,    77,   841,    33,    34,   844,    77,    75,    -1,
      -1,    -1,   850,   305,    -1,    -1,    -1,   855,    -1,    -1,
      40,    41,    -1,    -1,    -1,   317,    -1,    -1,   112,   113,
     242,    -1,    61,   325,    -1,   873,    -1,   875,    -1,    -1,
     878,   879,    62,    -1,    -1,    -1,    75,    -1,   886,   887,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,   897,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,    -1,    -1,    -1,    -1,   913,    -1,    -1,    -1,    -1,
     918,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
     928,    -1,   930,   931,    -1,    -1,    -1,    -1,    -1,   937,
     938,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,   975,    -1,    -1,
     978,   433,   434,    -1,    -1,   437,   729,    -1,   440,    -1,
     442,   171,    -1,    -1,   992,   993,    -1,   995,   996,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1006,    -1,
      -1,  1009,    -1,    -1,  1012,  1013,    -1,  1015,  1016,    -1,
      -1,   473,    -1,   475,  1022,  1023,    -1,    -1,  1026,  1027,
     112,   113,  1030,  1031,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   786,   233,   234,    -1,   790,   791,   792,
     793,   794,   112,   113,   506,    -1,   508,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
     433,    -1,    -1,    -1,   437,    -1,    -1,   440,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,
      -1,    -1,    -1,   282,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,   293,    -1,    -1,   305,    -1,   861,   862,
     863,   864,   865,    -1,    -1,    -1,    -1,    -1,   317,    -1,
      -1,    -1,    -1,    -1,   314,    -1,   325,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,   605,    -1,   607,    -1,    -1,   901,    -1,
     242,    -1,   244,   906,    -1,    -1,    -1,   619,    -1,    -1,
      -1,    -1,   352,   353,   354,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,   244,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   375,   376,    -1,   378,   379,
     380,   381,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     662,    -1,   664,   665,   666,    -1,   959,    -1,   144,   145,
     146,   964,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,   414,   415,   416,   417,   418,   419,
     420,    -1,   605,    -1,   433,   434,    -1,    -1,   437,    -1,
      -1,   440,    -1,   442,    -1,    -1,    -1,    -1,   144,   145,
     146,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,   729,    -1,    -1,
      -1,    -1,    17,    -1,   473,    -1,   475,    22,    -1,    -1,
      -1,    26,    -1,    28,    29,    30,    -1,    -1,    -1,   662,
      -1,   664,   665,   666,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,   506,   244,   508,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,   786,    -1,    -1,   789,   790,   791,
     792,   793,   794,    -1,    -1,    -1,    -1,    82,   800,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,
      -1,    96,    97,    98,    99,   100,   101,   102,   103,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   849,    -1,    -1,
     852,    -1,   854,    -1,    -1,   857,    -1,   859,    -1,   861,
     862,   863,   864,   865,    -1,   867,   605,    -1,   607,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     619,    -1,    -1,    -1,    -1,    -1,   171,   800,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   901,
      -1,    -1,    -1,    -1,   906,    -1,    -1,    -1,   112,   113,
     912,    -1,    -1,   915,    -1,   917,    -1,    -1,   920,    -1,
     922,    -1,    -1,   662,    -1,   664,   665,   666,    -1,    -1,
      -1,    -1,   244,    -1,    -1,    -1,   849,    -1,    -1,   852,
     144,   854,    -1,    -1,   857,    -1,   859,    -1,   950,    -1,
     235,    -1,   954,    -1,   867,    -1,    -1,   959,    -1,    -1,
      -1,    -1,   964,    -1,    -1,    -1,    -1,   697,    -1,    -1,
      -1,    -1,    -1,    -1,   704,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   984,    -1,    -1,    -1,   988,    -1,    -1,    -1,
     729,    -1,    -1,    -1,    -1,    -1,    -1,   282,    -1,   912,
      -1,    -1,   915,    -1,   917,    -1,    -1,   920,   293,   922,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,   314,
     315,    -1,    -1,    -1,    -1,    -1,    -1,   950,   768,    -1,
     325,   954,    -1,    -1,    -1,    -1,    -1,   786,    -1,    -1,
     789,   790,   791,   792,   793,   794,    -1,    -1,   343,   344,
     345,   800,    -1,    -1,    -1,    -1,    -1,   352,   353,   354,
      -1,   984,    -1,    -1,    -1,   988,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     375,   376,    -1,   378,   379,   380,   381,   382,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,
     849,    -1,    -1,   852,    -1,   854,    -1,    -1,   857,    -1,
     859,    -1,   861,   862,   863,   864,   865,    -1,   867,   414,
     415,   416,   417,   418,   419,   420,   144,   145,   146,    -1,
      -1,    -1,   872,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   881,   882,   883,    -1,    -1,   441,   442,    -1,    -1,
      -1,    -1,   901,    -1,    -1,   112,   113,   906,    -1,    -1,
      -1,    -1,    -1,   912,    -1,    -1,   915,    -1,   917,    -1,
      -1,   920,    -1,   922,    -1,    -1,    -1,    -1,   473,    -1,
     475,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     495,   950,    -1,    -1,    -1,   954,    -1,    -1,    -1,    -1,
     959,   506,    -1,   508,    -1,   964,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   984,    -1,    -1,    -1,   988,
       4,     5,    -1,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   609,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   619,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,   112,   113,   109,   110,   111,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    -1,   133,
      -1,    -1,    -1,   137,    -1,   144,   145,   146,   142,    -1,
      -1,    -1,    -1,   147,    -1,    -1,   150,   151,   152,   153,
     154,   155,   156,   157,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,   697,   167,    -1,    -1,   170,    -1,    -1,   704,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   713,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
      -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     224,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,
      -1,    -1,    -1,   768,   238,   239,   240,    -1,    -1,   243,
     244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,    -1,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   872,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   881,   882,   883,   104,
     105,   106,   112,   113,   109,   110,   111,    -1,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,    -1,   133,    -1,
      -1,    -1,   137,    -1,   144,   145,   146,   142,    -1,    -1,
      -1,    -1,   147,    -1,    -1,   150,   151,   152,   153,   154,
     155,   156,   157,   112,   113,   160,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
     215,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,
      -1,    -1,   242,   238,   239,   240,    -1,    -1,   243,   244,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    61,    62,    63,
      64,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,   109,   110,   111,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,    -1,   142,   143,
      -1,    -1,    -1,   147,    -1,    -1,   150,   151,   152,   153,
     154,   155,   156,   157,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
      -1,   215,   216,   217,    -1,    -1,   220,    -1,    -1,    -1,
     224,   225,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,
      -1,    -1,    -1,    -1,   238,   239,   240,    -1,   242,   243,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    61,    62,    63,
      64,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,   109,   110,   111,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,    -1,   142,   143,
      -1,    -1,    -1,   147,    -1,    -1,   150,   151,   152,   153,
     154,   155,   156,   157,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
      -1,   215,   216,   217,    -1,    -1,    -1,    -1,    -1,    -1,
     224,   225,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,
      -1,    -1,    -1,    -1,   238,   239,   240,     4,     5,   243,
       7,     8,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
     112,   113,   109,   110,   111,    -1,    -1,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,    -1,   133,    -1,    -1,    -1,
     137,    -1,   144,   145,   146,   142,    -1,    -1,    -1,    -1,
     147,    -1,    -1,   150,   151,   152,   153,   154,   155,   156,
     157,    -1,    -1,   160,    -1,    -1,    -1,    -1,   165,    -1,
     167,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,    -1,   215,   216,
       4,     5,    -1,     7,     8,    -1,    10,   224,    -1,    -1,
      -1,    -1,    16,    17,   231,   232,    -1,    -1,    -1,    -1,
     242,   238,   239,   240,    -1,    -1,   243,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,   109,   110,   111,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    -1,   133,
      -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,   147,    -1,    -1,   150,   151,   152,   153,
     154,   155,   156,   157,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,   166,   167,    -1,    -1,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
      -1,   215,   216,     4,     5,    -1,     7,     8,    -1,    10,
     224,    -1,    -1,    -1,    -1,    16,    17,   231,   232,    -1,
      -1,    -1,    -1,    -1,   238,   239,   240,    -1,    -1,   243,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,    -1,    -1,   109,   110,
     111,    -1,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,    -1,   133,    -1,    -1,    -1,   137,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,    -1,   160,
      -1,    -1,    -1,    -1,    -1,   166,   167,    -1,    -1,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,    -1,   215,   216,     4,     5,    -1,     7,
       8,    -1,    10,   224,    -1,    -1,    -1,    -1,    16,    17,
     231,   232,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,
      -1,    -1,   243,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,
      -1,   109,   110,   111,    -1,    -1,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,    -1,   133,    -1,    -1,    -1,   137,
      -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,
      -1,    -1,   150,   151,   152,   153,   154,   155,   156,   157,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,   166,   167,
      -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,    -1,   215,   216,     4,
       5,    -1,     7,     8,    -1,    10,   224,    -1,    -1,    -1,
      -1,    16,    17,   231,   232,    -1,    -1,    -1,    -1,    -1,
     238,   239,   240,    -1,    -1,   243,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,    -1,    -1,   109,   110,   111,    -1,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,    -1,   133,    -1,
      -1,    -1,   137,    -1,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,   147,    -1,    -1,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,    -1,   160,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
     215,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,    -1,
      -1,    -1,    -1,   238,   239,   240,     3,    -1,   243,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    91,    -1,    93,    -1,    -1,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,   148,   149,    -1,   144,   145,   146,    -1,    -1,    -1,
      -1,   158,    -1,   160,   161,    -1,   163,   164,    -1,    -1,
      -1,   168,   169,    -1,   171,    -1,   173,    -1,    -1,   176,
     177,   178,    -1,   180,   181,   182,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,   216,
     217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,    -1,
      -1,   228,   229,   230,    -1,    -1,   233,   234,   235,   236,
     237,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   244,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    -1,    93,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,   144,   145,
     146,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,   160,   161,    -1,   163,   164,    -1,
      -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,    -1,
     176,   177,   178,    -1,   180,   181,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,
     216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,
      -1,    -1,   228,   229,   230,    -1,    -1,   233,   234,   235,
     236,   237,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    91,    -1,    93,    -1,
      -1,    -1,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,   144,
     145,   146,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,   160,   161,    -1,   163,   164,
      -1,    -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,
      -1,   176,   177,   178,    -1,   180,   181,   182,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,
      -1,   216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,
     225,    -1,    -1,   228,   229,   230,    -1,    -1,   233,   234,
     235,   236,   237,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    89,    90,    91,    -1,    93,
      -1,    -1,    -1,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
     144,   145,   146,    -1,   148,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,   160,   161,    -1,   163,
     164,    -1,    -1,    -1,   168,   169,    -1,   171,    -1,   173,
      -1,    -1,   176,   177,   178,    -1,   180,   181,   182,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     214,    -1,   216,   217,   218,   219,    -1,    -1,    -1,    -1,
     224,   225,    -1,    -1,   228,   229,   230,    -1,    -1,   233,
     234,   235,   236,   237,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    91,    -1,
      93,    -1,    -1,    -1,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,
      -1,   144,   145,   146,    -1,   148,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,   160,   161,    -1,
     163,   164,    -1,    -1,    -1,   168,   169,    -1,   171,    -1,
     173,    -1,    -1,   176,   177,   178,    -1,   180,   181,   182,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   214,    -1,   216,   217,   218,   219,    -1,    -1,    -1,
      -1,   224,   225,    -1,    -1,   228,   229,   230,    -1,    -1,
     233,   234,   235,   236,   237,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,   112,   113,    51,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    -1,    -1,    -1,    80,   144,
     145,   146,    -1,    -1,    86,    -1,    -1,    89,    90,    91,
      -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,    -1,   144,   145,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,   160,   161,
      -1,   163,   164,    -1,    -1,    -1,   168,   169,    -1,   171,
      -1,   173,    -1,    -1,   176,   177,   178,   242,   180,   181,
     182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,    -1,
      -1,    -1,   224,   225,    -1,    -1,   228,   229,   230,    -1,
      -1,   233,   234,   235,   236,   237,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,   112,   113,
      51,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,    80,
     144,   145,   146,    -1,    -1,    86,    -1,    -1,    89,    90,
      91,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,   144,   145,   146,    -1,   148,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,   160,
     161,    -1,   163,   164,    -1,    -1,    -1,   168,   169,    -1,
     171,    -1,   173,    -1,    -1,   176,   177,   178,   242,   180,
     181,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,
      -1,    -1,    -1,   224,   225,    -1,    -1,   228,   229,   230,
      -1,    -1,   233,   234,   235,   236,   237,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,   112,
     113,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,
      80,   144,   145,   146,    -1,    -1,    86,    -1,    -1,    89,
      90,    91,    -1,    93,    -1,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    -1,   144,   145,   146,    -1,   148,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
     160,   161,    -1,   163,   164,    -1,    -1,    -1,   168,   169,
      -1,   171,    -1,   173,    -1,    -1,   176,   177,   178,   242,
     180,   181,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   214,    -1,   216,   217,   218,   219,
      -1,    -1,    -1,    -1,   224,   225,    -1,    -1,   228,   229,
     230,    -1,    -1,   233,   234,   235,   236,   237,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
     112,   113,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,
      -1,    80,   144,   145,   146,    -1,    -1,    86,    -1,    -1,
      89,    90,    91,    -1,    93,    -1,    -1,    -1,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    -1,    -1,   144,   145,   146,    -1,   148,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,   160,   161,    -1,   163,   164,    -1,    -1,    -1,   168,
     169,    -1,   171,    -1,   173,    -1,    -1,   176,   177,   178,
     242,   180,   181,   182,    -1,    -1,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,   214,    -1,   216,   217,   218,
     219,    -1,    -1,    -1,    -1,   224,   225,    45,    -1,   228,
     229,   230,    -1,    51,   233,   234,   235,   236,   237,    57,
      58,    59,    -1,   144,   145,   146,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    -1,
      -1,    -1,    80,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    89,    90,    91,    -1,    93,    -1,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,
     148,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,   242,   160,   161,    -1,   163,   164,    -1,    -1,    -1,
     168,   169,    -1,   171,    -1,   173,    -1,    -1,   176,   177,
     178,    -1,   180,   181,   182,    -1,    -1,    -1,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   113,    -1,    -1,   214,    -1,   216,   217,
     218,   219,    -1,    -1,    -1,    -1,   224,   225,    45,    -1,
     228,   229,   230,    -1,    51,   233,   234,   235,   236,   237,
      57,    58,    59,    -1,   144,   145,   146,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    91,    -1,    93,    -1,    -1,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,   242,   160,   161,    -1,   163,   164,    -1,    -1,
      -1,   168,   169,    -1,   171,    -1,   173,    -1,    -1,   176,
     177,   178,    -1,   180,   181,   182,    -1,    -1,    -1,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,   214,    -1,   216,
     217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,    45,
      -1,   228,   229,   230,    -1,    51,   233,   234,   235,   236,
     237,    57,    58,    59,    -1,   144,   145,   146,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    -1,    93,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,   242,   160,   161,    -1,   163,   164,    -1,
      -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,    -1,
     176,   177,   178,    -1,   180,   181,   182,    -1,    -1,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,   214,    -1,
     216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,
      45,    -1,   228,   229,   230,    -1,    51,   233,   234,   235,
     236,   237,    57,    58,    59,    -1,   144,   145,   146,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    91,    -1,    93,    -1,
      -1,    -1,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,   242,   160,   161,    -1,   163,   164,
      -1,    -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,
      -1,   176,   177,   178,    -1,   180,   181,   182,    -1,    -1,
      -1,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,   214,
      -1,   216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,
     225,    45,    -1,   228,   229,   230,    -1,    51,   233,   234,
     235,   236,   237,    57,    58,    59,    -1,   144,   145,   146,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    89,    90,    91,    -1,    93,
      -1,    -1,    -1,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,   242,   160,   161,    -1,   163,
     164,    -1,    -1,    -1,   168,   169,    -1,   171,    -1,   173,
      -1,    -1,   176,   177,   178,    -1,   180,   181,   182,    -1,
      -1,    -1,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
     214,    -1,   216,   217,   218,   219,    -1,    -1,    -1,    -1,
     224,   225,    45,    -1,   228,   229,   230,    -1,    51,   233,
     234,   235,   236,   237,    57,    58,    59,    -1,   144,   145,
     146,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    91,    -1,
      93,    -1,    -1,    -1,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,   148,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,   242,   160,   161,    -1,
     163,   164,    -1,    -1,    -1,   168,   169,    -1,   171,    -1,
     173,    -1,    -1,   176,   177,   178,    -1,   180,   181,   182,
      -1,    -1,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,
      -1,   214,    -1,   216,   217,   218,   219,    -1,    -1,    -1,
      -1,   224,   225,    45,    -1,   228,   229,   230,    -1,    51,
     233,   234,   235,   236,   237,    57,    58,    59,    -1,   144,
     145,   146,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,    91,
      -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,   242,   160,   161,
      -1,   163,   164,    -1,    -1,    -1,   168,   169,    -1,   171,
      -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,   181,
     182,    -1,    -1,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
      -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,    -1,
      -1,    -1,   224,   225,    45,    -1,   228,   229,   230,    -1,
      51,   233,   234,   235,   236,   237,    57,    58,    59,    -1,
     144,   145,   146,    64,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      91,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,   242,   160,
     161,    -1,   163,   164,    -1,    -1,    -1,   168,   169,    -1,
     171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,
     181,   182,    -1,    -1,    -1,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,
      -1,    -1,    -1,   224,   225,    45,    -1,   228,   229,   230,
      -1,    51,   233,   234,   235,   236,   237,    57,    58,    59,
      -1,   144,   145,   146,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,
      90,    91,    -1,    93,    -1,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,   242,
     160,   161,    -1,   163,   164,    -1,    -1,    -1,   168,   169,
      -1,   171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,
     180,   181,   182,    -1,    -1,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,   214,    -1,   216,   217,   218,   219,
      -1,    -1,    -1,    -1,   224,   225,    45,    -1,   228,   229,
     230,    -1,    51,   233,   234,   235,   236,   237,    57,    58,
      59,    -1,   144,   145,   146,    64,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    91,    -1,    93,    -1,    -1,    -1,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
     242,   160,   161,    -1,   163,   164,    -1,    -1,    -1,   168,
     169,    -1,   171,    -1,   173,    -1,    -1,   176,   177,   178,
      -1,   180,   181,   182,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,   214,    -1,   216,   217,   218,
     219,    -1,    -1,    -1,    -1,   224,   225,    -1,    -1,   228,
     229,   230,    -1,    -1,   233,   234,   235,   236,   237,   144,
     145,   146,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,   244,
      -1,    -1,    -1,    -1,   112,   113,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   112,
     113,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,   144,   145,
     146,   112,   113,    -1,    -1,   244,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,   144,   145,   146,   112,   113,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,   144,   145,
     146,   112,   113,    -1,    -1,    -1,   244,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,
      -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,    -1,
      -1,   244,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,   144,   145,
     146,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,    -1,    -1,    -1,    -1,   112,   113,   244,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   144,   145,
     146,   112,   113,   244,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,   144,   145,   146,    -1,    -1,   244,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,   244,
     112,   113,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   144,   145,   146,   112,   113,    -1,   244,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   144,   145,   146,
      -1,   112,   113,   244,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   244,   144,   145,   146,   112,   113,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,   112,   113,    -1,    -1,   244,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,   244,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   144,   145,   146,   112,   113,
      -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,   144,   145,
     146,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,    -1,    -1,   112,   113,    -1,   244,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   144,   145,   146,
     112,   113,    -1,   244,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,
     112,   113,   144,   145,   146,    -1,    -1,    -1,   244,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   112,   113,
     244,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
     144,   145,   146,   112,   113,    -1,    -1,   244,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,   244,   112,   113,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   244,   112,   113,   144,   145,   146,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
     244,    -1,    -1,    -1,    -1,   144,   145,   146,   112,   113,
      -1,    -1,    -1,   244,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   244,   112,   113,    -1,    -1,
     144,   145,   146,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,    -1,    -1,    -1,    -1,   244,   112,   113,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,   244,    -1,    -1,   144,   145,
     146,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,   112,   113,    -1,   144,   145,   146,    -1,    -1,
     244,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,    -1,   244,   112,
     113,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,   144,   145,   146,   112,   113,    -1,    -1,   244,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,   244,   144,   145,   146,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,   244,   144,   145,   146,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   144,   145,   146,    -1,    -1,    -1,   112,   113,
      -1,   244,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,   112,   113,
     144,   145,   146,    -1,    -1,    -1,   244,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,    -1,    -1,   244,   112,   113,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,   112,   113,   242,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   112,
     113,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,   242,   112,
     113,   144,   145,   146,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   144,   145,   146,   112,   113,   242,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   112,
     113,   242,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,   242,
      -1,   144,   145,   146,    -1,    -1,   112,   113,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,   242,
      -1,    -1,    -1,   112,   113,    -1,    -1,    -1,   144,   145,
     146,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,   242,   144,   145,   146,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,   112,   113,   242,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,   112,   113,    -1,    -1,   242,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,   242,   144,   145,   146,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,   242,   144,   145,   146,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,   144,   145,   146,    -1,    -1,    -1,   242,    -1,    -1,
      -1,   112,   113,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   112,
     113,    -1,   242,   144,   145,   146,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,
     242,   144,   145,   146,    -1,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   242,
      -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,    -1,    -1,    -1,   112,   113,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,   144,   145,   146,    -1,   112,   113,
      -1,   242,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   242,
     144,   145,   146,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   112,   113,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,   112,   113,   242,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,   112,   113,    -1,    -1,    -1,    -1,   242,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,   144,   145,   146,    -1,    -1,   112,
     113,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   144,   145,   146,    -1,   112,   113,    -1,   242,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   144,   145,   146,
     112,   113,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,   112,   113,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,   242,
     112,   113,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
      -1,    -1,    -1,   112,   113,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   144,   145,   146,   242,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   112,   113,    -1,    -1,
     242,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,    -1,    -1,    -1,    -1,   242,   112,   113,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,   112,   113,   242,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,   144,   145,   146,    -1,   242,   112,   113,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   144,
     145,   146,    -1,   112,   113,    -1,   242,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,   144,   145,   146,   112,   113,
      -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
     242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,   112,   113,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     144,   145,   146,    -1,    -1,    -1,    -1,   242,   112,   113,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,   112,   113,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     144,   145,   146,   242,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   112,   113,    -1,    -1,   242,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,
      -1,    -1,    -1,   242,   112,   113,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   112,
     113,   242,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
     144,   145,   146,    -1,   242,   112,   113,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   144,   145,   146,
      -1,   112,   113,    -1,   242,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   144,   145,   146,   112,   113,    -1,   242,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,   242,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,   112,   113,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,   144,   145,
     146,    -1,    -1,    -1,    -1,   242,   112,   113,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,   112,
     113,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,   144,   145,
     146,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   112,   113,    -1,    -1,   242,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,
      -1,   242,   112,   113,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,   112,   113,   242,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   144,   145,
     146,    -1,   242,   112,   113,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   144,   145,   146,    -1,   112,
     113,    -1,   242,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,   144,   145,   146,   112,   113,    -1,   242,    -1,    -1,
      83,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,   242,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   112,
     113,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    45,    51,    57,    58,
      59,    64,    68,    73,    74,    75,    76,    80,    86,    89,
      90,    91,    93,    97,    98,    99,   100,   101,   102,   103,
     141,   148,   149,   158,   160,   161,   163,   164,   168,   169,
     171,   173,   176,   177,   178,   180,   181,   182,   214,   216,
     217,   218,   219,   224,   225,   228,   229,   230,   233,   234,
     235,   236,   237,   246,   247,   248,   250,   251,   254,   255,
     256,   257,   264,   265,   272,   273,   274,   285,    20,   250,
     243,   243,   243,     7,     8,   243,   243,   243,   243,   243,
     243,   243,   243,   243,    19,     7,     8,     9,     4,     5,
       6,     9,    10,    16,    17,    18,    33,    57,    60,    61,
      62,    63,    64,    66,    93,   104,   105,   106,   109,   110,
     111,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   140,   142,   143,   147,
     150,   151,   152,   153,   154,   155,   156,   157,   160,   167,
     170,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   215,   216,   217,   224,   225,   231,   232,   238,
     239,   240,   243,   252,   253,   254,   255,   257,   268,   269,
     270,    10,   253,   253,   253,   253,   270,     7,     8,     9,
      98,     4,     4,   270,    19,    84,   270,   270,   271,   256,
     257,   258,   259,     7,     8,     9,    10,   262,   263,   256,
     273,     9,    93,   273,     8,    10,   269,   269,     7,     8,
       9,   260,   261,   253,   253,   165,   253,   253,   253,   166,
     253,   166,   167,   253,   253,   166,   253,   253,   253,   253,
     243,   243,     6,   258,   277,   278,    21,    36,    37,   220,
     242,   253,   269,   275,   276,     7,    10,    10,   253,   253,
     253,   253,     0,   247,    19,    20,    24,    38,    39,    40,
      41,    42,    43,    44,    24,    24,   258,   242,    19,    19,
     253,   253,   244,   253,   253,    51,   258,   279,   280,   258,
     281,   282,   282,   282,   271,   271,   271,   271,   242,   242,
     242,   243,   243,   243,   243,   243,     4,     5,   254,   255,
     253,   253,   243,   243,   243,   253,   253,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,    36,   243,   243,   253,   243,   243,   269,
     253,   243,   243,    10,   253,   253,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   112,
     113,   144,   145,   146,    24,    25,    26,    27,    30,    31,
      32,   243,   242,    24,    78,    24,    87,    24,    87,    87,
       7,     8,     9,    19,    82,   250,   251,   248,   249,   270,
      19,   242,   242,   243,   243,   243,   243,   242,   243,   263,
      19,   243,   242,   242,   242,   242,   253,   242,   242,   242,
     253,   242,   253,   253,   242,   242,   253,   242,   242,   242,
     242,   253,   253,   242,   278,   242,   243,   276,   242,   243,
     243,   242,   242,   242,   250,   253,   253,   253,   253,   253,
     253,   253,   253,   269,   270,    24,   273,   242,   244,   242,
     244,    24,   242,   244,   244,   258,   242,   244,   242,   244,
     244,   244,   244,   244,   244,   244,     7,     8,     9,   253,
     271,   271,   271,   269,   269,   269,     7,     8,     9,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   269,   269,   253,   269,
     269,   269,   269,   269,   243,   253,   253,   253,   253,   242,
     253,   253,   242,   242,   244,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   269,   269,   269,   269,   269,   269,   269,
     253,   253,   253,    19,   253,     7,   253,     8,     9,    24,
      87,    24,    87,    87,   249,    19,   250,    69,   249,    84,
     249,   271,   259,   253,   253,   253,   253,   263,   244,    96,
     266,   267,   253,   261,   261,   253,   253,   242,   253,   253,
     253,   242,   253,   242,   242,   253,   253,   242,   253,   253,
     253,   253,   244,   244,   278,   278,   253,     7,   253,   253,
     253,   253,   253,   270,   253,   253,    67,   253,     7,     8,
       9,   280,    19,   282,    19,    19,    19,   244,   244,   244,
     244,   244,   244,   244,   243,   243,   243,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   242,   242,   242,
     242,   244,   253,   244,   242,   242,   242,   253,   244,   244,
      10,   253,   244,    85,   283,   284,    83,   243,    83,   243,
     243,   253,     7,   253,     8,     9,    69,    71,   249,    69,
     251,   270,    72,   242,   244,   242,   244,   242,   244,   242,
      24,   258,    19,    95,   244,   242,   242,   253,   242,   253,
     242,   253,   253,   242,   242,   253,   242,   242,   242,   242,
     244,   242,   244,   244,   242,   242,   244,   244,   243,   244,
     249,   249,   249,   249,   244,   244,   244,   269,   253,   253,
     253,   244,   269,   253,   253,   242,   271,   284,    70,    79,
     253,   244,   253,   244,   244,    83,   243,    83,   243,   243,
      19,    69,    71,   250,   253,   253,   253,     8,    67,   267,
     253,   253,   253,   242,   253,   242,   242,   253,   253,   242,
     253,   253,   253,   253,     7,   242,   242,   253,   253,   269,
       3,    50,    49,    49,    49,   242,   242,   242,   242,   244,
     244,   242,   244,   244,   242,   244,   253,   250,   251,    19,
      81,   250,    19,   250,    19,    81,   250,    19,   250,    19,
     250,   253,   244,   253,   244,   244,   249,    19,   244,   244,
     244,   244,   243,   242,   253,   242,   253,   253,   242,   242,
     253,   242,   242,   242,   253,   253,   242,   242,   244,    50,
      33,   252,   252,   252,   253,   253,   253,   242,    19,    19,
     249,   253,    77,   249,    77,   249,   253,    77,   249,    77,
     249,    77,    19,    81,   250,    19,   250,    19,    81,   250,
      19,   250,    19,   250,    71,   249,   269,   253,   242,   253,
     242,   242,   253,   253,   269,   269,   269,   242,   242,   253,
     253,   244,   244,   244,   244,   244,   244,   253,    70,    77,
      19,   250,    77,    77,    19,   250,    77,    77,   249,   253,
      77,   249,    77,   249,   253,    77,   249,    77,   249,    77,
      71,   244,   253,   253,   253,   242,   253,   253,   242,   249,
      77,   249,    77,    77,    19,   250,    77,    77,    19,   250,
      77,    77,   242,   242,   253,   242,   242,   253,    77,    77,
     249,    77,   249,    77,   253,   253,   242,   253,   253,   242,
      77,    77,   242,   242,   253,   242,   242,   253,   253,   253,
     253,   253,   242,   242,   253,   253,   242,   242,   253,   253,
     242,   242,   253,   253
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   245,   246,   247,   247,   248,   248,   248,   248,   248,
     249,   249,   250,   250,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   252,   252,   252,   252,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     254,   254,   254,   254,   254,   255,   255,   255,   255,   255,
     256,   256,   257,   257,   257,   257,   258,   258,   259,   259,
     260,   260,   260,   261,   261,   262,   262,   262,   262,   262,
     262,   262,   263,   263,   264,   264,   265,   266,   267,   267,
     268,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   270,   270,   271,   271,   271,   272,   272,   272,
     272,   273,   273,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   275,   275,   275,   275,   275,   275,   275,
     276,   276,   277,   278,   278,   279,   279,   279,   280,   280,
     281,   281,   282,   282,   283,   284,   284,   285,   285,   285,
     285,   285
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     3,     2,     3,     1,
       1,     2,     1,     3,     1,     1,     1,     2,     4,     2,
       1,     1,     4,     4,     4,     4,     2,     2,     1,     1,
       2,     1,     1,     1,     2,     3,     4,     2,     4,     2,
       8,     9,     2,     2,     2,     2,     3,     4,     6,     4,
       4,     1,     1,     3,     5,     5,     8,     4,     6,     6,
       9,     5,     3,     5,     4,     4,     4,     9,     9,     9,
       8,     8,     8,    10,    10,    10,     9,     9,     9,     9,
       9,     8,     8,    11,    11,    10,    10,    10,    10,     9,
       9,    12,    12,    11,    11,     6,     9,     1,     2,     1,
      13,    13,     8,     8,     4,     2,     1,     2,     6,     2,
       6,     4,     5,     1,     2,     1,     6,     7,     8,     8,
       9,    12,    13,    19,     4,     8,     1,     8,     8,     8,
       1,     1,     2,     1,     2,     1,     1,     1,     3,     4,
       4,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     4,     8,     8,     8,     2,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     4,    18,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     8,     6,     1,
       1,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     4,     4,     4,     1,     1,     1,     4,     1,
       2,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     6,     8,     4,
       1,     4,     6,     2,     5,     1,     4,     6,     2,     5,
       1,     1,     1,     4,     6,     5,     1,     1,     1,     3,
       1,     1,     1,     1,     3,     4,     6,     4,     6,     4,
       6,     6,     1,     3,     1,     4,     5,     2,     2,     3,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       2,     4,     1,     4,     1,     4,     5,     6,     4,     6,
       8,     6,     1,     1,     0,     1,     3,     3,     3,     3,
       4,     1,     3,     1,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     4,     1,
       1,     2,     1,     1,     3,     0,     1,     2,     1,     3,
       0,     1,     1,     3,     4,     1,     2,     7,     8,     7,
       7,     7
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
  case 2: /* daric: lines  */
#line 99 "DARIC.y"
            { (yyval.ast) = (yyvsp[0].ast); }
#line 4359 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 3: /* lines: line  */
#line 103 "DARIC.y"
           { ast_lines[yyfileno].push_front((yyvsp[0].ast)); (yyval.ast) = (yyvsp[0].ast); }
#line 4365 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 4: /* lines: line lines  */
#line 104 "DARIC.y"
                 { ast_lines[yyfileno].push_front((yyvsp[-1].ast)); (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4371 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 5: /* line: statements NL  */
#line 108 "DARIC.y"
                    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4377 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 6: /* line: LINE_NUMBER statements NL  */
#line 109 "DARIC.y"
                                { (yyval.ast) = link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast)); yylineno = (yyvsp[-2].v_int); }
#line 4383 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 7: /* line: COLON NL  */
#line 110 "DARIC.y"
               { (yyval.ast) = NULL; }
#line 4389 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 8: /* line: LINE_NUMBER COLON NL  */
#line 111 "DARIC.y"
                           { (yyval.ast) = linenumber((yyvsp[-2].v_int)); yylineno = (yyvsp[-2].v_int); }
#line 4395 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 9: /* line: NL  */
#line 112 "DARIC.y"
         { (yyval.ast) = NULL; }
#line 4401 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 10: /* embed_lines: line  */
#line 116 "DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 4407 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 11: /* embed_lines: line embed_lines  */
#line 117 "DARIC.y"
                       { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4413 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 12: /* statements: statement  */
#line 121 "DARIC.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 4419 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 13: /* statements: statement COLON statements  */
#line 122 "DARIC.y"
                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4425 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 17: /* statement: CHAIN expression_string  */
#line 129 "DARIC.y"
                              { (yyval.ast) = token1(CHAIN, (yyvsp[0].ast)); }
#line 4431 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 18: /* statement: CHAIN expression_string ',' plain_variable_list  */
#line 130 "DARIC.y"
                                                      { (yyval.ast) = token2(CHAIN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4437 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 19: /* statement: EXPECT plain_variable_list  */
#line 131 "DARIC.y"
                                 { (yyval.ast) = token1(EXPECT, (yyvsp[0].ast)); }
#line 4443 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 20: /* statement: END  */
#line 132 "DARIC.y"
          { (yyval.ast) = token(END); }
#line 4449 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 21: /* statement: PROCEDURE  */
#line 133 "DARIC.y"
                { (yyval.ast) = token1(CALLPROC, string((yyvsp[0].v_string))); }
#line 4455 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 22: /* statement: PROCEDURE '(' expression_list ')'  */
#line 134 "DARIC.y"
                                        { (yyval.ast) = token2(CALLPROC, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4461 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 23: /* statement: FN_INTEGER '(' expression_list ')'  */
#line 135 "DARIC.y"
                                         { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4467 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 24: /* statement: FN_REAL '(' expression_list ')'  */
#line 136 "DARIC.y"
                                      { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4473 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 25: /* statement: FN_STRING '(' expression_list ')'  */
#line 137 "DARIC.y"
                                        { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4479 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 26: /* statement: DATA expression_list  */
#line 138 "DARIC.y"
                           { (yyval.ast) = token1(DATA, (yyvsp[0].ast)); }
#line 4485 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 27: /* statement: READ variable_list  */
#line 139 "DARIC.y"
                         { (yyval.ast) = token1(READ, (yyvsp[0].ast)); }
#line 4491 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 28: /* statement: RESTORE  */
#line 140 "DARIC.y"
              { (yyval.ast) = token(RESTORE); }
#line 4497 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 29: /* statement: RETURN  */
#line 141 "DARIC.y"
             { (yyval.ast) = token(RETURN); }
#line 4503 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 30: /* statement: RETURN expression  */
#line 142 "DARIC.y"
                        { (yyval.ast) = token1(RETURN_WITH_VALUE, (yyvsp[0].ast)); }
#line 4509 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 31: /* statement: TRACEON  */
#line 143 "DARIC.y"
              { (yyval.ast) = token(TRACEON); }
#line 4515 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 32: /* statement: TRACEOFF  */
#line 144 "DARIC.y"
               { (yyval.ast) = token(TRACEOFF); }
#line 4521 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 33: /* statement: BREAKPOINT  */
#line 145 "DARIC.y"
                 { (yyval.ast) = token(BREAKPOINT); }
#line 4527 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 34: /* statement: DIM dim_variable_list  */
#line 147 "DARIC.y"
                            { (yyval.ast) = token1(DIM, (yyvsp[0].ast)); }
#line 4533 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 35: /* statement: LOCAL DIM dim_variable_list  */
#line 148 "DARIC.y"
                                  { (yyval.ast) = token1(LOCALDIM, (yyvsp[0].ast)); }
#line 4539 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 36: /* statement: BPUT expression_numeric ',' expression_numeric  */
#line 150 "DARIC.y"
                                                     { (yyval.ast) = token2(BPUT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4545 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 37: /* statement: BGET expression_numeric  */
#line 151 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 4551 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 38: /* statement: PTR expression_numeric E expression_numeric  */
#line 152 "DARIC.y"
                                                  { (yyval.ast) = token2(PTRA, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4557 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 39: /* statement: CLOSE expression_numeric  */
#line 153 "DARIC.y"
                               { (yyval.ast) = token1(CLOSE, (yyvsp[0].ast)); }
#line 4563 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 40: /* statement: STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 154 "DARIC.y"
                                                                    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(GLOBAL)); }
#line 4569 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 41: /* statement: LOCAL STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 155 "DARIC.y"
                                                                          { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(LOCAL)); }
#line 4575 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 42: /* statement: OSCLI expression_string  */
#line 157 "DARIC.y"
                              { (yyval.ast) = token1(OSCLI, (yyvsp[0].ast)); }
#line 4581 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 43: /* statement: GOSUB LITERAL_INT  */
#line 159 "DARIC.y"
                        { (yyval.ast) = token1(GOSUB, integer((yyvsp[0].v_int))); }
#line 4587 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 44: /* statement: GOTO LITERAL_INT  */
#line 160 "DARIC.y"
                       { (yyval.ast) = token1(GOTO, integer((yyvsp[0].v_int))); }
#line 4593 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 45: /* statement: INPUT_ expression_input_list  */
#line 162 "DARIC.y"
                                   { (yyval.ast) = token1(INPUT_, (yyvsp[0].ast)); }
#line 4599 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 46: /* statement: INPUT_ LITERAL_STRING expression_input_list  */
#line 163 "DARIC.y"
                                                  { (yyval.ast) = token2(INPUT_NOQUESTIONMARK, string((yyvsp[-1].v_string)), (yyvsp[0].ast)); }
#line 4605 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 47: /* statement: INPUT_ LITERAL_STRING ',' expression_input_list  */
#line 164 "DARIC.y"
                                                      { (yyval.ast) = token2(INPUT_, string((yyvsp[-2].v_string)), (yyvsp[0].ast)); }
#line 4611 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 48: /* statement: MOUSE INTEGER_VARIABLE ',' INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 165 "DARIC.y"
                                                                       { (yyval.ast) = token3(MOUSE, string((yyvsp[-4].v_string)), string((yyvsp[-2].v_string)), string((yyvsp[0].v_string)) ); }
#line 4617 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 49: /* statement: INKEY '(' expression_numeric ')'  */
#line 167 "DARIC.y"
                                       { (yyval.ast) = token1(SINKEY, (yyvsp[-1].ast)); }
#line 4623 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 50: /* statement: INKEYS '(' expression_numeric ')'  */
#line 168 "DARIC.y"
                                        { (yyval.ast) = token1(SINKEYS, (yyvsp[-1].ast)); }
#line 4629 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 51: /* statement: GET  */
#line 169 "DARIC.y"
          { (yyval.ast) = token(GET_S); }
#line 4635 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 52: /* statement: GETS  */
#line 170 "DARIC.y"
           { (yyval.ast) = token(GETS_S); }
#line 4641 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 53: /* statement: IF expression statements  */
#line 172 "DARIC.y"
                               { (yyval.ast) = token2(IF, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4647 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 54: /* statement: IF expression statement ELSE statement  */
#line 173 "DARIC.y"
                                             { (yyval.ast) = token3(IF, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4653 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 55: /* statement: IF expression NL embed_lines ENDIF  */
#line 174 "DARIC.y"
                                         { (yyval.ast) = token2(IF, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4659 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 56: /* statement: IF expression NL embed_lines ELSE NL embed_lines ENDIF  */
#line 175 "DARIC.y"
                                                             { (yyval.ast) = token3(IF, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4665 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 57: /* statement: IF expression THEN statements  */
#line 177 "DARIC.y"
                                    { (yyval.ast) = token2(IF, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4671 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 58: /* statement: IF expression THEN statements ELSE statements  */
#line 178 "DARIC.y"
                                                    { (yyval.ast) = token3(IF, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4677 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 59: /* statement: IF expression THEN NL embed_lines ENDIF  */
#line 179 "DARIC.y"
                                              { (yyval.ast) = token2(IF, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4683 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 60: /* statement: IF expression THEN NL embed_lines ELSE NL embed_lines ENDIF  */
#line 180 "DARIC.y"
                                                                  { (yyval.ast) = token3(IF, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4689 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 61: /* statement: REPEAT NL embed_lines UNTIL expression  */
#line 182 "DARIC.y"
                                             { (yyval.ast) = token2(REPEAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4695 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 62: /* statement: REPEAT UNTIL expression  */
#line 183 "DARIC.y"
                              { (yyval.ast) = token2(REPEAT, NULL, (yyvsp[0].ast)); }
#line 4701 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 63: /* statement: WHILE expression NL embed_lines ENDWHILE  */
#line 184 "DARIC.y"
                                               { (yyval.ast) = token2(WHILE, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4707 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 64: /* statement: SWAP INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 186 "DARIC.y"
                                                 { (yyval.ast) = token2(SWAP_I, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4713 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 65: /* statement: SWAP VARIABLE ',' VARIABLE  */
#line 187 "DARIC.y"
                                 { (yyval.ast) = token2(SWAP_F, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4719 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 66: /* statement: SWAP STRING_VARIABLE ',' STRING_VARIABLE  */
#line 188 "DARIC.y"
                                                { (yyval.ast) = token2(SWAP_S, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4725 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 67: /* statement: FOR VARIABLE IN_ VARIABLE '(' ')' NL embed_lines NEXT  */
#line 191 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4731 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 68: /* statement: FOR INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 192 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4737 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 69: /* statement: FOR STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 193 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4743 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 70: /* statement: FOR VARIABLE IN_ VARIABLE '(' ')' statements NEXT  */
#line 194 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4749 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 71: /* statement: FOR INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' statements NEXT  */
#line 195 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4755 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 72: /* statement: FOR STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' statements NEXT  */
#line 196 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4761 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 73: /* statement: FOR LOCAL VARIABLE IN_ VARIABLE '(' ')' NL embed_lines NEXT  */
#line 197 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4767 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 74: /* statement: FOR LOCAL INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 198 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4773 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 75: /* statement: FOR LOCAL STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 199 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4779 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 76: /* statement: FOR LOCAL VARIABLE IN_ VARIABLE '(' ')' statements NEXT  */
#line 200 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4785 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 77: /* statement: FOR LOCAL INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' statements NEXT  */
#line 201 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4791 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 78: /* statement: FOR LOCAL STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' statements NEXT  */
#line 202 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4797 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 79: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 205 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4803 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 80: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 206 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4809 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 81: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 207 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4815 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 82: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 208 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4821 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 83: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 209 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4827 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 84: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 210 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4833 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 85: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 211 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4839 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 86: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 212 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4845 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 87: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 213 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4851 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 88: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 214 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4857 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 89: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 215 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4863 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 90: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 216 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4869 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 91: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 217 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4875 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 92: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 218 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4881 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 93: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 219 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4887 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 94: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 220 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4893 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 95: /* statement: CASE expression OF NL when_list ENDCASE  */
#line 222 "DARIC.y"
                                              { (yyval.ast) = token2(CASE, (yyvsp[-4].ast), (yyvsp[-1].ast));  }
#line 4899 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 96: /* statement: CASE expression OF NL when_list OTHERWISE statement NL ENDCASE  */
#line 223 "DARIC.y"
                                                                     { (yyval.ast) = token3(CASE, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-2].ast));  }
#line 4905 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 97: /* statement: PRINT  */
#line 225 "DARIC.y"
            { (yyval.ast) = token(PRINT); }
#line 4911 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 98: /* statement: PRINT expression_print_list  */
#line 226 "DARIC.y"
                                  { (yyval.ast) = token1(PRINT, (yyvsp[0].ast)); }
#line 4917 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 99: /* statement: RENDERFRAME  */
#line 228 "DARIC.y"
                  { (yyval.ast) = token(RENDERFRAME); }
#line 4923 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 100: /* statement: CREATEVERTEX TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 231 "DARIC.y"
                                                      { (yyval.ast) = token6(CREATEVERTEX, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4929 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 101: /* statement: CREATETRIANGLE TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 234 "DARIC.y"
                                                  { (yyval.ast) = token6(CREATETRIANGLE, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4935 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 102: /* statement: TRANSLATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 235 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TRANSLATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4941 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 103: /* statement: ROTATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 236 "DARIC.y"
                                                                                                      { (yyval.ast) = token4(ROTATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4947 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 104: /* statement: SCALE expression_numeric ',' expression_numeric  */
#line 237 "DARIC.y"
                                                      { (yyval.ast) = token2(SCALE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4953 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 105: /* statement: DELETEOBJECT expression_numeric  */
#line 238 "DARIC.y"
                                      { (yyval.ast) = token1(DELETEOBJECT, (yyvsp[0].ast)); }
#line 4959 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 106: /* statement: CLS  */
#line 240 "DARIC.y"
          { (yyval.ast) = token(CLS); }
#line 4965 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 107: /* statement: COLOUR expression_numeric  */
#line 241 "DARIC.y"
                                { (yyval.ast) = token1(COLOUR, (yyvsp[0].ast)); }
#line 4971 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 108: /* statement: COLOUR expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 242 "DARIC.y"
                                                                              { (yyval.ast) = token3(COLOUR, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4977 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 109: /* statement: COLOURBG expression_numeric  */
#line 243 "DARIC.y"
                                  { (yyval.ast) = token1(COLOURBG, (yyvsp[0].ast)); }
#line 4983 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 110: /* statement: COLOURBG expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 244 "DARIC.y"
                                                                                { (yyval.ast) = token3(COLOURBG, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4989 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 111: /* statement: GRAPHICS expression_numeric ',' expression_numeric  */
#line 245 "DARIC.y"
                                                         { (yyval.ast) = token2(GRAPHICS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4995 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 112: /* statement: GRAPHICS BANKED expression_numeric ',' expression_numeric  */
#line 246 "DARIC.y"
                                                                { (yyval.ast) = token2(BANKED, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5001 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 113: /* statement: GRAPHICS  */
#line 247 "DARIC.y"
               { (yyval.ast) = token(GRAPHICS); }
#line 5007 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 114: /* statement: GRAPHICS BANKED  */
#line 248 "DARIC.y"
                      { (yyval.ast) = token(BANKED); }
#line 5013 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 115: /* statement: FLIP  */
#line 249 "DARIC.y"
           { (yyval.ast) = token(FLIP); }
#line 5019 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 116: /* statement: CIRCLE expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 250 "DARIC.y"
                                                                              { (yyval.ast) = token3(CIRCLE, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5025 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 117: /* statement: CIRCLE FILL expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 251 "DARIC.y"
                                                                                   { (yyval.ast) = token3(CIRCLEFILL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5031 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 118: /* statement: LINE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 252 "DARIC.y"
                                                                                                   { (yyval.ast) = token4(LINE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5037 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 119: /* statement: RECTANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 253 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(RECTANGLE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5043 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 120: /* statement: RECTANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 254 "DARIC.y"
                                                                                                             { (yyval.ast) = token4(RECTANGLEFILL, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5049 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 121: /* statement: TRIANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 255 "DARIC.y"
                                                                                                                                                     { (yyval.ast) = token6(TRIANGLE, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5055 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 122: /* statement: TRIANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 256 "DARIC.y"
                                                                                                                                                          { (yyval.ast) = token6(TRIANGLEFILL, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5061 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 123: /* statement: TRIANGLE SHADED expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 259 "DARIC.y"
                                                                                         { (yyval.ast) = token9(TRIANGLESHADED, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5067 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 124: /* statement: PLOT expression_numeric ',' expression_numeric  */
#line 260 "DARIC.y"
                                                     { (yyval.ast) = token2(PLOT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5073 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 125: /* statement: CLIPON expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 261 "DARIC.y"
                                                                                                     { (yyval.ast) = token4(CLIPON, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5079 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 126: /* statement: CLIPOFF  */
#line 262 "DARIC.y"
              { (yyval.ast) = token(CLIPOFF); }
#line 5085 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 127: /* statement: TEXT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 263 "DARIC.y"
                                                                                                  { (yyval.ast) = token4(TEXT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5091 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 128: /* statement: TEXTRIGHT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 264 "DARIC.y"
                                                                                                       { (yyval.ast) = token4(TEXTRIGHT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5097 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 129: /* statement: TEXTCENTRE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 265 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TEXTCENTRE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5103 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 130: /* statement: SHOWFPS  */
#line 266 "DARIC.y"
              { (yyval.ast) = token(SHOWFPS); }
#line 5109 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 131: /* number: LITERAL_INT  */
#line 270 "DARIC.y"
                  { (yyval.ast) = integer((yyvsp[0].v_int)); }
#line 5115 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 132: /* number: MINUS LITERAL_INT  */
#line 271 "DARIC.y"
                                  { (yyval.ast) = integer(-(yyvsp[0].v_int)); }
#line 5121 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 133: /* number: LITERAL_REAL  */
#line 272 "DARIC.y"
                   { (yyval.ast) = real((yyvsp[0].v_real)); }
#line 5127 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 134: /* number: MINUS LITERAL_REAL  */
#line 273 "DARIC.y"
                                   { (yyval.ast) = real(-(yyvsp[0].v_real)); }
#line 5133 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 135: /* expression_numeric: number  */
#line 277 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 5139 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 136: /* expression_numeric: variable_integer  */
#line 278 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5145 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 137: /* expression_numeric: variable_real  */
#line 279 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5151 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 138: /* expression_numeric: '(' expression_numeric ')'  */
#line 280 "DARIC.y"
                                 { (yyval.ast) = (yyvsp[-1].ast); }
#line 5157 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 139: /* expression_numeric: FLOAT_ '(' expression_numeric ')'  */
#line 281 "DARIC.y"
                                        { (yyval.ast) = token1(FLOAT_, (yyvsp[-1].ast)); }
#line 5163 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 140: /* expression_numeric: INT_ '(' expression_numeric ')'  */
#line 282 "DARIC.y"
                                      { (yyval.ast) = token1(INT_, (yyvsp[-1].ast)); }
#line 5169 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 141: /* expression_numeric: MINUS variable_integer  */
#line 283 "DARIC.y"
                             { (yyval.ast) = token2(MINUS, integer(0), (yyvsp[0].ast)); }
#line 5175 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 142: /* expression_numeric: MINUS variable_real  */
#line 284 "DARIC.y"
                          { (yyval.ast) = token2(MINUS, real(0.0), (yyvsp[0].ast)); }
#line 5181 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 143: /* expression_numeric: expression_numeric PLUS expression_numeric  */
#line 285 "DARIC.y"
                                                 { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5187 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 144: /* expression_numeric: expression_numeric MINUS expression_numeric  */
#line 286 "DARIC.y"
                                                  { (yyval.ast) = token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5193 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 145: /* expression_numeric: expression_numeric MULTIPLY expression_numeric  */
#line 287 "DARIC.y"
                                                     { (yyval.ast) = token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5199 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 146: /* expression_numeric: expression_numeric DIVIDE expression_numeric  */
#line 288 "DARIC.y"
                                                   { (yyval.ast) = token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5205 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 147: /* expression_numeric: expression_numeric INTEGERDIVIDE expression_numeric  */
#line 289 "DARIC.y"
                                                          { (yyval.ast) = token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5211 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 148: /* expression_numeric: expression_numeric DIV expression_numeric  */
#line 290 "DARIC.y"
                                                { (yyval.ast) = token2(DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5217 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 149: /* expression_numeric: expression_numeric MOD expression_numeric  */
#line 291 "DARIC.y"
                                                { (yyval.ast) = token2(MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5223 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 150: /* expression_numeric: expression_numeric SHL expression_numeric  */
#line 292 "DARIC.y"
                                                { (yyval.ast) = token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5229 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 151: /* expression_numeric: expression_numeric SHR expression_numeric  */
#line 293 "DARIC.y"
                                                { (yyval.ast) = token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5235 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 152: /* expression_numeric: expression_numeric E expression_numeric  */
#line 294 "DARIC.y"
                                              { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5241 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 153: /* expression_numeric: expression_numeric NE expression_numeric  */
#line 295 "DARIC.y"
                                               { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5247 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 154: /* expression_numeric: expression_numeric GE expression_numeric  */
#line 296 "DARIC.y"
                                               { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5253 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 155: /* expression_numeric: expression_numeric LE expression_numeric  */
#line 297 "DARIC.y"
                                               { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5259 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 156: /* expression_numeric: expression_numeric LT expression_numeric  */
#line 298 "DARIC.y"
                                               { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5265 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 157: /* expression_numeric: expression_numeric GT expression_numeric  */
#line 299 "DARIC.y"
                                               { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5271 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 158: /* expression_numeric: expression_numeric AND expression_numeric  */
#line 300 "DARIC.y"
                                                { (yyval.ast) = token2(AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5277 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 159: /* expression_numeric: expression_numeric OR expression_numeric  */
#line 301 "DARIC.y"
                                               { (yyval.ast) = token2(OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5283 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 160: /* expression_numeric: expression_numeric EOR expression_numeric  */
#line 302 "DARIC.y"
                                                { (yyval.ast) = token2(EOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5289 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 161: /* expression_numeric: FN_INTEGER '(' expression_list ')'  */
#line 304 "DARIC.y"
                                         { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5295 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 162: /* expression_numeric: FN_REAL '(' expression_list ')'  */
#line 305 "DARIC.y"
                                      { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5301 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 163: /* expression_numeric: DIM '(' VARIABLE '(' ')' ',' number ')'  */
#line 307 "DARIC.y"
                                              { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::REAL), (yyvsp[-1].ast)); }
#line 5307 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 164: /* expression_numeric: DIM '(' INTEGER_VARIABLE '(' ')' ',' number ')'  */
#line 308 "DARIC.y"
                                                      { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::INTEGER), (yyvsp[-1].ast)); }
#line 5313 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 165: /* expression_numeric: DIM '(' STRING_VARIABLE '(' ')' ',' number ')'  */
#line 309 "DARIC.y"
                                                     { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::STRING), (yyvsp[-1].ast)); }
#line 5319 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 166: /* expression_numeric: PTR expression_numeric  */
#line 311 "DARIC.y"
                             { (yyval.ast) = token1(PTR, (yyvsp[0].ast)); }
#line 5325 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 167: /* expression_numeric: GET  */
#line 313 "DARIC.y"
          { (yyval.ast) = token(GET); }
#line 5331 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 168: /* expression_numeric: INKEY '(' expression_numeric ')'  */
#line 314 "DARIC.y"
                                       { (yyval.ast) = token1(INKEY, (yyvsp[-1].ast)); }
#line 5337 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 169: /* expression_numeric: BOOLTRUE  */
#line 316 "DARIC.y"
               { (yyval.ast) = integer(1); }
#line 5343 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 170: /* expression_numeric: BOOLFALSE  */
#line 317 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5349 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 171: /* expression_numeric: TIME  */
#line 318 "DARIC.y"
           { (yyval.ast) = token(TIME); }
#line 5355 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 172: /* expression_numeric: SOLID  */
#line 320 "DARIC.y"
                        { (yyval.ast) = integer(0); }
#line 5361 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 173: /* expression_numeric: WIREFRAME  */
#line 321 "DARIC.y"
                        { (yyval.ast) = integer(1); }
#line 5367 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 174: /* expression_numeric: SHADED  */
#line 322 "DARIC.y"
                        { (yyval.ast) = integer(2); }
#line 5373 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 175: /* expression_numeric: FILLEDWIREFRAME  */
#line 323 "DARIC.y"
                        { (yyval.ast) = integer(3); }
#line 5379 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 176: /* expression_numeric: CREATESHAPE TYPE_VARIABLE ',' TYPE_VARIABLE  */
#line 325 "DARIC.y"
                                                  { (yyval.ast) = token2(CREATESHAPE, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 5385 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 177: /* expression_numeric: CREATEOBJECT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 330 "DARIC.y"
                                                  { (yyval.ast) = token9(CREATEOBJECT, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5391 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 178: /* expression_numeric: RED  */
#line 332 "DARIC.y"
                { (yyval.ast) = integer(0xFF0000); }
#line 5397 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 179: /* expression_numeric: GREEN  */
#line 333 "DARIC.y"
                { (yyval.ast) = integer(0x00FF00); }
#line 5403 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 180: /* expression_numeric: YELLOW  */
#line 334 "DARIC.y"
                { (yyval.ast) = integer(0xFFFF00); }
#line 5409 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 181: /* expression_numeric: BLUE  */
#line 335 "DARIC.y"
                { (yyval.ast) = integer(0x0000FF); }
#line 5415 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 182: /* expression_numeric: MAGENTA  */
#line 336 "DARIC.y"
                { (yyval.ast) = integer(0xFF00FF); }
#line 5421 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 183: /* expression_numeric: CYAN  */
#line 337 "DARIC.y"
                { (yyval.ast) = integer(0x00FFFF); }
#line 5427 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 184: /* expression_numeric: WHITE  */
#line 338 "DARIC.y"
                { (yyval.ast) = integer(0xFFFFFF); }
#line 5433 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 185: /* expression_numeric: BLACK  */
#line 339 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5439 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 186: /* expression_numeric: LASTPOS  */
#line 340 "DARIC.y"
                { (yyval.ast) = integer(-1); }
#line 5445 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 187: /* expression_numeric: COLOUR '(' expression_numeric ',' expression_numeric ',' expression_numeric ')'  */
#line 341 "DARIC.y"
                                                                                      { (yyval.ast) = token3(COLOUREXP, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5451 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 188: /* expression_numeric: POINT_ '(' expression_numeric ',' expression_numeric ')'  */
#line 342 "DARIC.y"
                                                               { (yyval.ast) = token2(POINT_, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5457 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 189: /* expression_numeric: SCREENWIDTH  */
#line 343 "DARIC.y"
                  { (yyval.ast) = token(SCREENWIDTH); }
#line 5463 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 190: /* expression_numeric: SCREENHEIGHT  */
#line 344 "DARIC.y"
                   { (yyval.ast) = token(SCREENHEIGHT); }
#line 5469 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 191: /* expression_numeric: LOADTYPEFACE expression_string  */
#line 345 "DARIC.y"
                                     { (yyval.ast) = token1(LOADTYPEFACE, (yyvsp[0].ast)); }
#line 5475 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 192: /* expression_numeric: CREATEFONT expression_numeric ',' expression_numeric  */
#line 346 "DARIC.y"
                                                           { (yyval.ast) = token2(CREATEFONT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5481 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 193: /* expression_numeric: MONO15  */
#line 347 "DARIC.y"
             { (yyval.ast) = integer(0); }
#line 5487 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 194: /* expression_numeric: MONO20  */
#line 348 "DARIC.y"
             { (yyval.ast) = integer(1); }
#line 5493 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 195: /* expression_numeric: MONO25  */
#line 349 "DARIC.y"
             { (yyval.ast) = integer(2); }
#line 5499 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 196: /* expression_numeric: MONO30  */
#line 350 "DARIC.y"
             { (yyval.ast) = integer(3); }
#line 5505 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 197: /* expression_numeric: MONO35  */
#line 351 "DARIC.y"
             { (yyval.ast) = integer(4); }
#line 5511 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 198: /* expression_numeric: MONO40  */
#line 352 "DARIC.y"
             { (yyval.ast) = integer(5); }
#line 5517 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 199: /* expression_numeric: MONO50  */
#line 353 "DARIC.y"
             { (yyval.ast) = integer(6); }
#line 5523 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 200: /* expression_numeric: MONO75  */
#line 354 "DARIC.y"
             { (yyval.ast) = integer(7); }
#line 5529 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 201: /* expression_numeric: MONO100  */
#line 355 "DARIC.y"
              { (yyval.ast) = integer(8); }
#line 5535 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 202: /* expression_numeric: PROP15  */
#line 356 "DARIC.y"
             { (yyval.ast) = integer(9); }
#line 5541 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 203: /* expression_numeric: PROP20  */
#line 357 "DARIC.y"
             { (yyval.ast) = integer(10); }
#line 5547 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 204: /* expression_numeric: PROP25  */
#line 358 "DARIC.y"
             { (yyval.ast) = integer(11); }
#line 5553 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 205: /* expression_numeric: PROP30  */
#line 359 "DARIC.y"
             { (yyval.ast) = integer(12); }
#line 5559 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 206: /* expression_numeric: PROP35  */
#line 360 "DARIC.y"
             { (yyval.ast) = integer(13); }
#line 5565 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 207: /* expression_numeric: PROP40  */
#line 361 "DARIC.y"
             { (yyval.ast) = integer(14); }
#line 5571 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 208: /* expression_numeric: PROP50  */
#line 362 "DARIC.y"
             { (yyval.ast) = integer(15); }
#line 5577 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 209: /* expression_numeric: PROP75  */
#line 363 "DARIC.y"
             { (yyval.ast) = integer(16); }
#line 5583 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 210: /* expression_numeric: PROP100  */
#line 364 "DARIC.y"
              { (yyval.ast) = integer(17); }
#line 5589 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 211: /* expression_numeric: SERIF15  */
#line 365 "DARIC.y"
              { (yyval.ast) = integer(18); }
#line 5595 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 212: /* expression_numeric: SERIF20  */
#line 366 "DARIC.y"
              { (yyval.ast) = integer(19); }
#line 5601 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 213: /* expression_numeric: SERIF25  */
#line 367 "DARIC.y"
              { (yyval.ast) = integer(20); }
#line 5607 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 214: /* expression_numeric: SERIF30  */
#line 368 "DARIC.y"
              { (yyval.ast) = integer(21); }
#line 5613 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 215: /* expression_numeric: SERIF35  */
#line 369 "DARIC.y"
              { (yyval.ast) = integer(22); }
#line 5619 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 216: /* expression_numeric: SERIF40  */
#line 370 "DARIC.y"
              { (yyval.ast) = integer(23); }
#line 5625 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 217: /* expression_numeric: SERIF50  */
#line 371 "DARIC.y"
              { (yyval.ast) = integer(24); }
#line 5631 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 218: /* expression_numeric: SERIF75  */
#line 372 "DARIC.y"
              { (yyval.ast) = integer(25); }
#line 5637 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 219: /* expression_numeric: SERIF100  */
#line 373 "DARIC.y"
               { (yyval.ast) = integer(26); }
#line 5643 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 220: /* expression_numeric: EOFH expression_numeric  */
#line 374 "DARIC.y"
                              { (yyval.ast) = token1(EOFH, (yyvsp[0].ast)); }
#line 5649 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 221: /* expression_numeric: BGET expression_numeric  */
#line 375 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 5655 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 222: /* expression_numeric: OPENIN '(' expression_string ')'  */
#line 376 "DARIC.y"
                                       { (yyval.ast) = token1(OPENIN, (yyvsp[-1].ast)); }
#line 5661 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 223: /* expression_numeric: OPENOUT '(' expression_string ')'  */
#line 377 "DARIC.y"
                                        { (yyval.ast) = token1(OPENOUT, (yyvsp[-1].ast)); }
#line 5667 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 224: /* expression_numeric: OPENUP '(' expression_string ')'  */
#line 378 "DARIC.y"
                                       { (yyval.ast) = token1(OPENUP, (yyvsp[-1].ast)); }
#line 5673 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 225: /* expression_numeric: RND  */
#line 380 "DARIC.y"
          { (yyval.ast) = token(RND); }
#line 5679 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 226: /* expression_numeric: RND0  */
#line 381 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(0)); }
#line 5685 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 227: /* expression_numeric: RND1  */
#line 382 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(1)); }
#line 5691 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 228: /* expression_numeric: RND '(' expression_numeric ')'  */
#line 383 "DARIC.y"
                                     { (yyval.ast) = token1(RNDRANGE, (yyvsp[-1].ast)); }
#line 5697 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 229: /* expression_numeric: PI  */
#line 385 "DARIC.y"
         { (yyval.ast) = token(PI); }
#line 5703 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 230: /* expression_numeric: NOT expression_numeric  */
#line 386 "DARIC.y"
                             { (yyval.ast) = token1(NOT, (yyvsp[0].ast)); }
#line 5709 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 231: /* expression_numeric: SQR '(' expression_numeric ')'  */
#line 387 "DARIC.y"
                                     { (yyval.ast) = token1(SQR, (yyvsp[-1].ast)); }
#line 5715 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 232: /* expression_numeric: LN '(' expression_numeric ')'  */
#line 388 "DARIC.y"
                                    { (yyval.ast) = token1(LN, (yyvsp[-1].ast)); }
#line 5721 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 233: /* expression_numeric: LOG '(' expression_numeric ')'  */
#line 389 "DARIC.y"
                                     { (yyval.ast) = token1(LOG, (yyvsp[-1].ast)); }
#line 5727 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 234: /* expression_numeric: EXP '(' expression_numeric ')'  */
#line 390 "DARIC.y"
                                     { (yyval.ast) = token1(EXP, (yyvsp[-1].ast)); }
#line 5733 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 235: /* expression_numeric: ATN '(' expression_numeric ')'  */
#line 391 "DARIC.y"
                                     { (yyval.ast) = token1(ATN, (yyvsp[-1].ast)); }
#line 5739 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 236: /* expression_numeric: TAN '(' expression_numeric ')'  */
#line 392 "DARIC.y"
                                     { (yyval.ast) = token1(TAN, (yyvsp[-1].ast)); }
#line 5745 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 237: /* expression_numeric: COS '(' expression_numeric ')'  */
#line 393 "DARIC.y"
                                     { (yyval.ast) = token1(COS, (yyvsp[-1].ast)); }
#line 5751 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 238: /* expression_numeric: SIN '(' expression_numeric ')'  */
#line 394 "DARIC.y"
                                     { (yyval.ast) = token1(SIN, (yyvsp[-1].ast)); }
#line 5757 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 239: /* expression_numeric: ABS '(' expression_numeric ')'  */
#line 395 "DARIC.y"
                                     { (yyval.ast) = token1(ABS, (yyvsp[-1].ast)); }
#line 5763 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 240: /* expression_numeric: ACS '(' expression_numeric ')'  */
#line 396 "DARIC.y"
                                     { (yyval.ast) = token1(ACS, (yyvsp[-1].ast)); }
#line 5769 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 241: /* expression_numeric: ASN '(' expression_numeric ')'  */
#line 397 "DARIC.y"
                                     { (yyval.ast) = token1(ASN, (yyvsp[-1].ast)); }
#line 5775 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 242: /* expression_numeric: DEG '(' expression_numeric ')'  */
#line 398 "DARIC.y"
                                     { (yyval.ast) = token1(DEG, (yyvsp[-1].ast)); }
#line 5781 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 243: /* expression_numeric: RAD '(' expression_numeric ')'  */
#line 399 "DARIC.y"
                                     { (yyval.ast) = token1(RAD, (yyvsp[-1].ast)); }
#line 5787 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 244: /* expression_numeric: SGN '(' expression_numeric ')'  */
#line 400 "DARIC.y"
                                     { (yyval.ast) = token1(SGN, (yyvsp[-1].ast)); }
#line 5793 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 245: /* expression_numeric: ASC '(' expression_string ')'  */
#line 402 "DARIC.y"
                                    { (yyval.ast) = token1(ASC, (yyvsp[-1].ast)); }
#line 5799 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 246: /* expression_numeric: LEN '(' expression_string ')'  */
#line 403 "DARIC.y"
                                    { (yyval.ast) = token1(LEN, (yyvsp[-1].ast)); }
#line 5805 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 247: /* expression_numeric: INSTR '(' expression_string ',' expression_string ')'  */
#line 404 "DARIC.y"
                                                            { (yyval.ast) = token3(INSTR, (yyvsp[-3].ast), (yyvsp[-1].ast), integer(1)); }
#line 5811 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 248: /* expression_numeric: INSTR '(' expression_string ',' expression_string ',' expression_numeric ')'  */
#line 405 "DARIC.y"
                                                                                   { (yyval.ast) = token3(INSTR, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5817 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 249: /* expression_numeric: VAL '(' expression_string ')'  */
#line 406 "DARIC.y"
                                    { (yyval.ast) = token1(VAL, (yyvsp[-1].ast)); }
#line 5823 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 250: /* variable_integer: INTEGER_VARIABLE  */
#line 410 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5829 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 251: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 411 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5835 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 252: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 412 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5841 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 253: /* variable_integer: TYPE_VARIABLE INTEGER_VARIABLE  */
#line 413 "DARIC.y"
                                     { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5847 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 254: /* variable_integer: TYPE_VARIABLE '(' expression_numeric ')' INTEGER_VARIABLE  */
#line 414 "DARIC.y"
                                                                { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5853 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 255: /* variable_real: VARIABLE  */
#line 418 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 5859 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 256: /* variable_real: VARIABLE '(' expression_numeric ')'  */
#line 419 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5865 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 257: /* variable_real: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 420 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5871 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 258: /* variable_real: TYPE_VARIABLE VARIABLE  */
#line 421 "DARIC.y"
                             { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5877 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 259: /* variable_real: TYPE_VARIABLE '(' expression_numeric ')' VARIABLE  */
#line 422 "DARIC.y"
                                                        { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5883 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 260: /* variable_numeric: variable_integer  */
#line 426 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5889 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 261: /* variable_numeric: variable_real  */
#line 427 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5895 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 262: /* variable_string: STRING_VARIABLE  */
#line 431 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 5901 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 263: /* variable_string: STRING_VARIABLE '(' expression_numeric ')'  */
#line 432 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5907 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 264: /* variable_string: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 433 "DARIC.y"
                                                                        { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5913 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 265: /* variable_string: TYPE_VARIABLE '(' expression_numeric ')' STRING_VARIABLE  */
#line 434 "DARIC.y"
                                                               { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5919 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 266: /* variable: variable_numeric  */
#line 438 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5925 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 267: /* variable: variable_string  */
#line 439 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 5931 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 268: /* variable_list: variable  */
#line 443 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 5937 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 269: /* variable_list: variable ',' variable_list  */
#line 444 "DARIC.y"
                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5943 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 270: /* plain_variable: INTEGER_VARIABLE  */
#line 448 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5949 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 271: /* plain_variable: VARIABLE  */
#line 449 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 5955 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 272: /* plain_variable: STRING_VARIABLE  */
#line 450 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 5961 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 273: /* plain_variable_list: plain_variable  */
#line 454 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 5967 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 274: /* plain_variable_list: plain_variable ',' plain_variable_list  */
#line 455 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5973 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 275: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 459 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5979 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 276: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 460 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5985 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 277: /* dim_variable: VARIABLE '(' expression_numeric ')'  */
#line 461 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5991 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 278: /* dim_variable: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 462 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5997 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 279: /* dim_variable: STRING_VARIABLE '(' expression_numeric ')'  */
#line 463 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6003 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 280: /* dim_variable: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 464 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6009 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 281: /* dim_variable: TYPE_VARIABLE '(' expression_numeric ',' VARIABLE ')'  */
#line 465 "DARIC.y"
                                                            { (yyval.ast) = typevariable1d((yyvsp[-5].v_string), (yyvsp[-1].v_string), (yyvsp[-3].ast), Type::TYPE_ARRAY); }
#line 6015 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 282: /* dim_variable_list: dim_variable  */
#line 469 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6021 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 283: /* dim_variable_list: dim_variable ',' dim_variable_list  */
#line 470 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6027 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 284: /* type_variable: TYPE_VARIABLE  */
#line 474 "DARIC.y"
                    { (yyval.ast) = variable((yyvsp[0].v_string), Type::TYPE); }
#line 6033 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 285: /* type_variable: TYPE_VARIABLE '(' expression_numeric ')'  */
#line 475 "DARIC.y"
                                               { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::TYPE_ARRAY); }
#line 6039 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 286: /* type: TYPE_ VARIABLE NL field_list ENDTYPE  */
#line 479 "DARIC.y"
                                           { (yyval.ast) = token2(TYPE_, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 6045 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 287: /* field: FIELD variable  */
#line 483 "DARIC.y"
                     { (yyval.ast) = token1(FIELD, (yyvsp[0].ast)); }
#line 6051 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 288: /* field_list: field NL  */
#line 487 "DARIC.y"
              { (yyval.ast) = (yyvsp[-1].ast); }
#line 6057 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 289: /* field_list: field NL field_list  */
#line 488 "DARIC.y"
                          { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6063 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 290: /* string: LITERAL_STRING  */
#line 492 "DARIC.y"
                     { (yyval.ast) = string((yyvsp[0].v_string)); }
#line 6069 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 291: /* expression_string: string  */
#line 496 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 6075 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 292: /* expression_string: variable_string  */
#line 497 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6081 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 293: /* expression_string: expression_string PLUS expression_string  */
#line 498 "DARIC.y"
                                               { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6087 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 294: /* expression_string: expression_string E expression_string  */
#line 499 "DARIC.y"
                                            { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6093 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 295: /* expression_string: expression_string NE expression_string  */
#line 500 "DARIC.y"
                                             { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6099 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 296: /* expression_string: expression_string GE expression_string  */
#line 501 "DARIC.y"
                                             { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6105 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 297: /* expression_string: expression_string LE expression_string  */
#line 502 "DARIC.y"
                                             { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6111 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 298: /* expression_string: expression_string LT expression_string  */
#line 503 "DARIC.y"
                                             { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6117 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 299: /* expression_string: expression_string GT expression_string  */
#line 504 "DARIC.y"
                                             { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6123 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 300: /* expression_string: GETSH expression_numeric  */
#line 506 "DARIC.y"
                               { (yyval.ast) = token1(GETSH, (yyvsp[0].ast)); }
#line 6129 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 301: /* expression_string: FN_STRING '(' expression_list ')'  */
#line 508 "DARIC.y"
                                        { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 6135 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 302: /* expression_string: GETS  */
#line 510 "DARIC.y"
           { (yyval.ast) = token(GETS); }
#line 6141 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 303: /* expression_string: INKEYS '(' expression_numeric ')'  */
#line 511 "DARIC.y"
                                        { (yyval.ast) = token1(INKEYS, (yyvsp[-1].ast)); }
#line 6147 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 304: /* expression_string: TIMES  */
#line 513 "DARIC.y"
            { (yyval.ast) = token(TIMES); }
#line 6153 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 305: /* expression_string: STRS '(' expression_numeric ')'  */
#line 514 "DARIC.y"
                                      { (yyval.ast) = token1(STRS, (yyvsp[-1].ast)); }
#line 6159 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 306: /* expression_string: STRS TILDE '(' expression_numeric ')'  */
#line 515 "DARIC.y"
                                            { (yyval.ast) = token1(STRSHEX, (yyvsp[-1].ast)); }
#line 6165 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 307: /* expression_string: STRINGS '(' expression_numeric ',' expression_string ')'  */
#line 516 "DARIC.y"
                                                               { (yyval.ast) = token2(STRINGS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6171 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 308: /* expression_string: CHRS '(' expression_numeric ')'  */
#line 517 "DARIC.y"
                                      { (yyval.ast) = token1(CHRS, (yyvsp[-1].ast)); }
#line 6177 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 309: /* expression_string: LEFTS '(' expression_string ',' expression_numeric ')'  */
#line 518 "DARIC.y"
                                                             { (yyval.ast) = token2(LEFTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6183 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 310: /* expression_string: MIDS '(' expression_string ',' expression_numeric ',' expression_numeric ')'  */
#line 519 "DARIC.y"
                                                                                   { (yyval.ast) = token3(MIDS, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6189 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 311: /* expression_string: RIGHTS '(' expression_string ',' expression_numeric ')'  */
#line 520 "DARIC.y"
                                                              { (yyval.ast) = token2(RIGHTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6195 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 312: /* expression: expression_numeric  */
#line 524 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6201 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 313: /* expression: expression_string  */
#line 525 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6207 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 314: /* expression_list: %empty  */
#line 529 "DARIC.y"
                     { (yyval.ast) = NULL; }
#line 6213 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 315: /* expression_list: expression  */
#line 530 "DARIC.y"
                 { (yyval.ast) = (yyvsp[0].ast); }
#line 6219 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 316: /* expression_list: expression ',' expression_list  */
#line 531 "DARIC.y"
                                     { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6225 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 317: /* assignment_single: variable_numeric E expression_numeric  */
#line 535 "DARIC.y"
                                            { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6231 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 318: /* assignment_single: variable_string E expression_string  */
#line 536 "DARIC.y"
                                          { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6237 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 319: /* assignment_single: type_variable E expression  */
#line 537 "DARIC.y"
                                 { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6243 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 320: /* assignment_single: type_variable variable E expression  */
#line 538 "DARIC.y"
                                          { (yyval.ast) = assignment(link((yyvsp[-3].ast), (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 6249 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 321: /* assignment_list: assignment_single  */
#line 542 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6255 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 322: /* assignment_list: assignment_single ',' assignment_list  */
#line 543 "DARIC.y"
                                            { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6261 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 323: /* assignment: assignment_list  */
#line 547 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6267 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 324: /* assignment: LOCAL assignment_list  */
#line 548 "DARIC.y"
                            { (yyval.ast) = token1(LOCAL, (yyvsp[0].ast)); }
#line 6273 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 325: /* assignment: GLOBAL assignment_list  */
#line 549 "DARIC.y"
                             { (yyval.ast) = token1(GLOBAL, (yyvsp[0].ast)); }
#line 6279 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 326: /* assignment: variable_numeric SHL_E expression_numeric  */
#line 550 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6285 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 327: /* assignment: variable_numeric SHR_E expression_numeric  */
#line 551 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6291 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 328: /* assignment: variable_numeric PLUS_E expression_numeric  */
#line 552 "DARIC.y"
                                                 { (yyval.ast) = assignment((yyvsp[-2].ast), token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6297 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 329: /* assignment: variable_numeric MINUS_E expression_numeric  */
#line 553 "DARIC.y"
                                                  { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6303 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 330: /* assignment: variable_numeric MULTIPLY_E expression_numeric  */
#line 554 "DARIC.y"
                                                     { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6309 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 331: /* assignment: variable_numeric DIVIDE_E expression_numeric  */
#line 555 "DARIC.y"
                                                   { (yyval.ast) = assignment((yyvsp[-2].ast), token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6315 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 332: /* assignment: variable_numeric INTEGERDIVIDE_E expression_numeric  */
#line 556 "DARIC.y"
                                                          { (yyval.ast) = assignment((yyvsp[-2].ast), token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6321 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 333: /* expression_print: expression_string  */
#line 560 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6327 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 334: /* expression_print: expression_numeric  */
#line 561 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6333 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 335: /* expression_print: ','  */
#line 562 "DARIC.y"
          { (yyval.ast) = token(COMMA); }
#line 6339 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 336: /* expression_print: TILDE  */
#line 563 "DARIC.y"
            { (yyval.ast) = token(TILDE); }
#line 6345 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 337: /* expression_print: TICK  */
#line 564 "DARIC.y"
           { (yyval.ast) = token(TICK); }
#line 6351 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 338: /* expression_print: SPC '(' expression_numeric ')'  */
#line 565 "DARIC.y"
                                     { (yyval.ast) = token1(SPC, (yyvsp[-1].ast)); }
#line 6357 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 339: /* expression_print: SEMICOLON  */
#line 566 "DARIC.y"
                { (yyval.ast) = token(SEMICOLON); }
#line 6363 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 340: /* expression_print_list: expression_print  */
#line 570 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6369 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 341: /* expression_print_list: expression_print expression_print_list  */
#line 571 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6375 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 343: /* expression_input_list: expression_input  */
#line 579 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6381 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 344: /* expression_input_list: expression_input ',' expression_input_list  */
#line 580 "DARIC.y"
                                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6387 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 345: /* proc_parameter: %empty  */
#line 584 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6393 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 346: /* proc_parameter: variable  */
#line 585 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6399 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 347: /* proc_parameter: RETURN variable  */
#line 586 "DARIC.y"
                      { (yyval.ast) = token1(RETURN_PARAMETER, (yyvsp[0].ast)); }
#line 6405 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 348: /* proc_parameter_list: proc_parameter  */
#line 590 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 6411 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 349: /* proc_parameter_list: proc_parameter ',' proc_parameter_list  */
#line 591 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6417 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 350: /* fn_parameter: %empty  */
#line 595 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6423 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 351: /* fn_parameter: variable  */
#line 596 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6429 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 352: /* fn_parameter_list: fn_parameter  */
#line 600 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6435 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 353: /* fn_parameter_list: fn_parameter ',' fn_parameter_list  */
#line 601 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6441 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 354: /* when: WHEN expression_list statements NL  */
#line 605 "DARIC.y"
                                         { (yyval.ast) = token2(WHEN, (yyvsp[-2].ast), (yyvsp[-1].ast)); }
#line 6447 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 355: /* when_list: when  */
#line 609 "DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 6453 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 356: /* when_list: when when_list  */
#line 610 "DARIC.y"
                     { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6459 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 357: /* define_function: DEFPROC '(' proc_parameter_list ')' NL embed_lines ENDPROC  */
#line 613 "DARIC.y"
                                                                 { (yyval.ast) = token3typed(DEFPROC, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::NOTYPE); }
#line 6465 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 358: /* define_function: DEFPROC '(' proc_parameter_list ')' NL embed_lines LINE_NUMBER ENDPROC  */
#line 614 "DARIC.y"
                                                                             { (yyval.ast) = token3typed(DEFPROC, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-2].ast), Type::NOTYPE); }
#line 6471 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 359: /* define_function: DEFFN_INTEGER '(' fn_parameter_list ')' NL embed_lines ENDFN  */
#line 615 "DARIC.y"
                                                                   { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::INTEGER); }
#line 6477 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 360: /* define_function: DEFFN_REAL '(' fn_parameter_list ')' NL embed_lines ENDFN  */
#line 616 "DARIC.y"
                                                                { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::REAL); }
#line 6483 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 361: /* define_function: DEFFN_STRING '(' fn_parameter_list ')' NL embed_lines ENDFN  */
#line 617 "DARIC.y"
                                                                  { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::STRING); }
#line 6489 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;


#line 6493 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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

#line 620 "DARIC.y"


int parse(const char *filename) {
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
