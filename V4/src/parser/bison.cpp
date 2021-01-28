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
  YYSYMBOL_statement_list_no_nl = 250,     /* statement_list_no_nl  */
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
#define YYFINAL  299
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   12245

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  245
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  349
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1038

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
     117,   121,   122,   123,   124,   128,   129,   130,   131,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   156,
     157,   159,   160,   161,   162,   163,   164,   166,   168,   169,
     171,   172,   173,   174,   176,   177,   178,   179,   181,   182,
     183,   184,   186,   187,   189,   190,   191,   193,   194,   195,
     198,   199,   200,   201,   202,   203,   206,   207,   208,   209,
     210,   211,   212,   213,   215,   216,   218,   219,   221,   222,
     225,   228,   229,   230,   231,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   253,   254,   255,   256,   257,   258,   259,
     263,   264,   265,   266,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     297,   298,   300,   301,   302,   304,   306,   307,   309,   310,
     311,   313,   314,   315,   316,   318,   319,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   373,   374,   375,   376,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   395,   396,   397,   398,   399,   403,
     404,   405,   406,   407,   411,   412,   413,   414,   415,   419,
     420,   424,   425,   426,   427,   431,   432,   436,   437,   441,
     442,   443,   447,   448,   452,   453,   454,   455,   456,   457,
     458,   462,   463,   467,   468,   472,   476,   480,   481,   485,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   499,
     501,   503,   504,   506,   507,   508,   509,   510,   511,   512,
     513,   517,   518,   522,   523,   524,   528,   529,   530,   531,
     535,   536,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   553,   554,   555,   556,   557,   558,   559,   563,
     564,   568,   572,   573,   577,   578,   579,   583,   584,   588,
     589,   593,   594,   598,   602,   603,   606,   607,   608,   609
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
  "top_level_statement_list", "statement_list", "statement_list_no_nl",
  "statement", "number", "expression_numeric", "variable_integer",
  "variable_real", "variable_numeric", "variable_string", "variable",
  "variable_list", "plain_variable", "plain_variable_list", "dim_variable",
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

#define YYPACT_NINF (-305)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    4828,  4104,  -232,  -218,  -165,     0,  -140,  -118,   -86,   -81,
     -80,   -51,   -37,   -27,   330,  2777,  3866,  3866,  3866,  3866,
    2777,    38,   216,   238,  2777,  4285,  2777,  2777,   472,  -305,
     485,   518,   227,   251,  -305,  -305,  -305,  -305,   667,   667,
     353,  -305,  3866,  3866,  -305,  3014,  3866,  3866,  3227,  3440,
    3866,  -305,  3653,  3866,  3866,  3866,  -305,     1,    17,   263,
    2537,  -305,  -305,   256,   267,   270,  3866,  3866,  3866,  -305,
    3866,   300,    96,  -305,  -305,  -305,   475,   287,   392,  -305,
      71,  -305,  -305,  -305,   298,    96,  3866,  3866,  2083,  -305,
    -305,  3866,   137,   472,   472,   472,  2777,  2777,  2777,  2777,
      79,    80,    84,  -305,  -305,  -305,    89,     2,    90,   114,
     115,   452,  3866,  3866,   121,   163,   167,  3866,  3866,   168,
     172,  -305,  -305,   179,   191,   192,   194,   195,   204,   205,
     208,   215,   220,   231,   232,   240,   242,   244,   245,   247,
    -305,  -305,  -305,   253,   254,   262,   268,   286,   292,   297,
     -13,   302,  -305,  -305,  3866,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,   306,  -305,   315,   667,  3866,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,   336,   337,
    -305,  -305,   358,  3866,  -305,  -305,  -305,  3866,  -305, 12069,
    -305,  -305,  -305,  -305,   633,  -305,     8, 12069,  3009, 12069,
   12099,   391,     4,    11,   419,   368,  -305,  -305,  4466,  5009,
    2777,   226,  -305,    35,   278,  -305,  -305,  -305,   305,  -305,
     342,   346,   347,   348,   331,  -305,   486,  -305,   351,   485,
    -305,    35,   352,   633,   477,  -305,  -305,  -305,   354,  -305,
    4202,  4383,  3866,  4564,  4745,  4926,  3866,  5107,  3866,  3866,
    5288,  5469,  3866,  6229,  6410,  6591,  6772,  3866,  3866,    33,
    -305,   360,  -305,  -305,  -305,  -305,   363,  -305, 12069,   633,
    2537,  -305,   375,   377,   378,  6953,  7134,  7315, 12069,  -305,
    4647,  -305,  -305,  9027,  3866,  3866,  3866,  3866,  3866,  3866,
    3866,  3866,   667,  2777,   515,   518,  -305,  9027,   170,   537,
     594,  1006,  1742,   472,  -305,   380,   383,  -305,   382,   384,
     386,   387,   388,   389,   390,   394,   628,   632,   635,  3866,
    3866,  2777,  2777,  2777,  -305,  -305,  -305,  -305, 12069, 12069,
     667,   667,   667, 12069, 12069,   535,  3866,  3866,  3866,  3866,
    3866,  3866,  3866,  3866,  3866,  3866,  3866,  3866,  3866,  3866,
    3866,  3866,  3866,   667,   667,  3866,   667,   667,   667,   667,
     667,   398,  3866,  3866,  -305,  3866,  3866,   633,  7496,  3866,
    3866,   405,  7677,  1808,  3866,  3866,  3866,  3866,  3866,  3866,
    3866,  3866,  3866,  3866,  3866,  3866,  3866,  3866,  3866,  3866,
    3866,  3866,   667,   667,   667,   667,   667,   667,   667,  3866,
    3866,  3866,    35,  3866,   641,  3866,   644,   646,    29,    61,
     566,  5190,  5190,    87,   161,  -305,   219,  -305,  5009,  2777,
    9027,  5009,  2777,   472,  3866,  3866,  3866,  3866,   485,  2296,
    -305,   560,  3866,   353,   353,  3866,  3866,  7858,  3866,  3866,
    3866,  8039,  3866,  8220,  8401,  3866,  3866,  8582,  3866,  3866,
    3866,  3866,  1866,  2005,   472,  -305,   472,  3866,  -305,   654,
    3866,  3866,  3866,  3866,  3866,   645,    96,  -305, 12069, 12069,
   12069, 12069, 12069, 12069, 12069, 12069,   633,  -305,  2777,  -305,
    3866,  -305,  3866,  -305,   600,  3866,  -305,   544,  -305,   137,
      35,   472,    35,    35,    35,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  4110,   424,   425,   427,    62,   128,   154,   429,
     431,   435,  5714,  5907,  6100,  9121,  9187,  9245,  9258,  9280,
    9293,  9315,  9350,  9385,  9420,  9441,  9480,  9515,  9544,   183,
     201,  9574,   506,   551,   573,   583,   277,  3866,  9587,  8763,
    8944, 10203,  3866,  9609,  9645,   669,  3866,  -305,    40,    99,
      99,    99,    99,  -305,  -305,    99,    99,    77,    77,    40,
      40,    40,    40,  1079,   142,   142,   648,   648,   648,   648,
     648,   648,  -305,  9680, 12069,  1288,   599, 11970,   443, 11995,
     444,   445,  3866,   684,  3866,   687,   688,   101,    92,   236,
    5371,  5371,  -305,  9027,  9027,   219,  -305,  -305,    52,  -305,
    -305,  1411,  1518,  1585, 10238,  -305,   672,   472,    35,   603,
    9715,  -305,  -305, 10267, 10294,  3866, 12069, 10307, 12069,  3866,
   10337,  3866,  3866, 10362, 10398,  3866, 10438, 10461, 10489, 10529,
    -305,  -305,  -305,  -305,  9737,   459,  9750,  9772, 10564, 10588,
   12069,  -305,  9027,  -305,  9809,  9844,   464,  9874,  -305,  -305,
    -305,  -305,  5009,  -305,  5009,  5009,  5009,   544,  -305,  -305,
    -305,  -305,  -305,  -305,   458,   465,   467,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,   667,  3866,  3866,
    3866,  -305,  9902,  -305,   667,  3866,  3866, 12069,  -305,  -305,
    -305, 10623,    55,  2777,  -305,   202,  3866,   469,  3866,   470,
     473, 12008,   478, 12034,   480,   482,  9027,  5371,    66,  5371,
     246,  -305,   117,  -305,  9027,  -305,  3866,  -305,  3866,  -305,
    3866,  -305,   700,   651,  -305,   560,  -305,   711,  3866,  3866,
   12069,  3866, 10636,  3866, 10663, 10688,  3866,  3866, 10727,  3866,
    3866,  3866,  3866,  -305,   719,   487,   489,  3866,  3866,  -305,
    -305,   667,  -305,   219,   219,   219,   219,   493,   494,   495,
      34,  9915, 10762,  9937,  -305,   304, 10787,  9977,  3866,    35,
    5009,   657,  -305, 11805,    35, 11834,    35,    35,  3866,   484,
    3866,   496,   497,   276,   717,  -305,  -305,  9027, 10007, 10042,
   10070,   500,   503,  -305, 12069, 12069, 10822,  3866, 10861,  3866,
    3866, 10886, 10913,  3866, 12069, 10926, 10953, 10988,  -305,  3866,
    3866, 11017, 11052,   393,  5552,  5745,  5938,  6131,    44,    44,
      44,  3866,  -305,  -305,  3866,  -305,  -305,  3866,  -305, 11081,
    5009,   219,  -305,  3866,  5009,  5009,  3866,  5009,  5009,  5009,
   11871,    35, 11900,    35,    35,  -305,  5371,  -305,  -305,  -305,
    -305,   667,  3866, 11116,  3866, 11151, 11176,  3866,  3866, 12069,
     667,   667,   667, 11189, 11215,  3866,  3866,  -305,  -305,  -305,
    -305,  -305,   125,   505,   508,   513, 10110, 10137, 10166,  3866,
     219,  6312, 11935,   219,   219, 11935,   219,   219,   219,  3866,
    5009,  5009,  3866,  5009,  5009,  5009,   296,   446, 12069,  3866,
   12069,  3866,  3866, 11242, 12069,   633,   633,   633,  3866,  3866,
   12069, 12069,  -305,  -305,  -305,  -305,  -305,  -305, 11282,  9027,
    -305,  5009,  6493,  6674,  5009,  6855,  7036,  7217, 11935,   219,
     219, 11935,   219,   219,   219,   668,  -305, 12069, 11317, 11341,
    3866, 11376, 11416,  3866,   219,  -305,  -305,   219,  -305,  -305,
    -305,  5009,  7398,  7579,  5009,  7760,  7941,  8122,  -305,  3866,
    3866, 11441,  3866,  3866, 11467,  8303,  8484,   219,  -305,  -305,
     219,  -305,  -305,  -305, 11480, 11507,  3866, 11542, 11572,  3866,
    -305,  -305,  8665,  8846,  3866,  3866, 12069,  3866,  3866, 11607,
    -305,  -305, 12069, 11642, 12069, 12069,  3866,  3866, 11666, 11706,
    3866,  3866, 11733, 11768,  3866,  3866, 12069, 12069
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   239,   244,   251,   273,     0,     0,     0,     0,
      26,     0,     0,     0,     0,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   303,     0,    33,
       0,     0,     0,     0,    25,    36,    37,    38,     0,     0,
       0,    95,     0,     0,   104,   102,     0,     0,     0,     0,
       0,   115,     0,     0,     0,     0,   119,     0,     0,     0,
      86,    56,    57,     0,     0,     0,     0,     0,     0,    88,
       0,     0,     2,     5,   249,   250,     0,     0,     0,    21,
     310,   312,    19,    20,     0,     0,     0,     0,     0,   242,
     247,     0,   334,   339,   339,   339,   303,   303,   303,   303,
       0,     0,     0,   120,   122,   279,   251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     214,   215,   216,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     218,   159,   158,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   160,   293,     0,   167,   168,   169,   170,   171,
     172,   173,   174,     0,   163,     0,     0,     0,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   178,   179,   175,     0,     0,
     156,   291,     0,     0,   161,   162,   164,     0,   124,   301,
     125,   126,   281,   280,   302,    35,     0,    42,     0,    44,
       0,     0,     0,     0,     0,     0,    48,    49,     0,     0,
       0,     0,    11,     0,   304,    31,   255,   256,   257,    32,
       0,     0,     0,     0,   271,    39,     0,   314,   251,     0,
     313,     0,     0,    47,    22,   259,   260,   261,   262,    24,
      96,    98,   103,     0,     0,     0,     0,     0,     0,   163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     331,   332,    50,   328,   325,   326,     0,   324,   323,   322,
     329,    87,     0,     0,     0,     0,     0,     0,    94,     1,
       0,     4,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     9,     0,     0,
       0,     0,     0,     0,   335,   337,     0,   340,   341,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   303,   303,   303,   121,   123,   130,   131,   210,   209,
       0,     0,     0,   155,   289,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   219,     0,     0,   180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,     0,    65,     0,     0,
       0,     0,   303,     0,     0,     0,     0,     0,     0,     0,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,   330,     0,
       0,     0,     0,     0,     0,     0,     0,     6,   306,   315,
     316,   317,   318,   319,   320,   321,   307,   308,     0,   311,
       0,   240,     0,   245,     0,     0,   252,   274,   336,   334,
       0,   339,     0,     0,     0,    27,    28,    29,    30,    67,
      68,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   127,   136,   141,
     144,   143,   142,   139,   140,   145,   146,   132,   133,   134,
     135,   137,   138,   147,   148,   149,   283,   286,   285,   284,
     287,   288,   282,     0,    41,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,    13,     0,    64,    12,     0,   305,
     258,     0,     0,     0,     0,   272,     0,     0,     0,     0,
       0,    23,   263,     0,     0,     0,   100,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    52,   333,     0,     0,     0,     0,     0,     0,
      93,     8,    10,   309,     0,     0,     0,     0,   243,   248,
     254,   338,     0,   342,     0,     0,     0,     0,   150,   151,
     290,   211,   213,   212,     0,     0,     0,   217,   128,   129,
     229,   220,   221,   222,   223,   224,   225,   226,   227,   230,
     228,   231,   232,   233,   238,   234,   297,     0,     0,     0,
       0,   235,     0,   294,     0,     0,     0,   181,   157,   292,
     165,     0,     0,   303,   344,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,    60,     0,
       0,    15,     0,    16,    14,    66,     0,   264,     0,   266,
       0,   268,     0,     0,   276,   277,   275,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   327,     0,     0,     0,     0,     0,   241,
     246,     0,   253,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   295,     0,     0,     0,     0,     0,
       0,     0,   345,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    59,    18,     0,     0,
       0,     0,     0,   278,    97,    99,     0,     0,     0,     0,
       0,     0,     0,     0,   105,     0,     0,     0,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,   298,     0,   300,   296,     0,   177,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,     0,   265,   267,   269,
     270,     0,     0,     0,     0,     0,     0,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,    45,   346,   347,
     349,   348,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
     108,     0,     0,     0,   114,   116,   117,   118,     0,     0,
      91,    92,   153,   152,   154,   237,   299,   176,     0,   343,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,   109,     0,     0,
       0,     0,     0,     0,     0,    76,    71,     0,    77,    70,
      72,     0,     0,     0,     0,     0,     0,     0,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,    74,
       0,    81,    73,    75,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,     0,     0,   110,     0,     0,     0,
      82,    83,   111,     0,    89,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   112
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -305,  -305,   341,     5,   213,  -214,   284,  -294,   -16,   611,
    1064,    48,  1371,   -11,   316,  -305,  -304,  -305,  -231,  -305,
    -305,  -305,     3,  -305,  1293,    95,   -77,  -305,   -19,  -305,
    -305,   474,  -305,  -255,  -305,   257,  -305,   -90,    42,  -305,
    -305
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    71,   440,    72,   436,   607,   232,   208,   209,   210,
     211,    76,    77,   280,   239,   258,   259,   244,   245,    78,
      79,   628,   629,   213,   214,   234,   235,    80,    81,    82,
     290,   291,   281,   282,   325,   326,   328,   329,   724,   725,
      83
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     217,   218,   219,   220,   330,   331,    85,    89,    90,    89,
      90,    86,   247,   250,   434,    89,    90,   238,   450,   332,
     333,   334,   335,   381,   475,    87,   260,   261,   423,   263,
     264,   265,   267,   270,   271,   425,   273,   274,   275,   276,
       2,     3,   106,   107,   288,   222,   223,   224,   103,   104,
     295,   296,   297,   602,   298,   438,   301,   302,   412,   413,
     414,   415,   668,   669,   416,   417,   418,   314,   399,   400,
     318,   319,   321,   301,   302,   322,   236,   902,    88,   246,
     246,   324,   327,   327,   327,   604,   412,   413,   414,   415,
     438,   424,   416,   417,   418,   438,   348,   349,   426,   300,
     394,   353,   354,    92,   611,   399,   400,   236,   301,   302,
     215,   405,   406,   301,   302,   221,   603,   301,   302,   228,
     611,   233,   394,   736,   745,    93,   236,   399,   400,   344,
     345,   403,   404,   405,   406,   814,   225,   815,   384,   817,
     236,   236,   236,   236,     2,     3,   106,   107,   605,   631,
     632,   388,   412,   413,   414,   415,   610,    94,   416,   417,
     418,   737,    95,    96,   611,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   412,   413,
     414,   415,   612,   613,   416,   417,   418,   392,   323,   407,
     408,   393,    97,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,    98,   412,   413,   414,
     415,   407,   408,   416,   417,   418,    99,   625,   609,   652,
     226,   653,   438,   301,   302,   412,   413,   414,   415,   438,
     382,   416,   417,   418,     2,     3,   248,     5,   231,   611,
     301,   302,   227,    91,   277,   340,   457,   301,   302,   611,
     461,   419,   463,   464,   407,   408,   467,   738,   613,   251,
     278,   472,   473,   292,   523,   524,   525,   816,   613,   279,
       2,     3,   106,   107,   288,   474,   851,   293,   852,   611,
     294,   800,   407,   408,    73,    73,   409,   723,   488,   489,
     490,   491,   492,   493,   494,   495,   499,   875,   613,   611,
     299,   412,   413,   414,   415,   486,   681,   416,   417,   418,
     439,   312,   508,   315,   409,   410,   411,   965,   613,   316,
     249,   336,   337,   321,   522,   437,   338,   236,   412,   413,
     414,   415,   339,   341,   416,   417,   418,   100,   101,   102,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   342,   343,   551,
     255,   256,   257,   246,   350,   619,   558,   559,   391,   560,
     561,   236,   682,   563,   564,   428,   429,   430,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   740,   742,   683,     2,
       3,   106,   107,   593,   594,   595,   351,   597,   497,   599,
     352,   355,   500,   303,   501,   356,   313,   412,   413,   414,
     415,   673,   357,   416,   417,   418,   317,   704,   621,   622,
     623,   624,   238,   321,   358,   359,   630,   360,   361,   633,
     634,   433,   636,   637,   638,   705,   640,   362,   363,   643,
     644,   364,   646,   647,   648,   649,   344,   345,   365,     2,
       3,   654,   216,   366,   656,   657,   658,   659,   660,   422,
     412,   413,   414,   415,   367,   368,   416,   417,   418,     2,
       3,   106,   107,   369,   664,   370,   665,   371,   372,   667,
     373,   236,   240,   241,   242,   243,   374,   375,   324,   304,
     327,   412,   413,   414,   415,   376,   427,   416,   417,   418,
     304,   377,   435,   305,   306,   307,   308,   309,   310,   311,
     442,   711,   236,   813,   236,     2,     3,   106,     5,   378,
     412,   413,   414,   415,   616,   379,   416,   417,   418,   498,
     380,   712,   529,   530,   531,   383,   717,   443,   856,   385,
     721,   668,   669,   670,   903,   904,   905,   236,   386,   236,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   448,   441,   412,   413,   414,   415,   389,
     390,   416,   417,   418,    73,   444,   731,   487,   733,   445,
     446,   447,   451,   663,   449,   452,   454,   412,   413,   414,
     415,   487,   476,   416,   417,   418,   477,   412,   413,   414,
     415,    74,    74,   416,   417,   418,   754,   479,   504,   760,
     480,   481,   509,   762,   511,   764,   765,   510,   512,   768,
     513,   514,   515,   516,   517,   519,    74,   897,   518,    74,
     520,   557,    74,    74,   521,   608,   799,   565,   598,   407,
     408,   615,   600,   606,   618,   601,   627,   412,   413,   414,
     415,   655,   926,   416,   417,   418,   661,   666,   678,   679,
      74,   680,   684,   105,   685,   236,   106,   252,   686,   720,
     418,   409,   410,   411,   723,   110,   727,   729,   730,    74,
     966,   732,   791,   792,   793,   734,   753,   735,   756,   796,
     797,   774,   787,    74,    74,    74,    74,   781,   821,   788,
     803,   789,   805,   804,   806,   435,   435,   807,   822,   453,
     670,   809,   346,   811,   617,   812,   838,   862,   871,   839,
     818,   840,   819,   118,   820,   848,   849,   850,   876,   988,
     873,   874,   824,   825,   880,   826,   881,   828,   707,   942,
     831,   832,   943,   834,   835,   836,   837,   944,   823,   620,
       0,   841,   842,   596,   478,     0,   671,   802,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   614,     0,   502,
       0,   503,   859,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   870,   708,   872,     0,     0,     0,     0,   144,
       0,   146,   147,   148,     0,   150,     0,   151,     0,     0,
     153,   883,     0,   885,   886,   709,     0,   889,     0,     0,
       0,     0,     0,   893,   894,   710,     0,   662,     0,     0,
       0,     0,     0,     0,     0,   906,     0,     0,   907,    74,
      74,   908,     0,     0,     0,     0,     0,   912,     0,     0,
     915,   672,     0,   674,   675,   676,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   928,     0,   930,     0,
       0,   933,   934,     0,     0,     0,     0,     0,     0,   940,
     941,     0,     0,     0,   199,   783,     0,   784,   785,   786,
      74,     0,   201,   948,   741,   741,     0,   743,   617,     0,
       0,     0,     0,   958,     0,     0,   961,     0,     0,     0,
       0,    74,     0,   967,    74,   968,   969,     0,     0,     0,
       0,     0,   971,   972,     0,     0,    74,     0,    74,     0,
       0,     0,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   487,     0,     0,     0,
       0,     0,     0,     0,   991,     0,   744,   994,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   755,
       0,     0,     0,  1004,  1005,     0,  1007,  1008,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1016,     0,     0,  1019,     0,     0,     0,     0,  1022,  1023,
       0,  1024,  1025,     0,     0,     0,     0,     0,     0,     0,
    1028,  1029,     0,   861,  1032,  1033,     0,     0,  1036,  1037,
     743,   741,     0,   741,     0,     0,     0,     0,   617,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,    74,    74,     0,     0,     0,     0,     0,    74,
       0,    74,    74,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    75,   801,     0,     0,     0,
       0,     0,     0,   910,     0,     0,     0,   913,   914,     0,
     916,   917,   918,     0,     0,    74,     0,    74,     0,    75,
       0,     0,    75,     0,     0,    75,    75,     0,     0,     0,
       0,   743,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,   407,   408,
      74,     0,    74,    75,   844,   845,   846,   847,   617,   617,
     617,   617,     0,   959,   960,     0,   962,   963,   964,     0,
     860,     0,    75,     0,   864,   865,   867,   868,   869,     0,
     409,   410,   411,     0,     0,     0,    75,    75,    75,    75,
     741,     0,     0,     0,   974,     0,     0,   977,     0,     0,
       0,     0,     0,     0,     0,   347,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,     0,   997,   617,     0,  1000,     0,     0,
       0,     0,   911,     0,     0,     0,     0,     0,     0,     0,
       0,   920,   921,   923,   924,   925,     0,     0,     0,     0,
       0,    74,    74,     0,    74,    74,     0,     0,     0,     0,
       0,     0,     0,   617,     0,     0,   617,   617,    74,   617,
     617,   617,     0,     0,     0,     0,     0,     0,   505,     0,
     506,   949,     0,   951,   952,   953,   954,   955,   956,   957,
       0,     0,     0,     0,     0,     0,   617,   617,     0,   617,
     617,   617,     0,    74,     0,     0,     0,     0,     0,   617,
     617,     0,     0,    74,     0,    74,    74,    74,   -43,     0,
       0,   -43,    75,    75,     0,     0,   617,   617,     0,   981,
     982,   983,   984,   985,   986,   987,     0,     0,     0,   -43,
     -43,   394,     0,     0,     0,   995,   399,   400,   996,     0,
     403,   404,   405,   406,     0,     0,     0,     0,     0,     0,
       0,   253,   254,     0,     0,     0,     0,     0,  1012,     0,
       0,  1013,     0,    75,     0,     0,     0,    74,    74,     0,
      74,     0,     0,   289,     0,    74,     0,   -43,     0,     0,
     -43,     0,     0,     0,    75,     0,     0,    75,     0,     0,
       0,     0,   -43,     0,     0,     0,     0,     0,     0,    75,
       0,    75,     0,     0,     0,     0,   212,    75,     0,     0,
       0,   212,     0,     0,     0,   212,     0,   212,   212,   237,
     407,   408,     0,     0,     0,     0,     0,     0,     0,   212,
     212,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
     237,   212,     0,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,   237,
       0,     0,     0,     0,     0,    74,    74,    74,    74,   387,
       0,     0,     0,   237,   237,   237,   237,   212,   212,   212,
     212,    74,     0,     0,     0,    74,    74,     0,    74,    74,
      74,     0,     0,     0,     0,     0,     0,    74,     0,     0,
       0,     0,     0,     0,     0,    75,    75,     0,     0,     0,
       0,     0,    75,     0,    75,    75,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,   407,   408,     0,     0,     0,     0,     0,
       0,    74,    74,     0,    74,    74,    74,   212,    75,     0,
      75,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,   409,   410,   411,     0,     0,
      74,     0,    74,    74,    74,    74,    74,    74,    74,     0,
       0,     0,     0,    75,     0,    75,     0,     0,     0,     0,
       0,     0,     0,   289,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    74,    74,    74,    74,    74,    74,     0,
       0,   212,     0,     0,     0,   496,    74,    74,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,    74,    74,     0,     0,     0,     0,     0,
     407,   408,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   526,   527,   528,     0,     0,     0,     0,
     237,     0,     0,   746,     0,   747,     0,     0,     0,     0,
       0,   212,   409,   410,   411,     0,   549,   550,     0,   552,
     553,   554,   555,   556,    75,    75,     0,    75,    75,     0,
       0,     0,     0,   212,   212,     0,     0,     0,     0,     0,
       0,    75,     0,     0,   237,     0,     0,   407,   408,     0,
       0,     0,     0,     0,     0,   586,   587,   588,   589,   590,
     591,   592,   212,   212,   212,     0,     0,     0,     0,     0,
       0,   212,   212,   212,     0,     0,    75,     0,     0,   409,
     410,   411,     0,     0,     0,     0,    75,     0,    75,    75,
      75,     0,     0,     0,   212,   212,     0,   212,   212,   212,
     212,   212,     0,     0,     0,     0,     0,     0,     0,     0,
     748,     0,   749,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,   212,   212,   212,   212,   212,   212,   212,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    75,     0,    75,     0,     0,     0,     0,    75,     0,
     212,     0,     0,   212,   237,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   750,     0,   751,
       0,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,   237,     0,   237,     0,     0,
       0,     0,     0,     0,   407,   408,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,     0,     0,     0,   212,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,    75,   237,     0,     0,     0,   409,   410,   411,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,     0,    75,    75,
      75,    75,     0,     0,     0,     0,     0,     0,     0,     0,
     407,   408,     0,     0,    75,     0,     0,     0,    75,    75,
       0,    75,    75,    75,     0,     0,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   409,   410,   411,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,     0,   407,   408,
       0,     0,     0,     0,    75,    75,   507,    75,    75,    75,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
     790,     0,     0,     0,     0,     0,     0,   795,     0,     0,
     409,   410,   411,    75,     0,    75,    75,    75,    75,    75,
      75,    75,     0,     0,     0,     0,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,    75,    75,    75,    75,    75,
      75,    75,   567,     0,     0,     0,     0,     0,     0,    75,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   843,     0,    75,    75,   212,     0,
       0,     0,     0,     0,     0,   212,     0,   103,   104,     0,
       2,     3,     0,   216,   212,     0,     0,     0,     0,   108,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     650,     0,     0,     0,     0,     0,   111,   407,   408,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,     0,     0,   113,   114,   115,   116,   117,     0,   409,
     410,   411,   212,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   927,     0,   119,     0,     0,     0,
       0,     0,     0,   935,   936,   937,     0,   120,   121,   122,
       0,     0,   123,   124,   125,     0,     0,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,     0,   145,     0,     0,     0,
     149,     0,     0,     0,     0,   152,     0,     0,     0,     0,
     154,     0,     0,   155,   156,   157,   158,   159,   160,   161,
     162,     0,     0,   163,     0,     0,     0,     0,     0,   651,
     164,     0,   212,   165,     0,     0,     0,     0,     0,     0,
       0,   212,   212,   212,     0,     0,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,     0,   197,   198,
     103,   104,     0,     2,     3,     0,   216,   200,     0,     0,
       0,     0,   108,   109,   202,   203,     0,     0,     0,     0,
       0,   204,   205,   206,     0,     0,   207,   320,     0,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,     0,     0,   113,   114,   115,   116,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,   121,   122,     0,     0,   123,   124,   125,     0,     0,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,     0,   145,
       0,     0,     0,   149,     0,     0,     0,     0,   152,     0,
       0,     0,     0,   154,     0,     0,   155,   156,   157,   158,
     159,   160,   161,   162,     0,     0,   163,     0,     0,     0,
       0,     0,     0,   164,     0,     0,   165,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
       0,   197,   198,     0,     0,     0,     0,     0,     0,     0,
     200,     0,     0,     0,     0,     0,     0,   202,   203,     0,
       0,     0,     0,     0,   204,   205,   206,     0,     0,   207,
     626,   103,   104,   105,     2,     3,   106,   107,     0,     0,
       0,     0,     0,   108,   109,   110,   283,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,     0,   284,   285,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,   113,   114,   115,
     116,   117,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,   121,   122,     0,     0,   123,   124,   125,     0,
       0,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     0,   151,     0,   152,
     153,     0,     0,     0,   154,     0,     0,   155,   156,   157,
     158,   159,   160,   161,   162,     0,     0,   163,     0,     0,
       0,     0,     0,     0,   164,     0,     0,   165,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,     0,   197,   198,   199,     0,     0,   286,     0,     0,
       0,   200,   201,     0,     0,     0,     0,     0,   202,   203,
       0,     0,     0,     0,     0,   204,   205,   206,     0,   287,
     207,   103,   104,   105,     2,     3,   106,   107,     0,     0,
       0,     0,     0,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,   113,   114,   115,
     116,   117,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,   121,   122,     0,     0,   123,   124,   125,     0,
       0,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     0,   151,     0,   152,
     153,     0,     0,     0,   154,     0,     0,   155,   156,   157,
     158,   159,   160,   161,   162,     0,     0,   163,     0,     0,
       0,     0,     0,     0,   164,     0,     0,   165,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,     0,   197,   198,   199,     0,     0,     0,     0,     0,
       0,   200,   201,     0,     0,     0,     0,     0,   202,   203,
       0,     0,     0,     0,     0,   204,   205,   206,   103,   104,
     207,     2,     3,     0,   216,     0,     0,     0,     0,     0,
     108,   109,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,   113,   114,   115,   116,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   120,   121,
     122,   407,   408,   123,   124,   125,     0,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,     0,   145,     0,     0,
       0,   149,     0,   409,   410,   411,   152,     0,     0,     0,
       0,   154,     0,     0,   155,   156,   157,   158,   159,   160,
     161,   162,     0,     0,   163,     0,     0,     0,     0,   262,
       0,   164,     0,     0,   165,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   103,   104,     0,     2,     3,     0,   216,   200,     0,
       0,     0,     0,   108,   109,   202,   203,     0,     0,     0,
       0,   420,   204,   205,   206,     0,     0,   207,     0,     0,
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
       0,     0,     0,   266,   164,     0,     0,   165,     0,     0,
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
     163,     0,     0,     0,     0,     0,   268,   269,     0,     0,
     165,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,   197,   198,   103,   104,     0,
       2,     3,     0,   216,   200,     0,     0,     0,     0,   108,
     109,   202,   203,     0,     0,     0,     0,     0,   204,   205,
     206,     0,     0,   207,     0,     0,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,     0,     0,   113,   114,   115,   116,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,   121,   122,
       0,     0,   123,   124,   125,     0,     0,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,     0,   145,     0,     0,     0,
     149,     0,     0,     0,     0,   152,     0,     0,     0,     0,
     154,     0,     0,   155,   156,   157,   158,   159,   160,   161,
     162,     0,     0,   163,     0,     0,     0,     0,     0,   272,
     164,     0,     0,   165,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,     0,   197,   198,
     103,   104,     0,     2,     3,     0,   216,   200,     0,     0,
       0,     0,   108,   109,   202,   203,     0,     0,     0,     0,
       0,   204,   205,   206,     0,     0,   207,     0,     0,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,     0,     0,   113,   114,   115,   116,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,   121,   122,     0,     0,   123,   124,   125,     0,     0,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,     0,   145,
       0,     0,     0,   149,     0,     0,     0,     0,   152,     0,
       0,     0,     0,   154,     0,     0,   155,   156,   157,   158,
     159,   160,   161,   162,     0,     0,   163,     0,     0,     0,
       0,     0,     0,   164,     0,     0,   165,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
       0,   197,   198,     0,     0,     0,     0,     0,     0,     0,
     200,     0,     0,     0,     0,     0,     0,   202,   203,     0,
       0,     0,     0,     0,   204,   205,   206,     1,     0,   207,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,    14,
       0,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,    16,    17,    18,     0,     0,     0,     0,    19,     0,
       0,     0,    20,     0,     0,     0,     0,    21,    22,    23,
      24,     0,     0,     0,    25,     0,     0,     0,     0,     0,
      26,     0,     0,    27,    28,    29,     0,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   407,   408,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,    39,    40,   409,   410,   411,     0,     0,     0,
       0,     0,    41,     0,    42,    43,     0,    44,    45,     0,
       0,     0,    46,    47,     0,    48,     0,    49,     0,     0,
      50,    51,    52,     0,    53,    54,    55,     0,   229,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   407,   408,     0,     0,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
      14,     0,    63,    64,    65,     0,    15,    66,    67,    68,
      69,    70,    16,    17,    18,     0,   409,   410,   411,    19,
       0,     0,     0,    20,   677,     0,     0,     0,    21,    22,
      23,    24,     0,     0,     0,    25,     0,     0,     0,   230,
       0,    26,     0,     0,    27,    28,    29,     0,    30,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,    39,    40,     0,     0,     0,     0,     0,
       0,     0,     0,    41,   455,    42,    43,     0,    44,    45,
       0,     0,     0,    46,    47,     0,    48,     0,    49,     0,
       0,    50,    51,    52,     0,    53,    54,    55,     0,   431,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   407,   408,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,     0,     0,    61,
      62,    14,     0,    63,    64,    65,     0,    15,    66,    67,
      68,    69,    70,    16,    17,    18,     0,   409,   410,   411,
      19,     0,     0,     0,    20,     0,     0,     0,     0,    21,
      22,    23,    24,     0,     0,     0,    25,     0,   432,     0,
       0,     0,    26,     0,     0,    27,    28,    29,     0,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,    41,   456,    42,    43,     0,    44,
      45,     0,     0,     0,    46,    47,     0,    48,     0,    49,
       0,     0,    50,    51,    52,     0,    53,    54,    55,     0,
       1,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,     0,   485,
       0,     0,     0,     0,     0,     0,   407,   408,     0,     0,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,    14,     0,    63,    64,    65,     0,    15,    66,
      67,    68,    69,    70,    16,    17,    18,     0,   409,   410,
     411,    19,     0,     0,     0,    20,     0,     0,     0,     0,
      21,    22,    23,    24,     0,     0,     0,    25,     0,     0,
       0,     0,     0,    26,     0,     0,    27,    28,    29,     0,
      30,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,    41,   458,    42,    43,     0,
      44,    45,     0,     0,     0,    46,    47,     0,    48,     0,
      49,     0,     0,    50,    51,    52,     0,    53,    54,    55,
       0,     1,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   407,   408,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,    14,     0,    63,    64,    65,     0,    15,
      66,    67,    68,    69,    70,    16,    17,    18,     0,   409,
     410,   411,    19,     0,     0,     0,    20,     0,     0,     0,
       0,    21,    22,    23,    24,     0,     0,     0,    25,     0,
       0,     0,     0,     0,    26,     0,     0,    27,    28,    29,
       0,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,    41,   459,    42,    43,
       0,    44,    45,     0,     0,     0,    46,    47,     0,    48,
       0,    49,     0,     0,    50,    51,    52,     0,    53,    54,
      55,     0,   229,     0,     0,     0,     2,     3,     4,     5,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,    41,   460,    42,
      43,     0,    44,    45,     0,     0,     0,    46,    47,     0,
      48,     0,    49,     0,     0,    50,    51,    52,     0,    53,
      54,    55,     0,   431,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   407,
     408,     0,     0,    56,     0,    57,    58,    59,    60,     0,
       0,     0,     0,    61,    62,    14,     0,    63,    64,    65,
       0,    15,    66,    67,    68,    69,    70,    16,    17,    18,
       0,   409,   410,   411,    19,     0,     0,     0,    20,     0,
       0,     0,     0,    21,    22,    23,    24,     0,     0,     0,
      25,     0,     0,     0,     0,     0,    26,     0,     0,    27,
      28,    29,     0,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    41,   462,
      42,    43,     0,    44,    45,     0,     0,     0,    46,    47,
       0,    48,     0,    49,     0,     0,    50,    51,    52,     0,
      53,    54,    55,     0,   739,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     465,    42,    43,     0,    44,    45,     0,     0,     0,    46,
      47,     0,    48,     0,    49,     0,     0,    50,    51,    52,
       0,    53,    54,    55,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,     0,     0,    61,    62,    14,     0,    63,
      64,    65,   898,    15,    66,    67,    68,    69,    70,    16,
      17,    18,     0,   409,   410,   411,    19,     0,     0,     0,
      20,     0,     0,     0,     0,    21,    22,    23,    24,     0,
       0,     0,    25,     0,     0,     0,     0,     0,    26,     0,
       0,    27,    28,    29,     0,    30,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
      41,   466,    42,    43,     0,    44,    45,     0,     0,     0,
      46,    47,     0,    48,     0,    49,     0,     0,    50,    51,
      52,     0,    53,    54,    55,     0,     0,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,     0,     0,
      63,    64,    65,     0,     0,    66,    67,    68,    69,    70,
      14,     0,     0,     0,   899,     0,    15,     0,     0,     0,
       0,     0,    16,    17,    18,     0,     0,     0,     0,    19,
       0,     0,     0,    20,     0,     0,     0,     0,    21,    22,
      23,    24,     0,     0,     0,    25,   407,   408,     0,     0,
       0,    26,     0,     0,    27,    28,    29,     0,    30,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   409,   410,
     411,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,    39,    40,     0,     0,     0,     0,     0,
       0,     0,     0,    41,     0,    42,    43,     0,    44,    45,
       0,     0,     0,    46,    47,     0,    48,     0,    49,     0,
       0,    50,    51,    52,     0,    53,    54,    55,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,   687,    56,
       0,    57,    58,    59,    60,     0,     0,     0,     0,    61,
      62,     0,     0,    63,    64,    65,     0,     0,    66,    67,
      68,    69,    70,    14,     0,     0,     0,   900,     0,    15,
       0,     0,     0,     0,     0,    16,    17,    18,     0,     0,
       0,     0,    19,     0,     0,     0,    20,     0,     0,     0,
       0,    21,    22,    23,    24,     0,     0,     0,    25,   407,
     408,     0,     0,     0,    26,     0,     0,    27,    28,    29,
       0,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   409,   410,   411,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,    41,     0,    42,    43,
       0,    44,    45,     0,     0,     0,    46,    47,     0,    48,
       0,    49,     0,     0,    50,    51,    52,     0,    53,    54,
      55,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,   688,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,     0,     0,    63,    64,    65,     0,
       0,    66,    67,    68,    69,    70,    14,     0,     0,     0,
     901,     0,    15,     0,     0,     0,     0,     0,    16,    17,
      18,     0,     0,     0,     0,    19,     0,     0,     0,    20,
       0,     0,     0,     0,    21,    22,    23,    24,     0,     0,
       0,    25,   407,   408,     0,     0,     0,    26,     0,     0,
      27,    28,    29,     0,    30,     0,     0,     0,    31,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   409,   410,   411,     0,     0,     0,
       0,     0,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,    41,
       0,    42,    43,     0,    44,    45,     0,     0,     0,    46,
      47,     0,    48,     0,    49,     0,     0,    50,    51,    52,
       0,    53,    54,    55,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,     0,   689,    56,     0,    57,    58,    59,
      60,     0,     0,     0,     0,    61,    62,    14,     0,    63,
      64,    65,     0,    15,    66,    67,    68,    69,    70,    16,
      17,    18,     0,   409,   410,   411,    19,     0,     0,     0,
      20,     0,   950,     0,     0,    21,    22,    23,    24,     0,
       0,     0,    25,     0,     0,     0,     0,     0,    26,     0,
       0,    27,    28,    29,     0,    30,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
      41,   468,    42,    43,     0,    44,    45,     0,     0,     0,
      46,    47,     0,    48,     0,    49,     0,     0,    50,    51,
      52,     0,    53,    54,    55,     0,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   407,   408,     0,     0,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,    14,     0,
      63,    64,    65,     0,    15,    66,    67,    68,    69,    70,
      16,    17,    18,     0,   409,   410,   411,    19,     0,     0,
       0,    20,     0,     0,     0,     0,    21,    22,    23,    24,
     975,     0,     0,    25,     0,     0,     0,     0,     0,    26,
       0,     0,    27,    28,    29,     0,    30,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,     0,     0,
       0,    41,   469,    42,    43,     0,    44,    45,     0,     0,
       0,    46,    47,     0,    48,     0,    49,     0,     0,    50,
      51,    52,     0,    53,    54,    55,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   407,   408,     0,     0,    56,     0,    57,
      58,    59,    60,     0,     0,     0,     0,    61,    62,    14,
       0,    63,    64,    65,     0,    15,    66,    67,    68,    69,
      70,    16,    17,    18,     0,   409,   410,   411,    19,     0,
       0,     0,    20,     0,     0,     0,     0,    21,    22,    23,
      24,   976,     0,     0,    25,     0,     0,     0,     0,     0,
      26,     0,     0,    27,    28,    29,     0,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,    39,    40,     0,     0,     0,     0,     0,     0,
       0,     0,    41,   470,    42,    43,     0,    44,    45,     0,
       0,     0,    46,    47,     0,    48,     0,    49,     0,     0,
      50,    51,    52,     0,    53,    54,    55,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   407,   408,     0,     0,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
      14,     0,    63,    64,    65,     0,    15,    66,    67,    68,
      69,    70,    16,    17,    18,     0,   409,   410,   411,    19,
       0,     0,     0,    20,     0,     0,     0,     0,    21,    22,
      23,    24,   978,     0,     0,    25,     0,     0,     0,     0,
       0,    26,     0,     0,    27,    28,    29,     0,    30,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,    39,    40,     0,     0,     0,     0,     0,
       0,     0,     0,    41,   471,    42,    43,     0,    44,    45,
       0,     0,     0,    46,    47,     0,    48,     0,    49,     0,
       0,    50,    51,    52,     0,    53,    54,    55,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   407,   408,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,     0,     0,    61,
      62,    14,     0,    63,    64,    65,     0,    15,    66,    67,
      68,    69,    70,    16,    17,    18,     0,   409,   410,   411,
      19,     0,     0,     0,    20,     0,     0,     0,     0,    21,
      22,    23,    24,   979,     0,     0,    25,     0,     0,     0,
       0,     0,    26,     0,     0,    27,    28,    29,     0,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,    41,   482,    42,    43,     0,    44,
      45,     0,     0,     0,    46,    47,     0,    48,     0,    49,
       0,     0,    50,    51,    52,     0,    53,    54,    55,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   407,   408,     0,     0,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,    14,     0,    63,    64,    65,     0,    15,    66,
      67,    68,    69,    70,    16,    17,    18,     0,   409,   410,
     411,    19,     0,     0,     0,    20,     0,     0,     0,     0,
      21,    22,    23,    24,   980,     0,     0,    25,     0,     0,
       0,     0,     0,    26,     0,     0,    27,    28,    29,     0,
      30,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,    41,   483,    42,    43,     0,
      44,    45,     0,     0,     0,    46,    47,     0,    48,     0,
      49,     0,     0,    50,    51,    52,     0,    53,    54,    55,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   407,   408,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,    14,     0,    63,    64,    65,     0,    15,
      66,    67,    68,    69,    70,    16,    17,    18,     0,   409,
     410,   411,    19,     0,     0,     0,    20,     0,     0,     0,
       0,    21,    22,    23,    24,   998,     0,     0,    25,     0,
       0,     0,     0,     0,    26,     0,     0,    27,    28,    29,
       0,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,    41,   484,    42,    43,
       0,    44,    45,     0,     0,     0,    46,    47,     0,    48,
       0,    49,     0,     0,    50,    51,    52,     0,    53,    54,
      55,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   407,   408,
       0,     0,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,    14,     0,    63,    64,    65,     0,
      15,    66,    67,    68,    69,    70,    16,    17,    18,     0,
     409,   410,   411,    19,     0,     0,     0,    20,     0,     0,
       0,     0,    21,    22,    23,    24,   999,     0,     0,    25,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
      29,     0,    30,     0,     0,     0,    31,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,    41,   562,    42,
      43,     0,    44,    45,     0,     0,     0,    46,    47,     0,
      48,     0,    49,     0,     0,    50,    51,    52,     0,    53,
      54,    55,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   407,
     408,     0,     0,    56,     0,    57,    58,    59,    60,     0,
       0,     0,     0,    61,    62,    14,     0,    63,    64,    65,
       0,    15,    66,    67,    68,    69,    70,    16,    17,    18,
       0,   409,   410,   411,    19,     0,     0,     0,    20,     0,
       0,     0,     0,    21,    22,    23,    24,  1001,     0,     0,
      25,     0,     0,     0,     0,     0,    26,     0,     0,    27,
      28,    29,     0,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    41,   566,
      42,    43,     0,    44,    45,     0,     0,     0,    46,    47,
       0,    48,     0,    49,     0,     0,    50,    51,    52,     0,
      53,    54,    55,     0,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     407,   408,     0,     0,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,    14,     0,    63,    64,
      65,     0,    15,    66,    67,    68,    69,    70,    16,    17,
      18,     0,   409,   410,   411,    19,     0,     0,     0,    20,
       0,     0,     0,     0,    21,    22,    23,    24,  1002,     0,
       0,    25,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,    29,     0,    30,     0,     0,     0,    31,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,    41,
     635,    42,    43,     0,    44,    45,     0,     0,     0,    46,
      47,     0,    48,     0,    49,     0,     0,    50,    51,    52,
       0,    53,    54,    55,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,     0,     0,    61,    62,    14,     0,    63,
      64,    65,     0,    15,    66,    67,    68,    69,    70,    16,
      17,    18,     0,   409,   410,   411,    19,     0,     0,     0,
      20,     0,     0,     0,     0,    21,    22,    23,    24,  1003,
       0,     0,    25,     0,     0,     0,     0,     0,    26,     0,
       0,    27,    28,    29,     0,    30,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
      41,   639,    42,    43,     0,    44,    45,     0,     0,     0,
      46,    47,     0,    48,     0,    49,     0,     0,    50,    51,
      52,     0,    53,    54,    55,     0,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   407,   408,     0,     0,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,    14,     0,
      63,    64,    65,     0,    15,    66,    67,    68,    69,    70,
      16,    17,    18,     0,   409,   410,   411,    19,     0,     0,
       0,    20,     0,     0,     0,     0,    21,    22,    23,    24,
    1010,     0,     0,    25,     0,     0,     0,     0,     0,    26,
       0,     0,    27,    28,    29,     0,    30,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,     0,     0,
       0,    41,   641,    42,    43,     0,    44,    45,     0,     0,
       0,    46,    47,     0,    48,     0,    49,     0,     0,    50,
      51,    52,     0,    53,    54,    55,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   407,   408,     0,     0,    56,     0,    57,
      58,    59,    60,     0,     0,     0,     0,    61,    62,    14,
       0,    63,    64,    65,     0,    15,    66,    67,    68,    69,
      70,    16,    17,    18,     0,   409,   410,   411,    19,     0,
       0,     0,    20,     0,     0,     0,     0,    21,    22,    23,
      24,  1011,     0,     0,    25,     0,     0,     0,     0,     0,
      26,     0,     0,    27,    28,    29,     0,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,    39,    40,     0,     0,     0,     0,     0,     0,
       0,     0,    41,   642,    42,    43,     0,    44,    45,     0,
       0,     0,    46,    47,     0,    48,     0,    49,     0,     0,
      50,    51,    52,     0,    53,    54,    55,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   407,   408,     0,     0,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
      14,     0,    63,    64,    65,     0,    15,    66,    67,    68,
      69,    70,    16,    17,    18,     0,   409,   410,   411,    19,
       0,     0,     0,    20,     0,     0,     0,     0,    21,    22,
      23,    24,  1020,     0,     0,    25,     0,     0,     0,     0,
       0,    26,     0,     0,    27,    28,    29,     0,    30,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,    39,    40,     0,     0,     0,     0,     0,
       0,     0,     0,    41,   645,    42,    43,     0,    44,    45,
       0,     0,     0,    46,    47,     0,    48,     0,    49,     0,
       0,    50,    51,    52,     0,    53,    54,    55,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   407,   408,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,     0,     0,    61,
      62,    14,     0,    63,    64,    65,     0,    15,    66,    67,
      68,    69,    70,    16,    17,    18,     0,   409,   410,   411,
      19,     0,     0,     0,    20,     0,     0,     0,     0,    21,
      22,    23,    24,  1021,     0,     0,    25,     0,     0,     0,
       0,     0,    26,     0,     0,    27,    28,    29,     0,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,    41,   714,    42,    43,     0,    44,
      45,     0,     0,     0,    46,    47,     0,    48,     0,    49,
       0,     0,    50,    51,    52,     0,    53,    54,    55,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   407,   408,     0,     0,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,    14,     0,    63,    64,    65,     0,    15,    66,
      67,    68,    69,    70,    16,    17,    18,     0,   409,   410,
     411,    19,     0,     0,     0,    20,     0,     0,     0,     0,
      21,    22,    23,    24,     0,     0,     0,    25,     0,     0,
       0,     0,     0,    26,     0,     0,    27,    28,    29,     0,
      30,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,    41,   715,    42,    43,     0,
      44,    45,     0,     0,     0,    46,    47,     0,    48,     0,
      49,     0,     0,    50,    51,    52,     0,    53,    54,    55,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   407,   408,     0,     0,     0,     0,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,     0,     0,    63,    64,    65,     0,     0,
      66,    67,    68,    69,    70,   409,   410,   411,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,     0,     0,     0,     0,   407,
     408,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
       0,   409,   410,   411,     0,     0,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,     0,     0,   407,   408,     0,
       0,     0,     0,     0,     0,   690,     0,     0,     0,     0,
     407,   408,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,   409,
     410,   411,   407,   408,     0,     0,     0,     0,     0,     0,
       0,     0,   409,   410,   411,   407,   408,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,   409,   410,   411,   407,   408,     0,
       0,   691,     0,     0,     0,     0,     0,   409,   410,   411,
       0,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,   409,
     410,   411,   407,   408,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   692,
       0,     0,     0,     0,   409,   410,   411,   407,   408,     0,
       0,     0,   693,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
       0,     0,     0,     0,   694,     0,     0,     0,     0,   409,
     410,   411,   407,   408,     0,     0,     0,   695,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,   407,   408,     0,     0,     0,     0,   696,
       0,     0,     0,     0,   409,   410,   411,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     0,     0,     0,   409,   410,   411,     0,     0,
       0,     0,   407,   408,   697,     0,     0,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,   409,   410,   411,   407,   408,   698,
       0,     0,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   407,   408,     0,   409,
     410,   411,     0,     0,   699,     0,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,   700,   407,   408,   409,   410,
     411,     0,     0,     0,     0,     0,     0,     0,     0,   407,
     408,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,   409,   410,
     411,   407,   408,     0,   701,     0,     0,     0,     0,     0,
       0,   409,   410,   411,     0,     0,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,   409,   410,   411,     0,   407,   408,   702,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,   703,   409,
     410,   411,   407,   408,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   706,     0,
       0,     0,     0,     0,   409,   410,   411,   407,   408,     0,
       0,   713,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,   407,
     408,     0,     0,   718,     0,     0,     0,     0,     0,   409,
     410,   411,   407,   408,     0,     0,     0,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,   409,   410,   411,   407,   408,     0,     0,     0,   719,
       0,     0,     0,     0,   409,   410,   411,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     0,     0,     0,     0,   409,   410,   411,     0,
       0,   407,   408,     0,   722,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,   409,   410,   411,   407,   408,     0,   757,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,     0,
       0,   773,     0,     0,     0,     0,   407,   408,   409,   410,
     411,     0,     0,     0,   775,     0,     0,     0,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,   407,   408,   776,     0,   409,   410,
     411,     0,     0,     0,     0,     0,     0,   407,   408,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,   409,   410,   411,   407,
     408,     0,     0,   779,     0,     0,     0,     0,     0,   409,
     410,   411,     0,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,   409,   410,   411,     0,     0,     0,     0,   780,   407,
     408,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   782,   407,
     408,   409,   410,   411,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   794,     0,     0,     0,
       0,   409,   410,   411,   407,   408,     0,     0,     0,   853,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,     0,
       0,   855,   407,   408,     0,     0,   409,   410,   411,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   409,   410,   411,     0,     0,     0,
       0,   858,   407,   408,     0,     0,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   407,
     408,   877,     0,     0,   409,   410,   411,     0,     0,     0,
       0,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,     0,     0,     0,   407,   408,
       0,   409,   410,   411,     0,     0,   878,     0,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,     0,
     409,   410,   411,     0,   879,   407,   408,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,   409,   410,   411,
     407,   408,     0,     0,   945,     0,     0,     0,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,   407,
     408,   946,   409,   410,   411,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,     0,     0,     0,   407,   408,     0,     0,
     947,   409,   410,   411,     0,     0,     0,     0,     0,   407,
     408,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,     0,     0,     0,   409,   410,
     411,     0,     0,     0,     0,   716,     0,     0,     0,   407,
     408,   409,   410,   411,     0,     0,     0,     0,     0,     0,
       0,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,     0,     0,     0,     0,
     752,   409,   410,   411,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   409,   410,   411,   758,
     407,   408,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   759,     0,     0,     0,
       0,     0,   409,   410,   411,     0,     0,     0,     0,   761,
     407,   408,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,     0,
       0,     0,     0,   407,   408,     0,     0,     0,     0,   763,
       0,     0,   409,   410,   411,     0,     0,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,   407,   408,     0,   766,   409,   410,   411,     0,     0,
       0,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   409,   410,   411,     0,     0,     0,     0,
     767,   407,   408,     0,     0,     0,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,   409,   410,   411,   407,   408,     0,     0,
     769,     0,     0,     0,     0,     0,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
     407,   408,     0,   770,     0,     0,     0,     0,   409,   410,
     411,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,     0,     0,     0,     0,     0,
       0,   771,   409,   410,   411,   407,   408,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   407,   408,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,   409,   410,   411,
       0,   772,     0,     0,     0,   407,   408,     0,     0,     0,
     409,   410,   411,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
     407,   408,     0,     0,     0,     0,   777,   409,   410,   411,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,     0,
     778,     0,   409,   410,   411,     0,     0,     0,     0,   407,
     408,     0,     0,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,     0,     0,   798,     0,     0,     0,     0,
       0,   409,   410,   411,   407,   408,     0,     0,   827,     0,
       0,     0,     0,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,   407,
     408,     0,     0,     0,     0,   829,   409,   410,   411,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,     0,     0,     0,
     830,   409,   410,   411,   407,   408,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,   409,   410,   411,   833,
       0,     0,     0,   407,   408,     0,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   407,   408,
       0,     0,     0,     0,   854,   409,   410,   411,     0,     0,
       0,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,   407,   408,     0,     0,   857,
     409,   410,   411,     0,     0,     0,     0,     0,   407,   408,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,   409,   410,   411,
       0,     0,     0,     0,   882,   407,   408,     0,     0,     0,
     409,   410,   411,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   409,   410,   411,
     407,   408,     0,   884,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   887,   407,
     408,     0,   409,   410,   411,     0,     0,     0,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,   888,     0,     0,     0,     0,
       0,   409,   410,   411,   407,   408,     0,     0,   890,     0,
       0,     0,     0,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,   407,   408,   891,   409,   410,   411,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   409,   410,   411,   407,   408,
     892,     0,     0,     0,     0,     0,     0,     0,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,     0,     0,     0,     0,   895,
     409,   410,   411,   407,   408,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   407,   408,
       0,     0,     0,     0,   896,   409,   410,   411,     0,     0,
       0,   407,   408,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
     409,   410,   411,   909,     0,     0,     0,   407,   408,     0,
       0,     0,     0,   409,   410,   411,     0,     0,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,   407,   408,     0,     0,   929,   409,
     410,   411,     0,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   409,   410,   411,     0,
       0,     0,     0,   931,   407,   408,     0,     0,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,     0,   932,     0,
       0,     0,     0,     0,     0,     0,   409,   410,   411,   407,
     408,   938,     0,     0,     0,     0,     0,     0,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,   407,   408,     0,     0,   939,     0,     0,
       0,   409,   410,   411,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,     0,
       0,     0,     0,     0,   970,   409,   410,   411,   407,   408,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
     409,   410,   411,     0,   973,     0,     0,     0,   407,   408,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   407,   408,     0,     0,     0,     0,   989,
     409,   410,   411,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,   407,
     408,     0,     0,   990,     0,   409,   410,   411,     0,     0,
       0,     0,   407,   408,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,   409,   410,   411,     0,     0,     0,     0,   992,   407,
     408,     0,     0,     0,   409,   410,   411,     0,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,     0,     0,     0,     0,     0,     0,
       0,   409,   410,   411,   407,   408,     0,     0,   993,     0,
       0,     0,     0,     0,     0,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,     0,
       0,     0,     0,  1006,   407,   408,   409,   410,   411,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,     0,     0,  1009,
       0,     0,     0,     0,     0,     0,   409,   410,   411,   407,
     408,     0,  1014,     0,     0,     0,     0,     0,     0,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,     0,     0,     0,     0,     0,     0,     0,  1015,
       0,   409,   410,   411,   407,   408,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   407,   408,
       0,     0,     0,     0,  1017,     0,   409,   410,   411,     0,
       0,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,     0,     0,     0,     0,     0,     0,
     409,   410,   411,     0,  1018,     0,     0,     0,   407,   408,
       0,     0,     0,     0,     0,     0,   301,   302,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,   407,   408,     0,     0,  1026,
     409,   410,   411,     0,     0,   301,   302,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     0,     0,     0,     0,     0,   409,   410,   411,
     407,   408,     0,     0,  1027,     0,   863,     0,     0,     0,
       0,     0,   301,   302,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,  1030,     0,
       0,     0,   409,   410,   411,   866,     0,   407,   408,     0,
       0,   301,   302,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   407,   408,  1031,   409,
     410,   411,   919,     0,     0,     0,   301,   302,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     0,     0,     0,     0,  1034,     0,     0,   409,   410,
     411,   922,     0,   407,   408,     0,     0,     0,     0,     0,
       0,     0,     0,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     0,     0,     0,     0,
    1035,     0,   407,   408,     0,   409,   410,   411,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   409,   410,   411,   407,   408,     0,
       0,     0,     0,   726,     0,     0,     0,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
       0,     0,     0,     0,     0,     0,     0,     0,   728,   409,
     410,   411,   407,   408,     0,     0,     0,     0,     0,     0,
       0,   808,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,   407,   408,     0,
       0,     0,     0,     0,   409,   410,   411,   810,     0,     0,
     407,   408,   394,   421,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,     0,   409,
     410,   411,     0,     0,     0,     0,   407,   408,     0,     0,
       0,     0,   409,   410,   411,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   409,   410,
     411,   407,   408,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,   409,   410,   411,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   409,   410,   411
};

static const yytype_int16 yycheck[] =
{
      16,    17,    18,    19,    94,    95,     1,     7,     8,     7,
       8,   243,    31,    32,   228,     7,     8,    28,   249,    96,
      97,    98,    99,    36,   279,   243,    42,    43,    24,    45,
      46,    47,    48,    49,    50,    24,    52,    53,    54,    55,
       7,     8,     9,    10,    60,     7,     8,     9,     4,     5,
      66,    67,    68,    24,    70,     3,    21,    22,    24,    25,
      26,    27,     7,     8,    30,    31,    32,    78,    28,    29,
      86,    87,    88,    21,    22,    91,    28,    33,   243,    31,
      32,    92,    93,    94,    95,    24,    24,    25,    26,    27,
       3,    87,    30,    31,    32,     3,   112,   113,    87,     3,
      23,   117,   118,   243,     3,    28,    29,    59,    21,    22,
      15,    34,    35,    21,    22,    20,    87,    21,    22,    24,
       3,    26,    23,    22,    72,   243,    78,    28,    29,     4,
       5,    32,    33,    34,    35,    69,    98,    71,   154,    22,
      92,    93,    94,    95,     7,     8,     9,    10,    87,   453,
     454,   167,    24,    25,    26,    27,    69,   243,    30,    31,
      32,    69,   243,   243,     3,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    24,    25,
      26,    27,    21,    22,    30,    31,    32,   203,    51,   112,
     113,   207,   243,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,   243,    24,    25,    26,
      27,   112,   113,    30,    31,    32,   243,   448,   432,   474,
       4,   476,     3,    21,    22,    24,    25,    26,    27,     3,
     243,    30,    31,    32,     7,     8,     9,    10,    25,     3,
      21,    22,     4,   243,   243,   243,   262,    21,    22,     3,
     266,   243,   268,   269,   112,   113,   272,    21,    22,     8,
     243,   277,   278,     7,   341,   342,   343,    21,    22,     6,
       7,     8,     9,    10,   290,   242,   242,    10,   244,     3,
      10,    79,   112,   113,     0,     1,   144,    85,   304,   305,
     306,   307,   308,   309,   310,   311,   315,    21,    22,     3,
       0,    24,    25,    26,    27,   300,   244,    30,    31,    32,
      84,    24,   323,   242,   144,   145,   146,    21,    22,    21,
      93,   242,   242,   339,   340,   230,   242,   279,    24,    25,
      26,    27,   243,   243,    30,    31,    32,     7,     8,     9,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   243,   243,   375,
       7,     8,     9,   315,   243,   442,   382,   383,    10,   385,
     386,   323,   244,   389,   390,     7,     8,     9,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   610,   611,   244,     7,
       8,     9,    10,   419,   420,   421,   243,   423,   313,   425,
     243,   243,   242,    72,   244,   243,    24,    24,    25,    26,
      27,   511,   243,    30,    31,    32,    85,   244,   444,   445,
     446,   447,   443,   449,   243,   243,   452,   243,   243,   455,
     456,   228,   458,   459,   460,   244,   462,   243,   243,   465,
     466,   243,   468,   469,   470,   471,     4,     5,   243,     7,
       8,   477,    10,   243,   480,   481,   482,   483,   484,    78,
      24,    25,    26,    27,   243,   243,    30,    31,    32,     7,
       8,     9,    10,   243,   500,   243,   502,   243,   243,   505,
     243,   443,     7,     8,     9,    10,   243,   243,   509,    24,
     511,    24,    25,    26,    27,   243,    87,    30,    31,    32,
      24,   243,   228,    38,    39,    40,    41,    42,    43,    44,
     242,   244,   474,   737,   476,     7,     8,     9,    10,   243,
      24,    25,    26,    27,   439,   243,    30,    31,    32,    24,
     243,   557,     7,     8,     9,   243,   562,   242,   244,   243,
     566,     7,     8,     9,   848,   849,   850,   509,   243,   511,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   242,   233,    24,    25,    26,    27,   243,
     243,    30,    31,    32,   300,   243,   602,   303,   604,   243,
     243,   243,   251,   498,   243,   243,   242,    24,    25,    26,
      27,   317,   242,    30,    31,    32,   243,    24,    25,    26,
      27,     0,     1,    30,    31,    32,   627,   242,    24,   635,
     243,   243,   242,   639,   242,   641,   642,   244,   244,   645,
     244,   244,   244,   244,   244,     7,    25,   244,   244,    28,
       8,   243,    31,    32,     9,   432,   723,   242,     7,   112,
     113,   438,     8,    87,   441,     9,    96,    24,    25,    26,
      27,     7,   876,    30,    31,    32,    21,    67,   244,   244,
      59,   244,   243,     6,   243,   627,     9,    10,   243,    10,
      32,   144,   145,   146,    85,    18,   243,   243,   243,    78,
     244,     7,   708,   709,   710,     8,    24,     9,    95,   715,
     716,   242,   244,    92,    93,    94,    95,   243,     8,   244,
     726,   244,   728,   244,   244,   431,   432,   244,    67,   242,
       9,   243,   111,   243,   440,   243,     7,    70,   244,   242,
     746,   242,   748,    66,   750,   242,   242,   242,    21,    71,
     244,   244,   758,   759,   244,   761,   243,   763,   242,   244,
     766,   767,   244,   769,   770,   771,   772,   244,   755,   443,
      -1,   777,   778,   422,   290,    -1,   509,   725,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   436,    -1,   242,
      -1,   244,   798,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   808,   242,   810,    -1,    -1,    -1,    -1,   132,
      -1,   134,   135,   136,    -1,   138,    -1,   140,    -1,    -1,
     143,   827,    -1,   829,   830,   242,    -1,   833,    -1,    -1,
      -1,    -1,    -1,   839,   840,   242,    -1,   486,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   851,    -1,    -1,   854,   228,
     229,   857,    -1,    -1,    -1,    -1,    -1,   863,    -1,    -1,
     866,   510,    -1,   512,   513,   514,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   882,    -1,   884,    -1,
      -1,   887,   888,    -1,    -1,    -1,    -1,    -1,    -1,   895,
     896,    -1,    -1,    -1,   217,   672,    -1,   674,   675,   676,
     279,    -1,   225,   909,   610,   611,    -1,   613,   614,    -1,
      -1,    -1,    -1,   919,    -1,    -1,   922,    -1,    -1,    -1,
      -1,   300,    -1,   929,   303,   931,   932,    -1,    -1,    -1,
      -1,    -1,   938,   939,    -1,    -1,   315,    -1,   317,    -1,
      -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   662,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   970,    -1,   615,   973,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   628,
      -1,    -1,    -1,   989,   990,    -1,   992,   993,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1006,    -1,    -1,  1009,    -1,    -1,    -1,    -1,  1014,  1015,
      -1,  1017,  1018,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1026,  1027,    -1,   800,  1030,  1031,    -1,    -1,  1034,  1035,
     736,   737,    -1,   739,    -1,    -1,    -1,    -1,   744,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,   431,   432,    -1,    -1,    -1,    -1,    -1,   438,
      -1,   440,   441,    -1,   443,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     0,     1,   725,    -1,    -1,    -1,
      -1,    -1,    -1,   860,    -1,    -1,    -1,   864,   865,    -1,
     867,   868,   869,    -1,    -1,   474,    -1,   476,    -1,    25,
      -1,    -1,    28,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,   817,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,   112,   113,
     509,    -1,   511,    59,   783,   784,   785,   786,   844,   845,
     846,   847,    -1,   920,   921,    -1,   923,   924,   925,    -1,
     799,    -1,    78,    -1,   803,   804,   805,   806,   807,    -1,
     144,   145,   146,    -1,    -1,    -1,    92,    93,    94,    95,
     876,    -1,    -1,    -1,   951,    -1,    -1,   954,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,   981,   911,    -1,   984,    -1,    -1,
      -1,    -1,   861,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   870,   871,   872,   873,   874,    -1,    -1,    -1,    -1,
      -1,   610,   611,    -1,   613,   614,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   949,    -1,    -1,   952,   953,   627,   955,
     956,   957,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,
     244,   910,    -1,   912,   913,   914,   915,   916,   917,   918,
      -1,    -1,    -1,    -1,    -1,    -1,   982,   983,    -1,   985,
     986,   987,    -1,   662,    -1,    -1,    -1,    -1,    -1,   995,
     996,    -1,    -1,   672,    -1,   674,   675,   676,     0,    -1,
      -1,     3,   228,   229,    -1,    -1,  1012,  1013,    -1,   958,
     959,   960,   961,   962,   963,   964,    -1,    -1,    -1,    21,
      22,    23,    -1,    -1,    -1,   974,    28,    29,   977,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    -1,    -1,    -1,   997,    -1,
      -1,  1000,    -1,   279,    -1,    -1,    -1,   736,   737,    -1,
     739,    -1,    -1,    60,    -1,   744,    -1,    69,    -1,    -1,
      72,    -1,    -1,    -1,   300,    -1,    -1,   303,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,   315,
      -1,   317,    -1,    -1,    -1,    -1,    15,   323,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    24,    -1,    26,    27,    28,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,   800,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   817,    -1,
      59,    60,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,   844,   845,   846,   847,   166,
      -1,    -1,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   860,    -1,    -1,    -1,   864,   865,    -1,   867,   868,
     869,    -1,    -1,    -1,    -1,    -1,    -1,   876,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,    -1,
      -1,    -1,   438,    -1,   440,   441,    -1,   443,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   911,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,   920,   921,    -1,   923,   924,   925,   166,   474,    -1,
     476,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   144,   145,   146,    -1,    -1,
     949,    -1,   951,   952,   953,   954,   955,   956,   957,    -1,
      -1,    -1,    -1,   509,    -1,   511,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   290,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   981,   982,   983,   984,   985,   986,   987,    -1,
      -1,   230,    -1,    -1,    -1,   312,   995,   996,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,  1012,  1013,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   350,   351,   352,    -1,    -1,    -1,    -1,
     279,    -1,    -1,   242,    -1,   244,    -1,    -1,    -1,    -1,
      -1,   290,   144,   145,   146,    -1,   373,   374,    -1,   376,
     377,   378,   379,   380,   610,   611,    -1,   613,   614,    -1,
      -1,    -1,    -1,   312,   313,    -1,    -1,    -1,    -1,    -1,
      -1,   627,    -1,    -1,   323,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,   412,   413,   414,   415,   416,
     417,   418,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,
      -1,   350,   351,   352,    -1,    -1,   662,    -1,    -1,   144,
     145,   146,    -1,    -1,    -1,    -1,   672,    -1,   674,   675,
     676,    -1,    -1,    -1,   373,   374,    -1,   376,   377,   378,
     379,   380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,   244,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,   412,   413,   414,   415,   416,   417,   418,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     736,   737,    -1,   739,    -1,    -1,    -1,    -1,   744,    -1,
     439,    -1,    -1,   442,   443,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,   244,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   474,    -1,   476,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   800,    -1,    -1,    -1,    -1,   498,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     509,   817,   511,    -1,    -1,    -1,   144,   145,   146,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   844,   845,
     846,   847,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,   860,    -1,    -1,    -1,   864,   865,
      -1,   867,   868,   869,    -1,    -1,    -1,    -1,    -1,    -1,
     876,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   911,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,   920,   921,   244,   923,   924,   925,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   627,    -1,
     707,    -1,    -1,    -1,    -1,    -1,    -1,   714,    -1,    -1,
     144,   145,   146,   949,    -1,   951,   952,   953,   954,   955,
     956,   957,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,   981,   982,   983,   984,   985,
     986,   987,   244,    -1,    -1,    -1,    -1,    -1,    -1,   995,
     996,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   781,    -1,  1012,  1013,   707,    -1,
      -1,    -1,    -1,    -1,    -1,   714,    -1,     4,     5,    -1,
       7,     8,    -1,    10,   723,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     244,    -1,    -1,    -1,    -1,    -1,    33,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    61,    62,    63,    64,    -1,   144,
     145,   146,   781,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   881,    -1,    93,    -1,    -1,    -1,
      -1,    -1,    -1,   890,   891,   892,    -1,   104,   105,   106,
      -1,    -1,   109,   110,   111,    -1,    -1,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,    -1,   133,    -1,    -1,    -1,
     137,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
     147,    -1,    -1,   150,   151,   152,   153,   154,   155,   156,
     157,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,   244,
     167,    -1,   881,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   890,   891,   892,    -1,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,    -1,   215,   216,
       4,     5,    -1,     7,     8,    -1,    10,   224,    -1,    -1,
      -1,    -1,    16,    17,   231,   232,    -1,    -1,    -1,    -1,
      -1,   238,   239,   240,    -1,    -1,   243,   244,    -1,    33,
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
      -1,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
      -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     224,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,
      -1,    -1,    -1,    -1,   238,   239,   240,    -1,    -1,   243,
     244,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,    62,
      63,    64,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,   106,    -1,    -1,   109,   110,   111,    -1,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,   140,    -1,   142,
     143,    -1,    -1,    -1,   147,    -1,    -1,   150,   151,   152,
     153,   154,   155,   156,   157,    -1,    -1,   160,    -1,    -1,
      -1,    -1,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,    -1,   215,   216,   217,    -1,    -1,   220,    -1,    -1,
      -1,   224,   225,    -1,    -1,    -1,    -1,    -1,   231,   232,
      -1,    -1,    -1,    -1,    -1,   238,   239,   240,    -1,   242,
     243,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,    62,
      63,    64,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,   106,    -1,    -1,   109,   110,   111,    -1,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,   140,    -1,   142,
     143,    -1,    -1,    -1,   147,    -1,    -1,   150,   151,   152,
     153,   154,   155,   156,   157,    -1,    -1,   160,    -1,    -1,
      -1,    -1,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,    -1,   215,   216,   217,    -1,    -1,    -1,    -1,    -1,
      -1,   224,   225,    -1,    -1,    -1,    -1,    -1,   231,   232,
      -1,    -1,    -1,    -1,    -1,   238,   239,   240,     4,     5,
     243,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      16,    17,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
     106,   112,   113,   109,   110,   111,    -1,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,    -1,   133,    -1,    -1,
      -1,   137,    -1,   144,   145,   146,   142,    -1,    -1,    -1,
      -1,   147,    -1,    -1,   150,   151,   152,   153,   154,   155,
     156,   157,    -1,    -1,   160,    -1,    -1,    -1,    -1,   165,
      -1,   167,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,    -1,   215,
     216,     4,     5,    -1,     7,     8,    -1,    10,   224,    -1,
      -1,    -1,    -1,    16,    17,   231,   232,    -1,    -1,    -1,
      -1,   242,   238,   239,   240,    -1,    -1,   243,    -1,    -1,
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
     160,    -1,    -1,    -1,    -1,    -1,   166,   167,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,    -1,   215,   216,     4,     5,    -1,
       7,     8,    -1,    10,   224,    -1,    -1,    -1,    -1,    16,
      17,   231,   232,    -1,    -1,    -1,    -1,    -1,   238,   239,
     240,    -1,    -1,   243,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      -1,    -1,   109,   110,   111,    -1,    -1,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,    -1,   133,    -1,    -1,    -1,
     137,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
     147,    -1,    -1,   150,   151,   152,   153,   154,   155,   156,
     157,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,   166,
     167,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,    -1,   215,   216,
       4,     5,    -1,     7,     8,    -1,    10,   224,    -1,    -1,
      -1,    -1,    16,    17,   231,   232,    -1,    -1,    -1,    -1,
      -1,   238,   239,   240,    -1,    -1,   243,    -1,    -1,    33,
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
      -1,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
      -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     224,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,
      -1,    -1,    -1,    -1,   238,   239,   240,     3,    -1,   243,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    -1,    93,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   113,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,   148,   149,   144,   145,   146,    -1,    -1,    -1,
      -1,    -1,   158,    -1,   160,   161,    -1,   163,   164,    -1,
      -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,    -1,
     176,   177,   178,    -1,   180,   181,   182,    -1,     3,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,   214,    -1,
     216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,
      45,    -1,   228,   229,   230,    -1,    51,   233,   234,   235,
     236,   237,    57,    58,    59,    -1,   144,   145,   146,    64,
      -1,    -1,    -1,    68,   244,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,
      -1,    86,    -1,    -1,    89,    90,    91,    -1,    93,    -1,
      -1,    -1,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,   242,   160,   161,    -1,   163,   164,
      -1,    -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,
      -1,   176,   177,   178,    -1,   180,   181,   182,    -1,     3,
      -1,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,   214,
      -1,   216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,
     225,    45,    -1,   228,   229,   230,    -1,    51,   233,   234,
     235,   236,   237,    57,    58,    59,    -1,   144,   145,   146,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    82,    -1,
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
       3,    -1,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    22,
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
      -1,     3,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
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
     182,    -1,     3,    -1,    -1,    -1,     7,     8,     9,    10,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,   242,   160,
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
     180,   181,   182,    -1,     3,    -1,    -1,    -1,     7,     8,
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
     229,   230,    50,    51,   233,   234,   235,   236,   237,    57,
      58,    59,    -1,   144,   145,   146,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    89,    90,    91,    -1,    93,    -1,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,
     148,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,   242,   160,   161,    -1,   163,   164,    -1,    -1,    -1,
     168,   169,    -1,   171,    -1,   173,    -1,    -1,   176,   177,
     178,    -1,   180,   181,   182,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,   214,    -1,   216,   217,
     218,   219,    -1,    -1,    -1,    -1,   224,   225,    -1,    -1,
     228,   229,   230,    -1,    -1,   233,   234,   235,   236,   237,
      45,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,    -1,    80,   112,   113,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    91,    -1,    93,    -1,
      -1,    -1,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,   160,   161,    -1,   163,   164,
      -1,    -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,
      -1,   176,   177,   178,    -1,   180,   181,   182,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,   244,   214,
      -1,   216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,
     225,    -1,    -1,   228,   229,   230,    -1,    -1,   233,   234,
     235,   236,   237,    45,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    -1,    -1,    -1,    80,   112,
     113,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,    91,
      -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,   160,   161,
      -1,   163,   164,    -1,    -1,    -1,   168,   169,    -1,   171,
      -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,   181,
     182,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,   244,   214,    -1,   216,   217,   218,   219,    -1,    -1,
      -1,    -1,   224,   225,    -1,    -1,   228,   229,   230,    -1,
      -1,   233,   234,   235,   236,   237,    45,    -1,    -1,    -1,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,
      -1,    80,   112,   113,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    91,    -1,    93,    -1,    -1,    -1,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,   160,   161,    -1,   163,   164,    -1,    -1,    -1,   168,
     169,    -1,   171,    -1,   173,    -1,    -1,   176,   177,   178,
      -1,   180,   181,   182,    -1,    -1,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,   244,   214,    -1,   216,   217,   218,
     219,    -1,    -1,    -1,    -1,   224,   225,    45,    -1,   228,
     229,   230,    -1,    51,   233,   234,   235,   236,   237,    57,
      58,    59,    -1,   144,   145,   146,    64,    -1,    -1,    -1,
      68,    -1,    70,    -1,    -1,    73,    74,    75,    76,    -1,
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
      73,    74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    91,    -1,
      93,    -1,    -1,    -1,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,   148,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,   242,   160,   161,    -1,
     163,   164,    -1,    -1,    -1,   168,   169,    -1,   171,    -1,
     173,    -1,    -1,   176,   177,   178,    -1,   180,   181,   182,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,   214,    -1,   216,   217,   218,   219,    -1,    -1,    -1,
      -1,   224,   225,    -1,    -1,   228,   229,   230,    -1,    -1,
     233,   234,   235,   236,   237,   144,   145,   146,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   144,   145,   146,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,
     112,   113,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,   144,
     145,   146,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,   112,   113,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,
      -1,   244,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,   144,
     145,   146,   112,   113,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,
      -1,    -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,
      -1,    -1,   244,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,   144,
     145,   146,   112,   113,    -1,    -1,    -1,   244,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,   244,
      -1,    -1,    -1,    -1,   144,   145,   146,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,   112,   113,   244,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   144,   145,   146,   112,   113,   244,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,   144,
     145,   146,    -1,    -1,   244,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,   244,   112,   113,   144,   145,
     146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,   144,   145,
     146,   112,   113,    -1,   244,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   144,   145,   146,    -1,   112,   113,   244,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,   244,   144,
     145,   146,   112,   113,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,
      -1,   244,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,   112,   113,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   144,   145,   146,   112,   113,    -1,    -1,    -1,   244,
      -1,    -1,    -1,    -1,   144,   145,   146,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,
      -1,   112,   113,    -1,   244,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   144,   145,   146,   112,   113,    -1,   244,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   244,    -1,    -1,    -1,    -1,   112,   113,   144,   145,
     146,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   112,   113,   244,    -1,   144,   145,
     146,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,   144,   145,   146,   112,
     113,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,   144,   145,   146,    -1,    -1,    -1,    -1,   244,   112,
     113,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,   112,
     113,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,   244,    -1,    -1,    -1,
      -1,   144,   145,   146,   112,   113,    -1,    -1,    -1,   244,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   244,   112,   113,    -1,    -1,   144,   145,   146,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,
      -1,   244,   112,   113,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,   244,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,   112,   113,
      -1,   144,   145,   146,    -1,    -1,   244,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,    -1,   244,   112,   113,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,   144,   145,   146,
     112,   113,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,   244,   144,   145,   146,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
     244,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,   112,
     113,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,   144,   145,
     146,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,   112,
     113,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,   112,   113,    -1,    -1,    -1,    -1,
     242,   144,   145,   146,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   242,
     112,   113,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,   242,
     112,   113,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,   242,
      -1,    -1,   144,   145,   146,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   112,   113,    -1,   242,   144,   145,   146,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,
     242,   112,   113,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   144,   145,   146,   112,   113,    -1,    -1,
     242,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     112,   113,    -1,   242,    -1,    -1,    -1,    -1,   144,   145,
     146,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   242,   144,   145,   146,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,   144,   145,   146,
      -1,   242,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,
     144,   145,   146,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,   242,   144,   145,   146,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,   112,   113,    -1,    -1,   242,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,   242,   144,   145,   146,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,   144,   145,   146,   112,   113,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,   144,   145,   146,   242,
      -1,    -1,    -1,   112,   113,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,   242,   144,   145,   146,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   112,   113,    -1,    -1,   242,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,   112,   113,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,   144,   145,   146,
      -1,    -1,    -1,    -1,   242,   112,   113,    -1,    -1,    -1,
     144,   145,   146,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
     112,   113,    -1,   242,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   112,
     113,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,   112,   113,    -1,    -1,   242,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,   242,   144,   145,   146,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,   144,   145,   146,   112,   113,
     242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,
     144,   145,   146,   112,   113,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,   242,   144,   145,   146,    -1,    -1,
      -1,   112,   113,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     144,   145,   146,   242,    -1,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   112,   113,    -1,    -1,   242,   144,
     145,   146,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,
      -1,    -1,    -1,   242,   112,   113,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   112,
     113,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   112,   113,    -1,    -1,   242,    -1,    -1,
      -1,   144,   145,   146,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   242,   144,   145,   146,   112,   113,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
     144,   145,   146,    -1,   242,    -1,    -1,    -1,   112,   113,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,   242,
     144,   145,   146,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,   112,
     113,    -1,    -1,   242,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,   112,   113,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,   144,   145,   146,    -1,    -1,    -1,    -1,   242,   112,
     113,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,   112,   113,    -1,    -1,   242,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,   242,   112,   113,   144,   145,   146,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   112,
     113,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,
      -1,   144,   145,   146,   112,   113,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,   242,    -1,   144,   145,   146,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,    -1,   242,    -1,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,   242,
     144,   145,   146,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
     112,   113,    -1,    -1,   242,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   242,    -1,
      -1,    -1,   144,   145,   146,    81,    -1,   112,   113,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,   242,   144,
     145,   146,    81,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,   242,    -1,    -1,   144,   145,
     146,    81,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
     242,    -1,   112,   113,    -1,   144,   145,   146,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,   144,   145,   146,   112,   113,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,   144,
     145,   146,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,    83,    -1,    -1,
     112,   113,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,   144,
     145,   146,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,   144,   145,   146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146
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
     237,   246,   248,   251,   254,   255,   256,   257,   264,   265,
     272,   273,   274,   285,    22,   248,   243,   243,   243,     7,
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
     224,   225,   231,   232,   238,   239,   240,   243,   252,   253,
     254,   255,   257,   268,   269,   270,    10,   253,   253,   253,
     253,   270,     7,     8,     9,    98,     4,     4,   270,     3,
      84,   249,   251,   270,   270,   271,   256,   257,   258,   259,
       7,     8,     9,    10,   262,   263,   256,   273,     9,    93,
     273,     8,    10,   269,   269,     7,     8,     9,   260,   261,
     253,   253,   165,   253,   253,   253,   166,   253,   166,   167,
     253,   253,   166,   253,   253,   253,   253,   243,   243,     6,
     258,   277,   278,    19,    36,    37,   220,   242,   253,   269,
     275,   276,     7,    10,    10,   253,   253,   253,   253,     0,
       3,    21,    22,   247,    24,    38,    39,    40,    41,    42,
      43,    44,    24,    24,   258,   242,    21,   247,   253,   253,
     244,   253,   253,    51,   258,   279,   280,   258,   281,   282,
     282,   282,   271,   271,   271,   271,   242,   242,   242,   243,
     243,   243,   243,   243,     4,     5,   254,   255,   253,   253,
     243,   243,   243,   253,   253,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,    36,   243,   243,   253,   243,   243,   269,   253,   243,
     243,    10,   253,   253,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   112,   113,   144,
     145,   146,    24,    25,    26,    27,    30,    31,    32,   243,
     242,    24,    78,    24,    87,    24,    87,    87,     7,     8,
       9,     3,    82,   249,   250,   251,   249,   270,     3,    84,
     247,   247,   242,   242,   243,   243,   243,   243,   242,   243,
     263,   247,   243,   242,   242,   242,   242,   253,   242,   242,
     242,   253,   242,   253,   253,   242,   242,   253,   242,   242,
     242,   242,   253,   253,   242,   278,   242,   243,   276,   242,
     243,   243,   242,   242,   242,    22,   248,   251,   253,   253,
     253,   253,   253,   253,   253,   253,   269,   270,    24,   273,
     242,   244,   242,   244,    24,   242,   244,   244,   258,   242,
     244,   242,   244,   244,   244,   244,   244,   244,   244,     7,
       8,     9,   253,   271,   271,   271,   269,   269,   269,     7,
       8,     9,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   269,
     269,   253,   269,   269,   269,   269,   269,   243,   253,   253,
     253,   253,   242,   253,   253,   242,   242,   244,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   269,   269,   269,   269,
     269,   269,   269,   253,   253,   253,   247,   253,     7,   253,
       8,     9,    24,    87,    24,    87,    87,   250,   249,   250,
      69,     3,    21,    22,   247,   249,   270,   251,   249,   271,
     259,   253,   253,   253,   253,   263,   244,    96,   266,   267,
     253,   261,   261,   253,   253,   242,   253,   253,   253,   242,
     253,   242,   242,   253,   253,   242,   253,   253,   253,   253,
     244,   244,   278,   278,   253,     7,   253,   253,   253,   253,
     253,    21,   247,   270,   253,   253,    67,   253,     7,     8,
       9,   280,   247,   282,   247,   247,   247,   244,   244,   244,
     244,   244,   244,   244,   243,   243,   243,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   242,   242,   242,
     242,   244,   253,   244,   242,   242,   242,   253,   244,   244,
      10,   253,   244,    85,   283,   284,    83,   243,    83,   243,
     243,   253,     7,   253,     8,     9,    22,    69,    21,     3,
     250,   251,   250,   251,   247,    72,   242,   244,   242,   244,
     242,   244,   242,    24,   258,   247,    95,   244,   242,   242,
     253,   242,   253,   242,   253,   253,   242,   242,   253,   242,
     242,   242,   242,   244,   242,   244,   244,   242,   242,   244,
     244,   243,   244,   249,   249,   249,   249,   244,   244,   244,
     269,   253,   253,   253,   244,   269,   253,   253,   242,   271,
      79,   247,   283,   253,   244,   253,   244,   244,    83,   243,
      83,   243,   243,   250,    69,    71,    21,    22,   253,   253,
     253,     8,    67,   267,   253,   253,   253,   242,   253,   242,
     242,   253,   253,   242,   253,   253,   253,   253,     7,   242,
     242,   253,   253,   269,   247,   247,   247,   247,   242,   242,
     242,   242,   244,   244,   242,   244,   244,   242,   244,   253,
     247,   249,    70,    81,   247,   247,    81,   247,   247,   247,
     253,   244,   253,   244,   244,    21,    21,   244,   244,   244,
     244,   243,   242,   253,   242,   253,   253,   242,   242,   253,
     242,   242,   242,   253,   253,   242,   242,   244,    50,    49,
      49,    49,    33,   252,   252,   252,   253,   253,   253,   242,
     249,   247,   253,   249,   249,   253,   249,   249,   249,    81,
     247,   247,    81,   247,   247,   247,   250,   269,   253,   242,
     253,   242,   242,   253,   253,   269,   269,   269,   242,   242,
     253,   253,   244,   244,   244,   244,   244,   244,   253,   247,
      70,   247,   247,   247,   247,   247,   247,   247,   253,   249,
     249,   253,   249,   249,   249,    21,   244,   253,   253,   253,
     242,   253,   253,   242,   249,    77,    77,   249,    77,    77,
      77,   247,   247,   247,   247,   247,   247,   247,    71,   242,
     242,   253,   242,   242,   253,   247,   247,   249,    77,    77,
     249,    77,    77,    77,   253,   253,   242,   253,   253,   242,
      77,    77,   247,   247,   242,   242,   253,   242,   242,   253,
      77,    77,   253,   253,   253,   253,   242,   242,   253,   253,
     242,   242,   253,   253,   242,   242,   253,   253
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   245,   246,   247,   247,   248,   248,   248,   248,   248,
     248,   249,   249,   249,   249,   250,   250,   250,   250,   251,
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
     252,   252,   252,   252,   253,   253,   253,   253,   253,   253,
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
     253,   253,   253,   253,   253,   253,   253,   253,   253,   254,
     254,   254,   254,   254,   255,   255,   255,   255,   255,   256,
     256,   257,   257,   257,   257,   258,   258,   259,   259,   260,
     260,   260,   261,   261,   262,   262,   262,   262,   262,   262,
     262,   263,   263,   264,   264,   265,   266,   267,   267,   268,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   270,   270,   271,   271,   271,   272,   272,   272,   272,
     273,   273,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   275,   275,   275,   275,   275,   275,   275,   276,
     276,   277,   278,   278,   279,   279,   279,   280,   280,   281,
     281,   282,   282,   283,   284,   284,   285,   285,   285,   285
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     3,     4,     3,
       4,     1,     3,     3,     4,     1,     3,     3,     4,     1,
       1,     1,     2,     4,     2,     1,     1,     4,     4,     4,
       4,     2,     2,     1,     1,     2,     1,     1,     1,     2,
       3,     4,     2,     4,     2,     8,     9,     2,     2,     2,
       2,     3,     4,     6,     4,     4,     1,     1,     4,     6,
       5,     7,     6,    10,     4,     3,     5,     4,     4,     4,
      10,    10,    10,    11,    11,    11,    10,    10,    12,    12,
      11,    11,    13,    13,     7,     9,     1,     2,     1,    13,
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
       1,     1,     3,     5,     1,     2,     8,     8,     8,     8
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
#line 4628 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 5: /* top_level_statement_list: statement  */
#line 110 "DARIC.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 4634 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 6: /* top_level_statement_list: top_level_statement_list sep statement  */
#line 111 "DARIC.y"
                                             { (yyval.ast) = statement_link((yyvsp[-2].ast), (yyvsp[0].ast));  }
#line 4640 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 7: /* top_level_statement_list: LINE_NUMBER COLON NL  */
#line 113 "DARIC.y"
                           { (yyval.ast) = linenumber((yyvsp[-2].v_int)); yylineno = (yyvsp[-2].v_int); }
#line 4646 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 8: /* top_level_statement_list: top_level_statement_list LINE_NUMBER COLON NL  */
#line 114 "DARIC.y"
                                                    { (yyval.ast) = statement_link((yyvsp[-3].ast), linenumber((yyvsp[-2].v_int))); yylineno = (yyvsp[-2].v_int); }
#line 4652 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 9: /* top_level_statement_list: LINE_NUMBER top_level_statement_list sep  */
#line 116 "DARIC.y"
                                               { (yyval.ast) = statement_link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast)); yylineno = (yyvsp[-2].v_int); }
#line 4658 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 10: /* top_level_statement_list: top_level_statement_list LINE_NUMBER top_level_statement_list sep  */
#line 117 "DARIC.y"
                                                                        { (yyval.ast) = statement_link((yyvsp[-3].ast), statement_link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast))); yylineno = (yyvsp[-2].v_int);  }
#line 4664 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 11: /* statement_list: statement  */
#line 121 "DARIC.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 4670 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 12: /* statement_list: statement_list sep statement  */
#line 122 "DARIC.y"
                                   { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast));  }
#line 4676 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 13: /* statement_list: LINE_NUMBER statement_list sep  */
#line 123 "DARIC.y"
                                     { (yyval.ast) = link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast)); yylineno = (yyvsp[-2].v_int); }
#line 4682 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 14: /* statement_list: statement_list LINE_NUMBER statement_list sep  */
#line 124 "DARIC.y"
                                                    { (yyval.ast) = link((yyvsp[-3].ast), link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast))); yylineno = (yyvsp[-2].v_int);  }
#line 4688 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 15: /* statement_list_no_nl: statement  */
#line 128 "DARIC.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 4694 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 16: /* statement_list_no_nl: statement_list_no_nl COLON statement  */
#line 129 "DARIC.y"
                                           { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast));  }
#line 4700 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 17: /* statement_list_no_nl: LINE_NUMBER statement_list_no_nl COLON  */
#line 130 "DARIC.y"
                                             { (yyval.ast) = link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast)); yylineno = (yyvsp[-2].v_int); }
#line 4706 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 18: /* statement_list_no_nl: statement_list_no_nl LINE_NUMBER statement_list_no_nl COLON  */
#line 131 "DARIC.y"
                                                                  { (yyval.ast) = link((yyvsp[-3].ast), link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast))); yylineno = (yyvsp[-2].v_int);  }
#line 4712 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 22: /* statement: CHAIN expression_string  */
#line 138 "DARIC.y"
                              { (yyval.ast) = token1(CHAIN, (yyvsp[0].ast)); }
#line 4718 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 23: /* statement: CHAIN expression_string ',' plain_variable_list  */
#line 139 "DARIC.y"
                                                      { (yyval.ast) = token2(CHAIN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4724 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 24: /* statement: EXPECT plain_variable_list  */
#line 140 "DARIC.y"
                                 { (yyval.ast) = token1(EXPECT, (yyvsp[0].ast)); }
#line 4730 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 25: /* statement: END  */
#line 141 "DARIC.y"
          { (yyval.ast) = token(END); }
#line 4736 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 26: /* statement: PROCEDURE  */
#line 142 "DARIC.y"
                { (yyval.ast) = token1(CALLPROC, string((yyvsp[0].v_string))); }
#line 4742 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 27: /* statement: PROCEDURE '(' expression_list ')'  */
#line 143 "DARIC.y"
                                        { (yyval.ast) = token2(CALLPROC, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4748 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 28: /* statement: FN_INTEGER '(' expression_list ')'  */
#line 144 "DARIC.y"
                                         { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4754 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 29: /* statement: FN_REAL '(' expression_list ')'  */
#line 145 "DARIC.y"
                                      { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4760 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 30: /* statement: FN_STRING '(' expression_list ')'  */
#line 146 "DARIC.y"
                                        { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4766 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 31: /* statement: DATA expression_list  */
#line 147 "DARIC.y"
                           { (yyval.ast) = token1(DATA, (yyvsp[0].ast)); }
#line 4772 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 32: /* statement: READ variable_list  */
#line 148 "DARIC.y"
                         { (yyval.ast) = token1(READ, (yyvsp[0].ast)); }
#line 4778 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 33: /* statement: RESTORE  */
#line 149 "DARIC.y"
              { (yyval.ast) = token(RESTORE); }
#line 4784 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 34: /* statement: RETURN  */
#line 150 "DARIC.y"
             { (yyval.ast) = token(RETURN); }
#line 4790 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 35: /* statement: RETURN expression  */
#line 151 "DARIC.y"
                        { (yyval.ast) = token1(RETURN_WITH_VALUE, (yyvsp[0].ast)); }
#line 4796 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 36: /* statement: TRACEON  */
#line 152 "DARIC.y"
              { (yyval.ast) = token(TRACEON); }
#line 4802 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 37: /* statement: TRACEOFF  */
#line 153 "DARIC.y"
               { (yyval.ast) = token(TRACEOFF); }
#line 4808 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 38: /* statement: BREAKPOINT  */
#line 154 "DARIC.y"
                 { (yyval.ast) = token(BREAKPOINT); }
#line 4814 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 39: /* statement: DIM dim_variable_list  */
#line 156 "DARIC.y"
                            { (yyval.ast) = token1(DIM, (yyvsp[0].ast)); }
#line 4820 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 40: /* statement: LOCAL DIM dim_variable_list  */
#line 157 "DARIC.y"
                                  { (yyval.ast) = token1(LOCALDIM, (yyvsp[0].ast)); }
#line 4826 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 41: /* statement: BPUT expression_numeric ',' expression_numeric  */
#line 159 "DARIC.y"
                                                     { (yyval.ast) = token2(BPUT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4832 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 42: /* statement: BGET expression_numeric  */
#line 160 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 4838 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 43: /* statement: PTR expression_numeric E expression_numeric  */
#line 161 "DARIC.y"
                                                  { (yyval.ast) = token2(PTRA, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4844 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 44: /* statement: CLOSE expression_numeric  */
#line 162 "DARIC.y"
                               { (yyval.ast) = token1(CLOSE, (yyvsp[0].ast)); }
#line 4850 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 45: /* statement: STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 163 "DARIC.y"
                                                                    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(GLOBAL)); }
#line 4856 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 46: /* statement: LOCAL STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 164 "DARIC.y"
                                                                          { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(LOCAL)); }
#line 4862 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 47: /* statement: OSCLI expression_string  */
#line 166 "DARIC.y"
                              { (yyval.ast) = token1(OSCLI, (yyvsp[0].ast)); }
#line 4868 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 48: /* statement: GOSUB LITERAL_INT  */
#line 168 "DARIC.y"
                        { (yyval.ast) = token1(GOSUB, integer((yyvsp[0].v_int))); }
#line 4874 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 49: /* statement: GOTO LITERAL_INT  */
#line 169 "DARIC.y"
                       { (yyval.ast) = token1(GOTO, integer((yyvsp[0].v_int))); }
#line 4880 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 50: /* statement: INPUT_ expression_input_list  */
#line 171 "DARIC.y"
                                   { (yyval.ast) = token1(INPUT_, (yyvsp[0].ast)); }
#line 4886 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 51: /* statement: INPUT_ LITERAL_STRING expression_input_list  */
#line 172 "DARIC.y"
                                                  { (yyval.ast) = token2(INPUT_NOQUESTIONMARK, string((yyvsp[-1].v_string)), (yyvsp[0].ast)); }
#line 4892 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 52: /* statement: INPUT_ LITERAL_STRING ',' expression_input_list  */
#line 173 "DARIC.y"
                                                      { (yyval.ast) = token2(INPUT_, string((yyvsp[-2].v_string)), (yyvsp[0].ast)); }
#line 4898 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 53: /* statement: MOUSE INTEGER_VARIABLE ',' INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 174 "DARIC.y"
                                                                       { (yyval.ast) = token3(MOUSE, string((yyvsp[-4].v_string)), string((yyvsp[-2].v_string)), string((yyvsp[0].v_string)) ); }
#line 4904 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 54: /* statement: INKEY '(' expression_numeric ')'  */
#line 176 "DARIC.y"
                                       { (yyval.ast) = token1(SINKEY, (yyvsp[-1].ast)); }
#line 4910 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 55: /* statement: INKEYS '(' expression_numeric ')'  */
#line 177 "DARIC.y"
                                        { (yyval.ast) = token1(SINKEYS, (yyvsp[-1].ast)); }
#line 4916 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 56: /* statement: GET  */
#line 178 "DARIC.y"
          { (yyval.ast) = token(GET_S); }
#line 4922 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 57: /* statement: GETS  */
#line 179 "DARIC.y"
           { (yyval.ast) = token(GETS_S); }
#line 4928 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 58: /* statement: IF expression statement_list_no_nl NL  */
#line 181 "DARIC.y"
                                            { (yyval.ast) = token2(IF, (yyvsp[-2].ast), (yyvsp[-1].ast)); }
#line 4934 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 59: /* statement: IF expression statement_list ELSE statement_list_no_nl NL  */
#line 182 "DARIC.y"
                                                                { (yyval.ast) = token3(IF, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4940 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 60: /* statement: IF expression THEN statement_list_no_nl NL  */
#line 183 "DARIC.y"
                                                 { (yyval.ast) = token2(IF, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4946 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 61: /* statement: IF expression THEN statement_list ELSE statement_list_no_nl NL  */
#line 184 "DARIC.y"
                                                                     { (yyval.ast) = token3(IF, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4952 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 62: /* statement: IF expression THEN statement_list_no_nl NL ENDIF  */
#line 186 "DARIC.y"
                                                       { (yyval.ast) = token2(IF, (yyvsp[-4].ast), (yyvsp[-2].ast)); }
#line 4958 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 63: /* statement: IF expression THEN statement_list_no_nl NL ELSE NL statement_list_no_nl NL ENDIF  */
#line 187 "DARIC.y"
                                                                                       { (yyval.ast) = token3(IF, (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-2].ast)); }
#line 4964 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 64: /* statement: REPEAT statement_list UNTIL expression  */
#line 189 "DARIC.y"
                                             { (yyval.ast) = token2(REPEAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4970 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 65: /* statement: REPEAT UNTIL expression  */
#line 190 "DARIC.y"
                              { (yyval.ast) = token2(REPEAT, NULL, (yyvsp[0].ast)); }
#line 4976 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 66: /* statement: WHILE expression sep statement_list ENDWHILE  */
#line 191 "DARIC.y"
                                                   { (yyval.ast) = token2(WHILE, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4982 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 67: /* statement: SWAP INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 193 "DARIC.y"
                                                 { (yyval.ast) = token2(SWAP_I, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4988 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 68: /* statement: SWAP VARIABLE ',' VARIABLE  */
#line 194 "DARIC.y"
                                 { (yyval.ast) = token2(SWAP_F, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4994 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 69: /* statement: SWAP STRING_VARIABLE ',' STRING_VARIABLE  */
#line 195 "DARIC.y"
                                                { (yyval.ast) = token2(SWAP_S, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 5000 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 70: /* statement: FOR VARIABLE IN_ VARIABLE '(' ')' sep statement_list sep NEXT  */
#line 198 "DARIC.y"
                                                                                             { (yyval.ast) = token4typed(FORIN, string((yyvsp[-8].v_string)), string((yyvsp[-6].v_string)), (yyvsp[-2].ast), token(GLOBAL), Type::REAL); }
#line 5006 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 71: /* statement: FOR INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' sep statement_list sep NEXT  */
#line 199 "DARIC.y"
                                                                                             { (yyval.ast) = token4typed(FORIN, string((yyvsp[-8].v_string)), string((yyvsp[-6].v_string)), (yyvsp[-2].ast), token(GLOBAL), Type::INTEGER); }
#line 5012 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 72: /* statement: FOR STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' sep statement_list sep NEXT  */
#line 200 "DARIC.y"
                                                                                             { (yyval.ast) = token4typed(FORIN, string((yyvsp[-8].v_string)), string((yyvsp[-6].v_string)), (yyvsp[-2].ast), token(GLOBAL), Type::STRING); }
#line 5018 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 73: /* statement: FOR LOCAL VARIABLE IN_ VARIABLE '(' ')' sep statement_list sep NEXT  */
#line 201 "DARIC.y"
                                                                                             { (yyval.ast) = token4typed(FORIN, string((yyvsp[-8].v_string)), string((yyvsp[-6].v_string)), (yyvsp[-2].ast), token(LOCAL), Type::REAL); }
#line 5024 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 74: /* statement: FOR LOCAL INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' sep statement_list sep NEXT  */
#line 202 "DARIC.y"
                                                                                             { (yyval.ast) = token4typed(FORIN, string((yyvsp[-8].v_string)), string((yyvsp[-6].v_string)), (yyvsp[-2].ast), token(LOCAL), Type::INTEGER); }
#line 5030 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 75: /* statement: FOR LOCAL STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' sep statement_list sep NEXT  */
#line 203 "DARIC.y"
                                                                                             { (yyval.ast) = token4typed(FORIN, string((yyvsp[-8].v_string)), string((yyvsp[-6].v_string)), (yyvsp[-2].ast), token(LOCAL), Type::STRING); }
#line 5036 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 76: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric sep statement_list sep NEXT  */
#line 206 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token5typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(GLOBAL), Type::INTEGER); }
#line 5042 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 77: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric sep statement_list sep NEXT  */
#line 207 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token5typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(GLOBAL), Type::REAL); }
#line 5048 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 78: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric sep statement_list sep NEXT  */
#line 208 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token6typed(FOR, string((yyvsp[-10].v_string)), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(GLOBAL), Type::INTEGER); }
#line 5054 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 79: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric sep statement_list sep NEXT  */
#line 209 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token6typed(FOR, string((yyvsp[-10].v_string)), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(GLOBAL), Type::REAL); }
#line 5060 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 80: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric sep statement_list sep NEXT  */
#line 210 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token5typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(LOCAL), Type::INTEGER); }
#line 5066 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 81: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric sep statement_list sep NEXT  */
#line 211 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token5typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(LOCAL), Type::REAL); }
#line 5072 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 82: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric sep statement_list sep NEXT  */
#line 212 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token6typed(FOR, string((yyvsp[-10].v_string)), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(LOCAL), Type::INTEGER); }
#line 5078 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 83: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric sep statement_list sep NEXT  */
#line 213 "DARIC.y"
                                                                                                                                       { (yyval.ast) = token6typed(FOR, string((yyvsp[-10].v_string)), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), token(LOCAL), Type::REAL); }
#line 5084 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 84: /* statement: CASE expression OF sep when_list sep ENDCASE  */
#line 215 "DARIC.y"
                                                   { (yyval.ast) = token2(CASE, (yyvsp[-5].ast), (yyvsp[-2].ast));  }
#line 5090 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 85: /* statement: CASE expression OF sep when_list OTHERWISE statement_list sep ENDCASE  */
#line 216 "DARIC.y"
                                                                            { (yyval.ast) = token3(CASE, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-2].ast));  }
#line 5096 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 86: /* statement: PRINT  */
#line 218 "DARIC.y"
            { (yyval.ast) = token(PRINT); }
#line 5102 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 87: /* statement: PRINT expression_print_list  */
#line 219 "DARIC.y"
                                  { (yyval.ast) = token1(PRINT, (yyvsp[0].ast)); }
#line 5108 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 88: /* statement: RENDERFRAME  */
#line 221 "DARIC.y"
                  { (yyval.ast) = token(RENDERFRAME); }
#line 5114 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 89: /* statement: CREATEVERTEX TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 224 "DARIC.y"
                                                      { (yyval.ast) = token6(CREATEVERTEX, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5120 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 90: /* statement: CREATETRIANGLE TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 227 "DARIC.y"
                                                  { (yyval.ast) = token6(CREATETRIANGLE, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5126 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 91: /* statement: TRANSLATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 228 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TRANSLATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5132 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 92: /* statement: ROTATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 229 "DARIC.y"
                                                                                                      { (yyval.ast) = token4(ROTATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5138 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 93: /* statement: SCALE expression_numeric ',' expression_numeric  */
#line 230 "DARIC.y"
                                                      { (yyval.ast) = token2(SCALE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5144 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 94: /* statement: DELETEOBJECT expression_numeric  */
#line 231 "DARIC.y"
                                      { (yyval.ast) = token1(DELETEOBJECT, (yyvsp[0].ast)); }
#line 5150 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 95: /* statement: CLS  */
#line 233 "DARIC.y"
          { (yyval.ast) = token(CLS); }
#line 5156 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 96: /* statement: COLOUR expression_numeric  */
#line 234 "DARIC.y"
                                { (yyval.ast) = token1(COLOUR, (yyvsp[0].ast)); }
#line 5162 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 97: /* statement: COLOUR expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 235 "DARIC.y"
                                                                              { (yyval.ast) = token3(COLOUR, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5168 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 98: /* statement: COLOURBG expression_numeric  */
#line 236 "DARIC.y"
                                  { (yyval.ast) = token1(COLOURBG, (yyvsp[0].ast)); }
#line 5174 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 99: /* statement: COLOURBG expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 237 "DARIC.y"
                                                                                { (yyval.ast) = token3(COLOURBG, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5180 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 100: /* statement: GRAPHICS expression_numeric ',' expression_numeric  */
#line 238 "DARIC.y"
                                                         { (yyval.ast) = token2(GRAPHICS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5186 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 101: /* statement: GRAPHICS BANKED expression_numeric ',' expression_numeric  */
#line 239 "DARIC.y"
                                                                { (yyval.ast) = token2(BANKED, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5192 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 102: /* statement: GRAPHICS  */
#line 240 "DARIC.y"
               { (yyval.ast) = token(GRAPHICS); }
#line 5198 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 103: /* statement: GRAPHICS BANKED  */
#line 241 "DARIC.y"
                      { (yyval.ast) = token(BANKED); }
#line 5204 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 104: /* statement: FLIP  */
#line 242 "DARIC.y"
           { (yyval.ast) = token(FLIP); }
#line 5210 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 105: /* statement: CIRCLE expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 243 "DARIC.y"
                                                                              { (yyval.ast) = token3(CIRCLE, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5216 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 106: /* statement: CIRCLE FILL expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 244 "DARIC.y"
                                                                                   { (yyval.ast) = token3(CIRCLEFILL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5222 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 107: /* statement: LINE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 245 "DARIC.y"
                                                                                                   { (yyval.ast) = token4(LINE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5228 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 108: /* statement: RECTANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 246 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(RECTANGLE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5234 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 109: /* statement: RECTANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 247 "DARIC.y"
                                                                                                             { (yyval.ast) = token4(RECTANGLEFILL, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5240 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 110: /* statement: TRIANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 248 "DARIC.y"
                                                                                                                                                     { (yyval.ast) = token6(TRIANGLE, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5246 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 111: /* statement: TRIANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 249 "DARIC.y"
                                                                                                                                                          { (yyval.ast) = token6(TRIANGLEFILL, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5252 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 112: /* statement: TRIANGLE SHADED expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 252 "DARIC.y"
                                                                                         { (yyval.ast) = token9(TRIANGLESHADED, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5258 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 113: /* statement: PLOT expression_numeric ',' expression_numeric  */
#line 253 "DARIC.y"
                                                     { (yyval.ast) = token2(PLOT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5264 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 114: /* statement: CLIPON expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 254 "DARIC.y"
                                                                                                     { (yyval.ast) = token4(CLIPON, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5270 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 115: /* statement: CLIPOFF  */
#line 255 "DARIC.y"
              { (yyval.ast) = token(CLIPOFF); }
#line 5276 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 116: /* statement: TEXT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 256 "DARIC.y"
                                                                                                  { (yyval.ast) = token4(TEXT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5282 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 117: /* statement: TEXTRIGHT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 257 "DARIC.y"
                                                                                                       { (yyval.ast) = token4(TEXTRIGHT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5288 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 118: /* statement: TEXTCENTRE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 258 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TEXTCENTRE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5294 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 119: /* statement: SHOWFPS  */
#line 259 "DARIC.y"
              { (yyval.ast) = token(SHOWFPS); }
#line 5300 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 120: /* number: LITERAL_INT  */
#line 263 "DARIC.y"
                  { (yyval.ast) = integer((yyvsp[0].v_int)); }
#line 5306 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 121: /* number: MINUS LITERAL_INT  */
#line 264 "DARIC.y"
                                  { (yyval.ast) = integer(-(yyvsp[0].v_int)); }
#line 5312 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 122: /* number: LITERAL_REAL  */
#line 265 "DARIC.y"
                   { (yyval.ast) = real((yyvsp[0].v_real)); }
#line 5318 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 123: /* number: MINUS LITERAL_REAL  */
#line 266 "DARIC.y"
                                   { (yyval.ast) = real(-(yyvsp[0].v_real)); }
#line 5324 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 124: /* expression_numeric: number  */
#line 270 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 5330 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 125: /* expression_numeric: variable_integer  */
#line 271 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5336 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 126: /* expression_numeric: variable_real  */
#line 272 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5342 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 127: /* expression_numeric: '(' expression_numeric ')'  */
#line 273 "DARIC.y"
                                 { (yyval.ast) = (yyvsp[-1].ast); }
#line 5348 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 128: /* expression_numeric: FLOAT_ '(' expression_numeric ')'  */
#line 274 "DARIC.y"
                                        { (yyval.ast) = token1(FLOAT_, (yyvsp[-1].ast)); }
#line 5354 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 129: /* expression_numeric: INT_ '(' expression_numeric ')'  */
#line 275 "DARIC.y"
                                      { (yyval.ast) = token1(INT_, (yyvsp[-1].ast)); }
#line 5360 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 130: /* expression_numeric: MINUS variable_integer  */
#line 276 "DARIC.y"
                             { (yyval.ast) = token2(MINUS, integer(0), (yyvsp[0].ast)); }
#line 5366 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 131: /* expression_numeric: MINUS variable_real  */
#line 277 "DARIC.y"
                          { (yyval.ast) = token2(MINUS, real(0.0), (yyvsp[0].ast)); }
#line 5372 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 132: /* expression_numeric: expression_numeric PLUS expression_numeric  */
#line 278 "DARIC.y"
                                                 { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5378 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 133: /* expression_numeric: expression_numeric MINUS expression_numeric  */
#line 279 "DARIC.y"
                                                  { (yyval.ast) = token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5384 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 134: /* expression_numeric: expression_numeric MULTIPLY expression_numeric  */
#line 280 "DARIC.y"
                                                     { (yyval.ast) = token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5390 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 135: /* expression_numeric: expression_numeric DIVIDE expression_numeric  */
#line 281 "DARIC.y"
                                                   { (yyval.ast) = token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5396 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 136: /* expression_numeric: expression_numeric INTEGERDIVIDE expression_numeric  */
#line 282 "DARIC.y"
                                                          { (yyval.ast) = token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5402 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 137: /* expression_numeric: expression_numeric DIV expression_numeric  */
#line 283 "DARIC.y"
                                                { (yyval.ast) = token2(DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5408 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 138: /* expression_numeric: expression_numeric MOD expression_numeric  */
#line 284 "DARIC.y"
                                                { (yyval.ast) = token2(MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5414 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 139: /* expression_numeric: expression_numeric SHL expression_numeric  */
#line 285 "DARIC.y"
                                                { (yyval.ast) = token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5420 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 140: /* expression_numeric: expression_numeric SHR expression_numeric  */
#line 286 "DARIC.y"
                                                { (yyval.ast) = token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5426 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 141: /* expression_numeric: expression_numeric E expression_numeric  */
#line 287 "DARIC.y"
                                              { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5432 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 142: /* expression_numeric: expression_numeric NE expression_numeric  */
#line 288 "DARIC.y"
                                               { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5438 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 143: /* expression_numeric: expression_numeric GE expression_numeric  */
#line 289 "DARIC.y"
                                               { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5444 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 144: /* expression_numeric: expression_numeric LE expression_numeric  */
#line 290 "DARIC.y"
                                               { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5450 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 145: /* expression_numeric: expression_numeric LT expression_numeric  */
#line 291 "DARIC.y"
                                               { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5456 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 146: /* expression_numeric: expression_numeric GT expression_numeric  */
#line 292 "DARIC.y"
                                               { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5462 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 147: /* expression_numeric: expression_numeric AND expression_numeric  */
#line 293 "DARIC.y"
                                                { (yyval.ast) = token2(AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5468 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 148: /* expression_numeric: expression_numeric OR expression_numeric  */
#line 294 "DARIC.y"
                                               { (yyval.ast) = token2(OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5474 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 149: /* expression_numeric: expression_numeric EOR expression_numeric  */
#line 295 "DARIC.y"
                                                { (yyval.ast) = token2(EOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5480 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 150: /* expression_numeric: FN_INTEGER '(' expression_list ')'  */
#line 297 "DARIC.y"
                                         { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5486 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 151: /* expression_numeric: FN_REAL '(' expression_list ')'  */
#line 298 "DARIC.y"
                                      { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5492 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 152: /* expression_numeric: DIM '(' VARIABLE '(' ')' ',' number ')'  */
#line 300 "DARIC.y"
                                              { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::REAL), (yyvsp[-1].ast)); }
#line 5498 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 153: /* expression_numeric: DIM '(' INTEGER_VARIABLE '(' ')' ',' number ')'  */
#line 301 "DARIC.y"
                                                      { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::INTEGER), (yyvsp[-1].ast)); }
#line 5504 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 154: /* expression_numeric: DIM '(' STRING_VARIABLE '(' ')' ',' number ')'  */
#line 302 "DARIC.y"
                                                     { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::STRING), (yyvsp[-1].ast)); }
#line 5510 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 155: /* expression_numeric: PTR expression_numeric  */
#line 304 "DARIC.y"
                             { (yyval.ast) = token1(PTR, (yyvsp[0].ast)); }
#line 5516 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 156: /* expression_numeric: GET  */
#line 306 "DARIC.y"
          { (yyval.ast) = token(GET); }
#line 5522 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 157: /* expression_numeric: INKEY '(' expression_numeric ')'  */
#line 307 "DARIC.y"
                                       { (yyval.ast) = token1(INKEY, (yyvsp[-1].ast)); }
#line 5528 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 158: /* expression_numeric: BOOLTRUE  */
#line 309 "DARIC.y"
               { (yyval.ast) = integer(1); }
#line 5534 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 159: /* expression_numeric: BOOLFALSE  */
#line 310 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5540 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 160: /* expression_numeric: TIME  */
#line 311 "DARIC.y"
           { (yyval.ast) = token(TIME); }
#line 5546 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 161: /* expression_numeric: SOLID  */
#line 313 "DARIC.y"
                        { (yyval.ast) = integer(0); }
#line 5552 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 162: /* expression_numeric: WIREFRAME  */
#line 314 "DARIC.y"
                        { (yyval.ast) = integer(1); }
#line 5558 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 163: /* expression_numeric: SHADED  */
#line 315 "DARIC.y"
                        { (yyval.ast) = integer(2); }
#line 5564 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 164: /* expression_numeric: FILLEDWIREFRAME  */
#line 316 "DARIC.y"
                        { (yyval.ast) = integer(3); }
#line 5570 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 165: /* expression_numeric: CREATESHAPE TYPE_VARIABLE ',' TYPE_VARIABLE  */
#line 318 "DARIC.y"
                                                  { (yyval.ast) = token2(CREATESHAPE, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 5576 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 166: /* expression_numeric: CREATEOBJECT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 323 "DARIC.y"
                                                  { (yyval.ast) = token9(CREATEOBJECT, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5582 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 167: /* expression_numeric: RED  */
#line 325 "DARIC.y"
                { (yyval.ast) = integer(0xFF0000); }
#line 5588 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 168: /* expression_numeric: GREEN  */
#line 326 "DARIC.y"
                { (yyval.ast) = integer(0x00FF00); }
#line 5594 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 169: /* expression_numeric: YELLOW  */
#line 327 "DARIC.y"
                { (yyval.ast) = integer(0xFFFF00); }
#line 5600 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 170: /* expression_numeric: BLUE  */
#line 328 "DARIC.y"
                { (yyval.ast) = integer(0x0000FF); }
#line 5606 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 171: /* expression_numeric: MAGENTA  */
#line 329 "DARIC.y"
                { (yyval.ast) = integer(0xFF00FF); }
#line 5612 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 172: /* expression_numeric: CYAN  */
#line 330 "DARIC.y"
                { (yyval.ast) = integer(0x00FFFF); }
#line 5618 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 173: /* expression_numeric: WHITE  */
#line 331 "DARIC.y"
                { (yyval.ast) = integer(0xFFFFFF); }
#line 5624 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 174: /* expression_numeric: BLACK  */
#line 332 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5630 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 175: /* expression_numeric: LASTPOS  */
#line 333 "DARIC.y"
                { (yyval.ast) = integer(-1); }
#line 5636 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 176: /* expression_numeric: COLOUR '(' expression_numeric ',' expression_numeric ',' expression_numeric ')'  */
#line 334 "DARIC.y"
                                                                                      { (yyval.ast) = token3(COLOUREXP, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5642 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 177: /* expression_numeric: POINT_ '(' expression_numeric ',' expression_numeric ')'  */
#line 335 "DARIC.y"
                                                               { (yyval.ast) = token2(POINT_, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5648 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 178: /* expression_numeric: SCREENWIDTH  */
#line 336 "DARIC.y"
                  { (yyval.ast) = token(SCREENWIDTH); }
#line 5654 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 179: /* expression_numeric: SCREENHEIGHT  */
#line 337 "DARIC.y"
                   { (yyval.ast) = token(SCREENHEIGHT); }
#line 5660 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 180: /* expression_numeric: LOADTYPEFACE expression_string  */
#line 338 "DARIC.y"
                                     { (yyval.ast) = token1(LOADTYPEFACE, (yyvsp[0].ast)); }
#line 5666 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 181: /* expression_numeric: CREATEFONT expression_numeric ',' expression_numeric  */
#line 339 "DARIC.y"
                                                           { (yyval.ast) = token2(CREATEFONT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5672 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 182: /* expression_numeric: MONO15  */
#line 340 "DARIC.y"
             { (yyval.ast) = integer(0); }
#line 5678 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 183: /* expression_numeric: MONO20  */
#line 341 "DARIC.y"
             { (yyval.ast) = integer(1); }
#line 5684 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 184: /* expression_numeric: MONO25  */
#line 342 "DARIC.y"
             { (yyval.ast) = integer(2); }
#line 5690 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 185: /* expression_numeric: MONO30  */
#line 343 "DARIC.y"
             { (yyval.ast) = integer(3); }
#line 5696 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 186: /* expression_numeric: MONO35  */
#line 344 "DARIC.y"
             { (yyval.ast) = integer(4); }
#line 5702 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 187: /* expression_numeric: MONO40  */
#line 345 "DARIC.y"
             { (yyval.ast) = integer(5); }
#line 5708 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 188: /* expression_numeric: MONO50  */
#line 346 "DARIC.y"
             { (yyval.ast) = integer(6); }
#line 5714 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 189: /* expression_numeric: MONO75  */
#line 347 "DARIC.y"
             { (yyval.ast) = integer(7); }
#line 5720 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 190: /* expression_numeric: MONO100  */
#line 348 "DARIC.y"
              { (yyval.ast) = integer(8); }
#line 5726 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 191: /* expression_numeric: PROP15  */
#line 349 "DARIC.y"
             { (yyval.ast) = integer(9); }
#line 5732 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 192: /* expression_numeric: PROP20  */
#line 350 "DARIC.y"
             { (yyval.ast) = integer(10); }
#line 5738 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 193: /* expression_numeric: PROP25  */
#line 351 "DARIC.y"
             { (yyval.ast) = integer(11); }
#line 5744 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 194: /* expression_numeric: PROP30  */
#line 352 "DARIC.y"
             { (yyval.ast) = integer(12); }
#line 5750 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 195: /* expression_numeric: PROP35  */
#line 353 "DARIC.y"
             { (yyval.ast) = integer(13); }
#line 5756 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 196: /* expression_numeric: PROP40  */
#line 354 "DARIC.y"
             { (yyval.ast) = integer(14); }
#line 5762 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 197: /* expression_numeric: PROP50  */
#line 355 "DARIC.y"
             { (yyval.ast) = integer(15); }
#line 5768 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 198: /* expression_numeric: PROP75  */
#line 356 "DARIC.y"
             { (yyval.ast) = integer(16); }
#line 5774 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 199: /* expression_numeric: PROP100  */
#line 357 "DARIC.y"
              { (yyval.ast) = integer(17); }
#line 5780 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 200: /* expression_numeric: SERIF15  */
#line 358 "DARIC.y"
              { (yyval.ast) = integer(18); }
#line 5786 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 201: /* expression_numeric: SERIF20  */
#line 359 "DARIC.y"
              { (yyval.ast) = integer(19); }
#line 5792 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 202: /* expression_numeric: SERIF25  */
#line 360 "DARIC.y"
              { (yyval.ast) = integer(20); }
#line 5798 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 203: /* expression_numeric: SERIF30  */
#line 361 "DARIC.y"
              { (yyval.ast) = integer(21); }
#line 5804 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 204: /* expression_numeric: SERIF35  */
#line 362 "DARIC.y"
              { (yyval.ast) = integer(22); }
#line 5810 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 205: /* expression_numeric: SERIF40  */
#line 363 "DARIC.y"
              { (yyval.ast) = integer(23); }
#line 5816 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 206: /* expression_numeric: SERIF50  */
#line 364 "DARIC.y"
              { (yyval.ast) = integer(24); }
#line 5822 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 207: /* expression_numeric: SERIF75  */
#line 365 "DARIC.y"
              { (yyval.ast) = integer(25); }
#line 5828 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 208: /* expression_numeric: SERIF100  */
#line 366 "DARIC.y"
               { (yyval.ast) = integer(26); }
#line 5834 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 209: /* expression_numeric: EOFH expression_numeric  */
#line 367 "DARIC.y"
                              { (yyval.ast) = token1(EOFH, (yyvsp[0].ast)); }
#line 5840 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 210: /* expression_numeric: BGET expression_numeric  */
#line 368 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 5846 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 211: /* expression_numeric: OPENIN '(' expression_string ')'  */
#line 369 "DARIC.y"
                                       { (yyval.ast) = token1(OPENIN, (yyvsp[-1].ast)); }
#line 5852 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 212: /* expression_numeric: OPENOUT '(' expression_string ')'  */
#line 370 "DARIC.y"
                                        { (yyval.ast) = token1(OPENOUT, (yyvsp[-1].ast)); }
#line 5858 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 213: /* expression_numeric: OPENUP '(' expression_string ')'  */
#line 371 "DARIC.y"
                                       { (yyval.ast) = token1(OPENUP, (yyvsp[-1].ast)); }
#line 5864 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 214: /* expression_numeric: RND  */
#line 373 "DARIC.y"
          { (yyval.ast) = token(RND); }
#line 5870 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 215: /* expression_numeric: RND0  */
#line 374 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(0)); }
#line 5876 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 216: /* expression_numeric: RND1  */
#line 375 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(1)); }
#line 5882 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 217: /* expression_numeric: RND '(' expression_numeric ')'  */
#line 376 "DARIC.y"
                                     { (yyval.ast) = token1(RNDRANGE, (yyvsp[-1].ast)); }
#line 5888 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 218: /* expression_numeric: PI  */
#line 378 "DARIC.y"
         { (yyval.ast) = token(PI); }
#line 5894 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 219: /* expression_numeric: NOT expression_numeric  */
#line 379 "DARIC.y"
                             { (yyval.ast) = token1(NOT, (yyvsp[0].ast)); }
#line 5900 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 220: /* expression_numeric: SQR '(' expression_numeric ')'  */
#line 380 "DARIC.y"
                                     { (yyval.ast) = token1(SQR, (yyvsp[-1].ast)); }
#line 5906 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 221: /* expression_numeric: LN '(' expression_numeric ')'  */
#line 381 "DARIC.y"
                                    { (yyval.ast) = token1(LN, (yyvsp[-1].ast)); }
#line 5912 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 222: /* expression_numeric: LOG '(' expression_numeric ')'  */
#line 382 "DARIC.y"
                                     { (yyval.ast) = token1(LOG, (yyvsp[-1].ast)); }
#line 5918 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 223: /* expression_numeric: EXP '(' expression_numeric ')'  */
#line 383 "DARIC.y"
                                     { (yyval.ast) = token1(EXP, (yyvsp[-1].ast)); }
#line 5924 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 224: /* expression_numeric: ATN '(' expression_numeric ')'  */
#line 384 "DARIC.y"
                                     { (yyval.ast) = token1(ATN, (yyvsp[-1].ast)); }
#line 5930 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 225: /* expression_numeric: TAN '(' expression_numeric ')'  */
#line 385 "DARIC.y"
                                     { (yyval.ast) = token1(TAN, (yyvsp[-1].ast)); }
#line 5936 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 226: /* expression_numeric: COS '(' expression_numeric ')'  */
#line 386 "DARIC.y"
                                     { (yyval.ast) = token1(COS, (yyvsp[-1].ast)); }
#line 5942 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 227: /* expression_numeric: SIN '(' expression_numeric ')'  */
#line 387 "DARIC.y"
                                     { (yyval.ast) = token1(SIN, (yyvsp[-1].ast)); }
#line 5948 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 228: /* expression_numeric: ABS '(' expression_numeric ')'  */
#line 388 "DARIC.y"
                                     { (yyval.ast) = token1(ABS, (yyvsp[-1].ast)); }
#line 5954 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 229: /* expression_numeric: ACS '(' expression_numeric ')'  */
#line 389 "DARIC.y"
                                     { (yyval.ast) = token1(ACS, (yyvsp[-1].ast)); }
#line 5960 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 230: /* expression_numeric: ASN '(' expression_numeric ')'  */
#line 390 "DARIC.y"
                                     { (yyval.ast) = token1(ASN, (yyvsp[-1].ast)); }
#line 5966 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 231: /* expression_numeric: DEG '(' expression_numeric ')'  */
#line 391 "DARIC.y"
                                     { (yyval.ast) = token1(DEG, (yyvsp[-1].ast)); }
#line 5972 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 232: /* expression_numeric: RAD '(' expression_numeric ')'  */
#line 392 "DARIC.y"
                                     { (yyval.ast) = token1(RAD, (yyvsp[-1].ast)); }
#line 5978 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 233: /* expression_numeric: SGN '(' expression_numeric ')'  */
#line 393 "DARIC.y"
                                     { (yyval.ast) = token1(SGN, (yyvsp[-1].ast)); }
#line 5984 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 234: /* expression_numeric: ASC '(' expression_string ')'  */
#line 395 "DARIC.y"
                                    { (yyval.ast) = token1(ASC, (yyvsp[-1].ast)); }
#line 5990 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 235: /* expression_numeric: LEN '(' expression_string ')'  */
#line 396 "DARIC.y"
                                    { (yyval.ast) = token1(LEN, (yyvsp[-1].ast)); }
#line 5996 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 236: /* expression_numeric: INSTR '(' expression_string ',' expression_string ')'  */
#line 397 "DARIC.y"
                                                            { (yyval.ast) = token3(INSTR, (yyvsp[-3].ast), (yyvsp[-1].ast), integer(1)); }
#line 6002 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 237: /* expression_numeric: INSTR '(' expression_string ',' expression_string ',' expression_numeric ')'  */
#line 398 "DARIC.y"
                                                                                   { (yyval.ast) = token3(INSTR, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6008 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 238: /* expression_numeric: VAL '(' expression_string ')'  */
#line 399 "DARIC.y"
                                    { (yyval.ast) = token1(VAL, (yyvsp[-1].ast)); }
#line 6014 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 239: /* variable_integer: INTEGER_VARIABLE  */
#line 403 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 6020 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 240: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 404 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 6026 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 241: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 405 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 6032 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 242: /* variable_integer: TYPE_VARIABLE INTEGER_VARIABLE  */
#line 406 "DARIC.y"
                                     { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 6038 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 243: /* variable_integer: TYPE_VARIABLE '(' expression_numeric ')' INTEGER_VARIABLE  */
#line 407 "DARIC.y"
                                                                { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 6044 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 244: /* variable_real: VARIABLE  */
#line 411 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 6050 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 245: /* variable_real: VARIABLE '(' expression_numeric ')'  */
#line 412 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 6056 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 246: /* variable_real: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 413 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 6062 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 247: /* variable_real: TYPE_VARIABLE VARIABLE  */
#line 414 "DARIC.y"
                             { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 6068 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 248: /* variable_real: TYPE_VARIABLE '(' expression_numeric ')' VARIABLE  */
#line 415 "DARIC.y"
                                                        { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 6074 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 249: /* variable_numeric: variable_integer  */
#line 419 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6080 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 250: /* variable_numeric: variable_real  */
#line 420 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 6086 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 251: /* variable_string: STRING_VARIABLE  */
#line 424 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 6092 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 252: /* variable_string: STRING_VARIABLE '(' expression_numeric ')'  */
#line 425 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6098 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 253: /* variable_string: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 426 "DARIC.y"
                                                                        { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6104 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 254: /* variable_string: TYPE_VARIABLE '(' expression_numeric ')' STRING_VARIABLE  */
#line 427 "DARIC.y"
                                                               { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 6110 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 255: /* variable: variable_numeric  */
#line 431 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6116 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 256: /* variable: variable_string  */
#line 432 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6122 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 257: /* variable_list: variable  */
#line 436 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6128 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 258: /* variable_list: variable ',' variable_list  */
#line 437 "DARIC.y"
                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6134 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 259: /* plain_variable: INTEGER_VARIABLE  */
#line 441 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 6140 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 260: /* plain_variable: VARIABLE  */
#line 442 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 6146 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 261: /* plain_variable: STRING_VARIABLE  */
#line 443 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 6152 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 262: /* plain_variable_list: plain_variable  */
#line 447 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 6158 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 263: /* plain_variable_list: plain_variable ',' plain_variable_list  */
#line 448 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6164 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 264: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 452 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 6170 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 265: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 453 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 6176 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 266: /* dim_variable: VARIABLE '(' expression_numeric ')'  */
#line 454 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 6182 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 267: /* dim_variable: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 455 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 6188 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 268: /* dim_variable: STRING_VARIABLE '(' expression_numeric ')'  */
#line 456 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6194 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 269: /* dim_variable: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 457 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6200 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 270: /* dim_variable: TYPE_VARIABLE '(' expression_numeric ',' VARIABLE ')'  */
#line 458 "DARIC.y"
                                                            { (yyval.ast) = typevariable1d((yyvsp[-5].v_string), (yyvsp[-1].v_string), (yyvsp[-3].ast), Type::TYPE_ARRAY); }
#line 6206 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 271: /* dim_variable_list: dim_variable  */
#line 462 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6212 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 272: /* dim_variable_list: dim_variable ',' dim_variable_list  */
#line 463 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6218 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 273: /* type_variable: TYPE_VARIABLE  */
#line 467 "DARIC.y"
                    { (yyval.ast) = variable((yyvsp[0].v_string), Type::TYPE); }
#line 6224 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 274: /* type_variable: TYPE_VARIABLE '(' expression_numeric ')'  */
#line 468 "DARIC.y"
                                               { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::TYPE_ARRAY); }
#line 6230 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 275: /* type: TYPE_ VARIABLE sep field_list ENDTYPE  */
#line 472 "DARIC.y"
                                            { (yyval.ast) = token2(TYPE_, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 6236 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 276: /* field: FIELD variable  */
#line 476 "DARIC.y"
                     { (yyval.ast) = token1(FIELD, (yyvsp[0].ast)); }
#line 6242 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 277: /* field_list: field sep  */
#line 480 "DARIC.y"
               { (yyval.ast) = (yyvsp[-1].ast); }
#line 6248 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 278: /* field_list: field sep field_list  */
#line 481 "DARIC.y"
                           { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6254 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 279: /* string: LITERAL_STRING  */
#line 485 "DARIC.y"
                     { (yyval.ast) = string((yyvsp[0].v_string)); }
#line 6260 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 280: /* expression_string: string  */
#line 489 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 6266 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 281: /* expression_string: variable_string  */
#line 490 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6272 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 282: /* expression_string: expression_string PLUS expression_string  */
#line 491 "DARIC.y"
                                               { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6278 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 283: /* expression_string: expression_string E expression_string  */
#line 492 "DARIC.y"
                                            { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6284 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 284: /* expression_string: expression_string NE expression_string  */
#line 493 "DARIC.y"
                                             { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6290 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 285: /* expression_string: expression_string GE expression_string  */
#line 494 "DARIC.y"
                                             { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6296 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 286: /* expression_string: expression_string LE expression_string  */
#line 495 "DARIC.y"
                                             { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6302 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 287: /* expression_string: expression_string LT expression_string  */
#line 496 "DARIC.y"
                                             { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6308 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 288: /* expression_string: expression_string GT expression_string  */
#line 497 "DARIC.y"
                                             { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6314 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 289: /* expression_string: GETSH expression_numeric  */
#line 499 "DARIC.y"
                               { (yyval.ast) = token1(GETSH, (yyvsp[0].ast)); }
#line 6320 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 290: /* expression_string: FN_STRING '(' expression_list ')'  */
#line 501 "DARIC.y"
                                        { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 6326 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 291: /* expression_string: GETS  */
#line 503 "DARIC.y"
           { (yyval.ast) = token(GETS); }
#line 6332 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 292: /* expression_string: INKEYS '(' expression_numeric ')'  */
#line 504 "DARIC.y"
                                        { (yyval.ast) = token1(INKEYS, (yyvsp[-1].ast)); }
#line 6338 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 293: /* expression_string: TIMES  */
#line 506 "DARIC.y"
            { (yyval.ast) = token(TIMES); }
#line 6344 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 294: /* expression_string: STRS '(' expression_numeric ')'  */
#line 507 "DARIC.y"
                                      { (yyval.ast) = token1(STRS, (yyvsp[-1].ast)); }
#line 6350 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 295: /* expression_string: STRS TILDE '(' expression_numeric ')'  */
#line 508 "DARIC.y"
                                            { (yyval.ast) = token1(STRSHEX, (yyvsp[-1].ast)); }
#line 6356 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 296: /* expression_string: STRINGS '(' expression_numeric ',' expression_string ')'  */
#line 509 "DARIC.y"
                                                               { (yyval.ast) = token2(STRINGS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6362 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 297: /* expression_string: CHRS '(' expression_numeric ')'  */
#line 510 "DARIC.y"
                                      { (yyval.ast) = token1(CHRS, (yyvsp[-1].ast)); }
#line 6368 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 298: /* expression_string: LEFTS '(' expression_string ',' expression_numeric ')'  */
#line 511 "DARIC.y"
                                                             { (yyval.ast) = token2(LEFTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6374 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 299: /* expression_string: MIDS '(' expression_string ',' expression_numeric ',' expression_numeric ')'  */
#line 512 "DARIC.y"
                                                                                   { (yyval.ast) = token3(MIDS, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6380 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 300: /* expression_string: RIGHTS '(' expression_string ',' expression_numeric ')'  */
#line 513 "DARIC.y"
                                                              { (yyval.ast) = token2(RIGHTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6386 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 301: /* expression: expression_numeric  */
#line 517 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6392 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 302: /* expression: expression_string  */
#line 518 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6398 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 303: /* expression_list: %empty  */
#line 522 "DARIC.y"
                     { (yyval.ast) = NULL; }
#line 6404 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 304: /* expression_list: expression  */
#line 523 "DARIC.y"
                 { (yyval.ast) = (yyvsp[0].ast); }
#line 6410 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 305: /* expression_list: expression ',' expression_list  */
#line 524 "DARIC.y"
                                     { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6416 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 306: /* assignment_single: variable_numeric E expression_numeric  */
#line 528 "DARIC.y"
                                            { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6422 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 307: /* assignment_single: variable_string E expression_string  */
#line 529 "DARIC.y"
                                          { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6428 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 308: /* assignment_single: type_variable E expression  */
#line 530 "DARIC.y"
                                 { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6434 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 309: /* assignment_single: type_variable variable E expression  */
#line 531 "DARIC.y"
                                          { (yyval.ast) = assignment(link((yyvsp[-3].ast), (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 6440 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 310: /* assignment_list: assignment_single  */
#line 535 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6446 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 311: /* assignment_list: assignment_single ',' assignment_list  */
#line 536 "DARIC.y"
                                            { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6452 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 312: /* assignment: assignment_list  */
#line 540 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6458 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 313: /* assignment: LOCAL assignment_list  */
#line 541 "DARIC.y"
                            { (yyval.ast) = token1(LOCAL, (yyvsp[0].ast)); }
#line 6464 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 314: /* assignment: GLOBAL assignment_list  */
#line 542 "DARIC.y"
                             { (yyval.ast) = token1(GLOBAL, (yyvsp[0].ast)); }
#line 6470 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 315: /* assignment: variable_numeric SHL_E expression_numeric  */
#line 543 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6476 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 316: /* assignment: variable_numeric SHR_E expression_numeric  */
#line 544 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6482 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 317: /* assignment: variable_numeric PLUS_E expression_numeric  */
#line 545 "DARIC.y"
                                                 { (yyval.ast) = assignment((yyvsp[-2].ast), token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6488 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 318: /* assignment: variable_numeric MINUS_E expression_numeric  */
#line 546 "DARIC.y"
                                                  { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6494 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 319: /* assignment: variable_numeric MULTIPLY_E expression_numeric  */
#line 547 "DARIC.y"
                                                     { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6500 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 320: /* assignment: variable_numeric DIVIDE_E expression_numeric  */
#line 548 "DARIC.y"
                                                   { (yyval.ast) = assignment((yyvsp[-2].ast), token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6506 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 321: /* assignment: variable_numeric INTEGERDIVIDE_E expression_numeric  */
#line 549 "DARIC.y"
                                                          { (yyval.ast) = assignment((yyvsp[-2].ast), token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6512 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 322: /* expression_print: expression_string  */
#line 553 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6518 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 323: /* expression_print: expression_numeric  */
#line 554 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6524 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 324: /* expression_print: ','  */
#line 555 "DARIC.y"
          { (yyval.ast) = token(COMMA); }
#line 6530 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 325: /* expression_print: TILDE  */
#line 556 "DARIC.y"
            { (yyval.ast) = token(TILDE); }
#line 6536 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 326: /* expression_print: TICK  */
#line 557 "DARIC.y"
           { (yyval.ast) = token(TICK); }
#line 6542 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 327: /* expression_print: SPC '(' expression_numeric ')'  */
#line 558 "DARIC.y"
                                     { (yyval.ast) = token1(SPC, (yyvsp[-1].ast)); }
#line 6548 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 328: /* expression_print: SEMICOLON  */
#line 559 "DARIC.y"
                { (yyval.ast) = token(SEMICOLON); }
#line 6554 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 329: /* expression_print_list: expression_print  */
#line 563 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6560 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 330: /* expression_print_list: expression_print expression_print_list  */
#line 564 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6566 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 332: /* expression_input_list: expression_input  */
#line 572 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6572 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 333: /* expression_input_list: expression_input ',' expression_input_list  */
#line 573 "DARIC.y"
                                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6578 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 334: /* proc_parameter: %empty  */
#line 577 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6584 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 335: /* proc_parameter: variable  */
#line 578 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6590 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 336: /* proc_parameter: RETURN variable  */
#line 579 "DARIC.y"
                      { (yyval.ast) = token1(RETURN_PARAMETER, (yyvsp[0].ast)); }
#line 6596 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 337: /* proc_parameter_list: proc_parameter  */
#line 583 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 6602 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 338: /* proc_parameter_list: proc_parameter ',' proc_parameter_list  */
#line 584 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6608 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 339: /* fn_parameter: %empty  */
#line 588 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6614 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 340: /* fn_parameter: variable  */
#line 589 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6620 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 341: /* fn_parameter_list: fn_parameter  */
#line 593 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6626 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 342: /* fn_parameter_list: fn_parameter ',' fn_parameter_list  */
#line 594 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6632 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 343: /* when: WHEN expression_list sep statement_list sep  */
#line 598 "DARIC.y"
                                                  { (yyval.ast) = token2(WHEN, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6638 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 344: /* when_list: when  */
#line 602 "DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 6644 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 345: /* when_list: when_list when  */
#line 603 "DARIC.y"
                     { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6650 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 346: /* define_function: DEFPROC '(' proc_parameter_list ')' sep statement_list sep ENDPROC  */
#line 606 "DARIC.y"
                                                                         { (yyval.ast) = token3typed(DEFPROC, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-2].ast), Type::NOTYPE); }
#line 6656 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 347: /* define_function: DEFFN_INTEGER '(' fn_parameter_list ')' sep statement_list sep ENDFN  */
#line 607 "DARIC.y"
                                                                           { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-2].ast), Type::INTEGER); }
#line 6662 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 348: /* define_function: DEFFN_REAL '(' fn_parameter_list ')' sep statement_list sep ENDFN  */
#line 608 "DARIC.y"
                                                                        { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-2].ast), Type::REAL); }
#line 6668 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 349: /* define_function: DEFFN_STRING '(' fn_parameter_list ')' sep statement_list sep ENDFN  */
#line 609 "DARIC.y"
                                                                          { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-2].ast), Type::STRING); }
#line 6674 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;


#line 6678 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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
