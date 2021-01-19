/* A Bison parser, made by GNU Bison 3.7.1.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_C_USERS_D_DUD_SOURCE_REPOS_PIBASIC_V4_SRC_PARSER_BISON_HPP_INCLUDED
# define YY_YY_C_USERS_D_DUD_SOURCE_REPOS_PIBASIC_V4_SRC_PARSER_BISON_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    LINE_NUMBER = 258,             /* LINE_NUMBER  */
    LITERAL_INT = 259,             /* LITERAL_INT  */
    LITERAL_REAL = 260,            /* LITERAL_REAL  */
    LITERAL_STRING = 261,          /* LITERAL_STRING  */
    INTEGER_VARIABLE = 262,        /* INTEGER_VARIABLE  */
    VARIABLE = 263,                /* VARIABLE  */
    STRING_VARIABLE = 264,         /* STRING_VARIABLE  */
    TYPE_VARIABLE = 265,           /* TYPE_VARIABLE  */
    DEFINE_PROCEDURE = 266,        /* DEFINE_PROCEDURE  */
    DEFINE_INTEGER_FUNCTION = 267, /* DEFINE_INTEGER_FUNCTION  */
    DEFINE_STRING_FUNCTION = 268,  /* DEFINE_STRING_FUNCTION  */
    DEFINE_REAL_FUNCTION = 269,    /* DEFINE_REAL_FUNCTION  */
    PROCEDURE = 270,               /* PROCEDURE  */
    INTEGER_FUNCTION = 271,        /* INTEGER_FUNCTION  */
    REAL_FUNCTION = 272,           /* REAL_FUNCTION  */
    STRING_FUNCTION = 273,         /* STRING_FUNCTION  */
    NL = 274,                      /* NL  */
    SS = 275,                      /* SS  */
    SEMICOLON = 276,               /* SEMICOLON  */
    COMMA = 277,                   /* COMMA  */
    INTEGER_DIVIDE = 278,          /* INTEGER_DIVIDE  */
    E = 279,                       /* E  */
    LE = 280,                      /* LE  */
    GE = 281,                      /* GE  */
    NE = 282,                      /* NE  */
    SHL = 283,                     /* SHL  */
    SHR = 284,                     /* SHR  */
    LT = 285,                      /* LT  */
    GT = 286,                      /* GT  */
    PLUS = 287,                    /* PLUS  */
    MINUS = 288,                   /* MINUS  */
    MULTIPLY = 289,                /* MULTIPLY  */
    DIVIDE = 290,                  /* DIVIDE  */
    TILDE = 291,                   /* TILDE  */
    TICK = 292,                    /* TICK  */
    SHL_E = 293,                   /* SHL_E  */
    SHR_E = 294,                   /* SHR_E  */
    PLUS_E = 295,                  /* PLUS_E  */
    MINUS_E = 296,                 /* MINUS_E  */
    MULTIPLY_E = 297,              /* MULTIPLY_E  */
    DIVIDE_E = 298,                /* DIVIDE_E  */
    INTEGERDIVIDE_E = 299,         /* INTEGERDIVIDE_E  */
    SWAP = 300,                    /* SWAP  */
    SWAP_I = 301,                  /* SWAP_I  */
    SWAP_F = 302,                  /* SWAP_F  */
    SWAP_S = 303,                  /* SWAP_S  */
    END_FN = 304,                  /* END_FN  */
    END_PROC = 305,                /* END_PROC  */
    RETURN = 306,                  /* RETURN  */
    RETURN_WITH_VALUE = 307,       /* RETURN_WITH_VALUE  */
    DEFPROC = 308,                 /* DEFPROC  */
    DEFFN = 309,                   /* DEFFN  */
    CALLPROC = 310,                /* CALLPROC  */
    CALLFN = 311,                  /* CALLFN  */
    RETURN_PARAMETER = 312,        /* RETURN_PARAMETER  */
    BGET = 313,                    /* BGET  */
    BPUT = 314,                    /* BPUT  */
    CLOSE = 315,                   /* CLOSE  */
    EOFH = 316,                    /* EOFH  */
    OPENIN = 317,                  /* OPENIN  */
    OPENUP = 318,                  /* OPENUP  */
    OPENOUT = 319,                 /* OPENOUT  */
    PTR = 320,                     /* PTR  */
    PTRA = 321,                    /* PTRA  */
    GETSH = 322,                   /* GETSH  */
    LISTFILES = 323,               /* LISTFILES  */
    CASE = 324,                    /* CASE  */
    ELSE = 325,                    /* ELSE  */
    END_CASE = 326,                /* END_CASE  */
    END_IF = 327,                  /* END_IF  */
    END_WHILE = 328,               /* END_WHILE  */
    FOR = 329,                     /* FOR  */
    GOSUB = 330,                   /* GOSUB  */
    GOTO = 331,                    /* GOTO  */
    IF = 332,                      /* IF  */
    NEXT = 333,                    /* NEXT  */
    OF = 334,                      /* OF  */
    OTHERWISE = 335,               /* OTHERWISE  */
    REPEAT = 336,                  /* REPEAT  */
    STEP = 337,                    /* STEP  */
    THEN = 338,                    /* THEN  */
    TO = 339,                      /* TO  */
    UNTIL = 340,                   /* UNTIL  */
    WHEN = 341,                    /* WHEN  */
    WHILE = 342,                   /* WHILE  */
    IN_ = 343,                     /* IN_  */
    FORIN = 344,                   /* FORIN  */
    DATA = 345,                    /* DATA  */
    READ = 346,                    /* READ  */
    RESTORE = 347,                 /* RESTORE  */
    ARRAYSIZE = 348,               /* ARRAYSIZE  */
    DIM = 349,                     /* DIM  */
    LOCALDIM = 350,                /* LOCALDIM  */
    END_TYPE = 351,                /* END_TYPE  */
    FIELD = 352,                   /* FIELD  */
    GLOBAL = 353,                  /* GLOBAL  */
    LOCAL = 354,                   /* LOCAL  */
    TYPE_ = 355,                   /* TYPE_  */
    END = 356,                     /* END  */
    TRACEON = 357,                 /* TRACEON  */
    TRACEOFF = 358,                /* TRACEOFF  */
    BREAKPOINT = 359,              /* BREAKPOINT  */
    RND = 360,                     /* RND  */
    RND0 = 361,                    /* RND0  */
    RND1 = 362,                    /* RND1  */
    RNDREAL = 363,                 /* RNDREAL  */
    RNDRANGE = 364,                /* RNDRANGE  */
    FLOAT_ = 365,                  /* FLOAT_  */
    INT_ = 366,                    /* INT_  */
    ACS = 367,                     /* ACS  */
    DIV = 368,                     /* DIV  */
    MOD = 369,                     /* MOD  */
    SQR = 370,                     /* SQR  */
    LN = 371,                      /* LN  */
    LOG = 372,                     /* LOG  */
    EXP = 373,                     /* EXP  */
    ATN = 374,                     /* ATN  */
    TAN = 375,                     /* TAN  */
    COS = 376,                     /* COS  */
    SIN = 377,                     /* SIN  */
    ASN = 378,                     /* ASN  */
    ABS = 379,                     /* ABS  */
    DEG = 380,                     /* DEG  */
    RAD = 381,                     /* RAD  */
    SGN = 382,                     /* SGN  */
    VAL = 383,                     /* VAL  */
    PI = 384,                      /* PI  */
    BOOLFALSE = 385,               /* BOOLFALSE  */
    BOOLTRUE = 386,                /* BOOLTRUE  */
    ASC = 387,                     /* ASC  */
    CHRS = 388,                    /* CHRS  */
    INSTR = 389,                   /* INSTR  */
    LEFTS = 390,                   /* LEFTS  */
    MIDS = 391,                    /* MIDS  */
    RIGHTS = 392,                  /* RIGHTS  */
    LEN = 393,                     /* LEN  */
    STRS = 394,                    /* STRS  */
    STRSHEX = 395,                 /* STRSHEX  */
    STRINGS = 396,                 /* STRINGS  */
    OSCLI = 397,                   /* OSCLI  */
    TIME = 398,                    /* TIME  */
    TIMES = 399,                   /* TIMES  */
    AND = 400,                     /* AND  */
    OR = 401,                      /* OR  */
    EOR = 402,                     /* EOR  */
    NOT = 403,                     /* NOT  */
    CHAIN = 404,                   /* CHAIN  */
    EXPECT = 405,                  /* EXPECT  */
    RED = 406,                     /* RED  */
    GREEN = 407,                   /* GREEN  */
    YELLOW = 408,                  /* YELLOW  */
    BLUE = 409,                    /* BLUE  */
    MAGENTA = 410,                 /* MAGENTA  */
    CYAN = 411,                    /* CYAN  */
    WHITE = 412,                   /* WHITE  */
    BLACK = 413,                   /* BLACK  */
    CLS = 414,                     /* CLS  */
    CLG = 415,                     /* CLG  */
    COLOUR = 416,                  /* COLOUR  */
    COLOURBG = 417,                /* COLOURBG  */
    COLOUREXP = 418,               /* COLOUREXP  */
    FLIP = 419,                    /* FLIP  */
    GRAPHICS = 420,                /* GRAPHICS  */
    BANKED = 421,                  /* BANKED  */
    FILL = 422,                    /* FILL  */
    SHADED = 423,                  /* SHADED  */
    LINE = 424,                    /* LINE  */
    PLOT = 425,                    /* PLOT  */
    POINT_ = 426,                  /* POINT_  */
    RECTANGLE = 427,               /* RECTANGLE  */
    RECTANGLEFILL = 428,           /* RECTANGLEFILL  */
    TRIANGLE = 429,                /* TRIANGLE  */
    TRIANGLEFILL = 430,            /* TRIANGLEFILL  */
    TRIANGLESHADED = 431,          /* TRIANGLESHADED  */
    CLIPON = 432,                  /* CLIPON  */
    CLIPOFF = 433,                 /* CLIPOFF  */
    CIRCLE = 434,                  /* CIRCLE  */
    CIRCLEFILL = 435,              /* CIRCLEFILL  */
    TEXT = 436,                    /* TEXT  */
    TEXTRIGHT = 437,               /* TEXTRIGHT  */
    TEXTCENTRE = 438,              /* TEXTCENTRE  */
    LOADTYPEFACE = 439,            /* LOADTYPEFACE  */
    CREATEFONT = 440,              /* CREATEFONT  */
    MONO15 = 441,                  /* MONO15  */
    MONO20 = 442,                  /* MONO20  */
    MONO25 = 443,                  /* MONO25  */
    MONO30 = 444,                  /* MONO30  */
    MONO35 = 445,                  /* MONO35  */
    MONO40 = 446,                  /* MONO40  */
    MONO50 = 447,                  /* MONO50  */
    MONO75 = 448,                  /* MONO75  */
    MONO100 = 449,                 /* MONO100  */
    PROP15 = 450,                  /* PROP15  */
    PROP20 = 451,                  /* PROP20  */
    PROP25 = 452,                  /* PROP25  */
    PROP30 = 453,                  /* PROP30  */
    PROP35 = 454,                  /* PROP35  */
    PROP40 = 455,                  /* PROP40  */
    PROP50 = 456,                  /* PROP50  */
    PROP75 = 457,                  /* PROP75  */
    PROP100 = 458,                 /* PROP100  */
    SCREENWIDTH = 459,             /* SCREENWIDTH  */
    SCREENHEIGHT = 460,            /* SCREENHEIGHT  */
    SHOWFPS = 461,                 /* SHOWFPS  */
    LASTPOS = 462,                 /* LASTPOS  */
    INKEY = 463,                   /* INKEY  */
    INKEYS = 464,                  /* INKEYS  */
    INPUT_ = 465,                  /* INPUT_  */
    PRINT = 466,                   /* PRINT  */
    SPC = 467,                     /* SPC  */
    SINKEY = 468,                  /* SINKEY  */
    SINKEYS = 469,                 /* SINKEYS  */
    INPUT_NOQUESTIONMARK = 470,    /* INPUT_NOQUESTIONMARK  */
    GET = 471,                     /* GET  */
    GETS = 472,                    /* GETS  */
    GET_S = 473,                   /* GET_S  */
    GETS_S = 474,                  /* GETS_S  */
    MOUSE = 475,                   /* MOUSE  */
    CREATEVERTEX = 476,            /* CREATEVERTEX  */
    CREATETRIANGLE = 477,          /* CREATETRIANGLE  */
    CREATESHAPE = 478,             /* CREATESHAPE  */
    CREATEOBJECT = 479,            /* CREATEOBJECT  */
    TRANSLATE = 480,               /* TRANSLATE  */
    ROTATE = 481,                  /* ROTATE  */
    SCALE = 482,                   /* SCALE  */
    RENDERFRAME = 483,             /* RENDERFRAME  */
    DELETEOBJECT = 484,            /* DELETEOBJECT  */
    SOLID = 485,                   /* SOLID  */
    WIREFRAME = 486,               /* WIREFRAME  */
    FILLEDWIREFRAME = 487,         /* FILLEDWIREFRAME  */
    INTEGERDIVIDE = 488,           /* INTEGERDIVIDE  */
    NEG = 489                      /* NEG  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "DARIC.y"

    int v_int;
    double v_real;
    const char *v_string;
    struct AST *ast;

#line 305 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.hpp"

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

#endif /* !YY_YY_C_USERS_D_DUD_SOURCE_REPOS_PIBASIC_V4_SRC_PARSER_BISON_HPP_INCLUDED  */
