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
    SEMICOLON = 274,               /* SEMICOLON  */
    COMMA = 275,                   /* COMMA  */
    NL = 276,                      /* NL  */
    COLON = 277,                   /* COLON  */
    INTEGERDIVIDE = 278,           /* INTEGERDIVIDE  */
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
    ENDFN = 304,                   /* ENDFN  */
    ENDPROC = 305,                 /* ENDPROC  */
    RETURN = 306,                  /* RETURN  */
    RETURN_WITH_VALUE = 307,       /* RETURN_WITH_VALUE  */
    DEFFN = 308,                   /* DEFFN  */
    CALLPROC = 309,                /* CALLPROC  */
    CALLFN = 310,                  /* CALLFN  */
    RETURN_PARAMETER = 311,        /* RETURN_PARAMETER  */
    BGET = 312,                    /* BGET  */
    BPUT = 313,                    /* BPUT  */
    CLOSE = 314,                   /* CLOSE  */
    EOFH = 315,                    /* EOFH  */
    OPENIN = 316,                  /* OPENIN  */
    OPENUP = 317,                  /* OPENUP  */
    OPENOUT = 318,                 /* OPENOUT  */
    PTR = 319,                     /* PTR  */
    PTRA = 320,                    /* PTRA  */
    GETSH = 321,                   /* GETSH  */
    LISTFILES = 322,               /* LISTFILES  */
    CASE = 323,                    /* CASE  */
    ELSE = 324,                    /* ELSE  */
    ENDCASE = 325,                 /* ENDCASE  */
    ENDIF = 326,                   /* ENDIF  */
    ENDWHILE = 327,                /* ENDWHILE  */
    FOR = 328,                     /* FOR  */
    GOSUB = 329,                   /* GOSUB  */
    GOTO = 330,                    /* GOTO  */
    IF = 331,                      /* IF  */
    NEXT = 332,                    /* NEXT  */
    OF = 333,                      /* OF  */
    OTHERWISE = 334,               /* OTHERWISE  */
    REPEAT = 335,                  /* REPEAT  */
    STEP = 336,                    /* STEP  */
    THEN = 337,                    /* THEN  */
    TO = 338,                      /* TO  */
    UNTIL = 339,                   /* UNTIL  */
    WHEN = 340,                    /* WHEN  */
    WHILE = 341,                   /* WHILE  */
    IN_ = 342,                     /* IN_  */
    FORIN = 343,                   /* FORIN  */
    DATA = 344,                    /* DATA  */
    READ = 345,                    /* READ  */
    RESTORE = 346,                 /* RESTORE  */
    ARRAYSIZE = 347,               /* ARRAYSIZE  */
    DIM = 348,                     /* DIM  */
    LOCALDIM = 349,                /* LOCALDIM  */
    ENDTYPE = 350,                 /* ENDTYPE  */
    FIELD = 351,                   /* FIELD  */
    GLOBAL = 352,                  /* GLOBAL  */
    LOCAL = 353,                   /* LOCAL  */
    TYPE_ = 354,                   /* TYPE_  */
    END = 355,                     /* END  */
    TRACEON = 356,                 /* TRACEON  */
    TRACEOFF = 357,                /* TRACEOFF  */
    BREAKPOINT = 358,              /* BREAKPOINT  */
    RND = 359,                     /* RND  */
    RND0 = 360,                    /* RND0  */
    RND1 = 361,                    /* RND1  */
    RNDREAL = 362,                 /* RNDREAL  */
    RNDRANGE = 363,                /* RNDRANGE  */
    FLOAT_ = 364,                  /* FLOAT_  */
    INT_ = 365,                    /* INT_  */
    ACS = 366,                     /* ACS  */
    DIV = 367,                     /* DIV  */
    MOD = 368,                     /* MOD  */
    SQR = 369,                     /* SQR  */
    LN = 370,                      /* LN  */
    LOG = 371,                     /* LOG  */
    EXP = 372,                     /* EXP  */
    ATN = 373,                     /* ATN  */
    TAN = 374,                     /* TAN  */
    COS = 375,                     /* COS  */
    SIN = 376,                     /* SIN  */
    ASN = 377,                     /* ASN  */
    ABS = 378,                     /* ABS  */
    DEG = 379,                     /* DEG  */
    RAD = 380,                     /* RAD  */
    SGN = 381,                     /* SGN  */
    VAL = 382,                     /* VAL  */
    PI = 383,                      /* PI  */
    BOOLFALSE = 384,               /* BOOLFALSE  */
    BOOLTRUE = 385,                /* BOOLTRUE  */
    ASC = 386,                     /* ASC  */
    CHRS = 387,                    /* CHRS  */
    INSTR = 388,                   /* INSTR  */
    LEFTS = 389,                   /* LEFTS  */
    MIDS = 390,                    /* MIDS  */
    RIGHTS = 391,                  /* RIGHTS  */
    LEN = 392,                     /* LEN  */
    STRS = 393,                    /* STRS  */
    STRSHEX = 394,                 /* STRSHEX  */
    STRINGS = 395,                 /* STRINGS  */
    OSCLI = 396,                   /* OSCLI  */
    TIME = 397,                    /* TIME  */
    TIMES = 398,                   /* TIMES  */
    AND = 399,                     /* AND  */
    OR = 400,                      /* OR  */
    EOR = 401,                     /* EOR  */
    NOT = 402,                     /* NOT  */
    CHAIN = 403,                   /* CHAIN  */
    EXPECT = 404,                  /* EXPECT  */
    RED = 405,                     /* RED  */
    GREEN = 406,                   /* GREEN  */
    YELLOW = 407,                  /* YELLOW  */
    BLUE = 408,                    /* BLUE  */
    MAGENTA = 409,                 /* MAGENTA  */
    CYAN = 410,                    /* CYAN  */
    WHITE = 411,                   /* WHITE  */
    BLACK = 412,                   /* BLACK  */
    CLS = 413,                     /* CLS  */
    CLG = 414,                     /* CLG  */
    COLOUR = 415,                  /* COLOUR  */
    COLOURBG = 416,                /* COLOURBG  */
    COLOUREXP = 417,               /* COLOUREXP  */
    FLIP = 418,                    /* FLIP  */
    GRAPHICS = 419,                /* GRAPHICS  */
    BANKED = 420,                  /* BANKED  */
    FILL = 421,                    /* FILL  */
    SHADED = 422,                  /* SHADED  */
    LINE = 423,                    /* LINE  */
    PLOT = 424,                    /* PLOT  */
    POINT_ = 425,                  /* POINT_  */
    RECTANGLE = 426,               /* RECTANGLE  */
    RECTANGLEFILL = 427,           /* RECTANGLEFILL  */
    TRIANGLE = 428,                /* TRIANGLE  */
    TRIANGLEFILL = 429,            /* TRIANGLEFILL  */
    TRIANGLESHADED = 430,          /* TRIANGLESHADED  */
    CLIPON = 431,                  /* CLIPON  */
    CLIPOFF = 432,                 /* CLIPOFF  */
    CIRCLE = 433,                  /* CIRCLE  */
    CIRCLEFILL = 434,              /* CIRCLEFILL  */
    TEXT = 435,                    /* TEXT  */
    TEXTRIGHT = 436,               /* TEXTRIGHT  */
    TEXTCENTRE = 437,              /* TEXTCENTRE  */
    LOADTYPEFACE = 438,            /* LOADTYPEFACE  */
    CREATEFONT = 439,              /* CREATEFONT  */
    MONO15 = 440,                  /* MONO15  */
    MONO20 = 441,                  /* MONO20  */
    MONO25 = 442,                  /* MONO25  */
    MONO30 = 443,                  /* MONO30  */
    MONO35 = 444,                  /* MONO35  */
    MONO40 = 445,                  /* MONO40  */
    MONO50 = 446,                  /* MONO50  */
    MONO75 = 447,                  /* MONO75  */
    MONO100 = 448,                 /* MONO100  */
    PROP15 = 449,                  /* PROP15  */
    PROP20 = 450,                  /* PROP20  */
    PROP25 = 451,                  /* PROP25  */
    PROP30 = 452,                  /* PROP30  */
    PROP35 = 453,                  /* PROP35  */
    PROP40 = 454,                  /* PROP40  */
    PROP50 = 455,                  /* PROP50  */
    PROP75 = 456,                  /* PROP75  */
    PROP100 = 457,                 /* PROP100  */
    SERIF15 = 458,                 /* SERIF15  */
    SERIF20 = 459,                 /* SERIF20  */
    SERIF25 = 460,                 /* SERIF25  */
    SERIF30 = 461,                 /* SERIF30  */
    SERIF35 = 462,                 /* SERIF35  */
    SERIF40 = 463,                 /* SERIF40  */
    SERIF50 = 464,                 /* SERIF50  */
    SERIF75 = 465,                 /* SERIF75  */
    SERIF100 = 466,                /* SERIF100  */
    SCREENWIDTH = 467,             /* SCREENWIDTH  */
    SCREENHEIGHT = 468,            /* SCREENHEIGHT  */
    SHOWFPS = 469,                 /* SHOWFPS  */
    LASTPOS = 470,                 /* LASTPOS  */
    INKEY = 471,                   /* INKEY  */
    INKEYS = 472,                  /* INKEYS  */
    INPUT_ = 473,                  /* INPUT_  */
    PRINT = 474,                   /* PRINT  */
    SPC = 475,                     /* SPC  */
    SINKEY = 476,                  /* SINKEY  */
    SINKEYS = 477,                 /* SINKEYS  */
    INPUT_NOQUESTIONMARK = 478,    /* INPUT_NOQUESTIONMARK  */
    GET = 479,                     /* GET  */
    GETS = 480,                    /* GETS  */
    GET_S = 481,                   /* GET_S  */
    GETS_S = 482,                  /* GETS_S  */
    MOUSE = 483,                   /* MOUSE  */
    CREATEVERTEX = 484,            /* CREATEVERTEX  */
    CREATETRIANGLE = 485,          /* CREATETRIANGLE  */
    CREATESHAPE = 486,             /* CREATESHAPE  */
    CREATEOBJECT = 487,            /* CREATEOBJECT  */
    TRANSLATE = 488,               /* TRANSLATE  */
    ROTATE = 489,                  /* ROTATE  */
    SCALE = 490,                   /* SCALE  */
    RENDERFRAME = 491,             /* RENDERFRAME  */
    DELETEOBJECT = 492,            /* DELETEOBJECT  */
    SOLID = 493,                   /* SOLID  */
    WIREFRAME = 494,               /* WIREFRAME  */
    FILLEDWIREFRAME = 495,         /* FILLEDWIREFRAME  */
    NEG = 496                      /* NEG  */
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

#line 312 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.hpp"

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
