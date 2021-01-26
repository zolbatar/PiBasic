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
#include <stdio.h>
#include <sstream>
#include "ast.h"

AST *final = nullptr;
extern int yylex();
extern FILE *yyin;
extern int yyfileno;
extern int yylineno;
std::list<std::string> error_list;
extern std::string file;
extern std::map<std::string, int> files_index;
std::map<int, std::list<AST *>> ast_lines;
void yyerror(const char *e);
int yylex_destroy(void);
int status;
extern bool interactive;

#line 95 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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
  YYSYMBOL_SS = 20,                        /* SS  */
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
#define YYFINAL  303
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10877

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  245
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  361
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1033

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
       0,    97,    97,   101,   102,   106,   107,   108,   109,   110,
     111,   115,   116,   120,   121,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   146,   147,   149,   150,   151,
     152,   153,   154,   156,   158,   159,   161,   162,   163,   164,
     166,   167,   168,   169,   171,   172,   173,   174,   176,   177,
     178,   179,   181,   182,   183,   185,   186,   187,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   221,   222,   224,   225,
     227,   228,   231,   234,   235,   236,   237,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   259,   260,   261,   262,   263,
     264,   265,   269,   270,   271,   272,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   303,   304,   306,   307,   308,   310,   312,   313,
     315,   316,   317,   319,   320,   321,   322,   324,   325,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   379,   380,   381,   382,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   401,   402,   403,   404,
     405,   409,   410,   411,   412,   413,   417,   418,   419,   420,
     421,   425,   426,   430,   431,   432,   433,   437,   438,   442,
     443,   447,   448,   449,   453,   454,   458,   459,   460,   461,
     462,   463,   464,   468,   469,   473,   474,   478,   482,   486,
     487,   491,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   505,   507,   509,   510,   512,   513,   514,   515,   516,
     517,   518,   519,   523,   524,   528,   529,   530,   534,   535,
     536,   537,   541,   542,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   559,   560,   561,   562,   563,   564,
     565,   569,   570,   574,   578,   579,   583,   584,   585,   589,
     590,   594,   595,   599,   600,   604,   608,   609,   612,   613,
     614,   615
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
  "FN_STRING", "NL", "SS", "SEMICOLON", "COMMA", "INTEGERDIVIDE", "E",
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

#define YYPACT_NINF (-538)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-40)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3876,  5905,  -215,  -208,  -194,    -1,  -190,  -147,  -124,  -113,
    -107,   -89,   -77,   -63,  -538,     4,    50,  2549,  3638,  3638,
    3638,  3638,  2549,    33,   180,   188,  2549,    -5,  2549,  2549,
     231,  -538,   411,   469,   118,   235,  -538,  -538,  -538,  -538,
     631,   631,   161,  -538,  3638,  3638,  -538,  2786,  3638,  3638,
    2999,  3212,  3638,  -538,  3425,  3638,  3638,  3638,  -538,   -47,
       2,   393,  2309,  -538,  -538,   243,   241,   246,  3638,  3638,
    3638,  -538,  3638,   253,  -538,  3876,   238,   239,  -538,  -538,
     491,   247,   354,  -538,    23,  -538,  -538,  -538,  -538,   251,
     256,  3638,  3638,  1855,  -538,  -538,  3638,   125,   231,   231,
     231,  2549,  2549,  2549,  2549,  -538,    45,    46,    60,  -538,
    -538,  -538,    63,     1,    69,    70,    75,   133,  3638,  3638,
      76,    86,    88,  3638,  3638,    92,    97,  -538,  -538,   116,
     123,   126,   129,   134,   164,   169,   170,   172,   179,   187,
     189,   190,   196,   200,   202,   203,  -538,  -538,  -538,   211,
     212,   214,   215,   217,   218,   228,   -15,   229,  -538,  -538,
    3638,  -538,  -538,  -538,  -538,  -538,  -538,  -538,  -538,   244,
    -538,   252,   631,  3638,  -538,  -538,  -538,  -538,  -538,  -538,
    -538,  -538,  -538,  -538,  -538,  -538,  -538,  -538,  -538,  -538,
    -538,  -538,  -538,  -538,  -538,  -538,  -538,  -538,  -538,  -538,
    -538,  -538,  -538,  -538,   257,   262,  -538,  -538,   323,  3638,
    -538,  -538,  -538,  3638,  -538, 10701,  -538,  -538,  -538,  -538,
     780,  -538,     3, 10701,  2781, 10701, 10731,   331,    31,    52,
     329,   166,  -538,  -538,  6086,  3876,  2549,   404,   183,  -538,
    -538,  -538,   193,  -538,   263,   271,   276,   281,   254,  -538,
     457,  -538,   282,   411,  -538,   465,   283,   780,   182,  -538,
    -538,  -538,   285,  -538,  4968,  5199,  3638,  5430,  5661,  5822,
    3638,  6003,  3638,  3638,  6184,  6365,  3638,  6546,  6727,  6908,
    7089,  3638,  3638,    38,  -538,   294,  -538,  -538,  -538,  -538,
     295,  -538, 10701,   780,  2309,  -538,   299,   300,   301,  7270,
    7451,  8673, 10701,  -538,  -538,  -538,  7534,  3638,  3638,  3638,
    3638,  3638,  3638,  3638,  3638,   631,  2549,   464,   469,  -538,
    -538,    37,    59,   521,   540,   192,   231,  -538,   305,   304,
    -538,   307,   306,   308,   309,   311,   317,   318,   332,   482,
     543,   550,  3638,  3638,  2549,  2549,  2549,  -538,  -538,  -538,
    -538, 10701, 10701,   631,   631,   631, 10701, 10701,   178,  3638,
    3638,  3638,  3638,  3638,  3638,  3638,  3638,  3638,  3638,  3638,
    3638,  3638,  3638,  3638,  3638,  3638,   631,   631,  3638,   631,
     631,   631,   631,   631,   335,  3638,  3638,  -538,  3638,  3638,
     780,  8710,  3638,  3638,   337,  8745,  1351,  3638,  3638,  3638,
    3638,  3638,  3638,  3638,  3638,  3638,  3638,  3638,  3638,  3638,
    3638,  3638,  3638,  3638,  3638,   631,   631,   631,   631,   631,
     631,   631,  3638,  3638,  3638,   562,  3638,   576,  3638,   578,
     579,    78,    80,   498,  3876,  6267,  -538,    79,  3876,   505,
    -538,  3876,  2549,   231,  3638,  3638,  3638,  3638,   411,  2068,
    -538,   496,  3638,   161,   161,  3638,  3638,  8772,  3638,  3638,
    3638,  8801,  3638,  8814,  8844,  3638,  3638,  8871,  3638,  3638,
    3638,  3638,  1414,  1456,   231,  -538,   231,  3638,  -538,   586,
    3638,  3638,  3638,  3638,  3638,  -538, 10701, 10701, 10701, 10701,
   10701, 10701, 10701, 10701,   780,  -538,  2549,  -538,  3638,  -538,
    3638,  -538,   527,  3638,  -538,   275,  -538,   125,   587,   231,
     592,   594,   596,  -538,  -538,  -538,  -538,  -538,  -538,  -538,
    1598,   351,   352,   353,   132,   205,   242,   362,   376,   380,
    1651,  1723,  1779,  3883,  7628,  7694,  7752,  7765,  7787,  7800,
    7822,  7857,  7892,  7927,  7948,  7987,  8022,   284,   296,  8051,
     577,   645,   678,   763,   443,  3638,  8081,  8906,  8945,  8970,
    3638,  8094,  8116,   619,  3638,  -538,   173,   165,   165,   165,
     165,  -538,  -538,   165,   165,   723,   723,   173,   173,   173,
     173,  2114,  1077,  1077,   599,   599,   599,   599,   599,   599,
    -538,  8152, 10701,  1918,   549, 10565,   392, 10600,   395,   399,
    3638,   629,  3638,   635,   636,    82,  3876,   575,  7534,  -538,
    2549,   574,  -538,  -538,   906,  1063,  1171,  8997,  -538,   623,
     231,   632,   553,  8187,  -538,  -538,  9037,  9072,  3638, 10701,
    9096, 10701,  3638,  9131,  3638,  3638,  9144,  9171,  3638,  9196,
    9235,  9270,  9295,  -538,  -538,  -538,  -538,  8222,   408,  8244,
    8257,  9330,  9369, 10701,  -538,  8279,  8316,   415,  8351,  -538,
    -538,  -538,  -538,  3876,  -538,  3876,  3876,  3876,   275,  -538,
    -538,  -538,  -538,  -538,  -538,   424,   429,   434,  -538,  -538,
    -538,  -538,  -538,  -538,  -538,  -538,  -538,  -538,  -538,  -538,
    -538,  -538,  -538,  -538,  -538,  -538,  -538,  -538,   631,  3638,
    3638,  3638,  -538,  8381,  -538,   631,  3638,  3638, 10701,  -538,
    -538,  -538,  9394,   153,  2549,   549,   -54,  3638,   435,  3638,
     436,   446, 10640,   416, 10666,   449,   450,   675,  -538,   108,
    7534,  -538,  -538,  -538,  3638,  -538,  3638,  -538,  3638,  -538,
     687,   633,  -538,   496,  -538,   689,  3638,  3638, 10701,  3638,
    9421,  3638,  9434,  9461,  3638,  3638,  9496,  3638,  3638,  3638,
    3638,  -538,   699,   454,   470,  3638,  3638,  -538,  -538,   631,
    -538,   657,   664,   665,   666,   475,   480,   481,    90,  8409,
    9525,  8422,  -538,   467,  9560,  8444,  3638,  7534,  -538,  -538,
    7534,  4107,  6448,  4338,  6629,  6810,  3638,   483,  3638,   488,
     490,  3876,   700,  -538,  -538,  8484,  8514,  8549,   494,   492,
    -538, 10701, 10701,  9589,  3638,  9624,  3638,  3638,  9659,  9684,
    3638, 10701,  9697,  9723,  9750,  -538,  3638,  3638,  9790,  9825,
     477,  -538,  -538,  -538,  -538,   119,   119,   119,  3638,  -538,
    -538,  3638,  -538,  -538,  3638,  -538,  9849,   705,   706,  3876,
    3638,   649,  3876,   667,  3876,  3638,   668,  3876,   673,  3876,
     677,  4569,  6991,  4800,  7172,  7353,   672,  3876,  -538,  -538,
    -538,  -538,   631,  3638,  9884,  3638,  9924,  9949,  3638,  3638,
   10701,   631,   631,   631,  9975,  9988,  3638,  3638,  -538,   185,
     511,   515,   516,  8577,  8617,  8644,  3638,  -538,   691,   685,
    5031,  -538,   693,  -538,   695,  5262,  -538,   696,  -538,   698,
    -538,  3876,  3638,   702,  3876,   704,  3876,  3638,   708,  3876,
     709,  3876,   720,  -538,   712,   486, 10701,  3638, 10701,  3638,
    3638, 10015, 10701,   780,   780,   780,  3638,  3638, 10701, 10701,
    -538,  -538,  -538,  -538,  -538,  -538, 10050,  -538,  -538,  3876,
     724,  -538,  -538,  3876,   726,  -538,  -538,   736,  5493,  -538,
     737,  -538,   738,  5724,  -538,   739,  -538,   740,  -538,  -538,
    -538, 10701, 10080, 10115,  3638, 10150, 10174,  3638,   741,  -538,
     744,  -538,  -538,  3876,   745,  -538,  -538,  3876,   747,  -538,
    -538,  3638,  3638, 10214,  3638,  3638, 10241,  -538,  -538,   748,
    -538,   750,  -538, 10276, 10305,  3638, 10340, 10375,  3638,  -538,
    -538,  3638,  3638, 10701,  3638,  3638, 10400, 10701, 10413, 10701,
   10701,  3638,  3638, 10439, 10466,  3638,  3638, 10506, 10541,  3638,
    3638, 10701, 10701
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   251,   256,   263,   285,     0,     0,     0,     0,
      22,     0,     0,     0,     9,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   315,
       0,    29,     0,     0,     0,     0,    21,    32,    33,    34,
       0,     0,     0,   107,     0,     0,   116,   114,     0,     0,
       0,     0,     0,   127,     0,     0,     0,     0,   131,     0,
       0,     0,    98,    52,    53,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     2,     3,     0,    13,   261,   262,
       0,     0,     0,    17,   322,   324,    15,    16,    10,     0,
       0,     0,     0,     0,   254,   259,     0,   346,   351,   351,
     351,   315,   315,   315,   315,     7,     0,     0,     0,   132,
     134,   291,   263,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   226,   227,   228,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   230,   171,   170,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   305,
       0,   179,   180,   181,   182,   183,   184,   185,   186,     0,
     175,     0,     0,     0,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   190,   191,   187,     0,     0,   168,   303,     0,     0,
     173,   174,   176,     0,   136,   313,   137,   138,   293,   292,
     314,    31,     0,    38,     0,    40,     0,     0,     0,     0,
       0,     0,    44,    45,     0,     0,     0,     0,   316,    27,
     267,   268,   269,    28,     0,     0,     0,     0,   283,    35,
       0,   326,   263,     0,   325,     0,     0,    43,    18,   271,
     272,   273,   274,    20,   108,   110,   115,     0,     0,     0,
       0,     0,     0,   175,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,   344,    46,   340,   337,   338,
       0,   336,   335,   334,   341,    99,     0,     0,     0,     0,
       0,     0,   106,     1,     4,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       6,     0,     0,     0,     0,     0,     0,   347,   349,     0,
     352,   353,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   315,   315,   315,   133,   135,   142,
     143,   222,   221,     0,     0,     0,   167,   301,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   231,     0,     0,
     192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    13,    11,     0,
      63,     0,   315,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,   342,     0,
       0,     0,     0,     0,     0,    14,   318,   327,   328,   329,
     330,   331,   332,   333,   319,   320,     0,   323,     0,   252,
       0,   257,     0,     0,   264,   286,   348,   346,     0,   351,
       0,     0,     0,    23,    24,    25,    26,    65,    66,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   139,   148,   153,   156,   155,
     154,   151,   152,   157,   158,   144,   145,   146,   147,   149,
     150,   159,   160,   161,   295,   298,   297,   296,   299,   300,
     294,     0,    37,   153,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,    12,
       0,     0,   317,   270,     0,     0,     0,     0,   284,     0,
       0,     0,     0,     0,    19,   275,     0,     0,     0,   112,
       0,   125,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,    48,   345,     0,     0,     0,
       0,     0,     0,   105,   321,     0,     0,     0,     0,   255,
     260,   266,   350,     0,   354,     0,     0,     0,     0,   162,
     163,   302,   223,   225,   224,     0,     0,     0,   229,   140,
     141,   241,   232,   233,   234,   235,   236,   237,   238,   239,
     242,   240,   243,   244,   245,   250,   246,   309,     0,     0,
       0,     0,   247,     0,   306,     0,     0,     0,   193,   169,
     304,   177,     0,     0,   315,   356,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,     0,
       0,    55,    62,    64,     0,   276,     0,   278,     0,   280,
       0,     0,   288,   289,   287,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   339,     0,     0,     0,     0,     0,   253,   258,     0,
     265,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   307,     0,     0,     0,     0,     0,   357,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,    59,     0,     0,     0,     0,     0,
     290,   109,   111,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,     0,    49,     0,     0,     0,     0,
       0,   358,   359,   361,   360,     0,     0,     0,     0,   248,
     310,     0,   312,   308,     0,   189,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   277,   279,
     281,   282,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,   355,     0,     0,
       0,    82,     0,    72,     0,     0,    83,     0,    71,     0,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,     0,   119,     0,   120,     0,
       0,     0,   126,   128,   129,   130,     0,     0,   103,   104,
     165,   164,   166,   249,   311,   188,     0,    97,    80,     0,
       0,    69,    81,     0,     0,    68,    70,     0,     0,    90,
       0,    78,     0,     0,    91,     0,    77,     0,    79,    61,
      42,   121,     0,     0,     0,     0,     0,     0,     0,    86,
       0,    87,    88,     0,     0,    75,    89,     0,     0,    74,
      76,     0,     0,     0,     0,     0,     0,    84,    85,     0,
      94,     0,    95,     0,     0,     0,     0,     0,     0,    92,
      93,     0,     0,   122,     0,     0,     0,   123,     0,   101,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   178,   124
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -538,  -538,   701,    22,   315,   177,  -210,  -537,   -18,   557,
     927,    47,  1230,    13,   321,  -538,  -220,  -538,  -238,  -538,
    -538,  -538,    34,  -538,   245,    81,   -84,  -538,   -21,  -538,
    -538,   506,  -538,  -227,  -538,   322,  -538,   -95,  -538,   113,
    -538
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    73,    74,   438,   439,    76,    77,   214,   215,   216,
     217,    80,    81,   284,   243,   262,   263,   248,   249,    82,
      83,   621,   622,   219,   220,   238,   239,    84,    85,    86,
     294,   295,   285,   286,   328,   329,   331,   332,   715,   716,
      87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     223,   224,   225,   226,   333,   334,    94,    95,    94,    95,
      94,    95,   251,   254,   235,   450,   789,   335,   336,   337,
     338,   384,    75,   105,   437,   790,   264,   265,    91,   267,
     268,   269,   271,   274,   275,    92,   277,   278,   279,   280,
     228,   229,   230,   242,   292,     2,     3,   112,   113,    93,
     299,   300,   301,    97,   302,   426,   475,   106,   107,   108,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   321,   322,   324,   428,   240,   325,   236,
     250,   250,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   317,    98,    75,   221,   306,
     351,   352,   600,   227,   602,   356,   357,   234,   240,   237,
     327,   330,   330,   330,   415,   416,   417,   418,   427,    99,
     419,   420,   421,   109,   110,     2,     3,   252,     5,   240,
     100,   231,     2,     3,   112,   113,   101,   347,   348,   429,
       2,     3,   387,   222,   240,   240,   240,   240,   608,   410,
     411,   727,   889,   728,   102,   391,   415,   416,   417,   418,
     659,   660,   419,   420,   421,   601,   103,   603,   259,   260,
     261,   410,   411,   431,   432,   433,   326,   802,    90,   803,
     104,   412,   413,   414,   232,   527,   528,   529,   397,   347,
     348,   395,   233,   402,   403,   396,   281,   406,   407,   408,
     409,   402,   403,   412,   413,   414,   415,   416,   417,   418,
     618,   253,   419,   420,   421,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   385,   415,
     416,   417,   418,   624,   625,   419,   420,   421,     2,     3,
     112,   113,    96,   255,   343,   282,   422,   645,   457,   646,
     296,   297,   461,   303,   463,   464,   298,   305,   467,   306,
     521,   522,   523,   472,   473,   318,   415,   416,   417,   418,
     319,   315,   419,   420,   421,   320,   292,   410,   411,   498,
     474,   499,   659,   660,   661,   257,   258,   339,   340,   486,
     487,   488,   489,   490,   491,   492,   493,   497,   890,   891,
     892,   500,   341,   501,   410,   411,   342,   293,   415,   416,
     417,   418,   344,   345,   419,   420,   421,   440,   346,   353,
     415,   416,   417,   418,   324,   520,   419,   420,   421,   354,
     240,   355,   838,   394,   839,   358,   412,   413,   414,   506,
     359,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   612,   360,
     549,     2,     3,   112,   113,   250,   361,   556,   557,   362,
     558,   559,   363,   240,   561,   562,   672,   364,   316,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   495,   731,   283,
       2,     3,   112,   113,   591,   592,   593,   365,   595,   425,
     597,   436,   366,   367,   664,   368,   430,   390,   244,   245,
     246,   247,   369,   441,   453,   442,   614,   615,   616,   617,
     370,   324,   371,   372,   623,   443,   505,   626,   627,   373,
     629,   630,   631,   374,   633,   375,   376,   636,   637,   673,
     639,   640,   641,   642,   377,   378,   242,   379,   380,   647,
     381,   382,   649,   650,   651,   652,   653,   415,   416,   417,
     418,   383,   386,   419,   420,   421,     2,     3,   112,     5,
     655,   307,   656,   485,   451,   658,   674,   388,   496,   517,
     240,   415,   416,   417,   418,   389,   448,   419,   420,   421,
     392,   415,   416,   417,   418,   393,   444,   419,   420,   421,
     415,   416,   417,   418,   445,   307,   419,   420,   421,   446,
     327,   240,   330,   240,   447,   449,   452,   454,   695,   308,
     309,   310,   311,   312,   313,   314,   476,   703,   477,   293,
     696,   479,   708,   480,   481,   502,   712,   507,   508,   509,
     510,   518,   511,   512,   240,   513,   240,    78,    78,   519,
     494,   514,   515,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   516,   654,   555,   563,
     848,   594,   722,   596,   724,   604,   598,    78,   599,   610,
      78,    78,   620,   648,   657,   669,   670,   671,   524,   525,
     526,   415,   416,   417,   418,   675,   663,   419,   420,   421,
     748,   665,   607,   666,   750,   667,   752,   753,    78,   676,
     756,   547,   548,   677,   550,   551,   552,   553,   554,   711,
     787,   421,    78,   742,   714,   718,   723,   111,   720,    78,
     112,   256,   721,   725,   730,   726,   733,   741,   744,   116,
     762,   743,   410,   411,    78,    78,    78,    78,   769,   797,
     584,   585,   586,   587,   588,   589,   590,   240,   775,   415,
     416,   417,   418,   776,   349,   419,   420,   421,   777,   792,
     794,   779,   780,   781,   412,   413,   414,   702,   784,   785,
     795,   732,   799,   800,   801,   808,   826,   124,   661,   791,
     809,   793,   415,   416,   417,   418,   825,   831,   419,   420,
     421,   843,   827,   832,   833,   834,   805,   835,   806,   867,
     807,   888,   836,   837,   897,   898,   901,   862,   811,   812,
     970,   813,   864,   815,   865,   872,   818,   819,   871,   821,
     822,   823,   824,   923,   903,   906,   397,   828,   829,   605,
     908,   402,   403,   609,   910,   940,   611,   408,   409,   941,
     942,   947,   948,   150,   613,   152,   153,   154,   846,   156,
     951,   157,   952,   955,   159,   956,   304,   810,   861,   959,
     863,   961,   503,   969,   504,   964,   966,   415,   416,   417,
     418,    78,    78,   419,   420,   421,   874,   968,   876,   877,
     478,   979,   880,   981,   415,   416,   417,   418,   884,   885,
     419,   420,   421,   982,   985,   986,   989,   990,   997,   698,
     893,   998,  1000,   894,  1002,  1009,   895,  1010,   788,   662,
       0,     0,   900,     0,     0,   410,   411,   905,     0,     0,
      78,     0,     0,     0,     0,     0,     0,     0,   205,     0,
       0,     0,     0,     0,     0,   926,   207,   928,     0,     0,
     931,   932,     0,    78,     0,     0,     0,     0,   938,   939,
       0,     0,     0,     0,     0,    78,     0,     0,   946,     0,
       0,     0,     0,    78,     0,     0,     0,   699,     0,     0,
       0,     0,     0,     0,   958,     0,     0,     0,     0,   963,
       0,     0,     0,     0,     0,     0,     0,   804,     0,   971,
       0,   972,   973,     0,     0,     0,     0,     0,   975,   976,
     700,   729,     0,     0,     0,     0,     0,    79,    79,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,     0,   778,     0,     0,     0,     0,     0,     0,
     783,     0,     0,     0,     0,     0,   993,    79,     0,   996,
      79,    79,     0,     0,   847,     0,     0,     0,   851,   853,
     856,   858,   860,  1003,  1004,     0,  1006,  1007,   771,     0,
     772,   773,   774,     0,     0,     0,     0,  1013,    79,     0,
    1016,    78,    78,  1017,  1018,    78,  1019,  1020,    78,     0,
      78,     0,    79,  1023,  1024,   701,     0,  1027,  1028,    79,
       0,  1031,  1032,     0,   830,     0,     0,     0,   410,   411,
       0,     0,     0,     0,    79,    79,    79,    79,     0,     0,
       0,    78,     0,    78,     0,     0,     0,     0,   913,   915,
     918,   920,   922,     0,   350,     0,     0,     0,     0,     0,
     412,   413,   414,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   950,     0,     0,
       0,     0,   954,     0,     0,     0,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,     0,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,     0,     0,     0,   866,   925,     0,     0,
       0,     0,     0,     0,     0,     0,   933,   934,   935,     0,
       0,     0,     0,     0,     0,   984,     0,     0,     0,     0,
     988,     0,     0,     0,     0,     0,     0,     0,   734,     0,
     735,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    79,    78,   899,    78,     0,   902,     0,   904,
       0,     0,   907,     0,   909,   410,   411,    78,     0,     0,
       0,     0,   924,     0,     0,     0,     0,     0,     0,   410,
     411,     0,     0,     0,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   412,   413,   414,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,   412,    78,    78,    78,     0,   957,     0,     0,   960,
       0,   962,     0,    79,   965,     0,   967,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,   218,     0,     0,
       0,     0,   218,    79,     0,     0,   218,     0,   218,   218,
     241,     0,     0,     0,   978,     0,     0,     0,   980,     0,
     218,   218,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   410,   411,     0,     0,    78,     0,     0,
       0,   241,   218,     0,     0,     0,     0,     0,   999,     0,
       0,     0,  1001,     0,     0,   736,     0,   737,     0,     0,
       0,     0,   241,     0,     0,   412,   413,   414,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   241,   241,   241,
     241,   218,   218,   218,   218,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,    78,    78,    78,
      78,    78,    78,     0,     0,     0,     0,     0,    78,     0,
       0,    79,    79,     0,     0,    79,     0,     0,    79,     0,
      79,     0,     0,     0,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,   218,    79,     0,     0,    78,     0,     0,    78,
       0,    78,     0,   738,    78,   739,    78,     0,    78,    78,
      78,    78,    78,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,    79,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,    78,   410,   411,     0,   218,     0,    78,     0,
       0,    78,     0,    78,     0,     0,    78,     0,    78,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,     0,     0,     0,   412,   413,   414,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
      78,     0,     0,   241,     0,    78,     0,     0,     0,     0,
      78,     0,     0,     0,   218,     0,   410,   411,     0,     0,
       0,     0,     0,    79,     0,    79,     0,     0,     0,     0,
      78,     0,     0,     0,    78,   218,   218,    79,     0,     0,
       0,     0,     0,     0,     0,     0,   241,     0,   412,   413,
     414,     0,     0,     0,     0,     0,     0,     0,   410,   411,
       0,     0,     0,     0,   218,   218,   218,     0,     0,     0,
       0,     0,     0,   218,   218,   218,     0,     0,     0,     0,
      79,     0,    79,    79,    79,   565,     0,     0,     0,     0,
     412,   413,   414,     0,     0,     0,   218,   218,     0,   218,
     218,   218,   218,   218,     0,     0,     0,     0,     0,     0,
       0,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,   218,   218,   218,   218,
     218,   218,     0,     0,     0,     0,     0,    79,   643,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,   241,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     644,     0,     0,     0,   241,     0,   241,     0,     0,     0,
     410,   411,     0,     0,    79,     0,     0,    79,    79,    79,
      79,    79,    79,     0,     0,     0,   218,     0,    79,     0,
       0,     0,     0,     0,     0,     0,     0,   241,     0,   241,
       0,     0,   412,   413,   414,     0,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,     0,
       0,     0,     0,   410,   411,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,    79,
       0,    79,     0,     0,    79,     0,    79,     0,    79,    79,
      79,    79,    79,     0,    79,   412,   413,   414,     0,     0,
       0,     0,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,     0,    79,     0,     0,   410,   411,     0,    79,     0,
     218,    79,   668,    79,     0,     0,    79,     0,    79,     0,
     241,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,     0,     2,     3,     0,   222,     0,   412,   413,   414,
       0,   114,   115,     0,     0,     0,    79,     0,     0,     0,
      79,     0,     0,     0,     0,    79,     0,     0,   117,     0,
      79,   410,   411,     0,     0,   678,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,   118,     0,    79,   119,   120,   121,   122,   123,
       0,     0,     0,   412,   413,   414,     0,     0,   218,     0,
       0,     0,     0,     0,     0,   218,     0,   -39,   -39,     0,
       0,   397,     0,     0,   218,     0,   402,   403,   125,     0,
     406,   407,   408,   409,     0,     0,     0,     0,     0,   126,
     127,   128,     0,     0,   129,   130,   131,   679,     0,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   -39,   151,     0,
       0,     0,   155,     0,     0,   -39,     0,   158,     0,   218,
       0,     0,   160,     0,     0,   161,   162,   163,   164,   165,
     166,   167,   168,     0,     0,   169,     0,     0,     0,     0,
       0,     0,   170,   680,     0,   171,     0,     0,     0,     0,
     410,   411,     0,     0,     0,     0,     0,     0,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,     0,
     203,   204,   109,   110,     0,     2,     3,     0,   222,   206,
       0,     0,     0,     0,   114,   115,   208,   209,     0,     0,
       0,     0,     0,   210,   211,   212,     0,     0,   213,   323,
       0,   117,   218,     0,     0,     0,     0,     0,     0,     0,
       0,   218,   218,   218,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,   119,   120,
     121,   122,   123,     0,     0,     0,     0,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,   128,     0,     0,   129,   130,   131,
       0,     0,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
       0,   151,     0,     0,     0,   155,     0,     0,     0,     0,
     158,     0,     0,     0,     0,   160,     0,     0,   161,   162,
     163,   164,   165,   166,   167,   168,   410,   411,   169,     0,
       0,     0,     0,     0,     0,   170,     0,     0,   171,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,     0,   203,   204,     0,     0,     0,     0,     0,
       0,     0,   206,     0,     0,     0,     0,     0,     0,   208,
     209,     0,     0,     0,     0,     0,   210,   211,   212,     0,
       0,   213,   619,   109,   110,   111,     2,     3,   112,   113,
       0,     0,     0,     0,     0,   114,   115,   116,     0,     0,
     287,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,   288,   289,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,   119,
     120,   121,   122,   123,     0,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,   127,   128,     0,     0,   129,   130,
     131,     0,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     0,   157,
       0,   158,   159,     0,     0,     0,   160,     0,     0,   161,
     162,   163,   164,   165,   166,   167,   168,     0,     0,   169,
       0,     0,     0,     0,     0,     0,   170,     0,     0,   171,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,     0,   203,   204,   205,     0,     0,   290,
       0,     0,     0,   206,   207,     0,     0,     0,     0,     0,
     208,   209,     0,     0,     0,     0,     0,   210,   211,   212,
       0,   291,   213,   109,   110,   111,     2,     3,   112,   113,
       0,     0,     0,     0,     0,   114,   115,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,   119,
     120,   121,   122,   123,     0,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,   127,   128,     0,     0,   129,   130,
     131,     0,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     0,   157,
       0,   158,   159,     0,     0,     0,   160,     0,     0,   161,
     162,   163,   164,   165,   166,   167,   168,     0,     0,   169,
       0,     0,     0,     0,     0,     0,   170,     0,     0,   171,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,     0,   203,   204,   205,     0,     0,     0,
       0,     0,     0,   206,   207,     0,     0,     0,     0,     0,
     208,   209,     0,     0,     0,     0,     0,   210,   211,   212,
     109,   110,   213,     2,     3,     0,   222,     0,     0,     0,
       0,     0,   114,   115,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,     0,     0,   119,   120,   121,   122,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,   127,   128,   410,   411,   129,   130,   131,     0,     0,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,     0,   151,
       0,     0,     0,   155,     0,   412,   413,   414,   158,     0,
       0,     0,     0,   160,     0,     0,   161,   162,   163,   164,
     165,   166,   167,   168,     0,     0,   169,     0,     0,     0,
       0,   266,     0,   170,     0,     0,   171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
       0,   203,   204,   109,   110,     0,     2,     3,     0,   222,
     206,     0,     0,     0,     0,   114,   115,   208,   209,     0,
       0,     0,     0,   423,   210,   211,   212,     0,     0,   213,
       0,     0,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,   119,
     120,   121,   122,   123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,   127,   128,     0,     0,   129,   130,
     131,     0,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,     0,   151,     0,     0,     0,   155,     0,     0,     0,
       0,   158,     0,     0,     0,     0,   160,     0,     0,   161,
     162,   163,   164,   165,   166,   167,   168,     0,     0,   169,
       0,     0,     0,     0,     0,   270,   170,     0,     0,   171,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,     0,   203,   204,   109,   110,     0,     2,
       3,     0,   222,   206,     0,     0,     0,     0,   114,   115,
     208,   209,     0,     0,     0,     0,     0,   210,   211,   212,
       0,     0,   213,     0,     0,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   119,   120,   121,   122,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   126,   127,   128,     0,
       0,   129,   130,   131,     0,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,     0,   151,     0,     0,     0,   155,
       0,     0,     0,     0,   158,     0,     0,     0,     0,   160,
       0,     0,   161,   162,   163,   164,   165,   166,   167,   168,
       0,     0,   169,     0,     0,     0,     0,     0,   272,   273,
       0,     0,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,     0,   203,   204,   109,
     110,     0,     2,     3,     0,   222,   206,     0,     0,     0,
       0,   114,   115,   208,   209,     0,     0,     0,     0,     0,
     210,   211,   212,     0,     0,   213,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,   119,   120,   121,   122,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
     127,   128,     0,     0,   129,   130,   131,     0,     0,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,     0,   151,     0,
       0,     0,   155,     0,     0,     0,     0,   158,     0,     0,
       0,     0,   160,     0,     0,   161,   162,   163,   164,   165,
     166,   167,   168,     0,     0,   169,     0,     0,     0,     0,
       0,   276,   170,     0,     0,   171,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,     0,
     203,   204,   109,   110,     0,     2,     3,     0,   222,   206,
       0,     0,     0,     0,   114,   115,   208,   209,     0,     0,
       0,     0,     0,   210,   211,   212,     0,     0,   213,     0,
       0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,   119,   120,
     121,   122,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,   128,     0,     0,   129,   130,   131,
       0,     0,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
       0,   151,     0,     0,     0,   155,     0,     0,     0,     0,
     158,     0,     0,     0,     0,   160,     0,     0,   161,   162,
     163,   164,   165,   166,   167,   168,     0,     0,   169,     0,
       0,     0,     0,     0,     0,   170,     0,     0,   171,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,     0,   203,   204,     0,     0,     0,     0,     0,
       0,     0,   206,     0,     0,     0,     0,     0,     0,   208,
     209,     0,     0,     0,     0,     0,   210,   211,   212,     1,
       0,   213,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,     0,
       0,    16,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,    18,    19,    20,     0,     0,     0,     0,
      21,     0,     0,     0,    22,     0,     0,     0,     0,    23,
      24,    25,    26,     0,     0,     0,    27,     0,     0,     0,
       0,     0,    28,     0,     0,    29,    30,    31,     0,    32,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   410,   411,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,    41,    42,     0,   412,   413,   414,
       0,     0,     0,     0,    43,     0,    44,    45,     0,    46,
      47,     0,     0,     0,    48,    49,     0,    50,     0,    51,
       0,     0,    52,    53,    54,     0,    55,    56,    57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,     0,    59,    60,    61,    62,     0,     0,     0,     0,
      63,    64,     0,     0,    65,    66,    67,     0,     0,    68,
      69,    70,    71,    72,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   849,   681,     0,     0,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,    18,    19,    20,     0,     0,     0,
       0,    21,     0,     0,     0,    22,     0,     0,     0,     0,
      23,    24,    25,    26,     0,     0,     0,    27,   850,     0,
       0,     0,     0,    28,     0,     0,    29,    30,    31,     0,
      32,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,     0,     0,     0,     0,     0,     0,     0,     0,   410,
     411,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,     0,
       0,   412,   413,   414,     0,    41,    42,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,     0,
      46,    47,     0,     0,     0,    48,    49,     0,    50,     0,
      51,     0,     0,    52,    53,    54,     0,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,    59,    60,    61,    62,     0,     0,     0,
       0,    63,    64,     0,     0,    65,    66,    67,     0,     0,
      68,    69,    70,    71,    72,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   854,     0,     0,
       0,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,    17,
       0,     0,     0,     0,     0,    18,    19,    20,     0,     0,
       0,     0,    21,     0,     0,     0,    22,     0,     0,     0,
       0,    23,    24,    25,    26,     0,     0,     0,    27,   855,
       0,     0,     0,     0,    28,     0,     0,    29,    30,    31,
       0,    32,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,     0,     0,     0,     0,     0,     0,     0,     0,
     410,   411,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
       0,     0,   412,   413,   414,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,    45,
       0,    46,    47,     0,     0,     0,    48,    49,     0,    50,
       0,    51,     0,     0,    52,    53,    54,     0,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,    59,    60,    61,    62,     0,     0,
       0,     0,    63,    64,     0,     0,    65,    66,    67,     0,
       0,    68,    69,    70,    71,    72,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   911,     0,
       0,     0,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,    18,    19,    20,     0,
       0,     0,     0,    21,     0,     0,     0,    22,     0,     0,
       0,     0,    23,    24,    25,    26,     0,     0,     0,    27,
     912,     0,     0,     0,     0,    28,     0,     0,    29,    30,
      31,     0,    32,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,   410,   411,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,     0,     0,   412,   413,   414,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,     0,    46,    47,     0,     0,     0,    48,    49,     0,
      50,     0,    51,     0,     0,    52,    53,    54,     0,    55,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,    59,    60,    61,    62,     0,
       0,     0,     0,    63,    64,     0,     0,    65,    66,    67,
       0,     0,    68,    69,    70,    71,    72,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   916,
       0,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,     0,     0,     0,     0,
       0,    17,     0,     0,     0,     0,     0,    18,    19,    20,
       0,     0,     0,     0,    21,     0,     0,     0,    22,     0,
       0,     0,     0,    23,    24,    25,    26,     0,     0,     0,
      27,   917,     0,     0,     0,     0,    28,     0,     0,    29,
      30,    31,     0,    32,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,   410,   411,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,     0,     0,   412,   413,   414,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,    45,     0,    46,    47,     0,     0,     0,    48,    49,
       0,    50,     0,    51,     0,     0,    52,    53,    54,     0,
      55,    56,    57,     0,     0,     0,     0,     0,     0,     0,
       0,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,     0,    59,    60,    61,    62,
       0,     0,     0,     0,    63,    64,     0,     0,    65,    66,
      67,     0,     0,    68,    69,    70,    71,    72,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     949,     0,     0,     0,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,     0,     0,     0,
     410,   411,    17,     0,     0,     0,     0,     0,    18,    19,
      20,     0,     0,     0,     0,    21,     0,     0,     0,    22,
       0,     0,     0,     0,    23,    24,    25,    26,     0,     0,
       0,    27,   412,   413,   414,     0,     0,    28,     0,     0,
      29,    30,    31,     0,    32,     0,     0,     0,    33,    34,
      35,    36,    37,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,   410,   411,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    40,     0,     0,   412,   413,   414,     0,    41,
      42,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,     0,    46,    47,     0,     0,     0,    48,
      49,     0,    50,     0,    51,     0,     0,    52,    53,    54,
     455,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,    59,    60,    61,
      62,     0,     0,     0,     0,    63,    64,     0,     0,    65,
      66,    67,     0,     0,    68,    69,    70,    71,    72,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   953,     0,     0,     0,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,   410,   411,    17,     0,     0,     0,     0,     0,    18,
      19,    20,     0,     0,     0,     0,    21,     0,     0,     0,
      22,     0,     0,     0,     0,    23,    24,    25,    26,     0,
       0,     0,    27,   412,   413,   414,     0,     0,    28,     0,
       0,    29,    30,    31,     0,    32,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,     0,     0,     0,     0,
       0,     0,     0,     0,   410,   411,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,     0,     0,   412,   413,   414,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,    45,     0,    46,    47,     0,     0,     0,
      48,    49,     0,    50,     0,    51,     0,     0,    52,    53,
      54,   456,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     0,    59,    60,
      61,    62,     0,     0,     0,     0,    63,    64,     0,     0,
      65,    66,    67,     0,     0,    68,    69,    70,    71,    72,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   983,     0,     0,     0,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       0,     0,   410,   411,    17,     0,     0,     0,     0,     0,
      18,    19,    20,     0,     0,     0,     0,    21,     0,     0,
       0,    22,     0,     0,     0,     0,    23,    24,    25,    26,
       0,     0,     0,    27,   412,   413,   414,     0,     0,    28,
       0,     0,    29,    30,    31,     0,    32,     0,     0,     0,
      33,    34,    35,    36,    37,    38,    39,     0,     0,     0,
       0,     0,     0,     0,     0,   410,   411,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,     0,     0,   412,   413,   414,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,     0,    46,    47,     0,     0,
       0,    48,    49,     0,    50,     0,    51,     0,     0,    52,
      53,    54,   458,    55,    56,    57,     0,     0,     0,     0,
       0,     0,     0,     0,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,    59,
      60,    61,    62,     0,     0,     0,     0,    63,    64,     0,
       0,    65,    66,    67,     0,     0,    68,    69,    70,    71,
      72,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   987,     0,     0,     0,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,   410,   411,    17,     0,     0,     0,     0,
       0,    18,    19,    20,     0,     0,     0,     0,    21,     0,
       0,     0,    22,     0,     0,     0,     0,    23,    24,    25,
      26,     0,     0,     0,    27,   412,   413,   414,     0,     0,
      28,     0,     0,    29,    30,    31,     0,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,   410,   411,     0,     0,
       0,     0,     0,     0,     0,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,   412,   413,
     414,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,     0,    46,    47,     0,
       0,     0,    48,    49,     0,    50,     0,    51,     0,     0,
      52,    53,    54,   459,    55,    56,    57,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    88,    89,     0,     0,     0,     0,
       0,     0,     0,     0,   410,   411,     0,     0,    58,     0,
      59,    60,    61,    62,     0,     0,     0,     0,    63,    64,
      16,     0,    65,    66,    67,     0,    17,    68,    69,    70,
      71,    72,    18,    19,    20,     0,   412,   413,   414,    21,
       0,     0,     0,    22,     0,     0,     0,     0,    23,    24,
      25,    26,     0,     0,     0,    27,     0,     0,     0,     0,
       0,    28,     0,     0,    29,    30,    31,     0,    32,     0,
       0,     0,    33,    34,    35,    36,    37,    38,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,     0,
       0,     0,     0,     0,     0,     0,    40,     0,     0,     0,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,     0,    43,   460,    44,    45,     0,    46,    47,
       0,     0,     0,    48,    49,     0,    50,     0,    51,     0,
       0,    52,    53,    54,     0,    55,    56,    57,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   434,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   410,   411,     0,     0,    58,
       0,    59,    60,    61,    62,     0,     0,     0,     0,    63,
      64,    16,     0,    65,    66,    67,     0,    17,    68,    69,
      70,    71,    72,    18,    19,    20,     0,   412,   413,   414,
      21,     0,     0,     0,    22,     0,     0,     0,     0,    23,
      24,    25,    26,     0,     0,     0,    27,     0,   435,     0,
       0,     0,    28,     0,     0,    29,    30,    31,     0,    32,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,     0,    43,   462,    44,    45,     0,    46,
      47,     0,     0,     0,    48,    49,     0,    50,     0,    51,
       0,     0,    52,    53,    54,     0,    55,    56,    57,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   606,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   410,   411,     0,     0,
      58,     0,    59,    60,    61,    62,     0,     0,     0,     0,
      63,    64,    16,     0,    65,    66,    67,     0,    17,    68,
      69,    70,    71,    72,    18,    19,    20,     0,   412,   413,
     414,    21,     0,     0,     0,    22,     0,     0,     0,     0,
      23,    24,    25,    26,     0,     0,     0,    27,     0,     0,
       0,     0,     0,    28,     0,     0,    29,    30,    31,     0,
      32,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,     0,     0,     0,     0,     0,     0,     0,    40,     0,
       0,     0,     0,     0,     0,    41,    42,     0,     0,     0,
       0,     0,     0,     0,     0,    43,   465,    44,    45,     0,
      46,    47,     0,     0,     0,    48,    49,     0,    50,     0,
      51,     0,     0,    52,    53,    54,     0,    55,    56,    57,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   852,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   410,   411,     0,
       0,    58,     0,    59,    60,    61,    62,     0,     0,     0,
       0,    63,    64,    16,     0,    65,    66,    67,     0,    17,
      68,    69,    70,    71,    72,    18,    19,    20,     0,   412,
     413,   414,    21,     0,     0,     0,    22,     0,     0,     0,
       0,    23,    24,    25,    26,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     0,     0,    29,    30,    31,
       0,    32,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,     0,     0,     0,     0,     0,     0,     0,    40,
       0,     0,     0,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,     0,    43,   466,    44,    45,
       0,    46,    47,     0,     0,     0,    48,    49,     0,    50,
       0,    51,     0,     0,    52,    53,    54,     0,    55,    56,
      57,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   857,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   410,   411,
       0,     0,    58,     0,    59,    60,    61,    62,     0,     0,
       0,     0,    63,    64,    16,     0,    65,    66,    67,     0,
      17,    68,    69,    70,    71,    72,    18,    19,    20,     0,
     412,   413,   414,    21,     0,     0,     0,    22,     0,     0,
       0,     0,    23,    24,    25,    26,     0,     0,     0,    27,
       0,     0,     0,     0,     0,    28,     0,     0,    29,    30,
      31,     0,    32,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,     0,     0,     0,     0,     0,     0,     0,
      40,     0,     0,     0,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    43,   468,    44,
      45,     0,    46,    47,     0,     0,     0,    48,    49,     0,
      50,     0,    51,     0,     0,    52,    53,    54,     0,    55,
      56,    57,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   859,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   410,
     411,     0,     0,    58,     0,    59,    60,    61,    62,     0,
       0,     0,     0,    63,    64,    16,     0,    65,    66,    67,
       0,    17,    68,    69,    70,    71,    72,    18,    19,    20,
       0,   412,   413,   414,    21,     0,     0,     0,    22,     0,
       0,     0,     0,    23,    24,    25,    26,     0,     0,     0,
      27,     0,     0,     0,     0,     0,    28,     0,     0,    29,
      30,    31,     0,    32,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,     0,     0,     0,     0,     0,     0,
       0,    40,     0,     0,     0,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,     0,    43,   469,
      44,    45,     0,    46,    47,     0,     0,     0,    48,    49,
       0,    50,     0,    51,     0,     0,    52,    53,    54,     0,
      55,    56,    57,     0,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     914,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     410,   411,     0,     0,    58,     0,    59,    60,    61,    62,
       0,     0,     0,     0,    63,    64,    16,     0,    65,    66,
      67,     0,    17,    68,    69,    70,    71,    72,    18,    19,
      20,     0,   412,   413,   414,    21,     0,     0,     0,    22,
       0,     0,     0,     0,    23,    24,    25,    26,     0,     0,
       0,    27,     0,     0,     0,     0,     0,    28,     0,     0,
      29,    30,    31,     0,    32,     0,     0,     0,    33,    34,
      35,    36,    37,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,     0,     0,     0,     0,     0,
       0,     0,    40,     0,     0,     0,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,     0,     0,     0,    43,
     470,    44,    45,     0,    46,    47,     0,     0,     0,    48,
      49,     0,    50,     0,    51,     0,     0,    52,    53,    54,
       0,    55,    56,    57,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   919,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   410,   411,     0,     0,    58,     0,    59,    60,    61,
      62,     0,     0,     0,     0,    63,    64,    16,     0,    65,
      66,    67,     0,    17,    68,    69,    70,    71,    72,    18,
      19,    20,     0,   412,   413,   414,    21,     0,     0,     0,
      22,     0,     0,     0,     0,    23,    24,    25,    26,     0,
       0,     0,    27,     0,     0,     0,     0,     0,    28,     0,
       0,    29,    30,    31,     0,    32,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,     0,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,     0,
      43,   471,    44,    45,     0,    46,    47,     0,     0,     0,
      48,    49,     0,    50,     0,    51,     0,     0,    52,    53,
      54,     0,    55,    56,    57,     0,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   921,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   410,   411,     0,     0,    58,     0,    59,    60,
      61,    62,     0,     0,     0,     0,    63,    64,    16,     0,
      65,    66,    67,     0,    17,    68,    69,    70,    71,    72,
      18,    19,    20,     0,   412,   413,   414,    21,     0,     0,
       0,    22,     0,     0,     0,     0,    23,    24,    25,    26,
       0,     0,     0,    27,     0,     0,     0,     0,     0,    28,
       0,     0,    29,    30,    31,     0,    32,     0,     0,     0,
      33,    34,    35,    36,    37,    38,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,     0,     0,
       0,     0,     0,     0,    40,     0,     0,     0,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
       0,    43,   482,    44,    45,     0,    46,    47,     0,     0,
       0,    48,    49,     0,    50,     0,    51,     0,     0,    52,
      53,    54,     0,    55,    56,    57,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   410,   411,     0,     0,    58,     0,    59,
      60,    61,    62,     0,     0,     0,     0,    63,    64,    16,
       0,    65,    66,    67,     0,    17,    68,    69,    70,    71,
      72,    18,    19,    20,     0,   412,   413,   414,    21,     0,
       0,     0,    22,     0,     0,     0,     0,    23,    24,    25,
      26,     0,     0,     0,    27,     0,     0,     0,     0,     0,
      28,     0,     0,    29,    30,    31,     0,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,    43,   483,    44,    45,     0,    46,    47,     0,
       0,     0,    48,    49,     0,    50,     0,    51,     0,     0,
      52,    53,    54,     0,    55,    56,    57,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     410,   411,     0,     0,     0,     0,     0,     0,    58,     0,
      59,    60,    61,    62,     0,     0,     0,     0,    63,    64,
       0,     0,    65,    66,    67,     0,     0,    68,    69,    70,
      71,    72,   412,   413,   414,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,     0,     0,     0,     0,     0,   410,   411,     0,     0,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,     0,   412,   413,
     414,     0,     0,     0,     0,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,     0,     0,
       0,     0,     0,     0,   410,   411,     0,     0,     0,     0,
       0,     0,   682,     0,     0,     0,     0,   410,   411,     0,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,     0,     0,     0,   412,   413,   414,   410,
     411,     0,     0,     0,     0,     0,     0,     0,     0,   412,
     413,   414,   410,   411,     0,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,     0,     0,
       0,   412,   413,   414,   410,   411,     0,     0,   683,     0,
       0,     0,     0,     0,   412,   413,   414,     0,     0,     0,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,     0,     0,     0,   412,   413,   414,   410,
     411,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   684,     0,     0,     0,
       0,   412,   413,   414,   410,   411,     0,     0,     0,   685,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,     0,     0,     0,     0,     0,     0,     0,
       0,   686,     0,     0,     0,     0,   412,   413,   414,   410,
     411,     0,     0,     0,   687,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,     0,     0,
     410,   411,     0,     0,     0,     0,   688,     0,     0,     0,
       0,   412,   413,   414,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,     0,     0,
       0,     0,   412,   413,   414,     0,     0,     0,     0,   410,
     411,   689,     0,     0,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,   412,   413,   414,   410,   411,   690,     0,     0,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   410,   411,     0,   412,   413,   414,     0,
       0,   691,     0,     0,     0,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,     0,     0,
       0,     0,   692,   410,   411,   412,   413,   414,     0,     0,
       0,     0,     0,     0,     0,     0,   410,   411,     0,     0,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,     0,     0,   412,   413,   414,   410,   411,
       0,   693,     0,     0,     0,     0,     0,     0,   412,   413,
     414,     0,     0,     0,     0,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,     0,     0,
     412,   413,   414,     0,   410,   411,   694,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,     0,     0,   697,   412,   413,   414,   410,
     411,     0,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   704,     0,     0,     0,     0,
       0,   412,   413,   414,   410,   411,     0,     0,   709,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,     0,     0,     0,     0,   410,   411,     0,     0,
     710,     0,     0,     0,     0,     0,   412,   413,   414,   410,
     411,     0,     0,     0,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,   412,   413,
     414,   410,   411,     0,     0,     0,   713,     0,     0,     0,
       0,   412,   413,   414,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,     0,     0,
       0,     0,     0,   412,   413,   414,     0,     0,   410,   411,
       0,   745,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,     0,     0,
     412,   413,   414,   410,   411,     0,   761,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,     0,     0,     0,     0,     0,   763,     0,
       0,     0,     0,   410,   411,   412,   413,   414,     0,     0,
       0,   764,     0,     0,     0,     0,     0,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,   410,   411,   767,     0,   412,   413,   414,     0,     0,
       0,     0,     0,     0,   410,   411,     0,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,   412,   413,   414,   410,   411,     0,     0,
     768,     0,     0,     0,     0,     0,   412,   413,   414,     0,
       0,     0,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,     0,     0,     0,   412,   413,
     414,     0,     0,     0,     0,   770,   410,   411,     0,     0,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   782,   410,   411,   412,   413,
     414,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   840,     0,     0,     0,     0,   412,   413,
     414,   410,   411,     0,     0,     0,   842,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,     0,     0,     0,     0,     0,   845,   410,
     411,     0,     0,   412,   413,   414,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   412,   413,   414,     0,     0,     0,     0,   868,   410,
     411,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   410,   411,   869,     0,
       0,   412,   413,   414,     0,     0,     0,     0,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,     0,     0,     0,     0,   410,   411,     0,   412,   413,
     414,     0,     0,   870,     0,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   412,   413,   414,
       0,   943,   410,   411,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,     0,   412,   413,   414,   410,   411,     0,
       0,   944,     0,     0,     0,     0,     0,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,     0,   410,   411,     0,     0,   945,   412,
     413,   414,     0,     0,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,     0,     0,
       0,     0,     0,   410,   411,   484,   412,   413,   414,     0,
       0,     0,     0,     0,     0,     0,   410,   411,     0,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,     0,     0,     0,   412,   413,   414,     0,     0,
       0,     0,   560,     0,     0,     0,   410,   411,   412,   413,
     414,     0,     0,     0,     0,     0,     0,     0,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,     0,     0,   410,   411,     0,     0,   564,   412,   413,
     414,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,     0,     0,     0,
       0,     0,     0,     0,   628,   412,   413,   414,   410,   411,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   632,     0,     0,     0,     0,     0,     0,
     412,   413,   414,     0,     0,     0,   634,   410,   411,     0,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   410,   411,     0,     0,   635,     0,     0,   412,
     413,   414,     0,     0,     0,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,     0,   410,
     411,     0,     0,   638,   412,   413,   414,     0,     0,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   412,   413,   414,     0,     0,     0,     0,   705,   410,
     411,     0,     0,     0,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,   412,   413,   414,   410,   411,     0,   706,     0,     0,
       0,     0,     0,     0,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,   410,   411,
       0,     0,   707,     0,     0,     0,   412,   413,   414,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,     0,     0,     0,     0,     0,     0,     0,   740,
     412,   413,   414,   410,   411,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   410,   411,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,     0,     0,     0,     0,   412,   413,   414,     0,   746,
       0,     0,     0,   410,   411,     0,     0,     0,   412,   413,
     414,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,     0,   410,   411,
       0,     0,     0,     0,   747,   412,   413,   414,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,     0,     0,     0,     0,     0,     0,     0,   749,     0,
     412,   413,   414,     0,     0,     0,     0,   410,   411,     0,
       0,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,     0,     0,     0,
       0,     0,     0,   751,     0,     0,     0,     0,     0,   412,
     413,   414,   410,   411,     0,     0,   754,     0,     0,     0,
       0,     0,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,     0,     0,   410,   411,     0,
       0,     0,     0,   755,   412,   413,   414,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,     0,     0,     0,     0,     0,   757,   412,
     413,   414,   410,   411,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,     0,   412,   413,   414,   758,     0,     0,
       0,   410,   411,     0,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   410,   411,     0,     0,
       0,     0,   759,   412,   413,   414,     0,     0,     0,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,     0,   410,   411,     0,     0,   760,   412,   413,
     414,     0,     0,     0,     0,     0,   410,   411,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,     0,     0,     0,     0,   412,   413,   414,     0,     0,
       0,     0,   765,   410,   411,     0,     0,     0,   412,   413,
     414,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   412,   413,   414,   410,   411,
       0,   766,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   786,   410,   411,     0,
     412,   413,   414,     0,     0,     0,     0,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,   814,     0,     0,     0,     0,     0,   412,
     413,   414,   410,   411,     0,     0,   816,     0,     0,     0,
       0,     0,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,     0,     0,     0,     0,     0,
       0,   410,   411,   817,   412,   413,   414,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   412,   413,   414,   410,   411,   820,     0,
       0,     0,     0,     0,     0,     0,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,     0,
       0,     0,     0,     0,     0,     0,     0,   841,   412,   413,
     414,   410,   411,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   410,   411,     0,     0,
       0,     0,   844,   412,   413,   414,     0,     0,     0,   410,
     411,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,     0,   412,   413,
     414,   873,     0,     0,     0,   410,   411,     0,     0,     0,
       0,   412,   413,   414,     0,     0,     0,     0,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,     0,   410,   411,     0,     0,   875,   412,   413,   414,
       0,     0,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   412,   413,   414,     0,     0,     0,
       0,   878,   410,   411,     0,     0,     0,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,     0,     0,     0,   879,     0,     0,     0,
       0,     0,     0,     0,   412,   413,   414,   410,   411,   881,
       0,     0,     0,     0,     0,     0,     0,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,   410,   411,     0,     0,   882,     0,     0,     0,   412,
     413,   414,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,     0,     0,     0,     0,     0,
       0,     0,   883,   412,   413,   414,   410,   411,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,     0,     0,     0,     0,   412,   413,
     414,     0,   886,     0,     0,     0,   410,   411,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   410,   411,     0,     0,     0,     0,   887,   412,   413,
     414,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,   410,   411,     0,
       0,   896,     0,   412,   413,   414,     0,     0,     0,     0,
     410,   411,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,     0,     0,   412,
     413,   414,     0,     0,     0,     0,   927,   410,   411,     0,
       0,     0,   412,   413,   414,     0,     0,     0,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,     0,     0,     0,     0,     0,     0,     0,     0,   412,
     413,   414,   410,   411,     0,     0,   929,     0,     0,     0,
       0,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,     0,     0,     0,
       0,   930,   410,   411,   412,   413,   414,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,     0,     0,     0,     0,   936,     0,     0,
       0,     0,     0,     0,   412,   413,   414,   410,   411,     0,
     937,     0,     0,     0,     0,     0,     0,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
       0,     0,     0,     0,     0,     0,     0,   974,     0,   412,
     413,   414,   410,   411,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   410,   411,     0,     0,
       0,     0,   977,     0,   412,   413,   414,     0,     0,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,     0,     0,     0,     0,     0,     0,   412,   413,
     414,     0,   991,     0,     0,     0,   410,   411,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   410,   411,     0,     0,   992,   412,   413,
     414,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   412,   413,   414,   410,   411,
       0,     0,   994,     0,     0,     0,     0,     0,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,     0,     0,     0,     0,     0,   995,   410,   411,     0,
     412,   413,   414,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   412,
     413,   414,   410,   411,     0,     0,  1005,     0,     0,     0,
       0,     0,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,     0,     0,     0,     0,     0,
       0,     0,     0,  1008,   412,   413,   414,   410,   411,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   410,   411,     0,     0,     0,     0,  1011,   412,
     413,   414,     0,     0,     0,   410,   411,     0,     0,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,     0,     0,   412,   413,   414,  1012,     0,     0,
       0,   410,   411,     0,     0,     0,     0,   412,   413,   414,
       0,     0,     0,     0,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,   410,   411,
       0,     0,  1014,   412,   413,   414,     0,     0,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     412,   413,   414,     0,     0,     0,     0,  1015,   410,   411,
       0,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,     0,     0,     0,
       0,     0,  1021,     0,     0,     0,     0,     0,   717,     0,
     412,   413,   414,   410,   411,  1022,     0,     0,     0,     0,
       0,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,     0,   410,   411,     0,
       0,  1025,     0,   719,     0,   412,   413,   414,     0,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,     0,     0,     0,     0,     0,     0,  1026,   412,
     413,   414,   410,   411,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   796,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,     0,     0,
       0,     0,     0,     0,   412,   413,   414,     0,  1029,   798,
       0,     0,   410,   411,   397,   424,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   410,   411,
       0,     0,     0,  1030,   412,   413,   414,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     412,   413,   414,   410,   411,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   410,   411,   412,   413,   414,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   412,   413,   414
};

static const yytype_int16 yycheck[] =
{
      18,    19,    20,    21,    99,   100,     7,     8,     7,     8,
       7,     8,    33,    34,    19,   253,    70,   101,   102,   103,
     104,    36,     0,    19,   234,    79,    44,    45,   243,    47,
      48,    49,    50,    51,    52,   243,    54,    55,    56,    57,
       7,     8,     9,    30,    62,     7,     8,     9,    10,   243,
      68,    69,    70,   243,    72,    24,   283,     7,     8,     9,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    91,    92,    93,    24,    30,    96,    84,
      33,    34,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    82,   243,    75,    17,    20,
     118,   119,    24,    22,    24,   123,   124,    26,    61,    28,
      97,    98,    99,   100,    24,    25,    26,    27,    87,   243,
      30,    31,    32,     4,     5,     7,     8,     9,    10,    82,
     243,    98,     7,     8,     9,    10,   243,     4,     5,    87,
       7,     8,   160,    10,    97,    98,    99,   100,    69,   112,
     113,    69,    33,    71,   243,   173,    24,    25,    26,    27,
       7,     8,    30,    31,    32,    87,   243,    87,     7,     8,
       9,   112,   113,     7,     8,     9,    51,    69,     1,    71,
     243,   144,   145,   146,     4,     7,     8,     9,    23,     4,
       5,   209,     4,    28,    29,   213,   243,    32,    33,    34,
      35,    28,    29,   144,   145,   146,    24,    25,    26,    27,
     448,    93,    30,    31,    32,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   243,    24,
      25,    26,    27,   453,   454,    30,    31,    32,     7,     8,
       9,    10,   243,     8,   243,   243,   243,   474,   266,   476,
       7,    10,   270,     0,   272,   273,    10,    19,   276,    20,
     344,   345,   346,   281,   282,   242,    24,    25,    26,    27,
      19,    24,    30,    31,    32,    19,   294,   112,   113,   242,
     242,   244,     7,     8,     9,    40,    41,   242,   242,   307,
     308,   309,   310,   311,   312,   313,   314,   318,   835,   836,
     837,   242,   242,   244,   112,   113,   243,    62,    24,    25,
      26,    27,   243,   243,    30,    31,    32,   236,   243,   243,
      24,    25,    26,    27,   342,   343,    30,    31,    32,   243,
     283,   243,   242,    10,   244,   243,   144,   145,   146,   326,
     243,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   442,   243,
     378,     7,     8,     9,    10,   318,   243,   385,   386,   243,
     388,   389,   243,   326,   392,   393,   244,   243,    24,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   316,   608,     6,
       7,     8,     9,    10,   422,   423,   424,   243,   426,    78,
     428,   234,   243,   243,   509,   243,    87,   172,     7,     8,
       9,    10,   243,    19,   242,   242,   444,   445,   446,   447,
     243,   449,   243,   243,   452,   242,   244,   455,   456,   243,
     458,   459,   460,   243,   462,   243,   243,   465,   466,   244,
     468,   469,   470,   471,   243,   243,   443,   243,   243,   477,
     243,   243,   480,   481,   482,   483,   484,    24,    25,    26,
      27,   243,   243,    30,    31,    32,     7,     8,     9,    10,
     498,    24,   500,   306,    19,   503,   244,   243,    24,     7,
     443,    24,    25,    26,    27,   243,   242,    30,    31,    32,
     243,    24,    25,    26,    27,   243,   243,    30,    31,    32,
      24,    25,    26,    27,   243,    24,    30,    31,    32,   243,
     507,   474,   509,   476,   243,   243,   243,   242,   244,    38,
      39,    40,    41,    42,    43,    44,   242,   555,   243,   294,
     244,   242,   560,   243,   243,    24,   564,   242,   244,   242,
     244,     8,   244,   244,   507,   244,   509,     0,     1,     9,
     315,   244,   244,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,   244,   496,   243,   242,
     790,    19,   600,     7,   602,    87,     8,    30,     9,    84,
      33,    34,    96,     7,    67,   244,   244,   244,   353,   354,
     355,    24,    25,    26,    27,   243,    19,    30,    31,    32,
     628,    19,   435,    19,   632,    19,   634,   635,    61,   243,
     638,   376,   377,   243,   379,   380,   381,   382,   383,    10,
     714,    32,    75,   620,    85,   243,     7,     6,   243,    82,
       9,    10,   243,     8,    69,     9,    72,    24,    95,    18,
     242,    19,   112,   113,    97,    98,    99,   100,   243,   243,
     415,   416,   417,   418,   419,   420,   421,   620,   244,    24,
      25,    26,    27,   244,   117,    30,    31,    32,   244,   244,
     244,   699,   700,   701,   144,   145,   146,   244,   706,   707,
     244,   610,   243,   243,    19,     8,   242,    66,     9,   717,
      67,   719,    24,    25,    26,    27,     7,    50,    30,    31,
      32,   244,   242,    49,    49,    49,   734,   242,   736,    19,
     738,   244,   242,   242,    19,    19,    77,   244,   746,   747,
     244,   749,   244,   751,   244,   243,   754,   755,   244,   757,
     758,   759,   760,    71,    77,    77,    23,   765,   766,   434,
      77,    28,    29,   438,    77,   244,   441,    34,    35,   244,
     244,    70,    77,   132,   443,   134,   135,   136,   786,   138,
      77,   140,    77,    77,   143,    77,    75,   743,   796,    77,
     798,    77,   242,    71,   244,    77,    77,    24,    25,    26,
      27,   234,   235,    30,    31,    32,   814,    77,   816,   817,
     294,    77,   820,    77,    24,    25,    26,    27,   826,   827,
      30,    31,    32,    77,    77,    77,    77,    77,    77,   242,
     838,    77,    77,   841,    77,    77,   844,    77,   715,   507,
      -1,    -1,   850,    -1,    -1,   112,   113,   855,    -1,    -1,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,   873,   225,   875,    -1,    -1,
     878,   879,    -1,   306,    -1,    -1,    -1,    -1,   886,   887,
      -1,    -1,    -1,    -1,    -1,   318,    -1,    -1,   896,    -1,
      -1,    -1,    -1,   326,    -1,    -1,    -1,   242,    -1,    -1,
      -1,    -1,    -1,    -1,   912,    -1,    -1,    -1,    -1,   917,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   730,    -1,   927,
      -1,   929,   930,    -1,    -1,    -1,    -1,    -1,   936,   937,
     242,   606,    -1,    -1,    -1,    -1,    -1,     0,     1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   698,    -1,    -1,    -1,    -1,    -1,    -1,
     705,    -1,    -1,    -1,    -1,    -1,   974,    30,    -1,   977,
      33,    34,    -1,    -1,   787,    -1,    -1,    -1,   791,   792,
     793,   794,   795,   991,   992,    -1,   994,   995,   663,    -1,
     665,   666,   667,    -1,    -1,    -1,    -1,  1005,    61,    -1,
    1008,   434,   435,  1011,  1012,   438,  1014,  1015,   441,    -1,
     443,    -1,    75,  1021,  1022,   242,    -1,  1025,  1026,    82,
      -1,  1029,  1030,    -1,   769,    -1,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,    97,    98,    99,   100,    -1,    -1,
      -1,   474,    -1,   476,    -1,    -1,    -1,    -1,   861,   862,
     863,   864,   865,    -1,   117,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   507,    -1,   509,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   900,    -1,    -1,
      -1,    -1,   905,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,   801,   872,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   881,   882,   883,    -1,
      -1,    -1,    -1,    -1,    -1,   958,    -1,    -1,    -1,    -1,
     963,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,
     244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,   235,   606,   849,   608,    -1,   852,    -1,   854,
      -1,    -1,   857,    -1,   859,   112,   113,   620,    -1,    -1,
      -1,    -1,   867,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   144,   145,   146,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     663,   144,   665,   666,   667,    -1,   911,    -1,    -1,   914,
      -1,   916,    -1,   306,   919,    -1,   921,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   318,    -1,    17,    -1,    -1,
      -1,    -1,    22,   326,    -1,    -1,    26,    -1,    28,    29,
      30,    -1,    -1,    -1,   949,    -1,    -1,    -1,   953,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,   730,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,   983,    -1,
      -1,    -1,   987,    -1,    -1,   242,    -1,   244,    -1,    -1,
      -1,    -1,    82,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   787,    -1,    -1,   790,   791,   792,
     793,   794,   795,    -1,    -1,    -1,    -1,    -1,   801,    -1,
      -1,   434,   435,    -1,    -1,   438,    -1,    -1,   441,    -1,
     443,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   474,   172,   476,    -1,    -1,   849,    -1,    -1,   852,
      -1,   854,    -1,   242,   857,   244,   859,    -1,   861,   862,
     863,   864,   865,    -1,   867,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   507,    -1,   509,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   900,    -1,    -1,
      -1,    -1,   905,   112,   113,    -1,   236,    -1,   911,    -1,
      -1,   914,    -1,   916,    -1,    -1,   919,    -1,   921,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   949,    -1,    -1,    -1,
     953,    -1,    -1,   283,    -1,   958,    -1,    -1,    -1,    -1,
     963,    -1,    -1,    -1,   294,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,   606,    -1,   608,    -1,    -1,    -1,    -1,
     983,    -1,    -1,    -1,   987,   315,   316,   620,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,   144,   145,
     146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,   344,   345,   346,    -1,    -1,    -1,
      -1,    -1,    -1,   353,   354,   355,    -1,    -1,    -1,    -1,
     663,    -1,   665,   666,   667,   244,    -1,    -1,    -1,    -1,
     144,   145,   146,    -1,    -1,    -1,   376,   377,    -1,   379,
     380,   381,   382,   383,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   415,   416,   417,   418,   419,
     420,   421,    -1,    -1,    -1,    -1,    -1,   730,   244,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   442,   443,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     244,    -1,    -1,    -1,   474,    -1,   476,    -1,    -1,    -1,
     112,   113,    -1,    -1,   787,    -1,    -1,   790,   791,   792,
     793,   794,   795,    -1,    -1,    -1,   496,    -1,   801,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   507,    -1,   509,
      -1,    -1,   144,   145,   146,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   849,    -1,    -1,   852,
      -1,   854,    -1,    -1,   857,    -1,   859,    -1,   861,   862,
     863,   864,   865,    -1,   867,   144,   145,   146,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   900,    -1,    -1,
      -1,    -1,   905,    -1,    -1,   112,   113,    -1,   911,    -1,
     610,   914,   244,   916,    -1,    -1,   919,    -1,   921,    -1,
     620,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,    -1,     7,     8,    -1,    10,    -1,   144,   145,   146,
      -1,    16,    17,    -1,    -1,    -1,   949,    -1,    -1,    -1,
     953,    -1,    -1,    -1,    -1,   958,    -1,    -1,    33,    -1,
     963,   112,   113,    -1,    -1,   244,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     983,    -1,    57,    -1,   987,    60,    61,    62,    63,    64,
      -1,    -1,    -1,   144,   145,   146,    -1,    -1,   698,    -1,
      -1,    -1,    -1,    -1,    -1,   705,    -1,    19,    20,    -1,
      -1,    23,    -1,    -1,   714,    -1,    28,    29,    93,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,    -1,    -1,   109,   110,   111,   244,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,    69,   133,    -1,
      -1,    -1,   137,    -1,    -1,    77,    -1,   142,    -1,   769,
      -1,    -1,   147,    -1,    -1,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,    -1,   160,    -1,    -1,    -1,    -1,
      -1,    -1,   167,   244,    -1,   170,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
     215,   216,     4,     5,    -1,     7,     8,    -1,    10,   224,
      -1,    -1,    -1,    -1,    16,    17,   231,   232,    -1,    -1,
      -1,    -1,    -1,   238,   239,   240,    -1,    -1,   243,   244,
      -1,    33,   872,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   881,   882,   883,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,    -1,    -1,   109,   110,   111,
      -1,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
      -1,   133,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,   147,    -1,    -1,   150,   151,
     152,   153,   154,   155,   156,   157,   112,   113,   160,    -1,
      -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,    -1,   215,   216,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,   231,
     232,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,    -1,
      -1,   243,   244,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      61,    62,    63,    64,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,    -1,    -1,   109,   110,
     111,    -1,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
      -1,   142,   143,    -1,    -1,    -1,   147,    -1,    -1,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,    -1,   160,
      -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,    -1,   215,   216,   217,    -1,    -1,   220,
      -1,    -1,    -1,   224,   225,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,
      -1,   242,   243,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      61,    62,    63,    64,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,    -1,    -1,   109,   110,
     111,    -1,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
      -1,   142,   143,    -1,    -1,    -1,   147,    -1,    -1,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,    -1,   160,
      -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,    -1,   215,   216,   217,    -1,    -1,    -1,
      -1,    -1,    -1,   224,   225,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,
       4,     5,   243,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,   112,   113,   109,   110,   111,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    -1,   133,
      -1,    -1,    -1,   137,    -1,   144,   145,   146,   142,    -1,
      -1,    -1,    -1,   147,    -1,    -1,   150,   151,   152,   153,
     154,   155,   156,   157,    -1,    -1,   160,    -1,    -1,    -1,
      -1,   165,    -1,   167,    -1,    -1,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
      -1,   215,   216,     4,     5,    -1,     7,     8,    -1,    10,
     224,    -1,    -1,    -1,    -1,    16,    17,   231,   232,    -1,
      -1,    -1,    -1,   242,   238,   239,   240,    -1,    -1,   243,
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
      -1,   166,   167,    -1,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
     215,   216,     4,     5,    -1,     7,     8,    -1,    10,   224,
      -1,    -1,    -1,    -1,    16,    17,   231,   232,    -1,    -1,
      -1,    -1,    -1,   238,   239,   240,    -1,    -1,   243,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,    -1,    -1,   109,   110,   111,
      -1,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
      -1,   133,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,   147,    -1,    -1,   150,   151,
     152,   153,   154,   155,   156,   157,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,    -1,   215,   216,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,   231,
     232,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,     3,
      -1,   243,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    89,    90,    91,    -1,    93,
      -1,    -1,    -1,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,   148,   149,    -1,   144,   145,   146,
      -1,    -1,    -1,    -1,   158,    -1,   160,   161,    -1,   163,
     164,    -1,    -1,    -1,   168,   169,    -1,   171,    -1,   173,
      -1,    -1,   176,   177,   178,    -1,   180,   181,   182,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     214,    -1,   216,   217,   218,   219,    -1,    -1,    -1,    -1,
     224,   225,    -1,    -1,   228,   229,   230,    -1,    -1,   233,
     234,   235,   236,   237,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   244,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   214,    -1,   216,   217,   218,   219,    -1,    -1,    -1,
      -1,   224,   225,    -1,    -1,   228,   229,   230,    -1,    -1,
     233,   234,   235,   236,   237,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    -1,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,    91,
      -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,    -1,   144,   145,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,   160,   161,
      -1,   163,   164,    -1,    -1,    -1,   168,   169,    -1,   171,
      -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,   181,
     182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,    -1,
      -1,    -1,   224,   225,    -1,    -1,   228,   229,   230,    -1,
      -1,   233,   234,   235,   236,   237,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,    80,
      81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      91,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,   144,   145,   146,    -1,   148,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,   160,
     161,    -1,   163,   164,    -1,    -1,    -1,   168,   169,    -1,
     171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,
     181,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,
      -1,    -1,    -1,   224,   225,    -1,    -1,   228,   229,   230,
      -1,    -1,   233,   234,   235,   236,   237,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,
      90,    91,    -1,    93,    -1,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    -1,   144,   145,   146,    -1,   148,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
     160,   161,    -1,   163,   164,    -1,    -1,    -1,   168,   169,
      -1,   171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    -1,    -1,   144,   145,   146,    -1,   148,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,   160,   161,    -1,   163,   164,    -1,    -1,    -1,   168,
     169,    -1,   171,    -1,   173,    -1,    -1,   176,   177,   178,
     242,   180,   181,   182,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   214,    -1,   216,   217,   218,
     219,    -1,    -1,    -1,    -1,   224,   225,    -1,    -1,   228,
     229,   230,    -1,    -1,   233,   234,   235,   236,   237,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,   112,   113,    51,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    -1,
      -1,    -1,    80,   144,   145,   146,    -1,    -1,    86,    -1,
      -1,    89,    90,    91,    -1,    93,    -1,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,    -1,   144,   145,   146,    -1,
     148,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,   160,   161,    -1,   163,   164,    -1,    -1,    -1,
     168,   169,    -1,   171,    -1,   173,    -1,    -1,   176,   177,
     178,   242,   180,   181,   182,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,   216,   217,
     218,   219,    -1,    -1,    -1,    -1,   224,   225,    -1,    -1,
     228,   229,   230,    -1,    -1,   233,   234,   235,   236,   237,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,   112,   113,    51,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      -1,    -1,    -1,    80,   144,   145,   146,    -1,    -1,    86,
      -1,    -1,    89,    90,    91,    -1,    93,    -1,    -1,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,    -1,   144,   145,   146,
      -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,   160,   161,    -1,   163,   164,    -1,    -1,
      -1,   168,   169,    -1,   171,    -1,   173,    -1,    -1,   176,
     177,   178,   242,   180,   181,   182,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,   216,
     217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,    -1,
      -1,   228,   229,   230,    -1,    -1,   233,   234,   235,   236,
     237,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,   112,   113,    51,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    -1,    -1,    -1,    80,   144,   145,   146,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    -1,    93,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,   144,   145,
     146,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,   160,   161,    -1,   163,   164,    -1,
      -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,    -1,
     176,   177,   178,   242,   180,   181,   182,    -1,    -1,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
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
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     178,    -1,   180,   181,   182,    -1,    -1,    -1,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   228,   229,   230,    -1,    51,   233,   234,   235,   236,
     237,    57,    58,    59,    -1,   144,   145,   146,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    -1,    93,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,   242,   160,   161,    -1,   163,   164,    -1,
      -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,    -1,
     176,   177,   178,    -1,   180,   181,   182,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,
     216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,
      -1,    -1,   228,   229,   230,    -1,    -1,   233,   234,   235,
     236,   237,   144,   145,   146,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,   144,   145,
     146,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,   244,    -1,    -1,    -1,    -1,   112,   113,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,   144,   145,   146,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,   112,   113,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,   144,   145,   146,   112,   113,    -1,    -1,   244,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,   144,   145,   146,   112,
     113,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,
      -1,   144,   145,   146,   112,   113,    -1,    -1,    -1,   244,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   244,    -1,    -1,    -1,    -1,   144,   145,   146,   112,
     113,    -1,    -1,    -1,   244,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,
      -1,   144,   145,   146,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,   112,
     113,   244,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   144,   145,   146,   112,   113,   244,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,   144,   145,   146,    -1,
      -1,   244,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,   244,   112,   113,   144,   145,   146,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   144,   145,   146,   112,   113,
      -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     144,   145,   146,    -1,   112,   113,   244,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   244,   144,   145,   146,   112,
     113,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,   112,   113,    -1,    -1,   244,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
     244,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   112,
     113,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   144,   145,
     146,   112,   113,    -1,    -1,    -1,   244,    -1,    -1,    -1,
      -1,   144,   145,   146,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,    -1,   112,   113,
      -1,   244,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     144,   145,   146,   112,   113,    -1,   244,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,
      -1,    -1,    -1,   112,   113,   144,   145,   146,    -1,    -1,
      -1,   244,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   112,   113,   244,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,    -1,
     244,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,   144,   145,
     146,    -1,    -1,    -1,    -1,   244,   112,   113,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   244,   112,   113,   144,   145,
     146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   244,    -1,    -1,    -1,    -1,   144,   145,
     146,   112,   113,    -1,    -1,    -1,   244,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,   112,
     113,    -1,    -1,   144,   145,   146,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,    -1,    -1,    -1,    -1,   244,   112,
     113,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,   244,    -1,
      -1,   144,   145,   146,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,   112,   113,    -1,   144,   145,
     146,    -1,    -1,   244,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
      -1,   244,   112,   113,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,
      -1,   244,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,   244,   144,
     145,   146,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,   242,   144,   145,   146,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,   242,    -1,    -1,    -1,   112,   113,   144,   145,
     146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   112,   113,    -1,    -1,   242,   144,   145,
     146,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   242,   144,   145,   146,   112,   113,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,    -1,    -1,    -1,   242,   112,   113,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   113,    -1,    -1,   242,    -1,    -1,   144,
     145,   146,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,   112,
     113,    -1,    -1,   242,   144,   145,   146,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,    -1,    -1,    -1,    -1,   242,   112,
     113,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   144,   145,   146,   112,   113,    -1,   242,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   112,   113,
      -1,    -1,   242,    -1,    -1,    -1,   144,   145,   146,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,
     144,   145,   146,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,   242,
      -1,    -1,    -1,   112,   113,    -1,    -1,    -1,   144,   145,
     146,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,   242,   144,   145,   146,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,
     144,   145,   146,    -1,    -1,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,   112,   113,    -1,    -1,   242,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,   242,   144,   145,   146,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   144,
     145,   146,   112,   113,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,   144,   145,   146,   242,    -1,    -1,
      -1,   112,   113,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,   242,   144,   145,   146,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   112,   113,    -1,    -1,   242,   144,   145,
     146,    -1,    -1,    -1,    -1,    -1,   112,   113,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,   242,   112,   113,    -1,    -1,    -1,   144,   145,
     146,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146,   112,   113,
      -1,   242,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,   112,   113,    -1,
     144,   145,   146,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,   112,   113,    -1,    -1,   242,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,   242,   144,   145,   146,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   144,   145,   146,   112,   113,   242,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   144,   145,
     146,   112,   113,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,   242,   144,   145,   146,    -1,    -1,    -1,   112,
     113,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,   144,   145,
     146,   242,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,   144,   145,   146,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   112,   113,    -1,    -1,   242,   144,   145,   146,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,
      -1,   242,   112,   113,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,   112,   113,   242,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   112,   113,    -1,    -1,   242,    -1,    -1,    -1,   144,
     145,   146,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,   144,   145,   146,   112,   113,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,   144,   145,
     146,    -1,   242,    -1,    -1,    -1,   112,   113,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,   242,   144,   145,
     146,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,   112,   113,    -1,
      -1,   242,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,
     112,   113,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,   144,
     145,   146,    -1,    -1,    -1,    -1,   242,   112,   113,    -1,
      -1,    -1,   144,   145,   146,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,   112,   113,    -1,    -1,   242,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,   242,   112,   113,   144,   145,   146,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,
     242,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,   144,
     145,   146,   112,   113,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,   242,    -1,   144,   145,   146,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,    -1,   242,    -1,    -1,    -1,   112,   113,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,   242,   144,   145,
     146,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146,   112,   113,
      -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,   242,   112,   113,    -1,
     144,   145,   146,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   144,
     145,   146,   112,   113,    -1,    -1,   242,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,   144,   145,   146,   112,   113,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   113,    -1,    -1,    -1,    -1,   242,   144,
     145,   146,    -1,    -1,    -1,   112,   113,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,   144,   145,   146,   242,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,   144,   145,   146,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   112,   113,
      -1,    -1,   242,   144,   145,   146,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,    -1,    -1,    -1,    -1,   242,   112,   113,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,    83,    -1,
     144,   145,   146,   112,   113,   242,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,   112,   113,    -1,
      -1,   242,    -1,    83,    -1,   144,   145,   146,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   242,   144,
     145,   146,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,    -1,   242,    83,
      -1,    -1,   112,   113,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
      -1,    -1,    -1,   242,   144,   145,   146,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,   144,   145,   146,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146
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
     256,   257,   264,   265,   272,   273,   274,   285,    19,    20,
     250,   243,   243,   243,     7,     8,   243,   243,   243,   243,
     243,   243,   243,   243,   243,    19,     7,     8,     9,     4,
       5,     6,     9,    10,    16,    17,    18,    33,    57,    60,
      61,    62,    63,    64,    66,    93,   104,   105,   106,   109,
     110,   111,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   140,   142,   143,
     147,   150,   151,   152,   153,   154,   155,   156,   157,   160,
     167,   170,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   215,   216,   217,   224,   225,   231,   232,
     238,   239,   240,   243,   252,   253,   254,   255,   257,   268,
     269,   270,    10,   253,   253,   253,   253,   270,     7,     8,
       9,    98,     4,     4,   270,    19,    84,   270,   270,   271,
     256,   257,   258,   259,     7,     8,     9,    10,   262,   263,
     256,   273,     9,    93,   273,     8,    10,   269,   269,     7,
       8,     9,   260,   261,   253,   253,   165,   253,   253,   253,
     166,   253,   166,   167,   253,   253,   166,   253,   253,   253,
     253,   243,   243,     6,   258,   277,   278,    21,    36,    37,
     220,   242,   253,   269,   275,   276,     7,    10,    10,   253,
     253,   253,   253,     0,   247,    19,    20,    24,    38,    39,
      40,    41,    42,    43,    44,    24,    24,   258,   242,    19,
      19,   253,   253,   244,   253,   253,    51,   258,   279,   280,
     258,   281,   282,   282,   282,   271,   271,   271,   271,   242,
     242,   242,   243,   243,   243,   243,   243,     4,     5,   254,
     255,   253,   253,   243,   243,   243,   253,   253,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,    36,   243,   243,   253,   243,   243,
     269,   253,   243,   243,    10,   253,   253,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
     112,   113,   144,   145,   146,    24,    25,    26,    27,    30,
      31,    32,   243,   242,    24,    78,    24,    87,    24,    87,
      87,     7,     8,     9,    19,    82,   250,   251,   248,   249,
     270,    19,   242,   242,   243,   243,   243,   243,   242,   243,
     263,    19,   243,   242,   242,   242,   242,   253,   242,   242,
     242,   253,   242,   253,   253,   242,   242,   253,   242,   242,
     242,   242,   253,   253,   242,   278,   242,   243,   276,   242,
     243,   243,   242,   242,   242,   250,   253,   253,   253,   253,
     253,   253,   253,   253,   269,   270,    24,   273,   242,   244,
     242,   244,    24,   242,   244,   244,   258,   242,   244,   242,
     244,   244,   244,   244,   244,   244,   244,     7,     8,     9,
     253,   271,   271,   271,   269,   269,   269,     7,     8,     9,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   269,   269,   253,
     269,   269,   269,   269,   269,   243,   253,   253,   253,   253,
     242,   253,   253,   242,   242,   244,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   269,   269,   269,   269,   269,   269,
     269,   253,   253,   253,    19,   253,     7,   253,     8,     9,
      24,    87,    24,    87,    87,   249,    19,   250,    69,   249,
      84,   249,   271,   259,   253,   253,   253,   253,   263,   244,
      96,   266,   267,   253,   261,   261,   253,   253,   242,   253,
     253,   253,   242,   253,   242,   242,   253,   253,   242,   253,
     253,   253,   253,   244,   244,   278,   278,   253,     7,   253,
     253,   253,   253,   253,   270,   253,   253,    67,   253,     7,
       8,     9,   280,    19,   282,    19,    19,    19,   244,   244,
     244,   244,   244,   244,   244,   243,   243,   243,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   242,   242,
     242,   242,   244,   253,   244,   242,   242,   242,   253,   244,
     244,    10,   253,   244,    85,   283,   284,    83,   243,    83,
     243,   243,   253,     7,   253,     8,     9,    69,    71,   249,
      69,   251,   270,    72,   242,   244,   242,   244,   242,   244,
     242,    24,   258,    19,    95,   244,   242,   242,   253,   242,
     253,   242,   253,   253,   242,   242,   253,   242,   242,   242,
     242,   244,   242,   244,   244,   242,   242,   244,   244,   243,
     244,   249,   249,   249,   249,   244,   244,   244,   269,   253,
     253,   253,   244,   269,   253,   253,   242,   271,   284,    70,
      79,   253,   244,   253,   244,   244,    83,   243,    83,   243,
     243,    19,    69,    71,   250,   253,   253,   253,     8,    67,
     267,   253,   253,   253,   242,   253,   242,   242,   253,   253,
     242,   253,   253,   253,   253,     7,   242,   242,   253,   253,
     269,    50,    49,    49,    49,   242,   242,   242,   242,   244,
     244,   242,   244,   244,   242,   244,   253,   250,   251,    19,
      81,   250,    19,   250,    19,    81,   250,    19,   250,    19,
     250,   253,   244,   253,   244,   244,   249,    19,   244,   244,
     244,   244,   243,   242,   253,   242,   253,   253,   242,   242,
     253,   242,   242,   242,   253,   253,   242,   242,   244,    33,
     252,   252,   252,   253,   253,   253,   242,    19,    19,   249,
     253,    77,   249,    77,   249,   253,    77,   249,    77,   249,
      77,    19,    81,   250,    19,   250,    19,    81,   250,    19,
     250,    19,   250,    71,   249,   269,   253,   242,   253,   242,
     242,   253,   253,   269,   269,   269,   242,   242,   253,   253,
     244,   244,   244,   244,   244,   244,   253,    70,    77,    19,
     250,    77,    77,    19,   250,    77,    77,   249,   253,    77,
     249,    77,   249,   253,    77,   249,    77,   249,    77,    71,
     244,   253,   253,   253,   242,   253,   253,   242,   249,    77,
     249,    77,    77,    19,   250,    77,    77,    19,   250,    77,
      77,   242,   242,   253,   242,   242,   253,    77,    77,   249,
      77,   249,    77,   253,   253,   242,   253,   253,   242,    77,
      77,   242,   242,   253,   242,   242,   253,   253,   253,   253,
     253,   242,   242,   253,   253,   242,   242,   253,   253,   242,
     242,   253,   253
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   245,   246,   247,   247,   248,   248,   248,   248,   248,
     248,   249,   249,   250,   250,   251,   251,   251,   251,   251,
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
     251,   251,   252,   252,   252,   252,   253,   253,   253,   253,
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
     253,   254,   254,   254,   254,   254,   255,   255,   255,   255,
     255,   256,   256,   257,   257,   257,   257,   258,   258,   259,
     259,   260,   260,   260,   261,   261,   262,   262,   262,   262,
     262,   262,   262,   263,   263,   264,   264,   265,   266,   267,
     267,   268,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   270,   270,   271,   271,   271,   272,   272,
     272,   272,   273,   273,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   275,   275,   275,   275,   275,   275,
     275,   276,   276,   277,   278,   278,   279,   279,   279,   280,
     280,   281,   281,   282,   282,   283,   284,   284,   285,   285,
     285,   285
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     3,     2,     3,     1,
       2,     1,     2,     1,     3,     1,     1,     1,     2,     4,
       2,     1,     1,     4,     4,     4,     4,     2,     2,     1,
       1,     2,     1,     1,     1,     2,     3,     4,     2,     4,
       2,     8,     9,     2,     2,     2,     2,     3,     4,     6,
       4,     4,     1,     1,     3,     5,     5,     8,     4,     6,
       6,     9,     5,     3,     5,     4,     4,     4,     9,     9,
       9,     8,     8,     8,    10,    10,    10,     9,     9,     9,
       9,     9,     8,     8,    11,    11,    10,    10,    10,    10,
       9,     9,    12,    12,    11,    11,     6,     9,     1,     2,
       1,    13,    13,     8,     8,     4,     2,     1,     2,     6,
       2,     6,     4,     5,     1,     2,     1,     6,     7,     8,
       8,     9,    12,    13,    19,     4,     8,     1,     8,     8,
       8,     1,     1,     2,     1,     2,     1,     1,     1,     3,
       4,     4,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     4,     8,     8,     8,     2,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     4,    18,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     8,     6,
       1,     1,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     4,     4,     4,     1,     1,     1,     4,
       1,     2,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     6,     8,
       4,     1,     4,     6,     2,     5,     1,     4,     6,     2,
       5,     1,     1,     1,     4,     6,     5,     1,     1,     1,
       3,     1,     1,     1,     1,     3,     4,     6,     4,     6,
       4,     6,     6,     1,     3,     1,     4,     5,     2,     2,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     2,     4,     1,     4,     1,     4,     5,     6,     4,
       6,     8,     6,     1,     1,     0,     1,     3,     3,     3,
       3,     4,     1,     3,     1,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     4,
       1,     1,     2,     1,     1,     3,     0,     1,     2,     1,
       3,     0,     1,     1,     3,     4,     1,     2,     7,     7,
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
#line 97 "DARIC.y"
            { (yyval.ast) = (yyvsp[0].ast); }
#line 4357 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 3: /* lines: line  */
#line 101 "DARIC.y"
           { ast_lines[yyfileno].push_front((yyvsp[0].ast)); (yyval.ast) = (yyvsp[0].ast); }
#line 4363 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 4: /* lines: line lines  */
#line 102 "DARIC.y"
                 { ast_lines[yyfileno].push_front((yyvsp[-1].ast)); (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4369 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 5: /* line: statements NL  */
#line 106 "DARIC.y"
                    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4375 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 6: /* line: LINE_NUMBER statements NL  */
#line 107 "DARIC.y"
                                { (yyval.ast) = link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast)); yylineno = (yyvsp[-2].v_int); }
#line 4381 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 7: /* line: SS NL  */
#line 108 "DARIC.y"
            { (yyval.ast) = NULL; }
#line 4387 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 8: /* line: LINE_NUMBER SS NL  */
#line 109 "DARIC.y"
                        { (yyval.ast) = linenumber((yyvsp[-2].v_int)); yylineno = (yyvsp[-2].v_int); }
#line 4393 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 9: /* line: NL  */
#line 110 "DARIC.y"
         { (yyval.ast) = NULL; }
#line 4399 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 10: /* line: LINE_NUMBER NL  */
#line 111 "DARIC.y"
                     { (yyval.ast) = NULL; }
#line 4405 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 11: /* embed_lines: line  */
#line 115 "DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 4411 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 12: /* embed_lines: line embed_lines  */
#line 116 "DARIC.y"
                       { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4417 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 13: /* statements: statement  */
#line 120 "DARIC.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 4423 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 14: /* statements: statement SS statements  */
#line 121 "DARIC.y"
                              { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4429 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 18: /* statement: CHAIN expression_string  */
#line 128 "DARIC.y"
                              { (yyval.ast) = token1(CHAIN, (yyvsp[0].ast)); }
#line 4435 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 19: /* statement: CHAIN expression_string ',' plain_variable_list  */
#line 129 "DARIC.y"
                                                      { (yyval.ast) = token2(CHAIN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4441 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 20: /* statement: EXPECT plain_variable_list  */
#line 130 "DARIC.y"
                                 { (yyval.ast) = token1(EXPECT, (yyvsp[0].ast)); }
#line 4447 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 21: /* statement: END  */
#line 131 "DARIC.y"
          { (yyval.ast) = token(END); }
#line 4453 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 22: /* statement: PROCEDURE  */
#line 132 "DARIC.y"
                { (yyval.ast) = token1(CALLPROC, string((yyvsp[0].v_string))); }
#line 4459 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 23: /* statement: PROCEDURE '(' expression_list ')'  */
#line 133 "DARIC.y"
                                        { (yyval.ast) = token2(CALLPROC, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4465 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 24: /* statement: FN_INTEGER '(' expression_list ')'  */
#line 134 "DARIC.y"
                                         { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4471 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 25: /* statement: FN_REAL '(' expression_list ')'  */
#line 135 "DARIC.y"
                                      { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4477 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 26: /* statement: FN_STRING '(' expression_list ')'  */
#line 136 "DARIC.y"
                                        { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4483 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 27: /* statement: DATA expression_list  */
#line 137 "DARIC.y"
                           { (yyval.ast) = token1(DATA, (yyvsp[0].ast)); }
#line 4489 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 28: /* statement: READ variable_list  */
#line 138 "DARIC.y"
                         { (yyval.ast) = token1(READ, (yyvsp[0].ast)); }
#line 4495 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 29: /* statement: RESTORE  */
#line 139 "DARIC.y"
              { (yyval.ast) = token(RESTORE); }
#line 4501 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 30: /* statement: RETURN  */
#line 140 "DARIC.y"
             { (yyval.ast) = token(RETURN); }
#line 4507 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 31: /* statement: RETURN expression  */
#line 141 "DARIC.y"
                        { (yyval.ast) = token1(RETURN_WITH_VALUE, (yyvsp[0].ast)); }
#line 4513 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 32: /* statement: TRACEON  */
#line 142 "DARIC.y"
              { (yyval.ast) = token(TRACEON); }
#line 4519 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 33: /* statement: TRACEOFF  */
#line 143 "DARIC.y"
               { (yyval.ast) = token(TRACEOFF); }
#line 4525 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 34: /* statement: BREAKPOINT  */
#line 144 "DARIC.y"
                 { (yyval.ast) = token(BREAKPOINT); }
#line 4531 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 35: /* statement: DIM dim_variable_list  */
#line 146 "DARIC.y"
                            { (yyval.ast) = token1(DIM, (yyvsp[0].ast)); }
#line 4537 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 36: /* statement: LOCAL DIM dim_variable_list  */
#line 147 "DARIC.y"
                                  { (yyval.ast) = token1(LOCALDIM, (yyvsp[0].ast)); }
#line 4543 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 37: /* statement: BPUT expression_numeric ',' expression_numeric  */
#line 149 "DARIC.y"
                                                     { (yyval.ast) = token2(BPUT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4549 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 38: /* statement: BGET expression_numeric  */
#line 150 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 4555 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 39: /* statement: PTR expression_numeric E expression_numeric  */
#line 151 "DARIC.y"
                                                  { (yyval.ast) = token2(PTRA, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4561 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 40: /* statement: CLOSE expression_numeric  */
#line 152 "DARIC.y"
                               { (yyval.ast) = token1(CLOSE, (yyvsp[0].ast)); }
#line 4567 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 41: /* statement: STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 153 "DARIC.y"
                                                                    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(GLOBAL)); }
#line 4573 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 42: /* statement: LOCAL STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 154 "DARIC.y"
                                                                          { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(LOCAL)); }
#line 4579 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 43: /* statement: OSCLI expression_string  */
#line 156 "DARIC.y"
                              { (yyval.ast) = token1(OSCLI, (yyvsp[0].ast)); }
#line 4585 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 44: /* statement: GOSUB LITERAL_INT  */
#line 158 "DARIC.y"
                        { (yyval.ast) = token1(GOSUB, integer((yyvsp[0].v_int))); }
#line 4591 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 45: /* statement: GOTO LITERAL_INT  */
#line 159 "DARIC.y"
                       { (yyval.ast) = token1(GOTO, integer((yyvsp[0].v_int))); }
#line 4597 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 46: /* statement: INPUT_ expression_input_list  */
#line 161 "DARIC.y"
                                   { (yyval.ast) = token1(INPUT_, (yyvsp[0].ast)); }
#line 4603 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 47: /* statement: INPUT_ LITERAL_STRING expression_input_list  */
#line 162 "DARIC.y"
                                                  { (yyval.ast) = token2(INPUT_NOQUESTIONMARK, string((yyvsp[-1].v_string)), (yyvsp[0].ast)); }
#line 4609 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 48: /* statement: INPUT_ LITERAL_STRING ',' expression_input_list  */
#line 163 "DARIC.y"
                                                      { (yyval.ast) = token2(INPUT_, string((yyvsp[-2].v_string)), (yyvsp[0].ast)); }
#line 4615 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 49: /* statement: MOUSE INTEGER_VARIABLE ',' INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 164 "DARIC.y"
                                                                       { (yyval.ast) = token3(MOUSE, string((yyvsp[-4].v_string)), string((yyvsp[-2].v_string)), string((yyvsp[0].v_string)) ); }
#line 4621 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 50: /* statement: INKEY '(' expression_numeric ')'  */
#line 166 "DARIC.y"
                                       { (yyval.ast) = token1(SINKEY, (yyvsp[-1].ast)); }
#line 4627 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 51: /* statement: INKEYS '(' expression_numeric ')'  */
#line 167 "DARIC.y"
                                        { (yyval.ast) = token1(SINKEYS, (yyvsp[-1].ast)); }
#line 4633 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 52: /* statement: GET  */
#line 168 "DARIC.y"
          { (yyval.ast) = token(GET_S); }
#line 4639 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 53: /* statement: GETS  */
#line 169 "DARIC.y"
           { (yyval.ast) = token(GETS_S); }
#line 4645 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 54: /* statement: IF expression statements  */
#line 171 "DARIC.y"
                               { (yyval.ast) = token2(IF, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4651 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 55: /* statement: IF expression statement ELSE statement  */
#line 172 "DARIC.y"
                                             { (yyval.ast) = token3(IF, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4657 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 56: /* statement: IF expression NL embed_lines ENDIF  */
#line 173 "DARIC.y"
                                         { (yyval.ast) = token2(IF, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4663 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 57: /* statement: IF expression NL embed_lines ELSE NL embed_lines ENDIF  */
#line 174 "DARIC.y"
                                                             { (yyval.ast) = token3(IF, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4669 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 58: /* statement: IF expression THEN statements  */
#line 176 "DARIC.y"
                                    { (yyval.ast) = token2(IF, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4675 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 59: /* statement: IF expression THEN statements ELSE statements  */
#line 177 "DARIC.y"
                                                    { (yyval.ast) = token3(IF, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4681 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 60: /* statement: IF expression THEN NL embed_lines ENDIF  */
#line 178 "DARIC.y"
                                              { (yyval.ast) = token2(IF, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4687 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 61: /* statement: IF expression THEN NL embed_lines ELSE NL embed_lines ENDIF  */
#line 179 "DARIC.y"
                                                                  { (yyval.ast) = token3(IF, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4693 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 62: /* statement: REPEAT NL embed_lines UNTIL expression  */
#line 181 "DARIC.y"
                                             { (yyval.ast) = token2(REPEAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4699 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 63: /* statement: REPEAT UNTIL expression  */
#line 182 "DARIC.y"
                              { (yyval.ast) = token2(REPEAT, NULL, (yyvsp[0].ast)); }
#line 4705 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 64: /* statement: WHILE expression NL embed_lines ENDWHILE  */
#line 183 "DARIC.y"
                                               { (yyval.ast) = token2(WHILE, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4711 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 65: /* statement: SWAP INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 185 "DARIC.y"
                                                 { (yyval.ast) = token2(SWAP_I, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4717 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 66: /* statement: SWAP VARIABLE ',' VARIABLE  */
#line 186 "DARIC.y"
                                 { (yyval.ast) = token2(SWAP_F, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4723 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 67: /* statement: SWAP STRING_VARIABLE ',' STRING_VARIABLE  */
#line 187 "DARIC.y"
                                                { (yyval.ast) = token2(SWAP_S, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4729 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 68: /* statement: FOR VARIABLE IN_ VARIABLE '(' ')' NL embed_lines NEXT  */
#line 190 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4735 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 69: /* statement: FOR INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 191 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4741 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 70: /* statement: FOR STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 192 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4747 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 71: /* statement: FOR VARIABLE IN_ VARIABLE '(' ')' statements NEXT  */
#line 193 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4753 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 72: /* statement: FOR INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' statements NEXT  */
#line 194 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4759 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 73: /* statement: FOR STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' statements NEXT  */
#line 195 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4765 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 74: /* statement: FOR LOCAL VARIABLE IN_ VARIABLE '(' ')' NL embed_lines NEXT  */
#line 196 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4771 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 75: /* statement: FOR LOCAL INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 197 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4777 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 76: /* statement: FOR LOCAL STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 198 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4783 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 77: /* statement: FOR LOCAL VARIABLE IN_ VARIABLE '(' ')' statements NEXT  */
#line 199 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4789 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 78: /* statement: FOR LOCAL INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' statements NEXT  */
#line 200 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4795 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 79: /* statement: FOR LOCAL STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' statements NEXT  */
#line 201 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4801 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 80: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 204 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4807 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 81: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 205 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4813 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 82: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 206 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4819 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 83: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 207 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4825 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 84: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 208 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4831 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 85: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 209 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4837 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 86: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 210 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4843 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 87: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 211 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4849 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 88: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 212 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4855 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 89: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 213 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4861 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 90: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 214 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4867 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 91: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 215 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4873 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 92: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 216 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4879 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 93: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 217 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4885 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 94: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 218 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4891 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 95: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 219 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4897 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 96: /* statement: CASE expression OF NL when_list ENDCASE  */
#line 221 "DARIC.y"
                                              { (yyval.ast) = token2(CASE, (yyvsp[-4].ast), (yyvsp[-1].ast));  }
#line 4903 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 97: /* statement: CASE expression OF NL when_list OTHERWISE statement NL ENDCASE  */
#line 222 "DARIC.y"
                                                                     { (yyval.ast) = token3(CASE, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-2].ast));  }
#line 4909 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 98: /* statement: PRINT  */
#line 224 "DARIC.y"
            { (yyval.ast) = token(PRINT); }
#line 4915 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 99: /* statement: PRINT expression_print_list  */
#line 225 "DARIC.y"
                                  { (yyval.ast) = token1(PRINT, (yyvsp[0].ast)); }
#line 4921 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 100: /* statement: RENDERFRAME  */
#line 227 "DARIC.y"
                  { (yyval.ast) = token(RENDERFRAME); }
#line 4927 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 101: /* statement: CREATEVERTEX TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 230 "DARIC.y"
                                                      { (yyval.ast) = token6(CREATEVERTEX, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4933 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 102: /* statement: CREATETRIANGLE TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 233 "DARIC.y"
                                                  { (yyval.ast) = token6(CREATETRIANGLE, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4939 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 103: /* statement: TRANSLATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 234 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TRANSLATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4945 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 104: /* statement: ROTATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 235 "DARIC.y"
                                                                                                      { (yyval.ast) = token4(ROTATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4951 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 105: /* statement: SCALE expression_numeric ',' expression_numeric  */
#line 236 "DARIC.y"
                                                      { (yyval.ast) = token2(SCALE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4957 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 106: /* statement: DELETEOBJECT expression_numeric  */
#line 237 "DARIC.y"
                                      { (yyval.ast) = token1(DELETEOBJECT, (yyvsp[0].ast)); }
#line 4963 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 107: /* statement: CLS  */
#line 239 "DARIC.y"
          { (yyval.ast) = token(CLS); }
#line 4969 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 108: /* statement: COLOUR expression_numeric  */
#line 240 "DARIC.y"
                                { (yyval.ast) = token1(COLOUR, (yyvsp[0].ast)); }
#line 4975 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 109: /* statement: COLOUR expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 241 "DARIC.y"
                                                                              { (yyval.ast) = token3(COLOUR, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4981 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 110: /* statement: COLOURBG expression_numeric  */
#line 242 "DARIC.y"
                                  { (yyval.ast) = token1(COLOURBG, (yyvsp[0].ast)); }
#line 4987 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 111: /* statement: COLOURBG expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 243 "DARIC.y"
                                                                                { (yyval.ast) = token3(COLOURBG, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4993 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 112: /* statement: GRAPHICS expression_numeric ',' expression_numeric  */
#line 244 "DARIC.y"
                                                         { (yyval.ast) = token2(GRAPHICS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4999 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 113: /* statement: GRAPHICS BANKED expression_numeric ',' expression_numeric  */
#line 245 "DARIC.y"
                                                                { (yyval.ast) = token2(BANKED, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5005 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 114: /* statement: GRAPHICS  */
#line 246 "DARIC.y"
               { (yyval.ast) = token(GRAPHICS); }
#line 5011 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 115: /* statement: GRAPHICS BANKED  */
#line 247 "DARIC.y"
                      { (yyval.ast) = token(BANKED); }
#line 5017 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 116: /* statement: FLIP  */
#line 248 "DARIC.y"
           { (yyval.ast) = token(FLIP); }
#line 5023 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 117: /* statement: CIRCLE expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 249 "DARIC.y"
                                                                              { (yyval.ast) = token3(CIRCLE, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5029 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 118: /* statement: CIRCLE FILL expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 250 "DARIC.y"
                                                                                   { (yyval.ast) = token3(CIRCLEFILL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5035 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 119: /* statement: LINE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 251 "DARIC.y"
                                                                                                   { (yyval.ast) = token4(LINE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5041 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 120: /* statement: RECTANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 252 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(RECTANGLE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5047 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 121: /* statement: RECTANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 253 "DARIC.y"
                                                                                                             { (yyval.ast) = token4(RECTANGLEFILL, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5053 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 122: /* statement: TRIANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 254 "DARIC.y"
                                                                                                                                                     { (yyval.ast) = token6(TRIANGLE, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5059 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 123: /* statement: TRIANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 255 "DARIC.y"
                                                                                                                                                          { (yyval.ast) = token6(TRIANGLEFILL, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5065 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 124: /* statement: TRIANGLE SHADED expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 258 "DARIC.y"
                                                                                         { (yyval.ast) = token9(TRIANGLESHADED, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5071 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 125: /* statement: PLOT expression_numeric ',' expression_numeric  */
#line 259 "DARIC.y"
                                                     { (yyval.ast) = token2(PLOT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5077 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 126: /* statement: CLIPON expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 260 "DARIC.y"
                                                                                                     { (yyval.ast) = token4(CLIPON, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5083 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 127: /* statement: CLIPOFF  */
#line 261 "DARIC.y"
              { (yyval.ast) = token(CLIPOFF); }
#line 5089 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 128: /* statement: TEXT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 262 "DARIC.y"
                                                                                                  { (yyval.ast) = token4(TEXT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5095 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 129: /* statement: TEXTRIGHT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 263 "DARIC.y"
                                                                                                       { (yyval.ast) = token4(TEXTRIGHT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5101 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 130: /* statement: TEXTCENTRE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 264 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TEXTCENTRE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5107 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 131: /* statement: SHOWFPS  */
#line 265 "DARIC.y"
              { (yyval.ast) = token(SHOWFPS); }
#line 5113 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 132: /* number: LITERAL_INT  */
#line 269 "DARIC.y"
                  { (yyval.ast) = integer((yyvsp[0].v_int)); }
#line 5119 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 133: /* number: MINUS LITERAL_INT  */
#line 270 "DARIC.y"
                                  { (yyval.ast) = integer(-(yyvsp[0].v_int)); }
#line 5125 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 134: /* number: LITERAL_REAL  */
#line 271 "DARIC.y"
                   { (yyval.ast) = real((yyvsp[0].v_real)); }
#line 5131 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 135: /* number: MINUS LITERAL_REAL  */
#line 272 "DARIC.y"
                                   { (yyval.ast) = real(-(yyvsp[0].v_real)); }
#line 5137 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 136: /* expression_numeric: number  */
#line 276 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 5143 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 137: /* expression_numeric: variable_integer  */
#line 277 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5149 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 138: /* expression_numeric: variable_real  */
#line 278 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5155 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 139: /* expression_numeric: '(' expression_numeric ')'  */
#line 279 "DARIC.y"
                                 { (yyval.ast) = (yyvsp[-1].ast); }
#line 5161 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 140: /* expression_numeric: FLOAT_ '(' expression_numeric ')'  */
#line 280 "DARIC.y"
                                        { (yyval.ast) = token1(FLOAT_, (yyvsp[-1].ast)); }
#line 5167 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 141: /* expression_numeric: INT_ '(' expression_numeric ')'  */
#line 281 "DARIC.y"
                                      { (yyval.ast) = token1(INT_, (yyvsp[-1].ast)); }
#line 5173 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 142: /* expression_numeric: MINUS variable_integer  */
#line 282 "DARIC.y"
                             { (yyval.ast) = token2(MINUS, integer(0), (yyvsp[0].ast)); }
#line 5179 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 143: /* expression_numeric: MINUS variable_real  */
#line 283 "DARIC.y"
                          { (yyval.ast) = token2(MINUS, real(0.0), (yyvsp[0].ast)); }
#line 5185 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 144: /* expression_numeric: expression_numeric PLUS expression_numeric  */
#line 284 "DARIC.y"
                                                 { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5191 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 145: /* expression_numeric: expression_numeric MINUS expression_numeric  */
#line 285 "DARIC.y"
                                                  { (yyval.ast) = token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5197 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 146: /* expression_numeric: expression_numeric MULTIPLY expression_numeric  */
#line 286 "DARIC.y"
                                                     { (yyval.ast) = token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5203 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 147: /* expression_numeric: expression_numeric DIVIDE expression_numeric  */
#line 287 "DARIC.y"
                                                   { (yyval.ast) = token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5209 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 148: /* expression_numeric: expression_numeric INTEGERDIVIDE expression_numeric  */
#line 288 "DARIC.y"
                                                          { (yyval.ast) = token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5215 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 149: /* expression_numeric: expression_numeric DIV expression_numeric  */
#line 289 "DARIC.y"
                                                { (yyval.ast) = token2(DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5221 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 150: /* expression_numeric: expression_numeric MOD expression_numeric  */
#line 290 "DARIC.y"
                                                { (yyval.ast) = token2(MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5227 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 151: /* expression_numeric: expression_numeric SHL expression_numeric  */
#line 291 "DARIC.y"
                                                { (yyval.ast) = token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5233 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 152: /* expression_numeric: expression_numeric SHR expression_numeric  */
#line 292 "DARIC.y"
                                                { (yyval.ast) = token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5239 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 153: /* expression_numeric: expression_numeric E expression_numeric  */
#line 293 "DARIC.y"
                                              { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5245 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 154: /* expression_numeric: expression_numeric NE expression_numeric  */
#line 294 "DARIC.y"
                                               { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5251 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 155: /* expression_numeric: expression_numeric GE expression_numeric  */
#line 295 "DARIC.y"
                                               { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5257 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 156: /* expression_numeric: expression_numeric LE expression_numeric  */
#line 296 "DARIC.y"
                                               { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5263 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 157: /* expression_numeric: expression_numeric LT expression_numeric  */
#line 297 "DARIC.y"
                                               { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5269 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 158: /* expression_numeric: expression_numeric GT expression_numeric  */
#line 298 "DARIC.y"
                                               { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5275 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 159: /* expression_numeric: expression_numeric AND expression_numeric  */
#line 299 "DARIC.y"
                                                { (yyval.ast) = token2(AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5281 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 160: /* expression_numeric: expression_numeric OR expression_numeric  */
#line 300 "DARIC.y"
                                               { (yyval.ast) = token2(OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5287 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 161: /* expression_numeric: expression_numeric EOR expression_numeric  */
#line 301 "DARIC.y"
                                                { (yyval.ast) = token2(EOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5293 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 162: /* expression_numeric: FN_INTEGER '(' expression_list ')'  */
#line 303 "DARIC.y"
                                         { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5299 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 163: /* expression_numeric: FN_REAL '(' expression_list ')'  */
#line 304 "DARIC.y"
                                      { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5305 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 164: /* expression_numeric: DIM '(' VARIABLE '(' ')' ',' number ')'  */
#line 306 "DARIC.y"
                                              { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::REAL), (yyvsp[-1].ast)); }
#line 5311 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 165: /* expression_numeric: DIM '(' INTEGER_VARIABLE '(' ')' ',' number ')'  */
#line 307 "DARIC.y"
                                                      { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::INTEGER), (yyvsp[-1].ast)); }
#line 5317 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 166: /* expression_numeric: DIM '(' STRING_VARIABLE '(' ')' ',' number ')'  */
#line 308 "DARIC.y"
                                                     { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::STRING), (yyvsp[-1].ast)); }
#line 5323 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 167: /* expression_numeric: PTR expression_numeric  */
#line 310 "DARIC.y"
                             { (yyval.ast) = token1(PTR, (yyvsp[0].ast)); }
#line 5329 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 168: /* expression_numeric: GET  */
#line 312 "DARIC.y"
          { (yyval.ast) = token(GET); }
#line 5335 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 169: /* expression_numeric: INKEY '(' expression_numeric ')'  */
#line 313 "DARIC.y"
                                       { (yyval.ast) = token1(INKEY, (yyvsp[-1].ast)); }
#line 5341 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 170: /* expression_numeric: BOOLTRUE  */
#line 315 "DARIC.y"
               { (yyval.ast) = integer(1); }
#line 5347 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 171: /* expression_numeric: BOOLFALSE  */
#line 316 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5353 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 172: /* expression_numeric: TIME  */
#line 317 "DARIC.y"
           { (yyval.ast) = token(TIME); }
#line 5359 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 173: /* expression_numeric: SOLID  */
#line 319 "DARIC.y"
                        { (yyval.ast) = integer(0); }
#line 5365 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 174: /* expression_numeric: WIREFRAME  */
#line 320 "DARIC.y"
                        { (yyval.ast) = integer(1); }
#line 5371 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 175: /* expression_numeric: SHADED  */
#line 321 "DARIC.y"
                        { (yyval.ast) = integer(2); }
#line 5377 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 176: /* expression_numeric: FILLEDWIREFRAME  */
#line 322 "DARIC.y"
                        { (yyval.ast) = integer(3); }
#line 5383 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 177: /* expression_numeric: CREATESHAPE TYPE_VARIABLE ',' TYPE_VARIABLE  */
#line 324 "DARIC.y"
                                                  { (yyval.ast) = token2(CREATESHAPE, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 5389 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 178: /* expression_numeric: CREATEOBJECT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 329 "DARIC.y"
                                                  { (yyval.ast) = token9(CREATEOBJECT, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5395 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 179: /* expression_numeric: RED  */
#line 331 "DARIC.y"
                { (yyval.ast) = integer(0xFF0000); }
#line 5401 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 180: /* expression_numeric: GREEN  */
#line 332 "DARIC.y"
                { (yyval.ast) = integer(0x00FF00); }
#line 5407 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 181: /* expression_numeric: YELLOW  */
#line 333 "DARIC.y"
                { (yyval.ast) = integer(0xFFFF00); }
#line 5413 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 182: /* expression_numeric: BLUE  */
#line 334 "DARIC.y"
                { (yyval.ast) = integer(0x0000FF); }
#line 5419 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 183: /* expression_numeric: MAGENTA  */
#line 335 "DARIC.y"
                { (yyval.ast) = integer(0xFF00FF); }
#line 5425 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 184: /* expression_numeric: CYAN  */
#line 336 "DARIC.y"
                { (yyval.ast) = integer(0x00FFFF); }
#line 5431 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 185: /* expression_numeric: WHITE  */
#line 337 "DARIC.y"
                { (yyval.ast) = integer(0xFFFFFF); }
#line 5437 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 186: /* expression_numeric: BLACK  */
#line 338 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5443 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 187: /* expression_numeric: LASTPOS  */
#line 339 "DARIC.y"
                { (yyval.ast) = integer(-1); }
#line 5449 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 188: /* expression_numeric: COLOUR '(' expression_numeric ',' expression_numeric ',' expression_numeric ')'  */
#line 340 "DARIC.y"
                                                                                      { (yyval.ast) = token3(COLOUREXP, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5455 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 189: /* expression_numeric: POINT_ '(' expression_numeric ',' expression_numeric ')'  */
#line 341 "DARIC.y"
                                                               { (yyval.ast) = token2(POINT_, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5461 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 190: /* expression_numeric: SCREENWIDTH  */
#line 342 "DARIC.y"
                  { (yyval.ast) = token(SCREENWIDTH); }
#line 5467 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 191: /* expression_numeric: SCREENHEIGHT  */
#line 343 "DARIC.y"
                   { (yyval.ast) = token(SCREENHEIGHT); }
#line 5473 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 192: /* expression_numeric: LOADTYPEFACE expression_string  */
#line 344 "DARIC.y"
                                     { (yyval.ast) = token1(LOADTYPEFACE, (yyvsp[0].ast)); }
#line 5479 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 193: /* expression_numeric: CREATEFONT expression_numeric ',' expression_numeric  */
#line 345 "DARIC.y"
                                                           { (yyval.ast) = token2(CREATEFONT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5485 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 194: /* expression_numeric: MONO15  */
#line 346 "DARIC.y"
             { (yyval.ast) = integer(0); }
#line 5491 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 195: /* expression_numeric: MONO20  */
#line 347 "DARIC.y"
             { (yyval.ast) = integer(1); }
#line 5497 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 196: /* expression_numeric: MONO25  */
#line 348 "DARIC.y"
             { (yyval.ast) = integer(2); }
#line 5503 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 197: /* expression_numeric: MONO30  */
#line 349 "DARIC.y"
             { (yyval.ast) = integer(3); }
#line 5509 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 198: /* expression_numeric: MONO35  */
#line 350 "DARIC.y"
             { (yyval.ast) = integer(4); }
#line 5515 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 199: /* expression_numeric: MONO40  */
#line 351 "DARIC.y"
             { (yyval.ast) = integer(5); }
#line 5521 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 200: /* expression_numeric: MONO50  */
#line 352 "DARIC.y"
             { (yyval.ast) = integer(6); }
#line 5527 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 201: /* expression_numeric: MONO75  */
#line 353 "DARIC.y"
             { (yyval.ast) = integer(7); }
#line 5533 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 202: /* expression_numeric: MONO100  */
#line 354 "DARIC.y"
              { (yyval.ast) = integer(8); }
#line 5539 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 203: /* expression_numeric: PROP15  */
#line 355 "DARIC.y"
             { (yyval.ast) = integer(9); }
#line 5545 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 204: /* expression_numeric: PROP20  */
#line 356 "DARIC.y"
             { (yyval.ast) = integer(10); }
#line 5551 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 205: /* expression_numeric: PROP25  */
#line 357 "DARIC.y"
             { (yyval.ast) = integer(11); }
#line 5557 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 206: /* expression_numeric: PROP30  */
#line 358 "DARIC.y"
             { (yyval.ast) = integer(12); }
#line 5563 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 207: /* expression_numeric: PROP35  */
#line 359 "DARIC.y"
             { (yyval.ast) = integer(13); }
#line 5569 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 208: /* expression_numeric: PROP40  */
#line 360 "DARIC.y"
             { (yyval.ast) = integer(14); }
#line 5575 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 209: /* expression_numeric: PROP50  */
#line 361 "DARIC.y"
             { (yyval.ast) = integer(15); }
#line 5581 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 210: /* expression_numeric: PROP75  */
#line 362 "DARIC.y"
             { (yyval.ast) = integer(16); }
#line 5587 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 211: /* expression_numeric: PROP100  */
#line 363 "DARIC.y"
              { (yyval.ast) = integer(17); }
#line 5593 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 212: /* expression_numeric: SERIF15  */
#line 364 "DARIC.y"
              { (yyval.ast) = integer(18); }
#line 5599 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 213: /* expression_numeric: SERIF20  */
#line 365 "DARIC.y"
              { (yyval.ast) = integer(19); }
#line 5605 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 214: /* expression_numeric: SERIF25  */
#line 366 "DARIC.y"
              { (yyval.ast) = integer(20); }
#line 5611 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 215: /* expression_numeric: SERIF30  */
#line 367 "DARIC.y"
              { (yyval.ast) = integer(21); }
#line 5617 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 216: /* expression_numeric: SERIF35  */
#line 368 "DARIC.y"
              { (yyval.ast) = integer(22); }
#line 5623 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 217: /* expression_numeric: SERIF40  */
#line 369 "DARIC.y"
              { (yyval.ast) = integer(23); }
#line 5629 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 218: /* expression_numeric: SERIF50  */
#line 370 "DARIC.y"
              { (yyval.ast) = integer(24); }
#line 5635 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 219: /* expression_numeric: SERIF75  */
#line 371 "DARIC.y"
              { (yyval.ast) = integer(25); }
#line 5641 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 220: /* expression_numeric: SERIF100  */
#line 372 "DARIC.y"
               { (yyval.ast) = integer(26); }
#line 5647 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 221: /* expression_numeric: EOFH expression_numeric  */
#line 373 "DARIC.y"
                              { (yyval.ast) = token1(EOFH, (yyvsp[0].ast)); }
#line 5653 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 222: /* expression_numeric: BGET expression_numeric  */
#line 374 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 5659 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 223: /* expression_numeric: OPENIN '(' expression_string ')'  */
#line 375 "DARIC.y"
                                       { (yyval.ast) = token1(OPENIN, (yyvsp[-1].ast)); }
#line 5665 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 224: /* expression_numeric: OPENOUT '(' expression_string ')'  */
#line 376 "DARIC.y"
                                        { (yyval.ast) = token1(OPENOUT, (yyvsp[-1].ast)); }
#line 5671 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 225: /* expression_numeric: OPENUP '(' expression_string ')'  */
#line 377 "DARIC.y"
                                       { (yyval.ast) = token1(OPENUP, (yyvsp[-1].ast)); }
#line 5677 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 226: /* expression_numeric: RND  */
#line 379 "DARIC.y"
          { (yyval.ast) = token(RND); }
#line 5683 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 227: /* expression_numeric: RND0  */
#line 380 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(0)); }
#line 5689 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 228: /* expression_numeric: RND1  */
#line 381 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(1)); }
#line 5695 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 229: /* expression_numeric: RND '(' expression_numeric ')'  */
#line 382 "DARIC.y"
                                     { (yyval.ast) = token1(RNDRANGE, (yyvsp[-1].ast)); }
#line 5701 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 230: /* expression_numeric: PI  */
#line 384 "DARIC.y"
         { (yyval.ast) = token(PI); }
#line 5707 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 231: /* expression_numeric: NOT expression_numeric  */
#line 385 "DARIC.y"
                             { (yyval.ast) = token1(NOT, (yyvsp[0].ast)); }
#line 5713 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 232: /* expression_numeric: SQR '(' expression_numeric ')'  */
#line 386 "DARIC.y"
                                     { (yyval.ast) = token1(SQR, (yyvsp[-1].ast)); }
#line 5719 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 233: /* expression_numeric: LN '(' expression_numeric ')'  */
#line 387 "DARIC.y"
                                    { (yyval.ast) = token1(LN, (yyvsp[-1].ast)); }
#line 5725 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 234: /* expression_numeric: LOG '(' expression_numeric ')'  */
#line 388 "DARIC.y"
                                     { (yyval.ast) = token1(LOG, (yyvsp[-1].ast)); }
#line 5731 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 235: /* expression_numeric: EXP '(' expression_numeric ')'  */
#line 389 "DARIC.y"
                                     { (yyval.ast) = token1(EXP, (yyvsp[-1].ast)); }
#line 5737 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 236: /* expression_numeric: ATN '(' expression_numeric ')'  */
#line 390 "DARIC.y"
                                     { (yyval.ast) = token1(ATN, (yyvsp[-1].ast)); }
#line 5743 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 237: /* expression_numeric: TAN '(' expression_numeric ')'  */
#line 391 "DARIC.y"
                                     { (yyval.ast) = token1(TAN, (yyvsp[-1].ast)); }
#line 5749 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 238: /* expression_numeric: COS '(' expression_numeric ')'  */
#line 392 "DARIC.y"
                                     { (yyval.ast) = token1(COS, (yyvsp[-1].ast)); }
#line 5755 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 239: /* expression_numeric: SIN '(' expression_numeric ')'  */
#line 393 "DARIC.y"
                                     { (yyval.ast) = token1(SIN, (yyvsp[-1].ast)); }
#line 5761 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 240: /* expression_numeric: ABS '(' expression_numeric ')'  */
#line 394 "DARIC.y"
                                     { (yyval.ast) = token1(ABS, (yyvsp[-1].ast)); }
#line 5767 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 241: /* expression_numeric: ACS '(' expression_numeric ')'  */
#line 395 "DARIC.y"
                                     { (yyval.ast) = token1(ACS, (yyvsp[-1].ast)); }
#line 5773 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 242: /* expression_numeric: ASN '(' expression_numeric ')'  */
#line 396 "DARIC.y"
                                     { (yyval.ast) = token1(ASN, (yyvsp[-1].ast)); }
#line 5779 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 243: /* expression_numeric: DEG '(' expression_numeric ')'  */
#line 397 "DARIC.y"
                                     { (yyval.ast) = token1(DEG, (yyvsp[-1].ast)); }
#line 5785 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 244: /* expression_numeric: RAD '(' expression_numeric ')'  */
#line 398 "DARIC.y"
                                     { (yyval.ast) = token1(RAD, (yyvsp[-1].ast)); }
#line 5791 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 245: /* expression_numeric: SGN '(' expression_numeric ')'  */
#line 399 "DARIC.y"
                                     { (yyval.ast) = token1(SGN, (yyvsp[-1].ast)); }
#line 5797 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 246: /* expression_numeric: ASC '(' expression_string ')'  */
#line 401 "DARIC.y"
                                    { (yyval.ast) = token1(ASC, (yyvsp[-1].ast)); }
#line 5803 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 247: /* expression_numeric: LEN '(' expression_string ')'  */
#line 402 "DARIC.y"
                                    { (yyval.ast) = token1(LEN, (yyvsp[-1].ast)); }
#line 5809 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 248: /* expression_numeric: INSTR '(' expression_string ',' expression_string ')'  */
#line 403 "DARIC.y"
                                                            { (yyval.ast) = token3(INSTR, (yyvsp[-3].ast), (yyvsp[-1].ast), integer(1)); }
#line 5815 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 249: /* expression_numeric: INSTR '(' expression_string ',' expression_string ',' expression_numeric ')'  */
#line 404 "DARIC.y"
                                                                                   { (yyval.ast) = token3(INSTR, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5821 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 250: /* expression_numeric: VAL '(' expression_string ')'  */
#line 405 "DARIC.y"
                                    { (yyval.ast) = token1(VAL, (yyvsp[-1].ast)); }
#line 5827 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 251: /* variable_integer: INTEGER_VARIABLE  */
#line 409 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5833 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 252: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 410 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5839 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 253: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 411 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5845 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 254: /* variable_integer: TYPE_VARIABLE INTEGER_VARIABLE  */
#line 412 "DARIC.y"
                                     { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5851 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 255: /* variable_integer: TYPE_VARIABLE '(' expression_numeric ')' INTEGER_VARIABLE  */
#line 413 "DARIC.y"
                                                                { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5857 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 256: /* variable_real: VARIABLE  */
#line 417 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 5863 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 257: /* variable_real: VARIABLE '(' expression_numeric ')'  */
#line 418 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5869 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 258: /* variable_real: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 419 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5875 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 259: /* variable_real: TYPE_VARIABLE VARIABLE  */
#line 420 "DARIC.y"
                             { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5881 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 260: /* variable_real: TYPE_VARIABLE '(' expression_numeric ')' VARIABLE  */
#line 421 "DARIC.y"
                                                        { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5887 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 261: /* variable_numeric: variable_integer  */
#line 425 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5893 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 262: /* variable_numeric: variable_real  */
#line 426 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5899 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 263: /* variable_string: STRING_VARIABLE  */
#line 430 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 5905 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 264: /* variable_string: STRING_VARIABLE '(' expression_numeric ')'  */
#line 431 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5911 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 265: /* variable_string: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 432 "DARIC.y"
                                                                        { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5917 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 266: /* variable_string: TYPE_VARIABLE '(' expression_numeric ')' STRING_VARIABLE  */
#line 433 "DARIC.y"
                                                               { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5923 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 267: /* variable: variable_numeric  */
#line 437 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5929 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 268: /* variable: variable_string  */
#line 438 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 5935 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 269: /* variable_list: variable  */
#line 442 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 5941 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 270: /* variable_list: variable ',' variable_list  */
#line 443 "DARIC.y"
                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5947 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 271: /* plain_variable: INTEGER_VARIABLE  */
#line 447 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5953 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 272: /* plain_variable: VARIABLE  */
#line 448 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 5959 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 273: /* plain_variable: STRING_VARIABLE  */
#line 449 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 5965 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 274: /* plain_variable_list: plain_variable  */
#line 453 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 5971 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 275: /* plain_variable_list: plain_variable ',' plain_variable_list  */
#line 454 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5977 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 276: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 458 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5983 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 277: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 459 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5989 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 278: /* dim_variable: VARIABLE '(' expression_numeric ')'  */
#line 460 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5995 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 279: /* dim_variable: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 461 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 6001 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 280: /* dim_variable: STRING_VARIABLE '(' expression_numeric ')'  */
#line 462 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6007 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 281: /* dim_variable: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 463 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 6013 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 282: /* dim_variable: TYPE_VARIABLE '(' expression_numeric ',' VARIABLE ')'  */
#line 464 "DARIC.y"
                                                            { (yyval.ast) = typevariable1d((yyvsp[-5].v_string), (yyvsp[-1].v_string), (yyvsp[-3].ast), Type::TYPE_ARRAY); }
#line 6019 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 283: /* dim_variable_list: dim_variable  */
#line 468 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6025 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 284: /* dim_variable_list: dim_variable ',' dim_variable_list  */
#line 469 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6031 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 285: /* type_variable: TYPE_VARIABLE  */
#line 473 "DARIC.y"
                    { (yyval.ast) = variable((yyvsp[0].v_string), Type::TYPE); }
#line 6037 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 286: /* type_variable: TYPE_VARIABLE '(' expression_numeric ')'  */
#line 474 "DARIC.y"
                                               { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::TYPE_ARRAY); }
#line 6043 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 287: /* type: TYPE_ VARIABLE NL field_list ENDTYPE  */
#line 478 "DARIC.y"
                                           { (yyval.ast) = token2(TYPE_, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 6049 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 288: /* field: FIELD variable  */
#line 482 "DARIC.y"
                     { (yyval.ast) = token1(FIELD, (yyvsp[0].ast)); }
#line 6055 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 289: /* field_list: field NL  */
#line 486 "DARIC.y"
              { (yyval.ast) = (yyvsp[-1].ast); }
#line 6061 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 290: /* field_list: field NL field_list  */
#line 487 "DARIC.y"
                          { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6067 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 291: /* string: LITERAL_STRING  */
#line 491 "DARIC.y"
                     { (yyval.ast) = string((yyvsp[0].v_string)); }
#line 6073 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 292: /* expression_string: string  */
#line 495 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 6079 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 293: /* expression_string: variable_string  */
#line 496 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6085 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 294: /* expression_string: expression_string PLUS expression_string  */
#line 497 "DARIC.y"
                                               { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6091 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 295: /* expression_string: expression_string E expression_string  */
#line 498 "DARIC.y"
                                            { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6097 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 296: /* expression_string: expression_string NE expression_string  */
#line 499 "DARIC.y"
                                             { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6103 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 297: /* expression_string: expression_string GE expression_string  */
#line 500 "DARIC.y"
                                             { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6109 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 298: /* expression_string: expression_string LE expression_string  */
#line 501 "DARIC.y"
                                             { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6115 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 299: /* expression_string: expression_string LT expression_string  */
#line 502 "DARIC.y"
                                             { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6121 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 300: /* expression_string: expression_string GT expression_string  */
#line 503 "DARIC.y"
                                             { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6127 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 301: /* expression_string: GETSH expression_numeric  */
#line 505 "DARIC.y"
                               { (yyval.ast) = token1(GETSH, (yyvsp[0].ast)); }
#line 6133 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 302: /* expression_string: FN_STRING '(' expression_list ')'  */
#line 507 "DARIC.y"
                                        { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 6139 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 303: /* expression_string: GETS  */
#line 509 "DARIC.y"
           { (yyval.ast) = token(GETS); }
#line 6145 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 304: /* expression_string: INKEYS '(' expression_numeric ')'  */
#line 510 "DARIC.y"
                                        { (yyval.ast) = token1(INKEYS, (yyvsp[-1].ast)); }
#line 6151 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 305: /* expression_string: TIMES  */
#line 512 "DARIC.y"
            { (yyval.ast) = token(TIMES); }
#line 6157 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 306: /* expression_string: STRS '(' expression_numeric ')'  */
#line 513 "DARIC.y"
                                      { (yyval.ast) = token1(STRS, (yyvsp[-1].ast)); }
#line 6163 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 307: /* expression_string: STRS TILDE '(' expression_numeric ')'  */
#line 514 "DARIC.y"
                                            { (yyval.ast) = token1(STRSHEX, (yyvsp[-1].ast)); }
#line 6169 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 308: /* expression_string: STRINGS '(' expression_numeric ',' expression_string ')'  */
#line 515 "DARIC.y"
                                                               { (yyval.ast) = token2(STRINGS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6175 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 309: /* expression_string: CHRS '(' expression_numeric ')'  */
#line 516 "DARIC.y"
                                      { (yyval.ast) = token1(CHRS, (yyvsp[-1].ast)); }
#line 6181 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 310: /* expression_string: LEFTS '(' expression_string ',' expression_numeric ')'  */
#line 517 "DARIC.y"
                                                             { (yyval.ast) = token2(LEFTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6187 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 311: /* expression_string: MIDS '(' expression_string ',' expression_numeric ',' expression_numeric ')'  */
#line 518 "DARIC.y"
                                                                                   { (yyval.ast) = token3(MIDS, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6193 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 312: /* expression_string: RIGHTS '(' expression_string ',' expression_numeric ')'  */
#line 519 "DARIC.y"
                                                              { (yyval.ast) = token2(RIGHTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6199 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 313: /* expression: expression_numeric  */
#line 523 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6205 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 314: /* expression: expression_string  */
#line 524 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6211 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 315: /* expression_list: %empty  */
#line 528 "DARIC.y"
                     { (yyval.ast) = NULL; }
#line 6217 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 316: /* expression_list: expression  */
#line 529 "DARIC.y"
                 { (yyval.ast) = (yyvsp[0].ast); }
#line 6223 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 317: /* expression_list: expression ',' expression_list  */
#line 530 "DARIC.y"
                                     { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6229 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 318: /* assignment_single: variable_numeric E expression_numeric  */
#line 534 "DARIC.y"
                                            { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6235 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 319: /* assignment_single: variable_string E expression_string  */
#line 535 "DARIC.y"
                                          { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6241 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 320: /* assignment_single: type_variable E expression  */
#line 536 "DARIC.y"
                                 { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6247 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 321: /* assignment_single: type_variable variable E expression  */
#line 537 "DARIC.y"
                                          { (yyval.ast) = assignment(link((yyvsp[-3].ast), (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 6253 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 322: /* assignment_list: assignment_single  */
#line 541 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6259 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 323: /* assignment_list: assignment_single ',' assignment_list  */
#line 542 "DARIC.y"
                                            { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6265 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 324: /* assignment: assignment_list  */
#line 546 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6271 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 325: /* assignment: LOCAL assignment_list  */
#line 547 "DARIC.y"
                            { (yyval.ast) = token1(LOCAL, (yyvsp[0].ast)); }
#line 6277 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 326: /* assignment: GLOBAL assignment_list  */
#line 548 "DARIC.y"
                             { (yyval.ast) = token1(GLOBAL, (yyvsp[0].ast)); }
#line 6283 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 327: /* assignment: variable_numeric SHL_E expression_numeric  */
#line 549 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6289 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 328: /* assignment: variable_numeric SHR_E expression_numeric  */
#line 550 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6295 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 329: /* assignment: variable_numeric PLUS_E expression_numeric  */
#line 551 "DARIC.y"
                                                 { (yyval.ast) = assignment((yyvsp[-2].ast), token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6301 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 330: /* assignment: variable_numeric MINUS_E expression_numeric  */
#line 552 "DARIC.y"
                                                  { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6307 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 331: /* assignment: variable_numeric MULTIPLY_E expression_numeric  */
#line 553 "DARIC.y"
                                                     { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6313 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 332: /* assignment: variable_numeric DIVIDE_E expression_numeric  */
#line 554 "DARIC.y"
                                                   { (yyval.ast) = assignment((yyvsp[-2].ast), token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6319 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 333: /* assignment: variable_numeric INTEGERDIVIDE_E expression_numeric  */
#line 555 "DARIC.y"
                                                          { (yyval.ast) = assignment((yyvsp[-2].ast), token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6325 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 334: /* expression_print: expression_string  */
#line 559 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6331 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 335: /* expression_print: expression_numeric  */
#line 560 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6337 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 336: /* expression_print: ','  */
#line 561 "DARIC.y"
          { (yyval.ast) = token(COMMA); }
#line 6343 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 337: /* expression_print: TILDE  */
#line 562 "DARIC.y"
            { (yyval.ast) = token(TILDE); }
#line 6349 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 338: /* expression_print: TICK  */
#line 563 "DARIC.y"
           { (yyval.ast) = token(TICK); }
#line 6355 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 339: /* expression_print: SPC '(' expression_numeric ')'  */
#line 564 "DARIC.y"
                                     { (yyval.ast) = token1(SPC, (yyvsp[-1].ast)); }
#line 6361 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 340: /* expression_print: SEMICOLON  */
#line 565 "DARIC.y"
                { (yyval.ast) = token(SEMICOLON); }
#line 6367 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 341: /* expression_print_list: expression_print  */
#line 569 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6373 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 342: /* expression_print_list: expression_print expression_print_list  */
#line 570 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6379 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 344: /* expression_input_list: expression_input  */
#line 578 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6385 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 345: /* expression_input_list: expression_input ',' expression_input_list  */
#line 579 "DARIC.y"
                                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6391 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 346: /* proc_parameter: %empty  */
#line 583 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6397 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 347: /* proc_parameter: variable  */
#line 584 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6403 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 348: /* proc_parameter: RETURN variable  */
#line 585 "DARIC.y"
                      { (yyval.ast) = token1(RETURN_PARAMETER, (yyvsp[0].ast)); }
#line 6409 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 349: /* proc_parameter_list: proc_parameter  */
#line 589 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 6415 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 350: /* proc_parameter_list: proc_parameter ',' proc_parameter_list  */
#line 590 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6421 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 351: /* fn_parameter: %empty  */
#line 594 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6427 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 352: /* fn_parameter: variable  */
#line 595 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6433 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 353: /* fn_parameter_list: fn_parameter  */
#line 599 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6439 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 354: /* fn_parameter_list: fn_parameter ',' fn_parameter_list  */
#line 600 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6445 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 355: /* when: WHEN expression_list statements NL  */
#line 604 "DARIC.y"
                                         { (yyval.ast) = token2(WHEN, (yyvsp[-2].ast), (yyvsp[-1].ast)); }
#line 6451 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 356: /* when_list: when  */
#line 608 "DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 6457 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 357: /* when_list: when when_list  */
#line 609 "DARIC.y"
                     { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6463 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 358: /* define_function: DEFPROC '(' proc_parameter_list ')' NL embed_lines ENDPROC  */
#line 612 "DARIC.y"
                                                                 { (yyval.ast) = token3typed(DEFPROC, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::NOTYPE); }
#line 6469 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 359: /* define_function: DEFFN_INTEGER '(' fn_parameter_list ')' NL embed_lines ENDFN  */
#line 613 "DARIC.y"
                                                                   { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::INTEGER); }
#line 6475 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 360: /* define_function: DEFFN_REAL '(' fn_parameter_list ')' NL embed_lines ENDFN  */
#line 614 "DARIC.y"
                                                                { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::REAL); }
#line 6481 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 361: /* define_function: DEFFN_STRING '(' fn_parameter_list ')' NL embed_lines ENDFN  */
#line 615 "DARIC.y"
                                                                  { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::STRING); }
#line 6487 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;


#line 6491 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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

#line 618 "DARIC.y"


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
    if (yyfileno == 0 && interactive) {
        stream << "Parsing error: " << e << " at line " << yylineno;    
    } else {
        stream << "Parsing error: " << e << " at line " << yylineno << " of file '" << file << "'";
    }
    error_list.push_back(stream.str());
    status = 0;
}
