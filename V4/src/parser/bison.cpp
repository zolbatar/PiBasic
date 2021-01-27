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

struct AST* final;
extern int yylex();
extern FILE *yyin;
extern int yyfileno;
extern int yylineno;
extern std::stack<std::string> file_stack;
std::list<std::string> error_list;
extern std::string file;
extern std::map<std::string, int> files_index;
void yyerror(const char *e);
int yylex_destroy(void);
int status;
extern bool interactive;

#line 98 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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
  YYSYMBOL_daric = 247,                    /* daric  */
  YYSYMBOL_top_level_statement_list = 248, /* top_level_statement_list  */
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
#define YYFINAL  296
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   11696

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  246
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  357
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1037

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
       0,   102,   102,   105,   106,   107,   108,   112,   113,   114,
     115,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   140,   141,   143,   144,   145,   146,   147,   148,   150,
     152,   153,   155,   156,   157,   158,   160,   161,   162,   163,
     165,   166,   167,   168,   170,   171,   172,   173,   175,   176,
     177,   179,   180,   181,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   215,   216,   218,   219,   221,   222,   225,   228,
     229,   230,   231,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   253,   254,   255,   256,   257,   258,   259,   263,   264,
     265,   266,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   297,   298,
     300,   301,   302,   304,   306,   307,   309,   310,   311,   313,
     314,   315,   316,   318,   319,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   373,   374,   375,   376,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   395,   396,   397,   398,   399,   403,   404,   405,
     406,   407,   411,   412,   413,   414,   415,   419,   420,   424,
     425,   426,   427,   431,   432,   436,   437,   441,   442,   443,
     447,   448,   452,   453,   454,   455,   456,   457,   458,   462,
     463,   467,   468,   472,   476,   480,   481,   485,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   499,   501,   503,
     504,   506,   507,   508,   509,   510,   511,   512,   513,   517,
     518,   522,   523,   524,   528,   529,   530,   531,   535,   536,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     553,   554,   555,   556,   557,   558,   559,   563,   564,   568,
     572,   573,   577,   578,   579,   583,   584,   588,   589,   593,
     594,   598,   602,   603,   606,   607,   608,   609
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
  "daric", "top_level_statement_list", "statement_list", "statement",
  "number", "expression_numeric", "variable_integer", "variable_real",
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

#define YYPACT_NINF (-294)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-150)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    7437,  7437,  -231,  -201,  -185,     0,  -172,  -142,  -136,  -124,
    -119,  -117,  -113,  -108,   349,  2823,  3917,  3917,  3917,  3917,
    2823,    57,   145,   169,  2823,     9,  2823,  2823,   704,  -294,
     744,   756,   109,   158,  -294,  -294,  -294,  -294,  1201,  1201,
     601,  -294,  3917,  3917,  -294,  3061,  3917,  3917,  3275,  3489,
    3917,  -294,  3703,  3917,  3917,  3917,  -294,   -59,   -52,   696,
    2582,  -294,  -294,   197,   198,   241,  3917,  3917,  3917,  -294,
    3917,   270,   237,  -294,  -294,  -294,   743,   254,   685,  -294,
      33,  -294,  -294,  -294,   249,  3917,  3917,  2126,  -294,  -294,
    3917,   162,   704,   704,   704,  2823,  2823,  2823,  2823,    52,
      58,    62,  -294,  -294,  -294,    84,     2,   122,   147,   148,
     770,  3917,  3917,   164,   165,   180,  3917,  3917,   183,   186,
    -294,  -294,   189,   196,   207,   208,   211,   217,   224,   232,
     234,   235,   250,   257,   258,   262,   264,   265,   267,  -294,
    -294,  -294,   273,   278,   280,   286,   289,   291,   302,    -2,
     303,  -294,  -294,  3917,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,   306,  -294,   308,  1201,  3917,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,   322,   323,  -294,
    -294,   296,  3917,  -294,  -294,  -294,  3917,  -294,  4251,  -294,
    -294,  -294,  -294,   788,  -294,     4,  4251,  3056,  4251,  4487,
     252,    42,    74,   245,   719,  -294,  -294,  5989,  7618,  2823,
     343,   126,  -294,  -294,  -294,   159,  -294,   328,   330,   334,
     336,   271,  -294,   494,  -294,   340,   744,  -294,   519,   346,
     788,   379,  -294,  -294,  -294,   310,  -294,  5906,  6087,  3917,
    6268,  6449,  6630,  3917,  6811,  3917,  3917,  6992,  7173,  3917,
    7354,  7535,  7716,  8476,  3917,  3917,    38,  -294,   350,  -294,
    -294,  -294,  -294,   359,  -294,  4251,   788,  2582,  -294,   351,
     362,   371,  9434,  9447,  9469,  4251,  -294,  7437,  8559,  3917,
    3917,  3917,  3917,  3917,  3917,  3917,  3917,  1201,  2823,   591,
     756,  8559,    51,   611,   593,   861,  1087,   704,  -294,   376,
     384,  -294,   388,   410,   413,   421,   423,   426,   428,   429,
     668,   677,   679,  3917,  3917,  2823,  2823,  2823,  -294,  -294,
    -294,  -294,  4251,  4251,  1201,  1201,  1201,  4251,  4251,   782,
    3917,  3917,  3917,  3917,  3917,  3917,  3917,  3917,  3917,  3917,
    3917,  3917,  3917,  3917,  3917,  3917,  3917,  1201,  1201,  3917,
    1201,  1201,  1201,  1201,  1201,   432,  3917,  3917,  -294,  3917,
    3917,   788,  9509,  3917,  3917,   448,  9539,  1287,  3917,  3917,
    3917,  3917,  3917,  3917,  3917,  3917,  3917,  3917,  3917,  3917,
    3917,  3917,  3917,  3917,  3917,  3917,  1201,  1201,  1201,  1201,
    1201,  1201,  1201,  3917,  3917,  3917,   681,  3917,   689,  3917,
     708,   709,   101,   157,   632,  7618,  7618,  6170,   275,   661,
      37,  -294,  -294,  7618,  2823,   704,  3917,  3917,  3917,  3917,
     744,  2340,  -294,   636,  3917,   601,   601,  3917,  3917,  9574,
    3917,  3917,  3917,  9600,  3917,  9613,  9640,  3917,  3917,  9667,
    3917,  3917,  3917,  3917,  1467,  1525,   704,  -294,   704,  3917,
    -294,   728,  3917,  3917,  3917,  3917,  3917,   300,  -294,  4251,
    4251,  4251,  4251,  4251,  4251,  4251,  4251,   788,  -294,  2823,
    -294,  3917,  -294,  3917,  -294,   671,  3917,  -294,   787,  -294,
     162,   713,   704,   723,   724,   727,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  1825,   510,   514,   515,   107,   120,   174,
     523,   526,   528,  1844,  1887,  1949,  4318,  4554,  4790,  5026,
    5262,  5498,  5734,  7961,  8154,  8347,  8653,  8719,  8777,  8790,
     184,   194,  8812,   439,   458,   472,   530,   204,  3917,  8825,
    9705,  9740,  9766,  3917,  8847,  8882,   766,  3917,  -294,   125,
     535,   535,   535,   535,  -294,  -294,   535,   535,   648,   648,
     125,   125,   125,   125,  1211,  1873,  1873,   764,   764,   764,
     764,   764,   764,  -294,  8917,  4251,  4723,   716, 11423,   555,
   11458,   559,   563,  3917,   801,  3917,   809,   800,   301,   121,
    7618,   118,  7618,  8559,  8559,  2823,    87,  -294,  -294,  1014,
    1034,  1049,  9804,  -294,   793,   704,   804,   733,  8952,  -294,
    -294,  9833,  9868,  3917,  4251,  9897,  4251,  3917,  9932,  3917,
    3917,  9960,  9996,  3917, 10024, 10059, 10088, 10123,  -294,  -294,
    -294,  -294,  8973,   581,  9012,  9047, 10152, 10187,  4251,  8559,
    -294,  9076,  9106,   586,  9119,  -294,  -294,  -294,  -294,  7618,
    -294,  7618,  7618,  7618,   787,  -294,  -294,  -294,  -294,  -294,
    -294,   587,   588,   590,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  1201,  3917,  3917,  3917,  -294,  9141,
    -294,  1201,  3917,  3917,  4251,  -294,  -294,  -294, 10216,   173,
    2823,   716,    18,  3917,   592,  3917,   595,   596, 11522,   594,
   11549,   598,   599,  8559,   812,  -294,   440,  7618,   309,  -294,
    -294,  -294,  -294,  3917,  -294,  3917,  -294,  3917,  -294,   828,
     776,  -294,   636,  -294,   836,  3917,  3917,  4251,  3917, 10251,
    3917, 10279, 10292,  3917,  3917, 10315,  3917,  3917,  3917,  3917,
    -294,   839,   604,   605,  3917,  3917,  -294,  -294,  1201,  -294,
     367,   392,   393,   484,   606,   607,   608,    30,  9177, 10343,
    9212,  -294,   236, 10383,  9247,  3917,  7618,  -294,  -294,  8559,
    4156,  6351,  4392,  6532,  6713,  3917,   610,  3917,   613,   615,
    7618,   833,  -294,   275,  8559,  9269,  9282,  9304,   616,   609,
    -294,  4251,  4251, 10418,  3917, 10442,  3917,  3917, 10477, 10517,
    3917,  4251, 10542, 10568, 10581,  -294,  3917,  3917, 10608, 10643,
     283,  7799,  7992,  8185,  8378,   153,   153,   153,  3917,  -294,
    -294,  3917,  -294,  -294,  3917,  -294, 10673,   274,   845,  7618,
    3917,    19,  7618,    50,  7618,  3917,    65,  7618,    89,  7618,
      90,  4628,  6894,  4864,  7075,  7256,   210,  7618,  -294,  -294,
    -294,  -294,  1201,  3917, 10708,  3917, 10743, 10767,  3917,  3917,
    4251,  1201,  1201,  1201, 10807, 10834,  3917,  3917,  -294,  -294,
    -294,  -294,  -294,   190,   620,   621,   622,  9341,  9376,  9406,
    3917,  -294,   797,   100,  5100,  -294,   106,  -294,   156,  5336,
    -294,   160,  -294,   251,  -294,  7618,  3917,   277,  7618,   348,
    7618,  3917,   391,  7618,   414,  7618,   451,  -294,   459,   294,
    4251,  3917,  4251,  3917,  3917, 10869,  4251,   788,   788,   788,
    3917,  3917,  4251,  4251,  -294,  -294,  -294,  -294,  -294,  -294,
   10898,  -294,  -294,  7618,   470,  -294,  -294,  7618,   513,  -294,
    -294,   522,  5572,  -294,   572,  -294,   573,  5808,  -294,   578,
    -294,   579,  -294,  -294,  -294,  4251, 10933, 10968,  3917, 10993,
   11006,  3917,   589,  -294,   629,  -294,  -294,  7618,   630,  -294,
    -294,  7618,   631,  -294,  -294,  3917,  3917, 11032,  3917,  3917,
   11059,  -294,  -294,   666,  -294,   667,  -294, 11099, 11134,  3917,
   11158, 11193,  3917,  -294,  -294,  3917,  3917,  4251,  3917,  3917,
   11233,  4251, 11258,  4251,  4251,  3917,  3917, 11284, 11297,  3917,
    3917, 11324, 11359,  3917,  3917,  4251,  4251
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   247,   252,   259,   281,     0,     0,     0,     0,
      18,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   311,     0,    25,
       0,     0,     0,     0,    17,    28,    29,    30,     0,     0,
       0,   103,     0,     0,   112,   110,     0,     0,     0,     0,
       0,   123,     0,     0,     0,     0,   127,     0,     0,     0,
      94,    48,    49,     0,     0,     0,     0,     0,     0,    96,
       0,     0,     2,     3,   257,   258,     0,     0,     0,    13,
     318,   320,    11,    12,     0,     0,     0,     0,   250,   255,
       0,   342,   347,   347,   347,   311,   311,   311,   311,     0,
       0,     0,   128,   130,   287,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   222,
     223,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   226,
     167,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   168,   301,     0,   175,   176,   177,   178,   179,   180,
     181,   182,     0,   171,     0,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   186,   187,   183,     0,     0,   164,
     299,     0,     0,   169,   170,   172,     0,   132,   309,   133,
     134,   289,   288,   310,    27,     0,    34,     0,    36,     0,
       0,     0,     0,     0,     0,    40,    41,     0,     0,     0,
       0,   312,    23,   263,   264,   265,    24,     0,     0,     0,
       0,   279,    31,     0,   322,   259,     0,   321,     0,     0,
      39,    14,   267,   268,   269,   270,    16,   104,   106,   111,
       0,     0,     0,     0,     0,     0,   171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   339,   340,    42,
     336,   333,   334,     0,   332,   331,   330,   337,    95,     0,
       0,     0,     0,     0,     0,   102,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,     0,     0,     0,     0,     0,   343,   345,
       0,   348,   349,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   311,   311,   311,   129,   131,
     138,   139,   218,   217,     0,     0,     0,   163,   297,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   227,     0,
       0,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     7,
       0,     7,    59,     0,   311,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,     0,     0,
     338,     0,     0,     0,     0,     0,     0,     0,     4,   314,
     323,   324,   325,   326,   327,   328,   329,   315,   316,     0,
     319,     0,   248,     0,   253,     0,     0,   260,   282,   344,
     342,     0,   347,     0,     0,     0,    19,    20,    21,    22,
      61,    62,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   144,
     149,   152,   151,   150,   147,   148,   153,   154,   140,   141,
     142,   143,   145,   146,   155,   156,   157,   291,   294,   293,
     292,   295,   296,   290,     0,    33,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,     0,     0,     0,   313,   266,     0,
       0,     0,     0,   280,     0,     0,     0,     0,     0,    15,
     271,     0,     0,     0,   108,     0,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    47,
      44,   341,     0,     0,     0,     0,     0,     0,   101,     6,
     317,     0,     0,     0,     0,   251,   256,   262,   346,     0,
     350,     0,     0,     0,     0,   158,   159,   298,   219,   221,
     220,     0,     0,     0,   225,   136,   137,   237,   228,   229,
     230,   231,   232,   233,   234,   235,   238,   236,   239,   240,
     241,   246,   242,   305,     0,     0,     0,     0,   243,     0,
     302,     0,     0,     0,   189,   165,   300,   173,     0,     0,
     311,   352,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,    52,     0,     0,     0,     8,
      51,    58,    60,     0,   272,     0,   274,     0,   276,     0,
       0,   284,   285,   283,     0,     0,     0,   109,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     335,     0,     0,     0,     0,     0,   249,   254,     0,   261,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   303,     0,     0,     0,     0,     0,   353,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    55,    10,     0,     0,     0,     0,     0,
     286,   105,   107,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   244,
     306,     0,   308,   304,     0,   185,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   273,   275,
     277,   278,     0,     0,     0,     0,     0,     0,     0,     0,
     114,     0,     0,     0,     0,     0,     0,     0,    37,   354,
     355,   357,   356,     0,     0,     0,     0,     0,     0,     0,
       0,   351,     0,     0,     0,    78,     0,    68,     0,     0,
      79,     0,    67,     0,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     0,     0,
     115,     0,   116,     0,     0,     0,   122,   124,   125,   126,
       0,     0,    99,   100,   161,   160,   162,   245,   307,   184,
       0,    93,    76,     0,     0,    65,    77,     0,     0,    64,
      66,     0,     0,    86,     0,    74,     0,     0,    87,     0,
      73,     0,    75,    57,    38,   117,     0,     0,     0,     0,
       0,     0,     0,    82,     0,    83,    84,     0,     0,    71,
      85,     0,     0,    70,    72,     0,     0,     0,     0,     0,
       0,    80,    81,     0,    90,     0,    91,     0,     0,     0,
       0,     0,     0,    88,    89,     0,     0,   118,     0,     0,
       0,   119,     0,    97,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   174,   120
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -294,  -294,     5,  1162,   223,  -293,   -16,   495,   875,    83,
    1346,    13,   434,  -294,  -180,  -294,  -222,  -294,  -294,  -294,
     131,  -294,   253,    -1,   -80,  -294,   -11,  -294,  -294,   612,
    -294,  -227,  -294,   374,  -294,   -89,  -294,   166,  -294
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    71,    72,   428,   431,   207,   208,   209,   210,    76,
      77,   277,   236,   255,   256,   241,   242,    78,    79,   616,
     617,   212,   213,   231,   232,    80,    81,    82,   287,   288,
     278,   279,   319,   320,   322,   323,   711,   712,    83
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     216,   217,   218,   219,   324,   325,    84,    88,    89,    88,
      89,    88,    89,    85,   214,   326,   327,   328,   329,   220,
     244,   247,   602,   227,   442,   230,   257,   258,   228,   260,
     261,   262,   264,   267,   268,   375,   270,   271,   272,   273,
     602,   235,   603,    86,   285,     2,     3,   105,   106,   467,
     292,   293,   294,   602,   295,   406,   407,   408,   409,    87,
     603,   410,   411,   412,   221,   222,   223,   417,   602,   312,
     313,   315,    91,   603,   316,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   603,   788,
     602,   309,   602,   602,   229,   342,   343,   905,   789,   419,
     347,   348,    92,   602,   318,   321,   321,   321,    93,   602,
     603,   233,   603,   603,   243,   243,     2,     3,   245,     5,
      94,   602,   605,   603,   602,    95,   593,    96,   907,   603,
     418,    97,   406,   407,   408,   409,    98,   378,   410,   411,
     412,   603,   233,   910,   603,   406,   407,   408,   409,   225,
     382,   410,   411,   412,   393,   394,   224,   102,   103,   602,
     732,   233,   420,   602,   401,   402,   248,   912,   914,     2,
       3,   105,   106,   226,   233,   233,   233,   233,   952,   603,
     655,   656,   595,   603,   955,   274,   386,   893,   727,   594,
     387,   724,   275,   725,   338,   339,   403,   404,   405,   406,
     407,   408,   409,   246,   289,   410,   411,   412,   290,   406,
     407,   408,   409,   602,   317,   410,   411,   412,   613,   406,
     407,   408,   409,    73,    73,   410,   411,   412,   432,   406,
     407,   408,   409,   603,   956,   410,   411,   412,   959,   640,
     297,   641,   376,   449,    90,   596,   334,   453,   413,   455,
     456,   291,   297,   459,   602,   514,   515,   516,   464,   465,
     298,   406,   407,   408,   409,   619,   620,   410,   411,   412,
     296,   285,   311,   838,   603,   839,   310,   602,   602,   307,
     602,   466,   927,   479,   480,   481,   482,   483,   484,   485,
     486,   250,   251,   901,   491,   330,   492,   603,   603,   490,
     603,   331,   477,   297,   602,   332,   385,   488,   406,   407,
     408,   409,   602,   286,   410,   411,   412,   315,   513,   406,
     407,   408,   409,   649,   723,   410,   411,   412,   333,   960,
     499,   416,   804,   421,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   602,   668,   542,   607,   963,    99,   100,   101,   233,
     549,   550,   433,   551,   552,   669,   335,   554,   555,   434,
     602,   603,   559,   560,   561,   562,   563,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     831,   336,   337,   243,   602,   602,   602,   584,   585,   586,
     233,   588,   435,   590,   406,   407,   408,   409,   344,   345,
     410,   411,   412,   660,   603,   832,   833,   602,   381,   670,
     609,   610,   611,   612,   346,   315,   965,   349,   618,   691,
     350,   621,   622,   351,   624,   625,   626,   603,   628,   692,
     352,   631,   632,   602,   634,   635,   636,   637,   235,   698,
     429,   353,   354,   642,   602,   355,   644,   645,   646,   647,
     648,   356,   602,   603,   406,   407,   408,   409,   357,   968,
     410,   411,   412,   602,   603,   651,   358,   652,   359,   360,
     654,   843,   603,   406,   407,   408,   409,   602,   650,   410,
     411,   412,   970,   603,   361,    74,    74,   406,   407,   408,
     409,   362,   363,   410,   411,   412,   364,   834,   365,   366,
     801,   367,   802,   318,   440,   321,   602,   368,   233,   299,
      73,   478,   369,    74,   370,   602,    74,    74,   888,   972,
     371,   973,   699,   372,   478,   373,   603,   704,   443,   974,
     286,   708,   894,   895,   896,   603,   374,   377,   983,   233,
     379,   233,   380,   446,    74,   406,   407,   408,   409,   388,
     487,   410,   411,   412,   393,   394,   383,   384,   397,   398,
     399,   400,   436,    74,   437,   602,   602,   718,   438,   720,
     439,   602,   602,   233,   441,   233,    74,    74,    74,    74,
     444,   985,   602,   468,   471,   603,   603,   517,   518,   519,
     986,   603,   603,   469,   731,   340,   472,   747,   252,   253,
     254,   749,   603,   751,   752,   473,   489,   755,   495,   500,
     540,   541,   445,   543,   544,   545,   546,   547,   741,   501,
     786,   502,   602,   602,   602,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     989,   990,   603,   603,   603,   503,   993,   994,   504,   577,
     578,   579,   580,   581,   582,   583,   505,  1001,   506,   602,
     602,   507,   388,   508,   509,   510,   548,   393,   394,   778,
     779,   780,   694,   399,   400,   511,   783,   784,   512,   603,
     603,   556,     2,     3,   105,   106,   589,   790,   233,   792,
     587,   695,   276,     2,     3,   105,   106,  1002,  1004,  1006,
     308,     2,     3,   105,   106,   696,   591,   805,   592,   806,
     597,   807,    74,    74,   401,   402,   422,   423,   424,   811,
     812,   604,   813,   615,   815,   643,   659,   818,   819,   653,
     821,   822,   823,   824,  1013,  1014,   661,   662,   828,   829,
     663,   237,   238,   239,   240,   665,   403,   404,   405,   666,
     667,   401,   402,     2,     3,   105,     5,   671,   299,   846,
     672,    74,   673,   697,   338,   339,   707,     2,     3,   861,
     215,   863,   300,   301,   302,   303,   304,   305,   306,   520,
     521,   522,    74,    74,   655,   656,   657,   412,   874,   714,
     876,   877,   710,   716,   880,    74,    74,   717,   719,   722,
     884,   885,    74,   406,   407,   408,   409,   721,   740,   410,
     411,   412,   897,   742,   761,   898,   729,   730,   899,   743,
     768,   800,   774,   775,   904,   776,   808,   791,   796,   909,
     793,   794,   798,   799,   809,   657,   825,   826,   827,   835,
     836,   837,   867,   872,   493,   862,   494,   930,   864,   932,
     865,   871,   935,   936,   902,   944,   945,   946,   951,   608,
     942,   943,   478,   810,   658,    75,    75,   787,     0,     0,
       0,     0,     0,     0,   950,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,     0,   470,
     962,     0,     0,    75,     0,   967,    75,    75,     0,     0,
       0,     0,     0,     0,     0,   975,     0,   976,   977,     0,
      74,    74,    74,     0,   979,   980,     0,     0,    74,     0,
      74,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   729,   777,     0,     0,
       0,     0,     0,    75,   782,     0,     0,     0,     0,     0,
       0,    74,   997,    74,     0,  1000,    75,    75,    75,    75,
       0,     0,     0,     0,   401,   402,     0,     0,     0,  1007,
    1008,     0,  1010,  1011,     0,   341,     0,     0,     0,     0,
       0,     0,     0,  1017,     0,    74,  1020,    74,     0,  1021,
    1022,     0,  1023,  1024,     0,     0,   403,   404,   405,  1027,
    1028,     0,   848,  1031,  1032,     0,     0,  1035,  1036,     0,
       0,   830,     0,     0,     0,     0,     0,   729,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,     0,     0,   729,   729,   729,   729,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,     0,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,     0,    74,    74,    74,
       0,     0,    75,    75,   496,     0,   497,     0,     0,     0,
      74,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,   929,     0,   401,   402,     0,
       0,     0,     0,     0,   937,   938,   939,     0,     0,     0,
       0,     0,     0,     0,    74,     0,     0,   401,   402,     0,
       0,    75,     0,     0,    74,     0,    74,    74,    74,   403,
     404,   405,   401,   402,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    75,     0,     0,     0,     0,     0,   403,
     404,   405,     0,     0,     0,    75,    75,     0,     0,     0,
       0,     0,    75,     0,   403,   404,   405,     0,     0,     0,
     401,   402,     0,     0,     0,     0,     0,   104,     0,     0,
     105,   249,     0,     0,     0,     0,     0,     0,    74,   109,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   403,   404,   405,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   733,     0,   734,
       0,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,     0,   735,     0,   736,
       0,    74,     0,     0,    74,    74,    74,    74,    74,    74,
       0,     0,   737,     0,   738,    74,     0,     0,     0,    74,
      75,    75,    75,     0,     0,     0,     0,     0,    75,     0,
      75,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,    74,    74,    74,    74,
       0,     0,   498,     0,   143,     0,   145,   146,   147,     0,
     149,    75,   150,    75,    74,   152,     0,    74,     0,    74,
       0,     0,    74,     0,    74,     0,    74,    74,    74,    74,
      74,   211,    74,     0,     0,     0,   211,     0,     0,     0,
     211,     0,   211,   211,   234,    75,     0,    75,     0,     0,
       0,     0,     0,     0,   211,   211,     0,     0,     0,     0,
     430,     0,     0,     0,     0,     0,     0,     0,     0,    74,
     401,   402,     0,     0,    74,   234,   211,     0,     0,     0,
      74,     0,     0,    74,     0,    74,     0,     0,    74,   198,
      74,     0,     0,     0,   234,     0,     0,   200,     0,     0,
       0,     0,   403,   404,   405,     0,     0,   234,   234,   234,
     234,   211,   211,   211,   211,     0,     0,     0,    74,     0,
       0,     0,    74,     0,     0,     0,     0,    74,     0,     0,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,    75,    75,    75,
       0,     0,    74,     0,     0,     0,    74,     0,     0,     0,
      75,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,   211,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,   558,     0,    75,     0,    75,    75,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   211,     0,     0,     0,     0,
     401,   402,     0,     0,     0,     0,     0,   598,   599,   601,
       0,     0,     0,     0,     0,   606,     0,     0,    75,     0,
       0,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   403,   404,   405,     0,     0,     0,     0,     0,
       0,     0,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   211,     0,     0,     0,     0,   401,   402,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   211,   211,     0,     0,     0,     0,     0,
       0,    75,     0,   234,    75,    75,    75,    75,    75,    75,
     403,   404,   405,     0,     0,    75,     0,     0,     0,    75,
       0,   211,   211,   211,     0,     0,     0,     0,     0,     0,
     211,   211,   211,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,    75,    75,    75,
       0,     0,   638,   211,   211,     0,   211,   211,   211,   211,
     211,     0,     0,     0,    75,     0,     0,    75,     0,    75,
       0,     0,    75,     0,    75,     0,    75,    75,    75,    75,
      75,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   211,   211,   211,   211,   211,   211,   211,     0,
       0,     0,   726,     0,   728,     0,     0,     0,     0,     0,
     639,     0,     0,     0,     0,     0,     0,     0,     0,    75,
     211,   234,     0,     0,    75,     0,     0,     0,     0,     0,
      75,     0,     0,    75,     0,    75,     0,     0,    75,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   234,     0,   234,     0,     0,     0,     0,     0,
       0,   770,     0,   771,   772,   773,     0,     0,    75,     0,
       0,     0,    75,     0,     0,   211,     0,    75,     0,     0,
       0,     0,    75,     0,     0,     0,   234,     0,   234,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,    75,     0,     0,     0,    75,     0,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,     0,     0,     0,     0,     0,     0,     0,   803,
       0,     0,     0,     0,     0,     0,     0,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   401,   402,
       0,     0,     0,     0,     0,     0,     0,     0,   847,     0,
       0,   211,   851,   853,   856,   858,   860,   401,   402,     0,
       0,   234,   866,     0,     0,     0,     0,     0,     0,     0,
     403,   404,   405,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,     0,   403,
     404,   405,     0,     0,     0,     0,     0,     0,     0,     0,
     401,   402,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   903,     0,     0,   906,     0,   908,     0,   403,   911,
       0,   913,     0,   917,   919,   922,   924,   926,     0,   928,
       0,     0,   403,   404,   405,     0,     0,     0,     0,     0,
     211,     0,     0,     0,     0,     0,     0,   211,     0,     0,
       0,     0,     0,     0,     0,     0,   211,     0,     0,     0,
       0,     0,   401,   402,     0,     0,   954,     0,     0,     0,
     664,   958,     0,     0,     0,     0,     0,   961,     0,     0,
     964,     0,   966,     0,     0,   969,     0,   971,     0,   674,
       0,     0,     0,     0,   403,   404,   405,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   211,   982,     0,     0,     0,   984,
       0,     0,     0,     0,   988,     0,     0,     0,     0,   992,
     102,   103,   675,     2,     3,     0,   215,     0,     0,     0,
       0,     0,   107,   108,     0,     0,     0,     0,     0,  1003,
       0,     0,     0,  1005,     0,     0,     0,     0,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,     0,   112,   113,   114,
     115,   116,     0,     0,   676,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   211,     0,
     118,     0,     0,     0,     0,     0,     0,   211,   211,   211,
       0,   119,   120,   121,     0,     0,   122,   123,   124,     0,
       0,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,     0,
     144,     0,     0,     0,   148,     0,     0,     0,     0,   151,
       0,     0,     0,     0,   153,     0,     0,   154,   155,   156,
     157,   158,   159,   160,   161,     0,     0,   162,     0,     0,
       0,     0,     0,     0,   163,     0,     0,   164,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,     0,   196,   197,   102,   103,     0,     2,     3,     0,
     215,   199,     0,     0,     0,     0,   107,   108,   201,   202,
       0,     0,     0,     0,     0,   203,   204,   205,     0,     0,
     206,   314,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,   112,   113,   114,   115,   116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,   121,     0,     0,
     122,   123,   124,     0,     0,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,     0,   144,     0,     0,     0,   148,     0,
       0,     0,     0,   151,     0,     0,     0,     0,   153,     0,
       0,   154,   155,   156,   157,   158,   159,   160,   161,     0,
       0,   162,     0,     0,     0,     0,     0,     0,   163,     0,
       0,   164,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,     0,   196,   197,     0,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,     0,
       0,     0,   201,   202,     0,     0,     0,     0,     0,   203,
     204,   205,     0,     0,   206,   614,   102,   103,   104,     2,
       3,   105,   106,     0,     0,     0,     0,     0,   107,   108,
     109,     0,     0,   280,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,     0,   281,
     282,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,     0,   112,   113,   114,   115,   116,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
       0,     0,   122,   123,   124,     0,     0,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,     0,   150,     0,   151,   152,     0,     0,     0,
     153,     0,     0,   154,   155,   156,   157,   158,   159,   160,
     161,     0,     0,   162,     0,     0,     0,     0,     0,     0,
     163,     0,     0,   164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,     0,   196,   197,
     198,     0,     0,   283,     0,     0,     0,   199,   200,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
       0,   203,   204,   205,     0,   284,   206,   102,   103,   104,
       2,     3,   105,   106,     0,     0,     0,     0,     0,   107,
     108,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,     0,   112,   113,   114,   115,   116,     0,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
     121,     0,     0,   122,   123,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,     0,   150,     0,   151,   152,     0,     0,
       0,   153,     0,     0,   154,   155,   156,   157,   158,   159,
     160,   161,     0,     0,   162,     0,     0,     0,     0,     0,
       0,   163,     0,     0,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,     0,   196,
     197,   198,     0,     0,     0,     0,     0,     0,   199,   200,
       0,     0,     0,     0,     0,   201,   202,     0,     0,     0,
       0,     0,   203,   204,   205,   102,   103,   206,     2,     3,
       0,   215,     0,     0,     0,     0,     0,   107,   108,     0,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,     0,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,     0,   112,   113,   114,   115,   116,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,   121,   401,
     402,   122,   123,   124,     0,     0,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,     0,   144,     0,     0,     0,   148,
       0,   403,   404,   405,   151,     0,     0,     0,     0,   153,
       0,     0,   154,   155,   156,   157,   158,   159,   160,   161,
       0,     0,   162,     0,     0,     0,     0,   259,     0,   163,
       0,     0,   164,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,     0,   196,   197,   102,
     103,     0,     2,     3,     0,   215,   199,     0,     0,     0,
       0,   107,   108,   201,   202,     0,     0,     0,     0,   414,
     203,   204,   205,     0,     0,   206,     0,     0,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,     0,   112,   113,   114,   115,
     116,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,     0,     0,   122,   123,   124,     0,     0,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,     0,   144,
       0,     0,     0,   148,     0,     0,     0,     0,   151,     0,
       0,     0,     0,   153,     0,     0,   154,   155,   156,   157,
     158,   159,   160,   161,     0,     0,   162,     0,     0,     0,
       0,     0,   263,   163,     0,     0,   164,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
       0,   196,   197,   102,   103,     0,     2,     3,     0,   215,
     199,     0,     0,     0,     0,   107,   108,   201,   202,     0,
       0,     0,     0,     0,   203,   204,   205,     0,     0,   206,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,     0,
     112,   113,   114,   115,   116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   121,     0,     0,   122,
     123,   124,     0,     0,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,     0,   144,     0,     0,     0,   148,     0,     0,
       0,     0,   151,     0,     0,     0,     0,   153,     0,     0,
     154,   155,   156,   157,   158,   159,   160,   161,     0,     0,
     162,     0,     0,     0,     0,     0,   265,   266,     0,     0,
     164,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,     0,   196,   197,   102,   103,     0,
       2,     3,     0,   215,   199,     0,     0,     0,     0,   107,
     108,   201,   202,     0,     0,     0,     0,     0,   203,   204,
     205,     0,     0,   206,     0,     0,     0,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,     0,   112,   113,   114,   115,   116,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
     121,     0,     0,   122,   123,   124,     0,     0,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,     0,   144,     0,     0,
       0,   148,     0,     0,     0,     0,   151,     0,     0,     0,
       0,   153,     0,     0,   154,   155,   156,   157,   158,   159,
     160,   161,     0,     0,   162,     0,     0,     0,     0,     0,
     269,   163,     0,     0,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,     0,   196,
     197,   102,   103,     0,     2,     3,     0,   215,   199,     0,
       0,     0,     0,   107,   108,   201,   202,     0,     0,     0,
       0,     0,   203,   204,   205,     0,     0,   206,     0,     0,
       0,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     0,     0,   112,   113,
     114,   115,   116,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,   121,     0,     0,   122,   123,   124,
       0,     0,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
       0,   144,     0,     0,     0,   148,     0,     0,     0,     0,
     151,     0,     0,     0,     0,   153,     0,     0,   154,   155,
     156,   157,   158,   159,   160,   161,     0,     0,   162,     0,
       0,     0,     0,     0,     0,   163,     0,     0,   164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,     0,   196,   197,     0,     0,     0,     0,     0,
       0,     0,   199,     0,     0,     0,     0,     0,     0,   201,
     202,     0,     0,     0,     0,     0,   203,   204,   205,   425,
       0,   206,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   849,     0,     0,     0,     0,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,     0,     0,     0,     0,    15,     0,
       0,     0,     0,     0,    16,    17,    18,     0,     0,     0,
       0,    19,     0,     0,     0,    20,     0,     0,     0,     0,
      21,    22,    23,    24,     0,     0,     0,    25,   850,     0,
       0,     0,     0,    26,     0,     0,    27,    28,    29,     0,
      30,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,   401,
     402,     0,     0,     0,     0,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,   403,   404,   405,     0,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,    41,     0,    42,    43,     0,
      44,    45,     0,     0,     0,    46,    47,     0,    48,     0,
      49,     0,     0,    50,    51,    52,     0,    53,    54,    55,
       0,     0,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   401,   402,     0,     0,     0,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,     0,     0,    63,    64,    65,     0,     0,
      66,    67,    68,    69,    70,   425,   403,   404,   405,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   854,     0,     0,     0,     0,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,   401,   402,     0,     0,     0,     0,     0,    14,     0,
       0,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    17,    18,     0,     0,     0,     0,    19,     0,     0,
       0,    20,     0,   403,   404,   405,    21,    22,    23,    24,
       0,     0,     0,    25,   855,     0,     0,     0,     0,    26,
       0,     0,    27,    28,    29,     0,    30,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,   401,   402,     0,     0,     0,
       0,   388,   415,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,   403,   404,   405,
       0,    39,    40,     0,     0,     0,     0,     0,     0,     0,
       0,    41,     0,    42,    43,     0,    44,    45,     0,     0,
       0,    46,    47,   677,    48,     0,    49,     0,     0,    50,
      51,    52,     0,    53,    54,    55,     0,     0,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     401,   402,     0,     0,     0,     0,     0,    56,     0,    57,
      58,    59,    60,     0,     0,     0,     0,    61,    62,     0,
       0,    63,    64,    65,     0,     0,    66,    67,    68,    69,
      70,   425,   403,   404,   405,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   915,     0,     0,
       0,     0,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,     0,   401,   402,     0,
       0,     0,     0,     0,    14,     0,     0,     0,     0,     0,
      15,     0,     0,     0,     0,     0,    16,    17,    18,     0,
       0,     0,     0,    19,     0,     0,     0,    20,     0,   403,
     404,   405,    21,    22,    23,    24,     0,     0,     0,    25,
     916,     0,     0,     0,     0,    26,     0,     0,    27,    28,
      29,     0,    30,     0,     0,     0,    31,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,   401,   402,     0,     0,     0,     0,   388,  -149,  -149,
    -149,  -149,   393,   394,  -149,  -149,   397,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,   403,   404,   405,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,    42,
      43,     0,    44,    45,     0,     0,     0,    46,    47,   678,
      48,     0,    49,     0,     0,    50,    51,    52,     0,    53,
      54,    55,     0,     0,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   401,   402,     0,     0,
       0,     0,     0,    56,     0,    57,    58,    59,    60,     0,
       0,     0,     0,    61,    62,     0,     0,    63,    64,    65,
       0,     0,    66,    67,    68,    69,    70,   425,  -149,  -149,
    -149,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   920,     0,     0,     0,     0,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,     0,   401,   402,     0,     0,     0,     0,     0,
      14,     0,     0,     0,     0,     0,    15,     0,     0,     0,
       0,     0,    16,    17,    18,     0,     0,     0,     0,    19,
       0,     0,     0,    20,     0,   403,   404,   405,    21,    22,
      23,    24,     0,     0,     0,    25,   921,     0,     0,     0,
       0,    26,     0,     0,    27,    28,    29,     0,    30,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,   401,   402,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,   403,
     404,   405,     0,    39,    40,     0,     0,     0,     0,     0,
       0,     0,     0,    41,     0,    42,    43,     0,    44,    45,
       0,     0,     0,    46,    47,   679,    48,     0,    49,     0,
       0,    50,    51,    52,     0,    53,    54,    55,     0,     0,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,     0,     0,    61,
      62,     0,     0,    63,    64,    65,     0,     0,    66,    67,
      68,    69,    70,   425,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   953,
       0,     0,     0,     0,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,     0,     0,   401,
     402,     0,     0,     0,     0,     0,    14,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,    16,    17,
      18,     0,     0,     0,     0,    19,     0,     0,     0,    20,
       0,   403,   404,   405,    21,    22,    23,    24,     0,     0,
       0,    25,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,    29,     0,    30,     0,     0,     0,    31,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,   401,   402,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,   403,   404,   405,     0,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,    41,
       0,    42,    43,     0,    44,    45,     0,     0,     0,    46,
      47,   680,    48,     0,    49,     0,     0,    50,    51,    52,
       0,    53,    54,    55,     0,     0,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,     0,     0,    61,    62,     0,     0,    63,
      64,    65,     0,     0,    66,    67,    68,    69,    70,   425,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   957,     0,     0,     0,     0,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,     0,   401,   402,     0,     0,     0,
       0,     0,    14,     0,     0,     0,     0,     0,    15,     0,
       0,     0,     0,     0,    16,    17,    18,     0,     0,     0,
       0,    19,     0,     0,     0,    20,     0,   403,   404,   405,
      21,    22,    23,    24,     0,     0,     0,    25,     0,     0,
       0,     0,     0,    26,     0,     0,    27,    28,    29,     0,
      30,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,   401,
     402,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,   403,   404,   405,     0,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,    41,     0,    42,    43,     0,
      44,    45,     0,     0,     0,    46,    47,   681,    48,     0,
      49,     0,     0,    50,    51,    52,     0,    53,    54,    55,
       0,     0,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,     0,     0,    63,    64,    65,     0,     0,
      66,    67,    68,    69,    70,   425,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   987,     0,     0,     0,     0,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,   401,   402,     0,     0,     0,     0,     0,    14,     0,
       0,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,    17,    18,     0,     0,     0,     0,    19,     0,     0,
       0,    20,     0,   403,   404,   405,    21,    22,    23,    24,
       0,     0,     0,    25,     0,     0,     0,     0,     0,    26,
       0,     0,    27,    28,    29,     0,    30,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,   401,   402,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,   403,   404,   405,
       0,    39,    40,     0,     0,     0,     0,     0,     0,     0,
       0,    41,     0,    42,    43,     0,    44,    45,     0,     0,
       0,    46,    47,   682,    48,     0,    49,     0,     0,    50,
      51,    52,     0,    53,    54,    55,     0,     0,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,    57,
      58,    59,    60,     0,     0,     0,     0,    61,    62,     0,
       0,    63,    64,    65,     0,     0,    66,    67,    68,    69,
      70,   425,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   991,     0,     0,
       0,     0,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,     0,   401,   402,     0,
       0,     0,     0,     0,    14,     0,     0,     0,     0,     0,
      15,     0,     0,     0,     0,     0,    16,    17,    18,     0,
       0,     0,     0,    19,     0,     0,     0,    20,     0,   403,
     404,   405,    21,    22,    23,    24,     0,     0,     0,    25,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
      29,     0,    30,     0,     0,     0,    31,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,   401,   402,     0,     0,     0,     0,     0,     0,     0,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,   403,   404,   405,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,    42,
      43,     0,    44,    45,     0,     0,     0,    46,    47,   683,
      48,     0,    49,     0,     0,    50,    51,    52,     0,    53,
      54,    55,   425,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   426,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   401,
     402,     0,     0,    56,     0,    57,    58,    59,    60,     0,
       0,     0,     0,    61,    62,    14,     0,    63,    64,    65,
       0,    15,    66,    67,    68,    69,    70,    16,    17,    18,
       0,   403,   404,   405,    19,     0,     0,     0,    20,     0,
       0,     0,     0,    21,    22,    23,    24,     0,     0,     0,
      25,     0,   427,     0,     0,     0,    26,     0,     0,    27,
      28,    29,     0,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    41,   447,
      42,    43,     0,    44,    45,     0,     0,     0,    46,    47,
       0,    48,     0,    49,     0,     0,    50,    51,    52,     0,
      53,    54,    55,   425,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   600,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     401,   402,     0,     0,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,    14,     0,    63,    64,
      65,     0,    15,    66,    67,    68,    69,    70,    16,    17,
      18,     0,   403,   404,   405,    19,     0,     0,     0,    20,
       0,     0,     0,     0,    21,    22,    23,    24,     0,     0,
       0,    25,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,    29,     0,    30,     0,     0,     0,    31,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,    41,
     448,    42,    43,     0,    44,    45,     0,     0,     0,    46,
      47,     0,    48,     0,    49,     0,     0,    50,    51,    52,
       0,    53,    54,    55,   425,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     852,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   401,   402,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,     0,     0,    61,    62,    14,     0,    63,
      64,    65,     0,    15,    66,    67,    68,    69,    70,    16,
      17,    18,     0,   403,   404,   405,    19,     0,     0,     0,
      20,     0,     0,     0,     0,    21,    22,    23,    24,     0,
       0,     0,    25,     0,     0,     0,     0,     0,    26,     0,
       0,    27,    28,    29,     0,    30,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
      41,   450,    42,    43,     0,    44,    45,     0,     0,     0,
      46,    47,     0,    48,     0,    49,     0,     0,    50,    51,
      52,     0,    53,    54,    55,   425,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   857,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   401,   402,     0,     0,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,    14,     0,
      63,    64,    65,     0,    15,    66,    67,    68,    69,    70,
      16,    17,    18,     0,   403,   404,   405,    19,     0,     0,
       0,    20,     0,     0,     0,     0,    21,    22,    23,    24,
       0,     0,     0,    25,     0,     0,     0,     0,     0,    26,
       0,     0,    27,    28,    29,     0,    30,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,     0,     0,
       0,    41,   451,    42,    43,     0,    44,    45,     0,     0,
       0,    46,    47,     0,    48,     0,    49,     0,     0,    50,
      51,    52,     0,    53,    54,    55,   425,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   859,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   401,   402,     0,     0,    56,     0,    57,
      58,    59,    60,     0,     0,     0,     0,    61,    62,    14,
       0,    63,    64,    65,     0,    15,    66,    67,    68,    69,
      70,    16,    17,    18,     0,   403,   404,   405,    19,     0,
       0,     0,    20,     0,     0,     0,     0,    21,    22,    23,
      24,     0,     0,     0,    25,     0,     0,     0,     0,     0,
      26,     0,     0,    27,    28,    29,     0,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,    39,    40,     0,     0,     0,     0,     0,     0,
       0,     0,    41,   452,    42,    43,     0,    44,    45,     0,
       0,     0,    46,    47,     0,    48,     0,    49,     0,     0,
      50,    51,    52,     0,    53,    54,    55,   425,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   918,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   401,   402,     0,     0,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
      14,     0,    63,    64,    65,     0,    15,    66,    67,    68,
      69,    70,    16,    17,    18,     0,   403,   404,   405,    19,
       0,     0,     0,    20,     0,     0,     0,     0,    21,    22,
      23,    24,     0,     0,     0,    25,     0,     0,     0,     0,
       0,    26,     0,     0,    27,    28,    29,     0,    30,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,    39,    40,     0,     0,     0,     0,     0,
       0,     0,     0,    41,   454,    42,    43,     0,    44,    45,
       0,     0,     0,    46,    47,     0,    48,     0,    49,     0,
       0,    50,    51,    52,     0,    53,    54,    55,   425,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   923,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   401,   402,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,     0,     0,    61,
      62,    14,     0,    63,    64,    65,     0,    15,    66,    67,
      68,    69,    70,    16,    17,    18,     0,   403,   404,   405,
      19,     0,     0,     0,    20,     0,     0,     0,     0,    21,
      22,    23,    24,     0,     0,     0,    25,     0,     0,     0,
       0,     0,    26,     0,     0,    27,    28,    29,     0,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,    41,   457,    42,    43,     0,    44,
      45,     0,     0,     0,    46,    47,     0,    48,     0,    49,
       0,     0,    50,    51,    52,     0,    53,    54,    55,   425,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   925,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   401,   402,     0,     0,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,    14,     0,    63,    64,    65,     0,    15,    66,
      67,    68,    69,    70,    16,    17,    18,     0,   403,   404,
     405,    19,     0,     0,     0,    20,     0,     0,     0,     0,
      21,    22,    23,    24,     0,     0,     0,    25,     0,     0,
       0,     0,     0,    26,     0,     0,    27,    28,    29,     0,
      30,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,    41,   458,    42,    43,     0,
      44,    45,     0,     0,     0,    46,    47,     0,    48,     0,
      49,     0,     0,    50,    51,    52,     0,    53,    54,    55,
       1,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   401,   402,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,    14,     0,    63,    64,    65,     0,    15,
      66,    67,    68,    69,    70,    16,    17,    18,     0,   403,
     404,   405,    19,     0,     0,     0,    20,     0,     0,     0,
       0,    21,    22,    23,    24,     0,     0,     0,    25,     0,
       0,     0,     0,     0,    26,     0,     0,    27,    28,    29,
       0,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,    41,   460,    42,    43,
       0,    44,    45,     0,     0,     0,    46,    47,     0,    48,
       0,    49,     0,     0,    50,    51,    52,     0,    53,    54,
      55,   425,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   401,   402,
       0,     0,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,    14,     0,    63,    64,    65,     0,
      15,    66,    67,    68,    69,    70,    16,    17,    18,     0,
     403,   404,   405,    19,     0,     0,     0,    20,     0,     0,
       0,     0,    21,    22,    23,    24,     0,     0,     0,    25,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
      29,     0,    30,     0,     0,     0,    31,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,    41,   461,    42,
      43,     0,    44,    45,     0,     0,     0,    46,    47,     0,
      48,     0,    49,     0,     0,    50,    51,    52,     0,    53,
      54,    55,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   401,
     402,     0,     0,    56,     0,    57,    58,    59,    60,     0,
       0,     0,     0,    61,    62,    14,     0,    63,    64,    65,
     889,    15,    66,    67,    68,    69,    70,    16,    17,    18,
       0,   403,   404,   405,    19,     0,     0,     0,    20,     0,
       0,     0,     0,    21,    22,    23,    24,     0,     0,     0,
      25,     0,     0,     0,     0,     0,    26,     0,     0,    27,
      28,    29,     0,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    41,   462,
      42,    43,     0,    44,    45,     0,     0,     0,    46,    47,
       0,    48,     0,    49,     0,     0,    50,    51,    52,     0,
      53,    54,    55,     0,     0,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,     0,     0,    63,    64,
      65,     0,     0,    66,    67,    68,    69,    70,    14,     0,
       0,     0,   890,     0,    15,     0,     0,     0,     0,     0,
      16,    17,    18,     0,     0,     0,     0,    19,     0,     0,
       0,    20,     0,     0,     0,     0,    21,    22,    23,    24,
       0,     0,     0,    25,   401,   402,     0,     0,     0,    26,
       0,     0,    27,    28,    29,     0,    30,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   403,   404,   405,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,     0,     0,
       0,    41,     0,    42,    43,     0,    44,    45,     0,     0,
       0,    46,    47,     0,    48,     0,    49,     0,     0,    50,
      51,    52,     0,    53,    54,    55,     0,     0,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,   684,    56,     0,    57,
      58,    59,    60,     0,     0,     0,     0,    61,    62,     0,
       0,    63,    64,    65,     0,     0,    66,    67,    68,    69,
      70,    14,     0,     0,     0,   891,     0,    15,     0,     0,
       0,     0,     0,    16,    17,    18,     0,     0,     0,     0,
      19,     0,     0,     0,    20,     0,     0,     0,     0,    21,
      22,    23,    24,     0,     0,     0,    25,   401,   402,     0,
       0,     0,    26,     0,     0,    27,    28,    29,     0,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   403,
     404,   405,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,    41,     0,    42,    43,     0,    44,
      45,     0,     0,     0,    46,    47,     0,    48,     0,    49,
       0,     0,    50,    51,    52,     0,    53,    54,    55,     0,
       0,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,   685,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,     0,     0,    63,    64,    65,     0,     0,    66,
      67,    68,    69,    70,    14,     0,     0,     0,   892,     0,
      15,     0,     0,     0,     0,     0,    16,    17,    18,     0,
       0,     0,     0,    19,     0,     0,     0,    20,     0,     0,
       0,     0,    21,    22,    23,    24,     0,     0,     0,    25,
     401,   402,     0,     0,     0,    26,     0,     0,    27,    28,
      29,     0,    30,     0,     0,     0,    31,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   403,   404,   405,     0,     0,     0,     0,     0,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,    42,
      43,     0,    44,    45,     0,     0,     0,    46,    47,     0,
      48,     0,    49,     0,     0,    50,    51,    52,     0,    53,
      54,    55,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   401,
     402,     0,   686,    56,     0,    57,    58,    59,    60,     0,
       0,     0,     0,    61,    62,    14,     0,    63,    64,    65,
       0,    15,    66,    67,    68,    69,    70,    16,    17,    18,
       0,   403,   404,   405,    19,     0,     0,     0,    20,     0,
       0,     0,     0,    21,    22,    23,    24,     0,     0,     0,
      25,     0,     0,     0,     0,     0,    26,     0,     0,    27,
      28,    29,     0,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    41,   463,
      42,    43,     0,    44,    45,     0,     0,     0,    46,    47,
       0,    48,     0,    49,     0,     0,    50,    51,    52,     0,
      53,    54,    55,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   401,   402,     0,     0,
       0,     0,     0,     0,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,     0,     0,    63,    64,
      65,     0,     0,    66,    67,    68,    69,    70,   403,   404,
     405,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,     0,     0,     0,
       0,     0,   401,   402,     0,     0,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,     0,     0,   403,   404,   405,     0,     0,     0,
       0,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,     0,     0,     0,     0,
     401,   402,     0,     0,     0,     0,     0,     0,   687,     0,
       0,     0,     0,   401,   402,     0,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,     0,   403,   404,   405,   401,   402,     0,     0,     0,
       0,     0,     0,     0,     0,   403,   404,   405,   401,   402,
       0,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,     0,   403,   404,   405,
     401,   402,     0,     0,   688,     0,     0,     0,     0,     0,
     403,   404,   405,     0,     0,     0,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,     0,   403,   404,   405,   401,   402,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   689,     0,     0,     0,     0,   403,   404,   405,
     401,   402,     0,     0,     0,   690,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,     0,     0,     0,     0,     0,     0,   693,     0,     0,
       0,     0,   403,   404,   405,   401,   402,     0,     0,     0,
     700,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,   401,   402,     0,     0,
       0,     0,   705,     0,     0,     0,     0,   403,   404,   405,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,     0,     0,     0,     0,   403,   404,
     405,     0,     0,     0,     0,   401,   402,   706,     0,     0,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,     0,   403,   404,   405,
     401,   402,   709,     0,     0,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   401,
     402,     0,   403,   404,   405,     0,     0,   744,     0,     0,
       0,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,     0,     0,   760,   401,
     402,   403,   404,   405,     0,     0,     0,     0,     0,     0,
       0,     0,   401,   402,     0,     0,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,   403,   404,   405,   401,   402,     0,   762,     0,     0,
       0,     0,     0,     0,   403,   404,   405,     0,     0,     0,
       0,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,   403,   404,   405,     0,
     401,   402,   763,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,   766,   403,   404,   405,   401,   402,     0,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   767,     0,     0,     0,     0,     0,   403,   404,   405,
     401,   402,     0,     0,   769,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,     0,     0,
       0,     0,   401,   402,     0,     0,   781,     0,     0,     0,
       0,     0,   403,   404,   405,   401,   402,     0,     0,     0,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,   403,   404,   405,   401,   402,     0,
       0,     0,   840,     0,     0,     0,     0,   403,   404,   405,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,     0,     0,     0,     0,     0,   403,
     404,   405,     0,     0,   401,   402,     0,   842,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,   403,   404,   405,   401,
     402,     0,   845,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,   868,     0,     0,     0,     0,   401,
     402,   403,   404,   405,     0,     0,     0,   869,     0,     0,
       0,     0,     0,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,     0,   401,   402,   870,
       0,   403,   404,   405,     0,     0,     0,     0,     0,     0,
     401,   402,     0,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,     0,     0,     0,   403,
     404,   405,   401,   402,     0,     0,   947,     0,     0,     0,
       0,     0,   403,   404,   405,     0,     0,     0,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,     0,     0,   403,   404,   405,     0,     0,     0,
       0,   948,   401,   402,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,   949,   401,   402,   403,   404,   405,     0,     0,     0,
       0,     0,     0,     0,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   474,     0,     0,
       0,     0,     0,     0,   403,   404,   405,   401,   402,     0,
     475,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,   476,   401,   402,     0,     0,     0,     0,   403,
     404,   405,     0,     0,     0,     0,   401,   402,     0,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,     0,     0,     0,   403,   404,   405,     0,     0,
       0,     0,   553,   401,   402,     0,     0,     0,   403,   404,
     405,     0,     0,     0,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,     0,     0,     0,
     401,   402,   557,     0,     0,   403,   404,   405,     0,     0,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   403,   404,   405,     0,     0,   623,   401,   402,
       0,     0,     0,     0,     0,     0,     0,     0,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,     0,   627,     0,     0,     0,     0,     0,     0,
     403,   404,   405,   401,   402,     0,   629,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   401,
     402,     0,     0,   630,     0,   403,   404,   405,     0,     0,
       0,     0,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,     0,     0,     0,     0,
     633,   403,   404,   405,     0,     0,     0,   401,   402,     0,
       0,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   401,   402,   701,   403,
     404,   405,     0,     0,     0,     0,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   403,   404,
     405,   401,   402,   702,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   703,
     401,   402,     0,   403,   404,   405,     0,     0,     0,     0,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   403,   404,   405,   401,   402,   739,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   401,   402,     0,   745,   403,   404,   405,
       0,     0,     0,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   403,   404,   405,     0,   401,
     402,   746,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   401,   402,     0,
     748,   403,   404,   405,     0,     0,     0,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   403,
     404,   405,   401,   402,     0,   750,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   401,   402,   753,   403,   404,   405,     0,     0,     0,
       0,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   403,   404,   405,   401,   402,     0,   754,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   401,   402,   756,   403,   404,
     405,     0,     0,     0,     0,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   403,   404,   405,
     401,   402,   757,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   758,   403,   404,   405,     0,     0,     0,     0,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   403,   404,   405,   401,   402,   759,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   401,   402,     0,   764,   403,   404,   405,     0,
       0,     0,     0,     0,     0,   401,   402,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,     0,     0,     0,   403,   404,   405,     0,   401,   402,
     765,     0,     0,     0,     0,     0,     0,   403,   404,   405,
       0,     0,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,   401,   402,     0,   785,
     403,   404,   405,     0,     0,     0,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   403,   404,
     405,     0,     0,     0,   814,     0,   401,   402,     0,     0,
       0,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,   816,     0,     0,     0,     0,     0,   403,   404,
     405,   401,   402,     0,     0,   817,     0,     0,     0,     0,
       0,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,   401,   402,     0,   820,     0,
       0,     0,     0,   403,   404,   405,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,     0,     0,     0,     0,     0,   841,   403,   404,   405,
     401,   402,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,     0,     0,
       0,     0,   403,   404,   405,     0,   844,     0,     0,     0,
     401,   402,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   401,   402,     0,     0,     0,
       0,   873,   403,   404,   405,     0,     0,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,   401,   402,     0,     0,   875,     0,   403,   404,   405,
       0,     0,     0,     0,   401,   402,     0,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,     0,     0,   403,   404,   405,     0,     0,     0,     0,
     878,   401,   402,     0,     0,     0,   403,   404,   405,     0,
       0,     0,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,   403,   404,   405,   401,   402,     0,     0,
     879,     0,     0,     0,     0,     0,     0,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,     0,     0,     0,     0,   881,   401,   402,   403,   404,
     405,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,   882,     0,     0,     0,     0,     0,     0,   403,   404,
     405,   401,   402,     0,   883,     0,     0,     0,     0,     0,
       0,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,   886,     0,   403,   404,   405,   401,   402,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     401,   402,     0,     0,     0,     0,   887,     0,   403,   404,
     405,     0,     0,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,     0,     0,     0,     0,
       0,     0,   403,   404,   405,     0,   900,     0,     0,     0,
     401,   402,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   401,   402,     0,
       0,   931,   403,   404,   405,     0,     0,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   403,
     404,   405,   401,   402,     0,     0,   933,     0,     0,     0,
       0,     0,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,     0,     0,     0,     0,
     934,   401,   402,     0,   403,   404,   405,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   403,   404,   405,   401,   402,     0,     0,
     940,     0,     0,     0,     0,     0,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,     0,     0,     0,     0,     0,     0,   941,   403,   404,
     405,   401,   402,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   401,   402,     0,     0,
       0,     0,   978,   403,   404,   405,     0,     0,     0,   401,
     402,     0,     0,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,     0,     0,   403,   404,
     405,   981,     0,     0,     0,   401,   402,     0,     0,     0,
       0,   403,   404,   405,     0,     0,     0,     0,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,   401,   402,     0,     0,   995,   403,   404,   405,
       0,     0,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   403,   404,   405,     0,     0,     0,
       0,   996,   401,   402,     0,     0,     0,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,     0,     0,     0,     0,     0,   998,     0,     0,     0,
       0,     0,     0,     0,   403,   404,   405,   401,   402,   999,
       0,     0,     0,     0,     0,     0,     0,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,   401,   402,     0,     0,  1009,     0,     0,     0,   403,
     404,   405,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,  1012,   403,   404,   405,   401,   402,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,     0,     0,     0,     0,   403,   404,
     405,     0,  1015,     0,     0,     0,   401,   402,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   401,   402,     0,     0,     0,     0,  1016,   403,   404,
     405,     0,     0,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,     0,   401,   402,     0,
       0,  1018,     0,   403,   404,   405,     0,     0,     0,     0,
     401,   402,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   403,
     404,   405,     0,     0,     0,     0,  1019,   401,   402,     0,
       0,     0,   403,   404,   405,     0,     0,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   403,
     404,   405,   401,   402,     0,     0,  1025,     0,     0,     0,
       0,     0,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,     0,     0,     0,     0,     0,
       0,  1026,     0,     0,   403,   404,   405,   713,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1029,     0,     0,
       0,     0,     0,     0,     0,     0,   401,   402,     0,     0,
    1030,     0,   715,     0,     0,     0,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,     0,     0,     0,     0,     0,     0,  1033,   403,   404,
     405,   401,   402,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1034,   403,   404,   405,   795,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   797,     0,   401,   402,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   401,   402,     0,     0,     0,   403,   404,   405,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   403,   404,   405
};

static const yytype_int16 yycheck[] =
{
      16,    17,    18,    19,    93,    94,     1,     7,     8,     7,
       8,     7,     8,   244,    15,    95,    96,    97,    98,    20,
      31,    32,     3,    24,   246,    26,    42,    43,    19,    45,
      46,    47,    48,    49,    50,    37,    52,    53,    54,    55,
       3,    28,    23,   244,    60,     7,     8,     9,    10,   276,
      66,    67,    68,     3,    70,    25,    26,    27,    28,   244,
      23,    31,    32,    33,     7,     8,     9,    25,     3,    85,
      86,    87,   244,    23,    90,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    23,    71,
       3,    78,     3,     3,    85,   111,   112,    78,    80,    25,
     116,   117,   244,     3,    91,    92,    93,    94,   244,     3,
      23,    28,    23,    23,    31,    32,     7,     8,     9,    10,
     244,     3,    85,    23,     3,   244,    25,   244,    78,    23,
      88,   244,    25,    26,    27,    28,   244,   153,    31,    32,
      33,    23,    59,    78,    23,    25,    26,    27,    28,     4,
     166,    31,    32,    33,    29,    30,    99,     4,     5,     3,
      73,    78,    88,     3,   113,   114,     8,    78,    78,     7,
       8,     9,    10,     4,    91,    92,    93,    94,    78,    23,
       7,     8,    25,    23,    78,   244,   202,    34,    70,    88,
     206,    70,   244,    72,     4,     5,   145,   146,   147,    25,
      26,    27,    28,    94,     7,    31,    32,    33,    10,    25,
      26,    27,    28,     3,    52,    31,    32,    33,   440,    25,
      26,    27,    28,     0,     1,    31,    32,    33,   229,    25,
      26,    27,    28,    23,    78,    31,    32,    33,    78,   466,
       3,   468,   244,   259,   244,    88,   244,   263,   244,   265,
     266,    10,     3,   269,     3,   335,   336,   337,   274,   275,
      23,    25,    26,    27,    28,   445,   446,    31,    32,    33,
       0,   287,    23,   243,    23,   245,   243,     3,     3,    25,
       3,   243,    72,   299,   300,   301,   302,   303,   304,   305,
     306,    38,    39,    19,   243,   243,   245,    23,    23,   310,
      23,   243,   297,     3,     3,   243,    10,   308,    25,    26,
      27,    28,     3,    60,    31,    32,    33,   333,   334,    25,
      26,    27,    28,    23,    23,    31,    32,    33,   244,    78,
     317,    79,    23,    88,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,     3,   245,   369,   434,    78,     7,     8,     9,   276,
     376,   377,    19,   379,   380,   245,   244,   383,   384,   243,
       3,    23,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
      23,   244,   244,   310,     3,     3,     3,   413,   414,   415,
     317,   417,   243,   419,    25,    26,    27,    28,   244,   244,
      31,    32,    33,   502,    23,    23,    23,     3,   165,   245,
     436,   437,   438,   439,   244,   441,    78,   244,   444,   245,
     244,   447,   448,   244,   450,   451,   452,    23,   454,   245,
     244,   457,   458,     3,   460,   461,   462,   463,   435,   245,
     227,   244,   244,   469,     3,   244,   472,   473,   474,   475,
     476,   244,     3,    23,    25,    26,    27,    28,   244,    78,
      31,    32,    33,     3,    23,   491,   244,   493,   244,   244,
     496,   245,    23,    25,    26,    27,    28,     3,   489,    31,
      32,    33,    78,    23,   244,     0,     1,    25,    26,    27,
      28,   244,   244,    31,    32,    33,   244,    23,   244,   244,
      70,   244,    72,   500,   243,   502,     3,   244,   435,    25,
     297,   298,   244,    28,   244,     3,    31,    32,   245,    78,
     244,    72,   548,   244,   311,   244,    23,   553,    19,   245,
     287,   557,   835,   836,   837,    23,   244,   244,    78,   466,
     244,   468,   244,   243,    59,    25,    26,    27,    28,    24,
     307,    31,    32,    33,    29,    30,   244,   244,    33,    34,
      35,    36,   244,    78,   244,     3,     3,   593,   244,   595,
     244,     3,     3,   500,   244,   502,    91,    92,    93,    94,
     244,    78,     3,   243,   243,    23,    23,   344,   345,   346,
      78,    23,    23,   244,   605,   110,   244,   623,     7,     8,
       9,   627,    23,   629,   630,   244,    25,   633,    25,   243,
     367,   368,   243,   370,   371,   372,   373,   374,   615,   245,
     710,   243,     3,     3,     3,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,   113,   114,
      78,    78,    23,    23,    23,   245,    78,    78,   245,   406,
     407,   408,   409,   410,   411,   412,   245,    78,   245,     3,
       3,   245,    24,   245,   245,     7,   244,    29,    30,   695,
     696,   697,   243,    35,    36,     8,   702,   703,     9,    23,
      23,   243,     7,     8,     9,    10,     7,   713,   615,   715,
      19,   243,     6,     7,     8,     9,    10,    78,    78,    78,
      25,     7,     8,     9,    10,   243,     8,   733,     9,   735,
      88,   737,   227,   228,   113,   114,     7,     8,     9,   745,
     746,    70,   748,    97,   750,     7,    23,   753,   754,    68,
     756,   757,   758,   759,    78,    78,    23,    23,   764,   765,
      23,     7,     8,     9,    10,   245,   145,   146,   147,   245,
     245,   113,   114,     7,     8,     9,    10,   244,    25,   785,
     244,   276,   244,   243,     4,     5,    10,     7,     8,   795,
      10,   797,    39,    40,    41,    42,    43,    44,    45,     7,
       8,     9,   297,   298,     7,     8,     9,    33,   814,   244,
     816,   817,    86,   244,   820,   310,   311,   244,     7,     9,
     826,   827,   317,    25,    26,    27,    28,     8,    25,    31,
      32,    33,   838,    19,   243,   841,   603,   604,   844,    96,
     244,    19,   245,   245,   850,   245,     8,   245,   244,   855,
     245,   245,   244,   244,    68,     9,     7,   243,   243,   243,
     243,   243,    19,   244,   243,   245,   245,   873,   245,   875,
     245,   245,   878,   879,    19,   245,   245,   245,    71,   435,
     886,   887,   649,   742,   500,     0,     1,   711,    -1,    -1,
      -1,    -1,    -1,    -1,   900,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,   287,
     916,    -1,    -1,    28,    -1,   921,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   931,    -1,   933,   934,    -1,
     425,   426,   427,    -1,   940,   941,    -1,    -1,   433,    -1,
     435,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   723,   694,    -1,    -1,
      -1,    -1,    -1,    78,   701,    -1,    -1,    -1,    -1,    -1,
      -1,   466,   978,   468,    -1,   981,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,   995,
     996,    -1,   998,   999,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1009,    -1,   500,  1012,   502,    -1,  1015,
    1016,    -1,  1018,  1019,    -1,    -1,   145,   146,   147,  1025,
    1026,    -1,   789,  1029,  1030,    -1,    -1,  1033,  1034,    -1,
      -1,   768,    -1,    -1,    -1,    -1,    -1,   804,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,   831,   832,   833,   834,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   600,    -1,   602,   603,   604,
      -1,    -1,   227,   228,   243,    -1,   245,    -1,    -1,    -1,
     615,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,   872,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,   881,   882,   883,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   649,    -1,    -1,   113,   114,    -1,
      -1,   276,    -1,    -1,   659,    -1,   661,   662,   663,   145,
     146,   147,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   297,   298,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,   310,   311,    -1,    -1,    -1,
      -1,    -1,   317,    -1,   145,   146,   147,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,   723,    18,
      -1,    -1,   727,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,   245,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,   245,
      -1,   786,    -1,    -1,   789,   790,   791,   792,   793,   794,
      -1,    -1,   243,    -1,   245,   800,    -1,    -1,    -1,   804,
     425,   426,   427,    -1,    -1,    -1,    -1,    -1,   433,    -1,
     435,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,   113,   114,   831,   832,   833,   834,
      -1,    -1,   245,    -1,   133,    -1,   135,   136,   137,    -1,
     139,   466,   141,   468,   849,   144,    -1,   852,    -1,   854,
      -1,    -1,   857,    -1,   859,    -1,   861,   862,   863,   864,
     865,    15,   867,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      24,    -1,    26,    27,    28,   500,    -1,   502,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   904,
     113,   114,    -1,    -1,   909,    59,    60,    -1,    -1,    -1,
     915,    -1,    -1,   918,    -1,   920,    -1,    -1,   923,   218,
     925,    -1,    -1,    -1,    78,    -1,    -1,   226,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,    -1,   953,    -1,
      -1,    -1,   957,    -1,    -1,    -1,    -1,   962,    -1,    -1,
      -1,    -1,   967,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   600,    -1,   602,   603,   604,
      -1,    -1,   987,    -1,    -1,    -1,   991,    -1,    -1,    -1,
     615,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   649,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   245,    -1,   659,    -1,   661,   662,   663,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,   425,   426,   427,
      -1,    -1,    -1,    -1,    -1,   433,    -1,    -1,   723,    -1,
      -1,    -1,   727,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   287,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   307,   308,    -1,    -1,    -1,    -1,    -1,
      -1,   786,    -1,   317,   789,   790,   791,   792,   793,   794,
     145,   146,   147,    -1,    -1,   800,    -1,    -1,    -1,   804,
      -1,   335,   336,   337,    -1,    -1,    -1,    -1,    -1,    -1,
     344,   345,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   831,   832,   833,   834,
      -1,    -1,   245,   367,   368,    -1,   370,   371,   372,   373,
     374,    -1,    -1,    -1,   849,    -1,    -1,   852,    -1,   854,
      -1,    -1,   857,    -1,   859,    -1,   861,   862,   863,   864,
     865,    -1,   867,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   406,   407,   408,   409,   410,   411,   412,    -1,
      -1,    -1,   600,    -1,   602,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   904,
     434,   435,    -1,    -1,   909,    -1,    -1,    -1,    -1,    -1,
     915,    -1,    -1,   918,    -1,   920,    -1,    -1,   923,    -1,
     925,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   466,    -1,   468,    -1,    -1,    -1,    -1,    -1,
      -1,   659,    -1,   661,   662,   663,    -1,    -1,   953,    -1,
      -1,    -1,   957,    -1,    -1,   489,    -1,   962,    -1,    -1,
      -1,    -1,   967,    -1,    -1,    -1,   500,    -1,   502,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,   987,    -1,    -1,    -1,   991,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   727,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   786,    -1,
      -1,   605,   790,   791,   792,   793,   794,   113,   114,    -1,
      -1,   615,   800,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,   113,   114,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   849,    -1,    -1,   852,    -1,   854,    -1,   145,   857,
      -1,   859,    -1,   861,   862,   863,   864,   865,    -1,   867,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
     694,    -1,    -1,    -1,    -1,    -1,    -1,   701,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   710,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,   904,    -1,    -1,    -1,
     245,   909,    -1,    -1,    -1,    -1,    -1,   915,    -1,    -1,
     918,    -1,   920,    -1,    -1,   923,    -1,   925,    -1,   245,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   768,   953,    -1,    -1,    -1,   957,
      -1,    -1,    -1,    -1,   962,    -1,    -1,    -1,    -1,   967,
       4,     5,   245,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,   987,
      -1,    -1,    -1,   991,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,    63,
      64,    65,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   872,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,   881,   882,   883,
      -1,   105,   106,   107,    -1,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,    -1,
     134,    -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,   161,    -1,    -1,
      -1,    -1,    -1,    -1,   168,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,    -1,   216,   217,     4,     5,    -1,     7,     8,    -1,
      10,   225,    -1,    -1,    -1,    -1,    16,    17,   232,   233,
      -1,    -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,
     244,   245,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
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
      -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,
      -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,    -1,   216,   217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,   239,
     240,   241,    -1,    -1,   244,   245,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    61,    62,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
      -1,    -1,   110,   111,   112,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,    -1,   141,    -1,   143,   144,    -1,    -1,    -1,
     148,    -1,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,
     168,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,    -1,   216,   217,
     218,    -1,    -1,   221,    -1,    -1,    -1,   225,   226,    -1,
      -1,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,
      -1,   239,   240,   241,    -1,   243,   244,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,   226,
      -1,    -1,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,   239,   240,   241,     4,     5,   244,     7,     8,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,   113,
     114,   110,   111,   112,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,    -1,   134,    -1,    -1,    -1,   138,
      -1,   145,   146,   147,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
      -1,    -1,   161,    -1,    -1,    -1,    -1,   166,    -1,   168,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,    -1,   216,   217,     4,
       5,    -1,     7,     8,    -1,    10,   225,    -1,    -1,    -1,
      -1,    16,    17,   232,   233,    -1,    -1,    -1,    -1,   243,
     239,   240,   241,    -1,    -1,   244,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,   107,    -1,    -1,   110,   111,   112,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,    -1,   134,
      -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,    -1,    -1,   161,    -1,    -1,    -1,
      -1,    -1,   167,   168,    -1,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
      -1,   216,   217,     4,     5,    -1,     7,     8,    -1,    10,
     225,    -1,    -1,    -1,    -1,    16,    17,   232,   233,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,   244,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
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
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,    -1,   216,   217,     4,     5,    -1,
       7,     8,    -1,    10,   225,    -1,    -1,    -1,    -1,    16,
      17,   232,   233,    -1,    -1,    -1,    -1,    -1,   239,   240,
     241,    -1,    -1,   244,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,
     107,    -1,    -1,   110,   111,   112,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,    -1,   134,    -1,    -1,
      -1,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,   148,    -1,    -1,   151,   152,   153,   154,   155,   156,
     157,   158,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,
     167,   168,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,    -1,   216,
     217,     4,     5,    -1,     7,     8,    -1,    10,   225,    -1,
      -1,    -1,    -1,    16,    17,   232,   233,    -1,    -1,    -1,
      -1,    -1,   239,   240,   241,    -1,    -1,   244,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,    -1,    -1,   110,   111,   112,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,   134,    -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,    -1,    -1,   161,    -1,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,    -1,   216,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,   232,
     233,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,     3,
      -1,   244,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,   145,   146,   147,    -1,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,
     164,   165,    -1,    -1,    -1,   169,   170,    -1,   172,    -1,
     174,    -1,    -1,   177,   178,   179,    -1,   181,   182,   183,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,
      -1,   215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,
      -1,   225,   226,    -1,    -1,   229,   230,   231,    -1,    -1,
     234,   235,   236,   237,   238,     3,   145,   146,   147,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    69,    -1,   145,   146,   147,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,   145,   146,   147,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,
      -1,   169,   170,   245,   172,    -1,   174,    -1,    -1,   177,
     178,   179,    -1,   181,   182,   183,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,   215,    -1,   217,
     218,   219,   220,    -1,    -1,    -1,    -1,   225,   226,    -1,
      -1,   229,   230,   231,    -1,    -1,   234,   235,   236,   237,
     238,     3,   145,   146,   147,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    -1,   145,
     146,   147,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,   145,   146,   147,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,
     162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,   245,
     172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,   181,
     182,   183,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,   215,    -1,   217,   218,   219,   220,    -1,
      -1,    -1,    -1,   225,   226,    -1,    -1,   229,   230,   231,
      -1,    -1,   234,   235,   236,   237,   238,     3,   145,   146,
     147,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    69,    -1,   145,   146,   147,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,
     146,   147,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,   161,   162,    -1,   164,   165,
      -1,    -1,    -1,   169,   170,   245,   172,    -1,   174,    -1,
      -1,   177,   178,   179,    -1,   181,   182,   183,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
      -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,   225,
     226,    -1,    -1,   229,   230,   231,    -1,    -1,   234,   235,
     236,   237,   238,     3,    -1,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,
      -1,   145,   146,   147,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,   145,   146,   147,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,   161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,
     170,   245,   172,    -1,   174,    -1,    -1,   177,   178,   179,
      -1,   181,   182,   183,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   215,    -1,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,   225,   226,    -1,    -1,   229,
     230,   231,    -1,    -1,   234,   235,   236,   237,   238,     3,
      -1,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    69,    -1,   145,   146,   147,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,   145,   146,   147,    -1,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,
     164,   165,    -1,    -1,    -1,   169,   170,   245,   172,    -1,
     174,    -1,    -1,   177,   178,   179,    -1,   181,   182,   183,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,
      -1,   225,   226,    -1,    -1,   229,   230,   231,    -1,    -1,
     234,   235,   236,   237,   238,     3,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    69,    -1,   145,   146,   147,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,   145,   146,   147,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,
      -1,   169,   170,   245,   172,    -1,   174,    -1,    -1,   177,
     178,   179,    -1,   181,   182,   183,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,   217,
     218,   219,   220,    -1,    -1,    -1,    -1,   225,   226,    -1,
      -1,   229,   230,   231,    -1,    -1,   234,   235,   236,   237,
     238,     3,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    -1,   145,
     146,   147,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,   145,   146,   147,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,
     162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,   245,
     172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,   181,
     182,   183,     3,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,   215,    -1,   217,   218,   219,   220,    -1,
      -1,    -1,    -1,   225,   226,    46,    -1,   229,   230,   231,
      -1,    52,   234,   235,   236,   237,   238,    58,    59,    60,
      -1,   145,   146,   147,    65,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,    90,
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
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
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
      -1,   181,   182,   183,     3,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
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
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
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
     182,   183,    -1,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,   215,    -1,   217,   218,   219,   220,    -1,
      -1,    -1,    -1,   225,   226,    46,    -1,   229,   230,   231,
      51,    52,   234,   235,   236,   237,   238,    58,    59,    60,
      -1,   145,   146,   147,    65,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   243,
     161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,
     181,   182,   183,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,   215,    -1,   217,   218,   219,   220,
      -1,    -1,    -1,    -1,   225,   226,    -1,    -1,   229,   230,
     231,    -1,    -1,   234,   235,   236,   237,   238,    46,    -1,
      -1,    -1,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,   113,   114,    -1,    -1,    -1,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,
      -1,   169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
     178,   179,    -1,   181,   182,   183,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,   245,   215,    -1,   217,
     218,   219,   220,    -1,    -1,    -1,    -1,   225,   226,    -1,
      -1,   229,   230,   231,    -1,    -1,   234,   235,   236,   237,
     238,    46,    -1,    -1,    -1,    50,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    81,   113,   114,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,   164,
     165,    -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,
      -1,    -1,   177,   178,   179,    -1,   181,   182,   183,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,   245,
     215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,
     225,   226,    -1,    -1,   229,   230,   231,    -1,    -1,   234,
     235,   236,   237,   238,    46,    -1,    -1,    -1,    50,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
     113,   114,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,
     162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,    -1,
     172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,   181,
     182,   183,    -1,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,   245,   215,    -1,   217,   218,   219,   220,    -1,
      -1,    -1,    -1,   225,   226,    46,    -1,   229,   230,   231,
      -1,    52,   234,   235,   236,   237,   238,    58,    59,    60,
      -1,   145,   146,   147,    65,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   243,
     161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,
     181,   182,   183,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,   215,    -1,   217,   218,   219,   220,
      -1,    -1,    -1,    -1,   225,   226,    -1,    -1,   229,   230,
     231,    -1,    -1,   234,   235,   236,   237,   238,   145,   146,
     147,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,   113,   114,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,   145,   146,   147,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,   113,   114,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,   145,   146,   147,
     113,   114,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,   145,   146,   147,   113,   114,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   245,    -1,    -1,    -1,    -1,   145,   146,   147,
     113,   114,    -1,    -1,    -1,   245,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,
      -1,    -1,   145,   146,   147,   113,   114,    -1,    -1,    -1,
     245,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,   245,    -1,    -1,    -1,    -1,   145,   146,   147,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,   113,   114,   245,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,   145,   146,   147,
     113,   114,   245,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,   145,   146,   147,    -1,    -1,   245,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,   245,   113,
     114,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,   145,   146,   147,   113,   114,    -1,   245,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,   145,   146,   147,    -1,
     113,   114,   245,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,   245,   145,   146,   147,   113,   114,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   245,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
     113,   114,    -1,    -1,   245,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,   113,   114,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,   145,   146,   147,   113,   114,    -1,
      -1,    -1,   245,    -1,    -1,    -1,    -1,   145,   146,   147,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,   113,   114,    -1,   245,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,   145,   146,   147,   113,
     114,    -1,   245,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   113,
     114,   145,   146,   147,    -1,    -1,    -1,   245,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,   113,   114,   245,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,   145,
     146,   147,   113,   114,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,   245,   113,   114,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,   245,   113,   114,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,   243,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,   113,   114,    -1,
     243,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   243,   113,   114,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,   113,   114,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,   243,   113,   114,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
     113,   114,   243,    -1,    -1,   145,   146,   147,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,   243,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,   113,   114,    -1,   243,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,   243,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
     243,   145,   146,   147,    -1,    -1,    -1,   113,   114,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,   243,   145,
     146,   147,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,   113,   114,   243,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,
     113,   114,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,   113,   114,   243,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,   243,   145,   146,   147,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,   113,
     114,   243,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
     243,   145,   146,   147,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,   113,   114,    -1,   243,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,   243,   145,   146,   147,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,   113,   114,    -1,   243,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,   243,   145,   146,
     147,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
     113,   114,   243,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,   113,
     114,   243,   145,   146,   147,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,   113,   114,   243,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,   243,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,   113,   114,
     243,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,   113,   114,    -1,   243,
     145,   146,   147,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,   243,    -1,   113,   114,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,   113,   114,    -1,    -1,   243,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,   113,   114,    -1,   243,    -1,
      -1,    -1,    -1,   145,   146,   147,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   243,   145,   146,   147,
     113,   114,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,   243,    -1,    -1,    -1,
     113,   114,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,   243,   145,   146,   147,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,   113,   114,    -1,    -1,   243,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,   113,   114,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
     243,   113,   114,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,   113,   114,    -1,    -1,
     243,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,   243,   113,   114,   145,   146,
     147,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,   113,   114,    -1,   243,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   243,    -1,   145,   146,   147,   113,   114,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,   243,    -1,   145,   146,
     147,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,   243,    -1,    -1,    -1,
     113,   114,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,   243,   145,   146,   147,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,   113,   114,    -1,    -1,   243,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
     243,   113,   114,    -1,   145,   146,   147,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,   145,   146,   147,   113,   114,    -1,    -1,
     243,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,   145,   146,
     147,   113,   114,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,   243,   145,   146,   147,    -1,    -1,    -1,   113,
     114,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,   145,   146,
     147,   243,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,   113,   114,    -1,    -1,   243,   145,   146,   147,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,   243,   113,   114,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,   113,   114,   243,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,   113,   114,    -1,    -1,   243,    -1,    -1,    -1,   145,
     146,   147,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   243,   145,   146,   147,   113,   114,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,   243,    -1,    -1,    -1,   113,   114,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,   243,   145,   146,
     147,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,   113,   114,    -1,
      -1,   243,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,   243,   113,   114,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,   113,   114,    -1,    -1,   243,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,   243,    -1,    -1,   145,   146,   147,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
     243,    -1,    84,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,   145,   146,
     147,   113,   114,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   243,   145,   146,   147,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147
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
     238,   247,   248,   250,   253,   254,   255,   256,   263,   264,
     271,   272,   273,   284,   248,   244,   244,   244,     7,     8,
     244,   244,   244,   244,   244,   244,   244,   244,   244,     7,
       8,     9,     4,     5,     6,     9,    10,    16,    17,    18,
      34,    58,    61,    62,    63,    64,    65,    67,    94,   105,
     106,   107,   110,   111,   112,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     141,   143,   144,   148,   151,   152,   153,   154,   155,   156,
     157,   158,   161,   168,   171,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   216,   217,   218,   225,
     226,   232,   233,   239,   240,   241,   244,   251,   252,   253,
     254,   256,   267,   268,   269,    10,   252,   252,   252,   252,
     269,     7,     8,     9,    99,     4,     4,   269,    19,    85,
     269,   269,   270,   255,   256,   257,   258,     7,     8,     9,
      10,   261,   262,   255,   272,     9,    94,   272,     8,    10,
     268,   268,     7,     8,     9,   259,   260,   252,   252,   166,
     252,   252,   252,   167,   252,   167,   168,   252,   252,   167,
     252,   252,   252,   252,   244,   244,     6,   257,   276,   277,
      21,    37,    38,   221,   243,   252,   268,   274,   275,     7,
      10,    10,   252,   252,   252,   252,     0,     3,    23,    25,
      39,    40,    41,    42,    43,    44,    45,    25,    25,   257,
     243,    23,   252,   252,   245,   252,   252,    52,   257,   278,
     279,   257,   280,   281,   281,   281,   270,   270,   270,   270,
     243,   243,   243,   244,   244,   244,   244,   244,     4,     5,
     253,   254,   252,   252,   244,   244,   244,   252,   252,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,    37,   244,   244,   252,   244,
     244,   268,   252,   244,   244,    10,   252,   252,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,   113,   114,   145,   146,   147,    25,    26,    27,    28,
      31,    32,    33,   244,   243,    25,    79,    25,    88,    25,
      88,    88,     7,     8,     9,     3,    19,    83,   249,   250,
     249,   250,   269,    19,   243,   243,   244,   244,   244,   244,
     243,   244,   262,    19,   244,   243,   243,   243,   243,   252,
     243,   243,   243,   252,   243,   252,   252,   243,   243,   252,
     243,   243,   243,   243,   252,   252,   243,   277,   243,   244,
     275,   243,   244,   244,   243,   243,   243,   248,   250,   252,
     252,   252,   252,   252,   252,   252,   252,   268,   269,    25,
     272,   243,   245,   243,   245,    25,   243,   245,   245,   257,
     243,   245,   243,   245,   245,   245,   245,   245,   245,   245,
       7,     8,     9,   252,   270,   270,   270,   268,   268,   268,
       7,     8,     9,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     268,   268,   252,   268,   268,   268,   268,   268,   244,   252,
     252,   252,   252,   243,   252,   252,   243,   243,   245,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   268,   268,   268,
     268,   268,   268,   268,   252,   252,   252,    19,   252,     7,
     252,     8,     9,    25,    88,    25,    88,    88,   249,   249,
      19,   249,     3,    23,    70,    85,   249,   270,   258,   252,
     252,   252,   252,   262,   245,    97,   265,   266,   252,   260,
     260,   252,   252,   243,   252,   252,   252,   243,   252,   243,
     243,   252,   252,   243,   252,   252,   252,   252,   245,   245,
     277,   277,   252,     7,   252,   252,   252,   252,   252,    23,
     269,   252,   252,    68,   252,     7,     8,     9,   279,    23,
     281,    23,    23,    23,   245,   245,   245,   245,   245,   245,
     245,   244,   244,   244,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   243,   243,   243,   243,   245,   252,
     245,   243,   243,   243,   252,   245,   245,    10,   252,   245,
      86,   282,   283,    84,   244,    84,   244,   244,   252,     7,
     252,     8,     9,    23,    70,    72,   249,    70,   249,   250,
     250,   269,    73,   243,   245,   243,   245,   243,   245,   243,
      25,   257,    19,    96,   245,   243,   243,   252,   243,   252,
     243,   252,   252,   243,   243,   252,   243,   243,   243,   243,
     245,   243,   245,   245,   243,   243,   245,   245,   244,   245,
     249,   249,   249,   249,   245,   245,   245,   268,   252,   252,
     252,   245,   268,   252,   252,   243,   270,   283,    71,    80,
     252,   245,   252,   245,   245,    84,   244,    84,   244,   244,
      19,    70,    72,   249,    23,   252,   252,   252,     8,    68,
     266,   252,   252,   252,   243,   252,   243,   243,   252,   252,
     243,   252,   252,   252,   252,     7,   243,   243,   252,   252,
     268,    23,    23,    23,    23,   243,   243,   243,   243,   245,
     245,   243,   245,   245,   243,   245,   252,   249,   250,    19,
      82,   249,    19,   249,    19,    82,   249,    19,   249,    19,
     249,   252,   245,   252,   245,   245,   249,    19,   245,   245,
     245,   245,   244,   243,   252,   243,   252,   252,   243,   243,
     252,   243,   243,   243,   252,   252,   243,   243,   245,    51,
      50,    50,    50,    34,   251,   251,   251,   252,   252,   252,
     243,    19,    19,   249,   252,    78,   249,    78,   249,   252,
      78,   249,    78,   249,    78,    19,    82,   249,    19,   249,
      19,    82,   249,    19,   249,    19,   249,    72,   249,   268,
     252,   243,   252,   243,   243,   252,   252,   268,   268,   268,
     243,   243,   252,   252,   245,   245,   245,   245,   245,   245,
     252,    71,    78,    19,   249,    78,    78,    19,   249,    78,
      78,   249,   252,    78,   249,    78,   249,   252,    78,   249,
      78,   249,    78,    72,   245,   252,   252,   252,   243,   252,
     252,   243,   249,    78,   249,    78,    78,    19,   249,    78,
      78,    19,   249,    78,    78,   243,   243,   252,   243,   243,
     252,    78,    78,   249,    78,   249,    78,   252,   252,   243,
     252,   252,   243,    78,    78,   243,   243,   252,   243,   243,
     252,   252,   252,   252,   252,   243,   243,   252,   252,   243,
     243,   252,   252,   243,   243,   252,   252
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   246,   247,   248,   248,   248,   248,   249,   249,   249,
     249,   250,   250,   250,   250,   250,   250,   250,   250,   250,
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
     250,   250,   250,   250,   250,   250,   250,   250,   251,   251,
     251,   251,   252,   252,   252,   252,   252,   252,   252,   252,
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
     252,   252,   252,   252,   252,   252,   252,   253,   253,   253,
     253,   253,   254,   254,   254,   254,   254,   255,   255,   256,
     256,   256,   256,   257,   257,   258,   258,   259,   259,   259,
     260,   260,   261,   261,   261,   261,   261,   261,   261,   262,
     262,   263,   263,   264,   265,   266,   266,   267,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   269,
     269,   270,   270,   270,   271,   271,   271,   271,   272,   272,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     274,   274,   274,   274,   274,   274,   274,   275,   275,   276,
     277,   277,   278,   278,   278,   279,   279,   280,   280,   281,
     281,   282,   283,   283,   284,   284,   284,   284
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     3,     4,     1,     3,     3,
       4,     1,     1,     1,     2,     4,     2,     1,     1,     4,
       4,     4,     4,     2,     2,     1,     1,     2,     1,     1,
       1,     2,     3,     4,     2,     4,     2,     8,     9,     2,
       2,     2,     2,     3,     4,     6,     4,     4,     1,     1,
       3,     5,     5,     8,     4,     6,     6,     9,     5,     3,
       5,     4,     4,     4,     9,     9,     9,     8,     8,     8,
      10,    10,    10,     9,     9,     9,     9,     9,     8,     8,
      11,    11,    10,    10,    10,    10,     9,     9,    12,    12,
      11,    11,     6,     9,     1,     2,     1,    13,    13,     8,
       8,     4,     2,     1,     2,     6,     2,     6,     4,     5,
       1,     2,     1,     6,     7,     8,     8,     9,    12,    13,
      19,     4,     8,     1,     8,     8,     8,     1,     1,     2,
       1,     2,     1,     1,     1,     3,     4,     4,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     4,
       8,     8,     8,     2,     1,     4,     1,     1,     1,     1,
       1,     1,     1,     4,    18,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     8,     6,     1,     1,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     4,
       4,     4,     1,     1,     1,     4,     1,     2,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     6,     8,     4,     1,     4,     6,
       2,     5,     1,     4,     6,     2,     5,     1,     1,     1,
       4,     6,     5,     1,     1,     1,     3,     1,     1,     1,
       1,     3,     4,     6,     4,     6,     4,     6,     6,     1,
       3,     1,     4,     5,     2,     2,     3,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     2,     4,     1,
       4,     1,     4,     5,     6,     4,     6,     8,     6,     1,
       1,     0,     1,     3,     3,     3,     3,     4,     1,     3,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     4,     1,     1,     2,     1,
       1,     3,     0,     1,     2,     1,     3,     0,     1,     1,
       3,     4,     1,     2,     8,     8,     8,     8
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
  case 2: /* daric: top_level_statement_list  */
#line 102 "DARIC.y"
                               { final = (yyvsp[0].ast); }
#line 4518 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 3: /* top_level_statement_list: statement  */
#line 105 "DARIC.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 4524 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 4: /* top_level_statement_list: top_level_statement_list SEPARATOR statement  */
#line 106 "DARIC.y"
                                                   { (yyval.ast) = statement_link((yyvsp[-2].ast), (yyvsp[0].ast));  }
#line 4530 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 5: /* top_level_statement_list: LINE_NUMBER top_level_statement_list SEPARATOR  */
#line 107 "DARIC.y"
                                                     { (yyval.ast) = statement_link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast)); yylineno = (yyvsp[-2].v_int); }
#line 4536 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 6: /* top_level_statement_list: top_level_statement_list LINE_NUMBER top_level_statement_list SEPARATOR  */
#line 108 "DARIC.y"
                                                                              { (yyval.ast) = statement_link((yyvsp[-3].ast), statement_link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast))); yylineno = (yyvsp[-2].v_int);  }
#line 4542 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 7: /* statement_list: statement  */
#line 112 "DARIC.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 4548 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 8: /* statement_list: statement_list SEPARATOR statement  */
#line 113 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast));  }
#line 4554 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 9: /* statement_list: LINE_NUMBER statement_list SEPARATOR  */
#line 114 "DARIC.y"
                                           { (yyval.ast) = link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast)); yylineno = (yyvsp[-2].v_int); }
#line 4560 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 10: /* statement_list: statement_list LINE_NUMBER statement_list SEPARATOR  */
#line 115 "DARIC.y"
                                                          { (yyval.ast) = link((yyvsp[-3].ast), link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast))); yylineno = (yyvsp[-2].v_int);  }
#line 4566 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 14: /* statement: CHAIN expression_string  */
#line 122 "DARIC.y"
                              { (yyval.ast) = token1(CHAIN, (yyvsp[0].ast)); }
#line 4572 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 15: /* statement: CHAIN expression_string ',' plain_variable_list  */
#line 123 "DARIC.y"
                                                      { (yyval.ast) = token2(CHAIN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4578 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 16: /* statement: EXPECT plain_variable_list  */
#line 124 "DARIC.y"
                                 { (yyval.ast) = token1(EXPECT, (yyvsp[0].ast)); }
#line 4584 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 17: /* statement: END  */
#line 125 "DARIC.y"
          { (yyval.ast) = token(END); }
#line 4590 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 18: /* statement: PROCEDURE  */
#line 126 "DARIC.y"
                { (yyval.ast) = token1(CALLPROC, string((yyvsp[0].v_string))); }
#line 4596 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 19: /* statement: PROCEDURE '(' expression_list ')'  */
#line 127 "DARIC.y"
                                        { (yyval.ast) = token2(CALLPROC, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4602 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 20: /* statement: FN_INTEGER '(' expression_list ')'  */
#line 128 "DARIC.y"
                                         { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4608 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 21: /* statement: FN_REAL '(' expression_list ')'  */
#line 129 "DARIC.y"
                                      { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4614 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 22: /* statement: FN_STRING '(' expression_list ')'  */
#line 130 "DARIC.y"
                                        { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4620 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 23: /* statement: DATA expression_list  */
#line 131 "DARIC.y"
                           { (yyval.ast) = token1(DATA, (yyvsp[0].ast)); }
#line 4626 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 24: /* statement: READ variable_list  */
#line 132 "DARIC.y"
                         { (yyval.ast) = token1(READ, (yyvsp[0].ast)); }
#line 4632 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 25: /* statement: RESTORE  */
#line 133 "DARIC.y"
              { (yyval.ast) = token(RESTORE); }
#line 4638 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 26: /* statement: RETURN  */
#line 134 "DARIC.y"
             { (yyval.ast) = token(RETURN); }
#line 4644 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 27: /* statement: RETURN expression  */
#line 135 "DARIC.y"
                        { (yyval.ast) = token1(RETURN_WITH_VALUE, (yyvsp[0].ast)); }
#line 4650 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 28: /* statement: TRACEON  */
#line 136 "DARIC.y"
              { (yyval.ast) = token(TRACEON); }
#line 4656 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 29: /* statement: TRACEOFF  */
#line 137 "DARIC.y"
               { (yyval.ast) = token(TRACEOFF); }
#line 4662 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 30: /* statement: BREAKPOINT  */
#line 138 "DARIC.y"
                 { (yyval.ast) = token(BREAKPOINT); }
#line 4668 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 31: /* statement: DIM dim_variable_list  */
#line 140 "DARIC.y"
                            { (yyval.ast) = token1(DIM, (yyvsp[0].ast)); }
#line 4674 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 32: /* statement: LOCAL DIM dim_variable_list  */
#line 141 "DARIC.y"
                                  { (yyval.ast) = token1(LOCALDIM, (yyvsp[0].ast)); }
#line 4680 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 33: /* statement: BPUT expression_numeric ',' expression_numeric  */
#line 143 "DARIC.y"
                                                     { (yyval.ast) = token2(BPUT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4686 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 34: /* statement: BGET expression_numeric  */
#line 144 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 4692 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 35: /* statement: PTR expression_numeric E expression_numeric  */
#line 145 "DARIC.y"
                                                  { (yyval.ast) = token2(PTRA, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4698 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 36: /* statement: CLOSE expression_numeric  */
#line 146 "DARIC.y"
                               { (yyval.ast) = token1(CLOSE, (yyvsp[0].ast)); }
#line 4704 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 37: /* statement: STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 147 "DARIC.y"
                                                                    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(GLOBAL)); }
#line 4710 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 38: /* statement: LOCAL STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 148 "DARIC.y"
                                                                          { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(LOCAL)); }
#line 4716 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 39: /* statement: OSCLI expression_string  */
#line 150 "DARIC.y"
                              { (yyval.ast) = token1(OSCLI, (yyvsp[0].ast)); }
#line 4722 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 40: /* statement: GOSUB LITERAL_INT  */
#line 152 "DARIC.y"
                        { (yyval.ast) = token1(GOSUB, integer((yyvsp[0].v_int))); }
#line 4728 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 41: /* statement: GOTO LITERAL_INT  */
#line 153 "DARIC.y"
                       { (yyval.ast) = token1(GOTO, integer((yyvsp[0].v_int))); }
#line 4734 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 42: /* statement: INPUT_ expression_input_list  */
#line 155 "DARIC.y"
                                   { (yyval.ast) = token1(INPUT_, (yyvsp[0].ast)); }
#line 4740 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 43: /* statement: INPUT_ LITERAL_STRING expression_input_list  */
#line 156 "DARIC.y"
                                                  { (yyval.ast) = token2(INPUT_NOQUESTIONMARK, string((yyvsp[-1].v_string)), (yyvsp[0].ast)); }
#line 4746 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 44: /* statement: INPUT_ LITERAL_STRING ',' expression_input_list  */
#line 157 "DARIC.y"
                                                      { (yyval.ast) = token2(INPUT_, string((yyvsp[-2].v_string)), (yyvsp[0].ast)); }
#line 4752 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 45: /* statement: MOUSE INTEGER_VARIABLE ',' INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 158 "DARIC.y"
                                                                       { (yyval.ast) = token3(MOUSE, string((yyvsp[-4].v_string)), string((yyvsp[-2].v_string)), string((yyvsp[0].v_string)) ); }
#line 4758 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 46: /* statement: INKEY '(' expression_numeric ')'  */
#line 160 "DARIC.y"
                                       { (yyval.ast) = token1(SINKEY, (yyvsp[-1].ast)); }
#line 4764 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 47: /* statement: INKEYS '(' expression_numeric ')'  */
#line 161 "DARIC.y"
                                        { (yyval.ast) = token1(SINKEYS, (yyvsp[-1].ast)); }
#line 4770 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 48: /* statement: GET  */
#line 162 "DARIC.y"
          { (yyval.ast) = token(GET_S); }
#line 4776 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 49: /* statement: GETS  */
#line 163 "DARIC.y"
           { (yyval.ast) = token(GETS_S); }
#line 4782 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 50: /* statement: IF expression statement_list  */
#line 165 "DARIC.y"
                                   { (yyval.ast) = token2(IF, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4788 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 51: /* statement: IF expression statement ELSE statement  */
#line 166 "DARIC.y"
                                             { (yyval.ast) = token3(IF, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4794 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 52: /* statement: IF expression NL statement_list ENDIF  */
#line 167 "DARIC.y"
                                            { (yyval.ast) = token2(IF, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4800 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 53: /* statement: IF expression NL statement_list ELSE NL statement_list ENDIF  */
#line 168 "DARIC.y"
                                                                   { (yyval.ast) = token3(IF, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4806 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 54: /* statement: IF expression THEN statement_list  */
#line 170 "DARIC.y"
                                        { (yyval.ast) = token2(IF, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4812 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 55: /* statement: IF expression THEN statement_list ELSE statement_list  */
#line 171 "DARIC.y"
                                                            { (yyval.ast) = token3(IF, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4818 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 56: /* statement: IF expression THEN NL statement_list ENDIF  */
#line 172 "DARIC.y"
                                                 { (yyval.ast) = token2(IF, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4824 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 57: /* statement: IF expression THEN NL statement_list ELSE NL statement_list ENDIF  */
#line 173 "DARIC.y"
                                                                        { (yyval.ast) = token3(IF, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4830 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 58: /* statement: REPEAT NL statement_list UNTIL expression  */
#line 175 "DARIC.y"
                                                { (yyval.ast) = token2(REPEAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4836 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 59: /* statement: REPEAT UNTIL expression  */
#line 176 "DARIC.y"
                              { (yyval.ast) = token2(REPEAT, NULL, (yyvsp[0].ast)); }
#line 4842 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 60: /* statement: WHILE expression NL statement_list ENDWHILE  */
#line 177 "DARIC.y"
                                                  { (yyval.ast) = token2(WHILE, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4848 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 61: /* statement: SWAP INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 179 "DARIC.y"
                                                 { (yyval.ast) = token2(SWAP_I, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4854 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 62: /* statement: SWAP VARIABLE ',' VARIABLE  */
#line 180 "DARIC.y"
                                 { (yyval.ast) = token2(SWAP_F, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4860 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 63: /* statement: SWAP STRING_VARIABLE ',' STRING_VARIABLE  */
#line 181 "DARIC.y"
                                                { (yyval.ast) = token2(SWAP_S, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4866 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 64: /* statement: FOR VARIABLE IN_ VARIABLE '(' ')' NL statement_list NEXT  */
#line 184 "DARIC.y"
                                                                                         { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4872 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 65: /* statement: FOR INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' NL statement_list NEXT  */
#line 185 "DARIC.y"
                                                                                         { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4878 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 66: /* statement: FOR STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' NL statement_list NEXT  */
#line 186 "DARIC.y"
                                                                                         { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4884 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 67: /* statement: FOR VARIABLE IN_ VARIABLE '(' ')' statement_list NEXT  */
#line 187 "DARIC.y"
                                                                                          { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4890 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 68: /* statement: FOR INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' statement_list NEXT  */
#line 188 "DARIC.y"
                                                                                          { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4896 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 69: /* statement: FOR STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' statement_list NEXT  */
#line 189 "DARIC.y"
                                                                                          { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4902 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 70: /* statement: FOR LOCAL VARIABLE IN_ VARIABLE '(' ')' NL statement_list NEXT  */
#line 190 "DARIC.y"
                                                                                         { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4908 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 71: /* statement: FOR LOCAL INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' NL statement_list NEXT  */
#line 191 "DARIC.y"
                                                                                         { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4914 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 72: /* statement: FOR LOCAL STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' NL statement_list NEXT  */
#line 192 "DARIC.y"
                                                                                         { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4920 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 73: /* statement: FOR LOCAL VARIABLE IN_ VARIABLE '(' ')' statement_list NEXT  */
#line 193 "DARIC.y"
                                                                                          { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4926 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 74: /* statement: FOR LOCAL INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' statement_list NEXT  */
#line 194 "DARIC.y"
                                                                                          { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4932 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 75: /* statement: FOR LOCAL STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' statement_list NEXT  */
#line 195 "DARIC.y"
                                                                                          { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4938 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 76: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric NL statement_list NEXT  */
#line 198 "DARIC.y"
                                                                                                                                { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4944 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 77: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric NL statement_list NEXT  */
#line 199 "DARIC.y"
                                                                                                                                { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4950 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 78: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric statement_list NEXT  */
#line 200 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4956 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 79: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric statement_list NEXT  */
#line 201 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4962 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 80: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL statement_list NEXT  */
#line 202 "DARIC.y"
                                                                                                                                { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4968 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 81: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL statement_list NEXT  */
#line 203 "DARIC.y"
                                                                                                                                { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4974 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 82: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statement_list NEXT  */
#line 204 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4980 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 83: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statement_list NEXT  */
#line 205 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4986 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 84: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric NL statement_list NEXT  */
#line 206 "DARIC.y"
                                                                                                                                { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4992 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 85: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric NL statement_list NEXT  */
#line 207 "DARIC.y"
                                                                                                                                { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4998 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 86: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric statement_list NEXT  */
#line 208 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 5004 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 87: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric statement_list NEXT  */
#line 209 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 5010 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 88: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL statement_list NEXT  */
#line 210 "DARIC.y"
                                                                                                                                { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 5016 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 89: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL statement_list NEXT  */
#line 211 "DARIC.y"
                                                                                                                                { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 5022 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 90: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statement_list NEXT  */
#line 212 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 5028 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 91: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statement_list NEXT  */
#line 213 "DARIC.y"
                                                                                                                                 { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 5034 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 92: /* statement: CASE expression OF NL when_list ENDCASE  */
#line 215 "DARIC.y"
                                              { (yyval.ast) = token2(CASE, (yyvsp[-4].ast), (yyvsp[-1].ast));  }
#line 5040 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 93: /* statement: CASE expression OF NL when_list OTHERWISE statement NL ENDCASE  */
#line 216 "DARIC.y"
                                                                     { (yyval.ast) = token3(CASE, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-2].ast));  }
#line 5046 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 94: /* statement: PRINT  */
#line 218 "DARIC.y"
            { (yyval.ast) = token(PRINT); }
#line 5052 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 95: /* statement: PRINT expression_print_list  */
#line 219 "DARIC.y"
                                  { (yyval.ast) = token1(PRINT, (yyvsp[0].ast)); }
#line 5058 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 96: /* statement: RENDERFRAME  */
#line 221 "DARIC.y"
                  { (yyval.ast) = token(RENDERFRAME); }
#line 5064 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 97: /* statement: CREATEVERTEX TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 224 "DARIC.y"
                                                      { (yyval.ast) = token6(CREATEVERTEX, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5070 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 98: /* statement: CREATETRIANGLE TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 227 "DARIC.y"
                                                  { (yyval.ast) = token6(CREATETRIANGLE, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5076 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 99: /* statement: TRANSLATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 228 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TRANSLATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5082 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 100: /* statement: ROTATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 229 "DARIC.y"
                                                                                                      { (yyval.ast) = token4(ROTATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5088 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 101: /* statement: SCALE expression_numeric ',' expression_numeric  */
#line 230 "DARIC.y"
                                                      { (yyval.ast) = token2(SCALE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5094 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 102: /* statement: DELETEOBJECT expression_numeric  */
#line 231 "DARIC.y"
                                      { (yyval.ast) = token1(DELETEOBJECT, (yyvsp[0].ast)); }
#line 5100 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 103: /* statement: CLS  */
#line 233 "DARIC.y"
          { (yyval.ast) = token(CLS); }
#line 5106 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 104: /* statement: COLOUR expression_numeric  */
#line 234 "DARIC.y"
                                { (yyval.ast) = token1(COLOUR, (yyvsp[0].ast)); }
#line 5112 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 105: /* statement: COLOUR expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 235 "DARIC.y"
                                                                              { (yyval.ast) = token3(COLOUR, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5118 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 106: /* statement: COLOURBG expression_numeric  */
#line 236 "DARIC.y"
                                  { (yyval.ast) = token1(COLOURBG, (yyvsp[0].ast)); }
#line 5124 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 107: /* statement: COLOURBG expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 237 "DARIC.y"
                                                                                { (yyval.ast) = token3(COLOURBG, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5130 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 108: /* statement: GRAPHICS expression_numeric ',' expression_numeric  */
#line 238 "DARIC.y"
                                                         { (yyval.ast) = token2(GRAPHICS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5136 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 109: /* statement: GRAPHICS BANKED expression_numeric ',' expression_numeric  */
#line 239 "DARIC.y"
                                                                { (yyval.ast) = token2(BANKED, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5142 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 110: /* statement: GRAPHICS  */
#line 240 "DARIC.y"
               { (yyval.ast) = token(GRAPHICS); }
#line 5148 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 111: /* statement: GRAPHICS BANKED  */
#line 241 "DARIC.y"
                      { (yyval.ast) = token(BANKED); }
#line 5154 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 112: /* statement: FLIP  */
#line 242 "DARIC.y"
           { (yyval.ast) = token(FLIP); }
#line 5160 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 113: /* statement: CIRCLE expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 243 "DARIC.y"
                                                                              { (yyval.ast) = token3(CIRCLE, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5166 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 114: /* statement: CIRCLE FILL expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 244 "DARIC.y"
                                                                                   { (yyval.ast) = token3(CIRCLEFILL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5172 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 115: /* statement: LINE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 245 "DARIC.y"
                                                                                                   { (yyval.ast) = token4(LINE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5178 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 116: /* statement: RECTANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 246 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(RECTANGLE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5184 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 117: /* statement: RECTANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 247 "DARIC.y"
                                                                                                             { (yyval.ast) = token4(RECTANGLEFILL, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5190 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 118: /* statement: TRIANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 248 "DARIC.y"
                                                                                                                                                     { (yyval.ast) = token6(TRIANGLE, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5196 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 119: /* statement: TRIANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 249 "DARIC.y"
                                                                                                                                                          { (yyval.ast) = token6(TRIANGLEFILL, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5202 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 120: /* statement: TRIANGLE SHADED expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 252 "DARIC.y"
                                                                                         { (yyval.ast) = token9(TRIANGLESHADED, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5208 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 121: /* statement: PLOT expression_numeric ',' expression_numeric  */
#line 253 "DARIC.y"
                                                     { (yyval.ast) = token2(PLOT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5214 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 122: /* statement: CLIPON expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 254 "DARIC.y"
                                                                                                     { (yyval.ast) = token4(CLIPON, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5220 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 123: /* statement: CLIPOFF  */
#line 255 "DARIC.y"
              { (yyval.ast) = token(CLIPOFF); }
#line 5226 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 124: /* statement: TEXT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 256 "DARIC.y"
                                                                                                  { (yyval.ast) = token4(TEXT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5232 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 125: /* statement: TEXTRIGHT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 257 "DARIC.y"
                                                                                                       { (yyval.ast) = token4(TEXTRIGHT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5238 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 126: /* statement: TEXTCENTRE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 258 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TEXTCENTRE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5244 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 127: /* statement: SHOWFPS  */
#line 259 "DARIC.y"
              { (yyval.ast) = token(SHOWFPS); }
#line 5250 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 128: /* number: LITERAL_INT  */
#line 263 "DARIC.y"
                  { (yyval.ast) = integer((yyvsp[0].v_int)); }
#line 5256 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 129: /* number: MINUS LITERAL_INT  */
#line 264 "DARIC.y"
                                  { (yyval.ast) = integer(-(yyvsp[0].v_int)); }
#line 5262 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 130: /* number: LITERAL_REAL  */
#line 265 "DARIC.y"
                   { (yyval.ast) = real((yyvsp[0].v_real)); }
#line 5268 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 131: /* number: MINUS LITERAL_REAL  */
#line 266 "DARIC.y"
                                   { (yyval.ast) = real(-(yyvsp[0].v_real)); }
#line 5274 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 132: /* expression_numeric: number  */
#line 270 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 5280 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 133: /* expression_numeric: variable_integer  */
#line 271 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5286 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 134: /* expression_numeric: variable_real  */
#line 272 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5292 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 135: /* expression_numeric: '(' expression_numeric ')'  */
#line 273 "DARIC.y"
                                 { (yyval.ast) = (yyvsp[-1].ast); }
#line 5298 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 136: /* expression_numeric: FLOAT_ '(' expression_numeric ')'  */
#line 274 "DARIC.y"
                                        { (yyval.ast) = token1(FLOAT_, (yyvsp[-1].ast)); }
#line 5304 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 137: /* expression_numeric: INT_ '(' expression_numeric ')'  */
#line 275 "DARIC.y"
                                      { (yyval.ast) = token1(INT_, (yyvsp[-1].ast)); }
#line 5310 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 138: /* expression_numeric: MINUS variable_integer  */
#line 276 "DARIC.y"
                             { (yyval.ast) = token2(MINUS, integer(0), (yyvsp[0].ast)); }
#line 5316 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 139: /* expression_numeric: MINUS variable_real  */
#line 277 "DARIC.y"
                          { (yyval.ast) = token2(MINUS, real(0.0), (yyvsp[0].ast)); }
#line 5322 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 140: /* expression_numeric: expression_numeric PLUS expression_numeric  */
#line 278 "DARIC.y"
                                                 { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5328 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 141: /* expression_numeric: expression_numeric MINUS expression_numeric  */
#line 279 "DARIC.y"
                                                  { (yyval.ast) = token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5334 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 142: /* expression_numeric: expression_numeric MULTIPLY expression_numeric  */
#line 280 "DARIC.y"
                                                     { (yyval.ast) = token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5340 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 143: /* expression_numeric: expression_numeric DIVIDE expression_numeric  */
#line 281 "DARIC.y"
                                                   { (yyval.ast) = token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5346 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 144: /* expression_numeric: expression_numeric INTEGERDIVIDE expression_numeric  */
#line 282 "DARIC.y"
                                                          { (yyval.ast) = token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5352 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 145: /* expression_numeric: expression_numeric DIV expression_numeric  */
#line 283 "DARIC.y"
                                                { (yyval.ast) = token2(DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5358 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 146: /* expression_numeric: expression_numeric MOD expression_numeric  */
#line 284 "DARIC.y"
                                                { (yyval.ast) = token2(MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5364 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 147: /* expression_numeric: expression_numeric SHL expression_numeric  */
#line 285 "DARIC.y"
                                                { (yyval.ast) = token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5370 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 148: /* expression_numeric: expression_numeric SHR expression_numeric  */
#line 286 "DARIC.y"
                                                { (yyval.ast) = token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5376 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 149: /* expression_numeric: expression_numeric E expression_numeric  */
#line 287 "DARIC.y"
                                              { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5382 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 150: /* expression_numeric: expression_numeric NE expression_numeric  */
#line 288 "DARIC.y"
                                               { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5388 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 151: /* expression_numeric: expression_numeric GE expression_numeric  */
#line 289 "DARIC.y"
                                               { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5394 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 152: /* expression_numeric: expression_numeric LE expression_numeric  */
#line 290 "DARIC.y"
                                               { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5400 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 153: /* expression_numeric: expression_numeric LT expression_numeric  */
#line 291 "DARIC.y"
                                               { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5406 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 154: /* expression_numeric: expression_numeric GT expression_numeric  */
#line 292 "DARIC.y"
                                               { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5412 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 155: /* expression_numeric: expression_numeric AND expression_numeric  */
#line 293 "DARIC.y"
                                                { (yyval.ast) = token2(AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5418 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 156: /* expression_numeric: expression_numeric OR expression_numeric  */
#line 294 "DARIC.y"
                                               { (yyval.ast) = token2(OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5424 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 157: /* expression_numeric: expression_numeric EOR expression_numeric  */
#line 295 "DARIC.y"
                                                { (yyval.ast) = token2(EOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5430 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 158: /* expression_numeric: FN_INTEGER '(' expression_list ')'  */
#line 297 "DARIC.y"
                                         { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5436 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 159: /* expression_numeric: FN_REAL '(' expression_list ')'  */
#line 298 "DARIC.y"
                                      { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5442 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 160: /* expression_numeric: DIM '(' VARIABLE '(' ')' ',' number ')'  */
#line 300 "DARIC.y"
                                              { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::REAL), (yyvsp[-1].ast)); }
#line 5448 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 161: /* expression_numeric: DIM '(' INTEGER_VARIABLE '(' ')' ',' number ')'  */
#line 301 "DARIC.y"
                                                      { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::INTEGER), (yyvsp[-1].ast)); }
#line 5454 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 162: /* expression_numeric: DIM '(' STRING_VARIABLE '(' ')' ',' number ')'  */
#line 302 "DARIC.y"
                                                     { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::STRING), (yyvsp[-1].ast)); }
#line 5460 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 163: /* expression_numeric: PTR expression_numeric  */
#line 304 "DARIC.y"
                             { (yyval.ast) = token1(PTR, (yyvsp[0].ast)); }
#line 5466 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 164: /* expression_numeric: GET  */
#line 306 "DARIC.y"
          { (yyval.ast) = token(GET); }
#line 5472 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 165: /* expression_numeric: INKEY '(' expression_numeric ')'  */
#line 307 "DARIC.y"
                                       { (yyval.ast) = token1(INKEY, (yyvsp[-1].ast)); }
#line 5478 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 166: /* expression_numeric: BOOLTRUE  */
#line 309 "DARIC.y"
               { (yyval.ast) = integer(1); }
#line 5484 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 167: /* expression_numeric: BOOLFALSE  */
#line 310 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5490 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 168: /* expression_numeric: TIME  */
#line 311 "DARIC.y"
           { (yyval.ast) = token(TIME); }
#line 5496 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 169: /* expression_numeric: SOLID  */
#line 313 "DARIC.y"
                        { (yyval.ast) = integer(0); }
#line 5502 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 170: /* expression_numeric: WIREFRAME  */
#line 314 "DARIC.y"
                        { (yyval.ast) = integer(1); }
#line 5508 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 171: /* expression_numeric: SHADED  */
#line 315 "DARIC.y"
                        { (yyval.ast) = integer(2); }
#line 5514 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 172: /* expression_numeric: FILLEDWIREFRAME  */
#line 316 "DARIC.y"
                        { (yyval.ast) = integer(3); }
#line 5520 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 173: /* expression_numeric: CREATESHAPE TYPE_VARIABLE ',' TYPE_VARIABLE  */
#line 318 "DARIC.y"
                                                  { (yyval.ast) = token2(CREATESHAPE, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 5526 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 174: /* expression_numeric: CREATEOBJECT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 323 "DARIC.y"
                                                  { (yyval.ast) = token9(CREATEOBJECT, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5532 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 175: /* expression_numeric: RED  */
#line 325 "DARIC.y"
                { (yyval.ast) = integer(0xFF0000); }
#line 5538 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 176: /* expression_numeric: GREEN  */
#line 326 "DARIC.y"
                { (yyval.ast) = integer(0x00FF00); }
#line 5544 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 177: /* expression_numeric: YELLOW  */
#line 327 "DARIC.y"
                { (yyval.ast) = integer(0xFFFF00); }
#line 5550 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 178: /* expression_numeric: BLUE  */
#line 328 "DARIC.y"
                { (yyval.ast) = integer(0x0000FF); }
#line 5556 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 179: /* expression_numeric: MAGENTA  */
#line 329 "DARIC.y"
                { (yyval.ast) = integer(0xFF00FF); }
#line 5562 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 180: /* expression_numeric: CYAN  */
#line 330 "DARIC.y"
                { (yyval.ast) = integer(0x00FFFF); }
#line 5568 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 181: /* expression_numeric: WHITE  */
#line 331 "DARIC.y"
                { (yyval.ast) = integer(0xFFFFFF); }
#line 5574 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 182: /* expression_numeric: BLACK  */
#line 332 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5580 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 183: /* expression_numeric: LASTPOS  */
#line 333 "DARIC.y"
                { (yyval.ast) = integer(-1); }
#line 5586 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 184: /* expression_numeric: COLOUR '(' expression_numeric ',' expression_numeric ',' expression_numeric ')'  */
#line 334 "DARIC.y"
                                                                                      { (yyval.ast) = token3(COLOUREXP, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5592 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 185: /* expression_numeric: POINT_ '(' expression_numeric ',' expression_numeric ')'  */
#line 335 "DARIC.y"
                                                               { (yyval.ast) = token2(POINT_, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5598 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 186: /* expression_numeric: SCREENWIDTH  */
#line 336 "DARIC.y"
                  { (yyval.ast) = token(SCREENWIDTH); }
#line 5604 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 187: /* expression_numeric: SCREENHEIGHT  */
#line 337 "DARIC.y"
                   { (yyval.ast) = token(SCREENHEIGHT); }
#line 5610 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 188: /* expression_numeric: LOADTYPEFACE expression_string  */
#line 338 "DARIC.y"
                                     { (yyval.ast) = token1(LOADTYPEFACE, (yyvsp[0].ast)); }
#line 5616 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 189: /* expression_numeric: CREATEFONT expression_numeric ',' expression_numeric  */
#line 339 "DARIC.y"
                                                           { (yyval.ast) = token2(CREATEFONT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5622 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 190: /* expression_numeric: MONO15  */
#line 340 "DARIC.y"
             { (yyval.ast) = integer(0); }
#line 5628 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 191: /* expression_numeric: MONO20  */
#line 341 "DARIC.y"
             { (yyval.ast) = integer(1); }
#line 5634 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 192: /* expression_numeric: MONO25  */
#line 342 "DARIC.y"
             { (yyval.ast) = integer(2); }
#line 5640 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 193: /* expression_numeric: MONO30  */
#line 343 "DARIC.y"
             { (yyval.ast) = integer(3); }
#line 5646 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 194: /* expression_numeric: MONO35  */
#line 344 "DARIC.y"
             { (yyval.ast) = integer(4); }
#line 5652 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 195: /* expression_numeric: MONO40  */
#line 345 "DARIC.y"
             { (yyval.ast) = integer(5); }
#line 5658 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 196: /* expression_numeric: MONO50  */
#line 346 "DARIC.y"
             { (yyval.ast) = integer(6); }
#line 5664 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 197: /* expression_numeric: MONO75  */
#line 347 "DARIC.y"
             { (yyval.ast) = integer(7); }
#line 5670 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 198: /* expression_numeric: MONO100  */
#line 348 "DARIC.y"
              { (yyval.ast) = integer(8); }
#line 5676 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 199: /* expression_numeric: PROP15  */
#line 349 "DARIC.y"
             { (yyval.ast) = integer(9); }
#line 5682 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 200: /* expression_numeric: PROP20  */
#line 350 "DARIC.y"
             { (yyval.ast) = integer(10); }
#line 5688 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 201: /* expression_numeric: PROP25  */
#line 351 "DARIC.y"
             { (yyval.ast) = integer(11); }
#line 5694 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 202: /* expression_numeric: PROP30  */
#line 352 "DARIC.y"
             { (yyval.ast) = integer(12); }
#line 5700 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 203: /* expression_numeric: PROP35  */
#line 353 "DARIC.y"
             { (yyval.ast) = integer(13); }
#line 5706 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 204: /* expression_numeric: PROP40  */
#line 354 "DARIC.y"
             { (yyval.ast) = integer(14); }
#line 5712 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 205: /* expression_numeric: PROP50  */
#line 355 "DARIC.y"
             { (yyval.ast) = integer(15); }
#line 5718 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 206: /* expression_numeric: PROP75  */
#line 356 "DARIC.y"
             { (yyval.ast) = integer(16); }
#line 5724 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 207: /* expression_numeric: PROP100  */
#line 357 "DARIC.y"
              { (yyval.ast) = integer(17); }
#line 5730 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 208: /* expression_numeric: SERIF15  */
#line 358 "DARIC.y"
              { (yyval.ast) = integer(18); }
#line 5736 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 209: /* expression_numeric: SERIF20  */
#line 359 "DARIC.y"
              { (yyval.ast) = integer(19); }
#line 5742 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 210: /* expression_numeric: SERIF25  */
#line 360 "DARIC.y"
              { (yyval.ast) = integer(20); }
#line 5748 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 211: /* expression_numeric: SERIF30  */
#line 361 "DARIC.y"
              { (yyval.ast) = integer(21); }
#line 5754 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 212: /* expression_numeric: SERIF35  */
#line 362 "DARIC.y"
              { (yyval.ast) = integer(22); }
#line 5760 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 213: /* expression_numeric: SERIF40  */
#line 363 "DARIC.y"
              { (yyval.ast) = integer(23); }
#line 5766 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 214: /* expression_numeric: SERIF50  */
#line 364 "DARIC.y"
              { (yyval.ast) = integer(24); }
#line 5772 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 215: /* expression_numeric: SERIF75  */
#line 365 "DARIC.y"
              { (yyval.ast) = integer(25); }
#line 5778 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 216: /* expression_numeric: SERIF100  */
#line 366 "DARIC.y"
               { (yyval.ast) = integer(26); }
#line 5784 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 217: /* expression_numeric: EOFH expression_numeric  */
#line 367 "DARIC.y"
                              { (yyval.ast) = token1(EOFH, (yyvsp[0].ast)); }
#line 5790 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 218: /* expression_numeric: BGET expression_numeric  */
#line 368 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 5796 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 219: /* expression_numeric: OPENIN '(' expression_string ')'  */
#line 369 "DARIC.y"
                                       { (yyval.ast) = token1(OPENIN, (yyvsp[-1].ast)); }
#line 5802 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 220: /* expression_numeric: OPENOUT '(' expression_string ')'  */
#line 370 "DARIC.y"
                                        { (yyval.ast) = token1(OPENOUT, (yyvsp[-1].ast)); }
#line 5808 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 221: /* expression_numeric: OPENUP '(' expression_string ')'  */
#line 371 "DARIC.y"
                                       { (yyval.ast) = token1(OPENUP, (yyvsp[-1].ast)); }
#line 5814 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 222: /* expression_numeric: RND  */
#line 373 "DARIC.y"
          { (yyval.ast) = token(RND); }
#line 5820 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 223: /* expression_numeric: RND0  */
#line 374 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(0)); }
#line 5826 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 224: /* expression_numeric: RND1  */
#line 375 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(1)); }
#line 5832 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 225: /* expression_numeric: RND '(' expression_numeric ')'  */
#line 376 "DARIC.y"
                                     { (yyval.ast) = token1(RNDRANGE, (yyvsp[-1].ast)); }
#line 5838 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 226: /* expression_numeric: PI  */
#line 378 "DARIC.y"
         { (yyval.ast) = token(PI); }
#line 5844 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 227: /* expression_numeric: NOT expression_numeric  */
#line 379 "DARIC.y"
                             { (yyval.ast) = token1(NOT, (yyvsp[0].ast)); }
#line 5850 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 228: /* expression_numeric: SQR '(' expression_numeric ')'  */
#line 380 "DARIC.y"
                                     { (yyval.ast) = token1(SQR, (yyvsp[-1].ast)); }
#line 5856 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 229: /* expression_numeric: LN '(' expression_numeric ')'  */
#line 381 "DARIC.y"
                                    { (yyval.ast) = token1(LN, (yyvsp[-1].ast)); }
#line 5862 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 230: /* expression_numeric: LOG '(' expression_numeric ')'  */
#line 382 "DARIC.y"
                                     { (yyval.ast) = token1(LOG, (yyvsp[-1].ast)); }
#line 5868 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 231: /* expression_numeric: EXP '(' expression_numeric ')'  */
#line 383 "DARIC.y"
                                     { (yyval.ast) = token1(EXP, (yyvsp[-1].ast)); }
#line 5874 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 232: /* expression_numeric: ATN '(' expression_numeric ')'  */
#line 384 "DARIC.y"
                                     { (yyval.ast) = token1(ATN, (yyvsp[-1].ast)); }
#line 5880 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 233: /* expression_numeric: TAN '(' expression_numeric ')'  */
#line 385 "DARIC.y"
                                     { (yyval.ast) = token1(TAN, (yyvsp[-1].ast)); }
#line 5886 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 234: /* expression_numeric: COS '(' expression_numeric ')'  */
#line 386 "DARIC.y"
                                     { (yyval.ast) = token1(COS, (yyvsp[-1].ast)); }
#line 5892 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 235: /* expression_numeric: SIN '(' expression_numeric ')'  */
#line 387 "DARIC.y"
                                     { (yyval.ast) = token1(SIN, (yyvsp[-1].ast)); }
#line 5898 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 236: /* expression_numeric: ABS '(' expression_numeric ')'  */
#line 388 "DARIC.y"
                                     { (yyval.ast) = token1(ABS, (yyvsp[-1].ast)); }
#line 5904 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 237: /* expression_numeric: ACS '(' expression_numeric ')'  */
#line 389 "DARIC.y"
                                     { (yyval.ast) = token1(ACS, (yyvsp[-1].ast)); }
#line 5910 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 238: /* expression_numeric: ASN '(' expression_numeric ')'  */
#line 390 "DARIC.y"
                                     { (yyval.ast) = token1(ASN, (yyvsp[-1].ast)); }
#line 5916 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 239: /* expression_numeric: DEG '(' expression_numeric ')'  */
#line 391 "DARIC.y"
                                     { (yyval.ast) = token1(DEG, (yyvsp[-1].ast)); }
#line 5922 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 240: /* expression_numeric: RAD '(' expression_numeric ')'  */
#line 392 "DARIC.y"
                                     { (yyval.ast) = token1(RAD, (yyvsp[-1].ast)); }
#line 5928 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 241: /* expression_numeric: SGN '(' expression_numeric ')'  */
#line 393 "DARIC.y"
                                     { (yyval.ast) = token1(SGN, (yyvsp[-1].ast)); }
#line 5934 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 242: /* expression_numeric: ASC '(' expression_string ')'  */
#line 395 "DARIC.y"
                                    { (yyval.ast) = token1(ASC, (yyvsp[-1].ast)); }
#line 5940 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 243: /* expression_numeric: LEN '(' expression_string ')'  */
#line 396 "DARIC.y"
                                    { (yyval.ast) = token1(LEN, (yyvsp[-1].ast)); }
#line 5946 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 244: /* expression_numeric: INSTR '(' expression_string ',' expression_string ')'  */
#line 397 "DARIC.y"
                                                            { (yyval.ast) = token3(INSTR, (yyvsp[-3].ast), (yyvsp[-1].ast), integer(1)); }
#line 5952 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 245: /* expression_numeric: INSTR '(' expression_string ',' expression_string ',' expression_numeric ')'  */
#line 398 "DARIC.y"
                                                                                   { (yyval.ast) = token3(INSTR, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5958 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 246: /* expression_numeric: VAL '(' expression_string ')'  */
#line 399 "DARIC.y"
                                    { (yyval.ast) = token1(VAL, (yyvsp[-1].ast)); }
#line 5964 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 247: /* variable_integer: INTEGER_VARIABLE  */
#line 403 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5970 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 248: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 404 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5976 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 249: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 405 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5982 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 250: /* variable_integer: TYPE_VARIABLE INTEGER_VARIABLE  */
#line 406 "DARIC.y"
                                     { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5988 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 251: /* variable_integer: TYPE_VARIABLE '(' expression_numeric ')' INTEGER_VARIABLE  */
#line 407 "DARIC.y"
                                                                { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5994 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 252: /* variable_real: VARIABLE  */
#line 411 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 6000 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 253: /* variable_real: VARIABLE '(' expression_numeric ')'  */
#line 412 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 6006 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 254: /* variable_real: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 413 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 6012 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 255: /* variable_real: TYPE_VARIABLE VARIABLE  */
#line 414 "DARIC.y"
                             { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 6018 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 256: /* variable_real: TYPE_VARIABLE '(' expression_numeric ')' VARIABLE  */
#line 415 "DARIC.y"
                                                        { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 6024 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 257: /* variable_numeric: variable_integer  */
#line 419 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6030 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 258: /* variable_numeric: variable_real  */
#line 420 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 6036 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 259: /* variable_string: STRING_VARIABLE  */
#line 424 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 6042 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 260: /* variable_string: STRING_VARIABLE '(' expression_numeric ')'  */
#line 425 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6048 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 261: /* variable_string: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 426 "DARIC.y"
                                                                        { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6054 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 262: /* variable_string: TYPE_VARIABLE '(' expression_numeric ')' STRING_VARIABLE  */
#line 427 "DARIC.y"
                                                               { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 6060 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 263: /* variable: variable_numeric  */
#line 431 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6066 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 264: /* variable: variable_string  */
#line 432 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6072 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 265: /* variable_list: variable  */
#line 436 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6078 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 266: /* variable_list: variable ',' variable_list  */
#line 437 "DARIC.y"
                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6084 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 267: /* plain_variable: INTEGER_VARIABLE  */
#line 441 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 6090 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 268: /* plain_variable: VARIABLE  */
#line 442 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 6096 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 269: /* plain_variable: STRING_VARIABLE  */
#line 443 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 6102 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 270: /* plain_variable_list: plain_variable  */
#line 447 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 6108 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 271: /* plain_variable_list: plain_variable ',' plain_variable_list  */
#line 448 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6114 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 272: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 452 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 6120 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 273: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 453 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 6126 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 274: /* dim_variable: VARIABLE '(' expression_numeric ')'  */
#line 454 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 6132 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 275: /* dim_variable: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 455 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 6138 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 276: /* dim_variable: STRING_VARIABLE '(' expression_numeric ')'  */
#line 456 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6144 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 277: /* dim_variable: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 457 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6150 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 278: /* dim_variable: TYPE_VARIABLE '(' expression_numeric ',' VARIABLE ')'  */
#line 458 "DARIC.y"
                                                            { (yyval.ast) = typevariable1d((yyvsp[-5].v_string), (yyvsp[-1].v_string), (yyvsp[-3].ast), Type::TYPE_ARRAY); }
#line 6156 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 279: /* dim_variable_list: dim_variable  */
#line 462 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6162 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 280: /* dim_variable_list: dim_variable ',' dim_variable_list  */
#line 463 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6168 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 281: /* type_variable: TYPE_VARIABLE  */
#line 467 "DARIC.y"
                    { (yyval.ast) = variable((yyvsp[0].v_string), Type::TYPE); }
#line 6174 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 282: /* type_variable: TYPE_VARIABLE '(' expression_numeric ')'  */
#line 468 "DARIC.y"
                                               { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::TYPE_ARRAY); }
#line 6180 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 283: /* type: TYPE_ VARIABLE NL field_list ENDTYPE  */
#line 472 "DARIC.y"
                                           { (yyval.ast) = token2(TYPE_, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 6186 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 284: /* field: FIELD variable  */
#line 476 "DARIC.y"
                     { (yyval.ast) = token1(FIELD, (yyvsp[0].ast)); }
#line 6192 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 285: /* field_list: field NL  */
#line 480 "DARIC.y"
              { (yyval.ast) = (yyvsp[-1].ast); }
#line 6198 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 286: /* field_list: field NL field_list  */
#line 481 "DARIC.y"
                          { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6204 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 287: /* string: LITERAL_STRING  */
#line 485 "DARIC.y"
                     { (yyval.ast) = string((yyvsp[0].v_string)); }
#line 6210 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 288: /* expression_string: string  */
#line 489 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 6216 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 289: /* expression_string: variable_string  */
#line 490 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6222 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 290: /* expression_string: expression_string PLUS expression_string  */
#line 491 "DARIC.y"
                                               { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6228 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 291: /* expression_string: expression_string E expression_string  */
#line 492 "DARIC.y"
                                            { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6234 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 292: /* expression_string: expression_string NE expression_string  */
#line 493 "DARIC.y"
                                             { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6240 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 293: /* expression_string: expression_string GE expression_string  */
#line 494 "DARIC.y"
                                             { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6246 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 294: /* expression_string: expression_string LE expression_string  */
#line 495 "DARIC.y"
                                             { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6252 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 295: /* expression_string: expression_string LT expression_string  */
#line 496 "DARIC.y"
                                             { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6258 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 296: /* expression_string: expression_string GT expression_string  */
#line 497 "DARIC.y"
                                             { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6264 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 297: /* expression_string: GETSH expression_numeric  */
#line 499 "DARIC.y"
                               { (yyval.ast) = token1(GETSH, (yyvsp[0].ast)); }
#line 6270 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 298: /* expression_string: FN_STRING '(' expression_list ')'  */
#line 501 "DARIC.y"
                                        { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 6276 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 299: /* expression_string: GETS  */
#line 503 "DARIC.y"
           { (yyval.ast) = token(GETS); }
#line 6282 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 300: /* expression_string: INKEYS '(' expression_numeric ')'  */
#line 504 "DARIC.y"
                                        { (yyval.ast) = token1(INKEYS, (yyvsp[-1].ast)); }
#line 6288 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 301: /* expression_string: TIMES  */
#line 506 "DARIC.y"
            { (yyval.ast) = token(TIMES); }
#line 6294 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 302: /* expression_string: STRS '(' expression_numeric ')'  */
#line 507 "DARIC.y"
                                      { (yyval.ast) = token1(STRS, (yyvsp[-1].ast)); }
#line 6300 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 303: /* expression_string: STRS TILDE '(' expression_numeric ')'  */
#line 508 "DARIC.y"
                                            { (yyval.ast) = token1(STRSHEX, (yyvsp[-1].ast)); }
#line 6306 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 304: /* expression_string: STRINGS '(' expression_numeric ',' expression_string ')'  */
#line 509 "DARIC.y"
                                                               { (yyval.ast) = token2(STRINGS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6312 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 305: /* expression_string: CHRS '(' expression_numeric ')'  */
#line 510 "DARIC.y"
                                      { (yyval.ast) = token1(CHRS, (yyvsp[-1].ast)); }
#line 6318 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 306: /* expression_string: LEFTS '(' expression_string ',' expression_numeric ')'  */
#line 511 "DARIC.y"
                                                             { (yyval.ast) = token2(LEFTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6324 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 307: /* expression_string: MIDS '(' expression_string ',' expression_numeric ',' expression_numeric ')'  */
#line 512 "DARIC.y"
                                                                                   { (yyval.ast) = token3(MIDS, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6330 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 308: /* expression_string: RIGHTS '(' expression_string ',' expression_numeric ')'  */
#line 513 "DARIC.y"
                                                              { (yyval.ast) = token2(RIGHTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6336 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 309: /* expression: expression_numeric  */
#line 517 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6342 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 310: /* expression: expression_string  */
#line 518 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6348 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 311: /* expression_list: %empty  */
#line 522 "DARIC.y"
                     { (yyval.ast) = NULL; }
#line 6354 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 312: /* expression_list: expression  */
#line 523 "DARIC.y"
                 { (yyval.ast) = (yyvsp[0].ast); }
#line 6360 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 313: /* expression_list: expression ',' expression_list  */
#line 524 "DARIC.y"
                                     { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6366 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 314: /* assignment_single: variable_numeric E expression_numeric  */
#line 528 "DARIC.y"
                                            { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6372 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 315: /* assignment_single: variable_string E expression_string  */
#line 529 "DARIC.y"
                                          { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6378 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 316: /* assignment_single: type_variable E expression  */
#line 530 "DARIC.y"
                                 { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6384 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 317: /* assignment_single: type_variable variable E expression  */
#line 531 "DARIC.y"
                                          { (yyval.ast) = assignment(link((yyvsp[-3].ast), (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 6390 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 318: /* assignment_list: assignment_single  */
#line 535 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6396 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 319: /* assignment_list: assignment_single ',' assignment_list  */
#line 536 "DARIC.y"
                                            { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6402 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 320: /* assignment: assignment_list  */
#line 540 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6408 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 321: /* assignment: LOCAL assignment_list  */
#line 541 "DARIC.y"
                            { (yyval.ast) = token1(LOCAL, (yyvsp[0].ast)); }
#line 6414 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 322: /* assignment: GLOBAL assignment_list  */
#line 542 "DARIC.y"
                             { (yyval.ast) = token1(GLOBAL, (yyvsp[0].ast)); }
#line 6420 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 323: /* assignment: variable_numeric SHL_E expression_numeric  */
#line 543 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6426 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 324: /* assignment: variable_numeric SHR_E expression_numeric  */
#line 544 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6432 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 325: /* assignment: variable_numeric PLUS_E expression_numeric  */
#line 545 "DARIC.y"
                                                 { (yyval.ast) = assignment((yyvsp[-2].ast), token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6438 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 326: /* assignment: variable_numeric MINUS_E expression_numeric  */
#line 546 "DARIC.y"
                                                  { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6444 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 327: /* assignment: variable_numeric MULTIPLY_E expression_numeric  */
#line 547 "DARIC.y"
                                                     { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6450 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 328: /* assignment: variable_numeric DIVIDE_E expression_numeric  */
#line 548 "DARIC.y"
                                                   { (yyval.ast) = assignment((yyvsp[-2].ast), token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6456 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 329: /* assignment: variable_numeric INTEGERDIVIDE_E expression_numeric  */
#line 549 "DARIC.y"
                                                          { (yyval.ast) = assignment((yyvsp[-2].ast), token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6462 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 330: /* expression_print: expression_string  */
#line 553 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6468 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 331: /* expression_print: expression_numeric  */
#line 554 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6474 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 332: /* expression_print: ','  */
#line 555 "DARIC.y"
          { (yyval.ast) = token(COMMA); }
#line 6480 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 333: /* expression_print: TILDE  */
#line 556 "DARIC.y"
            { (yyval.ast) = token(TILDE); }
#line 6486 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 334: /* expression_print: TICK  */
#line 557 "DARIC.y"
           { (yyval.ast) = token(TICK); }
#line 6492 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 335: /* expression_print: SPC '(' expression_numeric ')'  */
#line 558 "DARIC.y"
                                     { (yyval.ast) = token1(SPC, (yyvsp[-1].ast)); }
#line 6498 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 336: /* expression_print: SEMICOLON  */
#line 559 "DARIC.y"
                { (yyval.ast) = token(SEMICOLON); }
#line 6504 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 337: /* expression_print_list: expression_print  */
#line 563 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6510 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 338: /* expression_print_list: expression_print expression_print_list  */
#line 564 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6516 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 340: /* expression_input_list: expression_input  */
#line 572 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6522 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 341: /* expression_input_list: expression_input ',' expression_input_list  */
#line 573 "DARIC.y"
                                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6528 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 342: /* proc_parameter: %empty  */
#line 577 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6534 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 343: /* proc_parameter: variable  */
#line 578 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6540 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 344: /* proc_parameter: RETURN variable  */
#line 579 "DARIC.y"
                      { (yyval.ast) = token1(RETURN_PARAMETER, (yyvsp[0].ast)); }
#line 6546 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 345: /* proc_parameter_list: proc_parameter  */
#line 583 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 6552 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 346: /* proc_parameter_list: proc_parameter ',' proc_parameter_list  */
#line 584 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6558 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 347: /* fn_parameter: %empty  */
#line 588 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6564 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 348: /* fn_parameter: variable  */
#line 589 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6570 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 349: /* fn_parameter_list: fn_parameter  */
#line 593 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6576 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 350: /* fn_parameter_list: fn_parameter ',' fn_parameter_list  */
#line 594 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6582 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 351: /* when: WHEN expression_list statement_list NL  */
#line 598 "DARIC.y"
                                             { (yyval.ast) = token2(WHEN, (yyvsp[-2].ast), (yyvsp[-1].ast)); }
#line 6588 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 352: /* when_list: when  */
#line 602 "DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 6594 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 353: /* when_list: when when_list  */
#line 603 "DARIC.y"
                     { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6600 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 354: /* define_function: DEFPROC '(' proc_parameter_list ')' SEPARATOR statement_list SEPARATOR ENDPROC  */
#line 606 "DARIC.y"
                                                                                     { (yyval.ast) = token3typed(DEFPROC, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-2].ast), Type::NOTYPE); }
#line 6606 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 355: /* define_function: DEFFN_INTEGER '(' fn_parameter_list ')' SEPARATOR statement_list SEPARATOR ENDFN  */
#line 607 "DARIC.y"
                                                                                       { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-2].ast), Type::INTEGER); }
#line 6612 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 356: /* define_function: DEFFN_REAL '(' fn_parameter_list ')' SEPARATOR statement_list SEPARATOR ENDFN  */
#line 608 "DARIC.y"
                                                                                    { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-2].ast), Type::REAL); }
#line 6618 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 357: /* define_function: DEFFN_STRING '(' fn_parameter_list ')' SEPARATOR statement_list SEPARATOR ENDFN  */
#line 609 "DARIC.y"
                                                                                      { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-2].ast), Type::STRING); }
#line 6624 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;


#line 6628 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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

#line 612 "DARIC.y"


int parse(const char *filename) {
    //yydebug = 1;
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
