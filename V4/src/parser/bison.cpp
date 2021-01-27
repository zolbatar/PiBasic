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
  YYSYMBOL_SEMICOLON = 19,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 20,                     /* COMMA  */
  YYSYMBOL_NL = 21,                        /* NL  */
  YYSYMBOL_COLON = 22,                     /* COLON  */
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
  YYSYMBOL_sep = 247,                      /* sep  */
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
#define YYFINAL  299
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   11928

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  245
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  347
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
       0,   102,   102,   105,   106,   110,   111,   113,   114,   116,
     117,   121,   122,   123,   124,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   149,   150,   152,   153,   154,
     155,   156,   157,   159,   161,   162,   164,   165,   166,   167,
     169,   170,   171,   172,   174,   175,   176,   177,   179,   180,
     181,   182,   184,   185,   186,   188,   189,   190,   193,   194,
     195,   196,   197,   198,   201,   202,   203,   204,   205,   206,
     207,   208,   210,   211,   213,   214,   216,   217,   220,   223,
     224,   225,   226,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   248,   249,   250,   251,   252,   253,   254,   258,   259,
     260,   261,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   292,   293,
     295,   296,   297,   299,   301,   302,   304,   305,   306,   308,
     309,   310,   311,   313,   314,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   368,   369,   370,   371,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   390,   391,   392,   393,   394,   398,   399,   400,
     401,   402,   406,   407,   408,   409,   410,   414,   415,   419,
     420,   421,   422,   426,   427,   431,   432,   436,   437,   438,
     442,   443,   447,   448,   449,   450,   451,   452,   453,   457,
     458,   462,   463,   467,   471,   475,   476,   480,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   494,   496,   498,
     499,   501,   502,   503,   504,   505,   506,   507,   508,   512,
     513,   517,   518,   519,   523,   524,   525,   526,   530,   531,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     548,   549,   550,   551,   552,   553,   554,   558,   559,   563,
     567,   568,   572,   573,   574,   578,   579,   583,   584,   588,
     589,   593,   597,   598,   601,   602,   603,   604
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
  "FN_STRING", "SEMICOLON", "COMMA", "NL", "COLON", "INTEGERDIVIDE", "E",
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
  "FILLEDWIREFRAME", "NEG", "','", "'('", "')'", "$accept", "daric", "sep",
  "top_level_statement_list", "statement_list", "statement", "number",
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

#define YYPACT_NINF (-326)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-58)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    4872,  4329,  -219,  -215,  -190,     0,  -183,  -175,  -170,  -161,
    -134,  -126,  -121,  -108,   156,  2821,  3910,  3910,  3910,  3910,
    2821,    38,   135,   140,  2821,  4510,  2821,  2821,   161,  -326,
     533,   580,    57,   141,  -326,  -326,  -326,  -326,   493,   493,
     278,  -326,  3910,  3910,  -326,  3058,  3910,  3910,  3271,  3484,
    3910,  -326,  3697,  3910,  3910,  3910,  -326,   -86,   -82,   392,
    2581,  -326,  -326,   181,   193,   225,  3910,  3910,  3910,  -326,
    3910,   241,    20,  -326,  -326,  -326,   813,   227,   527,  -326,
      15,  -326,  -326,  -326,   251,    20,  3910,  3910,  2077,  -326,
    -326,  3910,   447,   161,   161,   161,  2821,  2821,  2821,  2821,
      39,    54,    58,  -326,  -326,  -326,    37,     2,    63,    65,
      70,   672,  3910,  3910,    96,   115,   117,  3910,  3910,   119,
     121,  -326,  -326,   122,   125,   132,   134,   165,   167,   170,
     175,   180,   190,   192,   196,   202,   203,   217,   238,   243,
    -326,  -326,  -326,   245,   248,   250,   254,   257,   262,   263,
     -11,   267,  -326,  -326,  3910,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,   269,  -326,   276,   493,  3910,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,   280,   281,
    -326,  -326,   401,  3910,  -326,  -326,  -326,  3910,  -326, 11752,
    -326,  -326,  -326,  -326,   633,  -326,     4, 11752,  2072, 11752,
   11782,   354,    11,    45,   349,   313,  -326,  -326,  4148,  5053,
    2821,   164,  -326,    27,   219,  -326,  -326,  -326,   288,  -326,
     295,   306,   307,   309,   311,  -326,   530,  -326,   315,   533,
    -326,    27,   322,   633,   448,  -326,  -326,  -326,   314,  -326,
    2335,  3053,  3910,  4427,  4608,  4789,  3910,  4970,  3910,  3910,
    5151,  5911,  3910,  6092,  6273,  6454,  6635,  3910,  3910,    12,
    -326,   324,  -326,  -326,  -326,  -326,   334,  -326, 11752,   633,
    2581,  -326,   325,   335,   336,  6816,  6997,  7178, 11752,  -326,
    4691,  -326,  -326,  8709,  3910,  3910,  3910,  3910,  3910,  3910,
    3910,  3910,   493,  2821,   546,   580,  -326,  8709,    60,  1105,
     557,  1446,   186,   161,  -326,   340,   339,  -326,   343,   353,
     358,   359,   360,   361,   362,   371,   610,   590,   617,  3910,
    3910,  2821,  2821,  2821,  -326,  -326,  -326,  -326, 11752, 11752,
     493,   493,   493, 11752, 11752,   327,  3910,  3910,  3910,  3910,
    3910,  3910,  3910,  3910,  3910,  3910,  3910,  3910,  3910,  3910,
    3910,  3910,  3910,   493,   493,  3910,   493,   493,   493,   493,
     493,   387,  3910,  3910,  -326,  3910,  3910,   633,  7359,  3910,
    3910,   395,  7540,  1058,  3910,  3910,  3910,  3910,  3910,  3910,
    3910,  3910,  3910,  3910,  3910,  3910,  3910,  3910,  3910,  3910,
    3910,  3910,   493,   493,   493,   493,   493,   493,   493,  3910,
    3910,  3910,    27,  3910,   625,  3910,   630,   632,    50,    79,
     555,  5053,  5053,    56,   304,  -326,  5053,  2821,  8709,  5053,
    2821,   161,  3910,  3910,  3910,  3910,   533,  2340,  -326,   548,
    3910,   278,   278,  3910,  3910,  7721,  3910,  3910,  3910,  7902,
    3910,  8083,  8264,  3910,  3910,  8445,  3910,  3910,  3910,  3910,
    1522,  1596,   161,  -326,   161,  3910,  -326,   642,  3910,  3910,
    3910,  3910,  3910,   634,    20,  -326, 11752, 11752, 11752, 11752,
   11752, 11752, 11752, 11752,   633,  -326,  2821,  -326,  3910,  -326,
    3910,  -326,   587,  3910,  -326,   462,  -326,   447,    27,   161,
      27,    27,    27,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    2006,   412,   422,   423,    89,   128,   152,   425,   428,   431,
    4147,  5396,  5589,  5782,  8803,  8869,  8927,  8940,  8962,  8975,
    8997,  9032,  9067,  9102,  9123,  9162,  9197,   168,   199,  9226,
     501,   569,   621,   724,   239,  3910,  9256,  8626,  9848,  9885,
    3910,  9269,  9291,   668,  3910,  -326,   300,    95,    95,    95,
      95,  -326,  -326,    95,    95,    77,    77,   300,   300,   300,
     300,  1693,   737,   737,   649,   649,   649,   649,   649,   649,
    -326,  9327, 11752,  1306,   606, 11653,   449, 11678,   450,   453,
    3910,   690,  3910,   691,   689,   316,   153,   640,  5053,  8709,
     304,  -326,  -326,   246,  -326,  -326,  1495,  1784,  1846,  9920,
    -326,   676,   161,    27,   608,  9362,  -326,  -326,  9947,  9976,
    3910, 11752,  9989, 11752,  3910, 10019,  3910,  3910, 10046, 10081,
    3910, 10120, 10145, 10172, 10212,  -326,  -326,  -326,  -326,  9397,
     459,  9419,  9432, 10247, 10271, 11752,  -326,  8709,  -326,  9454,
    9491,   461,  9526,  -326,  -326,  -326,  -326,  5053,  -326,  5053,
    5053,  5053,   462,  -326,  -326,  -326,  -326,  -326,  -326,   469,
     470,   471,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,   493,  3910,  3910,  3910,  -326,  9556,  -326,   493,
    3910,  3910, 11752,  -326,  -326,  -326, 10306,   189,  2821,  -326,
     218,  3910,   472,  3910,   473,   475, 11691,   463, 11717,   477,
     479,   173,   492,  5053,   403,  8709,  -326,  3910,  -326,  3910,
    -326,  3910,  -326,   718,   660,  -326,   548,  -326,   719,  3910,
    3910, 11752,  3910, 10319,  3910, 10346, 10371,  3910,  3910, 10410,
    3910,  3910,  3910,  3910,  -326,   725,   489,   495,  3910,  3910,
    -326,  -326,   493,  -326,   304,   304,   304,   304,   497,   498,
     515,    31,  9584, 10445,  9597,  -326,   252, 10470,  9619,  3910,
      27,  5053,   665,  -326, 11488,    27, 11517,    27,    27,  3910,
     514,  3910,   531,   534,   738,  -326,   753,  -326,   446,   708,
    9659,  9689,  9724,   537,   539,  -326, 11752, 11752, 10505,  3910,
   10544,  3910,  3910, 10569, 10596,  3910, 11752, 10609, 10636, 10671,
    -326,  3910,  3910, 10700, 10735,   285,  5234,  5427,  5620,  5813,
     129,   129,   129,  3910,  -326,  -326,  3910,  -326,  -326,  3910,
    -326, 10764,  5053,   304,  -326,  3910,  5053,  5053,  3910,  5053,
    5053,  5053, 11554,    27, 11583,    27,    27,  5053,  5053,   776,
    -326,  -326,  -326,  -326,   493,  3910, 10799,  3910, 10834, 10859,
    3910,  3910, 11752,   493,   493,   493, 10872, 10898,  3910,  3910,
    -326,  -326,  -326,  -326,  -326,   176,   540,   542,   543,  9752,
    9792,  9819,  3910,   304,  5994, 11618,   304,   304, 11618,   304,
     304,   304,  3910,  5053,  5053,  3910,  5053,  5053,  5053,   455,
     487,   390, 11752,  3910, 11752,  3910,  3910, 10925, 11752,   633,
     633,   633,  3910,  3910, 11752, 11752,  -326,  -326,  -326,  -326,
    -326,  -326, 10965,  8709,  -326,  5053,  6175,  6356,  5053,  6537,
    6718,  6899, 11618,   304,   304, 11618,   304,   304,   304,   717,
     720,  -326, 11752, 11000, 11024,  3910, 11059, 11099,  3910,   304,
    -326,  -326,   304,  -326,  -326,  -326,  5053,  7080,  7261,  5053,
    7442,  7623,  7804,  -326,  -326,  3910,  3910, 11124,  3910,  3910,
   11150,  7985,  8166,   304,  -326,  -326,   304,  -326,  -326,  -326,
   11163, 11190,  3910, 11225, 11255,  3910,  -326,  -326,  8347,  8528,
    3910,  3910, 11752,  3910,  3910, 11290,  -326,  -326, 11752, 11325,
   11752, 11752,  3910,  3910, 11349, 11389,  3910,  3910, 11416, 11451,
    3910,  3910, 11752, 11752
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   237,   242,   249,   271,     0,     0,     0,     0,
      22,     0,     0,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   301,     0,    29,
       0,     0,     0,     0,    21,    32,    33,    34,     0,     0,
       0,    93,     0,     0,   102,   100,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,   117,     0,     0,     0,
      84,    52,    53,     0,     0,     0,     0,     0,     0,    86,
       0,     0,     2,     5,   247,   248,     0,     0,     0,    17,
     308,   310,    15,    16,     0,     0,     0,     0,     0,   240,
     245,     0,   332,   337,   337,   337,   301,   301,   301,   301,
       0,     0,     0,   118,   120,   277,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     212,   213,   214,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,   157,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   158,   291,     0,   165,   166,   167,   168,   169,
     170,   171,   172,     0,   161,     0,     0,     0,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   176,   177,   173,     0,     0,
     154,   289,     0,     0,   159,   160,   162,     0,   122,   299,
     123,   124,   279,   278,   300,    31,     0,    38,     0,    40,
       0,     0,     0,     0,     0,     0,    44,    45,     0,     0,
       0,     0,    11,     0,   302,    27,   253,   254,   255,    28,
       0,     0,     0,     0,   269,    35,     0,   312,   249,     0,
     311,     0,     0,    43,    18,   257,   258,   259,   260,    20,
      94,    96,   101,     0,     0,     0,     0,     0,     0,   161,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     329,   330,    46,   326,   323,   324,     0,   322,   321,   320,
     327,    85,     0,     0,     0,     0,     0,     0,    92,     1,
       0,     4,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     9,     0,     0,
       0,     0,     0,     0,   333,   335,     0,   338,   339,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   301,   301,   301,   119,   121,   128,   129,   208,   207,
       0,     0,     0,   153,   287,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,     0,     0,     0,
     301,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,   328,     0,     0,     0,
       0,     0,     0,     0,     0,     6,   304,   313,   314,   315,
     316,   317,   318,   319,   305,   306,     0,   309,     0,   238,
       0,   243,     0,     0,   250,   272,   334,   332,     0,   337,
       0,     0,     0,    23,    24,    25,    26,    65,    66,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,   134,   139,   142,   141,
     140,   137,   138,   143,   144,   130,   131,   132,   133,   135,
     136,   145,   146,   147,   281,   284,   283,   282,   285,   286,
     280,     0,    37,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,    13,
       0,    62,    12,     0,   303,   256,     0,     0,     0,     0,
     270,     0,     0,     0,     0,     0,    19,   261,     0,     0,
       0,    98,     0,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    51,    48,   331,     0,
       0,     0,     0,     0,     0,    91,     8,    10,   307,     0,
       0,     0,     0,   241,   246,   252,   336,     0,   340,     0,
       0,     0,     0,   148,   149,   288,   209,   211,   210,     0,
       0,     0,   215,   126,   127,   227,   218,   219,   220,   221,
     222,   223,   224,   225,   228,   226,   229,   230,   231,   236,
     232,   295,     0,     0,     0,     0,   233,     0,   292,     0,
       0,     0,   179,   155,   290,   163,     0,     0,   301,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     4,     0,     0,    14,    64,     0,   262,     0,
     264,     0,   266,     0,     0,   274,   275,   273,     0,     0,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   325,     0,     0,     0,     0,     0,
     239,   244,     0,   251,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   293,     0,     0,     0,     0,
       0,     0,     0,   343,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,     4,
       0,     0,     0,     0,     0,   276,    95,    97,     0,     0,
       0,     0,     0,     0,     0,     0,   103,     0,     0,     0,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   234,   296,     0,   298,   294,     0,
     175,     0,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
     263,   265,   267,   268,     0,     0,     0,     0,     0,     0,
       0,     0,   104,     0,     0,     0,     0,     0,     0,     0,
      41,   344,   345,   347,   346,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,     0,   106,     0,     0,     0,   112,   114,
     115,   116,     0,     0,    89,    90,   151,   150,   152,   235,
     297,   174,     0,   341,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       4,    42,   107,     0,     0,     0,     0,     0,     0,     0,
      74,    69,     0,    75,    68,    70,     0,     0,     0,     0,
       0,     0,     0,    59,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    72,     0,    79,    71,    73,
       0,     0,     0,     0,     0,     0,    76,    77,     0,     0,
       0,     0,   108,     0,     0,     0,    80,    81,   109,     0,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   164,   110
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -326,  -326,   979,     5,   444,   201,  -325,   -16,   591,   846,
      48,  1637,    53,   348,  -326,  -224,  -326,  -209,  -326,  -326,
    -326,    44,  -326,   195,    84,   -83,  -326,   -14,  -326,  -326,
     503,  -326,  -236,  -326,   287,  -326,   -90,    75,  -326,  -326
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    71,   438,    72,   231,   232,   208,   209,   210,   211,
      76,    77,   280,   239,   258,   259,   244,   245,    78,    79,
     623,   624,   213,   214,   234,   235,    80,    81,    82,   290,
     291,   281,   282,   325,   326,   328,   329,   719,   720,    83
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     217,   218,   219,   220,   330,   331,    85,    89,    90,    89,
      90,    89,    90,   332,   333,   334,   335,   247,   250,     2,
       3,   106,   107,   300,    86,   381,   260,   261,    87,   263,
     264,   265,   267,   270,   271,   423,   273,   274,   275,   276,
     448,   301,   302,   473,   288,   222,   223,   224,   301,   302,
     295,   296,   297,    88,   298,   412,   413,   414,   415,   436,
      92,   416,   417,   418,     2,     3,   248,     5,    93,   425,
     318,   319,   321,    94,   600,   322,   236,   607,   302,   246,
     246,   238,    95,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   348,   349,   424,   215,
     394,   353,   354,   602,   221,   399,   400,   236,   228,    96,
     233,   405,   406,   412,   413,   414,   415,    97,   394,   416,
     417,   418,    98,   399,   400,   608,   236,   403,   404,   405,
     406,   314,   426,   103,   104,    99,   225,   601,   384,   226,
     236,   236,   236,   236,   227,   324,   327,   327,   327,   251,
     249,   388,   412,   413,   414,   415,   436,   277,   416,   417,
     418,   278,   895,   100,   101,   102,   603,   436,     2,     3,
     106,   107,   407,   408,   732,   302,   412,   413,   414,   415,
     344,   345,   416,   417,   418,   301,   302,   392,   292,   407,
     408,   393,   412,   413,   414,   415,   663,   664,   416,   417,
     418,    73,    73,   293,   409,   410,   411,   407,   408,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   733,   412,   413,   414,   415,   626,   627,   416,
     417,   418,   382,   253,   254,   294,   647,   620,   648,   301,
     302,   299,   804,    91,   805,   340,   455,   419,   437,   436,
     459,   312,   461,   462,   472,   289,   465,   315,   521,   522,
     523,   470,   471,   412,   413,   414,   415,   301,   302,   416,
     417,   418,   316,   843,   288,   844,   412,   413,   414,   415,
     339,   336,   416,   417,   418,   255,   256,   257,   486,   487,
     488,   489,   490,   491,   492,   493,   337,   791,   407,   408,
     338,   497,   498,   718,   499,   484,   341,   436,   342,   412,
     413,   414,   415,   343,   435,   416,   417,   418,   736,   436,
     428,   429,   430,   321,   520,   301,   302,   236,   399,   400,
     409,   410,   411,   676,   527,   528,   529,   731,   302,   350,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   614,   351,   549,
     352,   387,   355,   246,   356,   357,   556,   557,   358,   558,
     559,   236,   677,   561,   562,   359,   506,   360,   566,   567,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   678,   495,   279,     2,
       3,   106,   107,   591,   592,   593,   436,   595,   361,   597,
     362,   391,   699,   363,   412,   413,   414,   415,   364,   668,
     416,   417,   418,   365,   809,   302,   616,   617,   618,   619,
     505,   321,   422,   366,   625,   367,   427,   628,   629,   368,
     631,   632,   633,   700,   635,   369,   370,   638,   639,   436,
     641,   642,   643,   644,     2,     3,   106,   107,   436,   649,
     371,   440,   651,   652,   653,   654,   655,   869,   302,   663,
     664,   665,   412,   413,   414,   415,   959,   302,   416,   417,
     418,   372,   659,   706,   660,   289,   373,   662,   374,   236,
     436,   375,   -56,   376,   238,   -56,   848,   377,   323,   105,
     378,    73,   106,   252,   485,   379,   380,   494,   960,   302,
     383,   110,   385,   -56,   -56,   896,   897,   898,   485,   386,
     236,   611,   236,   389,   390,   412,   413,   414,   415,   890,
     441,   416,   417,   418,     2,     3,   106,   107,   442,   707,
     240,   241,   242,   243,   712,   524,   525,   526,   716,   443,
     444,   313,   445,   446,   304,   236,   452,   236,   447,   118,
     324,   806,   327,   807,   -56,   450,   474,   477,   547,   548,
     496,   550,   551,   552,   553,   554,   -56,   475,   478,   479,
     658,   502,   507,   508,   726,   509,   728,     2,     3,   106,
       5,    74,    74,   412,   413,   414,   415,   510,   518,   416,
     417,   418,   511,   512,   513,   514,   515,   584,   585,   586,
     587,   588,   589,   590,   751,   516,    74,   517,   753,    74,
     755,   756,    74,    74,   759,   144,   519,   146,   147,   148,
     555,   150,   596,   151,   961,   790,   153,   563,   598,   612,
     -54,   599,   604,   -54,   622,   412,   413,   414,   415,   650,
      74,   416,   417,   418,   661,   656,   673,   412,   413,   414,
     415,   -54,   -54,   416,   417,   418,   674,   675,   679,    74,
     236,   680,   433,   434,   681,   745,   344,   345,   715,     2,
       3,   418,   216,    74,    74,    74,    74,   782,   783,   784,
     451,   718,   722,   724,   787,   788,   725,   727,   730,   729,
     744,   765,   346,   747,   772,   794,   800,   796,   -55,   -54,
     199,   -55,   -54,   778,   779,   780,   795,   797,   201,   798,
     802,   810,   803,   811,   -54,   812,   813,   814,   665,   -55,
     -55,   831,   830,   816,   817,   854,   818,   832,   820,   840,
     841,   823,   824,   702,   826,   827,   828,   829,   412,   413,
     414,   415,   833,   834,   416,   417,   418,   842,   863,   867,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   851,   868,   865,   -57,   -55,   866,   -57,
     -55,   873,   874,   862,   936,   864,   937,   938,   983,   615,
     815,   984,   -55,   476,   666,   793,     0,   -57,   -57,     0,
       0,     0,     0,   876,     0,   878,   879,     0,     0,   882,
     612,   703,     0,     0,     0,   886,   887,     0,     0,    74,
      74,     0,     0,     0,     0,     0,     0,   899,     0,     0,
     900,     0,     0,   901,     0,     0,     0,   304,     0,   905,
       0,     0,   908,     0,     0,   -57,    75,    75,   -57,   407,
     408,   305,   306,   307,   308,   309,   310,   311,   485,   922,
     -57,   924,     0,   704,   927,   928,     0,     0,     0,     0,
      74,    75,   934,   935,    75,   605,   606,    75,    75,     0,
     610,   409,     0,   613,     0,     0,   942,     0,     0,     0,
       0,    74,     0,     0,    74,     0,   952,   781,     0,   955,
       0,     0,     0,     0,   786,    75,    74,   962,    74,   963,
     964,     0,     0,     0,    74,     0,   966,   967,     0,     0,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   612,     0,    75,    75,
      75,    75,     0,     0,     0,     0,     0,     0,     0,   987,
       0,     0,   990,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,   705,   835,     0,  1000,
    1001,     0,  1003,  1004,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1012,     0,     0,  1015,
       0,     0,     0,     0,  1018,  1019,     0,  1020,  1021,     0,
       0,     0,     0,     0,     0,     0,  1024,  1025,     0,     0,
    1028,  1029,     0,     0,  1032,  1033,     0,     0,     0,     0,
       0,     0,    74,    74,     0,     0,     0,    74,     0,    74,
      74,     0,    74,     0,     0,     0,     0,   612,   612,   612,
     612,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   303,   734,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,   317,    74,     0,     0,     0,   921,
       0,     0,     0,     0,    75,    75,     0,     0,   929,   930,
     931,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,     0,     0,     0,    74,     0,
      74,     0,     0,     0,     0,   612,     0,     0,     0,     0,
       0,   774,     0,   775,   776,   777,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,   612,     0,    75,   612,   612,    75,
     612,   612,   612,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,    75,     0,     0,     0,     0,     0,    75,
     407,   408,     0,     0,     0,     0,     0,   808,   612,   612,
       0,   612,   612,   612,     0,     0,     0,     0,     0,     0,
       0,     0,   612,   612,     0,     0,     0,     0,     0,    74,
      74,     0,   409,   410,   411,     0,     0,     0,     0,   612,
     612,     0,   439,    74,     0,     0,     0,   407,   408,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     449,     0,     0,     0,     0,   853,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,   409,
     410,   411,     0,     0,     0,     0,     0,     0,    74,     0,
      74,    74,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,    75,     0,
       0,     0,    75,     0,    75,    75,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,   903,     0,     0,     0,
     906,   907,   565,   909,   910,   911,   -39,     0,     0,   -39,
       0,   919,   920,     0,     0,     0,     0,     0,    75,     0,
      75,     0,     0,     0,    74,     0,    74,   -39,   -39,   394,
       0,     0,     0,     0,   399,   400,     0,     0,   403,   404,
     405,   406,     0,     0,     0,     0,     0,   500,     0,   501,
       0,     0,     0,    75,     0,    75,     0,   953,   954,     0,
     956,   957,   958,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -39,     0,     0,   -39,     0,
       0,     0,    74,     0,     0,     0,     0,     0,     0,   969,
     -39,     0,   972,     0,     0,     0,     0,     0,     0,     0,
       0,   594,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   609,     0,     0,     0,     0,   407,   408,
     993,     0,     0,   996,     0,     0,     0,    74,    74,    74,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,    74,    74,     0,
      74,    74,    74,     0,    75,    75,     0,     0,    74,    74,
       0,     0,     0,   657,     0,     0,     0,     0,    75,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,   667,     0,   669,
     670,   671,     0,     0,     0,    74,     0,     0,     0,     0,
       0,     0,     0,    75,    74,    74,     0,    74,    74,    74,
       0,     0,     0,    75,     0,    75,    75,    75,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,    74,     0,    74,    74,    74,    74,
      74,    74,    74,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
       0,     0,     0,     0,     0,     0,     0,    74,    74,    74,
      74,    74,    74,    74,     0,     0,     0,     0,     0,    75,
       0,    75,    74,    74,     0,     0,     0,     0,     0,   735,
     409,   410,   411,     0,     0,     0,     0,     0,     0,    74,
      74,     0,   746,     0,     0,     0,     0,   407,   408,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,   407,   408,     0,    75,     0,   409,
     410,   411,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   212,     0,     0,     0,     0,   212,     0,     0,
       0,   212,     0,   212,   212,   237,   409,   410,   411,     0,
       0,     0,     0,     0,     0,   212,   212,     0,     0,     0,
       0,     0,    75,    75,    75,    75,     0,     0,   503,     0,
     504,     0,     0,     0,     0,     0,   237,   212,    75,   792,
       0,     0,    75,    75,     0,    75,    75,    75,   407,   408,
       0,     0,     0,    75,    75,   237,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   237,
     237,   237,   237,   212,   212,   212,   212,   737,     0,   738,
     409,   410,   411,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,   836,   837,   838,   839,     0,     0,    75,
      75,     0,    75,    75,    75,     0,   645,     0,     0,   852,
       0,     0,     0,   856,   857,   859,   860,   861,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
       0,    75,    75,    75,    75,    75,    75,    75,     0,     0,
       0,     0,     0,   212,     0,   407,   408,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,    75,    75,    75,    75,    75,    75,    75,     0,
       0,     0,   904,     0,     0,     0,     0,    75,    75,     0,
     646,   913,   914,   916,   917,   918,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   212,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   943,     0,   945,   946,   947,   948,   949,   950,
     951,     0,     0,     0,     0,     0,   407,   408,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   212,   409,   410,
     411,   976,   977,   978,   979,   980,   981,   982,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   991,   212,
     212,   992,     0,     0,     0,     0,     0,     0,   407,   408,
     237,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1008,     0,     0,  1009,     0,     0,   212,   212,
     212,     0,     0,     0,     0,     0,     0,   212,   212,   212,
     409,   410,   411,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     212,   212,     0,   212,   212,   212,   212,   212,     0,     0,
       0,     0,     0,     0,     0,     0,   739,     0,   740,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,     0,     0,   212,
     212,   212,   212,   212,   212,   212,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   212,     0,     0,   212,   237,     0,
       0,   103,   104,     0,     2,     3,     0,   216,   741,     0,
     742,     0,     0,   108,   109,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,   237,
     111,   237,     0,     0,     0,     0,     0,     0,   407,   408,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   212,   112,     0,     0,   113,   114,   115,
     116,   117,     0,     0,   237,     0,   237,     0,     0,     0,
     409,   410,   411,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,   121,   122,   407,   408,   123,   124,   125,     0,
       0,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,     0,
     145,     0,     0,     0,   149,     0,   409,   410,   411,   152,
       0,     0,     0,     0,   154,     0,     0,   155,   156,   157,
     158,   159,   160,   161,   162,     0,     0,   163,     0,     0,
       0,     0,     0,     0,   164,     0,     0,   165,     0,     0,
     672,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,     0,   197,   198,     0,     0,     0,     0,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,   202,   203,
       0,     0,     0,     0,   420,   204,   205,   206,     0,     0,
     207,   320,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   212,
       0,     0,     0,     0,   103,   104,   212,     2,     3,     0,
     216,     0,     0,     0,     0,   212,   108,   109,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
     113,   114,   115,   116,   117,     0,     0,     0,     0,   212,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   120,   121,   122,   407,   408,   123,
     124,   125,     0,     0,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,     0,   145,     0,     0,     0,   149,     0,   409,
     410,   411,   152,     0,     0,     0,     0,   154,     0,     0,
     155,   156,   157,   158,   159,   160,   161,   162,     0,     0,
     163,     0,     0,     0,     0,     0,     0,   164,     0,     0,
     165,   212,     0,     0,     0,     0,     0,     0,     0,     0,
     212,   212,   212,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,   197,   198,     0,     0,     0,
       0,     0,     0,     0,   200,     0,     0,     0,     0,     0,
       0,   202,   203,     0,     0,     0,     0,   453,   204,   205,
     206,     0,     0,   207,   621,   103,   104,   105,     2,     3,
     106,   107,     0,     0,     0,     0,     0,   108,   109,   110,
     283,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,     0,   284,   285,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,   113,   114,   115,   116,   117,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   120,   121,   122,     0,     0,
     123,   124,   125,     0,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       0,   151,     0,   152,   153,     0,     0,     0,   154,     0,
       0,   155,   156,   157,   158,   159,   160,   161,   162,     0,
       0,   163,     0,     0,     0,     0,     0,     0,   164,     0,
       0,   165,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   199,     0,
       0,   286,     0,     0,     0,   200,   201,     0,     0,     0,
       0,     0,   202,   203,     0,     0,     0,     0,     0,   204,
     205,   206,     0,   287,   207,   103,   104,   105,     2,     3,
     106,   107,     0,     0,     0,     0,     0,   108,   109,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,   113,   114,   115,   116,   117,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   120,   121,   122,     0,     0,
     123,   124,   125,     0,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       0,   151,     0,   152,   153,     0,     0,     0,   154,     0,
       0,   155,   156,   157,   158,   159,   160,   161,   162,     0,
       0,   163,     0,     0,     0,     0,     0,     0,   164,     0,
       0,   165,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   199,     0,
       0,     0,     0,     0,     0,   200,   201,     0,     0,     0,
       0,     0,   202,   203,     0,     0,     0,     0,     0,   204,
     205,   206,   103,   104,   207,     2,     3,     0,   216,     0,
       0,     0,     0,     0,   108,   109,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
       0,   111,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,   113,   114,
     115,   116,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,   121,   122,   407,   408,   123,   124,   125,
       0,     0,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
       0,   145,     0,     0,     0,   149,     0,   409,   410,   411,
     152,     0,     0,     0,     0,   154,     0,     0,   155,   156,
     157,   158,   159,   160,   161,   162,     0,     0,   163,     0,
       0,     0,     0,   262,     0,   164,     0,     0,   165,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,     0,   197,   198,   103,   104,     0,     2,     3,
       0,   216,   200,     0,     0,     0,     0,   108,   109,   202,
     203,     0,     0,     0,     0,   454,   204,   205,   206,     0,
       0,   207,     0,     0,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,   113,   114,   115,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   120,   121,   122,     0,     0,
     123,   124,   125,     0,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,     0,   145,     0,     0,     0,   149,     0,
       0,     0,     0,   152,     0,     0,     0,     0,   154,     0,
       0,   155,   156,   157,   158,   159,   160,   161,   162,     0,
       0,   163,     0,     0,     0,     0,     0,   266,   164,     0,
       0,   165,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   103,   104,
       0,     2,     3,     0,   216,   200,     0,     0,     0,     0,
     108,   109,   202,   203,     0,     0,     0,     0,     0,   204,
     205,   206,     0,     0,   207,     0,     0,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,   113,   114,   115,   116,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   120,   121,
     122,     0,     0,   123,   124,   125,     0,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,     0,   145,     0,     0,
       0,   149,     0,     0,     0,     0,   152,     0,     0,     0,
       0,   154,     0,     0,   155,   156,   157,   158,   159,   160,
     161,   162,     0,     0,   163,     0,     0,     0,     0,     0,
     268,   269,     0,     0,   165,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   103,   104,     0,     2,     3,     0,   216,   200,     0,
       0,     0,     0,   108,   109,   202,   203,     0,     0,     0,
       0,     0,   204,   205,   206,     0,     0,   207,     0,     0,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,   113,   114,   115,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,   121,   122,     0,     0,   123,   124,   125,     0,
       0,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,     0,
     145,     0,     0,     0,   149,     0,     0,     0,     0,   152,
       0,     0,     0,     0,   154,     0,     0,   155,   156,   157,
     158,   159,   160,   161,   162,     0,     0,   163,     0,     0,
       0,     0,     0,   272,   164,     0,     0,   165,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,     0,   197,   198,   103,   104,     0,     2,     3,     0,
     216,   200,     0,     0,     0,     0,   108,   109,   202,   203,
       0,     0,     0,     0,     0,   204,   205,   206,     0,     0,
     207,     0,     0,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
     113,   114,   115,   116,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   120,   121,   122,     0,     0,   123,
     124,   125,     0,     0,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,     0,   145,     0,     0,     0,   149,     0,     0,
       0,     0,   152,     0,     0,     0,     0,   154,     0,     0,
     155,   156,   157,   158,   159,   160,   161,   162,     0,     0,
     163,     0,     0,     0,     0,     0,     0,   164,     0,     0,
     165,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,   197,   198,     0,     0,     0,
       0,     0,     0,     0,   200,     0,     0,     0,     0,     0,
       0,   202,   203,     0,     0,     0,     0,     0,   204,   205,
     206,   229,     0,   207,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,   431,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     0,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,    17,    18,     0,     0,
       0,     0,    19,     0,     0,     0,    20,     0,     0,     0,
       0,    21,    22,    23,    24,     0,     0,     0,    25,     0,
     432,     0,     0,     0,    26,     0,     0,    27,    28,    29,
       0,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,   407,
     408,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,   409,   410,   411,     0,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,    41,     0,    42,    43,
       0,    44,    45,     0,     0,     0,    46,    47,     0,    48,
       0,    49,     0,     0,    50,    51,    52,     0,    53,    54,
      55,     0,     1,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,    14,     0,    63,    64,    65,     0,
      15,    66,    67,    68,    69,    70,    16,    17,    18,     0,
       0,   682,     0,    19,     0,     0,     0,    20,     0,     0,
       0,     0,    21,    22,    23,    24,     0,     0,     0,    25,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
      29,     0,    30,     0,     0,     0,    31,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,    42,
      43,     0,    44,    45,     0,     0,     0,    46,    47,     0,
      48,     0,    49,     0,     0,    50,    51,    52,     0,    53,
      54,    55,     0,   229,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   407,
     408,     0,     0,    56,     0,    57,    58,    59,    60,     0,
       0,     0,     0,    61,    62,    14,     0,    63,    64,    65,
       0,    15,    66,    67,    68,    69,    70,    16,    17,    18,
       0,   409,   410,   411,    19,     0,     0,     0,    20,     0,
       0,     0,     0,    21,    22,    23,    24,     0,     0,     0,
      25,     0,     0,     0,   230,     0,    26,     0,     0,    27,
      28,    29,     0,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    41,   456,
      42,    43,     0,    44,    45,     0,     0,     0,    46,    47,
       0,    48,     0,    49,     0,     0,    50,    51,    52,     0,
      53,    54,    55,     0,     1,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,     0,     0,   483,     0,     0,     0,     0,     0,     0,
     407,   408,     0,     0,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,    14,     0,    63,    64,
      65,     0,    15,    66,    67,    68,    69,    70,    16,    17,
      18,     0,   409,   410,   411,    19,     0,     0,     0,    20,
       0,     0,     0,     0,    21,    22,    23,    24,     0,     0,
       0,    25,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,    29,     0,    30,     0,     0,     0,    31,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,    41,
     457,    42,    43,     0,    44,    45,     0,     0,     0,    46,
      47,     0,    48,     0,    49,     0,     0,    50,    51,    52,
       0,    53,    54,    55,     0,     1,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,     0,     0,    61,    62,    14,     0,    63,
      64,    65,     0,    15,    66,    67,    68,    69,    70,    16,
      17,    18,     0,   409,   410,   411,    19,     0,     0,     0,
      20,     0,     0,     0,     0,    21,    22,    23,    24,     0,
       0,     0,    25,     0,     0,     0,     0,     0,    26,     0,
       0,    27,    28,    29,     0,    30,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
      41,   458,    42,    43,     0,    44,    45,     0,     0,     0,
      46,    47,     0,    48,     0,    49,     0,     0,    50,    51,
      52,     0,    53,    54,    55,     0,   229,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   407,   408,     0,     0,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,    14,     0,
      63,    64,    65,     0,    15,    66,    67,    68,    69,    70,
      16,    17,    18,     0,   409,   410,   411,    19,     0,     0,
       0,    20,     0,     0,     0,     0,    21,    22,    23,    24,
       0,     0,     0,    25,     0,     0,     0,     0,     0,    26,
       0,     0,    27,    28,    29,     0,    30,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,     0,     0,
       0,    41,   460,    42,    43,     0,    44,    45,     0,     0,
       0,    46,    47,     0,    48,     0,    49,     0,     0,    50,
      51,    52,     0,    53,    54,    55,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   407,   408,     0,     0,    56,     0,    57,
      58,    59,    60,     0,     0,     0,     0,    61,    62,    14,
       0,    63,    64,    65,   891,    15,    66,    67,    68,    69,
      70,    16,    17,    18,     0,   409,   410,   411,    19,     0,
       0,     0,    20,     0,     0,     0,     0,    21,    22,    23,
      24,     0,     0,     0,    25,     0,     0,     0,     0,     0,
      26,     0,     0,    27,    28,    29,     0,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,    39,    40,     0,     0,     0,     0,     0,     0,
       0,     0,    41,   463,    42,    43,     0,    44,    45,     0,
       0,     0,    46,    47,     0,    48,     0,    49,     0,     0,
      50,    51,    52,     0,    53,    54,    55,     0,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
       0,     0,    63,    64,    65,     0,     0,    66,    67,    68,
      69,    70,    14,     0,     0,     0,   892,     0,    15,     0,
       0,     0,     0,     0,    16,    17,    18,     0,     0,     0,
       0,    19,     0,     0,     0,    20,     0,     0,     0,     0,
      21,    22,    23,    24,     0,     0,     0,    25,   407,   408,
       0,     0,     0,    26,     0,     0,    27,    28,    29,     0,
      30,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     409,   410,   411,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,    41,     0,    42,    43,     0,
      44,    45,     0,     0,     0,    46,    47,     0,    48,     0,
      49,     0,     0,    50,    51,    52,     0,    53,    54,    55,
       0,     0,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
     683,    56,     0,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,     0,     0,    63,    64,    65,     0,     0,
      66,    67,    68,    69,    70,    14,     0,     0,     0,   893,
       0,    15,     0,     0,     0,     0,     0,    16,    17,    18,
       0,     0,     0,     0,    19,     0,     0,     0,    20,     0,
       0,     0,     0,    21,    22,    23,    24,     0,     0,     0,
      25,   407,   408,     0,     0,     0,    26,     0,     0,    27,
      28,    29,     0,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   409,   410,   411,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    41,     0,
      42,    43,     0,    44,    45,     0,     0,     0,    46,    47,
       0,    48,     0,    49,     0,     0,    50,    51,    52,     0,
      53,    54,    55,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,   684,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,     0,     0,    63,    64,
      65,     0,     0,    66,    67,    68,    69,    70,    14,     0,
       0,     0,   894,     0,    15,     0,     0,     0,     0,     0,
      16,    17,    18,     0,     0,     0,     0,    19,     0,     0,
       0,    20,     0,     0,     0,     0,    21,    22,    23,    24,
       0,     0,     0,    25,   407,   408,     0,     0,     0,    26,
       0,     0,    27,    28,    29,     0,    30,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   409,   410,   411,     0,
       0,     0,     0,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,     0,     0,
       0,    41,     0,    42,    43,     0,    44,    45,     0,     0,
       0,    46,    47,     0,    48,     0,    49,     0,     0,    50,
      51,    52,     0,    53,    54,    55,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   407,   408,     0,   685,    56,     0,    57,
      58,    59,    60,     0,     0,     0,     0,    61,    62,    14,
       0,    63,    64,    65,     0,    15,    66,    67,    68,    69,
      70,    16,    17,    18,     0,   409,   410,   411,    19,     0,
       0,     0,    20,     0,   944,     0,     0,    21,    22,    23,
      24,     0,     0,     0,    25,     0,     0,     0,     0,     0,
      26,     0,     0,    27,    28,    29,     0,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,    39,    40,     0,     0,     0,     0,     0,     0,
       0,     0,    41,   464,    42,    43,     0,    44,    45,     0,
       0,     0,    46,    47,     0,    48,     0,    49,     0,     0,
      50,    51,    52,     0,    53,    54,    55,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   407,   408,     0,     0,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
      14,     0,    63,    64,    65,     0,    15,    66,    67,    68,
      69,    70,    16,    17,    18,     0,   409,   410,   411,    19,
       0,     0,     0,    20,     0,     0,     0,     0,    21,    22,
      23,    24,   970,     0,     0,    25,     0,     0,     0,     0,
       0,    26,     0,     0,    27,    28,    29,     0,    30,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,    39,    40,     0,     0,     0,     0,     0,
       0,     0,     0,    41,   466,    42,    43,     0,    44,    45,
       0,     0,     0,    46,    47,     0,    48,     0,    49,     0,
       0,    50,    51,    52,     0,    53,    54,    55,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   407,   408,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,     0,     0,    61,
      62,    14,     0,    63,    64,    65,     0,    15,    66,    67,
      68,    69,    70,    16,    17,    18,     0,   409,   410,   411,
      19,     0,     0,     0,    20,     0,     0,     0,     0,    21,
      22,    23,    24,   971,     0,     0,    25,     0,     0,     0,
       0,     0,    26,     0,     0,    27,    28,    29,     0,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,    41,   467,    42,    43,     0,    44,
      45,     0,     0,     0,    46,    47,     0,    48,     0,    49,
       0,     0,    50,    51,    52,     0,    53,    54,    55,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   407,   408,     0,     0,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,    14,     0,    63,    64,    65,     0,    15,    66,
      67,    68,    69,    70,    16,    17,    18,     0,   409,   410,
     411,    19,     0,     0,     0,    20,     0,     0,     0,     0,
      21,    22,    23,    24,   973,     0,     0,    25,     0,     0,
       0,     0,     0,    26,     0,     0,    27,    28,    29,     0,
      30,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,    41,   468,    42,    43,     0,
      44,    45,     0,     0,     0,    46,    47,     0,    48,     0,
      49,     0,     0,    50,    51,    52,     0,    53,    54,    55,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   407,   408,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,    14,     0,    63,    64,    65,     0,    15,
      66,    67,    68,    69,    70,    16,    17,    18,     0,   409,
     410,   411,    19,     0,     0,     0,    20,     0,     0,     0,
       0,    21,    22,    23,    24,   974,     0,     0,    25,     0,
       0,     0,     0,     0,    26,     0,     0,    27,    28,    29,
       0,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,    41,   469,    42,    43,
       0,    44,    45,     0,     0,     0,    46,    47,     0,    48,
       0,    49,     0,     0,    50,    51,    52,     0,    53,    54,
      55,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   407,   408,
       0,     0,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,    14,     0,    63,    64,    65,     0,
      15,    66,    67,    68,    69,    70,    16,    17,    18,     0,
     409,   410,   411,    19,     0,     0,     0,    20,     0,     0,
       0,     0,    21,    22,    23,    24,   975,     0,     0,    25,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
      29,     0,    30,     0,     0,     0,    31,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,    41,   480,    42,
      43,     0,    44,    45,     0,     0,     0,    46,    47,     0,
      48,     0,    49,     0,     0,    50,    51,    52,     0,    53,
      54,    55,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   407,
     408,     0,     0,    56,     0,    57,    58,    59,    60,     0,
       0,     0,     0,    61,    62,    14,     0,    63,    64,    65,
       0,    15,    66,    67,    68,    69,    70,    16,    17,    18,
       0,   409,   410,   411,    19,     0,     0,     0,    20,     0,
       0,     0,     0,    21,    22,    23,    24,   994,     0,     0,
      25,     0,     0,     0,     0,     0,    26,     0,     0,    27,
      28,    29,     0,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    41,   481,
      42,    43,     0,    44,    45,     0,     0,     0,    46,    47,
       0,    48,     0,    49,     0,     0,    50,    51,    52,     0,
      53,    54,    55,     0,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     407,   408,     0,     0,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,    14,     0,    63,    64,
      65,     0,    15,    66,    67,    68,    69,    70,    16,    17,
      18,     0,   409,   410,   411,    19,     0,     0,     0,    20,
       0,     0,     0,     0,    21,    22,    23,    24,   995,     0,
       0,    25,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,    29,     0,    30,     0,     0,     0,    31,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,    41,
     482,    42,    43,     0,    44,    45,     0,     0,     0,    46,
      47,     0,    48,     0,    49,     0,     0,    50,    51,    52,
       0,    53,    54,    55,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,     0,     0,    61,    62,    14,     0,    63,
      64,    65,     0,    15,    66,    67,    68,    69,    70,    16,
      17,    18,     0,   409,   410,   411,    19,     0,     0,     0,
      20,     0,     0,     0,     0,    21,    22,    23,    24,   997,
       0,     0,    25,     0,     0,     0,     0,     0,    26,     0,
       0,    27,    28,    29,     0,    30,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
      41,   560,    42,    43,     0,    44,    45,     0,     0,     0,
      46,    47,     0,    48,     0,    49,     0,     0,    50,    51,
      52,     0,    53,    54,    55,     0,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   407,   408,     0,     0,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,    14,     0,
      63,    64,    65,     0,    15,    66,    67,    68,    69,    70,
      16,    17,    18,     0,   409,   410,   411,    19,     0,     0,
       0,    20,     0,     0,     0,     0,    21,    22,    23,    24,
     998,     0,     0,    25,     0,     0,     0,     0,     0,    26,
       0,     0,    27,    28,    29,     0,    30,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,     0,     0,
       0,    41,   564,    42,    43,     0,    44,    45,     0,     0,
       0,    46,    47,     0,    48,     0,    49,     0,     0,    50,
      51,    52,     0,    53,    54,    55,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   407,   408,     0,     0,    56,     0,    57,
      58,    59,    60,     0,     0,     0,     0,    61,    62,    14,
       0,    63,    64,    65,     0,    15,    66,    67,    68,    69,
      70,    16,    17,    18,     0,   409,   410,   411,    19,     0,
       0,     0,    20,     0,     0,     0,     0,    21,    22,    23,
      24,   999,     0,     0,    25,     0,     0,     0,     0,     0,
      26,     0,     0,    27,    28,    29,     0,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,    39,    40,     0,     0,     0,     0,     0,     0,
       0,     0,    41,   630,    42,    43,     0,    44,    45,     0,
       0,     0,    46,    47,     0,    48,     0,    49,     0,     0,
      50,    51,    52,     0,    53,    54,    55,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   407,   408,     0,     0,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
      14,     0,    63,    64,    65,     0,    15,    66,    67,    68,
      69,    70,    16,    17,    18,     0,   409,   410,   411,    19,
       0,     0,     0,    20,     0,     0,     0,     0,    21,    22,
      23,    24,  1006,     0,     0,    25,     0,     0,     0,     0,
       0,    26,     0,     0,    27,    28,    29,     0,    30,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,    39,    40,     0,     0,     0,     0,     0,
       0,     0,     0,    41,   634,    42,    43,     0,    44,    45,
       0,     0,     0,    46,    47,     0,    48,     0,    49,     0,
       0,    50,    51,    52,     0,    53,    54,    55,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   407,   408,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,     0,     0,    61,
      62,    14,     0,    63,    64,    65,     0,    15,    66,    67,
      68,    69,    70,    16,    17,    18,     0,   409,   410,   411,
      19,     0,     0,     0,    20,     0,     0,     0,     0,    21,
      22,    23,    24,  1007,     0,     0,    25,     0,     0,     0,
       0,     0,    26,     0,     0,    27,    28,    29,     0,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,    41,   636,    42,    43,     0,    44,
      45,     0,     0,     0,    46,    47,     0,    48,     0,    49,
       0,     0,    50,    51,    52,     0,    53,    54,    55,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   407,   408,     0,     0,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,    14,     0,    63,    64,    65,     0,    15,    66,
      67,    68,    69,    70,    16,    17,    18,     0,   409,   410,
     411,    19,     0,     0,     0,    20,     0,     0,     0,     0,
      21,    22,    23,    24,  1016,     0,     0,    25,     0,     0,
       0,     0,     0,    26,     0,     0,    27,    28,    29,     0,
      30,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,    41,   637,    42,    43,     0,
      44,    45,     0,     0,     0,    46,    47,     0,    48,     0,
      49,     0,     0,    50,    51,    52,     0,    53,    54,    55,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   407,   408,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,    14,     0,    63,    64,    65,     0,    15,
      66,    67,    68,    69,    70,    16,    17,    18,     0,   409,
     410,   411,    19,     0,     0,     0,    20,     0,     0,     0,
       0,    21,    22,    23,    24,  1017,     0,     0,    25,     0,
       0,     0,     0,     0,    26,     0,     0,    27,    28,    29,
       0,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,    41,   640,    42,    43,
       0,    44,    45,     0,     0,     0,    46,    47,     0,    48,
       0,    49,     0,     0,    50,    51,    52,     0,    53,    54,
      55,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   407,   408,
       0,     0,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,    14,     0,    63,    64,    65,     0,
      15,    66,    67,    68,    69,    70,    16,    17,    18,     0,
     409,   410,   411,    19,     0,     0,     0,    20,     0,     0,
       0,     0,    21,    22,    23,    24,     0,     0,     0,    25,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
      29,     0,    30,     0,     0,     0,    31,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,    41,   709,    42,
      43,     0,    44,    45,     0,     0,     0,    46,    47,     0,
      48,     0,    49,     0,     0,    50,    51,    52,     0,    53,
      54,    55,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   407,   408,     0,     0,     0,
       0,     0,     0,    56,     0,    57,    58,    59,    60,     0,
       0,     0,     0,    61,    62,     0,     0,    63,    64,    65,
       0,     0,    66,    67,    68,    69,    70,   409,   410,   411,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
       0,   407,   408,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,   409,   410,   411,     0,     0,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,   407,
     408,     0,     0,     0,     0,     0,     0,   686,     0,     0,
       0,     0,   407,   408,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,   409,   410,   411,   407,   408,     0,     0,     0,     0,
       0,     0,     0,     0,   409,   410,   411,   407,   408,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,   409,   410,   411,   407,
     408,     0,     0,   687,     0,     0,     0,     0,     0,   409,
     410,   411,     0,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,   409,   410,   411,   407,   408,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   688,     0,     0,     0,     0,   409,   410,   411,   407,
     408,     0,     0,     0,   689,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,     0,     0,     0,   690,     0,     0,     0,
       0,   409,   410,   411,   407,   408,     0,     0,     0,   691,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,   407,   408,     0,     0,     0,
       0,   692,     0,     0,     0,     0,   409,   410,   411,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,   409,   410,   411,
       0,     0,     0,     0,   407,   408,   693,     0,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,   409,   410,   411,   407,
     408,   694,     0,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   407,   408,
       0,   409,   410,   411,     0,     0,   695,     0,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,   696,   407,   408,
     409,   410,   411,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
     409,   410,   411,   407,   408,     0,   697,     0,     0,     0,
       0,     0,     0,   409,   410,   411,     0,     0,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,   409,   410,   411,     0,   407,
     408,   698,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
     701,   409,   410,   411,   407,   408,     0,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     708,     0,     0,     0,     0,     0,   409,   410,   411,   407,
     408,     0,     0,   713,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,   407,   408,     0,     0,   714,     0,     0,     0,     0,
       0,   409,   410,   411,   407,   408,     0,     0,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,   409,   410,   411,   407,   408,     0,     0,
       0,   717,     0,     0,     0,     0,   409,   410,   411,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,     0,   409,   410,
     411,     0,     0,   407,   408,     0,   748,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,   409,   410,   411,   407,   408,
       0,   764,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,     0,
       0,     0,     0,   766,     0,     0,     0,     0,   407,   408,
     409,   410,   411,     0,     0,     0,   767,     0,     0,     0,
       0,     0,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,   407,   408,   770,     0,
     409,   410,   411,     0,     0,     0,     0,     0,     0,   407,
     408,     0,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,   409,   410,
     411,   407,   408,     0,     0,   771,     0,     0,     0,     0,
       0,   409,   410,   411,     0,     0,     0,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     0,   409,   410,   411,     0,     0,     0,     0,
     773,   407,   408,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     785,   407,   408,   409,   410,   411,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   845,     0,
       0,     0,     0,   409,   410,   411,   407,   408,     0,     0,
       0,   847,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,     0,
       0,     0,     0,   850,   407,   408,     0,     0,   409,   410,
     411,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   409,   410,   411,     0,
       0,     0,     0,   870,   407,   408,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,   871,     0,     0,   409,   410,   411,     0,
       0,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
     407,   408,     0,   409,   410,   411,     0,     0,   872,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   409,   410,   411,     0,   939,   407,   408,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,   409,
     410,   411,   407,   408,     0,     0,   940,     0,     0,     0,
       0,     0,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,   407,
     408,     0,     0,   941,   409,   410,   411,     0,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,     0,   407,   408,
     710,   409,   410,   411,     0,     0,     0,     0,     0,     0,
       0,   407,   408,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
     409,   410,   411,     0,     0,     0,     0,   711,     0,     0,
       0,   407,   408,   409,   410,   411,     0,     0,     0,     0,
       0,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,   407,   408,
       0,     0,   743,   409,   410,   411,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,     0,     0,     0,     0,   749,
     409,   410,   411,   407,   408,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   750,     0,
       0,     0,     0,     0,     0,   409,   410,   411,     0,     0,
       0,   752,   407,   408,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   407,   408,     0,
       0,   754,     0,     0,   409,   410,   411,     0,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,   407,   408,     0,     0,   757,   409,
     410,   411,     0,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   409,   410,   411,     0,
       0,     0,     0,   758,   407,   408,     0,     0,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,   409,   410,   411,   407,
     408,     0,   760,     0,     0,     0,     0,     0,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,   407,   408,     0,     0,   761,     0,     0,
       0,   409,   410,   411,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,     0,   762,   409,   410,   411,   407,   408,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
     409,   410,   411,     0,   763,     0,     0,     0,   407,   408,
       0,     0,     0,   409,   410,   411,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,   407,   408,     0,     0,     0,     0,   768,
     409,   410,   411,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
       0,     0,     0,   769,     0,   409,   410,   411,     0,     0,
       0,     0,   407,   408,     0,     0,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,     0,     0,     0,   789,     0,
       0,     0,     0,     0,   409,   410,   411,   407,   408,     0,
       0,   819,     0,     0,     0,     0,     0,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,   407,   408,     0,     0,     0,     0,   821,   409,
     410,   411,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,     0,
       0,     0,     0,   822,   409,   410,   411,   407,   408,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,   409,
     410,   411,   825,     0,     0,     0,   407,   408,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,     0,     0,     0,     0,   846,   409,   410,
     411,     0,     0,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,   407,   408,
       0,     0,   849,   409,   410,   411,     0,     0,     0,     0,
       0,   407,   408,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
     409,   410,   411,     0,     0,     0,     0,   875,   407,   408,
       0,     0,     0,   409,   410,   411,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     409,   410,   411,   407,   408,     0,   877,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   880,   407,   408,     0,   409,   410,   411,     0,     0,
       0,     0,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,   881,     0,
       0,     0,     0,     0,   409,   410,   411,   407,   408,     0,
       0,   883,     0,     0,     0,     0,     0,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     0,     0,     0,     0,   407,   408,   884,   409,
     410,   411,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   409,   410,
     411,   407,   408,   885,     0,     0,     0,     0,     0,     0,
       0,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,     0,     0,     0,     0,     0,
       0,     0,   888,   409,   410,   411,   407,   408,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,     0,     0,     0,     0,   889,   409,   410,
     411,     0,     0,     0,   407,   408,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,   409,   410,   411,   902,     0,     0,     0,
     407,   408,     0,     0,     0,     0,   409,   410,   411,     0,
       0,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,   407,   408,     0,
       0,   923,   409,   410,   411,     0,     0,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   409,
     410,   411,     0,     0,     0,     0,   925,   407,   408,     0,
       0,     0,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,     0,
       0,   926,     0,     0,     0,     0,     0,     0,     0,   409,
     410,   411,   407,   408,   932,     0,     0,     0,     0,     0,
       0,     0,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,   407,   408,     0,     0,
     933,     0,     0,     0,   409,   410,   411,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     0,     0,     0,     0,     0,   965,   409,   410,
     411,   407,   408,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
       0,     0,     0,   409,   410,   411,     0,   968,     0,     0,
       0,   407,   408,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   407,   408,     0,     0,
       0,     0,   985,   409,   410,   411,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,   407,   408,     0,     0,   986,     0,   409,   410,
     411,     0,     0,     0,     0,   407,   408,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,   409,   410,   411,     0,     0,     0,
       0,   988,   407,   408,     0,     0,     0,   409,   410,   411,
       0,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
       0,     0,     0,     0,   409,   410,   411,   407,   408,     0,
       0,   989,     0,     0,     0,     0,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,     0,  1002,   407,   408,   409,
     410,   411,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,     0,
       0,     0,  1005,     0,     0,     0,     0,     0,     0,   409,
     410,   411,   407,   408,     0,  1010,     0,     0,     0,     0,
       0,     0,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,     0,
       0,     0,  1011,     0,   409,   410,   411,   407,   408,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,     0,     0,     0,     0,  1013,     0,   409,
     410,   411,     0,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,   409,   410,   411,     0,  1014,     0,     0,
       0,   407,   408,     0,     0,     0,     0,     0,     0,   301,
     302,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,     0,     0,     0,   407,   408,
       0,     0,  1022,   409,   410,   411,     0,     0,   301,   302,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,     0,
     409,   410,   411,   407,   408,     0,     0,  1023,     0,   855,
       0,     0,     0,     0,     0,   301,   302,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,  1026,     0,     0,     0,   409,   410,   411,   858,     0,
     407,   408,     0,     0,   301,   302,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   407,
     408,  1027,   409,   410,   411,   912,     0,     0,     0,   301,
     302,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,     0,     0,     0,  1030,     0,
       0,   409,   410,   411,   915,     0,   407,   408,     0,     0,
       0,     0,     0,     0,     0,     0,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
       0,     0,     0,  1031,     0,   407,   408,     0,   409,   410,
     411,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   409,   410,   411,
     407,   408,     0,     0,     0,     0,   721,     0,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,     0,
       0,   723,   409,   410,   411,   407,   408,     0,     0,     0,
       0,     0,     0,     0,   799,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
     407,   408,     0,     0,     0,     0,     0,   409,   410,   411,
     801,     0,     0,   407,   408,   394,   421,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,   409,   410,   411,     0,     0,     0,     0,   407,
     408,     0,     0,     0,     0,   409,   410,   411,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   409,   410,   411,   407,   408,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   407,   408,   409,   410,   411,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   409,   410,   411
};

static const yytype_int16 yycheck[] =
{
      16,    17,    18,    19,    94,    95,     1,     7,     8,     7,
       8,     7,     8,    96,    97,    98,    99,    31,    32,     7,
       8,     9,    10,     3,   243,    36,    42,    43,   243,    45,
      46,    47,    48,    49,    50,    24,    52,    53,    54,    55,
     249,    21,    22,   279,    60,     7,     8,     9,    21,    22,
      66,    67,    68,   243,    70,    24,    25,    26,    27,     3,
     243,    30,    31,    32,     7,     8,     9,    10,   243,    24,
      86,    87,    88,   243,    24,    91,    28,    21,    22,    31,
      32,    28,   243,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,   112,   113,    87,    15,
      23,   117,   118,    24,    20,    28,    29,    59,    24,   243,
      26,    34,    35,    24,    25,    26,    27,   243,    23,    30,
      31,    32,   243,    28,    29,    69,    78,    32,    33,    34,
      35,    78,    87,     4,     5,   243,    98,    87,   154,     4,
      92,    93,    94,    95,     4,    92,    93,    94,    95,     8,
      93,   167,    24,    25,    26,    27,     3,   243,    30,    31,
      32,   243,    33,     7,     8,     9,    87,     3,     7,     8,
       9,    10,   112,   113,    21,    22,    24,    25,    26,    27,
       4,     5,    30,    31,    32,    21,    22,   203,     7,   112,
     113,   207,    24,    25,    26,    27,     7,     8,    30,    31,
      32,     0,     1,    10,   144,   145,   146,   112,   113,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    69,    24,    25,    26,    27,   451,   452,    30,
      31,    32,   243,    38,    39,    10,   472,   446,   474,    21,
      22,     0,    69,   243,    71,   243,   262,   243,    84,     3,
     266,    24,   268,   269,   242,    60,   272,   242,   341,   342,
     343,   277,   278,    24,    25,    26,    27,    21,    22,    30,
      31,    32,    21,   242,   290,   244,    24,    25,    26,    27,
     243,   242,    30,    31,    32,     7,     8,     9,   304,   305,
     306,   307,   308,   309,   310,   311,   242,    79,   112,   113,
     242,   315,   242,    85,   244,   300,   243,     3,   243,    24,
      25,    26,    27,   243,   230,    30,    31,    32,    72,     3,
       7,     8,     9,   339,   340,    21,    22,   279,    28,    29,
     144,   145,   146,   244,     7,     8,     9,    21,    22,   243,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   440,   243,   375,
     243,   166,   243,   315,   243,   243,   382,   383,   243,   385,
     386,   323,   244,   389,   390,   243,   323,   243,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   244,   313,     6,     7,
       8,     9,    10,   419,   420,   421,     3,   423,   243,   425,
     243,    10,   244,   243,    24,    25,    26,    27,   243,   509,
      30,    31,    32,   243,    21,    22,   442,   443,   444,   445,
     244,   447,    78,   243,   450,   243,    87,   453,   454,   243,
     456,   457,   458,   244,   460,   243,   243,   463,   464,     3,
     466,   467,   468,   469,     7,     8,     9,    10,     3,   475,
     243,   242,   478,   479,   480,   481,   482,    21,    22,     7,
       8,     9,    24,    25,    26,    27,    21,    22,    30,    31,
      32,   243,   498,   244,   500,   290,   243,   503,   243,   441,
       3,   243,     0,   243,   441,     3,   244,   243,    51,     6,
     243,   300,     9,    10,   303,   243,   243,   312,    21,    22,
     243,    18,   243,    21,    22,   840,   841,   842,   317,   243,
     472,   437,   474,   243,   243,    24,    25,    26,    27,   244,
     242,    30,    31,    32,     7,     8,     9,    10,   243,   555,
       7,     8,     9,    10,   560,   350,   351,   352,   564,   243,
     243,    24,   243,   242,    24,   507,   242,   509,   243,    66,
     507,    69,   509,    71,    72,   243,   242,   242,   373,   374,
      24,   376,   377,   378,   379,   380,    84,   243,   243,   243,
     496,    24,   242,   244,   600,   242,   602,     7,     8,     9,
      10,     0,     1,    24,    25,    26,    27,   244,     8,    30,
      31,    32,   244,   244,   244,   244,   244,   412,   413,   414,
     415,   416,   417,   418,   630,   244,    25,     7,   634,    28,
     636,   637,    31,    32,   640,   132,     9,   134,   135,   136,
     243,   138,     7,   140,   244,   718,   143,   242,     8,   438,
       0,     9,    87,     3,    96,    24,    25,    26,    27,     7,
      59,    30,    31,    32,    67,    21,   244,    24,    25,    26,
      27,    21,    22,    30,    31,    32,   244,   244,   243,    78,
     622,   243,   228,   229,   243,   622,     4,     5,    10,     7,
       8,    32,    10,    92,    93,    94,    95,   703,   704,   705,
     242,    85,   243,   243,   710,   711,   243,     7,     9,     8,
      24,   242,   111,    95,   243,   721,   243,   723,     0,    69,
     217,     3,    72,   244,   244,   244,   244,   244,   225,   244,
     243,   737,   243,   739,    84,   741,     8,    67,     9,    21,
      22,   242,     7,   749,   750,    70,   752,   242,   754,   242,
     242,   757,   758,   242,   760,   761,   762,   763,    24,    25,
      26,    27,   768,   769,    30,    31,    32,   242,   244,    21,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   789,    21,   244,     0,    69,   244,     3,
      72,   244,   243,   799,   244,   801,   244,   244,    71,   441,
     746,    71,    84,   290,   507,   720,    -1,    21,    22,    -1,
      -1,    -1,    -1,   819,    -1,   821,   822,    -1,    -1,   825,
     609,   242,    -1,    -1,    -1,   831,   832,    -1,    -1,   228,
     229,    -1,    -1,    -1,    -1,    -1,    -1,   843,    -1,    -1,
     846,    -1,    -1,   849,    -1,    -1,    -1,    24,    -1,   855,
      -1,    -1,   858,    -1,    -1,    69,     0,     1,    72,   112,
     113,    38,    39,    40,    41,    42,    43,    44,   657,   875,
      84,   877,    -1,   242,   880,   881,    -1,    -1,    -1,    -1,
     279,    25,   888,   889,    28,   431,   432,    31,    32,    -1,
     436,   144,    -1,   439,    -1,    -1,   902,    -1,    -1,    -1,
      -1,   300,    -1,    -1,   303,    -1,   912,   702,    -1,   915,
      -1,    -1,    -1,    -1,   709,    59,   315,   923,   317,   925,
     926,    -1,    -1,    -1,   323,    -1,   932,   933,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   735,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   965,
      -1,    -1,   968,    -1,    -1,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,   772,    -1,   985,
     986,    -1,   988,   989,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1002,    -1,    -1,  1005,
      -1,    -1,    -1,    -1,  1010,  1011,    -1,  1013,  1014,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1022,  1023,    -1,    -1,
    1026,  1027,    -1,    -1,  1030,  1031,    -1,    -1,    -1,    -1,
      -1,    -1,   431,   432,    -1,    -1,    -1,   436,    -1,   438,
     439,    -1,   441,    -1,    -1,    -1,    -1,   836,   837,   838,
     839,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,   608,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   472,    85,   474,    -1,    -1,    -1,   874,
      -1,    -1,    -1,    -1,   228,   229,    -1,    -1,   883,   884,
     885,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,   507,    -1,
     509,    -1,    -1,    -1,    -1,   904,    -1,    -1,    -1,    -1,
      -1,   667,    -1,   669,   670,   671,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   279,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,   943,    -1,   300,   946,   947,   303,
     949,   950,   951,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   315,    -1,   317,    -1,    -1,    -1,    -1,    -1,   323,
     112,   113,    -1,    -1,    -1,    -1,    -1,   733,   977,   978,
      -1,   980,   981,   982,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   991,   992,    -1,    -1,    -1,    -1,    -1,   608,
     609,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,  1008,
    1009,    -1,   233,   622,    -1,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     251,    -1,    -1,    -1,    -1,   791,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   657,   144,
     145,   146,    -1,    -1,    -1,    -1,    -1,    -1,   667,    -1,
     669,   670,   671,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   431,   432,    -1,
      -1,    -1,   436,    -1,   438,   439,    -1,   441,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   852,    -1,    -1,    -1,
     856,   857,   244,   859,   860,   861,     0,    -1,    -1,     3,
      -1,   867,   868,    -1,    -1,    -1,    -1,    -1,   472,    -1,
     474,    -1,    -1,    -1,   733,    -1,   735,    21,    22,    23,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,   242,    -1,   244,
      -1,    -1,    -1,   507,    -1,   509,    -1,   913,   914,    -1,
     916,   917,   918,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    -1,
      -1,    -1,   791,    -1,    -1,    -1,    -1,    -1,    -1,   945,
      84,    -1,   948,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   422,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   434,    -1,    -1,    -1,    -1,   112,   113,
     976,    -1,    -1,   979,    -1,    -1,    -1,   836,   837,   838,
     839,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   852,    -1,    -1,    -1,   856,   857,    -1,
     859,   860,   861,    -1,   608,   609,    -1,    -1,   867,   868,
      -1,    -1,    -1,   484,    -1,    -1,    -1,    -1,   622,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,   508,    -1,   510,
     511,   512,    -1,    -1,    -1,   904,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   657,   913,   914,    -1,   916,   917,   918,
      -1,    -1,    -1,   667,    -1,   669,   670,   671,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,   943,    -1,   945,   946,   947,   948,
     949,   950,   951,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   976,   977,   978,
     979,   980,   981,   982,    -1,    -1,    -1,    -1,    -1,   733,
      -1,   735,   991,   992,    -1,    -1,    -1,    -1,    -1,   610,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,  1008,
    1009,    -1,   623,    -1,    -1,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,   112,   113,    -1,   791,    -1,   144,
     145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    24,    -1,    26,    27,    28,   144,   145,   146,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    -1,   836,   837,   838,   839,    -1,    -1,   242,    -1,
     244,    -1,    -1,    -1,    -1,    -1,    59,    60,   852,   720,
      -1,    -1,   856,   857,    -1,   859,   860,   861,   112,   113,
      -1,    -1,    -1,   867,   868,    78,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    92,
      93,    94,    95,    96,    97,    98,    99,   242,    -1,   244,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     904,    -1,    -1,   774,   775,   776,   777,    -1,    -1,   913,
     914,    -1,   916,   917,   918,    -1,   244,    -1,    -1,   790,
      -1,    -1,    -1,   794,   795,   796,   797,   798,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   943,
      -1,   945,   946,   947,   948,   949,   950,   951,    -1,    -1,
      -1,    -1,    -1,   166,    -1,   112,   113,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   976,   977,   978,   979,   980,   981,   982,    -1,
      -1,    -1,   853,    -1,    -1,    -1,    -1,   991,   992,    -1,
     244,   862,   863,   864,   865,   866,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1008,  1009,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,   903,    -1,   905,   906,   907,   908,   909,   910,
     911,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   279,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,   144,   145,
     146,   952,   953,   954,   955,   956,   957,   958,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   969,   312,
     313,   972,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
     323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   993,    -1,    -1,   996,    -1,    -1,   341,   342,
     343,    -1,    -1,    -1,    -1,    -1,    -1,   350,   351,   352,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     373,   374,    -1,   376,   377,   378,   379,   380,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,   244,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   412,
     413,   414,   415,   416,   417,   418,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   437,    -1,    -1,   440,   441,    -1,
      -1,     4,     5,    -1,     7,     8,    -1,    10,   242,    -1,
     244,    -1,    -1,    16,    17,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,   472,
      33,   474,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   496,    57,    -1,    -1,    60,    61,    62,
      63,    64,    -1,    -1,   507,    -1,   509,    -1,    -1,    -1,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,   106,   112,   113,   109,   110,   111,    -1,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,    -1,
     133,    -1,    -1,    -1,   137,    -1,   144,   145,   146,   142,
      -1,    -1,    -1,    -1,   147,    -1,    -1,   150,   151,   152,
     153,   154,   155,   156,   157,    -1,    -1,   160,    -1,    -1,
      -1,    -1,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,
     244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   622,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,    -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
      -1,    -1,    -1,    -1,   242,   238,   239,   240,    -1,    -1,
     243,   244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   702,
      -1,    -1,    -1,    -1,     4,     5,   709,     7,     8,    -1,
      10,    -1,    -1,    -1,    -1,   718,    16,    17,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,   772,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,   112,   113,   109,
     110,   111,    -1,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,    -1,   133,    -1,    -1,    -1,   137,    -1,   144,
     145,   146,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,
     150,   151,   152,   153,   154,   155,   156,   157,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,
     170,   874,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     883,   884,   885,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,    -1,   215,   216,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,   242,   238,   239,
     240,    -1,    -1,   243,   244,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    60,    61,    62,    63,    64,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,    -1,
     109,   110,   111,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,   140,    -1,   142,   143,    -1,    -1,    -1,   147,    -1,
      -1,   150,   151,   152,   153,   154,   155,   156,   157,    -1,
      -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,    -1,   215,   216,   217,    -1,
      -1,   220,    -1,    -1,    -1,   224,   225,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,   238,
     239,   240,    -1,   242,   243,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    60,    61,    62,    63,    64,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,    -1,
     109,   110,   111,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,   140,    -1,   142,   143,    -1,    -1,    -1,   147,    -1,
      -1,   150,   151,   152,   153,   154,   155,   156,   157,    -1,
      -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,    -1,   215,   216,   217,    -1,
      -1,    -1,    -1,    -1,    -1,   224,   225,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,   238,
     239,   240,     4,     5,   243,     7,     8,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    16,    17,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,   112,   113,   109,   110,   111,
      -1,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
      -1,   133,    -1,    -1,    -1,   137,    -1,   144,   145,   146,
     142,    -1,    -1,    -1,    -1,   147,    -1,    -1,   150,   151,
     152,   153,   154,   155,   156,   157,    -1,    -1,   160,    -1,
      -1,    -1,    -1,   165,    -1,   167,    -1,    -1,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,    -1,   215,   216,     4,     5,    -1,     7,     8,
      -1,    10,   224,    -1,    -1,    -1,    -1,    16,    17,   231,
     232,    -1,    -1,    -1,    -1,   242,   238,   239,   240,    -1,
      -1,   243,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,    -1,
     109,   110,   111,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,    -1,   133,    -1,    -1,    -1,   137,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,    -1,
      -1,   150,   151,   152,   153,   154,   155,   156,   157,    -1,
      -1,   160,    -1,    -1,    -1,    -1,    -1,   166,   167,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,    -1,   215,   216,     4,     5,
      -1,     7,     8,    -1,    10,   224,    -1,    -1,    -1,    -1,
      16,    17,   231,   232,    -1,    -1,    -1,    -1,    -1,   238,
     239,   240,    -1,    -1,   243,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
     106,    -1,    -1,   109,   110,   111,    -1,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,    -1,   133,    -1,    -1,
      -1,   137,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,   147,    -1,    -1,   150,   151,   152,   153,   154,   155,
     156,   157,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,
     166,   167,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,    -1,   215,
     216,     4,     5,    -1,     7,     8,    -1,    10,   224,    -1,
      -1,    -1,    -1,    16,    17,   231,   232,    -1,    -1,    -1,
      -1,    -1,   238,   239,   240,    -1,    -1,   243,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,   106,    -1,    -1,   109,   110,   111,    -1,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,    -1,
     133,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,   147,    -1,    -1,   150,   151,   152,
     153,   154,   155,   156,   157,    -1,    -1,   160,    -1,    -1,
      -1,    -1,    -1,   166,   167,    -1,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,    -1,   215,   216,     4,     5,    -1,     7,     8,    -1,
      10,   224,    -1,    -1,    -1,    -1,    16,    17,   231,   232,
      -1,    -1,    -1,    -1,    -1,   238,   239,   240,    -1,    -1,
     243,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,    -1,    -1,   109,
     110,   111,    -1,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,    -1,   133,    -1,    -1,    -1,   137,    -1,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,
     150,   151,   152,   153,   154,   155,   156,   157,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,    -1,   215,   216,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,   238,   239,
     240,     3,    -1,   243,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    -1,    -1,    -1,    80,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,    91,
      -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,   144,   145,   146,    -1,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,   160,   161,
      -1,   163,   164,    -1,    -1,    -1,   168,   169,    -1,   171,
      -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,   181,
     182,    -1,     3,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,    -1,
      -1,    -1,   224,   225,    45,    -1,   228,   229,   230,    -1,
      51,   233,   234,   235,   236,   237,    57,    58,    59,    -1,
      -1,   244,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      91,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,   160,
     161,    -1,   163,   164,    -1,    -1,    -1,   168,   169,    -1,
     171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,
     181,   182,    -1,     3,    -1,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,
      -1,    -1,    -1,   224,   225,    45,    -1,   228,   229,   230,
      -1,    51,   233,   234,   235,   236,   237,    57,    58,    59,
      -1,   144,   145,   146,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,    89,
      90,    91,    -1,    93,    -1,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,   242,
     160,   161,    -1,   163,   164,    -1,    -1,    -1,   168,   169,
      -1,   171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,
     180,   181,   182,    -1,     3,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,   214,    -1,   216,   217,   218,   219,
      -1,    -1,    -1,    -1,   224,   225,    45,    -1,   228,   229,
     230,    -1,    51,   233,   234,   235,   236,   237,    57,    58,
      59,    -1,   144,   145,   146,    64,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    91,    -1,    93,    -1,    -1,    -1,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
     242,   160,   161,    -1,   163,   164,    -1,    -1,    -1,   168,
     169,    -1,   171,    -1,   173,    -1,    -1,   176,   177,   178,
      -1,   180,   181,   182,    -1,     3,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,   214,    -1,   216,   217,   218,
     219,    -1,    -1,    -1,    -1,   224,   225,    45,    -1,   228,
     229,   230,    -1,    51,   233,   234,   235,   236,   237,    57,
      58,    59,    -1,   144,   145,   146,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    89,    90,    91,    -1,    93,    -1,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,
     148,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,   242,   160,   161,    -1,   163,   164,    -1,    -1,    -1,
     168,   169,    -1,   171,    -1,   173,    -1,    -1,   176,   177,
     178,    -1,   180,   181,   182,    -1,     3,    -1,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,   214,    -1,   216,
     217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,    45,
      -1,   228,   229,   230,    50,    51,   233,   234,   235,   236,
     237,    57,    58,    59,    -1,   144,   145,   146,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    -1,    93,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,   242,   160,   161,    -1,   163,   164,    -1,
      -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,    -1,
     176,   177,   178,    -1,   180,   181,   182,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,   214,    -1,
     216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,
      -1,    -1,   228,   229,   230,    -1,    -1,   233,   234,   235,
     236,   237,    45,    -1,    -1,    -1,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    -1,    -1,    -1,    80,   112,   113,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    91,    -1,
      93,    -1,    -1,    -1,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,   148,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,   160,   161,    -1,
     163,   164,    -1,    -1,    -1,   168,   169,    -1,   171,    -1,
     173,    -1,    -1,   176,   177,   178,    -1,   180,   181,   182,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
     244,   214,    -1,   216,   217,   218,   219,    -1,    -1,    -1,
      -1,   224,   225,    -1,    -1,   228,   229,   230,    -1,    -1,
     233,   234,   235,   236,   237,    45,    -1,    -1,    -1,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,
      80,   112,   113,    -1,    -1,    -1,    86,    -1,    -1,    89,
      90,    91,    -1,    93,    -1,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
     160,   161,    -1,   163,   164,    -1,    -1,    -1,   168,   169,
      -1,   171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,
     180,   181,   182,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,   244,   214,    -1,   216,   217,   218,   219,
      -1,    -1,    -1,    -1,   224,   225,    -1,    -1,   228,   229,
     230,    -1,    -1,   233,   234,   235,   236,   237,    45,    -1,
      -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      -1,    -1,    -1,    80,   112,   113,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    91,    -1,    93,    -1,    -1,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,   160,   161,    -1,   163,   164,    -1,    -1,
      -1,   168,   169,    -1,   171,    -1,   173,    -1,    -1,   176,
     177,   178,    -1,   180,   181,   182,    -1,    -1,    -1,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,   244,   214,    -1,   216,
     217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,    45,
      -1,   228,   229,   230,    -1,    51,   233,   234,   235,   236,
     237,    57,    58,    59,    -1,   144,   145,   146,    64,    -1,
      -1,    -1,    68,    -1,    70,    -1,    -1,    73,    74,    75,
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
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,   214,    -1,
     216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,
      45,    -1,   228,   229,   230,    -1,    51,   233,   234,   235,
     236,   237,    57,    58,    59,    -1,   144,   145,   146,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,
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
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,   214,
      -1,   216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,
     225,    45,    -1,   228,   229,   230,    -1,    51,   233,   234,
     235,   236,   237,    57,    58,    59,    -1,   144,   145,   146,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
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
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
     214,    -1,   216,   217,   218,   219,    -1,    -1,    -1,    -1,
     224,   225,    45,    -1,   228,   229,   230,    -1,    51,   233,
     234,   235,   236,   237,    57,    58,    59,    -1,   144,   145,
     146,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,
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
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,
      -1,   214,    -1,   216,   217,   218,   219,    -1,    -1,    -1,
      -1,   224,   225,    45,    -1,   228,   229,   230,    -1,    51,
     233,   234,   235,   236,   237,    57,    58,    59,    -1,   144,
     145,   146,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    -1,    -1,    80,    -1,
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
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
      -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,    -1,
      -1,    -1,   224,   225,    45,    -1,   228,   229,   230,    -1,
      51,   233,   234,   235,   236,   237,    57,    58,    59,    -1,
     144,   145,   146,    64,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    -1,    -1,    80,
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
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,
      -1,    -1,    -1,   224,   225,    45,    -1,   228,   229,   230,
      -1,    51,   233,   234,   235,   236,   237,    57,    58,    59,
      -1,   144,   145,   146,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    -1,    -1,
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
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    91,    -1,    93,    -1,    -1,    -1,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
     242,   160,   161,    -1,   163,   164,    -1,    -1,    -1,   168,
     169,    -1,   171,    -1,   173,    -1,    -1,   176,   177,   178,
      -1,   180,   181,   182,    -1,    -1,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,   214,    -1,   216,   217,   218,
     219,    -1,    -1,    -1,    -1,   224,   225,    45,    -1,   228,
     229,   230,    -1,    51,   233,   234,   235,   236,   237,    57,
      58,    59,    -1,   144,   145,   146,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,
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
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   113,    -1,    -1,   214,    -1,   216,   217,
     218,   219,    -1,    -1,    -1,    -1,   224,   225,    45,    -1,
     228,   229,   230,    -1,    51,   233,   234,   235,   236,   237,
      57,    58,    59,    -1,   144,   145,   146,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,
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
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,   214,    -1,   216,
     217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,    45,
      -1,   228,   229,   230,    -1,    51,   233,   234,   235,   236,
     237,    57,    58,    59,    -1,   144,   145,   146,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
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
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,   214,    -1,
     216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,
      45,    -1,   228,   229,   230,    -1,    51,   233,   234,   235,
     236,   237,    57,    58,    59,    -1,   144,   145,   146,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,
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
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,   214,
      -1,   216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,
     225,    45,    -1,   228,   229,   230,    -1,    51,   233,   234,
     235,   236,   237,    57,    58,    59,    -1,   144,   145,   146,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
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
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
     214,    -1,   216,   217,   218,   219,    -1,    -1,    -1,    -1,
     224,   225,    45,    -1,   228,   229,   230,    -1,    51,   233,
     234,   235,   236,   237,    57,    58,    59,    -1,   144,   145,
     146,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,
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
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,
      -1,   214,    -1,   216,   217,   218,   219,    -1,    -1,    -1,
      -1,   224,   225,    45,    -1,   228,   229,   230,    -1,    51,
     233,   234,   235,   236,   237,    57,    58,    59,    -1,   144,
     145,   146,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    -1,    -1,    80,    -1,
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
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
      -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,    -1,
      -1,    -1,   224,   225,    45,    -1,   228,   229,   230,    -1,
      51,   233,   234,   235,   236,   237,    57,    58,    59,    -1,
     144,   145,   146,    64,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      91,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,   242,   160,
     161,    -1,   163,   164,    -1,    -1,    -1,   168,   169,    -1,
     171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,
     181,   182,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,
      -1,    -1,    -1,   224,   225,    -1,    -1,   228,   229,   230,
      -1,    -1,   233,   234,   235,   236,   237,   144,   145,   146,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,
      -1,    -1,   112,   113,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,   144,   145,   146,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,   144,   145,   146,   112,
     113,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,   144,   145,   146,   112,   113,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   244,    -1,    -1,    -1,    -1,   144,   145,   146,   112,
     113,    -1,    -1,    -1,   244,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,
      -1,   144,   145,   146,   112,   113,    -1,    -1,    -1,   244,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,   244,    -1,    -1,    -1,    -1,   144,   145,   146,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
      -1,    -1,    -1,    -1,   112,   113,   244,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   144,   145,   146,   112,
     113,   244,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
      -1,   144,   145,   146,    -1,    -1,   244,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,   244,   112,   113,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     144,   145,   146,   112,   113,    -1,   244,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   144,   145,   146,    -1,   112,
     113,   244,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     244,   144,   145,   146,   112,   113,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     244,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   112,
     113,    -1,    -1,   244,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,   244,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,   112,   113,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   144,   145,   146,   112,   113,    -1,    -1,
      -1,   244,    -1,    -1,    -1,    -1,   144,   145,   146,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,    -1,    -1,   112,   113,    -1,   244,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   144,   145,   146,   112,   113,
      -1,   244,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,   112,   113,
     144,   145,   146,    -1,    -1,    -1,   244,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   112,   113,   244,    -1,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,   144,   145,
     146,   112,   113,    -1,    -1,   244,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,
     244,   112,   113,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     244,   112,   113,   144,   145,   146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   244,    -1,
      -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,    -1,
      -1,   244,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   244,   112,   113,    -1,    -1,   144,   145,
     146,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,
      -1,    -1,    -1,   244,   112,   113,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,   244,    -1,    -1,   144,   145,   146,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
     112,   113,    -1,   144,   145,   146,    -1,    -1,   244,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,    -1,   244,   112,   113,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,   144,
     145,   146,   112,   113,    -1,    -1,   244,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,   244,   144,   145,   146,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
     242,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
     144,   145,   146,    -1,    -1,    -1,    -1,   242,    -1,    -1,
      -1,   112,   113,   144,   145,   146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,   112,   113,
      -1,    -1,   242,   144,   145,   146,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,
     144,   145,   146,   112,   113,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,   242,   112,   113,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,
      -1,   242,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   112,   113,    -1,    -1,   242,   144,
     145,   146,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,
      -1,    -1,    -1,   242,   112,   113,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   144,   145,   146,   112,
     113,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   112,   113,    -1,    -1,   242,    -1,    -1,
      -1,   144,   145,   146,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   242,   144,   145,   146,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
     144,   145,   146,    -1,   242,    -1,    -1,    -1,   112,   113,
      -1,    -1,    -1,   144,   145,   146,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,   242,
     144,   145,   146,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,
      -1,   242,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   112,   113,    -1,    -1,    -1,    -1,   242,   144,
     145,   146,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,   144,   145,   146,   112,   113,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,   144,
     145,   146,   242,    -1,    -1,    -1,   112,   113,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,   242,   144,   145,
     146,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   112,   113,
      -1,    -1,   242,   144,   145,   146,    -1,    -1,    -1,    -1,
      -1,   112,   113,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
     144,   145,   146,    -1,    -1,    -1,    -1,   242,   112,   113,
      -1,    -1,    -1,   144,   145,   146,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,   112,   113,    -1,   242,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   242,   112,   113,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,   242,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,
      -1,   242,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,   242,   144,
     145,   146,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   144,   145,
     146,   112,   113,   242,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,   144,   145,   146,   112,   113,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,   242,   144,   145,
     146,    -1,    -1,    -1,   112,   113,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   144,   145,   146,   242,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,   112,   113,    -1,
      -1,   242,   144,   145,   146,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,    -1,    -1,    -1,    -1,   242,   112,   113,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,   112,   113,   242,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   112,   113,    -1,    -1,
     242,    -1,    -1,    -1,   144,   145,   146,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   144,   145,
     146,   112,   113,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,   242,    -1,    -1,
      -1,   112,   113,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,   242,   144,   145,   146,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   112,   113,    -1,    -1,   242,    -1,   144,   145,
     146,    -1,    -1,    -1,    -1,   112,   113,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,
      -1,   242,   112,   113,    -1,    -1,    -1,   144,   145,   146,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,
      -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,   242,   112,   113,   144,
     145,   146,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,   112,   113,    -1,   242,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,   144,   145,   146,   112,   113,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,   242,    -1,   144,
     145,   146,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,   242,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,   112,   113,
      -1,    -1,   242,   144,   145,   146,    -1,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,   112,   113,    -1,    -1,   242,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   242,    -1,    -1,    -1,   144,   145,   146,    81,    -1,
     112,   113,    -1,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,   242,   144,   145,   146,    81,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,   242,    -1,
      -1,   144,   145,   146,    81,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,   242,    -1,   112,   113,    -1,   144,   145,
     146,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   144,   145,   146,
     112,   113,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,   144,   145,   146,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
      83,    -1,    -1,   112,   113,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,   144,   145,   146,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    45,    51,    57,    58,    59,    64,
      68,    73,    74,    75,    76,    80,    86,    89,    90,    91,
      93,    97,    98,    99,   100,   101,   102,   103,   141,   148,
     149,   158,   160,   161,   163,   164,   168,   169,   171,   173,
     176,   177,   178,   180,   181,   182,   214,   216,   217,   218,
     219,   224,   225,   228,   229,   230,   233,   234,   235,   236,
     237,   246,   248,   250,   253,   254,   255,   256,   263,   264,
     271,   272,   273,   284,    22,   248,   243,   243,   243,     7,
       8,   243,   243,   243,   243,   243,   243,   243,   243,   243,
       7,     8,     9,     4,     5,     6,     9,    10,    16,    17,
      18,    33,    57,    60,    61,    62,    63,    64,    66,    93,
     104,   105,   106,   109,   110,   111,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   140,   142,   143,   147,   150,   151,   152,   153,   154,
     155,   156,   157,   160,   167,   170,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   215,   216,   217,
     224,   225,   231,   232,   238,   239,   240,   243,   251,   252,
     253,   254,   256,   267,   268,   269,    10,   252,   252,   252,
     252,   269,     7,     8,     9,    98,     4,     4,   269,     3,
      84,   249,   250,   269,   269,   270,   255,   256,   257,   258,
       7,     8,     9,    10,   261,   262,   255,   272,     9,    93,
     272,     8,    10,   268,   268,     7,     8,     9,   259,   260,
     252,   252,   165,   252,   252,   252,   166,   252,   166,   167,
     252,   252,   166,   252,   252,   252,   252,   243,   243,     6,
     257,   276,   277,    19,    36,    37,   220,   242,   252,   268,
     274,   275,     7,    10,    10,   252,   252,   252,   252,     0,
       3,    21,    22,   247,    24,    38,    39,    40,    41,    42,
      43,    44,    24,    24,   257,   242,    21,   247,   252,   252,
     244,   252,   252,    51,   257,   278,   279,   257,   280,   281,
     281,   281,   270,   270,   270,   270,   242,   242,   242,   243,
     243,   243,   243,   243,     4,     5,   253,   254,   252,   252,
     243,   243,   243,   252,   252,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,    36,   243,   243,   252,   243,   243,   268,   252,   243,
     243,    10,   252,   252,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   112,   113,   144,
     145,   146,    24,    25,    26,    27,    30,    31,    32,   243,
     242,    24,    78,    24,    87,    24,    87,    87,     7,     8,
       9,    21,    82,   249,   249,   269,     3,    84,   247,   247,
     242,   242,   243,   243,   243,   243,   242,   243,   262,   247,
     243,   242,   242,   242,   242,   252,   242,   242,   242,   252,
     242,   252,   252,   242,   242,   252,   242,   242,   242,   242,
     252,   252,   242,   277,   242,   243,   275,   242,   243,   243,
     242,   242,   242,    22,   248,   250,   252,   252,   252,   252,
     252,   252,   252,   252,   268,   269,    24,   272,   242,   244,
     242,   244,    24,   242,   244,   244,   257,   242,   244,   242,
     244,   244,   244,   244,   244,   244,   244,     7,     8,     9,
     252,   270,   270,   270,   268,   268,   268,     7,     8,     9,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   268,   268,   252,
     268,   268,   268,   268,   268,   243,   252,   252,   252,   252,
     242,   252,   252,   242,   242,   244,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   268,   268,   268,   268,   268,   268,
     268,   252,   252,   252,   247,   252,     7,   252,     8,     9,
      24,    87,    24,    87,    87,   249,   249,    21,    69,   247,
     249,   269,   250,   249,   270,   258,   252,   252,   252,   252,
     262,   244,    96,   265,   266,   252,   260,   260,   252,   252,
     242,   252,   252,   252,   242,   252,   242,   242,   252,   252,
     242,   252,   252,   252,   252,   244,   244,   277,   277,   252,
       7,   252,   252,   252,   252,   252,    21,   247,   269,   252,
     252,    67,   252,     7,     8,     9,   279,   247,   281,   247,
     247,   247,   244,   244,   244,   244,   244,   244,   244,   243,
     243,   243,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   242,   242,   242,   242,   244,   252,   244,   242,
     242,   242,   252,   244,   244,    10,   252,   244,    85,   282,
     283,    83,   243,    83,   243,   243,   252,     7,   252,     8,
       9,    21,    21,    69,   249,   247,    72,   242,   244,   242,
     244,   242,   244,   242,    24,   257,   247,    95,   244,   242,
     242,   252,   242,   252,   242,   252,   252,   242,   242,   252,
     242,   242,   242,   242,   244,   242,   244,   244,   242,   242,
     244,   244,   243,   244,   249,   249,   249,   249,   244,   244,
     244,   268,   252,   252,   252,   244,   268,   252,   252,   242,
     270,    79,   247,   282,   252,   244,   252,   244,   244,    83,
     243,    83,   243,   243,    69,    71,    69,    71,   249,    21,
     252,   252,   252,     8,    67,   266,   252,   252,   252,   242,
     252,   242,   242,   252,   252,   242,   252,   252,   252,   252,
       7,   242,   242,   252,   252,   268,   247,   247,   247,   247,
     242,   242,   242,   242,   244,   244,   242,   244,   244,   242,
     244,   252,   247,   249,    70,    81,   247,   247,    81,   247,
     247,   247,   252,   244,   252,   244,   244,    21,    21,    21,
     244,   244,   244,   244,   243,   242,   252,   242,   252,   252,
     242,   242,   252,   242,   242,   242,   252,   252,   242,   242,
     244,    50,    49,    49,    49,    33,   251,   251,   251,   252,
     252,   252,   242,   249,   247,   252,   249,   249,   252,   249,
     249,   249,    81,   247,   247,    81,   247,   247,   247,   249,
     249,   268,   252,   242,   252,   242,   242,   252,   252,   268,
     268,   268,   242,   242,   252,   252,   244,   244,   244,   244,
     244,   244,   252,   247,    70,   247,   247,   247,   247,   247,
     247,   247,   252,   249,   249,   252,   249,   249,   249,    21,
      21,   244,   252,   252,   252,   242,   252,   252,   242,   249,
      77,    77,   249,    77,    77,    77,   247,   247,   247,   247,
     247,   247,   247,    71,    71,   242,   242,   252,   242,   242,
     252,   247,   247,   249,    77,    77,   249,    77,    77,    77,
     252,   252,   242,   252,   252,   242,    77,    77,   247,   247,
     242,   242,   252,   242,   242,   252,    77,    77,   252,   252,
     252,   252,   242,   242,   252,   252,   242,   242,   252,   252,
     242,   242,   252,   252
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   245,   246,   247,   247,   248,   248,   248,   248,   248,
     248,   249,   249,   249,   249,   250,   250,   250,   250,   250,
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
       0,     2,     1,     1,     1,     1,     3,     3,     4,     3,
       4,     1,     3,     3,     4,     1,     1,     1,     2,     4,
       2,     1,     1,     4,     4,     4,     4,     2,     2,     1,
       1,     2,     1,     1,     1,     2,     3,     4,     2,     4,
       2,     8,     9,     2,     2,     2,     2,     3,     4,     6,
       4,     4,     1,     1,     4,     6,     5,     7,     6,    10,
       6,    10,     4,     3,     5,     4,     4,     4,    10,    10,
      10,    11,    11,    11,    10,    10,    12,    12,    11,    11,
      13,    13,     7,     9,     1,     2,     1,    13,    13,     8,
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
       3,     5,     1,     2,     8,     8,     8,     8
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
#line 4561 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 5: /* top_level_statement_list: statement  */
#line 110 "DARIC.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 4567 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 6: /* top_level_statement_list: top_level_statement_list sep statement  */
#line 111 "DARIC.y"
                                             { (yyval.ast) = statement_link((yyvsp[-2].ast), (yyvsp[0].ast));  }
#line 4573 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 7: /* top_level_statement_list: LINE_NUMBER COLON NL  */
#line 113 "DARIC.y"
                           { (yyval.ast) = linenumber((yyvsp[-2].v_int)); yylineno = (yyvsp[-2].v_int); }
#line 4579 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 8: /* top_level_statement_list: top_level_statement_list LINE_NUMBER COLON NL  */
#line 114 "DARIC.y"
                                                    { (yyval.ast) = statement_link((yyvsp[-3].ast), linenumber((yyvsp[-2].v_int))); yylineno = (yyvsp[-2].v_int); }
#line 4585 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 9: /* top_level_statement_list: LINE_NUMBER top_level_statement_list sep  */
#line 116 "DARIC.y"
                                               { (yyval.ast) = statement_link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast)); yylineno = (yyvsp[-2].v_int); }
#line 4591 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 10: /* top_level_statement_list: top_level_statement_list LINE_NUMBER top_level_statement_list sep  */
#line 117 "DARIC.y"
                                                                        { (yyval.ast) = statement_link((yyvsp[-3].ast), statement_link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast))); yylineno = (yyvsp[-2].v_int);  }
#line 4597 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 11: /* statement_list: statement  */
#line 121 "DARIC.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 4603 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 12: /* statement_list: statement_list sep statement  */
#line 122 "DARIC.y"
                                   { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast));  }
#line 4609 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 13: /* statement_list: LINE_NUMBER statement_list sep  */
#line 123 "DARIC.y"
                                     { (yyval.ast) = link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast)); yylineno = (yyvsp[-2].v_int); }
#line 4615 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 14: /* statement_list: statement_list LINE_NUMBER statement_list sep  */
#line 124 "DARIC.y"
                                                    { (yyval.ast) = link((yyvsp[-3].ast), link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast))); yylineno = (yyvsp[-2].v_int);  }
#line 4621 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 18: /* statement: CHAIN expression_string  */
#line 131 "DARIC.y"
                              { (yyval.ast) = token1(CHAIN, (yyvsp[0].ast)); }
#line 4627 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 19: /* statement: CHAIN expression_string ',' plain_variable_list  */
#line 132 "DARIC.y"
                                                      { (yyval.ast) = token2(CHAIN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4633 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 20: /* statement: EXPECT plain_variable_list  */
#line 133 "DARIC.y"
                                 { (yyval.ast) = token1(EXPECT, (yyvsp[0].ast)); }
#line 4639 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 21: /* statement: END  */
#line 134 "DARIC.y"
          { (yyval.ast) = token(END); }
#line 4645 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 22: /* statement: PROCEDURE  */
#line 135 "DARIC.y"
                { (yyval.ast) = token1(CALLPROC, string((yyvsp[0].v_string))); }
#line 4651 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 23: /* statement: PROCEDURE '(' expression_list ')'  */
#line 136 "DARIC.y"
                                        { (yyval.ast) = token2(CALLPROC, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4657 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 24: /* statement: FN_INTEGER '(' expression_list ')'  */
#line 137 "DARIC.y"
                                         { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4663 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 25: /* statement: FN_REAL '(' expression_list ')'  */
#line 138 "DARIC.y"
                                      { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4669 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 26: /* statement: FN_STRING '(' expression_list ')'  */
#line 139 "DARIC.y"
                                        { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4675 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 27: /* statement: DATA expression_list  */
#line 140 "DARIC.y"
                           { (yyval.ast) = token1(DATA, (yyvsp[0].ast)); }
#line 4681 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 28: /* statement: READ variable_list  */
#line 141 "DARIC.y"
                         { (yyval.ast) = token1(READ, (yyvsp[0].ast)); }
#line 4687 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 29: /* statement: RESTORE  */
#line 142 "DARIC.y"
              { (yyval.ast) = token(RESTORE); }
#line 4693 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 30: /* statement: RETURN  */
#line 143 "DARIC.y"
             { (yyval.ast) = token(RETURN); }
#line 4699 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 31: /* statement: RETURN expression  */
#line 144 "DARIC.y"
                        { (yyval.ast) = token1(RETURN_WITH_VALUE, (yyvsp[0].ast)); }
#line 4705 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 32: /* statement: TRACEON  */
#line 145 "DARIC.y"
              { (yyval.ast) = token(TRACEON); }
#line 4711 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 33: /* statement: TRACEOFF  */
#line 146 "DARIC.y"
               { (yyval.ast) = token(TRACEOFF); }
#line 4717 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 34: /* statement: BREAKPOINT  */
#line 147 "DARIC.y"
                 { (yyval.ast) = token(BREAKPOINT); }
#line 4723 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 35: /* statement: DIM dim_variable_list  */
#line 149 "DARIC.y"
                            { (yyval.ast) = token1(DIM, (yyvsp[0].ast)); }
#line 4729 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 36: /* statement: LOCAL DIM dim_variable_list  */
#line 150 "DARIC.y"
                                  { (yyval.ast) = token1(LOCALDIM, (yyvsp[0].ast)); }
#line 4735 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 37: /* statement: BPUT expression_numeric ',' expression_numeric  */
#line 152 "DARIC.y"
                                                     { (yyval.ast) = token2(BPUT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4741 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 38: /* statement: BGET expression_numeric  */
#line 153 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 4747 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 39: /* statement: PTR expression_numeric E expression_numeric  */
#line 154 "DARIC.y"
                                                  { (yyval.ast) = token2(PTRA, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4753 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 40: /* statement: CLOSE expression_numeric  */
#line 155 "DARIC.y"
                               { (yyval.ast) = token1(CLOSE, (yyvsp[0].ast)); }
#line 4759 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 41: /* statement: STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 156 "DARIC.y"
                                                                    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(GLOBAL)); }
#line 4765 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 42: /* statement: LOCAL STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 157 "DARIC.y"
                                                                          { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(LOCAL)); }
#line 4771 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 43: /* statement: OSCLI expression_string  */
#line 159 "DARIC.y"
                              { (yyval.ast) = token1(OSCLI, (yyvsp[0].ast)); }
#line 4777 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 44: /* statement: GOSUB LITERAL_INT  */
#line 161 "DARIC.y"
                        { (yyval.ast) = token1(GOSUB, integer((yyvsp[0].v_int))); }
#line 4783 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 45: /* statement: GOTO LITERAL_INT  */
#line 162 "DARIC.y"
                       { (yyval.ast) = token1(GOTO, integer((yyvsp[0].v_int))); }
#line 4789 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 46: /* statement: INPUT_ expression_input_list  */
#line 164 "DARIC.y"
                                   { (yyval.ast) = token1(INPUT_, (yyvsp[0].ast)); }
#line 4795 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 47: /* statement: INPUT_ LITERAL_STRING expression_input_list  */
#line 165 "DARIC.y"
                                                  { (yyval.ast) = token2(INPUT_NOQUESTIONMARK, string((yyvsp[-1].v_string)), (yyvsp[0].ast)); }
#line 4801 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 48: /* statement: INPUT_ LITERAL_STRING ',' expression_input_list  */
#line 166 "DARIC.y"
                                                      { (yyval.ast) = token2(INPUT_, string((yyvsp[-2].v_string)), (yyvsp[0].ast)); }
#line 4807 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 49: /* statement: MOUSE INTEGER_VARIABLE ',' INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 167 "DARIC.y"
                                                                       { (yyval.ast) = token3(MOUSE, string((yyvsp[-4].v_string)), string((yyvsp[-2].v_string)), string((yyvsp[0].v_string)) ); }
#line 4813 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 50: /* statement: INKEY '(' expression_numeric ')'  */
#line 169 "DARIC.y"
                                       { (yyval.ast) = token1(SINKEY, (yyvsp[-1].ast)); }
#line 4819 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 51: /* statement: INKEYS '(' expression_numeric ')'  */
#line 170 "DARIC.y"
                                        { (yyval.ast) = token1(SINKEYS, (yyvsp[-1].ast)); }
#line 4825 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 52: /* statement: GET  */
#line 171 "DARIC.y"
          { (yyval.ast) = token(GET_S); }
#line 4831 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 53: /* statement: GETS  */
#line 172 "DARIC.y"
           { (yyval.ast) = token(GETS_S); }
#line 4837 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 54: /* statement: IF expression statement_list NL  */
#line 174 "DARIC.y"
                                      { (yyval.ast) = token2(IF, (yyvsp[-2].ast), (yyvsp[-1].ast)); }
#line 4843 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 55: /* statement: IF expression statement_list ELSE statement_list NL  */
#line 175 "DARIC.y"
                                                          { (yyval.ast) = token3(IF, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4849 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 56: /* statement: IF expression THEN statement_list NL  */
#line 176 "DARIC.y"
                                           { (yyval.ast) = token2(IF, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4855 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 57: /* statement: IF expression THEN statement_list ELSE statement_list NL  */
#line 177 "DARIC.y"
                                                               { (yyval.ast) = token3(IF, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4861 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 58: /* statement: IF expression NL statement_list NL ENDIF  */
#line 179 "DARIC.y"
                                               { (yyval.ast) = token2(IF, (yyvsp[-4].ast), (yyvsp[-2].ast)); }
#line 4867 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 59: /* statement: IF expression NL statement_list NL ELSE NL statement_list NL ENDIF  */
#line 180 "DARIC.y"
                                                                         { (yyval.ast) = token3(IF, (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-2].ast)); }
#line 4873 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 60: /* statement: IF expression THEN statement_list NL ENDIF  */
#line 181 "DARIC.y"
                                                 { (yyval.ast) = token2(IF, (yyvsp[-4].ast), (yyvsp[-2].ast)); }
#line 4879 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 61: /* statement: IF expression THEN statement_list NL ELSE NL statement_list NL ENDIF  */
#line 182 "DARIC.y"
                                                                           { (yyval.ast) = token3(IF, (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-2].ast)); }
#line 4885 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 62: /* statement: REPEAT statement_list UNTIL expression  */
#line 184 "DARIC.y"
                                             { (yyval.ast) = token2(REPEAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4891 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 63: /* statement: REPEAT UNTIL expression  */
#line 185 "DARIC.y"
                              { (yyval.ast) = token2(REPEAT, NULL, (yyvsp[0].ast)); }
#line 4897 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 64: /* statement: WHILE expression sep statement_list ENDWHILE  */
#line 186 "DARIC.y"
                                                   { (yyval.ast) = token2(WHILE, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4903 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 65: /* statement: SWAP INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 188 "DARIC.y"
                                                 { (yyval.ast) = token2(SWAP_I, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4909 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 66: /* statement: SWAP VARIABLE ',' VARIABLE  */
#line 189 "DARIC.y"
                                 { (yyval.ast) = token2(SWAP_F, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4915 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 67: /* statement: SWAP STRING_VARIABLE ',' STRING_VARIABLE  */
#line 190 "DARIC.y"
                                                { (yyval.ast) = token2(SWAP_S, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4921 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 68: /* statement: FOR VARIABLE IN_ VARIABLE '(' ')' sep statement_list sep NEXT  */
#line 193 "DARIC.y"
                                                                                             { (yyval.ast) = token4typed(FORIN, string((yyvsp[-8].v_string)), string((yyvsp[-6].v_string)), (yyvsp[-2].ast), token(GLOBAL), Type::REAL); }
#line 4927 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 69: /* statement: FOR INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' sep statement_list sep NEXT  */
#line 194 "DARIC.y"
                                                                                             { (yyval.ast) = token4typed(FORIN, string((yyvsp[-8].v_string)), string((yyvsp[-6].v_string)), (yyvsp[-2].ast), token(GLOBAL), Type::INTEGER); }
#line 4933 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 70: /* statement: FOR STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' sep statement_list sep NEXT  */
#line 195 "DARIC.y"
                                                                                             { (yyval.ast) = token4typed(FORIN, string((yyvsp[-8].v_string)), string((yyvsp[-6].v_string)), (yyvsp[-2].ast), token(GLOBAL), Type::STRING); }
#line 4939 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 71: /* statement: FOR LOCAL VARIABLE IN_ VARIABLE '(' ')' sep statement_list sep NEXT  */
#line 196 "DARIC.y"
                                                                                             { (yyval.ast) = token4typed(FORIN, string((yyvsp[-8].v_string)), string((yyvsp[-6].v_string)), (yyvsp[-2].ast), token(LOCAL), Type::REAL); }
#line 4945 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 72: /* statement: FOR LOCAL INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' sep statement_list sep NEXT  */
#line 197 "DARIC.y"
                                                                                             { (yyval.ast) = token4typed(FORIN, string((yyvsp[-8].v_string)), string((yyvsp[-6].v_string)), (yyvsp[-2].ast), token(LOCAL), Type::INTEGER); }
#line 4951 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 73: /* statement: FOR LOCAL STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' sep statement_list sep NEXT  */
#line 198 "DARIC.y"
                                                                                             { (yyval.ast) = token4typed(FORIN, string((yyvsp[-8].v_string)), string((yyvsp[-6].v_string)), (yyvsp[-2].ast), token(LOCAL), Type::STRING); }
#line 4957 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 74: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric sep statement_list sep NEXT  */
#line 201 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token5typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(GLOBAL), Type::INTEGER); }
#line 4963 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 75: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric sep statement_list sep NEXT  */
#line 202 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token5typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(GLOBAL), Type::REAL); }
#line 4969 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 76: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric sep statement_list sep NEXT  */
#line 203 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token6typed(FOR, string((yyvsp[-10].v_string)), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(GLOBAL), Type::INTEGER); }
#line 4975 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 77: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric sep statement_list sep NEXT  */
#line 204 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token6typed(FOR, string((yyvsp[-10].v_string)), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(GLOBAL), Type::REAL); }
#line 4981 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 78: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric sep statement_list sep NEXT  */
#line 205 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token5typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(LOCAL), Type::INTEGER); }
#line 4987 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 79: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric sep statement_list sep NEXT  */
#line 206 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token5typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(LOCAL), Type::REAL); }
#line 4993 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 80: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric sep statement_list sep NEXT  */
#line 207 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token6typed(FOR, string((yyvsp[-10].v_string)), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(LOCAL), Type::INTEGER); }
#line 4999 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 81: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric sep statement_list sep NEXT  */
#line 208 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token6typed(FOR, string((yyvsp[-10].v_string)), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(LOCAL), Type::REAL); }
#line 5005 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 82: /* statement: CASE expression OF sep when_list sep ENDCASE  */
#line 210 "DARIC.y"
                                                   { (yyval.ast) = token2(CASE, (yyvsp[-5].ast), (yyvsp[-2].ast));  }
#line 5011 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 83: /* statement: CASE expression OF sep when_list OTHERWISE statement_list sep ENDCASE  */
#line 211 "DARIC.y"
                                                                            { (yyval.ast) = token3(CASE, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-2].ast));  }
#line 5017 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 84: /* statement: PRINT  */
#line 213 "DARIC.y"
            { (yyval.ast) = token(PRINT); }
#line 5023 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 85: /* statement: PRINT expression_print_list  */
#line 214 "DARIC.y"
                                  { (yyval.ast) = token1(PRINT, (yyvsp[0].ast)); }
#line 5029 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 86: /* statement: RENDERFRAME  */
#line 216 "DARIC.y"
                  { (yyval.ast) = token(RENDERFRAME); }
#line 5035 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 87: /* statement: CREATEVERTEX TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 219 "DARIC.y"
                                                      { (yyval.ast) = token6(CREATEVERTEX, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5041 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 88: /* statement: CREATETRIANGLE TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 222 "DARIC.y"
                                                  { (yyval.ast) = token6(CREATETRIANGLE, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5047 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 89: /* statement: TRANSLATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 223 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TRANSLATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5053 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 90: /* statement: ROTATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 224 "DARIC.y"
                                                                                                      { (yyval.ast) = token4(ROTATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5059 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 91: /* statement: SCALE expression_numeric ',' expression_numeric  */
#line 225 "DARIC.y"
                                                      { (yyval.ast) = token2(SCALE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5065 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 92: /* statement: DELETEOBJECT expression_numeric  */
#line 226 "DARIC.y"
                                      { (yyval.ast) = token1(DELETEOBJECT, (yyvsp[0].ast)); }
#line 5071 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 93: /* statement: CLS  */
#line 228 "DARIC.y"
          { (yyval.ast) = token(CLS); }
#line 5077 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 94: /* statement: COLOUR expression_numeric  */
#line 229 "DARIC.y"
                                { (yyval.ast) = token1(COLOUR, (yyvsp[0].ast)); }
#line 5083 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 95: /* statement: COLOUR expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 230 "DARIC.y"
                                                                              { (yyval.ast) = token3(COLOUR, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5089 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 96: /* statement: COLOURBG expression_numeric  */
#line 231 "DARIC.y"
                                  { (yyval.ast) = token1(COLOURBG, (yyvsp[0].ast)); }
#line 5095 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 97: /* statement: COLOURBG expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 232 "DARIC.y"
                                                                                { (yyval.ast) = token3(COLOURBG, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5101 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 98: /* statement: GRAPHICS expression_numeric ',' expression_numeric  */
#line 233 "DARIC.y"
                                                         { (yyval.ast) = token2(GRAPHICS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5107 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 99: /* statement: GRAPHICS BANKED expression_numeric ',' expression_numeric  */
#line 234 "DARIC.y"
                                                                { (yyval.ast) = token2(BANKED, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5113 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 100: /* statement: GRAPHICS  */
#line 235 "DARIC.y"
               { (yyval.ast) = token(GRAPHICS); }
#line 5119 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 101: /* statement: GRAPHICS BANKED  */
#line 236 "DARIC.y"
                      { (yyval.ast) = token(BANKED); }
#line 5125 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 102: /* statement: FLIP  */
#line 237 "DARIC.y"
           { (yyval.ast) = token(FLIP); }
#line 5131 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 103: /* statement: CIRCLE expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 238 "DARIC.y"
                                                                              { (yyval.ast) = token3(CIRCLE, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5137 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 104: /* statement: CIRCLE FILL expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 239 "DARIC.y"
                                                                                   { (yyval.ast) = token3(CIRCLEFILL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5143 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 105: /* statement: LINE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 240 "DARIC.y"
                                                                                                   { (yyval.ast) = token4(LINE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5149 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 106: /* statement: RECTANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 241 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(RECTANGLE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5155 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 107: /* statement: RECTANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 242 "DARIC.y"
                                                                                                             { (yyval.ast) = token4(RECTANGLEFILL, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5161 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 108: /* statement: TRIANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 243 "DARIC.y"
                                                                                                                                                     { (yyval.ast) = token6(TRIANGLE, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5167 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 109: /* statement: TRIANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 244 "DARIC.y"
                                                                                                                                                          { (yyval.ast) = token6(TRIANGLEFILL, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5173 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 110: /* statement: TRIANGLE SHADED expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 247 "DARIC.y"
                                                                                         { (yyval.ast) = token9(TRIANGLESHADED, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5179 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 111: /* statement: PLOT expression_numeric ',' expression_numeric  */
#line 248 "DARIC.y"
                                                     { (yyval.ast) = token2(PLOT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5185 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 112: /* statement: CLIPON expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 249 "DARIC.y"
                                                                                                     { (yyval.ast) = token4(CLIPON, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5191 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 113: /* statement: CLIPOFF  */
#line 250 "DARIC.y"
              { (yyval.ast) = token(CLIPOFF); }
#line 5197 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 114: /* statement: TEXT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 251 "DARIC.y"
                                                                                                  { (yyval.ast) = token4(TEXT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5203 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 115: /* statement: TEXTRIGHT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 252 "DARIC.y"
                                                                                                       { (yyval.ast) = token4(TEXTRIGHT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5209 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 116: /* statement: TEXTCENTRE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 253 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TEXTCENTRE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5215 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 117: /* statement: SHOWFPS  */
#line 254 "DARIC.y"
              { (yyval.ast) = token(SHOWFPS); }
#line 5221 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 118: /* number: LITERAL_INT  */
#line 258 "DARIC.y"
                  { (yyval.ast) = integer((yyvsp[0].v_int)); }
#line 5227 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 119: /* number: MINUS LITERAL_INT  */
#line 259 "DARIC.y"
                                  { (yyval.ast) = integer(-(yyvsp[0].v_int)); }
#line 5233 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 120: /* number: LITERAL_REAL  */
#line 260 "DARIC.y"
                   { (yyval.ast) = real((yyvsp[0].v_real)); }
#line 5239 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 121: /* number: MINUS LITERAL_REAL  */
#line 261 "DARIC.y"
                                   { (yyval.ast) = real(-(yyvsp[0].v_real)); }
#line 5245 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 122: /* expression_numeric: number  */
#line 265 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 5251 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 123: /* expression_numeric: variable_integer  */
#line 266 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5257 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 124: /* expression_numeric: variable_real  */
#line 267 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5263 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 125: /* expression_numeric: '(' expression_numeric ')'  */
#line 268 "DARIC.y"
                                 { (yyval.ast) = (yyvsp[-1].ast); }
#line 5269 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 126: /* expression_numeric: FLOAT_ '(' expression_numeric ')'  */
#line 269 "DARIC.y"
                                        { (yyval.ast) = token1(FLOAT_, (yyvsp[-1].ast)); }
#line 5275 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 127: /* expression_numeric: INT_ '(' expression_numeric ')'  */
#line 270 "DARIC.y"
                                      { (yyval.ast) = token1(INT_, (yyvsp[-1].ast)); }
#line 5281 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 128: /* expression_numeric: MINUS variable_integer  */
#line 271 "DARIC.y"
                             { (yyval.ast) = token2(MINUS, integer(0), (yyvsp[0].ast)); }
#line 5287 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 129: /* expression_numeric: MINUS variable_real  */
#line 272 "DARIC.y"
                          { (yyval.ast) = token2(MINUS, real(0.0), (yyvsp[0].ast)); }
#line 5293 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 130: /* expression_numeric: expression_numeric PLUS expression_numeric  */
#line 273 "DARIC.y"
                                                 { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5299 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 131: /* expression_numeric: expression_numeric MINUS expression_numeric  */
#line 274 "DARIC.y"
                                                  { (yyval.ast) = token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5305 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 132: /* expression_numeric: expression_numeric MULTIPLY expression_numeric  */
#line 275 "DARIC.y"
                                                     { (yyval.ast) = token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5311 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 133: /* expression_numeric: expression_numeric DIVIDE expression_numeric  */
#line 276 "DARIC.y"
                                                   { (yyval.ast) = token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5317 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 134: /* expression_numeric: expression_numeric INTEGERDIVIDE expression_numeric  */
#line 277 "DARIC.y"
                                                          { (yyval.ast) = token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5323 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 135: /* expression_numeric: expression_numeric DIV expression_numeric  */
#line 278 "DARIC.y"
                                                { (yyval.ast) = token2(DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5329 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 136: /* expression_numeric: expression_numeric MOD expression_numeric  */
#line 279 "DARIC.y"
                                                { (yyval.ast) = token2(MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5335 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 137: /* expression_numeric: expression_numeric SHL expression_numeric  */
#line 280 "DARIC.y"
                                                { (yyval.ast) = token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5341 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 138: /* expression_numeric: expression_numeric SHR expression_numeric  */
#line 281 "DARIC.y"
                                                { (yyval.ast) = token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5347 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 139: /* expression_numeric: expression_numeric E expression_numeric  */
#line 282 "DARIC.y"
                                              { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5353 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 140: /* expression_numeric: expression_numeric NE expression_numeric  */
#line 283 "DARIC.y"
                                               { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5359 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 141: /* expression_numeric: expression_numeric GE expression_numeric  */
#line 284 "DARIC.y"
                                               { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5365 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 142: /* expression_numeric: expression_numeric LE expression_numeric  */
#line 285 "DARIC.y"
                                               { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5371 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 143: /* expression_numeric: expression_numeric LT expression_numeric  */
#line 286 "DARIC.y"
                                               { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5377 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 144: /* expression_numeric: expression_numeric GT expression_numeric  */
#line 287 "DARIC.y"
                                               { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5383 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 145: /* expression_numeric: expression_numeric AND expression_numeric  */
#line 288 "DARIC.y"
                                                { (yyval.ast) = token2(AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5389 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 146: /* expression_numeric: expression_numeric OR expression_numeric  */
#line 289 "DARIC.y"
                                               { (yyval.ast) = token2(OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5395 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 147: /* expression_numeric: expression_numeric EOR expression_numeric  */
#line 290 "DARIC.y"
                                                { (yyval.ast) = token2(EOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5401 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 148: /* expression_numeric: FN_INTEGER '(' expression_list ')'  */
#line 292 "DARIC.y"
                                         { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5407 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 149: /* expression_numeric: FN_REAL '(' expression_list ')'  */
#line 293 "DARIC.y"
                                      { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5413 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 150: /* expression_numeric: DIM '(' VARIABLE '(' ')' ',' number ')'  */
#line 295 "DARIC.y"
                                              { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::REAL), (yyvsp[-1].ast)); }
#line 5419 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 151: /* expression_numeric: DIM '(' INTEGER_VARIABLE '(' ')' ',' number ')'  */
#line 296 "DARIC.y"
                                                      { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::INTEGER), (yyvsp[-1].ast)); }
#line 5425 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 152: /* expression_numeric: DIM '(' STRING_VARIABLE '(' ')' ',' number ')'  */
#line 297 "DARIC.y"
                                                     { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::STRING), (yyvsp[-1].ast)); }
#line 5431 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 153: /* expression_numeric: PTR expression_numeric  */
#line 299 "DARIC.y"
                             { (yyval.ast) = token1(PTR, (yyvsp[0].ast)); }
#line 5437 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 154: /* expression_numeric: GET  */
#line 301 "DARIC.y"
          { (yyval.ast) = token(GET); }
#line 5443 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 155: /* expression_numeric: INKEY '(' expression_numeric ')'  */
#line 302 "DARIC.y"
                                       { (yyval.ast) = token1(INKEY, (yyvsp[-1].ast)); }
#line 5449 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 156: /* expression_numeric: BOOLTRUE  */
#line 304 "DARIC.y"
               { (yyval.ast) = integer(1); }
#line 5455 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 157: /* expression_numeric: BOOLFALSE  */
#line 305 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5461 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 158: /* expression_numeric: TIME  */
#line 306 "DARIC.y"
           { (yyval.ast) = token(TIME); }
#line 5467 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 159: /* expression_numeric: SOLID  */
#line 308 "DARIC.y"
                        { (yyval.ast) = integer(0); }
#line 5473 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 160: /* expression_numeric: WIREFRAME  */
#line 309 "DARIC.y"
                        { (yyval.ast) = integer(1); }
#line 5479 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 161: /* expression_numeric: SHADED  */
#line 310 "DARIC.y"
                        { (yyval.ast) = integer(2); }
#line 5485 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 162: /* expression_numeric: FILLEDWIREFRAME  */
#line 311 "DARIC.y"
                        { (yyval.ast) = integer(3); }
#line 5491 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 163: /* expression_numeric: CREATESHAPE TYPE_VARIABLE ',' TYPE_VARIABLE  */
#line 313 "DARIC.y"
                                                  { (yyval.ast) = token2(CREATESHAPE, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 5497 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 164: /* expression_numeric: CREATEOBJECT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 318 "DARIC.y"
                                                  { (yyval.ast) = token9(CREATEOBJECT, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5503 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 165: /* expression_numeric: RED  */
#line 320 "DARIC.y"
                { (yyval.ast) = integer(0xFF0000); }
#line 5509 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 166: /* expression_numeric: GREEN  */
#line 321 "DARIC.y"
                { (yyval.ast) = integer(0x00FF00); }
#line 5515 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 167: /* expression_numeric: YELLOW  */
#line 322 "DARIC.y"
                { (yyval.ast) = integer(0xFFFF00); }
#line 5521 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 168: /* expression_numeric: BLUE  */
#line 323 "DARIC.y"
                { (yyval.ast) = integer(0x0000FF); }
#line 5527 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 169: /* expression_numeric: MAGENTA  */
#line 324 "DARIC.y"
                { (yyval.ast) = integer(0xFF00FF); }
#line 5533 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 170: /* expression_numeric: CYAN  */
#line 325 "DARIC.y"
                { (yyval.ast) = integer(0x00FFFF); }
#line 5539 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 171: /* expression_numeric: WHITE  */
#line 326 "DARIC.y"
                { (yyval.ast) = integer(0xFFFFFF); }
#line 5545 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 172: /* expression_numeric: BLACK  */
#line 327 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5551 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 173: /* expression_numeric: LASTPOS  */
#line 328 "DARIC.y"
                { (yyval.ast) = integer(-1); }
#line 5557 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 174: /* expression_numeric: COLOUR '(' expression_numeric ',' expression_numeric ',' expression_numeric ')'  */
#line 329 "DARIC.y"
                                                                                      { (yyval.ast) = token3(COLOUREXP, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5563 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 175: /* expression_numeric: POINT_ '(' expression_numeric ',' expression_numeric ')'  */
#line 330 "DARIC.y"
                                                               { (yyval.ast) = token2(POINT_, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5569 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 176: /* expression_numeric: SCREENWIDTH  */
#line 331 "DARIC.y"
                  { (yyval.ast) = token(SCREENWIDTH); }
#line 5575 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 177: /* expression_numeric: SCREENHEIGHT  */
#line 332 "DARIC.y"
                   { (yyval.ast) = token(SCREENHEIGHT); }
#line 5581 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 178: /* expression_numeric: LOADTYPEFACE expression_string  */
#line 333 "DARIC.y"
                                     { (yyval.ast) = token1(LOADTYPEFACE, (yyvsp[0].ast)); }
#line 5587 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 179: /* expression_numeric: CREATEFONT expression_numeric ',' expression_numeric  */
#line 334 "DARIC.y"
                                                           { (yyval.ast) = token2(CREATEFONT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5593 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 180: /* expression_numeric: MONO15  */
#line 335 "DARIC.y"
             { (yyval.ast) = integer(0); }
#line 5599 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 181: /* expression_numeric: MONO20  */
#line 336 "DARIC.y"
             { (yyval.ast) = integer(1); }
#line 5605 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 182: /* expression_numeric: MONO25  */
#line 337 "DARIC.y"
             { (yyval.ast) = integer(2); }
#line 5611 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 183: /* expression_numeric: MONO30  */
#line 338 "DARIC.y"
             { (yyval.ast) = integer(3); }
#line 5617 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 184: /* expression_numeric: MONO35  */
#line 339 "DARIC.y"
             { (yyval.ast) = integer(4); }
#line 5623 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 185: /* expression_numeric: MONO40  */
#line 340 "DARIC.y"
             { (yyval.ast) = integer(5); }
#line 5629 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 186: /* expression_numeric: MONO50  */
#line 341 "DARIC.y"
             { (yyval.ast) = integer(6); }
#line 5635 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 187: /* expression_numeric: MONO75  */
#line 342 "DARIC.y"
             { (yyval.ast) = integer(7); }
#line 5641 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 188: /* expression_numeric: MONO100  */
#line 343 "DARIC.y"
              { (yyval.ast) = integer(8); }
#line 5647 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 189: /* expression_numeric: PROP15  */
#line 344 "DARIC.y"
             { (yyval.ast) = integer(9); }
#line 5653 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 190: /* expression_numeric: PROP20  */
#line 345 "DARIC.y"
             { (yyval.ast) = integer(10); }
#line 5659 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 191: /* expression_numeric: PROP25  */
#line 346 "DARIC.y"
             { (yyval.ast) = integer(11); }
#line 5665 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 192: /* expression_numeric: PROP30  */
#line 347 "DARIC.y"
             { (yyval.ast) = integer(12); }
#line 5671 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 193: /* expression_numeric: PROP35  */
#line 348 "DARIC.y"
             { (yyval.ast) = integer(13); }
#line 5677 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 194: /* expression_numeric: PROP40  */
#line 349 "DARIC.y"
             { (yyval.ast) = integer(14); }
#line 5683 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 195: /* expression_numeric: PROP50  */
#line 350 "DARIC.y"
             { (yyval.ast) = integer(15); }
#line 5689 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 196: /* expression_numeric: PROP75  */
#line 351 "DARIC.y"
             { (yyval.ast) = integer(16); }
#line 5695 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 197: /* expression_numeric: PROP100  */
#line 352 "DARIC.y"
              { (yyval.ast) = integer(17); }
#line 5701 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 198: /* expression_numeric: SERIF15  */
#line 353 "DARIC.y"
              { (yyval.ast) = integer(18); }
#line 5707 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 199: /* expression_numeric: SERIF20  */
#line 354 "DARIC.y"
              { (yyval.ast) = integer(19); }
#line 5713 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 200: /* expression_numeric: SERIF25  */
#line 355 "DARIC.y"
              { (yyval.ast) = integer(20); }
#line 5719 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 201: /* expression_numeric: SERIF30  */
#line 356 "DARIC.y"
              { (yyval.ast) = integer(21); }
#line 5725 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 202: /* expression_numeric: SERIF35  */
#line 357 "DARIC.y"
              { (yyval.ast) = integer(22); }
#line 5731 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 203: /* expression_numeric: SERIF40  */
#line 358 "DARIC.y"
              { (yyval.ast) = integer(23); }
#line 5737 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 204: /* expression_numeric: SERIF50  */
#line 359 "DARIC.y"
              { (yyval.ast) = integer(24); }
#line 5743 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 205: /* expression_numeric: SERIF75  */
#line 360 "DARIC.y"
              { (yyval.ast) = integer(25); }
#line 5749 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 206: /* expression_numeric: SERIF100  */
#line 361 "DARIC.y"
               { (yyval.ast) = integer(26); }
#line 5755 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 207: /* expression_numeric: EOFH expression_numeric  */
#line 362 "DARIC.y"
                              { (yyval.ast) = token1(EOFH, (yyvsp[0].ast)); }
#line 5761 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 208: /* expression_numeric: BGET expression_numeric  */
#line 363 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 5767 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 209: /* expression_numeric: OPENIN '(' expression_string ')'  */
#line 364 "DARIC.y"
                                       { (yyval.ast) = token1(OPENIN, (yyvsp[-1].ast)); }
#line 5773 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 210: /* expression_numeric: OPENOUT '(' expression_string ')'  */
#line 365 "DARIC.y"
                                        { (yyval.ast) = token1(OPENOUT, (yyvsp[-1].ast)); }
#line 5779 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 211: /* expression_numeric: OPENUP '(' expression_string ')'  */
#line 366 "DARIC.y"
                                       { (yyval.ast) = token1(OPENUP, (yyvsp[-1].ast)); }
#line 5785 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 212: /* expression_numeric: RND  */
#line 368 "DARIC.y"
          { (yyval.ast) = token(RND); }
#line 5791 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 213: /* expression_numeric: RND0  */
#line 369 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(0)); }
#line 5797 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 214: /* expression_numeric: RND1  */
#line 370 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(1)); }
#line 5803 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 215: /* expression_numeric: RND '(' expression_numeric ')'  */
#line 371 "DARIC.y"
                                     { (yyval.ast) = token1(RNDRANGE, (yyvsp[-1].ast)); }
#line 5809 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 216: /* expression_numeric: PI  */
#line 373 "DARIC.y"
         { (yyval.ast) = token(PI); }
#line 5815 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 217: /* expression_numeric: NOT expression_numeric  */
#line 374 "DARIC.y"
                             { (yyval.ast) = token1(NOT, (yyvsp[0].ast)); }
#line 5821 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 218: /* expression_numeric: SQR '(' expression_numeric ')'  */
#line 375 "DARIC.y"
                                     { (yyval.ast) = token1(SQR, (yyvsp[-1].ast)); }
#line 5827 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 219: /* expression_numeric: LN '(' expression_numeric ')'  */
#line 376 "DARIC.y"
                                    { (yyval.ast) = token1(LN, (yyvsp[-1].ast)); }
#line 5833 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 220: /* expression_numeric: LOG '(' expression_numeric ')'  */
#line 377 "DARIC.y"
                                     { (yyval.ast) = token1(LOG, (yyvsp[-1].ast)); }
#line 5839 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 221: /* expression_numeric: EXP '(' expression_numeric ')'  */
#line 378 "DARIC.y"
                                     { (yyval.ast) = token1(EXP, (yyvsp[-1].ast)); }
#line 5845 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 222: /* expression_numeric: ATN '(' expression_numeric ')'  */
#line 379 "DARIC.y"
                                     { (yyval.ast) = token1(ATN, (yyvsp[-1].ast)); }
#line 5851 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 223: /* expression_numeric: TAN '(' expression_numeric ')'  */
#line 380 "DARIC.y"
                                     { (yyval.ast) = token1(TAN, (yyvsp[-1].ast)); }
#line 5857 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 224: /* expression_numeric: COS '(' expression_numeric ')'  */
#line 381 "DARIC.y"
                                     { (yyval.ast) = token1(COS, (yyvsp[-1].ast)); }
#line 5863 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 225: /* expression_numeric: SIN '(' expression_numeric ')'  */
#line 382 "DARIC.y"
                                     { (yyval.ast) = token1(SIN, (yyvsp[-1].ast)); }
#line 5869 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 226: /* expression_numeric: ABS '(' expression_numeric ')'  */
#line 383 "DARIC.y"
                                     { (yyval.ast) = token1(ABS, (yyvsp[-1].ast)); }
#line 5875 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 227: /* expression_numeric: ACS '(' expression_numeric ')'  */
#line 384 "DARIC.y"
                                     { (yyval.ast) = token1(ACS, (yyvsp[-1].ast)); }
#line 5881 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 228: /* expression_numeric: ASN '(' expression_numeric ')'  */
#line 385 "DARIC.y"
                                     { (yyval.ast) = token1(ASN, (yyvsp[-1].ast)); }
#line 5887 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 229: /* expression_numeric: DEG '(' expression_numeric ')'  */
#line 386 "DARIC.y"
                                     { (yyval.ast) = token1(DEG, (yyvsp[-1].ast)); }
#line 5893 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 230: /* expression_numeric: RAD '(' expression_numeric ')'  */
#line 387 "DARIC.y"
                                     { (yyval.ast) = token1(RAD, (yyvsp[-1].ast)); }
#line 5899 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 231: /* expression_numeric: SGN '(' expression_numeric ')'  */
#line 388 "DARIC.y"
                                     { (yyval.ast) = token1(SGN, (yyvsp[-1].ast)); }
#line 5905 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 232: /* expression_numeric: ASC '(' expression_string ')'  */
#line 390 "DARIC.y"
                                    { (yyval.ast) = token1(ASC, (yyvsp[-1].ast)); }
#line 5911 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 233: /* expression_numeric: LEN '(' expression_string ')'  */
#line 391 "DARIC.y"
                                    { (yyval.ast) = token1(LEN, (yyvsp[-1].ast)); }
#line 5917 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 234: /* expression_numeric: INSTR '(' expression_string ',' expression_string ')'  */
#line 392 "DARIC.y"
                                                            { (yyval.ast) = token3(INSTR, (yyvsp[-3].ast), (yyvsp[-1].ast), integer(1)); }
#line 5923 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 235: /* expression_numeric: INSTR '(' expression_string ',' expression_string ',' expression_numeric ')'  */
#line 393 "DARIC.y"
                                                                                   { (yyval.ast) = token3(INSTR, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5929 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 236: /* expression_numeric: VAL '(' expression_string ')'  */
#line 394 "DARIC.y"
                                    { (yyval.ast) = token1(VAL, (yyvsp[-1].ast)); }
#line 5935 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 237: /* variable_integer: INTEGER_VARIABLE  */
#line 398 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5941 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 238: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 399 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5947 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 239: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 400 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5953 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 240: /* variable_integer: TYPE_VARIABLE INTEGER_VARIABLE  */
#line 401 "DARIC.y"
                                     { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5959 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 241: /* variable_integer: TYPE_VARIABLE '(' expression_numeric ')' INTEGER_VARIABLE  */
#line 402 "DARIC.y"
                                                                { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5965 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 242: /* variable_real: VARIABLE  */
#line 406 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 5971 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 243: /* variable_real: VARIABLE '(' expression_numeric ')'  */
#line 407 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5977 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 244: /* variable_real: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 408 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5983 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 245: /* variable_real: TYPE_VARIABLE VARIABLE  */
#line 409 "DARIC.y"
                             { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5989 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 246: /* variable_real: TYPE_VARIABLE '(' expression_numeric ')' VARIABLE  */
#line 410 "DARIC.y"
                                                        { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5995 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 247: /* variable_numeric: variable_integer  */
#line 414 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6001 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 248: /* variable_numeric: variable_real  */
#line 415 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 6007 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 249: /* variable_string: STRING_VARIABLE  */
#line 419 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 6013 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 250: /* variable_string: STRING_VARIABLE '(' expression_numeric ')'  */
#line 420 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6019 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 251: /* variable_string: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 421 "DARIC.y"
                                                                        { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6025 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 252: /* variable_string: TYPE_VARIABLE '(' expression_numeric ')' STRING_VARIABLE  */
#line 422 "DARIC.y"
                                                               { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 6031 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 253: /* variable: variable_numeric  */
#line 426 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6037 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 254: /* variable: variable_string  */
#line 427 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6043 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 255: /* variable_list: variable  */
#line 431 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6049 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 256: /* variable_list: variable ',' variable_list  */
#line 432 "DARIC.y"
                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6055 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 257: /* plain_variable: INTEGER_VARIABLE  */
#line 436 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 6061 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 258: /* plain_variable: VARIABLE  */
#line 437 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 6067 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 259: /* plain_variable: STRING_VARIABLE  */
#line 438 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 6073 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 260: /* plain_variable_list: plain_variable  */
#line 442 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 6079 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 261: /* plain_variable_list: plain_variable ',' plain_variable_list  */
#line 443 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6085 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 262: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 447 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 6091 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 263: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 448 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 6097 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 264: /* dim_variable: VARIABLE '(' expression_numeric ')'  */
#line 449 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 6103 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 265: /* dim_variable: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 450 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 6109 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 266: /* dim_variable: STRING_VARIABLE '(' expression_numeric ')'  */
#line 451 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6115 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 267: /* dim_variable: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 452 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6121 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 268: /* dim_variable: TYPE_VARIABLE '(' expression_numeric ',' VARIABLE ')'  */
#line 453 "DARIC.y"
                                                            { (yyval.ast) = typevariable1d((yyvsp[-5].v_string), (yyvsp[-1].v_string), (yyvsp[-3].ast), Type::TYPE_ARRAY); }
#line 6127 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 269: /* dim_variable_list: dim_variable  */
#line 457 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6133 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 270: /* dim_variable_list: dim_variable ',' dim_variable_list  */
#line 458 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6139 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 271: /* type_variable: TYPE_VARIABLE  */
#line 462 "DARIC.y"
                    { (yyval.ast) = variable((yyvsp[0].v_string), Type::TYPE); }
#line 6145 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 272: /* type_variable: TYPE_VARIABLE '(' expression_numeric ')'  */
#line 463 "DARIC.y"
                                               { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::TYPE_ARRAY); }
#line 6151 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 273: /* type: TYPE_ VARIABLE sep field_list ENDTYPE  */
#line 467 "DARIC.y"
                                            { (yyval.ast) = token2(TYPE_, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 6157 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 274: /* field: FIELD variable  */
#line 471 "DARIC.y"
                     { (yyval.ast) = token1(FIELD, (yyvsp[0].ast)); }
#line 6163 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 275: /* field_list: field sep  */
#line 475 "DARIC.y"
               { (yyval.ast) = (yyvsp[-1].ast); }
#line 6169 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 276: /* field_list: field sep field_list  */
#line 476 "DARIC.y"
                           { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6175 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 277: /* string: LITERAL_STRING  */
#line 480 "DARIC.y"
                     { (yyval.ast) = string((yyvsp[0].v_string)); }
#line 6181 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 278: /* expression_string: string  */
#line 484 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 6187 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 279: /* expression_string: variable_string  */
#line 485 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6193 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 280: /* expression_string: expression_string PLUS expression_string  */
#line 486 "DARIC.y"
                                               { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6199 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 281: /* expression_string: expression_string E expression_string  */
#line 487 "DARIC.y"
                                            { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6205 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 282: /* expression_string: expression_string NE expression_string  */
#line 488 "DARIC.y"
                                             { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6211 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 283: /* expression_string: expression_string GE expression_string  */
#line 489 "DARIC.y"
                                             { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6217 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 284: /* expression_string: expression_string LE expression_string  */
#line 490 "DARIC.y"
                                             { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6223 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 285: /* expression_string: expression_string LT expression_string  */
#line 491 "DARIC.y"
                                             { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6229 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 286: /* expression_string: expression_string GT expression_string  */
#line 492 "DARIC.y"
                                             { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6235 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 287: /* expression_string: GETSH expression_numeric  */
#line 494 "DARIC.y"
                               { (yyval.ast) = token1(GETSH, (yyvsp[0].ast)); }
#line 6241 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 288: /* expression_string: FN_STRING '(' expression_list ')'  */
#line 496 "DARIC.y"
                                        { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 6247 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 289: /* expression_string: GETS  */
#line 498 "DARIC.y"
           { (yyval.ast) = token(GETS); }
#line 6253 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 290: /* expression_string: INKEYS '(' expression_numeric ')'  */
#line 499 "DARIC.y"
                                        { (yyval.ast) = token1(INKEYS, (yyvsp[-1].ast)); }
#line 6259 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 291: /* expression_string: TIMES  */
#line 501 "DARIC.y"
            { (yyval.ast) = token(TIMES); }
#line 6265 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 292: /* expression_string: STRS '(' expression_numeric ')'  */
#line 502 "DARIC.y"
                                      { (yyval.ast) = token1(STRS, (yyvsp[-1].ast)); }
#line 6271 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 293: /* expression_string: STRS TILDE '(' expression_numeric ')'  */
#line 503 "DARIC.y"
                                            { (yyval.ast) = token1(STRSHEX, (yyvsp[-1].ast)); }
#line 6277 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 294: /* expression_string: STRINGS '(' expression_numeric ',' expression_string ')'  */
#line 504 "DARIC.y"
                                                               { (yyval.ast) = token2(STRINGS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6283 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 295: /* expression_string: CHRS '(' expression_numeric ')'  */
#line 505 "DARIC.y"
                                      { (yyval.ast) = token1(CHRS, (yyvsp[-1].ast)); }
#line 6289 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 296: /* expression_string: LEFTS '(' expression_string ',' expression_numeric ')'  */
#line 506 "DARIC.y"
                                                             { (yyval.ast) = token2(LEFTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6295 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 297: /* expression_string: MIDS '(' expression_string ',' expression_numeric ',' expression_numeric ')'  */
#line 507 "DARIC.y"
                                                                                   { (yyval.ast) = token3(MIDS, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6301 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 298: /* expression_string: RIGHTS '(' expression_string ',' expression_numeric ')'  */
#line 508 "DARIC.y"
                                                              { (yyval.ast) = token2(RIGHTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6307 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 299: /* expression: expression_numeric  */
#line 512 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6313 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 300: /* expression: expression_string  */
#line 513 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6319 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 301: /* expression_list: %empty  */
#line 517 "DARIC.y"
                     { (yyval.ast) = NULL; }
#line 6325 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 302: /* expression_list: expression  */
#line 518 "DARIC.y"
                 { (yyval.ast) = (yyvsp[0].ast); }
#line 6331 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 303: /* expression_list: expression ',' expression_list  */
#line 519 "DARIC.y"
                                     { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6337 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 304: /* assignment_single: variable_numeric E expression_numeric  */
#line 523 "DARIC.y"
                                            { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6343 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 305: /* assignment_single: variable_string E expression_string  */
#line 524 "DARIC.y"
                                          { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6349 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 306: /* assignment_single: type_variable E expression  */
#line 525 "DARIC.y"
                                 { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6355 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 307: /* assignment_single: type_variable variable E expression  */
#line 526 "DARIC.y"
                                          { (yyval.ast) = assignment(link((yyvsp[-3].ast), (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 6361 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 308: /* assignment_list: assignment_single  */
#line 530 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6367 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 309: /* assignment_list: assignment_single ',' assignment_list  */
#line 531 "DARIC.y"
                                            { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6373 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 310: /* assignment: assignment_list  */
#line 535 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6379 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 311: /* assignment: LOCAL assignment_list  */
#line 536 "DARIC.y"
                            { (yyval.ast) = token1(LOCAL, (yyvsp[0].ast)); }
#line 6385 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 312: /* assignment: GLOBAL assignment_list  */
#line 537 "DARIC.y"
                             { (yyval.ast) = token1(GLOBAL, (yyvsp[0].ast)); }
#line 6391 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 313: /* assignment: variable_numeric SHL_E expression_numeric  */
#line 538 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6397 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 314: /* assignment: variable_numeric SHR_E expression_numeric  */
#line 539 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6403 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 315: /* assignment: variable_numeric PLUS_E expression_numeric  */
#line 540 "DARIC.y"
                                                 { (yyval.ast) = assignment((yyvsp[-2].ast), token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6409 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 316: /* assignment: variable_numeric MINUS_E expression_numeric  */
#line 541 "DARIC.y"
                                                  { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6415 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 317: /* assignment: variable_numeric MULTIPLY_E expression_numeric  */
#line 542 "DARIC.y"
                                                     { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6421 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 318: /* assignment: variable_numeric DIVIDE_E expression_numeric  */
#line 543 "DARIC.y"
                                                   { (yyval.ast) = assignment((yyvsp[-2].ast), token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6427 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 319: /* assignment: variable_numeric INTEGERDIVIDE_E expression_numeric  */
#line 544 "DARIC.y"
                                                          { (yyval.ast) = assignment((yyvsp[-2].ast), token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6433 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 320: /* expression_print: expression_string  */
#line 548 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6439 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 321: /* expression_print: expression_numeric  */
#line 549 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6445 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 322: /* expression_print: ','  */
#line 550 "DARIC.y"
          { (yyval.ast) = token(COMMA); }
#line 6451 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 323: /* expression_print: TILDE  */
#line 551 "DARIC.y"
            { (yyval.ast) = token(TILDE); }
#line 6457 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 324: /* expression_print: TICK  */
#line 552 "DARIC.y"
           { (yyval.ast) = token(TICK); }
#line 6463 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 325: /* expression_print: SPC '(' expression_numeric ')'  */
#line 553 "DARIC.y"
                                     { (yyval.ast) = token1(SPC, (yyvsp[-1].ast)); }
#line 6469 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 326: /* expression_print: SEMICOLON  */
#line 554 "DARIC.y"
                { (yyval.ast) = token(SEMICOLON); }
#line 6475 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 327: /* expression_print_list: expression_print  */
#line 558 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6481 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 328: /* expression_print_list: expression_print expression_print_list  */
#line 559 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6487 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 330: /* expression_input_list: expression_input  */
#line 567 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6493 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 331: /* expression_input_list: expression_input ',' expression_input_list  */
#line 568 "DARIC.y"
                                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6499 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 332: /* proc_parameter: %empty  */
#line 572 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6505 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 333: /* proc_parameter: variable  */
#line 573 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6511 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 334: /* proc_parameter: RETURN variable  */
#line 574 "DARIC.y"
                      { (yyval.ast) = token1(RETURN_PARAMETER, (yyvsp[0].ast)); }
#line 6517 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 335: /* proc_parameter_list: proc_parameter  */
#line 578 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 6523 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 336: /* proc_parameter_list: proc_parameter ',' proc_parameter_list  */
#line 579 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6529 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 337: /* fn_parameter: %empty  */
#line 583 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6535 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 338: /* fn_parameter: variable  */
#line 584 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6541 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 339: /* fn_parameter_list: fn_parameter  */
#line 588 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6547 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 340: /* fn_parameter_list: fn_parameter ',' fn_parameter_list  */
#line 589 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6553 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 341: /* when: WHEN expression_list sep statement_list sep  */
#line 593 "DARIC.y"
                                                  { (yyval.ast) = token2(WHEN, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6559 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 342: /* when_list: when  */
#line 597 "DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 6565 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 343: /* when_list: when_list when  */
#line 598 "DARIC.y"
                     { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6571 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 344: /* define_function: DEFPROC '(' proc_parameter_list ')' sep statement_list sep ENDPROC  */
#line 601 "DARIC.y"
                                                                         { (yyval.ast) = token3typed(DEFPROC, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-2].ast), Type::NOTYPE); }
#line 6577 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 345: /* define_function: DEFFN_INTEGER '(' fn_parameter_list ')' sep statement_list sep ENDFN  */
#line 602 "DARIC.y"
                                                                           { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-2].ast), Type::INTEGER); }
#line 6583 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 346: /* define_function: DEFFN_REAL '(' fn_parameter_list ')' sep statement_list sep ENDFN  */
#line 603 "DARIC.y"
                                                                        { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-2].ast), Type::REAL); }
#line 6589 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 347: /* define_function: DEFFN_STRING '(' fn_parameter_list ')' sep statement_list sep ENDFN  */
#line 604 "DARIC.y"
                                                                          { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-2].ast), Type::STRING); }
#line 6595 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;


#line 6599 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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

#line 607 "DARIC.y"


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
