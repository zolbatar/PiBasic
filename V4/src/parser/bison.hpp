/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_SRC_PARSER_BISON_HPP_INCLUDED
# define YY_YY_SRC_PARSER_BISON_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LINE_NUMBER = 258,
    LITERAL_INT = 259,
    LITERAL_REAL = 260,
    LITERAL_STRING = 261,
    INTEGER_VARIABLE = 262,
    VARIABLE = 263,
    STRING_VARIABLE = 264,
    TYPE_VARIABLE = 265,
    DEFINE_PROCEDURE = 266,
    DEFINE_INTEGER_FUNCTION = 267,
    DEFINE_STRING_FUNCTION = 268,
    DEFINE_REAL_FUNCTION = 269,
    PROCEDURE = 270,
    INTEGER_FUNCTION = 271,
    REAL_FUNCTION = 272,
    STRING_FUNCTION = 273,
    NL = 274,
    SS = 275,
    SEMICOLON = 276,
    COMMA = 277,
    INTEGER_DIVIDE = 278,
    E = 279,
    LE = 280,
    GE = 281,
    NE = 282,
    SHL = 283,
    SHR = 284,
    LT = 285,
    GT = 286,
    PLUS = 287,
    MINUS = 288,
    MULTIPLY = 289,
    DIVIDE = 290,
    TILDE = 291,
    TICK = 292,
    SHL_E = 293,
    SHR_E = 294,
    PLUS_E = 295,
    MINUS_E = 296,
    MULTIPLY_E = 297,
    DIVIDE_E = 298,
    INTEGERDIVIDE_E = 299,
    SWAP = 300,
    SWAP_I = 301,
    SWAP_F = 302,
    SWAP_S = 303,
    END_FN = 304,
    END_PROC = 305,
    RETURN = 306,
    RETURN_WITH_VALUE = 307,
    DEFPROC = 308,
    DEFFN = 309,
    CALLPROC = 310,
    CALLFN = 311,
    RETURN_PARAMETER = 312,
    BGET = 313,
    BPUT = 314,
    CLOSE = 315,
    EOFH = 316,
    OPENIN = 317,
    OPENUP = 318,
    OPENOUT = 319,
    PTR = 320,
    PTRA = 321,
    GETSH = 322,
    LISTFILES = 323,
    CASE = 324,
    ELSE = 325,
    END_CASE = 326,
    END_IF = 327,
    END_WHILE = 328,
    FOR = 329,
    GOSUB = 330,
    GOTO = 331,
    IF = 332,
    NEXT = 333,
    OF = 334,
    OTHERWISE = 335,
    REPEAT = 336,
    STEP = 337,
    THEN = 338,
    TO = 339,
    UNTIL = 340,
    WHEN = 341,
    WHILE = 342,
    IN_ = 343,
    FORIN = 344,
    DATA = 345,
    READ = 346,
    RESTORE = 347,
    ARRAYSIZE = 348,
    DIM = 349,
    LOCALDIM = 350,
    END_TYPE = 351,
    FIELD = 352,
    GLOBAL = 353,
    LOCAL = 354,
    TYPE_ = 355,
    END = 356,
    TRACEON = 357,
    TRACEOFF = 358,
    BREAKPOINT = 359,
    RND = 360,
    RND0 = 361,
    RND1 = 362,
    RNDREAL = 363,
    RNDRANGE = 364,
    FLOAT_ = 365,
    INT_ = 366,
    ACS = 367,
    DIV = 368,
    MOD = 369,
    SQR = 370,
    LN = 371,
    LOG = 372,
    EXP = 373,
    ATN = 374,
    TAN = 375,
    COS = 376,
    SIN = 377,
    ASN = 378,
    ABS = 379,
    DEG = 380,
    RAD = 381,
    SGN = 382,
    VAL = 383,
    PI = 384,
    BOOLFALSE = 385,
    BOOLTRUE = 386,
    ASC = 387,
    CHRS = 388,
    INSTR = 389,
    LEFTS = 390,
    MIDS = 391,
    RIGHTS = 392,
    LEN = 393,
    STRS = 394,
    STRSHEX = 395,
    STRINGS = 396,
    OSCLI = 397,
    TIME = 398,
    TIMES = 399,
    AND = 400,
    OR = 401,
    EOR = 402,
    NOT = 403,
    CHAIN = 404,
    EXPECT = 405,
    RED = 406,
    GREEN = 407,
    YELLOW = 408,
    BLUE = 409,
    MAGENTA = 410,
    CYAN = 411,
    WHITE = 412,
    BLACK = 413,
    CLS = 414,
    CLG = 415,
    COLOUR = 416,
    COLOURBG = 417,
    COLOUREXP = 418,
    FLIP = 419,
    GRAPHICS = 420,
    FILL = 421,
    SHADED = 422,
    LINE = 423,
    PLOT = 424,
    POINT_ = 425,
    RECTANGLE = 426,
    RECTANGLEFILL = 427,
    TRIANGLE = 428,
    TRIANGLEFILL = 429,
    TRIANGLESHADED = 430,
    CLIPON = 431,
    CLIPOFF = 432,
    CIRCLE = 433,
    CIRCLEFILL = 434,
    TEXT = 435,
    TEXTRIGHT = 436,
    TEXTCENTRE = 437,
    LOADTYPEFACE = 438,
    CREATEFONT = 439,
    MONO15 = 440,
    MONO20 = 441,
    MONO25 = 442,
    MONO30 = 443,
    MONO35 = 444,
    MONO40 = 445,
    MONO50 = 446,
    MONO75 = 447,
    MONO100 = 448,
    PROP15 = 449,
    PROP20 = 450,
    PROP25 = 451,
    PROP30 = 452,
    PROP35 = 453,
    PROP40 = 454,
    PROP50 = 455,
    PROP75 = 456,
    PROP100 = 457,
    SCREENWIDTH = 458,
    SCREENHEIGHT = 459,
    SHOWFPS = 460,
    LASTPOS = 461,
    INKEY = 462,
    INKEYS = 463,
    INPUT_ = 464,
    PRINT = 465,
    SPC = 466,
    SINKEY = 467,
    SINKEYS = 468,
    INPUT_NOQUESTIONMARK = 469,
    GET = 470,
    GETS = 471,
    GET_S = 472,
    GETS_S = 473,
    MOUSE = 474,
    CREATEVERTEX = 475,
    CREATETRIANGLE = 476,
    CREATESHAPE = 477,
    CREATEOBJECT = 478,
    TRANSLATE = 479,
    ROTATE = 480,
    SCALE = 481,
    RENDERFRAME = 482,
    DELETEOBJECT = 483,
    SOLID = 484,
    WIREFRAME = 485,
    FILLEDWIREFRAME = 486,
    INTEGERDIVIDE = 487,
    NEG = 488
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "Grammar/DARIC.y"

    int v_int;
    double v_real;
    const char *v_string;
    struct AST *ast;

#line 298 "src/parser/bison.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_SRC_PARSER_BISON_HPP_INCLUDED  */
