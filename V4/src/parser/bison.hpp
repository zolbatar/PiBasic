/* A Bison parser, made by GNU Bison 3.7.4.  */

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
# define YYDEBUG 1
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
    DEFPROC = 266,                 /* DEFPROC  */
    DEFFN_INTEGER = 267,           /* DEFFN_INTEGER  */
    DEFFN_STRING = 268,            /* DEFFN_STRING  */
    DEFFN_REAL = 269,              /* DEFFN_REAL  */
    PROCEDURE = 270,               /* PROCEDURE  */
    FN_INTEGER = 271,              /* FN_INTEGER  */
    FN_REAL = 272,                 /* FN_REAL  */
    FN_STRING = 273,               /* FN_STRING  */
    NL = 274,                      /* NL  */
    COLON = 275,                   /* COLON  */
    SEMICOLON = 276,               /* SEMICOLON  */
    COMMA = 277,                   /* COMMA  */
    SEPARATOR = 278,               /* SEPARATOR  */
    INTEGERDIVIDE = 279,           /* INTEGERDIVIDE  */
    E = 280,                       /* E  */
    LE = 281,                      /* LE  */
    GE = 282,                      /* GE  */
    NE = 283,                      /* NE  */
    SHL = 284,                     /* SHL  */
    SHR = 285,                     /* SHR  */
    LT = 286,                      /* LT  */
    GT = 287,                      /* GT  */
    PLUS = 288,                    /* PLUS  */
    MINUS = 289,                   /* MINUS  */
    MULTIPLY = 290,                /* MULTIPLY  */
    DIVIDE = 291,                  /* DIVIDE  */
    TILDE = 292,                   /* TILDE  */
    TICK = 293,                    /* TICK  */
    SHL_E = 294,                   /* SHL_E  */
    SHR_E = 295,                   /* SHR_E  */
    PLUS_E = 296,                  /* PLUS_E  */
    MINUS_E = 297,                 /* MINUS_E  */
    MULTIPLY_E = 298,              /* MULTIPLY_E  */
    DIVIDE_E = 299,                /* DIVIDE_E  */
    INTEGERDIVIDE_E = 300,         /* INTEGERDIVIDE_E  */
    SWAP = 301,                    /* SWAP  */
    SWAP_I = 302,                  /* SWAP_I  */
    SWAP_F = 303,                  /* SWAP_F  */
    SWAP_S = 304,                  /* SWAP_S  */
    ENDFN = 305,                   /* ENDFN  */
    ENDPROC = 306,                 /* ENDPROC  */
    RETURN = 307,                  /* RETURN  */
    RETURN_WITH_VALUE = 308,       /* RETURN_WITH_VALUE  */
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
    ENDCASE = 326,                 /* ENDCASE  */
    ENDIF = 327,                   /* ENDIF  */
    ENDWHILE = 328,                /* ENDWHILE  */
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
    ENDTYPE = 351,                 /* ENDTYPE  */
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
    SERIF15 = 459,                 /* SERIF15  */
    SERIF20 = 460,                 /* SERIF20  */
    SERIF25 = 461,                 /* SERIF25  */
    SERIF30 = 462,                 /* SERIF30  */
    SERIF35 = 463,                 /* SERIF35  */
    SERIF40 = 464,                 /* SERIF40  */
    SERIF50 = 465,                 /* SERIF50  */
    SERIF75 = 466,                 /* SERIF75  */
    SERIF100 = 467,                /* SERIF100  */
    SCREENWIDTH = 468,             /* SCREENWIDTH  */
    SCREENHEIGHT = 469,            /* SCREENHEIGHT  */
    SHOWFPS = 470,                 /* SHOWFPS  */
    LASTPOS = 471,                 /* LASTPOS  */
    INKEY = 472,                   /* INKEY  */
    INKEYS = 473,                  /* INKEYS  */
    INPUT_ = 474,                  /* INPUT_  */
    PRINT = 475,                   /* PRINT  */
    SPC = 476,                     /* SPC  */
    SINKEY = 477,                  /* SINKEY  */
    SINKEYS = 478,                 /* SINKEYS  */
    INPUT_NOQUESTIONMARK = 479,    /* INPUT_NOQUESTIONMARK  */
    GET = 480,                     /* GET  */
    GETS = 481,                    /* GETS  */
    GET_S = 482,                   /* GET_S  */
    GETS_S = 483,                  /* GETS_S  */
    MOUSE = 484,                   /* MOUSE  */
    CREATEVERTEX = 485,            /* CREATEVERTEX  */
    CREATETRIANGLE = 486,          /* CREATETRIANGLE  */
    CREATESHAPE = 487,             /* CREATESHAPE  */
    CREATEOBJECT = 488,            /* CREATEOBJECT  */
    TRANSLATE = 489,               /* TRANSLATE  */
    ROTATE = 490,                  /* ROTATE  */
    SCALE = 491,                   /* SCALE  */
    RENDERFRAME = 492,             /* RENDERFRAME  */
    DELETEOBJECT = 493,            /* DELETEOBJECT  */
    SOLID = 494,                   /* SOLID  */
    WIREFRAME = 495,               /* WIREFRAME  */
    FILLEDWIREFRAME = 496,         /* FILLEDWIREFRAME  */
    NEG = 497                      /* NEG  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "DARIC.y"

    int v_int;
    double v_real;
    const char *v_string;
    struct AST *ast;

#line 313 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.hpp"

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
