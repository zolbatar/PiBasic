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
#define YYFINAL  301
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10636

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  245
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  359
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1029

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
       0,    97,    97,   101,   102,   106,   107,   108,   112,   113,
     117,   118,   119,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   144,   145,   147,   148,   149,   150,   151,
     152,   154,   156,   157,   159,   160,   161,   162,   164,   165,
     166,   167,   169,   170,   171,   172,   174,   175,   176,   177,
     179,   180,   181,   183,   184,   185,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   219,   220,   222,   223,   225,   226,
     229,   232,   233,   234,   235,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   257,   258,   259,   260,   261,   262,   263,
     267,   268,   269,   270,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     301,   302,   304,   305,   306,   308,   310,   311,   313,   314,
     315,   317,   318,   319,   320,   322,   323,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   377,   378,   379,   380,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   399,   400,   401,   402,   403,   407,
     408,   409,   410,   411,   415,   416,   417,   418,   419,   423,
     424,   428,   429,   430,   431,   435,   436,   440,   441,   445,
     446,   447,   451,   452,   456,   457,   458,   459,   460,   461,
     462,   466,   467,   471,   472,   476,   480,   484,   485,   489,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   503,
     505,   507,   508,   510,   511,   512,   513,   514,   515,   516,
     517,   521,   522,   526,   527,   528,   532,   533,   534,   535,
     539,   540,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   557,   558,   559,   560,   561,   562,   563,   567,
     568,   572,   576,   577,   581,   582,   583,   587,   588,   592,
     593,   597,   598,   602,   606,   607,   610,   611,   612,   613
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

#define YYPACT_NINF (-302)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-38)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1701,  7283,  -229,  -194,  -190,     0,  -179,  -168,  -162,  -152,
    -138,  -108,  -102,   -91,  -302,   164,   183,  2682,  3771,  3771,
    3771,  3771,  2682,    60,   178,   194,  2682,     9,  2682,  2682,
     232,  -302,   315,   350,    70,   179,  -302,  -302,  -302,  -302,
     517,   517,   387,  -302,  3771,  3771,  -302,  2919,  3771,  3771,
    3132,  3345,  3771,  -302,  3558,  3771,  3771,  3771,  -302,   -55,
     -44,   166,  2442,  -302,  -302,   199,   210,   216,  3771,  3771,
    3771,  -302,  3771,   235,  -302,  1701,   225,   231,  -302,  -302,
     623,   221,    87,  -302,    12,  -302,  -302,  -302,  -302,  3771,
    3771,  1988,  -302,  -302,  3771,   100,   232,   232,   232,  2682,
    2682,  2682,  2682,  -302,    18,    26,    37,  -302,  -302,  -302,
      24,     4,    39,    61,    64,   295,  3771,  3771,    65,    75,
      76,  3771,  3771,    83,    84,  -302,  -302,    88,    89,   122,
     126,   156,   160,   162,   186,   189,   192,   196,   202,   211,
     213,   214,   224,   234,  -302,  -302,  -302,   241,   242,   247,
     253,   259,   260,   282,   -16,   291,  -302,  -302,  3771,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,   293,  -302,   296,
     517,  3771,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,   304,   305,  -302,  -302,   245,  3771,  -302,  -302,
    -302,  3771,  -302, 10468,  -302,  -302,  -302,  -302,   593,  -302,
      33, 10468,  1983, 10468, 10490,   203,    19,    41,   208,   411,
    -302,  -302,  5835,  1701,  2682,   266,    44,  -302,  -302,  -302,
      56,  -302,   309,   310,   311,   313,    71,  -302,   349,  -302,
     320,   315,  -302,   316,   321,   593,   112,  -302,  -302,  -302,
     155,  -302,  2914,  5752,  3771,  5933,  6114,  6295,  3771,  6476,
    3771,  3771,  6657,  6838,  3771,  7019,  7200,  7381,  8339,  3771,
    3771,    38,  -302,   165,  -302,  -302,  -302,  -302,   326,  -302,
   10468,   593,  2442,  -302,   226,   327,   328,  8352,  8374,  8414,
   10468,  -302,  -302,  -302,  7283,  3771,  3771,  3771,  3771,  3771,
    3771,  3771,  3771,   517,  2682,   397,   350,    92,   184,   417,
     486,  1155,   232,  -302,   233,   209,  -302,   240,   284,   314,
     329,   330,   332,   333,   335,   565,   573,   579,  3771,  3771,
    2682,  2682,  2682,  -302,  -302,  -302,  -302, 10468, 10468,   517,
     517,   517, 10468, 10468,   443,  3771,  3771,  3771,  3771,  3771,
    3771,  3771,  3771,  3771,  3771,  3771,  3771,  3771,  3771,  3771,
    3771,  3771,   517,   517,  3771,   517,   517,   517,   517,   517,
     351,  3771,  3771,  -302,  3771,  3771,   593,  8444,  3771,  3771,
     353,  8479,  1282,  3771,  3771,  3771,  3771,  3771,  3771,  3771,
    3771,  3771,  3771,  3771,  3771,  3771,  3771,  3771,  3771,  3771,
    3771,   517,   517,   517,   517,   517,   517,   517,  3771,  3771,
    3771,   577,  3771,   590,  3771,   592,   600,    42,    46,   514,
    1701,  6016,  -302,    15,  1701,   527,  -302,  1701,  2682,   232,
    3771,  3771,  3771,  3771,   315,  2201,  -302,   518,  3771,   387,
     387,  3771,  3771,  8505,  3771,  3771,  3771,  8518,  3771,  8545,
    8572,  3771,  3771,  8610,  3771,  3771,  3771,  3771,  1580,  1922,
     232,  -302,   232,  3771,  -302,   608,  3771,  3771,  3771,  3771,
    3771,  -302, 10468, 10468, 10468, 10468, 10468, 10468, 10468, 10468,
     593,  -302,  2682,  -302,  3771,  -302,  3771,  -302,   554,  3771,
    -302,   465,  -302,   100,   607,   232,   609,   627,   629,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,  4104,   406,   410,   412,
     154,   170,   198,   415,   416,   426,  4170,  4339,  4405,  4574,
    4640,  4809,  4875,  5044,  5110,  5279,  5345,  5514,  5580,  7558,
    7624,  7682,  7695,   239,   285,  7717,   130,   519,   535,   560,
     385,  3771,  7730,  8645,  8671,  8709,  3771,  7752,  7787,   660,
    3771,  -302,   103,   136,   136,   136,   136,  -302,  -302,   136,
     136,   249,   249,   103,   103,   103,   103,  1303,  1629,  1629,
     639,   639,   639,   639,   639,   639,  -302,  7822, 10468,   807,
     587, 10329,   430, 10364,   431,   432,  3771,   669,  3771,   672,
     673,    43,  1701,   612,  7464,  -302,  2682,   614,  -302,  -302,
     610,   995,  1015,  8738,  -302,   663,   232,   670,   595,  7857,
    -302,  -302,  8773,  8802,  3771, 10468,  8837, 10468,  3771,  8865,
    3771,  3771,  8901,  8929,  3771,  8964,  8993,  9028,  9057,  -302,
    -302,  -302,  -302,  7878,   446,  7917,  7952,  9092,  9121, 10468,
    -302,  7981,  8011,   448,  8024,  -302,  -302,  -302,  -302,  1701,
    -302,  1701,  1701,  1701,   465,  -302,  -302,  -302,  -302,  -302,
    -302,   449,   450,   452,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,   517,  3771,  3771,  3771,  -302,  8046,
    -302,   517,  3771,  3771, 10468,  -302,  -302,  -302,  9156,   138,
    2682,   587,    13,  3771,   454,  3771,   455,   456, 10428,   458,
   10455,   459,   460,   685,  -302,   163,  7283,  -302,  -302,  -302,
    3771,  -302,  3771,  -302,  3771,  -302,   684,   638,  -302,   518,
    -302,   698,  3771,  3771, 10468,  3771,  9184,  3771,  9197,  9220,
    3771,  3771,  9248,  3771,  3771,  3771,  3771,  -302,   701,   467,
     468,  3771,  3771,  -302,  -302,   517,  -302,   661,   664,   666,
     668,   477,   478,   479,    31,  8082,  9288,  8117,  -302,   439,
    9323,  8152,  3771,  7283,  -302,  -302,  7464,  4009,  6197,  4244,
    6378,  6559,  3771,   482,  3771,   487,   497,  1701,   726,  -302,
    -302,  8174,  8187,  8209,   502,   504,  -302, 10468, 10468,  9347,
    3771,  9382,  3771,  3771,  9422,  9447,  3771, 10468,  9473,  9486,
    9513,  -302,  3771,  3771,  9548,  9578,   462,  -302,  -302,  -302,
    -302,    97,    97,    97,  3771,  -302,  -302,  3771,  -302,  -302,
    3771,  -302,  9613,   729,   730,  1701,  3771,   674,  1701,   675,
    1701,  3771,   676,  1701,   680,  1701,   681,  4479,  6740,  4714,
    6921,  7102,   679,  1701,  -302,  -302,  -302,  -302,   517,  3771,
    9648,  3771,  9672,  9712,  3771,  3771, 10468,   517,   517,   517,
    9739,  9774,  3771,  3771,  -302,    55,   515,   516,   521,  8246,
    8281,  8311,  3771,  -302,   692,   686,  4949,  -302,   689,  -302,
     690,  5184,  -302,   691,  -302,   693,  -302,  1701,  3771,   694,
    1701,   695,  1701,  3771,   696,  1701,   702,  1701,   703,  -302,
     704,   474, 10468,  3771, 10468,  3771,  3771,  9803, 10468,   593,
     593,   593,  3771,  3771, 10468, 10468,  -302,  -302,  -302,  -302,
    -302,  -302,  9838,  -302,  -302,  1701,   705,  -302,  -302,  1701,
     706,  -302,  -302,   709,  5419,  -302,   710,  -302,   712,  5654,
    -302,   713,  -302,   714,  -302,  -302,  -302, 10468,  9873,  9898,
    3771,  9911,  9937,  3771,   716,  -302,   719,  -302,  -302,  1701,
     720,  -302,  -302,  1701,   722,  -302,  -302,  3771,  3771,  9964,
    3771,  3771, 10004,  -302,  -302,   723,  -302,   724,  -302, 10039,
   10063,  3771, 10098, 10138,  3771,  -302,  -302,  3771,  3771, 10468,
    3771,  3771, 10163, 10468, 10189, 10468, 10468,  3771,  3771, 10202,
   10229,  3771,  3771, 10264, 10294,  3771,  3771, 10468, 10468
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   249,   254,   261,   283,     0,     0,     0,     0,
      20,     0,     0,     0,     7,     0,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   313,
       0,    27,     0,     0,     0,     0,    19,    30,    31,    32,
       0,     0,     0,   105,     0,     0,   114,   112,     0,     0,
       0,     0,     0,   125,     0,     0,     0,     0,   129,     0,
       0,     0,    96,    50,    51,     0,     0,     0,     0,     0,
       0,    98,     0,     0,     2,     3,     0,    10,   259,   260,
       0,     0,     0,    15,   320,   322,    13,    14,    11,     0,
       0,     0,   252,   257,     0,   344,   349,   349,   349,   313,
     313,   313,   313,     6,     0,     0,     0,   130,   132,   289,
     261,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,   225,   226,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   228,   169,   168,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   170,   303,     0,   177,
     178,   179,   180,   181,   182,   183,   184,     0,   173,     0,
       0,     0,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   188,
     189,   185,     0,     0,   166,   301,     0,     0,   171,   172,
     174,     0,   134,   311,   135,   136,   291,   290,   312,    29,
       0,    36,     0,    38,     0,     0,     0,     0,     0,     0,
      42,    43,     0,     0,     0,     0,   314,    25,   265,   266,
     267,    26,     0,     0,     0,     0,   281,    33,     0,   324,
     261,     0,   323,     0,     0,    41,    16,   269,   270,   271,
     272,    18,   106,   108,   113,     0,     0,     0,     0,     0,
       0,   173,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   341,   342,    44,   338,   335,   336,     0,   334,
     333,   332,   339,    97,     0,     0,     0,     0,     0,     0,
     104,     1,     4,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   345,   347,     0,   350,   351,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     313,   313,   313,   131,   133,   140,   141,   220,   219,     0,
       0,     0,   165,   299,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   229,     0,     0,   190,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    10,     8,     0,    61,     0,   313,     0,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,   340,     0,     0,     0,     0,     0,
       0,    12,   316,   325,   326,   327,   328,   329,   330,   331,
     317,   318,     0,   321,     0,   250,     0,   255,     0,     0,
     262,   284,   346,   344,     0,   349,     0,     0,     0,    21,
      22,    23,    24,    63,    64,    65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   137,   146,   151,   154,   153,   152,   149,   150,   155,
     156,   142,   143,   144,   145,   147,   148,   157,   158,   159,
     293,   296,   295,   294,   297,   298,   292,     0,    35,   151,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,     0,     9,     0,     0,   315,   268,
       0,     0,     0,     0,   282,     0,     0,     0,     0,     0,
      17,   273,     0,     0,     0,   110,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,    46,   343,     0,     0,     0,     0,     0,     0,   103,
     319,     0,     0,     0,     0,   253,   258,   264,   348,     0,
     352,     0,     0,     0,     0,   160,   161,   300,   221,   223,
     222,     0,     0,     0,   227,   138,   139,   239,   230,   231,
     232,   233,   234,   235,   236,   237,   240,   238,   241,   242,
     243,   248,   244,   307,     0,     0,     0,     0,   245,     0,
     304,     0,     0,     0,   191,   167,   302,   175,     0,     0,
     313,   354,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,     0,     0,    53,    60,    62,
       0,   274,     0,   276,     0,   278,     0,     0,   286,   287,
     285,     0,     0,     0,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   337,     0,     0,
       0,     0,     0,   251,   256,     0,   263,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   305,     0,
       0,     0,     0,     0,   355,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
      57,     0,     0,     0,     0,     0,   288,   107,   109,     0,
       0,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,    47,     0,     0,     0,     0,     0,   356,   357,   359,
     358,     0,     0,     0,     0,   246,   308,     0,   310,   306,
       0,   187,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   275,   277,   279,   280,     0,     0,
       0,     0,     0,     0,     0,     0,   116,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,     0,     0,
       0,     0,     0,   353,     0,     0,     0,    80,     0,    70,
       0,     0,    81,     0,    69,     0,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,     0,   117,     0,   118,     0,     0,     0,   124,   126,
     127,   128,     0,     0,   101,   102,   163,   162,   164,   247,
     309,   186,     0,    95,    78,     0,     0,    67,    79,     0,
       0,    66,    68,     0,     0,    88,     0,    76,     0,     0,
      89,     0,    75,     0,    77,    59,    40,   119,     0,     0,
       0,     0,     0,     0,     0,    84,     0,    85,    86,     0,
       0,    73,    87,     0,     0,    72,    74,     0,     0,     0,
       0,     0,     0,    82,    83,     0,    92,     0,    93,     0,
       0,     0,     0,     0,     0,    90,    91,     0,     0,   120,
       0,     0,     0,   121,     0,    99,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   176,   122
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -302,  -302,   728,    25,   495,   176,  -211,  -301,   -18,   507,
     784,    52,  1179,    -8,   339,  -302,  -283,  -302,  -241,  -302,
    -302,  -302,    30,  -302,  1210,   -13,   -83,  -302,   -10,  -302,
    -302,   489,  -302,  -239,  -302,   303,  -302,   -92,  -302,    96,
    -302
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    73,    74,   434,   435,    76,    77,   212,   213,   214,
     215,    80,    81,   282,   241,   260,   261,   246,   247,    82,
      83,   617,   618,   217,   218,   236,   237,    84,    85,    86,
     292,   293,   283,   284,   324,   325,   327,   328,   711,   712,
      87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     221,   222,   223,   224,   219,   329,   330,    92,    93,   225,
     446,    92,    93,   232,    89,   235,   331,   332,   333,   334,
     380,   433,   240,   249,   252,    75,   262,   263,   233,   265,
     266,   267,   269,   272,   273,   304,   275,   276,   277,   278,
      92,    93,   471,   422,   290,     2,     3,   110,   111,    90,
     297,   298,   299,    91,   300,   411,   412,   413,   414,   343,
     344,   415,   416,   417,    95,   424,   596,   226,   227,   228,
     598,   317,   318,   320,   315,    96,   321,     2,     3,   250,
       5,    97,   238,   785,   604,   248,   248,   323,   326,   326,
     326,    98,   786,   234,     2,     3,   110,   111,   347,   348,
      75,   107,   108,   352,   353,    99,   423,     2,     3,   110,
     111,   314,   723,   238,   724,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   425,   597,
     885,   398,   399,   599,   238,   100,   411,   412,   413,   414,
     383,   101,   415,   416,   417,   655,   656,   238,   238,   238,
     238,   322,   102,   387,   411,   412,   413,   414,   229,   393,
     415,   416,   417,   251,   398,   399,   620,   621,   402,   403,
     404,   405,   281,     2,     3,   110,   111,    88,   411,   412,
     413,   414,   230,   103,   415,   416,   417,   253,   279,   391,
     104,   105,   106,   392,   411,   412,   413,   414,   231,   280,
     415,   416,   417,   614,   406,   407,   294,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     295,   436,   411,   412,   413,   414,   296,   381,   415,   416,
     417,   641,   798,   642,   799,   301,   408,   409,   410,     2,
       3,   110,   111,    94,   303,   313,   453,   339,   406,   407,
     457,   304,   459,   460,   316,   390,   463,   517,   518,   519,
     335,   468,   469,   411,   412,   413,   414,   338,   336,   415,
     416,   417,   393,   834,   290,   835,   418,   398,   399,   337,
     470,   421,   340,   404,   405,   437,   438,   482,   483,   484,
     485,   486,   487,   488,   489,   426,   406,   407,   439,   343,
     344,   491,     2,     3,   341,   220,   493,   342,   349,   411,
     412,   413,   414,   444,   502,   415,   416,   417,   350,   351,
     320,   516,   242,   243,   244,   245,   354,   355,   408,   409,
     410,   356,   357,   238,   494,   447,   495,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   449,   608,   545,     2,     3,   110,
       5,   406,   407,   552,   553,   358,   554,   555,   248,   359,
     557,   558,   694,   305,   238,   562,   563,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   727,   257,   258,   259,   450,   668,   360,
     587,   588,   589,   361,   591,   362,   593,   472,   432,   411,
     412,   413,   414,   660,   669,   415,   416,   417,   427,   428,
     429,   492,   610,   611,   612,   613,   496,   320,   497,   363,
     619,   240,   364,   622,   623,   365,   625,   626,   627,   366,
     629,   498,   670,   632,   633,   367,   635,   636,   637,   638,
     523,   524,   525,   504,   368,   643,   369,   370,   645,   646,
     647,   648,   649,   411,   412,   413,   414,   371,   475,   415,
     416,   417,   655,   656,   657,   503,   651,   372,   652,   650,
     481,   654,   505,   691,   373,   374,   411,   412,   413,   414,
     375,   238,   415,   416,   417,   323,   376,   326,   411,   412,
     413,   414,   377,   378,   415,   416,   417,    78,    78,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   238,   109,   238,   379,   110,   254,   506,   692,
     886,   887,   888,   699,   382,   114,   384,    78,   704,   385,
      78,    78,   708,   411,   412,   413,   414,   388,   389,   415,
     416,   417,   440,   441,   442,   238,   443,   238,   507,   411,
     412,   413,   414,   445,   448,   415,   416,   417,    78,   473,
     476,   477,   513,   508,   509,   844,   510,   511,   718,   512,
     720,   514,    78,   122,   411,   412,   413,   414,   515,    78,
     415,   416,   417,   728,   551,   559,   590,   592,   406,   407,
     594,   600,    78,    78,    78,    78,   744,   603,   738,   595,
     746,   606,   748,   749,   616,   644,   752,   411,   412,   413,
     414,   653,   345,   415,   416,   417,   659,   783,   661,   698,
     408,   409,   410,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   662,   305,   663,   148,
     665,   150,   151,   152,   666,   154,   667,   155,   671,   672,
     157,   306,   307,   308,   309,   310,   311,   312,   238,   673,
     707,   417,   710,   714,   716,   717,   719,   775,   776,   777,
     721,   726,   722,   839,   780,   781,   729,   737,   758,   739,
     740,   765,   804,   771,   772,   787,   773,   789,   788,   790,
     791,   793,   795,   796,   797,   805,   884,   657,   821,   822,
     823,   827,   801,   828,   802,   829,   803,   830,   966,   831,
     832,   833,   406,   407,   807,   808,   858,   809,   499,   811,
     500,   860,   814,   815,   203,   817,   818,   819,   820,    78,
      78,   861,   205,   824,   825,   863,   867,   868,   893,   894,
     919,   897,   899,   902,   408,   409,   410,   904,   906,   936,
     937,   695,   943,   944,   842,   938,   947,   948,   951,   806,
     952,   955,   957,   960,   857,   965,   859,   696,   609,   962,
     964,   474,   975,   977,    79,    79,   978,   981,    78,   982,
     985,   986,   870,   993,   872,   873,   994,   996,   876,   998,
    1005,  1006,   697,   302,   880,   881,   658,   784,     0,     0,
       0,    78,     0,     0,    79,     0,   889,    79,    79,   890,
       0,     0,   891,    78,     0,     0,   -37,   -37,   896,    78,
     393,     0,     0,   901,     0,   398,   399,     0,     0,   402,
     403,   404,   405,     0,     0,    79,     0,     0,     0,     0,
       0,   922,   730,   924,   731,     0,   927,   928,     0,    79,
       0,     0,     0,     0,   934,   935,    79,     0,     0,     0,
       0,     0,     0,     0,   942,     0,   -37,     0,     0,    79,
      79,    79,    79,     0,   -37,     0,     0,     0,     0,     0,
     954,     0,     0,     0,     0,   959,     0,     0,     0,   346,
       0,     0,   800,     0,     0,   967,     0,   968,   969,     0,
       0,     0,     0,     0,   971,   972,     0,     0,     0,   406,
     407,     0,     0,     0,     0,   601,     0,     0,     0,   605,
       0,     0,   607,     0,     0,     0,     0,    78,    78,     0,
       0,    78,     0,     0,    78,     0,    78,     0,     0,     0,
       0,     0,   989,     0,     0,   992,     0,     0,     0,   843,
       0,     0,     0,   847,   849,   852,   854,   856,     0,   999,
    1000,     0,  1002,  1003,     0,     0,     0,    78,     0,    78,
       0,     0,     0,  1009,     0,     0,  1012,     0,     0,  1013,
    1014,     0,  1015,  1016,     0,     0,     0,     0,     0,  1019,
    1020,     0,     0,  1023,  1024,     0,     0,  1027,  1028,     0,
      78,     0,    78,     0,     0,     0,    79,    79,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,     0,     0,   909,   911,   914,   916,   918,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,   946,     0,     0,     0,     0,   950,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,     0,     0,     0,   725,     0,     0,
      79,     0,     0,     0,     0,     0,    79,   406,   407,    78,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,   406,   407,     0,
     980,     0,     0,     0,     0,   984,     0,     0,     0,   408,
     409,   410,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   767,     0,   768,   769,   770,   408,
     409,   410,     0,     0,     0,     0,    78,     0,    78,    78,
      78,     0,     0,     0,     0,     0,     0,     0,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,     0,     0,     0,     0,     0,   216,     0,     0,     0,
       0,   216,     0,     0,     0,   216,     0,   216,   216,   239,
       0,     0,     0,     0,    79,    79,     0,     0,    79,   216,
     216,    79,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,   732,     0,   733,
     239,   216,     0,     0,     0,     0,     0,     0,     0,     0,
     255,   256,     0,     0,    79,     0,    79,   734,     0,   735,
       0,   239,     0,     0,     0,     0,     0,   406,   407,     0,
       0,     0,   291,     0,   239,   239,   239,   239,   216,   216,
     216,   216,     0,     0,     0,     0,     0,    79,     0,    79,
      78,     0,   862,    78,    78,    78,    78,    78,    78,   408,
     409,   410,     0,     0,    78,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
       0,     0,     0,     0,     0,     0,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,     0,
     895,     0,     0,   898,     0,   900,     0,     0,   903,   216,
     905,     0,    78,     0,     0,    78,     0,    78,   920,     0,
      78,     0,    78,     0,    78,    78,    78,    78,    78,     0,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     386,     0,     0,     0,     0,     0,    79,     0,    79,     0,
       0,     0,     0,     0,   406,   407,     0,     0,     0,   501,
      79,     0,   953,    78,     0,   956,     0,   958,    78,     0,
     961,     0,   963,   216,    78,   406,   407,    78,     0,    78,
       0,     0,    78,     0,    78,     0,   408,   409,   410,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     974,     0,     0,    79,   976,    79,    79,    79,     0,     0,
       0,     0,    78,     0,     0,     0,    78,     0,     0,     0,
     239,    78,     0,     0,     0,     0,    78,     0,     0,     0,
       0,   216,     0,     0,   995,     0,     0,     0,   997,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
      78,     0,   216,   216,     0,     0,     0,     0,     0,     0,
       0,   239,   291,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,     0,     0,   216,
     216,   216,     0,   490,     0,     0,   561,     0,   216,   216,
     216,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   216,   216,     0,   216,   216,   216,   216,   216,   520,
     521,   522,     0,     0,     0,     0,     0,    79,     0,     0,
      79,    79,    79,    79,    79,    79,     0,     0,     0,     0,
       0,    79,   543,   544,     0,   546,   547,   548,   549,   550,
     216,   216,   216,   216,   216,   216,   216,     0,     0,     0,
       0,     0,     0,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,     0,   216,   239,     0,
       0,   580,   581,   582,   583,   584,   585,   586,     0,    79,
       0,     0,    79,     0,    79,     0,     0,    79,     0,    79,
       0,    79,    79,    79,    79,    79,     0,    79,     0,   239,
       0,   239,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,     0,     0,     0,
       0,   216,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,   239,     0,   239,    79,     0,     0,     0,     0,
       0,    79,   406,   407,    79,     0,    79,     0,     0,    79,
       0,    79,     0,     0,     1,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,   408,   409,   410,     0,     0,    79,
       0,     0,     0,    79,     0,     0,     0,     0,    79,     0,
       0,   406,   407,    79,     0,     0,    16,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,    18,    19,
      20,     0,     0,    79,     0,    21,     0,    79,     0,    22,
       0,     0,     0,   408,    23,    24,    25,    26,     0,     0,
       0,    27,     0,     0,     0,   216,     0,    28,     0,     0,
      29,    30,    31,     0,    32,   239,     0,     0,    33,    34,
      35,    36,    37,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   639,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    40,     0,     0,     0,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,     0,    46,    47,     0,     0,     0,    48,
      49,     0,    50,   216,    51,     0,     0,    52,    53,    54,
     216,    55,    56,    57,     0,     0,     0,     0,     0,   216,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   774,     0,     0,     0,     0,     0,
       0,   779,     0,     0,     0,    58,     0,    59,    60,    61,
      62,     0,     0,     0,     0,    63,    64,     0,     0,    65,
      66,    67,     0,     0,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,   216,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   826,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,   108,     0,     2,     3,     0,   220,     0,
       0,     0,     0,     0,   112,   113,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,     0,
       0,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   406,   407,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,     0,   216,   117,   118,
     119,   120,   121,     0,     0,     0,   216,   216,   216,     0,
       0,     0,     0,     0,     0,     0,   408,   409,   410,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   921,     0,
       0,   123,     0,     0,     0,     0,     0,   929,   930,   931,
       0,     0,   124,   125,   126,   406,   407,   127,   128,   129,
       0,     0,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,   149,     0,     0,     0,   153,     0,   408,   409,   410,
     156,     0,     0,     0,     0,   158,     0,     0,   159,   160,
     161,   162,   163,   164,   165,   166,     0,     0,   167,     0,
       0,     0,     0,     0,     0,   168,     0,     0,   169,     0,
       0,     0,     0,     0,     0,     0,   640,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,     0,   201,   202,   107,   108,     0,     2,     3,
       0,   220,   204,     0,     0,     0,     0,   112,   113,   206,
     207,     0,     0,     0,     0,   419,   208,   209,   210,     0,
       0,   211,   319,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   116,     0,
       0,   117,   118,   119,   120,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,   125,   126,     0,     0,
     127,   128,   129,     0,     0,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,     0,   149,     0,     0,     0,   153,     0,
       0,     0,     0,   156,     0,     0,     0,     0,   158,     0,
       0,   159,   160,   161,   162,   163,   164,   165,   166,     0,
       0,   167,     0,     0,     0,     0,     0,     0,   168,     0,
       0,   169,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,     0,   201,   202,     0,     0,
       0,     0,     0,     0,     0,   204,     0,     0,     0,     0,
       0,     0,   206,   207,     0,     0,     0,     0,     0,   208,
     209,   210,     0,     0,   211,   615,   107,   108,   109,     2,
       3,   110,   111,     0,     0,     0,     0,     0,   112,   113,
     114,     0,     0,   285,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   115,     0,     0,   286,   287,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,   117,   118,   119,   120,   121,     0,   122,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,   125,   126,     0,
       0,   127,   128,   129,     0,     0,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,     0,   155,     0,   156,   157,     0,     0,     0,   158,
       0,     0,   159,   160,   161,   162,   163,   164,   165,   166,
       0,     0,   167,     0,     0,     0,     0,     0,     0,   168,
       0,     0,   169,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,     0,   201,   202,   203,
       0,     0,   288,     0,     0,     0,   204,   205,     0,     0,
       0,     0,     0,   206,   207,     0,     0,     0,     0,     0,
     208,   209,   210,     0,   289,   211,   107,   108,   109,     2,
       3,   110,   111,     0,     0,     0,     0,     0,   112,   113,
     114,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,   117,   118,   119,   120,   121,     0,   122,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,   125,   126,     0,
       0,   127,   128,   129,     0,     0,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,     0,   155,     0,   156,   157,     0,     0,     0,   158,
       0,     0,   159,   160,   161,   162,   163,   164,   165,   166,
       0,     0,   167,     0,     0,     0,     0,     0,     0,   168,
       0,     0,   169,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,     0,   201,   202,   203,
       0,     0,     0,     0,     0,     0,   204,   205,     0,     0,
       0,     0,     0,   206,   207,     0,     0,     0,     0,     0,
     208,   209,   210,   107,   108,   211,     2,     3,     0,   220,
       0,     0,     0,     0,     0,   112,   113,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,   115,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   116,     0,     0,   117,
     118,   119,   120,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,   125,   126,   406,   407,   127,   128,
     129,     0,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,     0,   149,     0,     0,     0,   153,     0,   408,   409,
     410,   156,     0,     0,     0,     0,   158,     0,     0,   159,
     160,   161,   162,   163,   164,   165,   166,     0,     0,   167,
       0,     0,     0,     0,   264,     0,   168,     0,     0,   169,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,     0,   201,   202,   107,   108,     0,     2,
       3,     0,   220,   204,     0,     0,     0,     0,   112,   113,
     206,   207,     0,     0,     0,     0,   451,   208,   209,   210,
       0,     0,   211,     0,     0,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,   117,   118,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,   125,   126,     0,
       0,   127,   128,   129,     0,     0,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,   149,     0,     0,     0,   153,
       0,     0,     0,     0,   156,     0,     0,     0,     0,   158,
       0,     0,   159,   160,   161,   162,   163,   164,   165,   166,
       0,     0,   167,     0,     0,     0,     0,     0,   268,   168,
       0,     0,   169,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,     0,   201,   202,   107,
     108,     0,     2,     3,     0,   220,   204,     0,     0,     0,
       0,   112,   113,   206,   207,     0,     0,     0,     0,     0,
     208,   209,   210,     0,     0,   211,     0,     0,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   116,     0,     0,   117,   118,   119,   120,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
     125,   126,     0,     0,   127,   128,   129,     0,     0,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,     0,   149,     0,
       0,     0,   153,     0,     0,     0,     0,   156,     0,     0,
       0,     0,   158,     0,     0,   159,   160,   161,   162,   163,
     164,   165,   166,     0,     0,   167,     0,     0,     0,     0,
       0,   270,   271,     0,     0,   169,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,     0,
     201,   202,   107,   108,     0,     2,     3,     0,   220,   204,
       0,     0,     0,     0,   112,   113,   206,   207,     0,     0,
       0,     0,     0,   208,   209,   210,     0,     0,   211,     0,
       0,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,     0,     0,   117,   118,
     119,   120,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,   125,   126,     0,     0,   127,   128,   129,
       0,     0,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,   149,     0,     0,     0,   153,     0,     0,     0,     0,
     156,     0,     0,     0,     0,   158,     0,     0,   159,   160,
     161,   162,   163,   164,   165,   166,     0,     0,   167,     0,
       0,     0,     0,     0,   274,   168,     0,     0,   169,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,     0,   201,   202,   107,   108,     0,     2,     3,
       0,   220,   204,     0,     0,     0,     0,   112,   113,   206,
     207,     0,     0,     0,     0,     0,   208,   209,   210,     0,
       0,   211,     0,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   116,     0,
       0,   117,   118,   119,   120,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,   125,   126,     0,     0,
     127,   128,   129,     0,     0,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,     0,   149,     0,     0,     0,   153,     0,
       0,     0,     0,   156,     0,     0,     0,     0,   158,     0,
       0,   159,   160,   161,   162,   163,   164,   165,   166,     0,
       0,   167,     0,     0,     0,     0,     0,     0,   168,     0,
       0,   169,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,     0,   201,   202,     0,     0,
       0,     0,     0,     0,     0,   204,     0,     0,     0,     0,
       0,     0,   206,   207,     0,     0,     0,     0,     0,   208,
     209,   210,     1,     0,   211,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   845,     0,
       0,     0,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,    18,    19,    20,     0,
       0,     0,     0,    21,     0,     0,     0,    22,     0,     0,
       0,     0,    23,    24,    25,    26,     0,     0,     0,    27,
     846,     0,     0,     0,     0,    28,     0,     0,    29,    30,
      31,     0,    32,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,   406,   407,     0,     0,     0,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,     0,     0,   408,   409,   410,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,     0,    46,    47,     0,     0,     0,    48,    49,     0,
      50,     0,    51,     0,     0,    52,    53,    54,     0,    55,
      56,    57,     0,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   406,   407,     0,     0,
       0,     0,     0,    58,     0,    59,    60,    61,    62,     0,
       0,     0,     0,    63,    64,     0,     0,    65,    66,    67,
       0,     0,    68,    69,    70,    71,    72,     1,   408,   409,
     410,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   850,     0,     0,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,   406,   407,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,    18,    19,    20,     0,     0,     0,     0,    21,     0,
       0,     0,    22,     0,   408,   409,   410,    23,    24,    25,
      26,     0,     0,     0,    27,   851,     0,     0,     0,     0,
      28,     0,     0,    29,    30,    31,     0,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,   664,     0,
       0,     0,     0,     0,     0,     0,   406,   407,     0,     0,
       0,     0,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,   408,   409,
     410,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,     0,    46,    47,     0,
       0,     0,    48,    49,   674,    50,     0,    51,     0,     0,
      52,    53,    54,     0,    55,    56,    57,     0,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   406,   407,     0,     0,     0,     0,     0,    58,     0,
      59,    60,    61,    62,     0,     0,     0,     0,    63,    64,
       0,     0,    65,    66,    67,     0,     0,    68,    69,    70,
      71,    72,     1,   408,   409,   410,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   907,     0,
       0,     0,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,   406,   407,     0,
       0,     0,     0,     0,    16,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,    18,    19,    20,     0,
       0,     0,     0,    21,     0,     0,     0,    22,     0,   408,
     409,   410,    23,    24,    25,    26,     0,     0,     0,    27,
     908,     0,     0,     0,     0,    28,     0,     0,    29,    30,
      31,     0,    32,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,   675,     0,     0,     0,     0,     0,     0,
       0,   406,   407,     0,     0,     0,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,     0,     0,   408,   409,   410,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,     0,    46,    47,     0,     0,     0,    48,    49,   676,
      50,     0,    51,     0,     0,    52,    53,    54,     0,    55,
      56,    57,     0,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   406,   407,     0,     0,
       0,     0,     0,    58,     0,    59,    60,    61,    62,     0,
       0,     0,     0,    63,    64,     0,     0,    65,    66,    67,
       0,     0,    68,    69,    70,    71,    72,     1,   408,   409,
     410,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   912,     0,     0,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,   406,   407,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,    18,    19,    20,     0,     0,     0,     0,    21,     0,
       0,     0,    22,     0,   408,   409,   410,    23,    24,    25,
      26,     0,     0,     0,    27,   913,     0,     0,     0,     0,
      28,     0,     0,    29,    30,    31,     0,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,   677,     0,
       0,     0,     0,     0,     0,     0,   406,   407,     0,     0,
       0,     0,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,   408,   409,
     410,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,     0,    46,    47,     0,
       0,     0,    48,    49,   678,    50,     0,    51,     0,     0,
      52,    53,    54,     0,    55,    56,    57,     0,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   406,   407,     0,     0,     0,     0,     0,    58,     0,
      59,    60,    61,    62,     0,     0,     0,     0,    63,    64,
       0,     0,    65,    66,    67,     0,     0,    68,    69,    70,
      71,    72,     1,   408,   409,   410,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   945,     0,
       0,     0,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,   406,   407,     0,
       0,     0,     0,     0,    16,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,    18,    19,    20,     0,
       0,     0,     0,    21,     0,     0,     0,    22,     0,   408,
     409,   410,    23,    24,    25,    26,     0,     0,     0,    27,
       0,     0,     0,     0,     0,    28,     0,     0,    29,    30,
      31,     0,    32,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,   679,     0,     0,     0,     0,     0,     0,
       0,   406,   407,     0,     0,     0,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,     0,     0,   408,   409,   410,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,     0,    46,    47,     0,     0,     0,    48,    49,   680,
      50,     0,    51,     0,     0,    52,    53,    54,     0,    55,
      56,    57,     0,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   406,   407,     0,     0,
       0,     0,     0,    58,     0,    59,    60,    61,    62,     0,
       0,     0,     0,    63,    64,     0,     0,    65,    66,    67,
       0,     0,    68,    69,    70,    71,    72,     1,   408,   409,
     410,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   949,     0,     0,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,   406,   407,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,    18,    19,    20,     0,     0,     0,     0,    21,     0,
       0,     0,    22,     0,   408,   409,   410,    23,    24,    25,
      26,     0,     0,     0,    27,     0,     0,     0,     0,     0,
      28,     0,     0,    29,    30,    31,     0,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,   681,     0,
       0,     0,     0,     0,     0,     0,   406,   407,     0,     0,
       0,     0,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,   408,   409,
     410,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,     0,    46,    47,     0,
       0,     0,    48,    49,   682,    50,     0,    51,     0,     0,
      52,    53,    54,     0,    55,    56,    57,     0,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   406,   407,     0,     0,     0,     0,     0,    58,     0,
      59,    60,    61,    62,     0,     0,     0,     0,    63,    64,
       0,     0,    65,    66,    67,     0,     0,    68,    69,    70,
      71,    72,     1,   408,   409,   410,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   979,     0,
       0,     0,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,   406,   407,     0,
       0,     0,     0,     0,    16,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,    18,    19,    20,     0,
       0,     0,     0,    21,     0,     0,     0,    22,     0,   408,
     409,   410,    23,    24,    25,    26,     0,     0,     0,    27,
       0,     0,     0,     0,     0,    28,     0,     0,    29,    30,
      31,     0,    32,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,   683,     0,     0,     0,     0,     0,     0,
       0,   406,   407,     0,     0,     0,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,     0,     0,   408,   409,   410,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,     0,    46,    47,     0,     0,     0,    48,    49,   684,
      50,     0,    51,     0,     0,    52,    53,    54,     0,    55,
      56,    57,     0,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   406,   407,     0,     0,
       0,     0,     0,    58,     0,    59,    60,    61,    62,     0,
       0,     0,     0,    63,    64,     0,     0,    65,    66,    67,
       0,     0,    68,    69,    70,    71,    72,     1,   408,   409,
     410,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   983,     0,     0,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,   406,   407,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,    18,    19,    20,     0,     0,     0,     0,    21,     0,
       0,     0,    22,     0,   408,   409,   410,    23,    24,    25,
      26,     0,     0,     0,    27,     0,     0,     0,     0,     0,
      28,     0,     0,    29,    30,    31,     0,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,   685,     0,
       0,     0,     0,     0,     0,     0,   406,   407,     0,     0,
       0,     0,     0,     0,     0,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,   408,   409,
     410,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,    45,     0,    46,    47,     0,
       0,     0,    48,    49,   686,    50,     0,    51,     0,     0,
      52,    53,    54,     0,    55,    56,    57,     0,     1,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   430,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   406,   407,     0,     0,    58,     0,
      59,    60,    61,    62,     0,     0,     0,     0,    63,    64,
      16,     0,    65,    66,    67,     0,    17,    68,    69,    70,
      71,    72,    18,    19,    20,     0,   408,   409,   410,    21,
       0,     0,     0,    22,     0,     0,     0,     0,    23,    24,
      25,    26,     0,     0,     0,    27,     0,   431,     0,     0,
       0,    28,     0,     0,    29,    30,    31,     0,    32,     0,
       0,     0,    33,    34,    35,    36,    37,    38,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,     0,
       0,     0,     0,     0,     0,     0,    40,     0,     0,     0,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,     0,    43,   452,    44,    45,     0,    46,    47,
       0,     0,     0,    48,    49,     0,    50,     0,    51,     0,
       0,    52,    53,    54,     0,    55,    56,    57,     0,     1,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   602,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   406,   407,     0,     0,    58,
       0,    59,    60,    61,    62,     0,     0,     0,     0,    63,
      64,    16,     0,    65,    66,    67,     0,    17,    68,    69,
      70,    71,    72,    18,    19,    20,     0,   408,   409,   410,
      21,     0,     0,     0,    22,     0,     0,     0,     0,    23,
      24,    25,    26,     0,     0,     0,    27,     0,     0,     0,
       0,     0,    28,     0,     0,    29,    30,    31,     0,    32,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,     0,    43,   454,    44,    45,     0,    46,
      47,     0,     0,     0,    48,    49,     0,    50,     0,    51,
       0,     0,    52,    53,    54,     0,    55,    56,    57,     0,
       1,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   848,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   406,   407,     0,     0,
      58,     0,    59,    60,    61,    62,     0,     0,     0,     0,
      63,    64,    16,     0,    65,    66,    67,     0,    17,    68,
      69,    70,    71,    72,    18,    19,    20,     0,   408,   409,
     410,    21,     0,     0,     0,    22,     0,     0,     0,     0,
      23,    24,    25,    26,     0,     0,     0,    27,     0,     0,
       0,     0,     0,    28,     0,     0,    29,    30,    31,     0,
      32,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,     0,     0,     0,     0,     0,     0,     0,    40,     0,
       0,     0,     0,     0,     0,    41,    42,     0,     0,     0,
       0,     0,     0,     0,     0,    43,   455,    44,    45,     0,
      46,    47,     0,     0,     0,    48,    49,     0,    50,     0,
      51,     0,     0,    52,    53,    54,     0,    55,    56,    57,
       0,     1,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   853,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   406,   407,     0,
       0,    58,     0,    59,    60,    61,    62,     0,     0,     0,
       0,    63,    64,    16,     0,    65,    66,    67,     0,    17,
      68,    69,    70,    71,    72,    18,    19,    20,     0,   408,
     409,   410,    21,     0,     0,     0,    22,     0,     0,     0,
       0,    23,    24,    25,    26,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     0,     0,    29,    30,    31,
       0,    32,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,     0,     0,     0,     0,     0,     0,     0,    40,
       0,     0,     0,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,     0,    43,   456,    44,    45,
       0,    46,    47,     0,     0,     0,    48,    49,     0,    50,
       0,    51,     0,     0,    52,    53,    54,     0,    55,    56,
      57,     0,     1,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   855,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   406,   407,
       0,     0,    58,     0,    59,    60,    61,    62,     0,     0,
       0,     0,    63,    64,    16,     0,    65,    66,    67,     0,
      17,    68,    69,    70,    71,    72,    18,    19,    20,     0,
     408,   409,   410,    21,     0,     0,     0,    22,     0,     0,
       0,     0,    23,    24,    25,    26,     0,     0,     0,    27,
       0,     0,     0,     0,     0,    28,     0,     0,    29,    30,
      31,     0,    32,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,     0,     0,     0,     0,     0,     0,     0,
      40,     0,     0,     0,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    43,   458,    44,
      45,     0,    46,    47,     0,     0,     0,    48,    49,     0,
      50,     0,    51,     0,     0,    52,    53,    54,     0,    55,
      56,    57,     0,     1,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   910,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   406,
     407,     0,     0,    58,     0,    59,    60,    61,    62,     0,
       0,     0,     0,    63,    64,    16,     0,    65,    66,    67,
       0,    17,    68,    69,    70,    71,    72,    18,    19,    20,
       0,   408,   409,   410,    21,     0,     0,     0,    22,     0,
       0,     0,     0,    23,    24,    25,    26,     0,     0,     0,
      27,     0,     0,     0,     0,     0,    28,     0,     0,    29,
      30,    31,     0,    32,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,     0,     0,     0,     0,     0,
       0,    40,     0,     0,     0,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,     0,    43,   461,
      44,    45,     0,    46,    47,     0,     0,     0,    48,    49,
       0,    50,     0,    51,     0,     0,    52,    53,    54,     0,
      55,    56,    57,     0,     1,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     915,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     406,   407,     0,     0,    58,     0,    59,    60,    61,    62,
       0,     0,     0,     0,    63,    64,    16,     0,    65,    66,
      67,     0,    17,    68,    69,    70,    71,    72,    18,    19,
      20,     0,   408,   409,   410,    21,     0,     0,     0,    22,
       0,     0,     0,     0,    23,    24,    25,    26,     0,     0,
       0,    27,     0,     0,     0,     0,     0,    28,     0,     0,
      29,    30,    31,     0,    32,     0,     0,     0,    33,    34,
      35,    36,    37,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,     0,     0,     0,
       0,     0,    40,     0,     0,     0,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,     0,     0,     0,    43,
     462,    44,    45,     0,    46,    47,     0,     0,     0,    48,
      49,     0,    50,     0,    51,     0,     0,    52,    53,    54,
       0,    55,    56,    57,     0,     1,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   917,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   406,   407,     0,     0,    58,     0,    59,    60,    61,
      62,     0,     0,     0,     0,    63,    64,    16,     0,    65,
      66,    67,     0,    17,    68,    69,    70,    71,    72,    18,
      19,    20,     0,   408,   409,   410,    21,     0,     0,     0,
      22,     0,     0,     0,     0,    23,    24,    25,    26,     0,
       0,     0,    27,     0,     0,     0,     0,     0,    28,     0,
       0,    29,    30,    31,     0,    32,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,     0,     0,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,     0,
      43,   464,    44,    45,     0,    46,    47,     0,     0,     0,
      48,    49,     0,    50,     0,    51,     0,     0,    52,    53,
      54,     0,    55,    56,    57,     0,     1,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   406,   407,     0,     0,    58,     0,    59,    60,
      61,    62,     0,     0,     0,     0,    63,    64,    16,     0,
      65,    66,    67,     0,    17,    68,    69,    70,    71,    72,
      18,    19,    20,     0,   408,   409,   410,    21,     0,     0,
       0,    22,     0,     0,     0,     0,    23,    24,    25,    26,
       0,     0,     0,    27,     0,     0,     0,     0,     0,    28,
       0,     0,    29,    30,    31,     0,    32,     0,     0,     0,
      33,    34,    35,    36,    37,    38,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,     0,     0,     0,
       0,     0,     0,     0,    40,     0,     0,     0,     0,     0,
       0,    41,    42,     0,     0,     0,     0,     0,     0,     0,
       0,    43,   465,    44,    45,     0,    46,    47,     0,     0,
       0,    48,    49,     0,    50,     0,    51,     0,     0,    52,
      53,    54,     0,    55,    56,    57,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   406,   407,     0,     0,    58,     0,    59,
      60,    61,    62,     0,     0,     0,     0,    63,    64,    16,
       0,    65,    66,    67,     0,    17,    68,    69,    70,    71,
      72,    18,    19,    20,     0,   408,   409,   410,    21,     0,
       0,     0,    22,     0,     0,     0,     0,    23,    24,    25,
      26,     0,     0,     0,    27,     0,     0,     0,     0,     0,
      28,     0,     0,    29,    30,    31,     0,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,    43,   466,    44,    45,     0,    46,    47,     0,
       0,     0,    48,    49,     0,    50,     0,    51,     0,     0,
      52,    53,    54,     0,    55,    56,    57,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     406,   407,     0,     0,     0,     0,     0,     0,    58,     0,
      59,    60,    61,    62,     0,     0,     0,     0,    63,    64,
       0,     0,    65,    66,    67,     0,     0,    68,    69,    70,
      71,    72,   408,   409,   410,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,     0,     0,     0,     0,     0,   406,   407,     0,     0,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,     0,     0,   408,   409,
     410,     0,     0,     0,     0,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
       0,     0,     0,     0,   406,   407,     0,     0,     0,     0,
       0,     0,   687,     0,     0,     0,     0,   406,   407,     0,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,     0,     0,     0,   408,   409,   410,   406,
     407,     0,     0,     0,     0,     0,     0,     0,     0,   408,
     409,   410,   406,   407,     0,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
       0,   408,   409,   410,   406,   407,     0,     0,   688,     0,
       0,     0,     0,     0,   408,   409,   410,     0,     0,     0,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,     0,     0,     0,   408,   409,   410,   406,
     407,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   689,     0,     0,     0,
       0,   408,   409,   410,   406,   407,     0,     0,     0,   690,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,     0,     0,     0,     0,     0,     0,     0,
       0,   693,     0,     0,     0,     0,   408,   409,   410,   406,
     407,     0,     0,     0,   700,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
     406,   407,     0,     0,     0,     0,   705,     0,     0,     0,
       0,   408,   409,   410,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,     0,     0,     0,
       0,     0,   408,   409,   410,     0,     0,     0,     0,   406,
     407,   706,     0,     0,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,   408,   409,   410,   406,   407,   709,     0,     0,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   406,   407,     0,   408,   409,   410,     0,
       0,   741,     0,     0,     0,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
       0,     0,   757,   406,   407,   408,   409,   410,     0,     0,
       0,     0,     0,     0,     0,     0,   406,   407,     0,     0,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,     0,     0,   408,   409,   410,   406,   407,
       0,   759,     0,     0,     0,     0,     0,     0,   408,   409,
     410,     0,     0,     0,     0,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
     408,   409,   410,     0,   406,   407,   760,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,     0,     0,   763,   408,   409,   410,   406,
     407,     0,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   764,     0,     0,     0,     0,
       0,   408,   409,   410,   406,   407,     0,     0,   766,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,     0,     0,     0,     0,   406,   407,     0,     0,
     778,     0,     0,     0,     0,     0,   408,   409,   410,   406,
     407,     0,     0,     0,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,     0,   408,   409,
     410,   406,   407,     0,     0,     0,   836,     0,     0,     0,
       0,   408,   409,   410,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,     0,     0,     0,
       0,     0,     0,   408,   409,   410,     0,     0,   406,   407,
       0,   838,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
     408,   409,   410,   406,   407,     0,   841,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,     0,     0,     0,     0,     0,     0,   864,     0,
       0,     0,     0,   406,   407,   408,   409,   410,     0,     0,
       0,   865,     0,     0,     0,     0,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,   406,   407,   866,     0,   408,   409,   410,     0,     0,
       0,     0,     0,     0,   406,   407,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,     0,   408,   409,   410,   406,   407,     0,     0,
     939,     0,     0,     0,     0,     0,   408,   409,   410,     0,
       0,     0,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,     0,   408,   409,
     410,     0,     0,     0,     0,   940,   406,   407,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,   941,   406,   407,   408,   409,
     410,     0,     0,     0,     0,     0,     0,     0,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   467,     0,     0,     0,     0,     0,     0,   408,   409,
     410,   406,   407,     0,   478,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
       0,     0,     0,     0,     0,     0,   479,   406,   407,     0,
       0,     0,     0,   408,   409,   410,     0,     0,     0,     0,
     406,   407,     0,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,     0,     0,     0,   408,
     409,   410,     0,     0,     0,     0,   480,   406,   407,     0,
       0,     0,   408,   409,   410,     0,     0,     0,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,     0,     0,     0,   406,   407,   556,     0,     0,   408,
     409,   410,     0,     0,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   408,   409,   410,     0,
       0,   560,   406,   407,     0,     0,     0,     0,     0,     0,
       0,     0,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,   624,     0,     0,
       0,     0,     0,     0,   408,   409,   410,   406,   407,     0,
     628,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   406,   407,     0,     0,   630,     0,   408,
     409,   410,     0,     0,     0,     0,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,     0,
       0,     0,     0,     0,   631,   408,   409,   410,     0,     0,
       0,   406,   407,     0,     0,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     406,   407,   634,   408,   409,   410,     0,     0,     0,     0,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   408,   409,   410,   406,   407,   701,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   702,   406,   407,     0,   408,   409,   410,
       0,     0,     0,     0,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   408,   409,   410,   406,
     407,   703,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   406,   407,     0,
     736,   408,   409,   410,     0,     0,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   408,
     409,   410,     0,   406,   407,   742,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   406,   407,     0,   743,   408,   409,   410,     0,     0,
       0,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   408,   409,   410,   406,   407,     0,   745,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   406,   407,   747,   408,   409,
     410,     0,     0,     0,     0,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   408,   409,   410,
     406,   407,     0,   750,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   406,
     407,   751,   408,   409,   410,     0,     0,     0,     0,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   408,   409,   410,   406,   407,   753,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   754,   408,   409,   410,     0,
       0,     0,     0,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   408,   409,   410,   406,   407,
     755,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   406,   407,     0,   756,
     408,   409,   410,     0,     0,     0,     0,     0,     0,   406,
     407,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,     0,     0,     0,   408,   409,
     410,     0,   406,   407,   761,     0,     0,     0,     0,     0,
       0,   408,   409,   410,     0,     0,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,     0,
     406,   407,     0,   762,   408,   409,   410,     0,     0,     0,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   408,   409,   410,     0,     0,     0,   782,     0,
     406,   407,     0,     0,     0,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
       0,     0,     0,     0,     0,     0,   810,     0,     0,     0,
       0,     0,   408,   409,   410,   406,   407,     0,     0,   812,
       0,     0,     0,     0,     0,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,   406,
     407,     0,   813,     0,     0,     0,     0,   408,   409,   410,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,     0,     0,     0,     0,     0,     0,     0,
     816,   408,   409,   410,   406,   407,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,     0,     0,     0,     0,   408,   409,   410,     0,
     837,     0,     0,     0,   406,   407,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   406,
     407,     0,     0,     0,     0,   840,   408,   409,   410,     0,
       0,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,   406,   407,     0,     0,   869,
       0,   408,   409,   410,     0,     0,     0,     0,   406,   407,
       0,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,     0,     0,   408,   409,   410,
       0,     0,     0,     0,   871,   406,   407,     0,     0,     0,
     408,   409,   410,     0,     0,     0,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,     0,
       0,     0,     0,     0,     0,     0,     0,   408,   409,   410,
     406,   407,     0,     0,   874,     0,     0,     0,     0,     0,
       0,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,     0,     0,     0,     0,   875,
     406,   407,   408,   409,   410,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
       0,     0,     0,     0,     0,   877,     0,     0,     0,     0,
       0,     0,   408,   409,   410,   406,   407,     0,   878,     0,
       0,     0,     0,     0,     0,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
       0,     0,     0,     0,     0,   879,     0,   408,   409,   410,
     406,   407,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   406,   407,     0,     0,     0,     0,
     882,     0,   408,   409,   410,     0,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,     0,     0,     0,     0,   408,   409,   410,     0,
     883,     0,     0,     0,   406,   407,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   406,   407,     0,     0,   892,   408,   409,   410,     0,
       0,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   408,   409,   410,   406,   407,     0,     0,
     923,     0,     0,     0,     0,     0,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,     0,
       0,     0,     0,     0,   925,   406,   407,     0,   408,   409,
     410,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   408,   409,   410,
     406,   407,     0,     0,   926,     0,     0,     0,     0,     0,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,     0,     0,     0,     0,     0,     0,     0,
       0,   932,   408,   409,   410,   406,   407,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     406,   407,     0,     0,     0,     0,   933,   408,   409,   410,
       0,     0,     0,   406,   407,     0,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,   408,   409,   410,   970,     0,     0,     0,   406,
     407,     0,     0,     0,     0,   408,   409,   410,     0,     0,
       0,     0,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,   406,   407,     0,     0,
     973,   408,   409,   410,     0,     0,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   408,   409,
     410,     0,     0,     0,     0,   987,   406,   407,     0,     0,
       0,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,     0,     0,     0,     0,     0,
     988,     0,     0,     0,     0,     0,     0,     0,   408,   409,
     410,   406,   407,   990,     0,     0,     0,     0,     0,     0,
       0,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,   406,   407,     0,     0,   991,
       0,     0,     0,   408,   409,   410,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,     0,
       0,     0,     0,     0,     0,     0,  1001,   408,   409,   410,
     406,   407,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     0,     0,
       0,     0,   408,   409,   410,     0,  1004,     0,     0,     0,
     406,   407,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   406,   407,     0,     0,     0,
       0,  1007,   408,   409,   410,     0,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,   406,   407,     0,     0,  1008,     0,   408,   409,   410,
       0,     0,     0,     0,   406,   407,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,     0,   408,   409,   410,     0,     0,     0,     0,
    1010,   406,   407,     0,     0,     0,   408,   409,   410,     0,
       0,     0,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,     0,     0,     0,     0,     0,
       0,     0,     0,   408,   409,   410,   406,   407,     0,     0,
    1011,     0,     0,     0,     0,     0,     0,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,     0,     0,     0,  1017,   406,   407,   408,   409,
     410,     0,   713,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1018,     0,     0,     0,     0,     0,     0,   408,   409,
     410,   406,   407,     0,  1021,     0,     0,   715,     0,     0,
       0,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,     0,     0,     0,     0,     0,
       0,  1022,     0,   408,   409,   410,   406,   407,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     0,     0,  1025,     0,   408,   409,
     410,   792,     0,   393,   420,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1026,     0,   794,     0,
     406,   407,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   406,   407,     0,
       0,     0,   408,   409,   410,     0,     0,     0,     0,     0,
     406,   407,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   408,
     409,   410,   406,   407,     0,     0,     0,     0,     0,     0,
       0,     0,   408,   409,   410,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   408,   409,   410
};

static const yytype_int16 yycheck[] =
{
      18,    19,    20,    21,    17,    97,    98,     7,     8,    22,
     251,     7,     8,    26,   243,    28,    99,   100,   101,   102,
      36,   232,    30,    33,    34,     0,    44,    45,    19,    47,
      48,    49,    50,    51,    52,    20,    54,    55,    56,    57,
       7,     8,   281,    24,    62,     7,     8,     9,    10,   243,
      68,    69,    70,   243,    72,    24,    25,    26,    27,     4,
       5,    30,    31,    32,   243,    24,    24,     7,     8,     9,
      24,    89,    90,    91,    82,   243,    94,     7,     8,     9,
      10,   243,    30,    70,    69,    33,    34,    95,    96,    97,
      98,   243,    79,    84,     7,     8,     9,    10,   116,   117,
      75,     4,     5,   121,   122,   243,    87,     7,     8,     9,
      10,    24,    69,    61,    71,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    87,    87,
      33,    28,    29,    87,    82,   243,    24,    25,    26,    27,
     158,   243,    30,    31,    32,     7,     8,    95,    96,    97,
      98,    51,   243,   171,    24,    25,    26,    27,    98,    23,
      30,    31,    32,    93,    28,    29,   449,   450,    32,    33,
      34,    35,     6,     7,     8,     9,    10,     1,    24,    25,
      26,    27,     4,    19,    30,    31,    32,     8,   243,   207,
       7,     8,     9,   211,    24,    25,    26,    27,     4,   243,
      30,    31,    32,   444,   112,   113,     7,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      10,   234,    24,    25,    26,    27,    10,   243,    30,    31,
      32,   470,    69,   472,    71,     0,   144,   145,   146,     7,
       8,     9,    10,   243,    19,    24,   264,   243,   112,   113,
     268,    20,   270,   271,   242,    10,   274,   340,   341,   342,
     242,   279,   280,    24,    25,    26,    27,   243,   242,    30,
      31,    32,    23,   242,   292,   244,   243,    28,    29,   242,
     242,    78,   243,    34,    35,    19,   242,   305,   306,   307,
     308,   309,   310,   311,   312,    87,   112,   113,   242,     4,
       5,   314,     7,     8,   243,    10,   316,   243,   243,    24,
      25,    26,    27,   242,   322,    30,    31,    32,   243,   243,
     338,   339,     7,     8,     9,    10,   243,   243,   144,   145,
     146,   243,   243,   281,   242,    19,   244,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   242,   438,   374,     7,     8,     9,
      10,   112,   113,   381,   382,   243,   384,   385,   316,   243,
     388,   389,   242,    24,   322,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   604,     7,     8,     9,   242,   244,   243,
     418,   419,   420,   243,   422,   243,   424,   242,   232,    24,
      25,    26,    27,   505,   244,    30,    31,    32,     7,     8,
       9,    24,   440,   441,   442,   443,   242,   445,   244,   243,
     448,   439,   243,   451,   452,   243,   454,   455,   456,   243,
     458,    24,   244,   461,   462,   243,   464,   465,   466,   467,
       7,     8,     9,   244,   243,   473,   243,   243,   476,   477,
     478,   479,   480,    24,    25,    26,    27,   243,   242,    30,
      31,    32,     7,     8,     9,   242,   494,   243,   496,   492,
     304,   499,   242,   244,   243,   243,    24,    25,    26,    27,
     243,   439,    30,    31,    32,   503,   243,   505,    24,    25,
      26,    27,   243,   243,    30,    31,    32,     0,     1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,   470,     6,   472,   243,     9,    10,   244,   244,
     831,   832,   833,   551,   243,    18,   243,    30,   556,   243,
      33,    34,   560,    24,    25,    26,    27,   243,   243,    30,
      31,    32,   243,   243,   243,   503,   243,   505,   244,    24,
      25,    26,    27,   243,   243,    30,    31,    32,    61,   243,
     243,   243,     7,   244,   244,   786,   244,   244,   596,   244,
     598,     8,    75,    66,    24,    25,    26,    27,     9,    82,
      30,    31,    32,   606,   243,   242,    19,     7,   112,   113,
       8,    87,    95,    96,    97,    98,   624,   431,   616,     9,
     628,    84,   630,   631,    96,     7,   634,    24,    25,    26,
      27,    67,   115,    30,    31,    32,    19,   710,    19,   244,
     144,   145,   146,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    19,    24,    19,   132,
     244,   134,   135,   136,   244,   138,   244,   140,   243,   243,
     143,    38,    39,    40,    41,    42,    43,    44,   616,   243,
      10,    32,    85,   243,   243,   243,     7,   695,   696,   697,
       8,    69,     9,   244,   702,   703,    72,    24,   242,    19,
      95,   243,     8,   244,   244,   713,   244,   715,   244,   244,
     244,   243,   243,   243,    19,    67,   244,     9,     7,   242,
     242,    50,   730,    49,   732,    49,   734,    49,   244,   242,
     242,   242,   112,   113,   742,   743,   244,   745,   242,   747,
     244,   244,   750,   751,   217,   753,   754,   755,   756,   232,
     233,   244,   225,   761,   762,    19,   244,   243,    19,    19,
      71,    77,    77,    77,   144,   145,   146,    77,    77,   244,
     244,   242,    70,    77,   782,   244,    77,    77,    77,   739,
      77,    77,    77,    77,   792,    71,   794,   242,   439,    77,
      77,   292,    77,    77,     0,     1,    77,    77,   281,    77,
      77,    77,   810,    77,   812,   813,    77,    77,   816,    77,
      77,    77,   242,    75,   822,   823,   503,   711,    -1,    -1,
      -1,   304,    -1,    -1,    30,    -1,   834,    33,    34,   837,
      -1,    -1,   840,   316,    -1,    -1,    19,    20,   846,   322,
      23,    -1,    -1,   851,    -1,    28,    29,    -1,    -1,    32,
      33,    34,    35,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,   869,   242,   871,   244,    -1,   874,   875,    -1,    75,
      -1,    -1,    -1,    -1,   882,   883,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   892,    -1,    69,    -1,    -1,    95,
      96,    97,    98,    -1,    77,    -1,    -1,    -1,    -1,    -1,
     908,    -1,    -1,    -1,    -1,   913,    -1,    -1,    -1,   115,
      -1,    -1,   726,    -1,    -1,   923,    -1,   925,   926,    -1,
      -1,    -1,    -1,    -1,   932,   933,    -1,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,   430,    -1,    -1,    -1,   434,
      -1,    -1,   437,    -1,    -1,    -1,    -1,   430,   431,    -1,
      -1,   434,    -1,    -1,   437,    -1,   439,    -1,    -1,    -1,
      -1,    -1,   970,    -1,    -1,   973,    -1,    -1,    -1,   783,
      -1,    -1,    -1,   787,   788,   789,   790,   791,    -1,   987,
     988,    -1,   990,   991,    -1,    -1,    -1,   470,    -1,   472,
      -1,    -1,    -1,  1001,    -1,    -1,  1004,    -1,    -1,  1007,
    1008,    -1,  1010,  1011,    -1,    -1,    -1,    -1,    -1,  1017,
    1018,    -1,    -1,  1021,  1022,    -1,    -1,  1025,  1026,    -1,
     503,    -1,   505,    -1,    -1,    -1,   232,   233,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   857,   858,   859,   860,   861,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,
      -1,    -1,   896,    -1,    -1,    -1,    -1,   901,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   602,    -1,    -1,
     316,    -1,    -1,    -1,    -1,    -1,   322,   112,   113,   602,
      -1,   604,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   616,    -1,    -1,    -1,   112,   113,    -1,
     954,    -1,    -1,    -1,    -1,   959,    -1,    -1,    -1,   144,
     145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   659,    -1,   661,   662,   663,   144,
     145,   146,    -1,    -1,    -1,    -1,   659,    -1,   661,   662,
     663,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    -1,    28,    29,    30,
      -1,    -1,    -1,    -1,   430,   431,    -1,    -1,   434,    40,
      41,   437,    -1,   439,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   726,    -1,    -1,    -1,   242,    -1,   244,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,   470,    -1,   472,   242,    -1,   244,
      -1,    82,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,
      -1,    -1,    62,    -1,    95,    96,    97,    98,    99,   100,
     101,   102,    -1,    -1,    -1,    -1,    -1,   503,    -1,   505,
     783,    -1,   797,   786,   787,   788,   789,   790,   791,   144,
     145,   146,    -1,    -1,   797,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     845,    -1,    -1,   848,    -1,   850,    -1,    -1,   853,   170,
     855,    -1,   845,    -1,    -1,   848,    -1,   850,   863,    -1,
     853,    -1,   855,    -1,   857,   858,   859,   860,   861,    -1,
     863,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,   602,    -1,   604,    -1,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,   244,
     616,    -1,   907,   896,    -1,   910,    -1,   912,   901,    -1,
     915,    -1,   917,   234,   907,   112,   113,   910,    -1,   912,
      -1,    -1,   915,    -1,   917,    -1,   144,   145,   146,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     945,    -1,    -1,   659,   949,   661,   662,   663,    -1,    -1,
      -1,    -1,   945,    -1,    -1,    -1,   949,    -1,    -1,    -1,
     281,   954,    -1,    -1,    -1,    -1,   959,    -1,    -1,    -1,
      -1,   292,    -1,    -1,   979,    -1,    -1,    -1,   983,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   979,    -1,    -1,    -1,
     983,    -1,   313,   314,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,   292,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     726,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,
     341,   342,    -1,   313,    -1,    -1,   244,    -1,   349,   350,
     351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   372,   373,    -1,   375,   376,   377,   378,   379,   349,
     350,   351,    -1,    -1,    -1,    -1,    -1,   783,    -1,    -1,
     786,   787,   788,   789,   790,   791,    -1,    -1,    -1,    -1,
      -1,   797,   372,   373,    -1,   375,   376,   377,   378,   379,
     411,   412,   413,   414,   415,   416,   417,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,   438,   439,    -1,
      -1,   411,   412,   413,   414,   415,   416,   417,    -1,   845,
      -1,    -1,   848,    -1,   850,    -1,    -1,   853,    -1,   855,
      -1,   857,   858,   859,   860,   861,    -1,   863,    -1,   470,
      -1,   472,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,   492,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     896,    -1,   503,    -1,   505,   901,    -1,    -1,    -1,    -1,
      -1,   907,   112,   113,   910,    -1,   912,    -1,    -1,   915,
      -1,   917,    -1,    -1,     3,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,   144,   145,   146,    -1,    -1,   945,
      -1,    -1,    -1,   949,    -1,    -1,    -1,    -1,   954,    -1,
      -1,   112,   113,   959,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    -1,    -1,   979,    -1,    64,    -1,   983,    -1,    68,
      -1,    -1,    -1,   144,    73,    74,    75,    76,    -1,    -1,
      -1,    80,    -1,    -1,    -1,   606,    -1,    86,    -1,    -1,
      89,    90,    91,    -1,    93,   616,    -1,    -1,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,   160,   161,    -1,   163,   164,    -1,    -1,    -1,   168,
     169,    -1,   171,   694,   173,    -1,    -1,   176,   177,   178,
     701,   180,   181,   182,    -1,    -1,    -1,    -1,    -1,   710,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   694,    -1,    -1,    -1,    -1,    -1,
      -1,   701,    -1,    -1,    -1,   214,    -1,   216,   217,   218,
     219,    -1,    -1,    -1,    -1,   224,   225,    -1,    -1,   228,
     229,   230,    -1,    -1,   233,   234,   235,   236,   237,    -1,
      -1,    -1,    -1,    -1,   765,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   765,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,    -1,     7,     8,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    16,    17,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,   868,    60,    61,
      62,    63,    64,    -1,    -1,    -1,   877,   878,   879,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   868,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,   877,   878,   879,
      -1,    -1,   104,   105,   106,   112,   113,   109,   110,   111,
      -1,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
      -1,   133,    -1,    -1,    -1,   137,    -1,   144,   145,   146,
     142,    -1,    -1,    -1,    -1,   147,    -1,    -1,   150,   151,
     152,   153,   154,   155,   156,   157,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,    -1,   215,   216,     4,     5,    -1,     7,     8,
      -1,    10,   224,    -1,    -1,    -1,    -1,    16,    17,   231,
     232,    -1,    -1,    -1,    -1,   242,   238,   239,   240,    -1,
      -1,   243,   244,    -1,    33,    -1,    -1,    -1,    -1,    -1,
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
      -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,    -1,   215,   216,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,   238,
     239,   240,    -1,    -1,   243,   244,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    60,    61,    62,    63,    64,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,
      -1,   109,   110,   111,    -1,    -1,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,   140,    -1,   142,   143,    -1,    -1,    -1,   147,
      -1,    -1,   150,   151,   152,   153,   154,   155,   156,   157,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,    -1,   215,   216,   217,
      -1,    -1,   220,    -1,    -1,    -1,   224,   225,    -1,    -1,
      -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,
     238,   239,   240,    -1,   242,   243,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    60,    61,    62,    63,    64,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,
      -1,   109,   110,   111,    -1,    -1,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,   140,    -1,   142,   143,    -1,    -1,    -1,   147,
      -1,    -1,   150,   151,   152,   153,   154,   155,   156,   157,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,    -1,   215,   216,   217,
      -1,    -1,    -1,    -1,    -1,    -1,   224,   225,    -1,    -1,
      -1,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,
     238,   239,   240,     4,     5,   243,     7,     8,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,   112,   113,   109,   110,
     111,    -1,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,    -1,   133,    -1,    -1,    -1,   137,    -1,   144,   145,
     146,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,    -1,   160,
      -1,    -1,    -1,    -1,   165,    -1,   167,    -1,    -1,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,    -1,   215,   216,     4,     5,    -1,     7,
       8,    -1,    10,   224,    -1,    -1,    -1,    -1,    16,    17,
     231,   232,    -1,    -1,    -1,    -1,   242,   238,   239,   240,
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
      -1,    -1,    -1,    -1,   166,   167,    -1,    -1,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,    -1,   215,   216,     4,     5,    -1,     7,     8,
      -1,    10,   224,    -1,    -1,    -1,    -1,    16,    17,   231,
     232,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,    -1,
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
      -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,    -1,   215,   216,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,    -1,    -1,    -1,    -1,   238,
     239,   240,     3,    -1,   243,    -1,     7,     8,     9,    10,
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
      -1,   112,   113,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,   144,   145,   146,    -1,   148,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,   160,
     161,    -1,   163,   164,    -1,    -1,    -1,   168,   169,    -1,
     171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,
     181,   182,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,
      -1,    -1,    -1,   224,   225,    -1,    -1,   228,   229,   230,
      -1,    -1,   233,   234,   235,   236,   237,     3,   144,   145,
     146,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,   144,   145,   146,    73,    74,    75,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    -1,    93,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,   244,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,   144,   145,
     146,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,   160,   161,    -1,   163,   164,    -1,
      -1,    -1,   168,   169,   244,   171,    -1,   173,    -1,    -1,
     176,   177,   178,    -1,   180,   181,   182,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,   214,    -1,
     216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,
      -1,    -1,   228,   229,   230,    -1,    -1,   233,   234,   235,
     236,   237,     3,   144,   145,   146,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,   144,
     145,   146,    73,    74,    75,    76,    -1,    -1,    -1,    80,
      81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      91,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
     101,   102,   103,   244,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,   144,   145,   146,    -1,   148,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,   160,
     161,    -1,   163,   164,    -1,    -1,    -1,   168,   169,   244,
     171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,
     181,   182,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,
      -1,    -1,    -1,   224,   225,    -1,    -1,   228,   229,   230,
      -1,    -1,   233,   234,   235,   236,   237,     3,   144,   145,
     146,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,   144,   145,   146,    73,    74,    75,
      76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    -1,    93,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,   244,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,   144,   145,
     146,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,   160,   161,    -1,   163,   164,    -1,
      -1,    -1,   168,   169,   244,   171,    -1,   173,    -1,    -1,
     176,   177,   178,    -1,   180,   181,   182,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,   214,    -1,
     216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,
      -1,    -1,   228,   229,   230,    -1,    -1,   233,   234,   235,
     236,   237,     3,   144,   145,   146,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,   144,
     145,   146,    73,    74,    75,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      91,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
     101,   102,   103,   244,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,   144,   145,   146,    -1,   148,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,   160,
     161,    -1,   163,   164,    -1,    -1,    -1,   168,   169,   244,
     171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,
     181,   182,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,
      -1,    -1,    -1,   224,   225,    -1,    -1,   228,   229,   230,
      -1,    -1,   233,   234,   235,   236,   237,     3,   144,   145,
     146,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,   144,   145,   146,    73,    74,    75,
      76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    -1,    93,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,   244,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,   144,   145,
     146,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,   160,   161,    -1,   163,   164,    -1,
      -1,    -1,   168,   169,   244,   171,    -1,   173,    -1,    -1,
     176,   177,   178,    -1,   180,   181,   182,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,   214,    -1,
     216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,
      -1,    -1,   228,   229,   230,    -1,    -1,   233,   234,   235,
     236,   237,     3,   144,   145,   146,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,   144,
     145,   146,    73,    74,    75,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      91,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
     101,   102,   103,   244,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,   144,   145,   146,    -1,   148,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,   160,
     161,    -1,   163,   164,    -1,    -1,    -1,   168,   169,   244,
     171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,
     181,   182,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,   214,    -1,   216,   217,   218,   219,    -1,
      -1,    -1,    -1,   224,   225,    -1,    -1,   228,   229,   230,
      -1,    -1,   233,   234,   235,   236,   237,     3,   144,   145,
     146,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,   144,   145,   146,    73,    74,    75,
      76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    -1,    93,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,   244,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,   144,   145,
     146,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,   160,   161,    -1,   163,   164,    -1,
      -1,    -1,   168,   169,   244,   171,    -1,   173,    -1,    -1,
     176,   177,   178,    -1,   180,   181,   182,    -1,     3,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,   214,    -1,
     216,   217,   218,   219,    -1,    -1,    -1,    -1,   224,   225,
      45,    -1,   228,   229,   230,    -1,    51,   233,   234,   235,
     236,   237,    57,    58,    59,    -1,   144,   145,   146,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,    -1,    80,    -1,    82,    -1,    -1,
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
       3,    -1,    -1,    -1,     7,     8,     9,    10,    11,    12,
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
      -1,     3,    -1,    -1,    -1,     7,     8,     9,    10,    11,
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
     182,    -1,     3,    -1,    -1,    -1,     7,     8,     9,    10,
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
     181,   182,    -1,     3,    -1,    -1,    -1,     7,     8,     9,
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
     180,   181,   182,    -1,     3,    -1,    -1,    -1,     7,     8,
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
      -1,   180,   181,   182,    -1,     3,    -1,    -1,    -1,     7,
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
     146,    -1,    -1,    -1,    -1,   244,   112,   113,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   244,   112,   113,   144,   145,
     146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,   242,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,   112,   113,    -1,   242,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,   112,   113,    -1,
      -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,
     112,   113,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,   144,
     145,   146,    -1,    -1,    -1,    -1,   242,   112,   113,    -1,
      -1,    -1,   144,   145,   146,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,   112,   113,   242,    -1,    -1,   144,
     145,   146,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,
      -1,   242,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   242,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,
     242,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,   242,    -1,   144,
     145,   146,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,   242,   144,   145,   146,    -1,    -1,
      -1,   112,   113,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,   242,   144,   145,   146,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,   112,   113,   242,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,   112,   113,    -1,   144,   145,   146,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   112,
     113,   242,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,
     242,   144,   145,   146,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,    -1,   112,   113,   242,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,   242,   144,   145,   146,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,   242,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,   242,   144,   145,
     146,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
     112,   113,    -1,   242,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,   242,   144,   145,   146,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,   112,   113,   242,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   112,   113,   242,   144,   145,   146,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146,   112,   113,
     242,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,   242,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,   144,   145,
     146,    -1,   112,   113,   242,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     112,   113,    -1,   242,   144,   145,   146,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,    -1,    -1,    -1,   242,    -1,
     112,   113,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,   112,   113,    -1,    -1,   242,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,   112,
     113,    -1,   242,    -1,    -1,    -1,    -1,   144,   145,   146,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,   144,   145,   146,   112,   113,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,
     242,    -1,    -1,    -1,   112,   113,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,   242,   144,   145,   146,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   112,   113,    -1,    -1,   242,
      -1,   144,   145,   146,    -1,    -1,    -1,    -1,   112,   113,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,   144,   145,   146,
      -1,    -1,    -1,    -1,   242,   112,   113,    -1,    -1,    -1,
     144,   145,   146,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
     112,   113,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,   242,
     112,   113,   144,   145,   146,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,   112,   113,    -1,   242,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,   144,   145,   146,
     112,   113,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,
     242,    -1,   144,   145,   146,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,
     242,    -1,    -1,    -1,   112,   113,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,   242,   144,   145,   146,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,    -1,
     242,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,   242,   112,   113,    -1,   144,   145,
     146,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   144,   145,   146,
     112,   113,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   242,   144,   145,   146,   112,   113,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,   242,   144,   145,   146,
      -1,    -1,    -1,   112,   113,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   144,   145,   146,   242,    -1,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,   144,   145,   146,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   112,   113,    -1,    -1,
     242,   144,   145,   146,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,    -1,    -1,    -1,    -1,   242,   112,   113,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,   112,   113,   242,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   112,   113,    -1,    -1,   242,
      -1,    -1,    -1,   144,   145,   146,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,   144,   145,   146,
     112,   113,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,   144,   145,   146,    -1,   242,    -1,    -1,    -1,
     112,   113,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,   242,   144,   145,   146,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   112,   113,    -1,    -1,   242,    -1,   144,   145,   146,
      -1,    -1,    -1,    -1,   112,   113,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,
     242,   112,   113,    -1,    -1,    -1,   144,   145,   146,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,   112,   113,    -1,    -1,
     242,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,   242,   112,   113,   144,   145,
     146,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,   112,   113,    -1,   242,    -1,    -1,    83,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   242,    -1,   144,   145,   146,   112,   113,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,   242,    -1,   144,   145,
     146,    83,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    83,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,
      -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146
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
     256,   257,   264,   265,   272,   273,   274,   285,   250,   243,
     243,   243,     7,     8,   243,   243,   243,   243,   243,   243,
     243,   243,   243,    19,     7,     8,     9,     4,     5,     6,
       9,    10,    16,    17,    18,    33,    57,    60,    61,    62,
      63,    64,    66,    93,   104,   105,   106,   109,   110,   111,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   140,   142,   143,   147,   150,
     151,   152,   153,   154,   155,   156,   157,   160,   167,   170,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   215,   216,   217,   224,   225,   231,   232,   238,   239,
     240,   243,   252,   253,   254,   255,   257,   268,   269,   270,
      10,   253,   253,   253,   253,   270,     7,     8,     9,    98,
       4,     4,   270,    19,    84,   270,   270,   271,   256,   257,
     258,   259,     7,     8,     9,    10,   262,   263,   256,   273,
       9,    93,   273,     8,    10,   269,   269,     7,     8,     9,
     260,   261,   253,   253,   165,   253,   253,   253,   166,   253,
     166,   167,   253,   253,   166,   253,   253,   253,   253,   243,
     243,     6,   258,   277,   278,    21,    36,    37,   220,   242,
     253,   269,   275,   276,     7,    10,    10,   253,   253,   253,
     253,     0,   247,    19,    20,    24,    38,    39,    40,    41,
      42,    43,    44,    24,    24,   258,   242,   253,   253,   244,
     253,   253,    51,   258,   279,   280,   258,   281,   282,   282,
     282,   271,   271,   271,   271,   242,   242,   242,   243,   243,
     243,   243,   243,     4,     5,   254,   255,   253,   253,   243,
     243,   243,   253,   253,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
      36,   243,   243,   253,   243,   243,   269,   253,   243,   243,
      10,   253,   253,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,   112,   113,   144,   145,
     146,    24,    25,    26,    27,    30,    31,    32,   243,   242,
      24,    78,    24,    87,    24,    87,    87,     7,     8,     9,
      19,    82,   250,   251,   248,   249,   270,    19,   242,   242,
     243,   243,   243,   243,   242,   243,   263,    19,   243,   242,
     242,   242,   242,   253,   242,   242,   242,   253,   242,   253,
     253,   242,   242,   253,   242,   242,   242,   242,   253,   253,
     242,   278,   242,   243,   276,   242,   243,   243,   242,   242,
     242,   250,   253,   253,   253,   253,   253,   253,   253,   253,
     269,   270,    24,   273,   242,   244,   242,   244,    24,   242,
     244,   244,   258,   242,   244,   242,   244,   244,   244,   244,
     244,   244,   244,     7,     8,     9,   253,   271,   271,   271,
     269,   269,   269,     7,     8,     9,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   269,   269,   253,   269,   269,   269,   269,
     269,   243,   253,   253,   253,   253,   242,   253,   253,   242,
     242,   244,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     269,   269,   269,   269,   269,   269,   269,   253,   253,   253,
      19,   253,     7,   253,     8,     9,    24,    87,    24,    87,
      87,   249,    19,   250,    69,   249,    84,   249,   271,   259,
     253,   253,   253,   253,   263,   244,    96,   266,   267,   253,
     261,   261,   253,   253,   242,   253,   253,   253,   242,   253,
     242,   242,   253,   253,   242,   253,   253,   253,   253,   244,
     244,   278,   278,   253,     7,   253,   253,   253,   253,   253,
     270,   253,   253,    67,   253,     7,     8,     9,   280,    19,
     282,    19,    19,    19,   244,   244,   244,   244,   244,   244,
     244,   243,   243,   243,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   242,   242,   242,   242,   244,   253,
     244,   242,   242,   242,   253,   244,   244,    10,   253,   244,
      85,   283,   284,    83,   243,    83,   243,   243,   253,     7,
     253,     8,     9,    69,    71,   249,    69,   251,   270,    72,
     242,   244,   242,   244,   242,   244,   242,    24,   258,    19,
      95,   244,   242,   242,   253,   242,   253,   242,   253,   253,
     242,   242,   253,   242,   242,   242,   242,   244,   242,   244,
     244,   242,   242,   244,   244,   243,   244,   249,   249,   249,
     249,   244,   244,   244,   269,   253,   253,   253,   244,   269,
     253,   253,   242,   271,   284,    70,    79,   253,   244,   253,
     244,   244,    83,   243,    83,   243,   243,    19,    69,    71,
     250,   253,   253,   253,     8,    67,   267,   253,   253,   253,
     242,   253,   242,   242,   253,   253,   242,   253,   253,   253,
     253,     7,   242,   242,   253,   253,   269,    50,    49,    49,
      49,   242,   242,   242,   242,   244,   244,   242,   244,   244,
     242,   244,   253,   250,   251,    19,    81,   250,    19,   250,
      19,    81,   250,    19,   250,    19,   250,   253,   244,   253,
     244,   244,   249,    19,   244,   244,   244,   244,   243,   242,
     253,   242,   253,   253,   242,   242,   253,   242,   242,   242,
     253,   253,   242,   242,   244,    33,   252,   252,   252,   253,
     253,   253,   242,    19,    19,   249,   253,    77,   249,    77,
     249,   253,    77,   249,    77,   249,    77,    19,    81,   250,
      19,   250,    19,    81,   250,    19,   250,    19,   250,    71,
     249,   269,   253,   242,   253,   242,   242,   253,   253,   269,
     269,   269,   242,   242,   253,   253,   244,   244,   244,   244,
     244,   244,   253,    70,    77,    19,   250,    77,    77,    19,
     250,    77,    77,   249,   253,    77,   249,    77,   249,   253,
      77,   249,    77,   249,    77,    71,   244,   253,   253,   253,
     242,   253,   253,   242,   249,    77,   249,    77,    77,    19,
     250,    77,    77,    19,   250,    77,    77,   242,   242,   253,
     242,   242,   253,    77,    77,   249,    77,   249,    77,   253,
     253,   242,   253,   253,   242,    77,    77,   242,   242,   253,
     242,   242,   253,   253,   253,   253,   253,   242,   242,   253,
     253,   242,   242,   253,   253,   242,   242,   253,   253
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   245,   246,   247,   247,   248,   248,   248,   249,   249,
     250,   250,   250,   251,   251,   251,   251,   251,   251,   251,
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
       0,     2,     1,     1,     2,     2,     2,     1,     1,     2,
       1,     2,     3,     1,     1,     1,     2,     4,     2,     1,
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
#line 4303 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 3: /* lines: line  */
#line 101 "DARIC.y"
           { ast_lines[yyfileno].push_front((yyvsp[0].ast)); (yyval.ast) = (yyvsp[0].ast); }
#line 4309 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 4: /* lines: line lines  */
#line 102 "DARIC.y"
                 { ast_lines[yyfileno].push_front((yyvsp[-1].ast)); (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4315 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 5: /* line: statements NL  */
#line 106 "DARIC.y"
                    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4321 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 6: /* line: SS NL  */
#line 107 "DARIC.y"
            { (yyval.ast) = NULL; }
#line 4327 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 7: /* line: NL  */
#line 108 "DARIC.y"
         { (yyval.ast) = NULL; }
#line 4333 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 8: /* embed_lines: line  */
#line 112 "DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 4339 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 9: /* embed_lines: line embed_lines  */
#line 113 "DARIC.y"
                       { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4345 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 10: /* statements: statement  */
#line 117 "DARIC.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 4351 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 11: /* statements: LINE_NUMBER statements  */
#line 118 "DARIC.y"
                             { (yyval.ast) = link(linenumber((yyvsp[-1].v_int)), (yyvsp[0].ast))); yylineno = (yyvsp[-1].v_int); }
#line 4357 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 12: /* statements: statement SS statements  */
#line 119 "DARIC.y"
                              { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4363 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 16: /* statement: CHAIN expression_string  */
#line 126 "DARIC.y"
                              { (yyval.ast) = token1(CHAIN, (yyvsp[0].ast)); }
#line 4369 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 17: /* statement: CHAIN expression_string ',' plain_variable_list  */
#line 127 "DARIC.y"
                                                      { (yyval.ast) = token2(CHAIN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4375 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 18: /* statement: EXPECT plain_variable_list  */
#line 128 "DARIC.y"
                                 { (yyval.ast) = token1(EXPECT, (yyvsp[0].ast)); }
#line 4381 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 19: /* statement: END  */
#line 129 "DARIC.y"
          { (yyval.ast) = token(END); }
#line 4387 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 20: /* statement: PROCEDURE  */
#line 130 "DARIC.y"
                { (yyval.ast) = token1(CALLPROC, string((yyvsp[0].v_string))); }
#line 4393 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 21: /* statement: PROCEDURE '(' expression_list ')'  */
#line 131 "DARIC.y"
                                        { (yyval.ast) = token2(CALLPROC, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4399 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 22: /* statement: FN_INTEGER '(' expression_list ')'  */
#line 132 "DARIC.y"
                                         { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4405 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 23: /* statement: FN_REAL '(' expression_list ')'  */
#line 133 "DARIC.y"
                                      { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4411 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 24: /* statement: FN_STRING '(' expression_list ')'  */
#line 134 "DARIC.y"
                                        { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4417 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 25: /* statement: DATA expression_list  */
#line 135 "DARIC.y"
                           { (yyval.ast) = token1(DATA, (yyvsp[0].ast)); }
#line 4423 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 26: /* statement: READ variable_list  */
#line 136 "DARIC.y"
                         { (yyval.ast) = token1(READ, (yyvsp[0].ast)); }
#line 4429 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 27: /* statement: RESTORE  */
#line 137 "DARIC.y"
              { (yyval.ast) = token(RESTORE); }
#line 4435 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 28: /* statement: RETURN  */
#line 138 "DARIC.y"
             { (yyval.ast) = token(RETURN); }
#line 4441 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 29: /* statement: RETURN expression  */
#line 139 "DARIC.y"
                        { (yyval.ast) = token1(RETURN_WITH_VALUE, (yyvsp[0].ast)); }
#line 4447 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 30: /* statement: TRACEON  */
#line 140 "DARIC.y"
              { (yyval.ast) = token(TRACEON); }
#line 4453 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 31: /* statement: TRACEOFF  */
#line 141 "DARIC.y"
               { (yyval.ast) = token(TRACEOFF); }
#line 4459 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 32: /* statement: BREAKPOINT  */
#line 142 "DARIC.y"
                 { (yyval.ast) = token(BREAKPOINT); }
#line 4465 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 33: /* statement: DIM dim_variable_list  */
#line 144 "DARIC.y"
                            { (yyval.ast) = token1(DIM, (yyvsp[0].ast)); }
#line 4471 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 34: /* statement: LOCAL DIM dim_variable_list  */
#line 145 "DARIC.y"
                                  { (yyval.ast) = token1(LOCALDIM, (yyvsp[0].ast)); }
#line 4477 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 35: /* statement: BPUT expression_numeric ',' expression_numeric  */
#line 147 "DARIC.y"
                                                     { (yyval.ast) = token2(BPUT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4483 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 36: /* statement: BGET expression_numeric  */
#line 148 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 4489 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 37: /* statement: PTR expression_numeric E expression_numeric  */
#line 149 "DARIC.y"
                                                  { (yyval.ast) = token2(PTRA, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4495 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 38: /* statement: CLOSE expression_numeric  */
#line 150 "DARIC.y"
                               { (yyval.ast) = token1(CLOSE, (yyvsp[0].ast)); }
#line 4501 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 39: /* statement: STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 151 "DARIC.y"
                                                                    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(GLOBAL)); }
#line 4507 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 40: /* statement: LOCAL STRING_VARIABLE '(' ')' E LISTFILES '(' expression_string ')'  */
#line 152 "DARIC.y"
                                                                          { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(LOCAL)); }
#line 4513 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 41: /* statement: OSCLI expression_string  */
#line 154 "DARIC.y"
                              { (yyval.ast) = token1(OSCLI, (yyvsp[0].ast)); }
#line 4519 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 42: /* statement: GOSUB LITERAL_INT  */
#line 156 "DARIC.y"
                        { (yyval.ast) = token1(GOSUB, integer((yyvsp[0].v_int))); }
#line 4525 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 43: /* statement: GOTO LITERAL_INT  */
#line 157 "DARIC.y"
                       { (yyval.ast) = token1(GOTO, integer((yyvsp[0].v_int))); }
#line 4531 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 44: /* statement: INPUT_ expression_input_list  */
#line 159 "DARIC.y"
                                   { (yyval.ast) = token1(INPUT_, (yyvsp[0].ast)); }
#line 4537 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 45: /* statement: INPUT_ LITERAL_STRING expression_input_list  */
#line 160 "DARIC.y"
                                                  { (yyval.ast) = token2(INPUT_NOQUESTIONMARK, string((yyvsp[-1].v_string)), (yyvsp[0].ast)); }
#line 4543 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 46: /* statement: INPUT_ LITERAL_STRING ',' expression_input_list  */
#line 161 "DARIC.y"
                                                      { (yyval.ast) = token2(INPUT_, string((yyvsp[-2].v_string)), (yyvsp[0].ast)); }
#line 4549 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 47: /* statement: MOUSE INTEGER_VARIABLE ',' INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 162 "DARIC.y"
                                                                       { (yyval.ast) = token3(MOUSE, string((yyvsp[-4].v_string)), string((yyvsp[-2].v_string)), string((yyvsp[0].v_string)) ); }
#line 4555 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 48: /* statement: INKEY '(' expression_numeric ')'  */
#line 164 "DARIC.y"
                                       { (yyval.ast) = token1(SINKEY, (yyvsp[-1].ast)); }
#line 4561 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 49: /* statement: INKEYS '(' expression_numeric ')'  */
#line 165 "DARIC.y"
                                        { (yyval.ast) = token1(SINKEYS, (yyvsp[-1].ast)); }
#line 4567 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 50: /* statement: GET  */
#line 166 "DARIC.y"
          { (yyval.ast) = token(GET_S); }
#line 4573 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 51: /* statement: GETS  */
#line 167 "DARIC.y"
           { (yyval.ast) = token(GETS_S); }
#line 4579 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 52: /* statement: IF expression statements  */
#line 169 "DARIC.y"
                               { (yyval.ast) = token2(IF, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4585 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 53: /* statement: IF expression statement ELSE statement  */
#line 170 "DARIC.y"
                                             { (yyval.ast) = token3(IF, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4591 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 54: /* statement: IF expression NL embed_lines ENDIF  */
#line 171 "DARIC.y"
                                         { (yyval.ast) = token2(IF, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4597 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 55: /* statement: IF expression NL embed_lines ELSE NL embed_lines ENDIF  */
#line 172 "DARIC.y"
                                                             { (yyval.ast) = token3(IF, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4603 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 56: /* statement: IF expression THEN statements  */
#line 174 "DARIC.y"
                                    { (yyval.ast) = token2(IF, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4609 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 57: /* statement: IF expression THEN statements ELSE statements  */
#line 175 "DARIC.y"
                                                    { (yyval.ast) = token3(IF, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4615 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 58: /* statement: IF expression THEN NL embed_lines ENDIF  */
#line 176 "DARIC.y"
                                              { (yyval.ast) = token2(IF, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4621 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 59: /* statement: IF expression THEN NL embed_lines ELSE NL embed_lines ENDIF  */
#line 177 "DARIC.y"
                                                                  { (yyval.ast) = token3(IF, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4627 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 60: /* statement: REPEAT NL embed_lines UNTIL expression  */
#line 179 "DARIC.y"
                                             { (yyval.ast) = token2(REPEAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4633 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 61: /* statement: REPEAT UNTIL expression  */
#line 180 "DARIC.y"
                              { (yyval.ast) = token2(REPEAT, NULL, (yyvsp[0].ast)); }
#line 4639 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 62: /* statement: WHILE expression NL embed_lines ENDWHILE  */
#line 181 "DARIC.y"
                                               { (yyval.ast) = token2(WHILE, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4645 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 63: /* statement: SWAP INTEGER_VARIABLE ',' INTEGER_VARIABLE  */
#line 183 "DARIC.y"
                                                 { (yyval.ast) = token2(SWAP_I, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4651 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 64: /* statement: SWAP VARIABLE ',' VARIABLE  */
#line 184 "DARIC.y"
                                 { (yyval.ast) = token2(SWAP_F, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4657 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 65: /* statement: SWAP STRING_VARIABLE ',' STRING_VARIABLE  */
#line 185 "DARIC.y"
                                                { (yyval.ast) = token2(SWAP_S, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4663 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 66: /* statement: FOR VARIABLE IN_ VARIABLE '(' ')' NL embed_lines NEXT  */
#line 188 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4669 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 67: /* statement: FOR INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 189 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4675 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 68: /* statement: FOR STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 190 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4681 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 69: /* statement: FOR VARIABLE IN_ VARIABLE '(' ')' statements NEXT  */
#line 191 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4687 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 70: /* statement: FOR INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' statements NEXT  */
#line 192 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4693 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 71: /* statement: FOR STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' statements NEXT  */
#line 193 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4699 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 72: /* statement: FOR LOCAL VARIABLE IN_ VARIABLE '(' ')' NL embed_lines NEXT  */
#line 194 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4705 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 73: /* statement: FOR LOCAL INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 195 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4711 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 74: /* statement: FOR LOCAL STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' NL embed_lines NEXT  */
#line 196 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4717 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 75: /* statement: FOR LOCAL VARIABLE IN_ VARIABLE '(' ')' statements NEXT  */
#line 197 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4723 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 76: /* statement: FOR LOCAL INTEGER_VARIABLE IN_ INTEGER_VARIABLE '(' ')' statements NEXT  */
#line 198 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4729 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 77: /* statement: FOR LOCAL STRING_VARIABLE IN_ STRING_VARIABLE '(' ')' statements NEXT  */
#line 199 "DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4735 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 78: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 202 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4741 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 79: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 203 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4747 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 80: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 204 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4753 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 81: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 205 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4759 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 82: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 206 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4765 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 83: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 207 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4771 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 84: /* statement: FOR INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 208 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4777 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 85: /* statement: FOR VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 209 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4783 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 86: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 210 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4789 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 87: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric NL embed_lines NEXT  */
#line 211 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4795 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 88: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 212 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4801 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 89: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric statements NEXT  */
#line 213 "DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4807 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 90: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 214 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4813 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 91: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric NL embed_lines NEXT  */
#line 215 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4819 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 92: /* statement: FOR LOCAL INTEGER_VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 216 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4825 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 93: /* statement: FOR LOCAL VARIABLE E expression_numeric TO expression_numeric STEP expression_numeric statements NEXT  */
#line 217 "DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4831 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 94: /* statement: CASE expression OF NL when_list ENDCASE  */
#line 219 "DARIC.y"
                                              { (yyval.ast) = token2(CASE, (yyvsp[-4].ast), (yyvsp[-1].ast));  }
#line 4837 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 95: /* statement: CASE expression OF NL when_list OTHERWISE statement NL ENDCASE  */
#line 220 "DARIC.y"
                                                                     { (yyval.ast) = token3(CASE, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-2].ast));  }
#line 4843 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 96: /* statement: PRINT  */
#line 222 "DARIC.y"
            { (yyval.ast) = token(PRINT); }
#line 4849 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 97: /* statement: PRINT expression_print_list  */
#line 223 "DARIC.y"
                                  { (yyval.ast) = token1(PRINT, (yyvsp[0].ast)); }
#line 4855 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 98: /* statement: RENDERFRAME  */
#line 225 "DARIC.y"
                  { (yyval.ast) = token(RENDERFRAME); }
#line 4861 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 99: /* statement: CREATEVERTEX TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 228 "DARIC.y"
                                                      { (yyval.ast) = token6(CREATEVERTEX, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4867 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 100: /* statement: CREATETRIANGLE TYPE_VARIABLE '(' expression_numeric ')' ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 231 "DARIC.y"
                                                  { (yyval.ast) = token6(CREATETRIANGLE, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4873 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 101: /* statement: TRANSLATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 232 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TRANSLATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4879 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 102: /* statement: ROTATE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 233 "DARIC.y"
                                                                                                      { (yyval.ast) = token4(ROTATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4885 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 103: /* statement: SCALE expression_numeric ',' expression_numeric  */
#line 234 "DARIC.y"
                                                      { (yyval.ast) = token2(SCALE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4891 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 104: /* statement: DELETEOBJECT expression_numeric  */
#line 235 "DARIC.y"
                                      { (yyval.ast) = token1(DELETEOBJECT, (yyvsp[0].ast)); }
#line 4897 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 105: /* statement: CLS  */
#line 237 "DARIC.y"
          { (yyval.ast) = token(CLS); }
#line 4903 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 106: /* statement: COLOUR expression_numeric  */
#line 238 "DARIC.y"
                                { (yyval.ast) = token1(COLOUR, (yyvsp[0].ast)); }
#line 4909 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 107: /* statement: COLOUR expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 239 "DARIC.y"
                                                                              { (yyval.ast) = token3(COLOUR, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4915 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 108: /* statement: COLOURBG expression_numeric  */
#line 240 "DARIC.y"
                                  { (yyval.ast) = token1(COLOURBG, (yyvsp[0].ast)); }
#line 4921 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 109: /* statement: COLOURBG expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 241 "DARIC.y"
                                                                                { (yyval.ast) = token3(COLOURBG, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4927 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 110: /* statement: GRAPHICS expression_numeric ',' expression_numeric  */
#line 242 "DARIC.y"
                                                         { (yyval.ast) = token2(GRAPHICS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4933 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 111: /* statement: GRAPHICS BANKED expression_numeric ',' expression_numeric  */
#line 243 "DARIC.y"
                                                                { (yyval.ast) = token2(BANKED, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4939 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 112: /* statement: GRAPHICS  */
#line 244 "DARIC.y"
               { (yyval.ast) = token(GRAPHICS); }
#line 4945 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 113: /* statement: GRAPHICS BANKED  */
#line 245 "DARIC.y"
                      { (yyval.ast) = token(BANKED); }
#line 4951 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 114: /* statement: FLIP  */
#line 246 "DARIC.y"
           { (yyval.ast) = token(FLIP); }
#line 4957 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 115: /* statement: CIRCLE expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 247 "DARIC.y"
                                                                              { (yyval.ast) = token3(CIRCLE, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4963 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 116: /* statement: CIRCLE FILL expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 248 "DARIC.y"
                                                                                   { (yyval.ast) = token3(CIRCLEFILL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4969 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 117: /* statement: LINE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 249 "DARIC.y"
                                                                                                   { (yyval.ast) = token4(LINE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4975 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 118: /* statement: RECTANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 250 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(RECTANGLE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4981 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 119: /* statement: RECTANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 251 "DARIC.y"
                                                                                                             { (yyval.ast) = token4(RECTANGLEFILL, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4987 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 120: /* statement: TRIANGLE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 252 "DARIC.y"
                                                                                                                                                     { (yyval.ast) = token6(TRIANGLE, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4993 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 121: /* statement: TRIANGLE FILL expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 253 "DARIC.y"
                                                                                                                                                          { (yyval.ast) = token6(TRIANGLEFILL, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4999 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 122: /* statement: TRIANGLE SHADED expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 256 "DARIC.y"
                                                                                         { (yyval.ast) = token9(TRIANGLESHADED, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5005 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 123: /* statement: PLOT expression_numeric ',' expression_numeric  */
#line 257 "DARIC.y"
                                                     { (yyval.ast) = token2(PLOT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5011 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 124: /* statement: CLIPON expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 258 "DARIC.y"
                                                                                                     { (yyval.ast) = token4(CLIPON, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5017 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 125: /* statement: CLIPOFF  */
#line 259 "DARIC.y"
              { (yyval.ast) = token(CLIPOFF); }
#line 5023 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 126: /* statement: TEXT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 260 "DARIC.y"
                                                                                                  { (yyval.ast) = token4(TEXT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5029 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 127: /* statement: TEXTRIGHT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 261 "DARIC.y"
                                                                                                       { (yyval.ast) = token4(TEXTRIGHT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5035 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 128: /* statement: TEXTCENTRE expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_string  */
#line 262 "DARIC.y"
                                                                                                        { (yyval.ast) = token4(TEXTCENTRE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5041 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 129: /* statement: SHOWFPS  */
#line 263 "DARIC.y"
              { (yyval.ast) = token(SHOWFPS); }
#line 5047 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 130: /* number: LITERAL_INT  */
#line 267 "DARIC.y"
                  { (yyval.ast) = integer((yyvsp[0].v_int)); }
#line 5053 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 131: /* number: MINUS LITERAL_INT  */
#line 268 "DARIC.y"
                                  { (yyval.ast) = integer(-(yyvsp[0].v_int)); }
#line 5059 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 132: /* number: LITERAL_REAL  */
#line 269 "DARIC.y"
                   { (yyval.ast) = real((yyvsp[0].v_real)); }
#line 5065 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 133: /* number: MINUS LITERAL_REAL  */
#line 270 "DARIC.y"
                                   { (yyval.ast) = real(-(yyvsp[0].v_real)); }
#line 5071 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 134: /* expression_numeric: number  */
#line 274 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 5077 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 135: /* expression_numeric: variable_integer  */
#line 275 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5083 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 136: /* expression_numeric: variable_real  */
#line 276 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5089 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 137: /* expression_numeric: '(' expression_numeric ')'  */
#line 277 "DARIC.y"
                                 { (yyval.ast) = (yyvsp[-1].ast); }
#line 5095 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 138: /* expression_numeric: FLOAT_ '(' expression_numeric ')'  */
#line 278 "DARIC.y"
                                        { (yyval.ast) = token1(FLOAT_, (yyvsp[-1].ast)); }
#line 5101 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 139: /* expression_numeric: INT_ '(' expression_numeric ')'  */
#line 279 "DARIC.y"
                                      { (yyval.ast) = token1(INT_, (yyvsp[-1].ast)); }
#line 5107 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 140: /* expression_numeric: MINUS variable_integer  */
#line 280 "DARIC.y"
                             { (yyval.ast) = token2(MINUS, integer(0), (yyvsp[0].ast)); }
#line 5113 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 141: /* expression_numeric: MINUS variable_real  */
#line 281 "DARIC.y"
                          { (yyval.ast) = token2(MINUS, real(0.0), (yyvsp[0].ast)); }
#line 5119 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 142: /* expression_numeric: expression_numeric PLUS expression_numeric  */
#line 282 "DARIC.y"
                                                 { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5125 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 143: /* expression_numeric: expression_numeric MINUS expression_numeric  */
#line 283 "DARIC.y"
                                                  { (yyval.ast) = token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5131 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 144: /* expression_numeric: expression_numeric MULTIPLY expression_numeric  */
#line 284 "DARIC.y"
                                                     { (yyval.ast) = token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5137 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 145: /* expression_numeric: expression_numeric DIVIDE expression_numeric  */
#line 285 "DARIC.y"
                                                   { (yyval.ast) = token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5143 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 146: /* expression_numeric: expression_numeric INTEGERDIVIDE expression_numeric  */
#line 286 "DARIC.y"
                                                          { (yyval.ast) = token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5149 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 147: /* expression_numeric: expression_numeric DIV expression_numeric  */
#line 287 "DARIC.y"
                                                { (yyval.ast) = token2(DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5155 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 148: /* expression_numeric: expression_numeric MOD expression_numeric  */
#line 288 "DARIC.y"
                                                { (yyval.ast) = token2(MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5161 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 149: /* expression_numeric: expression_numeric SHL expression_numeric  */
#line 289 "DARIC.y"
                                                { (yyval.ast) = token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5167 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 150: /* expression_numeric: expression_numeric SHR expression_numeric  */
#line 290 "DARIC.y"
                                                { (yyval.ast) = token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5173 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 151: /* expression_numeric: expression_numeric E expression_numeric  */
#line 291 "DARIC.y"
                                              { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5179 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 152: /* expression_numeric: expression_numeric NE expression_numeric  */
#line 292 "DARIC.y"
                                               { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5185 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 153: /* expression_numeric: expression_numeric GE expression_numeric  */
#line 293 "DARIC.y"
                                               { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5191 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 154: /* expression_numeric: expression_numeric LE expression_numeric  */
#line 294 "DARIC.y"
                                               { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5197 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 155: /* expression_numeric: expression_numeric LT expression_numeric  */
#line 295 "DARIC.y"
                                               { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5203 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 156: /* expression_numeric: expression_numeric GT expression_numeric  */
#line 296 "DARIC.y"
                                               { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5209 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 157: /* expression_numeric: expression_numeric AND expression_numeric  */
#line 297 "DARIC.y"
                                                { (yyval.ast) = token2(AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5215 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 158: /* expression_numeric: expression_numeric OR expression_numeric  */
#line 298 "DARIC.y"
                                               { (yyval.ast) = token2(OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5221 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 159: /* expression_numeric: expression_numeric EOR expression_numeric  */
#line 299 "DARIC.y"
                                                { (yyval.ast) = token2(EOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5227 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 160: /* expression_numeric: FN_INTEGER '(' expression_list ')'  */
#line 301 "DARIC.y"
                                         { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5233 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 161: /* expression_numeric: FN_REAL '(' expression_list ')'  */
#line 302 "DARIC.y"
                                      { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5239 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 162: /* expression_numeric: DIM '(' VARIABLE '(' ')' ',' number ')'  */
#line 304 "DARIC.y"
                                              { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::REAL), (yyvsp[-1].ast)); }
#line 5245 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 163: /* expression_numeric: DIM '(' INTEGER_VARIABLE '(' ')' ',' number ')'  */
#line 305 "DARIC.y"
                                                      { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::INTEGER), (yyvsp[-1].ast)); }
#line 5251 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 164: /* expression_numeric: DIM '(' STRING_VARIABLE '(' ')' ',' number ')'  */
#line 306 "DARIC.y"
                                                     { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::STRING), (yyvsp[-1].ast)); }
#line 5257 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 165: /* expression_numeric: PTR expression_numeric  */
#line 308 "DARIC.y"
                             { (yyval.ast) = token1(PTR, (yyvsp[0].ast)); }
#line 5263 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 166: /* expression_numeric: GET  */
#line 310 "DARIC.y"
          { (yyval.ast) = token(GET); }
#line 5269 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 167: /* expression_numeric: INKEY '(' expression_numeric ')'  */
#line 311 "DARIC.y"
                                       { (yyval.ast) = token1(INKEY, (yyvsp[-1].ast)); }
#line 5275 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 168: /* expression_numeric: BOOLTRUE  */
#line 313 "DARIC.y"
               { (yyval.ast) = integer(1); }
#line 5281 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 169: /* expression_numeric: BOOLFALSE  */
#line 314 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5287 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 170: /* expression_numeric: TIME  */
#line 315 "DARIC.y"
           { (yyval.ast) = token(TIME); }
#line 5293 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 171: /* expression_numeric: SOLID  */
#line 317 "DARIC.y"
                        { (yyval.ast) = integer(0); }
#line 5299 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 172: /* expression_numeric: WIREFRAME  */
#line 318 "DARIC.y"
                        { (yyval.ast) = integer(1); }
#line 5305 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 173: /* expression_numeric: SHADED  */
#line 319 "DARIC.y"
                        { (yyval.ast) = integer(2); }
#line 5311 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 174: /* expression_numeric: FILLEDWIREFRAME  */
#line 320 "DARIC.y"
                        { (yyval.ast) = integer(3); }
#line 5317 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 175: /* expression_numeric: CREATESHAPE TYPE_VARIABLE ',' TYPE_VARIABLE  */
#line 322 "DARIC.y"
                                                  { (yyval.ast) = token2(CREATESHAPE, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 5323 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 176: /* expression_numeric: CREATEOBJECT expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric ',' expression_numeric  */
#line 327 "DARIC.y"
                                                  { (yyval.ast) = token9(CREATEOBJECT, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5329 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 177: /* expression_numeric: RED  */
#line 329 "DARIC.y"
                { (yyval.ast) = integer(0xFF0000); }
#line 5335 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 178: /* expression_numeric: GREEN  */
#line 330 "DARIC.y"
                { (yyval.ast) = integer(0x00FF00); }
#line 5341 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 179: /* expression_numeric: YELLOW  */
#line 331 "DARIC.y"
                { (yyval.ast) = integer(0xFFFF00); }
#line 5347 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 180: /* expression_numeric: BLUE  */
#line 332 "DARIC.y"
                { (yyval.ast) = integer(0x0000FF); }
#line 5353 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 181: /* expression_numeric: MAGENTA  */
#line 333 "DARIC.y"
                { (yyval.ast) = integer(0xFF00FF); }
#line 5359 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 182: /* expression_numeric: CYAN  */
#line 334 "DARIC.y"
                { (yyval.ast) = integer(0x00FFFF); }
#line 5365 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 183: /* expression_numeric: WHITE  */
#line 335 "DARIC.y"
                { (yyval.ast) = integer(0xFFFFFF); }
#line 5371 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 184: /* expression_numeric: BLACK  */
#line 336 "DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5377 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 185: /* expression_numeric: LASTPOS  */
#line 337 "DARIC.y"
                { (yyval.ast) = integer(-1); }
#line 5383 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 186: /* expression_numeric: COLOUR '(' expression_numeric ',' expression_numeric ',' expression_numeric ')'  */
#line 338 "DARIC.y"
                                                                                      { (yyval.ast) = token3(COLOUREXP, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5389 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 187: /* expression_numeric: POINT_ '(' expression_numeric ',' expression_numeric ')'  */
#line 339 "DARIC.y"
                                                               { (yyval.ast) = token2(POINT_, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5395 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 188: /* expression_numeric: SCREENWIDTH  */
#line 340 "DARIC.y"
                  { (yyval.ast) = token(SCREENWIDTH); }
#line 5401 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 189: /* expression_numeric: SCREENHEIGHT  */
#line 341 "DARIC.y"
                   { (yyval.ast) = token(SCREENHEIGHT); }
#line 5407 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 190: /* expression_numeric: LOADTYPEFACE expression_string  */
#line 342 "DARIC.y"
                                     { (yyval.ast) = token1(LOADTYPEFACE, (yyvsp[0].ast)); }
#line 5413 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 191: /* expression_numeric: CREATEFONT expression_numeric ',' expression_numeric  */
#line 343 "DARIC.y"
                                                           { (yyval.ast) = token2(CREATEFONT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5419 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 192: /* expression_numeric: MONO15  */
#line 344 "DARIC.y"
             { (yyval.ast) = integer(0); }
#line 5425 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 193: /* expression_numeric: MONO20  */
#line 345 "DARIC.y"
             { (yyval.ast) = integer(1); }
#line 5431 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 194: /* expression_numeric: MONO25  */
#line 346 "DARIC.y"
             { (yyval.ast) = integer(2); }
#line 5437 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 195: /* expression_numeric: MONO30  */
#line 347 "DARIC.y"
             { (yyval.ast) = integer(3); }
#line 5443 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 196: /* expression_numeric: MONO35  */
#line 348 "DARIC.y"
             { (yyval.ast) = integer(4); }
#line 5449 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 197: /* expression_numeric: MONO40  */
#line 349 "DARIC.y"
             { (yyval.ast) = integer(5); }
#line 5455 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 198: /* expression_numeric: MONO50  */
#line 350 "DARIC.y"
             { (yyval.ast) = integer(6); }
#line 5461 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 199: /* expression_numeric: MONO75  */
#line 351 "DARIC.y"
             { (yyval.ast) = integer(7); }
#line 5467 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 200: /* expression_numeric: MONO100  */
#line 352 "DARIC.y"
              { (yyval.ast) = integer(8); }
#line 5473 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 201: /* expression_numeric: PROP15  */
#line 353 "DARIC.y"
             { (yyval.ast) = integer(9); }
#line 5479 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 202: /* expression_numeric: PROP20  */
#line 354 "DARIC.y"
             { (yyval.ast) = integer(10); }
#line 5485 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 203: /* expression_numeric: PROP25  */
#line 355 "DARIC.y"
             { (yyval.ast) = integer(11); }
#line 5491 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 204: /* expression_numeric: PROP30  */
#line 356 "DARIC.y"
             { (yyval.ast) = integer(12); }
#line 5497 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 205: /* expression_numeric: PROP35  */
#line 357 "DARIC.y"
             { (yyval.ast) = integer(13); }
#line 5503 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 206: /* expression_numeric: PROP40  */
#line 358 "DARIC.y"
             { (yyval.ast) = integer(14); }
#line 5509 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 207: /* expression_numeric: PROP50  */
#line 359 "DARIC.y"
             { (yyval.ast) = integer(15); }
#line 5515 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 208: /* expression_numeric: PROP75  */
#line 360 "DARIC.y"
             { (yyval.ast) = integer(16); }
#line 5521 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 209: /* expression_numeric: PROP100  */
#line 361 "DARIC.y"
              { (yyval.ast) = integer(17); }
#line 5527 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 210: /* expression_numeric: SERIF15  */
#line 362 "DARIC.y"
              { (yyval.ast) = integer(18); }
#line 5533 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 211: /* expression_numeric: SERIF20  */
#line 363 "DARIC.y"
              { (yyval.ast) = integer(19); }
#line 5539 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 212: /* expression_numeric: SERIF25  */
#line 364 "DARIC.y"
              { (yyval.ast) = integer(20); }
#line 5545 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 213: /* expression_numeric: SERIF30  */
#line 365 "DARIC.y"
              { (yyval.ast) = integer(21); }
#line 5551 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 214: /* expression_numeric: SERIF35  */
#line 366 "DARIC.y"
              { (yyval.ast) = integer(22); }
#line 5557 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 215: /* expression_numeric: SERIF40  */
#line 367 "DARIC.y"
              { (yyval.ast) = integer(23); }
#line 5563 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 216: /* expression_numeric: SERIF50  */
#line 368 "DARIC.y"
              { (yyval.ast) = integer(24); }
#line 5569 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 217: /* expression_numeric: SERIF75  */
#line 369 "DARIC.y"
              { (yyval.ast) = integer(25); }
#line 5575 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 218: /* expression_numeric: SERIF100  */
#line 370 "DARIC.y"
               { (yyval.ast) = integer(26); }
#line 5581 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 219: /* expression_numeric: EOFH expression_numeric  */
#line 371 "DARIC.y"
                              { (yyval.ast) = token1(EOFH, (yyvsp[0].ast)); }
#line 5587 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 220: /* expression_numeric: BGET expression_numeric  */
#line 372 "DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 5593 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 221: /* expression_numeric: OPENIN '(' expression_string ')'  */
#line 373 "DARIC.y"
                                       { (yyval.ast) = token1(OPENIN, (yyvsp[-1].ast)); }
#line 5599 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 222: /* expression_numeric: OPENOUT '(' expression_string ')'  */
#line 374 "DARIC.y"
                                        { (yyval.ast) = token1(OPENOUT, (yyvsp[-1].ast)); }
#line 5605 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 223: /* expression_numeric: OPENUP '(' expression_string ')'  */
#line 375 "DARIC.y"
                                       { (yyval.ast) = token1(OPENUP, (yyvsp[-1].ast)); }
#line 5611 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 224: /* expression_numeric: RND  */
#line 377 "DARIC.y"
          { (yyval.ast) = token(RND); }
#line 5617 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 225: /* expression_numeric: RND0  */
#line 378 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(0)); }
#line 5623 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 226: /* expression_numeric: RND1  */
#line 379 "DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(1)); }
#line 5629 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 227: /* expression_numeric: RND '(' expression_numeric ')'  */
#line 380 "DARIC.y"
                                     { (yyval.ast) = token1(RNDRANGE, (yyvsp[-1].ast)); }
#line 5635 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 228: /* expression_numeric: PI  */
#line 382 "DARIC.y"
         { (yyval.ast) = token(PI); }
#line 5641 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 229: /* expression_numeric: NOT expression_numeric  */
#line 383 "DARIC.y"
                             { (yyval.ast) = token1(NOT, (yyvsp[0].ast)); }
#line 5647 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 230: /* expression_numeric: SQR '(' expression_numeric ')'  */
#line 384 "DARIC.y"
                                     { (yyval.ast) = token1(SQR, (yyvsp[-1].ast)); }
#line 5653 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 231: /* expression_numeric: LN '(' expression_numeric ')'  */
#line 385 "DARIC.y"
                                    { (yyval.ast) = token1(LN, (yyvsp[-1].ast)); }
#line 5659 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 232: /* expression_numeric: LOG '(' expression_numeric ')'  */
#line 386 "DARIC.y"
                                     { (yyval.ast) = token1(LOG, (yyvsp[-1].ast)); }
#line 5665 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 233: /* expression_numeric: EXP '(' expression_numeric ')'  */
#line 387 "DARIC.y"
                                     { (yyval.ast) = token1(EXP, (yyvsp[-1].ast)); }
#line 5671 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 234: /* expression_numeric: ATN '(' expression_numeric ')'  */
#line 388 "DARIC.y"
                                     { (yyval.ast) = token1(ATN, (yyvsp[-1].ast)); }
#line 5677 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 235: /* expression_numeric: TAN '(' expression_numeric ')'  */
#line 389 "DARIC.y"
                                     { (yyval.ast) = token1(TAN, (yyvsp[-1].ast)); }
#line 5683 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 236: /* expression_numeric: COS '(' expression_numeric ')'  */
#line 390 "DARIC.y"
                                     { (yyval.ast) = token1(COS, (yyvsp[-1].ast)); }
#line 5689 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 237: /* expression_numeric: SIN '(' expression_numeric ')'  */
#line 391 "DARIC.y"
                                     { (yyval.ast) = token1(SIN, (yyvsp[-1].ast)); }
#line 5695 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 238: /* expression_numeric: ABS '(' expression_numeric ')'  */
#line 392 "DARIC.y"
                                     { (yyval.ast) = token1(ABS, (yyvsp[-1].ast)); }
#line 5701 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 239: /* expression_numeric: ACS '(' expression_numeric ')'  */
#line 393 "DARIC.y"
                                     { (yyval.ast) = token1(ACS, (yyvsp[-1].ast)); }
#line 5707 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 240: /* expression_numeric: ASN '(' expression_numeric ')'  */
#line 394 "DARIC.y"
                                     { (yyval.ast) = token1(ASN, (yyvsp[-1].ast)); }
#line 5713 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 241: /* expression_numeric: DEG '(' expression_numeric ')'  */
#line 395 "DARIC.y"
                                     { (yyval.ast) = token1(DEG, (yyvsp[-1].ast)); }
#line 5719 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 242: /* expression_numeric: RAD '(' expression_numeric ')'  */
#line 396 "DARIC.y"
                                     { (yyval.ast) = token1(RAD, (yyvsp[-1].ast)); }
#line 5725 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 243: /* expression_numeric: SGN '(' expression_numeric ')'  */
#line 397 "DARIC.y"
                                     { (yyval.ast) = token1(SGN, (yyvsp[-1].ast)); }
#line 5731 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 244: /* expression_numeric: ASC '(' expression_string ')'  */
#line 399 "DARIC.y"
                                    { (yyval.ast) = token1(ASC, (yyvsp[-1].ast)); }
#line 5737 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 245: /* expression_numeric: LEN '(' expression_string ')'  */
#line 400 "DARIC.y"
                                    { (yyval.ast) = token1(LEN, (yyvsp[-1].ast)); }
#line 5743 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 246: /* expression_numeric: INSTR '(' expression_string ',' expression_string ')'  */
#line 401 "DARIC.y"
                                                            { (yyval.ast) = token3(INSTR, (yyvsp[-3].ast), (yyvsp[-1].ast), integer(1)); }
#line 5749 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 247: /* expression_numeric: INSTR '(' expression_string ',' expression_string ',' expression_numeric ')'  */
#line 402 "DARIC.y"
                                                                                   { (yyval.ast) = token3(INSTR, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5755 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 248: /* expression_numeric: VAL '(' expression_string ')'  */
#line 403 "DARIC.y"
                                    { (yyval.ast) = token1(VAL, (yyvsp[-1].ast)); }
#line 5761 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 249: /* variable_integer: INTEGER_VARIABLE  */
#line 407 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5767 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 250: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 408 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5773 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 251: /* variable_integer: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 409 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5779 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 252: /* variable_integer: TYPE_VARIABLE INTEGER_VARIABLE  */
#line 410 "DARIC.y"
                                     { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5785 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 253: /* variable_integer: TYPE_VARIABLE '(' expression_numeric ')' INTEGER_VARIABLE  */
#line 411 "DARIC.y"
                                                                { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5791 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 254: /* variable_real: VARIABLE  */
#line 415 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 5797 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 255: /* variable_real: VARIABLE '(' expression_numeric ')'  */
#line 416 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5803 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 256: /* variable_real: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 417 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5809 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 257: /* variable_real: TYPE_VARIABLE VARIABLE  */
#line 418 "DARIC.y"
                             { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5815 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 258: /* variable_real: TYPE_VARIABLE '(' expression_numeric ')' VARIABLE  */
#line 419 "DARIC.y"
                                                        { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5821 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 259: /* variable_numeric: variable_integer  */
#line 423 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5827 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 260: /* variable_numeric: variable_real  */
#line 424 "DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5833 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 261: /* variable_string: STRING_VARIABLE  */
#line 428 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 5839 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 262: /* variable_string: STRING_VARIABLE '(' expression_numeric ')'  */
#line 429 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5845 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 263: /* variable_string: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 430 "DARIC.y"
                                                                        { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5851 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 264: /* variable_string: TYPE_VARIABLE '(' expression_numeric ')' STRING_VARIABLE  */
#line 431 "DARIC.y"
                                                               { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5857 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 265: /* variable: variable_numeric  */
#line 435 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5863 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 266: /* variable: variable_string  */
#line 436 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 5869 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 267: /* variable_list: variable  */
#line 440 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 5875 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 268: /* variable_list: variable ',' variable_list  */
#line 441 "DARIC.y"
                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5881 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 269: /* plain_variable: INTEGER_VARIABLE  */
#line 445 "DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5887 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 270: /* plain_variable: VARIABLE  */
#line 446 "DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 5893 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 271: /* plain_variable: STRING_VARIABLE  */
#line 447 "DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 5899 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 272: /* plain_variable_list: plain_variable  */
#line 451 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 5905 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 273: /* plain_variable_list: plain_variable ',' plain_variable_list  */
#line 452 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5911 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 274: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ')'  */
#line 456 "DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5917 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 275: /* dim_variable: INTEGER_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 457 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5923 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 276: /* dim_variable: VARIABLE '(' expression_numeric ')'  */
#line 458 "DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5929 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 277: /* dim_variable: VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 459 "DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5935 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 278: /* dim_variable: STRING_VARIABLE '(' expression_numeric ')'  */
#line 460 "DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5941 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 279: /* dim_variable: STRING_VARIABLE '(' expression_numeric ',' expression_numeric ')'  */
#line 461 "DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5947 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 280: /* dim_variable: TYPE_VARIABLE '(' expression_numeric ',' VARIABLE ')'  */
#line 462 "DARIC.y"
                                                            { (yyval.ast) = typevariable1d((yyvsp[-5].v_string), (yyvsp[-1].v_string), (yyvsp[-3].ast), Type::TYPE_ARRAY); }
#line 5953 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 281: /* dim_variable_list: dim_variable  */
#line 466 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 5959 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 282: /* dim_variable_list: dim_variable ',' dim_variable_list  */
#line 467 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5965 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 283: /* type_variable: TYPE_VARIABLE  */
#line 471 "DARIC.y"
                    { (yyval.ast) = variable((yyvsp[0].v_string), Type::TYPE); }
#line 5971 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 284: /* type_variable: TYPE_VARIABLE '(' expression_numeric ')'  */
#line 472 "DARIC.y"
                                               { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::TYPE_ARRAY); }
#line 5977 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 285: /* type: TYPE_ VARIABLE NL field_list ENDTYPE  */
#line 476 "DARIC.y"
                                           { (yyval.ast) = token2(TYPE_, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5983 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 286: /* field: FIELD variable  */
#line 480 "DARIC.y"
                     { (yyval.ast) = token1(FIELD, (yyvsp[0].ast)); }
#line 5989 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 287: /* field_list: field NL  */
#line 484 "DARIC.y"
              { (yyval.ast) = (yyvsp[-1].ast); }
#line 5995 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 288: /* field_list: field NL field_list  */
#line 485 "DARIC.y"
                          { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6001 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 289: /* string: LITERAL_STRING  */
#line 489 "DARIC.y"
                     { (yyval.ast) = string((yyvsp[0].v_string)); }
#line 6007 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 290: /* expression_string: string  */
#line 493 "DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 6013 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 291: /* expression_string: variable_string  */
#line 494 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6019 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 292: /* expression_string: expression_string PLUS expression_string  */
#line 495 "DARIC.y"
                                               { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6025 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 293: /* expression_string: expression_string E expression_string  */
#line 496 "DARIC.y"
                                            { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6031 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 294: /* expression_string: expression_string NE expression_string  */
#line 497 "DARIC.y"
                                             { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6037 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 295: /* expression_string: expression_string GE expression_string  */
#line 498 "DARIC.y"
                                             { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6043 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 296: /* expression_string: expression_string LE expression_string  */
#line 499 "DARIC.y"
                                             { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6049 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 297: /* expression_string: expression_string LT expression_string  */
#line 500 "DARIC.y"
                                             { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6055 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 298: /* expression_string: expression_string GT expression_string  */
#line 501 "DARIC.y"
                                             { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6061 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 299: /* expression_string: GETSH expression_numeric  */
#line 503 "DARIC.y"
                               { (yyval.ast) = token1(GETSH, (yyvsp[0].ast)); }
#line 6067 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 300: /* expression_string: FN_STRING '(' expression_list ')'  */
#line 505 "DARIC.y"
                                        { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 6073 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 301: /* expression_string: GETS  */
#line 507 "DARIC.y"
           { (yyval.ast) = token(GETS); }
#line 6079 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 302: /* expression_string: INKEYS '(' expression_numeric ')'  */
#line 508 "DARIC.y"
                                        { (yyval.ast) = token1(INKEYS, (yyvsp[-1].ast)); }
#line 6085 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 303: /* expression_string: TIMES  */
#line 510 "DARIC.y"
            { (yyval.ast) = token(TIMES); }
#line 6091 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 304: /* expression_string: STRS '(' expression_numeric ')'  */
#line 511 "DARIC.y"
                                      { (yyval.ast) = token1(STRS, (yyvsp[-1].ast)); }
#line 6097 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 305: /* expression_string: STRS TILDE '(' expression_numeric ')'  */
#line 512 "DARIC.y"
                                            { (yyval.ast) = token1(STRSHEX, (yyvsp[-1].ast)); }
#line 6103 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 306: /* expression_string: STRINGS '(' expression_numeric ',' expression_string ')'  */
#line 513 "DARIC.y"
                                                               { (yyval.ast) = token2(STRINGS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6109 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 307: /* expression_string: CHRS '(' expression_numeric ')'  */
#line 514 "DARIC.y"
                                      { (yyval.ast) = token1(CHRS, (yyvsp[-1].ast)); }
#line 6115 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 308: /* expression_string: LEFTS '(' expression_string ',' expression_numeric ')'  */
#line 515 "DARIC.y"
                                                             { (yyval.ast) = token2(LEFTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6121 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 309: /* expression_string: MIDS '(' expression_string ',' expression_numeric ',' expression_numeric ')'  */
#line 516 "DARIC.y"
                                                                                   { (yyval.ast) = token3(MIDS, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6127 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 310: /* expression_string: RIGHTS '(' expression_string ',' expression_numeric ')'  */
#line 517 "DARIC.y"
                                                              { (yyval.ast) = token2(RIGHTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6133 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 311: /* expression: expression_numeric  */
#line 521 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6139 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 312: /* expression: expression_string  */
#line 522 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6145 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 313: /* expression_list: %empty  */
#line 526 "DARIC.y"
                     { (yyval.ast) = NULL; }
#line 6151 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 314: /* expression_list: expression  */
#line 527 "DARIC.y"
                 { (yyval.ast) = (yyvsp[0].ast); }
#line 6157 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 315: /* expression_list: expression ',' expression_list  */
#line 528 "DARIC.y"
                                     { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6163 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 316: /* assignment_single: variable_numeric E expression_numeric  */
#line 532 "DARIC.y"
                                            { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6169 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 317: /* assignment_single: variable_string E expression_string  */
#line 533 "DARIC.y"
                                          { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6175 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 318: /* assignment_single: type_variable E expression  */
#line 534 "DARIC.y"
                                 { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6181 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 319: /* assignment_single: type_variable variable E expression  */
#line 535 "DARIC.y"
                                          { (yyval.ast) = assignment(link((yyvsp[-3].ast), (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 6187 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 320: /* assignment_list: assignment_single  */
#line 539 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6193 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 321: /* assignment_list: assignment_single ',' assignment_list  */
#line 540 "DARIC.y"
                                            { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6199 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 322: /* assignment: assignment_list  */
#line 544 "DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6205 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 323: /* assignment: LOCAL assignment_list  */
#line 545 "DARIC.y"
                            { (yyval.ast) = token1(LOCAL, (yyvsp[0].ast)); }
#line 6211 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 324: /* assignment: GLOBAL assignment_list  */
#line 546 "DARIC.y"
                             { (yyval.ast) = token1(GLOBAL, (yyvsp[0].ast)); }
#line 6217 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 325: /* assignment: variable_numeric SHL_E expression_numeric  */
#line 547 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6223 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 326: /* assignment: variable_numeric SHR_E expression_numeric  */
#line 548 "DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6229 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 327: /* assignment: variable_numeric PLUS_E expression_numeric  */
#line 549 "DARIC.y"
                                                 { (yyval.ast) = assignment((yyvsp[-2].ast), token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6235 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 328: /* assignment: variable_numeric MINUS_E expression_numeric  */
#line 550 "DARIC.y"
                                                  { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6241 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 329: /* assignment: variable_numeric MULTIPLY_E expression_numeric  */
#line 551 "DARIC.y"
                                                     { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6247 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 330: /* assignment: variable_numeric DIVIDE_E expression_numeric  */
#line 552 "DARIC.y"
                                                   { (yyval.ast) = assignment((yyvsp[-2].ast), token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6253 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 331: /* assignment: variable_numeric INTEGERDIVIDE_E expression_numeric  */
#line 553 "DARIC.y"
                                                          { (yyval.ast) = assignment((yyvsp[-2].ast), token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6259 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 332: /* expression_print: expression_string  */
#line 557 "DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6265 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 333: /* expression_print: expression_numeric  */
#line 558 "DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6271 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 334: /* expression_print: ','  */
#line 559 "DARIC.y"
          { (yyval.ast) = token(COMMA); }
#line 6277 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 335: /* expression_print: TILDE  */
#line 560 "DARIC.y"
            { (yyval.ast) = token(TILDE); }
#line 6283 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 336: /* expression_print: TICK  */
#line 561 "DARIC.y"
           { (yyval.ast) = token(TICK); }
#line 6289 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 337: /* expression_print: SPC '(' expression_numeric ')'  */
#line 562 "DARIC.y"
                                     { (yyval.ast) = token1(SPC, (yyvsp[-1].ast)); }
#line 6295 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 338: /* expression_print: SEMICOLON  */
#line 563 "DARIC.y"
                { (yyval.ast) = token(SEMICOLON); }
#line 6301 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 339: /* expression_print_list: expression_print  */
#line 567 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6307 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 340: /* expression_print_list: expression_print expression_print_list  */
#line 568 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6313 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 342: /* expression_input_list: expression_input  */
#line 576 "DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6319 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 343: /* expression_input_list: expression_input ',' expression_input_list  */
#line 577 "DARIC.y"
                                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6325 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 344: /* proc_parameter: %empty  */
#line 581 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6331 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 345: /* proc_parameter: variable  */
#line 582 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6337 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 346: /* proc_parameter: RETURN variable  */
#line 583 "DARIC.y"
                      { (yyval.ast) = token1(RETURN_PARAMETER, (yyvsp[0].ast)); }
#line 6343 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 347: /* proc_parameter_list: proc_parameter  */
#line 587 "DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 6349 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 348: /* proc_parameter_list: proc_parameter ',' proc_parameter_list  */
#line 588 "DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6355 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 349: /* fn_parameter: %empty  */
#line 592 "DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6361 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 350: /* fn_parameter: variable  */
#line 593 "DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6367 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 351: /* fn_parameter_list: fn_parameter  */
#line 597 "DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6373 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 352: /* fn_parameter_list: fn_parameter ',' fn_parameter_list  */
#line 598 "DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6379 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 353: /* when: WHEN expression_list statements NL  */
#line 602 "DARIC.y"
                                         { (yyval.ast) = token2(WHEN, (yyvsp[-2].ast), (yyvsp[-1].ast)); }
#line 6385 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 354: /* when_list: when  */
#line 606 "DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 6391 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 355: /* when_list: when when_list  */
#line 607 "DARIC.y"
                     { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6397 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 356: /* define_function: DEFPROC '(' proc_parameter_list ')' NL embed_lines ENDPROC  */
#line 610 "DARIC.y"
                                                                 { (yyval.ast) = token3typed(DEFPROC, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::NOTYPE); }
#line 6403 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 357: /* define_function: DEFFN_INTEGER '(' fn_parameter_list ')' NL embed_lines ENDFN  */
#line 611 "DARIC.y"
                                                                   { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::INTEGER); }
#line 6409 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 358: /* define_function: DEFFN_REAL '(' fn_parameter_list ')' NL embed_lines ENDFN  */
#line 612 "DARIC.y"
                                                                { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::REAL); }
#line 6415 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;

  case 359: /* define_function: DEFFN_STRING '(' fn_parameter_list ')' NL embed_lines ENDFN  */
#line 613 "DARIC.y"
                                                                  { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::STRING); }
#line 6421 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
    break;


#line 6425 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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

#line 616 "DARIC.y"


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
