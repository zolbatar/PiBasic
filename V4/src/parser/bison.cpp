/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
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

/* Line 371 of yacc.c  */
#line 91 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison.hpp".  */
#ifndef YY_YY_C_USERS_D_DUD_SOURCE_REPOS_PIBASIC_V4_SRC_PARSER_BISON_HPP_INCLUDED
# define YY_YY_C_USERS_D_DUD_SOURCE_REPOS_PIBASIC_V4_SRC_PARSER_BISON_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     INTEGERDIVIDE = 278,
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
     BANKED = 421,
     FILL = 422,
     SHADED = 423,
     LINE = 424,
     PLOT = 425,
     POINT_ = 426,
     RECTANGLE = 427,
     RECTANGLEFILL = 428,
     TRIANGLE = 429,
     TRIANGLEFILL = 430,
     TRIANGLESHADED = 431,
     CLIPON = 432,
     CLIPOFF = 433,
     CIRCLE = 434,
     CIRCLEFILL = 435,
     TEXT = 436,
     TEXTRIGHT = 437,
     TEXTCENTRE = 438,
     LOADTYPEFACE = 439,
     CREATEFONT = 440,
     MONO15 = 441,
     MONO20 = 442,
     MONO25 = 443,
     MONO30 = 444,
     MONO35 = 445,
     MONO40 = 446,
     MONO50 = 447,
     MONO75 = 448,
     MONO100 = 449,
     PROP15 = 450,
     PROP20 = 451,
     PROP25 = 452,
     PROP30 = 453,
     PROP35 = 454,
     PROP40 = 455,
     PROP50 = 456,
     PROP75 = 457,
     PROP100 = 458,
     SERIF15 = 459,
     SERIF20 = 460,
     SERIF25 = 461,
     SERIF30 = 462,
     SERIF35 = 463,
     SERIF40 = 464,
     SERIF50 = 465,
     SERIF75 = 466,
     SERIF100 = 467,
     SCREENWIDTH = 468,
     SCREENHEIGHT = 469,
     SHOWFPS = 470,
     LASTPOS = 471,
     INKEY = 472,
     INKEYS = 473,
     INPUT_ = 474,
     PRINT = 475,
     SPC = 476,
     SINKEY = 477,
     SINKEYS = 478,
     INPUT_NOQUESTIONMARK = 479,
     GET = 480,
     GETS = 481,
     GET_S = 482,
     GETS_S = 483,
     MOUSE = 484,
     CREATEVERTEX = 485,
     CREATETRIANGLE = 486,
     CREATESHAPE = 487,
     CREATEOBJECT = 488,
     TRANSLATE = 489,
     ROTATE = 490,
     SCALE = 491,
     RENDERFRAME = 492,
     DELETEOBJECT = 493,
     SOLID = 494,
     WIREFRAME = 495,
     FILLEDWIREFRAME = 496,
     NEG = 497
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 26 "DARIC.y"

    int v_int;
    double v_real;
    const char *v_string;
    struct AST *ast;


/* Line 387 of yacc.c  */
#line 384 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;
extern YYLTYPE yylloc;
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_C_USERS_D_DUD_SOURCE_REPOS_PIBASIC_V4_SRC_PARSER_BISON_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 425 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  299
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10693

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  246
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  358
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1028

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   497

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    13,    15,    19,    21,
      24,    26,    30,    32,    34,    36,    39,    44,    47,    49,
      51,    56,    61,    66,    71,    74,    77,    79,    81,    84,
      86,    88,    90,    93,    97,   102,   105,   110,   113,   122,
     132,   135,   138,   141,   144,   148,   153,   160,   165,   170,
     172,   174,   178,   184,   190,   199,   204,   211,   218,   228,
     234,   238,   244,   249,   254,   259,   269,   279,   289,   298,
     307,   316,   327,   338,   349,   359,   369,   379,   389,   399,
     408,   417,   429,   441,   452,   463,   474,   485,   495,   505,
     518,   531,   543,   555,   562,   572,   574,   577,   579,   593,
     607,   616,   625,   630,   633,   635,   638,   645,   648,   655,
     660,   666,   668,   671,   673,   680,   688,   697,   706,   716,
     729,   743,   763,   768,   777,   779,   788,   797,   806,   808,
     810,   813,   815,   818,   820,   822,   824,   828,   833,   838,
     841,   844,   848,   852,   856,   860,   864,   868,   872,   876,
     880,   884,   888,   892,   896,   900,   904,   908,   912,   916,
     921,   926,   935,   944,   953,   956,   958,   963,   965,   967,
     969,   971,   973,   975,   977,   982,  1001,  1003,  1005,  1007,
    1009,  1011,  1013,  1015,  1017,  1019,  1028,  1035,  1037,  1039,
    1042,  1047,  1049,  1051,  1053,  1055,  1057,  1059,  1061,  1063,
    1065,  1067,  1069,  1071,  1073,  1075,  1077,  1079,  1081,  1083,
    1085,  1087,  1089,  1091,  1093,  1095,  1097,  1099,  1101,  1104,
    1107,  1112,  1117,  1122,  1124,  1126,  1128,  1133,  1135,  1138,
    1143,  1148,  1153,  1158,  1163,  1168,  1173,  1178,  1183,  1188,
    1193,  1198,  1203,  1208,  1213,  1218,  1225,  1234,  1239,  1241,
    1246,  1253,  1256,  1262,  1264,  1269,  1276,  1279,  1285,  1287,
    1289,  1291,  1296,  1303,  1309,  1311,  1313,  1315,  1319,  1321,
    1323,  1325,  1327,  1331,  1336,  1343,  1348,  1355,  1360,  1367,
    1374,  1376,  1380,  1382,  1387,  1393,  1396,  1399,  1403,  1405,
    1407,  1409,  1413,  1417,  1421,  1425,  1429,  1433,  1437,  1440,
    1445,  1447,  1452,  1454,  1459,  1465,  1472,  1477,  1484,  1493,
    1500,  1502,  1504,  1505,  1507,  1511,  1515,  1519,  1523,  1528,
    1530,  1534,  1536,  1539,  1542,  1546,  1550,  1554,  1558,  1562,
    1566,  1570,  1572,  1574,  1576,  1578,  1580,  1585,  1587,  1589,
    1592,  1594,  1596,  1600,  1601,  1603,  1606,  1608,  1612,  1613,
    1615,  1617,  1621,  1626,  1628,  1631,  1639,  1647,  1655
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     247,     0,    -1,   248,    -1,   249,    -1,   249,   248,    -1,
     251,    19,    -1,    19,    -1,     3,   251,    19,    -1,   249,
      -1,   249,   250,    -1,   252,    -1,   252,    20,   251,    -1,
     275,    -1,   286,    -1,   266,    -1,   149,   270,    -1,   149,
     270,   243,   262,    -1,   150,   262,    -1,   101,    -1,    15,
      -1,    15,   244,   272,   245,    -1,    16,   244,   272,   245,
      -1,    17,   244,   272,   245,    -1,    18,   244,   272,   245,
      -1,    90,   272,    -1,    91,   260,    -1,    92,    -1,    51,
      -1,    51,   271,    -1,   102,    -1,   103,    -1,   104,    -1,
      94,   264,    -1,    99,    94,   264,    -1,    59,   254,   243,
     254,    -1,    58,   254,    -1,    65,   254,    24,   254,    -1,
      60,   254,    -1,     9,   244,   245,    24,    68,   244,   270,
     245,    -1,    99,     9,   244,   245,    24,    68,   244,   270,
     245,    -1,   142,   270,    -1,    75,     4,    -1,    76,     4,
      -1,   219,   279,    -1,   219,     6,   279,    -1,   219,     6,
     243,   279,    -1,   229,     7,   243,     7,   243,     7,    -1,
     217,   244,   254,   245,    -1,   218,   244,   254,   245,    -1,
     225,    -1,   226,    -1,    77,   271,   251,    -1,    77,   271,
     252,    70,   252,    -1,    77,   271,    19,   250,    72,    -1,
      77,   271,    19,   250,    70,    19,   250,    72,    -1,    77,
     271,    83,   251,    -1,    77,   271,    83,   251,    70,   251,
      -1,    77,   271,    83,    19,   250,    72,    -1,    77,   271,
      83,    19,   250,    70,    19,   250,    72,    -1,    81,    19,
     250,    85,   271,    -1,    81,    85,   271,    -1,    87,   271,
      19,   250,    73,    -1,    45,     7,   243,     7,    -1,    45,
       8,   243,     8,    -1,    45,     9,   243,     9,    -1,    74,
       8,    88,     8,   244,   245,    19,   250,    78,    -1,    74,
       7,    88,     7,   244,   245,    19,   250,    78,    -1,    74,
       9,    88,     9,   244,   245,    19,   250,    78,    -1,    74,
       8,    88,     8,   244,   245,   251,    78,    -1,    74,     7,
      88,     7,   244,   245,   251,    78,    -1,    74,     9,    88,
       9,   244,   245,   251,    78,    -1,    74,    99,     8,    88,
       8,   244,   245,    19,   250,    78,    -1,    74,    99,     7,
      88,     7,   244,   245,    19,   250,    78,    -1,    74,    99,
       9,    88,     9,   244,   245,    19,   250,    78,    -1,    74,
      99,     8,    88,     8,   244,   245,   251,    78,    -1,    74,
      99,     7,    88,     7,   244,   245,   251,    78,    -1,    74,
      99,     9,    88,     9,   244,   245,   251,    78,    -1,    74,
       7,    24,   254,    84,   254,    19,   250,    78,    -1,    74,
       8,    24,   254,    84,   254,    19,   250,    78,    -1,    74,
       7,    24,   254,    84,   254,   251,    78,    -1,    74,     8,
      24,   254,    84,   254,   251,    78,    -1,    74,     7,    24,
     254,    84,   254,    82,   254,    19,   250,    78,    -1,    74,
       8,    24,   254,    84,   254,    82,   254,    19,   250,    78,
      -1,    74,     7,    24,   254,    84,   254,    82,   254,   251,
      78,    -1,    74,     8,    24,   254,    84,   254,    82,   254,
     251,    78,    -1,    74,    99,     7,    24,   254,    84,   254,
      19,   250,    78,    -1,    74,    99,     8,    24,   254,    84,
     254,    19,   250,    78,    -1,    74,    99,     7,    24,   254,
      84,   254,   251,    78,    -1,    74,    99,     8,    24,   254,
      84,   254,   251,    78,    -1,    74,    99,     7,    24,   254,
      84,   254,    82,   254,    19,   250,    78,    -1,    74,    99,
       8,    24,   254,    84,   254,    82,   254,    19,   250,    78,
      -1,    74,    99,     7,    24,   254,    84,   254,    82,   254,
     251,    78,    -1,    74,    99,     8,    24,   254,    84,   254,
      82,   254,   251,    78,    -1,    69,   271,    79,    19,   285,
      71,    -1,    69,   271,    79,    19,   285,    80,   252,    19,
      71,    -1,   220,    -1,   220,   277,    -1,   237,    -1,   230,
      10,   244,   254,   245,   243,   254,   243,   254,   243,   254,
     243,   254,    -1,   231,    10,   244,   254,   245,   243,   254,
     243,   254,   243,   254,   243,   254,    -1,   234,   254,   243,
     254,   243,   254,   243,   254,    -1,   235,   254,   243,   254,
     243,   254,   243,   254,    -1,   236,   254,   243,   254,    -1,
     238,   254,    -1,   159,    -1,   161,   254,    -1,   161,   254,
     243,   254,   243,   254,    -1,   162,   254,    -1,   162,   254,
     243,   254,   243,   254,    -1,   165,   254,   243,   254,    -1,
     165,   166,   254,   243,   254,    -1,   165,    -1,   165,   166,
      -1,   164,    -1,   179,   254,   243,   254,   243,   254,    -1,
     179,   167,   254,   243,   254,   243,   254,    -1,   169,   254,
     243,   254,   243,   254,   243,   254,    -1,   172,   254,   243,
     254,   243,   254,   243,   254,    -1,   172,   167,   254,   243,
     254,   243,   254,   243,   254,    -1,   174,   254,   243,   254,
     243,   254,   243,   254,   243,   254,   243,   254,    -1,   174,
     167,   254,   243,   254,   243,   254,   243,   254,   243,   254,
     243,   254,    -1,   174,   168,   254,   243,   254,   243,   254,
     243,   254,   243,   254,   243,   254,   243,   254,   243,   254,
     243,   254,    -1,   170,   254,   243,   254,    -1,   177,   254,
     243,   254,   243,   254,   243,   254,    -1,   178,    -1,   181,
     254,   243,   254,   243,   254,   243,   270,    -1,   182,   254,
     243,   254,   243,   254,   243,   270,    -1,   183,   254,   243,
     254,   243,   254,   243,   270,    -1,   215,    -1,     4,    -1,
      33,     4,    -1,     5,    -1,    33,     5,    -1,   253,    -1,
     255,    -1,   256,    -1,   244,   254,   245,    -1,   110,   244,
     254,   245,    -1,   111,   244,   254,   245,    -1,    33,   255,
      -1,    33,   256,    -1,   254,    32,   254,    -1,   254,    33,
     254,    -1,   254,    34,   254,    -1,   254,    35,   254,    -1,
     254,    23,   254,    -1,   254,   113,   254,    -1,   254,   114,
     254,    -1,   254,    28,   254,    -1,   254,    29,   254,    -1,
     254,    24,   254,    -1,   254,    27,   254,    -1,   254,    26,
     254,    -1,   254,    25,   254,    -1,   254,    30,   254,    -1,
     254,    31,   254,    -1,   254,   145,   254,    -1,   254,   146,
     254,    -1,   254,   147,   254,    -1,    16,   244,   272,   245,
      -1,    17,   244,   272,   245,    -1,    94,   244,     8,   244,
     245,   243,   253,   245,    -1,    94,   244,     7,   244,   245,
     243,   253,   245,    -1,    94,   244,     9,   244,   245,   243,
     253,   245,    -1,    65,   254,    -1,   225,    -1,   217,   244,
     254,   245,    -1,   131,    -1,   130,    -1,   143,    -1,   239,
      -1,   240,    -1,   168,    -1,   241,    -1,   232,    10,   243,
      10,    -1,   233,   254,   243,   254,   243,   254,   243,   254,
     243,   254,   243,   254,   243,   254,   243,   254,   243,   254,
      -1,   151,    -1,   152,    -1,   153,    -1,   154,    -1,   155,
      -1,   156,    -1,   157,    -1,   158,    -1,   216,    -1,   161,
     244,   254,   243,   254,   243,   254,   245,    -1,   171,   244,
     254,   243,   254,   245,    -1,   213,    -1,   214,    -1,   184,
     270,    -1,   185,   254,   243,   254,    -1,   186,    -1,   187,
      -1,   188,    -1,   189,    -1,   190,    -1,   191,    -1,   192,
      -1,   193,    -1,   194,    -1,   195,    -1,   196,    -1,   197,
      -1,   198,    -1,   199,    -1,   200,    -1,   201,    -1,   202,
      -1,   203,    -1,   204,    -1,   205,    -1,   206,    -1,   207,
      -1,   208,    -1,   209,    -1,   210,    -1,   211,    -1,   212,
      -1,    61,   254,    -1,    58,   254,    -1,    62,   244,   270,
     245,    -1,    64,   244,   270,   245,    -1,    63,   244,   270,
     245,    -1,   105,    -1,   106,    -1,   107,    -1,   105,   244,
     254,   245,    -1,   129,    -1,   148,   254,    -1,   115,   244,
     254,   245,    -1,   116,   244,   254,   245,    -1,   117,   244,
     254,   245,    -1,   118,   244,   254,   245,    -1,   119,   244,
     254,   245,    -1,   120,   244,   254,   245,    -1,   121,   244,
     254,   245,    -1,   122,   244,   254,   245,    -1,   124,   244,
     254,   245,    -1,   112,   244,   254,   245,    -1,   123,   244,
     254,   245,    -1,   125,   244,   254,   245,    -1,   126,   244,
     254,   245,    -1,   127,   244,   254,   245,    -1,   132,   244,
     270,   245,    -1,   138,   244,   270,   245,    -1,   134,   244,
     270,   243,   270,   245,    -1,   134,   244,   270,   243,   270,
     243,   254,   245,    -1,   128,   244,   270,   245,    -1,     7,
      -1,     7,   244,   254,   245,    -1,     7,   244,   254,   243,
     254,   245,    -1,    10,     7,    -1,    10,   244,   254,   245,
       7,    -1,     8,    -1,     8,   244,   254,   245,    -1,     8,
     244,   254,   243,   254,   245,    -1,    10,     8,    -1,    10,
     244,   254,   245,     8,    -1,   255,    -1,   256,    -1,     9,
      -1,     9,   244,   254,   245,    -1,     9,   244,   254,   243,
     254,   245,    -1,    10,   244,   254,   245,     9,    -1,   257,
      -1,   258,    -1,   259,    -1,   259,   243,   260,    -1,     7,
      -1,     8,    -1,     9,    -1,   261,    -1,   261,   243,   262,
      -1,     7,   244,   254,   245,    -1,     7,   244,   254,   243,
     254,   245,    -1,     8,   244,   254,   245,    -1,     8,   244,
     254,   243,   254,   245,    -1,     9,   244,   254,   245,    -1,
       9,   244,   254,   243,   254,   245,    -1,    10,   244,   254,
     243,     8,   245,    -1,   263,    -1,   263,   243,   264,    -1,
      10,    -1,    10,   244,   254,   245,    -1,   100,     8,    19,
     268,    96,    -1,    97,   259,    -1,   267,    19,    -1,   267,
      19,   268,    -1,     6,    -1,   269,    -1,   258,    -1,   270,
      32,   270,    -1,   270,    24,   270,    -1,   270,    27,   270,
      -1,   270,    26,   270,    -1,   270,    25,   270,    -1,   270,
      30,   270,    -1,   270,    31,   270,    -1,    67,   254,    -1,
      18,   244,   272,   245,    -1,   226,    -1,   218,   244,   254,
     245,    -1,   144,    -1,   139,   244,   254,   245,    -1,   139,
      36,   244,   254,   245,    -1,   141,   244,   254,   243,   270,
     245,    -1,   133,   244,   254,   245,    -1,   135,   244,   270,
     243,   254,   245,    -1,   136,   244,   270,   243,   254,   243,
     254,   245,    -1,   137,   244,   270,   243,   254,   245,    -1,
     254,    -1,   270,    -1,    -1,   271,    -1,   271,   243,   272,
      -1,   257,    24,   254,    -1,   258,    24,   270,    -1,   265,
      24,   271,    -1,   265,   259,    24,   271,    -1,   273,    -1,
     273,   243,   274,    -1,   274,    -1,    99,   274,    -1,    98,
     274,    -1,   257,    38,   254,    -1,   257,    39,   254,    -1,
     257,    40,   254,    -1,   257,    41,   254,    -1,   257,    42,
     254,    -1,   257,    43,   254,    -1,   257,    44,   254,    -1,
     270,    -1,   254,    -1,   243,    -1,    36,    -1,    37,    -1,
     221,   244,   254,   245,    -1,    21,    -1,   276,    -1,   276,
     277,    -1,   259,    -1,   278,    -1,   278,   243,   279,    -1,
      -1,   259,    -1,    51,   259,    -1,   280,    -1,   280,   243,
     281,    -1,    -1,   259,    -1,   282,    -1,   282,   243,   283,
      -1,    86,   272,   251,    19,    -1,   284,    -1,   284,   285,
      -1,    11,   244,   281,   245,    19,   250,    50,    -1,    12,
     244,   283,   245,    19,   250,    49,    -1,    14,   244,   283,
     245,    19,   250,    49,    -1,    13,   244,   283,   245,    19,
     250,    49,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    94,    94,    98,    99,   103,   104,   105,   108,   109,
     113,   114,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   138,   139,   141,   142,   143,   144,   145,   146,
     148,   150,   151,   153,   154,   155,   156,   158,   159,   160,
     161,   163,   164,   165,   166,   168,   169,   170,   171,   173,
     174,   175,   177,   178,   179,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   213,   214,   216,   217,   219,   220,   223,
     226,   227,   228,   229,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   251,   252,   253,   254,   255,   256,   257,   261,
     262,   263,   264,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   295,
     296,   298,   299,   300,   302,   304,   305,   307,   308,   309,
     311,   312,   313,   314,   316,   317,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   371,   372,   373,   374,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   393,   394,   395,   396,   397,   401,   402,
     403,   404,   405,   409,   410,   411,   412,   413,   417,   418,
     422,   423,   424,   425,   429,   430,   434,   435,   439,   440,
     441,   445,   446,   450,   451,   452,   453,   454,   455,   456,
     460,   461,   465,   466,   470,   474,   478,   479,   483,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   497,   499,
     501,   502,   504,   505,   506,   507,   508,   509,   510,   511,
     515,   516,   520,   521,   522,   526,   527,   528,   529,   533,
     534,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   551,   552,   553,   554,   555,   556,   557,   561,   562,
     566,   570,   571,   575,   576,   577,   581,   582,   586,   587,
     591,   592,   596,   600,   601,   604,   605,   606,   607
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LINE_NUMBER", "LITERAL_INT",
  "LITERAL_REAL", "LITERAL_STRING", "INTEGER_VARIABLE", "VARIABLE",
  "STRING_VARIABLE", "TYPE_VARIABLE", "DEFINE_PROCEDURE",
  "DEFINE_INTEGER_FUNCTION", "DEFINE_STRING_FUNCTION",
  "DEFINE_REAL_FUNCTION", "PROCEDURE", "INTEGER_FUNCTION", "REAL_FUNCTION",
  "STRING_FUNCTION", "NL", "SS", "SEMICOLON", "COMMA", "INTEGERDIVIDE",
  "E", "LE", "GE", "NE", "SHL", "SHR", "LT", "GT", "PLUS", "MINUS",
  "MULTIPLY", "DIVIDE", "TILDE", "TICK", "SHL_E", "SHR_E", "PLUS_E",
  "MINUS_E", "MULTIPLY_E", "DIVIDE_E", "INTEGERDIVIDE_E", "SWAP", "SWAP_I",
  "SWAP_F", "SWAP_S", "END_FN", "END_PROC", "RETURN", "RETURN_WITH_VALUE",
  "DEFPROC", "DEFFN", "CALLPROC", "CALLFN", "RETURN_PARAMETER", "BGET",
  "BPUT", "CLOSE", "EOFH", "OPENIN", "OPENUP", "OPENOUT", "PTR", "PTRA",
  "GETSH", "LISTFILES", "CASE", "ELSE", "END_CASE", "END_IF", "END_WHILE",
  "FOR", "GOSUB", "GOTO", "IF", "NEXT", "OF", "OTHERWISE", "REPEAT",
  "STEP", "THEN", "TO", "UNTIL", "WHEN", "WHILE", "IN_", "FORIN", "DATA",
  "READ", "RESTORE", "ARRAYSIZE", "DIM", "LOCALDIM", "END_TYPE", "FIELD",
  "GLOBAL", "LOCAL", "TYPE_", "END", "TRACEON", "TRACEOFF", "BREAKPOINT",
  "RND", "RND0", "RND1", "RNDREAL", "RNDRANGE", "FLOAT_", "INT_", "ACS",
  "DIV", "MOD", "SQR", "LN", "LOG", "EXP", "ATN", "TAN", "COS", "SIN",
  "ASN", "ABS", "DEG", "RAD", "SGN", "VAL", "PI", "BOOLFALSE", "BOOLTRUE",
  "ASC", "CHRS", "INSTR", "LEFTS", "MIDS", "RIGHTS", "LEN", "STRS",
  "STRSHEX", "STRINGS", "OSCLI", "TIME", "TIMES", "AND", "OR", "EOR",
  "NOT", "CHAIN", "EXPECT", "RED", "GREEN", "YELLOW", "BLUE", "MAGENTA",
  "CYAN", "WHITE", "BLACK", "CLS", "CLG", "COLOUR", "COLOURBG",
  "COLOUREXP", "FLIP", "GRAPHICS", "BANKED", "FILL", "SHADED", "LINE",
  "PLOT", "POINT_", "RECTANGLE", "RECTANGLEFILL", "TRIANGLE",
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
  "daric", "lines", "line", "embed_lines", "statements", "statement",
  "number", "expression_numeric", "variable_integer", "variable_real",
  "variable_numeric", "variable_string", "variable", "variable_list",
  "plain_variable", "plain_variable_list", "dim_variable",
  "dim_variable_list", "type_variable", "type", "field", "field_list",
  "string", "expression_string", "expression", "expression_list",
  "assignment_single", "assignment_list", "assignment", "expression_print",
  "expression_print_list", "expression_input", "expression_input_list",
  "proc_parameter", "proc_parameter_list", "fn_parameter",
  "fn_parameter_list", "when", "when_list", "define_function", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
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
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   246,   247,   248,   248,   249,   249,   249,   250,   250,
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
     252,   252,   252,   252,   252,   252,   252,   252,   252,   253,
     253,   253,   253,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   255,   255,
     255,   255,   255,   256,   256,   256,   256,   256,   257,   257,
     258,   258,   258,   258,   259,   259,   260,   260,   261,   261,
     261,   262,   262,   263,   263,   263,   263,   263,   263,   263,
     264,   264,   265,   265,   266,   267,   268,   268,   269,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     271,   271,   272,   272,   272,   273,   273,   273,   273,   274,
     274,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   276,   276,   276,   276,   276,   276,   276,   277,   277,
     278,   279,   279,   280,   280,   280,   281,   281,   282,   282,
     283,   283,   284,   285,   285,   286,   286,   286,   286
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     3,     1,     2,
       1,     3,     1,     1,     1,     2,     4,     2,     1,     1,
       4,     4,     4,     4,     2,     2,     1,     1,     2,     1,
       1,     1,     2,     3,     4,     2,     4,     2,     8,     9,
       2,     2,     2,     2,     3,     4,     6,     4,     4,     1,
       1,     3,     5,     5,     8,     4,     6,     6,     9,     5,
       3,     5,     4,     4,     4,     9,     9,     9,     8,     8,
       8,    10,    10,    10,     9,     9,     9,     9,     9,     8,
       8,    11,    11,    10,    10,    10,    10,     9,     9,    12,
      12,    11,    11,     6,     9,     1,     2,     1,    13,    13,
       8,     8,     4,     2,     1,     2,     6,     2,     6,     4,
       5,     1,     2,     1,     6,     7,     8,     8,     9,    12,
      13,    19,     4,     8,     1,     8,     8,     8,     1,     1,
       2,     1,     2,     1,     1,     1,     3,     4,     4,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       4,     8,     8,     8,     2,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     4,    18,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     6,     1,     1,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       4,     4,     4,     1,     1,     1,     4,     1,     2,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     6,     8,     4,     1,     4,
       6,     2,     5,     1,     4,     6,     2,     5,     1,     1,
       1,     4,     6,     5,     1,     1,     1,     3,     1,     1,
       1,     1,     3,     4,     6,     4,     6,     4,     6,     6,
       1,     3,     1,     4,     5,     2,     2,     3,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     2,     4,
       1,     4,     1,     4,     5,     6,     4,     6,     8,     6,
       1,     1,     0,     1,     3,     3,     3,     3,     4,     1,
       3,     1,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     4,     1,     1,     2,
       1,     1,     3,     0,     1,     2,     1,     3,     0,     1,
       1,     3,     4,     1,     2,     7,     7,     7,     7
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   248,   253,   260,   282,     0,     0,     0,     0,
      19,     0,     0,     0,     6,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   312,     0,
      26,     0,     0,     0,     0,    18,    29,    30,    31,     0,
       0,     0,   104,     0,     0,   113,   111,     0,     0,     0,
       0,     0,   124,     0,     0,     0,     0,   128,     0,     0,
       0,    95,    49,    50,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     2,     3,     0,    10,   258,   259,     0,
       0,     0,    14,   319,   321,    12,    13,     0,     0,     0,
       0,   251,   256,     0,   343,   348,   348,   348,   312,   312,
     312,   312,     0,     0,     0,   129,   131,   288,   260,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   223,   224,   225,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   227,   168,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   169,   302,     0,   176,   177,   178,
     179,   180,   181,   182,   183,     0,   172,     0,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   187,   188,   184,
       0,     0,   165,   300,     0,     0,   170,   171,   173,     0,
     133,   310,   134,   135,   290,   289,   311,    28,     0,    35,
       0,    37,     0,     0,     0,     0,     0,     0,    41,    42,
       0,     0,     0,     0,   313,    24,   264,   265,   266,    25,
       0,     0,     0,     0,   280,    32,     0,   323,   260,     0,
     322,     0,     0,    40,    15,   268,   269,   270,   271,    17,
     105,   107,   112,     0,     0,     0,     0,     0,     0,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,   341,    43,   337,   334,   335,     0,   333,   332,   331,
     338,    96,     0,     0,     0,     0,     0,     0,   103,     1,
       4,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     0,
       0,     0,   344,   346,     0,   349,   350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   312,
     312,   312,   130,   132,   139,   140,   219,   218,     0,     0,
       0,   164,   298,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   228,     0,     0,   189,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,    10,     8,     0,    60,     0,   312,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,   339,     0,     0,     0,     0,     0,     0,
      11,   315,   324,   325,   326,   327,   328,   329,   330,   316,
     317,     0,   320,     0,   249,     0,   254,     0,     0,   261,
     283,   345,   343,     0,   348,     0,     0,     0,    20,    21,
      22,    23,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     136,   145,   150,   153,   152,   151,   148,   149,   154,   155,
     141,   142,   143,   144,   146,   147,   156,   157,   158,   292,
     295,   294,   293,   296,   297,   291,     0,    34,   150,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     9,     0,     0,   314,   267,     0,
       0,     0,     0,   281,     0,     0,     0,     0,     0,    16,
     272,     0,     0,     0,   109,     0,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      45,   342,     0,     0,     0,     0,     0,     0,   102,   318,
       0,     0,     0,     0,   252,   257,   263,   347,     0,   351,
       0,     0,     0,     0,   159,   160,   299,   220,   222,   221,
       0,     0,     0,   226,   137,   138,   238,   229,   230,   231,
     232,   233,   234,   235,   236,   239,   237,   240,   241,   242,
     247,   243,   306,     0,     0,     0,     0,   244,     0,   303,
       0,     0,     0,   190,   166,   301,   174,     0,     0,   312,
     353,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,     0,     0,    52,    59,    61,     0,
     273,     0,   275,     0,   277,     0,     0,   285,   286,   284,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   336,     0,     0,     0,
       0,     0,   250,   255,     0,   262,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   304,     0,     0,
       0,     0,     0,   354,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    56,
       0,     0,     0,     0,     0,   287,   106,   108,     0,     0,
       0,     0,     0,     0,     0,     0,   114,     0,     0,     0,
      46,     0,     0,     0,     0,     0,   355,   356,   358,   357,
       0,     0,     0,     0,   245,   307,     0,   309,   305,     0,
     186,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   274,   276,   278,   279,     0,     0,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,   352,     0,     0,     0,    79,     0,    69,     0,
       0,    80,     0,    68,     0,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,     0,
       0,   116,     0,   117,     0,     0,     0,   123,   125,   126,
     127,     0,     0,   100,   101,   162,   161,   163,   246,   308,
     185,     0,    94,    77,     0,     0,    66,    78,     0,     0,
      65,    67,     0,     0,    87,     0,    75,     0,     0,    88,
       0,    74,     0,    76,    58,    39,   118,     0,     0,     0,
       0,     0,     0,     0,    83,     0,    84,    85,     0,     0,
      72,    86,     0,     0,    71,    73,     0,     0,     0,     0,
       0,     0,    81,    82,     0,    91,     0,    92,     0,     0,
       0,     0,     0,     0,    89,    90,     0,     0,   119,     0,
       0,     0,   120,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   175,   121
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    72,    73,   433,   434,    75,    76,   210,   211,   212,
     213,    79,    80,   280,   239,   258,   259,   244,   245,    81,
      82,   616,   617,   215,   216,   234,   235,    83,    84,    85,
     290,   291,   281,   282,   323,   324,   326,   327,   710,   711,
      86
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -434
static const yytype_int16 yypact[] =
{
    3790,  7284,  -220,  -175,  -165,    -1,  -135,  -114,   -93,   -88,
     -74,   -73,   -57,   -47,  -434,   118,  2457,  3551,  3551,  3551,
    3551,  2457,    38,   194,   199,  2457,    16,  2457,  2457,   275,
    -434,   546,   563,   309,   215,  -434,  -434,  -434,  -434,  1622,
    1622,   182,  -434,  3551,  3551,  -434,  2695,  3551,  3551,  2909,
    3123,  3551,  -434,  3337,  3551,  3551,  3551,  -434,   -37,   -36,
     539,  2216,  -434,  -434,   221,   219,   227,  3551,  3551,  3551,
    -434,  3551,   238,  -434,  3790,   231,   233,  -434,  -434,   747,
     239,   408,  -434,    19,  -434,  -434,  -434,   247,  3551,  3551,
    1760,  -434,  -434,  3551,   400,   275,   275,   275,  2457,  2457,
    2457,  2457,    26,    28,    34,  -434,  -434,  -434,    23,     2,
      51,    57,    65,   506,  3551,  3551,    66,    70,    71,  3551,
    3551,    78,    91,  -434,  -434,    92,   113,   121,   161,   167,
     175,   176,   177,   184,   191,   195,   197,   198,   206,   212,
     213,   225,  -434,  -434,  -434,   226,   230,   235,   236,   243,
     249,   250,   -22,   268,  -434,  -434,  3551,  -434,  -434,  -434,
    -434,  -434,  -434,  -434,  -434,   271,  -434,   274,  1622,  3551,
    -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,
    -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,
    -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,
     276,   277,  -434,  -434,   262,  3551,  -434,  -434,  -434,  3551,
    -434,   134,  -434,  -434,  -434,  -434,   799,  -434,    15,   134,
    1700,   134, 10509,   224,   -13,    29,   190,   321,  -434,  -434,
    5828,  3790,  2457,   305,   152,  -434,  -434,  -434,   170,  -434,
     278,   283,   284,   287,   183,  -434,   429,  -434,   288,   546,
    -434,   472,   296,   799,    31,  -434,  -434,  -434,   234,  -434,
    2690,  5745,  3551,  5927,  6109,  6291,  3551,  6473,  3551,  3551,
    6655,  6837,  3551,  7019,  7201,  8429,  8466,  3551,  3551,    33,
    -434,   282,  -434,  -434,  -434,  -434,   299,  -434,   134,   799,
    2216,  -434,   308,   322,   330,  8501,  8536,  8560,   134,  -434,
    -434,  -434,  7284,  3551,  3551,  3551,  3551,  3551,  3551,  3551,
    3551,  1622,  2457,   541,   563,  -434,    59,   151,   553,   186,
    1506,   275,  -434,   336,   337,  -434,   338,   347,   348,   353,
     354,   358,   359,   360,   600,   603,   609,  3551,  3551,  2457,
    2457,  2457,  -434,  -434,  -434,  -434,   134,   134,  1622,  1622,
    1622,   134,   134,   352,  3551,  3551,  3551,  3551,  3551,  3551,
    3551,  3551,  3551,  3551,  3551,  3551,  3551,  3551,  3551,  3551,
    3551,  1622,  1622,  3551,  1622,  1622,  1622,  1622,  1622,   373,
    3551,  3551,  -434,  3551,  3551,   799,  8573,  3551,  3551,   384,
    8600,  1684,  3551,  3551,  3551,  3551,  3551,  3551,  3551,  3551,
    3551,  3551,  3551,  3551,  3551,  3551,  3551,  3551,  3551,  3551,
    1622,  1622,  1622,  1622,  1622,  1622,  1622,  3551,  3551,  3551,
     612,  3551,   625,  3551,   626,   624,    36,    50,   547,  3790,
    6010,  -434,    76,  3790,   551,  -434,  3790,  2457,   275,  3551,
    3551,  3551,  3551,   546,  1974,  -434,   542,  3551,   182,   182,
    3551,  3551,  8635,  3551,  3551,  3551,  8699,  3551,  8727,  8740,
    3551,  3551,  8762,  3551,  3551,  3551,  3551,  3797,  3961,   275,
    -434,   275,  3551,  -434,   631,  3551,  3551,  3551,  3551,  3551,
    -434,   134,   134,   134,   134,   134,   134,   134,   134,   799,
    -434,  2457,  -434,  3551,  -434,  3551,  -434,   574,  3551,  -434,
     365,  -434,   400,   628,   275,   634,   635,   637,  -434,  -434,
    -434,  -434,  -434,  -434,  -434,  4193,   412,   413,   414,    89,
     123,   169,   418,   425,   426,  4425,  4657,  4889,  5121,  5353,
    5585,  7378,  7445,  7503,  7516,  7538,  7551,  7573,  7608,  7643,
    7678,  7700,   200,   281,  7744,   209,   458,   559,   619,   441,
    3551,  7803,  8798,  8833,  8868,  3551,  7838,  7851,   661,  3551,
    -434,    20,   632,   632,   632,   632,  -434,  -434,   632,   632,
     501,   501,    20,    20,    20,    20,  1252,   727,   727,   640,
     640,   640,   640,   640,   640,  -434,  7873,   134,   995,   587,
   10412,   430, 10447,   431,   432,  3551,   673,  3551,   675,   672,
      -5,  3790,   617,  7284,  -434,  2457,   615,  -434,  -434,   474,
     912,  1068,  8890,  -434,   666,   275,   677,   595,  7908,  -434,
    -434,  8903,  8925,  3551,   134,  8961,   134,  3551,  8996,  3551,
    3551,  9031,  9056,  3551,  9069,  9095,  9124,  9162,  -434,  -434,
    -434,  -434,  7943,   449,  7978,  8000,  9197,  9223,   134,  -434,
    8035,  8103,   454,  8138,  -434,  -434,  -434,  -434,  3790,  -434,
    3790,  3790,  3790,   365,  -434,  -434,  -434,  -434,  -434,  -434,
     455,   461,   462,  -434,  -434,  -434,  -434,  -434,  -434,  -434,
    -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,
    -434,  -434,  -434,  1622,  3551,  3551,  3551,  -434,  8168,  -434,
    1622,  3551,  3551,   134,  -434,  -434,  -434,  9261,   115,  2457,
     587,   -52,  3551,   464,  3551,   465,   466, 10482,   469, 10546,
     471,   476,   680,  -434,   172,  7284,  -434,  -434,  -434,  3551,
    -434,  3551,  -434,  3551,  -434,   700,   650,  -434,   542,  -434,
     713,  3551,  3551,   134,  3551,  9290,  3551,  9325,  9354,  3551,
    3551,  9367,  3551,  3551,  3551,  3551,  -434,   716,   483,   485,
    3551,  3551,  -434,  -434,  1622,  -434,   681,   685,   690,   691,
     487,   498,   504,    80,  8204,  9389,  8230,  -434,   537,  9418,
    8243,  3551,  7284,  -434,  -434,  7284,  4022,  6192,  4254,  6374,
    6556,  3551,   503,  3551,   518,   521,  3790,   748,  -434,  -434,
    8265,  8301,  8337,   523,   525,  -434,   134,   134,  9459,  3551,
    9494,  3551,  3551,  9517,  9552,  3551,   134,  9593,  9619,  9644,
    -434,  3551,  3551,  9657,  9685,   570,  -434,  -434,  -434,  -434,
      95,    95,    95,  3551,  -434,  -434,  3551,  -434,  -434,  3551,
    -434,  9720,   751,   753,  3790,  3551,   695,  3790,   697,  3790,
    3551,   701,  3790,   702,  3790,   703,  4486,  6738,  4718,  6920,
    7102,   706,  3790,  -434,  -434,  -434,  -434,  1622,  3551,  9750,
    3551,  9785,  9820,  3551,  3551,   134,  1622,  1622,  1622,  9845,
    9884,  3551,  3551,  -434,   131,   538,   548,   552,  8372,  8393,
    8407,  3551,  -434,   725,   721,  4950,  -434,   722,  -434,   723,
    5182,  -434,   729,  -434,   730,  -434,  3790,  3551,   731,  3790,
     739,  3790,  3551,   740,  3790,   742,  3790,   743,  -434,   755,
     598,   134,  3551,   134,  3551,  3551,  9912,   134,   799,   799,
     799,  3551,  3551,   134,   134,  -434,  -434,  -434,  -434,  -434,
    -434,  9947,  -434,  -434,  3790,   754,  -434,  -434,  3790,   756,
    -434,  -434,   757,  5414,  -434,   758,  -434,   759,  5646,  -434,
     764,  -434,   766,  -434,  -434,  -434,   134,  9976,  9989,  3551,
   10011, 10046,  3551,   767,  -434,   768,  -434,  -434,  3790,   769,
    -434,  -434,  3790,   770,  -434,  -434,  3551,  3551, 10081,  3551,
    3551, 10116,  -434,  -434,   771,  -434,   772,  -434, 10138, 10151,
    3551, 10173, 10215,  3551,  -434,  -434,  3551,  3551,   134,  3551,
    3551, 10243,   134, 10278,   134,   134,  3551,  3551, 10307, 10320,
    3551,  3551, 10342, 10377,  3551,  3551,   134,   134
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -434,  -434,   778,    21,   838,    24,  -210,  -433,   -17,   463,
     608,    48,  1135,    37,   416,  -434,  -308,  -434,  -241,  -434,
    -434,  -434,   117,  -434,   828,    43,   -83,  -434,   -20,  -434,
    -434,   513,  -434,  -201,  -434,   356,  -434,   -92,  -434,   149,
    -434
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -37
static const yytype_int16 yytable[] =
{
     219,   220,   221,   222,   328,   329,    91,    92,   445,    91,
      92,   421,   247,   250,   379,   330,   331,   332,   333,   784,
     432,    74,    91,    92,    88,    87,   260,   261,   785,   263,
     264,   265,   267,   270,   271,   231,   273,   274,   275,   276,
       2,     3,   108,   109,   288,   224,   225,   226,   397,   398,
     295,   296,   297,   423,   298,   410,   411,   412,   413,   217,
     595,   414,   415,   416,   223,   722,   238,   723,   230,    89,
     233,   316,   317,   319,   597,   422,   320,   236,   470,    90,
     246,   246,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,    74,   302,   346,   347,   105,
     106,   232,   351,   352,   410,   411,   412,   413,   236,    94,
     414,   415,   416,   410,   411,   412,   413,   424,   313,   414,
     415,   416,   654,   655,   596,   102,   103,   104,   884,   236,
      95,   322,   325,   325,   325,   342,   343,   227,   598,   382,
     619,   620,   236,   236,   236,   236,   603,   410,   411,   412,
     413,    96,   386,   414,   415,   416,    97,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
      98,    99,   405,   406,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   100,   390,   255,
     256,   257,   391,   410,   411,   412,   413,   101,   228,   414,
     415,   416,   613,   229,   407,   408,   409,   277,   278,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   380,   251,   410,   411,   412,   413,   292,   293,
     414,   415,   416,   410,   411,   412,   413,   294,   299,   414,
     415,   416,   797,    93,   798,   452,   338,   405,   406,   456,
     301,   458,   459,   302,   431,   462,   516,   517,   518,   417,
     467,   468,   314,   311,   405,   406,   315,   337,   640,   334,
     641,   335,   389,   288,   448,   435,   469,   336,   425,   407,
     408,   409,     2,     3,   108,   109,   481,   482,   483,   484,
     485,   486,   487,   488,   492,   339,   407,   408,   409,   405,
     406,   340,   493,   420,   494,   410,   411,   412,   413,   341,
     348,   414,   415,   416,   349,   350,     2,     3,   248,     5,
     319,   515,   353,   833,   436,   834,   480,   236,   426,   427,
     428,   407,   408,   409,   667,   354,   355,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   607,   490,   544,   356,   501,   522,
     523,   524,   246,   551,   552,   357,   553,   554,   668,   236,
     556,   557,   654,   655,   656,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   726,   495,   437,   496,   885,   886,   887,
     586,   587,   588,   249,   590,   358,   592,     2,     3,   108,
     109,   359,   659,   438,   669,     2,     3,   108,   109,   360,
     361,   362,   609,   610,   611,   612,   443,   319,   363,   498,
     618,   499,   312,   621,   622,   364,   624,   625,   626,   365,
     628,   366,   367,   631,   632,   690,   634,   635,   636,   637,
     368,   321,   693,   303,   602,   642,   369,   370,   644,   645,
     646,   647,   648,    77,    77,   410,   411,   412,   413,   371,
     372,   414,   415,   416,   373,   238,   650,   449,   651,   374,
     375,   653,   410,   411,   412,   413,   236,   376,   414,   415,
     416,   446,    77,   377,   378,    77,    77,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     342,   343,   381,     2,     3,   383,   218,   236,   384,   236,
     387,   388,   439,    77,   392,   471,   691,   440,   441,   397,
     398,   442,   444,   698,   649,   403,   404,    77,   703,   322,
     447,   325,   707,   472,    77,   279,     2,     3,   108,   109,
     236,   474,   236,   240,   241,   242,   243,    77,    77,    77,
      77,   410,   411,   412,   413,   491,   475,   414,   415,   416,
       2,     3,   108,     5,   476,   843,   344,   497,   717,   502,
     719,   504,   503,   410,   411,   412,   413,   405,   406,   414,
     415,   416,   505,   506,   410,   411,   412,   413,   507,   508,
     414,   415,   416,   509,   510,   511,   743,   512,    78,    78,
     745,   513,   747,   748,   405,   406,   751,   550,   514,   407,
     408,   409,   410,   411,   412,   413,   782,   558,   414,   415,
     416,   589,   591,   594,   593,   599,   605,    78,   643,   615,
      78,    78,   652,   410,   411,   412,   413,   658,   727,   414,
     415,   416,   737,   660,   661,   392,   662,   664,   665,   666,
     397,   398,   670,   236,   401,   402,   403,   404,    78,   671,
     672,   706,   416,   709,   713,   715,   716,   774,   775,   776,
     718,   721,    78,   720,   779,   780,   697,   725,   728,    78,
     736,   739,   757,    77,    77,   786,   738,   788,   764,   796,
     770,   694,    78,    78,    78,    78,   771,   772,   803,   787,
     789,   790,   800,   792,   801,   794,   802,   729,   804,   730,
     795,   345,   656,   820,   806,   807,   821,   808,   822,   810,
     830,   826,   813,   814,   827,   816,   817,   818,   819,   828,
     829,   831,    77,   823,   824,   405,   406,   832,   857,   799,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   859,   841,    77,   860,   862,   866,   867,
     892,   303,   893,   896,   856,   898,   858,    77,   918,   901,
     903,   905,   838,   935,    77,   304,   305,   306,   307,   308,
     309,   310,   869,   936,   871,   872,   942,   937,   875,   943,
     946,   947,   695,   473,   879,   880,   842,   950,   951,   954,
     846,   848,   851,   853,   855,   883,   888,   956,   959,   889,
     961,   963,   890,   410,   411,   412,   413,   964,   895,   414,
     415,   416,   974,   900,   976,   977,   980,   981,    78,    78,
     405,   406,   984,   965,   985,   992,   993,   995,   997,  1004,
    1005,   921,   300,   923,   608,   805,   926,   927,   657,   783,
       0,     0,   696,     0,   933,   934,     0,   253,   254,     0,
       0,     0,   407,     0,   941,     0,     0,     0,     0,     0,
     908,   910,   913,   915,   917,     0,     0,    78,     0,   289,
     953,     0,    77,    77,     0,   958,    77,     0,     0,    77,
       0,    77,     0,     0,     0,   966,     0,   967,   968,     0,
      78,     0,     0,     0,   970,   971,     0,     0,     0,   945,
       0,     0,    78,     0,   949,     0,     0,     0,     0,    78,
       0,     0,    77,     0,    77,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,     0,     0,
       0,     0,   988,     0,     0,   991,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,    77,     0,   998,
     999,     0,  1001,  1002,     0,     0,     0,   979,     0,     0,
       0,     0,   983,  1008,     0,     0,  1011,     0,     0,  1012,
    1013,     0,  1014,  1015,     0,     0,   385,     0,     0,  1018,
    1019,     0,     0,  1022,  1023,     0,     0,  1026,  1027,     0,
       0,     0,     0,     0,   -36,   -36,     0,     0,   392,     0,
       0,     0,     0,   397,   398,   405,   406,   401,   402,   403,
     404,     0,     0,     0,     0,     0,     0,    78,    78,     0,
       0,    78,     0,     0,    78,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   407,   408,   409,
       0,     0,     0,     0,    77,   -36,    77,     0,     0,     0,
       0,     0,     0,   -36,     0,     0,     0,    78,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,     0,     0,     0,     0,   405,   406,
      78,     0,    78,     0,     0,     0,     0,     0,   289,     0,
       0,    77,     0,    77,    77,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   489,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   214,     0,     0,     0,   731,   214,   732,     0,     0,
     214,     0,   214,   214,   237,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   214,   214,   519,   520,   521,     0,
       0,   405,   406,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,   237,   214,     0,     0,   542,
     543,     0,   545,   546,   547,   548,   549,     0,     0,    78,
       0,    78,     0,   407,   408,   409,   237,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,   237,
     237,   237,   237,   214,   214,   214,   214,     0,   579,   580,
     581,   582,   583,   584,   585,    77,     0,     0,    77,    77,
      77,    77,    77,    77,     0,     0,     0,     0,     0,    77,
       0,     0,     0,     0,     0,     0,    78,   600,    78,    78,
      78,   604,     0,     0,   606,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   214,     0,     0,     0,    77,     0,     0,
      77,   733,    77,   734,     0,    77,     0,    77,     0,    77,
      77,    77,    77,    77,     0,    77,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,    77,     0,   405,   406,   214,     0,    77,
       0,     0,    77,     0,    77,     0,     0,    77,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,     0,    78,    78,    78,    78,    78,    78,     0,
       0,     0,     0,     0,    78,     0,     0,    77,     0,     0,
       0,    77,     0,     0,   237,     0,    77,     0,     0,     0,
       0,    77,     0,     0,     0,   214,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   724,
       0,    77,     0,     0,     0,    77,   214,   214,     0,     0,
       0,     0,    78,     0,     0,    78,   237,    78,     0,     0,
      78,     0,    78,     0,    78,    78,    78,    78,    78,     0,
      78,     0,     0,     0,   214,   214,   214,     0,     0,     0,
       0,     0,     0,   214,   214,   214,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   766,     0,   767,   768,
     769,     0,     0,    78,     0,     0,   214,   214,    78,   214,
     214,   214,   214,   214,    78,     0,     0,    78,     0,    78,
       0,   773,    78,     0,    78,     0,     0,     0,   778,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,     0,     0,     0,   214,   214,   214,   214,   214,
     214,   214,    78,     0,     0,     0,    78,     0,     0,     0,
       0,    78,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,   214,   237,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
      78,     0,   825,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,     0,   237,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   405,
     406,     0,     0,     0,     0,     0,   214,     0,   107,     0,
       0,   108,   252,     0,   861,     0,     0,   237,     0,   237,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,   409,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   894,     0,     0,   897,     0,   899,     0,   120,
     902,     0,   904,     0,     0,   920,     0,     0,     0,     0,
     919,     0,     0,     0,   928,   929,   930,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
       0,     0,     0,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,     0,     0,     0,     0,
     214,     0,     0,     0,   952,     0,     0,   955,     0,   957,
     237,   500,   960,     0,   962,   146,     0,   148,   149,   150,
       0,   152,     0,   153,   105,   106,   155,     2,     3,     0,
     218,     0,     0,     0,     0,     0,   110,   111,     0,     0,
       0,     0,   973,     0,     0,     0,   975,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,   405,   406,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   405,   406,     0,   994,     0,   114,     0,
     996,   115,   116,   117,   118,   119,     0,     0,   214,   407,
     408,   409,     0,     0,     0,   214,     0,     0,     0,     0,
     201,     0,     0,     0,   214,   407,   408,   409,   203,     0,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   123,   124,     0,     0,
     125,   126,   127,     0,     0,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,     0,   147,     0,     0,     0,   151,   214,
       0,     0,     0,   154,     0,     0,     0,     0,   156,     0,
       0,   157,   158,   159,   160,   161,   162,   163,   164,     0,
       0,   165,     0,     0,     0,     0,     0,     0,   166,   560,
       0,   167,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   418,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,     0,   199,   200,   105,   106,
       0,     2,     3,     0,   218,   202,     0,     0,     0,     0,
     110,   111,   204,   205,     0,     0,     0,     0,     0,   206,
     207,   208,   214,     0,   209,   318,     0,   113,     0,     0,
       0,   214,   214,   214,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,     0,     0,   115,   116,   117,   118,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,   124,     0,     0,   125,   126,   127,     0,     0,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,     0,   147,     0,
       0,     0,   151,     0,     0,     0,     0,   154,     0,     0,
       0,     0,   156,     0,     0,   157,   158,   159,   160,   161,
     162,   163,   164,     0,     0,   165,     0,     0,     0,     0,
       0,     0,   166,     0,     0,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,     0,
     199,   200,     0,     0,     0,     0,     0,     0,     0,   202,
       0,     0,     0,     0,     0,     0,   204,   205,     0,     0,
       0,     0,     0,   206,   207,   208,     0,     0,   209,   614,
     105,   106,   107,     2,     3,   108,   109,     0,     0,     0,
       0,     0,   110,   111,   112,     0,     0,   283,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,   284,   285,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,   115,   116,   117,
     118,   119,     0,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   123,   124,     0,     0,   125,   126,   127,     0,
       0,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,     0,   153,     0,   154,
     155,     0,     0,     0,   156,     0,     0,   157,   158,   159,
     160,   161,   162,   163,   164,     0,     0,   165,     0,     0,
       0,     0,     0,     0,   166,     0,     0,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,     0,   199,   200,   201,     0,     0,   286,     0,     0,
       0,   202,   203,     0,     0,     0,     0,     0,   204,   205,
       0,     0,     0,     0,     0,   206,   207,   208,     0,   287,
     209,   105,   106,   107,     2,     3,   108,   109,     0,     0,
       0,     0,     0,   110,   111,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,     0,     0,   115,   116,
     117,   118,   119,     0,   120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,   123,   124,     0,     0,   125,   126,   127,
       0,     0,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     0,   153,     0,
     154,   155,     0,     0,     0,   156,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,     0,     0,   165,     0,
       0,     0,     0,     0,     0,   166,     0,     0,   167,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,     0,   199,   200,   201,     0,     0,     0,     0,
       0,     0,   202,   203,     0,     0,     0,     0,     0,   204,
     205,     0,     0,     0,     0,     0,   206,   207,   208,   105,
     106,   209,     2,     3,     0,   218,     0,     0,     0,     0,
       0,   110,   111,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,   124,   405,   406,   125,   126,   127,     0,     0,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,     0,   147,
       0,     0,     0,   151,     0,   407,   408,   409,   154,     0,
       0,     0,     0,   156,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,     0,     0,   165,     0,     0,     0,
       0,   262,     0,   166,     0,     0,   167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
       0,   199,   200,   105,   106,     0,     2,     3,     0,   218,
     202,     0,     0,     0,     0,   110,   111,   204,   205,     0,
       0,     0,     0,   450,   206,   207,   208,     0,     0,   209,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,     0,     0,   125,
     126,   127,     0,     0,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,     0,   147,     0,     0,     0,   151,     0,     0,
       0,     0,   154,     0,     0,     0,     0,   156,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,     0,     0,
     165,     0,     0,     0,     0,     0,   266,   166,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,     0,   199,   200,   105,   106,     0,
       2,     3,     0,   218,   202,     0,     0,     0,     0,   110,
     111,   204,   205,     0,     0,     0,     0,     0,   206,   207,
     208,     0,     0,   209,     0,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,     0,   115,   116,   117,   118,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
     124,     0,     0,   125,   126,   127,     0,     0,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,     0,   147,     0,     0,
       0,   151,     0,     0,     0,     0,   154,     0,     0,     0,
       0,   156,     0,     0,   157,   158,   159,   160,   161,   162,
     163,   164,     0,     0,   165,     0,     0,     0,     0,     0,
     268,   269,     0,     0,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,     0,   199,
     200,   105,   106,     0,     2,     3,     0,   218,   202,     0,
       0,     0,     0,   110,   111,   204,   205,     0,     0,     0,
       0,     0,   206,   207,   208,     0,     0,   209,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,     0,     0,   115,   116,
     117,   118,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,   123,   124,     0,     0,   125,   126,   127,
       0,     0,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
       0,   147,     0,     0,     0,   151,     0,     0,     0,     0,
     154,     0,     0,     0,     0,   156,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,     0,     0,   165,     0,
       0,     0,     0,     0,   272,   166,     0,     0,   167,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,     0,   199,   200,   105,   106,     0,     2,     3,
       0,   218,   202,     0,     0,     0,     0,   110,   111,   204,
     205,     0,     0,     0,     0,     0,   206,   207,   208,     0,
       0,   209,     0,     0,   113,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
       0,     0,   115,   116,   117,   118,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,   123,   124,     0,
       0,   125,   126,   127,     0,     0,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,     0,   147,     0,     0,     0,   151,
       0,     0,     0,     0,   154,     0,     0,     0,     0,   156,
       0,     0,   157,   158,   159,   160,   161,   162,   163,   164,
       0,     0,   165,     0,     0,     0,     0,     0,     0,   166,
       0,     0,   167,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,     0,   199,   200,     0,
       0,     0,     0,     0,     0,     0,   202,     0,     0,     0,
       0,     0,     0,   204,   205,     0,     0,     0,     0,     0,
     206,   207,   208,     1,     0,   209,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,     0,     0,    15,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,    17,    18,
      19,     0,     0,     0,     0,    20,     0,     0,     0,    21,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,    26,     0,     0,     0,     0,     0,    27,     0,     0,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     405,   406,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,     0,     0,     0,     0,    40,
      41,     0,   407,   408,   409,     0,     0,     0,     0,    42,
       0,    43,    44,     0,    45,    46,     0,     0,     0,    47,
      48,     0,    49,     0,    50,     0,     0,    51,    52,    53,
       0,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
      61,     0,     0,     0,     0,    62,    63,     0,     0,    64,
      65,    66,     0,     0,    67,    68,    69,    70,    71,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   844,   638,     0,     0,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     0,     0,
       0,     0,     0,    16,   405,   406,     0,     0,     0,     0,
      17,    18,    19,     0,     0,     0,     0,    20,     0,     0,
       0,    21,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,    26,   845,     0,   407,   408,   409,    27,
       0,     0,    28,    29,    30,     0,    31,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,   405,   406,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,   407,   408,   409,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,    44,     0,    45,    46,     0,     0,
       0,    47,    48,     0,    49,     0,    50,     0,     0,    51,
      52,    53,     0,    54,    55,    56,   639,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,    61,     0,     0,     0,     0,    62,    63,     0,
       0,    64,    65,    66,     0,     0,    67,    68,    69,    70,
      71,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   849,     0,     0,     0,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,   405,   406,     0,     0,
       0,     0,    17,    18,    19,     0,     0,     0,     0,    20,
       0,     0,     0,    21,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,    26,   850,     0,   407,   408,
     409,    27,     0,     0,    28,    29,    30,     0,    31,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,     0,
       0,     0,     0,     0,     0,     0,     0,   405,   406,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,     0,   407,
     408,   409,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,    44,     0,    45,    46,
       0,     0,     0,    47,    48,     0,    49,     0,    50,     0,
       0,    51,    52,    53,     0,    54,    55,    56,   663,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    60,    61,     0,     0,     0,     0,    62,
      63,     0,     0,    64,    65,    66,     0,     0,    67,    68,
      69,    70,    71,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   906,     0,     0,     0,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,    16,   405,   406,
       0,     0,     0,     0,    17,    18,    19,     0,     0,     0,
       0,    20,     0,     0,     0,    21,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,     0,    26,   907,     0,
     407,   408,   409,    27,     0,     0,    28,    29,    30,     0,
      31,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,     0,     0,     0,     0,     0,     0,     0,     0,   405,
     406,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,   407,   408,   409,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,     0,
      45,    46,     0,     0,     0,    47,    48,     0,    49,     0,
      50,     0,     0,    51,    52,    53,     0,    54,    55,    56,
     673,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,    61,     0,     0,     0,
       0,    62,    63,     0,     0,    64,    65,    66,     0,     0,
      67,    68,    69,    70,    71,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   911,     0,     0,
       0,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,     0,     0,     0,     0,     0,    16,
     405,   406,     0,     0,     0,     0,    17,    18,    19,     0,
       0,     0,     0,    20,     0,     0,     0,    21,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,    26,
     912,     0,   407,   408,   409,    27,     0,     0,    28,    29,
      30,     0,    31,     0,     0,     0,    32,    33,    34,    35,
      36,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,   405,   406,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,   407,   408,   409,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
      44,     0,    45,    46,     0,     0,     0,    47,    48,     0,
      49,     0,    50,     0,     0,    51,    52,    53,     0,    54,
      55,    56,   674,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,    61,     0,
       0,     0,     0,    62,    63,     0,     0,    64,    65,    66,
       0,     0,    67,    68,    69,    70,    71,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   944,
       0,     0,     0,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,    16,   405,   406,     0,     0,     0,     0,    17,    18,
      19,     0,     0,     0,     0,    20,     0,     0,     0,    21,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,    26,     0,     0,   407,   408,   409,    27,     0,     0,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,   405,   406,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,   407,   408,   409,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,     0,    45,    46,     0,     0,     0,    47,
      48,     0,    49,     0,    50,     0,     0,    51,    52,    53,
       0,    54,    55,    56,   675,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
      61,     0,     0,     0,     0,    62,    63,     0,     0,    64,
      65,    66,     0,     0,    67,    68,    69,    70,    71,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   948,     0,     0,     0,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     0,     0,
       0,     0,     0,    16,   405,   406,     0,     0,     0,     0,
      17,    18,    19,     0,     0,     0,     0,    20,     0,     0,
       0,    21,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,    26,     0,     0,   407,   408,   409,    27,
       0,     0,    28,    29,    30,     0,    31,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,   405,   406,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,   407,   408,   409,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,    44,     0,    45,    46,     0,     0,
       0,    47,    48,     0,    49,     0,    50,     0,     0,    51,
      52,    53,     0,    54,    55,    56,   676,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,    61,     0,     0,     0,     0,    62,    63,     0,
       0,    64,    65,    66,     0,     0,    67,    68,    69,    70,
      71,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   978,     0,     0,     0,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,   405,   406,     0,     0,
       0,     0,    17,    18,    19,     0,     0,     0,     0,    20,
       0,     0,     0,    21,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,    26,     0,     0,   407,   408,
     409,    27,     0,     0,    28,    29,    30,     0,    31,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,     0,
       0,     0,     0,     0,     0,     0,     0,   405,   406,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,     0,   407,
     408,   409,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,    44,     0,    45,    46,
       0,     0,     0,    47,    48,     0,    49,     0,    50,     0,
       0,    51,    52,    53,     0,    54,    55,    56,   677,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    60,    61,     0,     0,     0,     0,    62,
      63,     0,     0,    64,    65,    66,     0,     0,    67,    68,
      69,    70,    71,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   982,     0,     0,     0,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,    16,   405,   406,
       0,     0,     0,     0,    17,    18,    19,     0,     0,     0,
       0,    20,     0,     0,     0,    21,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,     0,    26,     0,     0,
     407,   408,   409,    27,     0,     0,    28,    29,    30,     0,
      31,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,     0,     0,     0,     0,     0,     0,     0,     0,   405,
     406,     0,     0,     0,     0,     0,     0,     0,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,   407,   408,   409,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,     0,
      45,    46,     0,     0,     0,    47,    48,     0,    49,     0,
      50,     0,     0,    51,    52,    53,     0,    54,    55,    56,
     678,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   429,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   405,   406,
       0,    57,     0,    58,    59,    60,    61,     0,     0,     0,
       0,    62,    63,    15,     0,    64,    65,    66,     0,    16,
      67,    68,    69,    70,    71,     0,    17,    18,    19,     0,
     407,   408,   409,    20,     0,     0,     0,    21,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,    26,
       0,   430,     0,     0,     0,    27,     0,     0,    28,    29,
      30,     0,    31,     0,     0,     0,    32,    33,    34,    35,
      36,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    42,   451,    43,
      44,     0,    45,    46,     0,     0,     0,    47,    48,     0,
      49,     0,    50,     0,     0,    51,    52,    53,     0,    54,
      55,    56,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   601,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     405,   406,     0,    57,     0,    58,    59,    60,    61,     0,
       0,     0,     0,    62,    63,    15,     0,    64,    65,    66,
       0,    16,    67,    68,    69,    70,    71,     0,    17,    18,
      19,     0,   407,   408,   409,    20,     0,     0,     0,    21,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,    26,     0,     0,     0,     0,     0,    27,     0,     0,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,     0,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    42,
     453,    43,    44,     0,    45,    46,     0,     0,     0,    47,
      48,     0,    49,     0,    50,     0,     0,    51,    52,    53,
       0,    54,    55,    56,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   847,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   405,   406,     0,    57,     0,    58,    59,    60,
      61,     0,     0,     0,     0,    62,    63,    15,     0,    64,
      65,    66,     0,    16,    67,    68,    69,    70,    71,     0,
      17,    18,    19,     0,   407,   408,   409,    20,     0,     0,
       0,    21,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,    26,     0,     0,     0,     0,     0,    27,
       0,     0,    28,    29,    30,     0,    31,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,    42,   454,    43,    44,     0,    45,    46,     0,     0,
       0,    47,    48,     0,    49,     0,    50,     0,     0,    51,
      52,    53,     0,    54,    55,    56,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   852,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   405,   406,     0,    57,     0,    58,
      59,    60,    61,     0,     0,     0,     0,    62,    63,    15,
       0,    64,    65,    66,     0,    16,    67,    68,    69,    70,
      71,     0,    17,    18,    19,     0,   407,   408,   409,    20,
       0,     0,     0,    21,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,    26,     0,     0,     0,     0,
       0,    27,     0,     0,    28,    29,    30,     0,    31,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    42,   455,    43,    44,     0,    45,    46,
       0,     0,     0,    47,    48,     0,    49,     0,    50,     0,
       0,    51,    52,    53,     0,    54,    55,    56,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   854,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   405,   406,     0,    57,
       0,    58,    59,    60,    61,     0,     0,     0,     0,    62,
      63,    15,     0,    64,    65,    66,     0,    16,    67,    68,
      69,    70,    71,     0,    17,    18,    19,     0,   407,   408,
     409,    20,     0,     0,     0,    21,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,     0,    26,     0,     0,
       0,     0,     0,    27,     0,     0,    28,    29,    30,     0,
      31,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,     0,    42,   457,    43,    44,     0,
      45,    46,     0,     0,     0,    47,    48,     0,    49,     0,
      50,     0,     0,    51,    52,    53,     0,    54,    55,    56,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   909,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   405,   406,
       0,    57,     0,    58,    59,    60,    61,     0,     0,     0,
       0,    62,    63,    15,     0,    64,    65,    66,     0,    16,
      67,    68,    69,    70,    71,     0,    17,    18,    19,     0,
     407,   408,   409,    20,     0,     0,     0,    21,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,    26,
       0,     0,     0,     0,     0,    27,     0,     0,    28,    29,
      30,     0,    31,     0,     0,     0,    32,    33,    34,    35,
      36,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    42,   460,    43,
      44,     0,    45,    46,     0,     0,     0,    47,    48,     0,
      49,     0,    50,     0,     0,    51,    52,    53,     0,    54,
      55,    56,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   914,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     405,   406,     0,    57,     0,    58,    59,    60,    61,     0,
       0,     0,     0,    62,    63,    15,     0,    64,    65,    66,
       0,    16,    67,    68,    69,    70,    71,     0,    17,    18,
      19,     0,   407,   408,   409,    20,     0,     0,     0,    21,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,    26,     0,     0,     0,     0,     0,    27,     0,     0,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,     0,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    42,
     461,    43,    44,     0,    45,    46,     0,     0,     0,    47,
      48,     0,    49,     0,    50,     0,     0,    51,    52,    53,
       0,    54,    55,    56,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   916,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   405,   406,     0,    57,     0,    58,    59,    60,
      61,     0,     0,     0,     0,    62,    63,    15,     0,    64,
      65,    66,     0,    16,    67,    68,    69,    70,    71,     0,
      17,    18,    19,     0,   407,   408,   409,    20,     0,     0,
       0,    21,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,    26,     0,     0,     0,     0,     0,    27,
       0,     0,    28,    29,    30,     0,    31,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,    42,   463,    43,    44,     0,    45,    46,     0,     0,
       0,    47,    48,     0,    49,     0,    50,     0,     0,    51,
      52,    53,     0,    54,    55,    56,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   405,   406,     0,    57,     0,    58,
      59,    60,    61,     0,     0,     0,     0,    62,    63,    15,
       0,    64,    65,    66,     0,    16,    67,    68,    69,    70,
      71,     0,    17,    18,    19,     0,   407,   408,   409,    20,
       0,     0,     0,    21,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,    26,     0,     0,     0,     0,
       0,    27,     0,     0,    28,    29,    30,     0,    31,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    42,   464,    43,    44,     0,    45,    46,
       0,     0,     0,    47,    48,     0,    49,     0,    50,     0,
       0,    51,    52,    53,     0,    54,    55,    56,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   405,   406,     0,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    60,    61,     0,     0,     0,     0,    62,
      63,     0,     0,    64,    65,    66,     0,     0,    67,    68,
      69,    70,    71,   407,   408,   409,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,     0,     0,     0,     0,     0,     0,   405,   406,
       0,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,     0,     0,     0,
     407,   408,   409,     0,     0,     0,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,     0,     0,     0,     0,     0,   405,   406,     0,     0,
       0,     0,     0,   679,     0,     0,     0,     0,     0,   405,
     406,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,     0,     0,     0,     0,   407,   408,
     409,   405,   406,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,   409,   405,   406,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,     0,     0,   407,   408,   409,   405,   406,     0,     0,
     680,     0,     0,     0,     0,     0,   407,   408,   409,     0,
       0,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,     0,     0,     0,     0,   407,   408,
     409,   405,   406,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   681,     0,
       0,     0,     0,   407,   408,   409,   405,   406,     0,     0,
       0,   682,     0,     0,     0,     0,     0,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
       0,     0,     0,   683,     0,     0,     0,     0,   407,   408,
     409,   405,   406,     0,     0,     0,   684,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   405,   406,     0,     0,     0,   685,     0,
       0,     0,     0,   407,   408,   409,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,     0,     0,     0,     0,   407,   408,   409,     0,     0,
       0,     0,     0,   686,     0,     0,     0,   405,   406,     0,
       0,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,     0,   687,   407,
     408,   409,     0,     0,     0,     0,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,     0,     0,     0,     0,     0,   405,   406,     0,     0,
       0,     0,     0,   688,     0,     0,     0,     0,     0,     0,
       0,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,     0,   689,     0,     0,   407,   408,
     409,   405,   406,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   405,   406,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,     0,     0,   407,   408,   409,   405,   406,     0,   692,
       0,     0,     0,     0,     0,     0,   407,   408,   409,     0,
       0,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,     0,     0,     0,     0,   407,   408,
     409,   405,   406,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   699,     0,
       0,     0,     0,   407,   408,   409,   405,   406,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   704,     0,     0,     0,     0,   407,   408,
     409,   405,   406,     0,     0,     0,   705,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   405,   406,     0,     0,     0,   708,     0,
       0,     0,     0,   407,   408,   409,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,     0,     0,     0,     0,   407,   408,   409,   405,   406,
       0,     0,     0,   740,     0,     0,     0,     0,     0,     0,
       0,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,     0,     0,     0,     0,     0,     0,
     407,   408,   409,     0,     0,     0,     0,     0,   756,     0,
       0,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   405,   406,     0,     0,
       0,     0,     0,   758,     0,     0,     0,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
       0,     0,     0,     0,     0,   759,     0,     0,   407,   408,
     409,   405,   406,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
     762,   405,   406,   407,   408,   409,     0,     0,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   407,   408,   409,     0,   405,   406,     0,
       0,     0,     0,     0,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,     0,     0,     0,
       0,     0,     0,   405,   406,     0,     0,     0,   763,   407,
     408,   409,     0,     0,     0,     0,   405,   406,     0,     0,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,     0,     0,   407,   408,   409,   405,   406,
       0,     0,     0,   765,     0,     0,     0,     0,   407,   408,
     409,     0,     0,     0,     0,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,     0,     0,
     407,   408,   409,   777,   405,   406,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,     0,     0,     0,   407,   408,   409,   835,
     405,   406,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   837,     0,     0,     0,     0,
       0,     0,   407,   408,   409,   405,   406,     0,   840,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,     0,     0,     0,     0,   405,   406,     0,     0,
     863,     0,     0,     0,     0,     0,     0,   407,   408,   409,
     405,   406,     0,     0,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,     0,   407,   408,
     409,     0,   405,   406,     0,     0,   864,     0,     0,     0,
       0,     0,   407,   408,   409,     0,     0,     0,     0,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,     0,     0,   407,   408,   409,     0,     0,   405,
     406,     0,   865,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,   407,   408,   409,   405,   406,     0,   938,     0,     0,
       0,     0,     0,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,     0,     0,   939,     0,
       0,     0,     0,     0,     0,     0,   407,   408,   409,   405,
     406,     0,   940,     0,     0,     0,     0,     0,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,     0,   465,   405,   406,     0,     0,     0,     0,     0,
       0,   407,   408,   409,     0,     0,   405,   406,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   407,   408,   409,     0,   466,
       0,     0,     0,   405,   406,     0,     0,     0,   407,   408,
     409,     0,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   477,   407,   408,   409,   405,   406,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,     0,     0,     0,   478,
     407,   408,   409,     0,     0,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,     0,     0,
       0,     0,     0,   479,     0,     0,     0,     0,     0,     0,
       0,     0,   405,   406,     0,     0,   555,     0,     0,     0,
       0,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,     0,     0,     0,     0,     0,     0,
     405,   406,     0,   559,   407,   408,   409,     0,     0,     0,
       0,     0,     0,   405,   406,     0,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,     0,   407,   408,   409,   405,   406,     0,   623,     0,
       0,     0,     0,     0,     0,   407,   408,   409,     0,     0,
       0,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,     0,     0,     0,   407,   408,   409,
       0,   405,   406,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,     0,   627,   407,   408,   409,   405,   406,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     629,     0,     0,     0,     0,     0,     0,     0,   407,   408,
     409,   405,   406,   630,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,     0,     0,     0,
       0,     0,     0,   405,   406,   633,     0,     0,     0,     0,
       0,     0,     0,   407,   408,   409,   405,   406,     0,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,     0,     0,     0,   407,   408,   409,   405,   406,
       0,   700,     0,     0,     0,     0,     0,     0,   407,   408,
     409,     0,     0,     0,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,     0,     0,     0,
     407,   408,   409,     0,   405,   406,   701,     0,     0,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,     0,   407,   408,   409,   405,
     406,   702,     0,     0,     0,     0,     0,     0,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,     0,     0,   735,     0,     0,     0,     0,     0,     0,
       0,   407,   408,   409,   405,   406,   741,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
       0,     0,     0,     0,     0,     0,     0,     0,   742,   405,
     406,     0,     0,     0,     0,     0,   407,   408,   409,     0,
       0,     0,   405,   406,     0,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,     0,     0,
       0,   407,   408,   409,   744,     0,     0,     0,   405,   406,
       0,     0,     0,     0,   407,   408,   409,     0,     0,     0,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,     0,     0,     0,     0,   405,   406,   746,
     407,   408,   409,     0,     0,     0,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   407,
     408,   409,     0,     0,   749,   405,   406,     0,     0,     0,
       0,     0,     0,     0,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,     0,     0,   750,
       0,     0,     0,     0,     0,     0,     0,   407,   408,   409,
     405,   406,   752,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   405,   406,   753,     0,
       0,     0,   407,   408,   409,     0,     0,     0,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,     0,     0,     0,     0,     0,     0,   754,   407,   408,
     409,     0,     0,     0,   405,   406,     0,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   755,   407,   408,   409,     0,
       0,     0,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   407,   408,   409,   405,   406,
     760,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   761,   405,   406,     0,
     407,   408,   409,     0,     0,     0,     0,     0,     0,     0,
     405,   406,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,     0,     0,     0,     0,   407,
     408,   409,   405,   406,   781,     0,     0,     0,     0,     0,
       0,     0,   407,   408,   409,     0,     0,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
       0,   405,   406,   809,   407,   408,   409,     0,     0,     0,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   407,   408,   409,     0,     0,   811,     0,
       0,     0,   405,   406,     0,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   812,     0,     0,
       0,     0,     0,     0,   407,   408,   409,   405,   406,     0,
     815,     0,     0,     0,     0,     0,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
     405,   406,   836,     0,     0,     0,     0,     0,     0,   407,
     408,   409,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,     0,     0,     0,     0,     0,
       0,   839,   407,   408,   409,   405,   406,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,     0,     0,     0,     0,   407,   408,   409,
       0,     0,   868,     0,     0,     0,   405,   406,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   405,   406,     0,     0,     0,   870,   407,   408,
     409,     0,     0,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,     0,   405,   406,     0,
     873,     0,     0,     0,   407,   408,   409,     0,     0,     0,
     405,   406,     0,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,     0,     0,     0,   407,
     408,   409,     0,     0,     0,   874,     0,     0,   405,   406,
       0,     0,   407,   408,   409,     0,     0,     0,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     407,   408,   409,   405,   406,     0,   876,     0,     0,     0,
       0,     0,     0,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,     0,     0,     0,     0,
       0,     0,   877,   405,   406,   407,   408,   409,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,     0,     0,     0,     0,     0,     0,   878,     0,     0,
       0,     0,     0,     0,     0,   407,   408,   409,   405,   406,
     881,     0,     0,     0,     0,     0,     0,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
       0,     0,     0,     0,     0,     0,     0,     0,   882,     0,
     407,   408,   409,   405,   406,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   405,   406,
       0,     0,     0,   891,     0,   407,   408,   409,     0,     0,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,     0,     0,     0,     0,     0,     0,     0,
     407,   408,   409,   922,     0,     0,     0,   405,   406,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,   924,   407,
     408,   409,     0,     0,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   407,   408,   409,
     405,   406,     0,   925,     0,     0,     0,     0,     0,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,     0,     0,     0,     0,     0,     0,   931,   405,
     406,     0,   407,   408,   409,     0,     0,     0,     0,     0,
       0,     0,   405,   406,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,     0,     0,     0,
       0,   407,   408,   409,   405,   406,     0,   932,     0,     0,
       0,     0,     0,     0,   407,   408,   409,     0,     0,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,     0,     0,     0,   969,   407,   408,   409,   405,
     406,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,     0,     0,     0,
     972,   407,   408,   409,   405,   406,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   986,
       0,     0,     0,     0,     0,     0,   407,   408,   409,   405,
     406,     0,   987,     0,     0,     0,     0,     0,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,     0,   989,     0,     0,     0,     0,     0,
       0,   407,   408,   409,   405,   406,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,     0,     0,   407,   408,   409,   405,   406,     0,   990,
       0,     0,     0,     0,     0,     0,   407,   408,   409,     0,
       0,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,     0,     0,     0,     0,   407,   408,
     409,     0,     0,     0,  1000,     0,     0,     0,   405,   406,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,     0,  1003,
     407,   408,   409,     0,     0,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,     0,     0,
       0,  1006,     0,     0,     0,     0,     0,     0,   407,   408,
     409,   405,   406,     0,  1007,     0,     0,     0,     0,     0,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,     0,     0,     0,  1009,     0,     0,     0,
     405,   406,     0,   407,   408,   409,     0,     0,     0,     0,
       0,     0,     0,   405,   406,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,     0,     0,
       0,     0,   407,   408,   409,   405,   406,     0,  1010,     0,
       0,     0,     0,     0,     0,   407,   408,   409,     0,     0,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,     0,     0,     0,  1016,   407,   408,   409,
     405,   406,     0,     0,     0,     0,   712,     0,     0,     0,
       0,     0,     0,     0,     0,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,     0,     0,
       0,  1017,   407,   408,   409,   405,   406,     0,     0,     0,
       0,   714,   392,   419,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,     0,     0,     0,     0,     0,
    1020,     0,     0,     0,     0,     0,     0,   407,   408,   409,
     405,   406,     0,  1021,     0,     0,   791,     0,     0,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,     0,     0,     0,  1024,     0,     0,     0,     0,
       0,     0,   407,   408,   409,   405,   406,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1025,     0,   405,   406,     0,     0,     0,   407,   408,   409,
     793,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   407,   408,   409,     0,     0,   405,
     406,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   408,   409
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-434)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      17,    18,    19,    20,    96,    97,     7,     8,   249,     7,
       8,    24,    32,    33,    36,    98,    99,   100,   101,    71,
     230,     0,     7,     8,   244,     1,    43,    44,    80,    46,
      47,    48,    49,    50,    51,    19,    53,    54,    55,    56,
       7,     8,     9,    10,    61,     7,     8,     9,    28,    29,
      67,    68,    69,    24,    71,    24,    25,    26,    27,    16,
      24,    30,    31,    32,    21,    70,    29,    72,    25,   244,
      27,    88,    89,    90,    24,    88,    93,    29,   279,   244,
      32,    33,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    74,    20,   114,   115,     4,
       5,    85,   119,   120,    24,    25,    26,    27,    60,   244,
      30,    31,    32,    24,    25,    26,    27,    88,    81,    30,
      31,    32,     7,     8,    88,     7,     8,     9,    33,    81,
     244,    94,    95,    96,    97,     4,     5,    99,    88,   156,
     448,   449,    94,    95,    96,    97,    70,    24,    25,    26,
      27,   244,   169,    30,    31,    32,   244,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
     244,   244,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   244,   205,     7,
       8,     9,   209,    24,    25,    26,    27,   244,     4,    30,
      31,    32,   443,     4,   145,   146,   147,   244,   244,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,   244,     8,    24,    25,    26,    27,     7,    10,
      30,    31,    32,    24,    25,    26,    27,    10,     0,    30,
      31,    32,    70,   244,    72,   262,   244,   113,   114,   266,
      19,   268,   269,    20,   230,   272,   339,   340,   341,   244,
     277,   278,   243,    24,   113,   114,    19,   244,   469,   243,
     471,   243,    10,   290,   243,   232,   243,   243,    88,   145,
     146,   147,     7,     8,     9,    10,   303,   304,   305,   306,
     307,   308,   309,   310,   314,   244,   145,   146,   147,   113,
     114,   244,   243,    79,   245,    24,    25,    26,    27,   244,
     244,    30,    31,    32,   244,   244,     7,     8,     9,    10,
     337,   338,   244,   243,    19,   245,   302,   279,     7,     8,
       9,   145,   146,   147,   245,   244,   244,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   437,   312,   373,   244,   321,     7,
       8,     9,   314,   380,   381,   244,   383,   384,   245,   321,
     387,   388,     7,     8,     9,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   603,   243,   243,   245,   830,   831,   832,
     417,   418,   419,    94,   421,   244,   423,     7,     8,     9,
      10,   244,   504,   243,   245,     7,     8,     9,    10,   244,
     244,   244,   439,   440,   441,   442,   243,   444,   244,   243,
     447,   245,    24,   450,   451,   244,   453,   454,   455,   244,
     457,   244,   244,   460,   461,   245,   463,   464,   465,   466,
     244,    51,   243,    24,   430,   472,   244,   244,   475,   476,
     477,   478,   479,     0,     1,    24,    25,    26,    27,   244,
     244,    30,    31,    32,   244,   438,   493,   243,   495,   244,
     244,   498,    24,    25,    26,    27,   438,   244,    30,    31,
      32,    19,    29,   244,   244,    32,    33,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       4,     5,   244,     7,     8,   244,    10,   469,   244,   471,
     244,   244,   244,    60,    23,   243,   245,   244,   244,    28,
      29,   244,   244,   550,   491,    34,    35,    74,   555,   502,
     244,   504,   559,   244,    81,     6,     7,     8,     9,    10,
     502,   243,   504,     7,     8,     9,    10,    94,    95,    96,
      97,    24,    25,    26,    27,    24,   244,    30,    31,    32,
       7,     8,     9,    10,   244,   785,   113,    24,   595,   243,
     597,   243,   245,    24,    25,    26,    27,   113,   114,    30,
      31,    32,   245,   245,    24,    25,    26,    27,   245,   245,
      30,    31,    32,   245,   245,   245,   623,     7,     0,     1,
     627,     8,   629,   630,   113,   114,   633,   244,     9,   145,
     146,   147,    24,    25,    26,    27,   709,   243,    30,    31,
      32,    19,     7,     9,     8,    88,    85,    29,     7,    97,
      32,    33,    68,    24,    25,    26,    27,    19,   605,    30,
      31,    32,   615,    19,    19,    23,    19,   245,   245,   245,
      28,    29,   244,   615,    32,    33,    34,    35,    60,   244,
     244,    10,    32,    86,   244,   244,   244,   694,   695,   696,
       7,     9,    74,     8,   701,   702,   245,    70,    73,    81,
      24,    96,   243,   230,   231,   712,    19,   714,   244,    19,
     245,   243,    94,    95,    96,    97,   245,   245,     8,   245,
     245,   245,   729,   244,   731,   244,   733,   243,    68,   245,
     244,   113,     9,     7,   741,   742,   243,   744,   243,   746,
     243,    50,   749,   750,    49,   752,   753,   754,   755,    49,
      49,   243,   279,   760,   761,   113,   114,   243,   245,   725,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   245,   781,   302,   245,    19,   245,   244,
      19,    24,    19,    78,   791,    78,   793,   314,    72,    78,
      78,    78,   245,   245,   321,    38,    39,    40,    41,    42,
      43,    44,   809,   245,   811,   812,    71,   245,   815,    78,
      78,    78,   243,   290,   821,   822,   782,    78,    78,    78,
     786,   787,   788,   789,   790,   245,   833,    78,    78,   836,
      78,    78,   839,    24,    25,    26,    27,    72,   845,    30,
      31,    32,    78,   850,    78,    78,    78,    78,   230,   231,
     113,   114,    78,   245,    78,    78,    78,    78,    78,    78,
      78,   868,    74,   870,   438,   738,   873,   874,   502,   710,
      -1,    -1,   243,    -1,   881,   882,    -1,    39,    40,    -1,
      -1,    -1,   145,    -1,   891,    -1,    -1,    -1,    -1,    -1,
     856,   857,   858,   859,   860,    -1,    -1,   279,    -1,    61,
     907,    -1,   429,   430,    -1,   912,   433,    -1,    -1,   436,
      -1,   438,    -1,    -1,    -1,   922,    -1,   924,   925,    -1,
     302,    -1,    -1,    -1,   931,   932,    -1,    -1,    -1,   895,
      -1,    -1,   314,    -1,   900,    -1,    -1,    -1,    -1,   321,
      -1,    -1,   469,    -1,   471,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,   969,    -1,    -1,   972,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   502,    -1,   504,    -1,   986,
     987,    -1,   989,   990,    -1,    -1,    -1,   953,    -1,    -1,
      -1,    -1,   958,  1000,    -1,    -1,  1003,    -1,    -1,  1006,
    1007,    -1,  1009,  1010,    -1,    -1,   168,    -1,    -1,  1016,
    1017,    -1,    -1,  1020,  1021,    -1,    -1,  1024,  1025,    -1,
      -1,    -1,    -1,    -1,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    29,   113,   114,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,    -1,
      -1,   433,    -1,    -1,   436,    -1,   438,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,   601,    70,   603,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,   469,   615,   471,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,   113,   114,
     502,    -1,   504,    -1,    -1,    -1,    -1,    -1,   290,    -1,
      -1,   658,    -1,   660,   661,   662,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    -1,   243,    21,   245,    -1,    -1,
      25,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,   348,   349,   350,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,   725,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,   371,
     372,    -1,   374,   375,   376,   377,   378,    -1,    -1,   601,
      -1,   603,    -1,   145,   146,   147,    81,    -1,    -1,    -1,
      -1,    -1,    -1,   615,    -1,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,   410,   411,
     412,   413,   414,   415,   416,   782,    -1,    -1,   785,   786,
     787,   788,   789,   790,    -1,    -1,    -1,    -1,    -1,   796,
      -1,    -1,    -1,    -1,    -1,    -1,   658,   429,   660,   661,
     662,   433,    -1,    -1,   436,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   168,    -1,    -1,    -1,   844,    -1,    -1,
     847,   243,   849,   245,    -1,   852,    -1,   854,    -1,   856,
     857,   858,   859,   860,    -1,   862,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   725,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   895,    -1,
      -1,    -1,    -1,   900,    -1,   113,   114,   232,    -1,   906,
      -1,    -1,   909,    -1,   911,    -1,    -1,   914,    -1,   916,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     782,    -1,    -1,   785,   786,   787,   788,   789,   790,    -1,
      -1,    -1,    -1,    -1,   796,    -1,    -1,   944,    -1,    -1,
      -1,   948,    -1,    -1,   279,    -1,   953,    -1,    -1,    -1,
      -1,   958,    -1,    -1,    -1,   290,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   601,
      -1,   978,    -1,    -1,    -1,   982,   311,   312,    -1,    -1,
      -1,    -1,   844,    -1,    -1,   847,   321,   849,    -1,    -1,
     852,    -1,   854,    -1,   856,   857,   858,   859,   860,    -1,
     862,    -1,    -1,    -1,   339,   340,   341,    -1,    -1,    -1,
      -1,    -1,    -1,   348,   349,   350,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   658,    -1,   660,   661,
     662,    -1,    -1,   895,    -1,    -1,   371,   372,   900,   374,
     375,   376,   377,   378,   906,    -1,    -1,   909,    -1,   911,
      -1,   693,   914,    -1,   916,    -1,    -1,    -1,   700,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,   410,   411,   412,   413,   414,
     415,   416,   944,    -1,    -1,    -1,   948,    -1,    -1,    -1,
      -1,   953,    -1,    -1,    -1,    -1,   958,    -1,    -1,    -1,
      -1,    -1,   437,   438,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   978,    -1,    -1,    -1,
     982,    -1,   764,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   469,    -1,   471,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,   491,    -1,     6,    -1,
      -1,     9,    10,    -1,   796,    -1,    -1,   502,    -1,   504,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   844,    -1,    -1,   847,    -1,   849,    -1,    67,
     852,    -1,   854,    -1,    -1,   867,    -1,    -1,    -1,    -1,
     862,    -1,    -1,    -1,   876,   877,   878,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
     605,    -1,    -1,    -1,   906,    -1,    -1,   909,    -1,   911,
     615,   245,   914,    -1,   916,   133,    -1,   135,   136,   137,
      -1,   139,    -1,   141,     4,     5,   144,     7,     8,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,   944,    -1,    -1,    -1,   948,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,   978,    -1,    58,    -1,
     982,    61,    62,    63,    64,    65,    -1,    -1,   693,   145,
     146,   147,    -1,    -1,    -1,   700,    -1,    -1,    -1,    -1,
     218,    -1,    -1,    -1,   709,   145,   146,   147,   226,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,    -1,
     110,   111,   112,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,    -1,   134,    -1,    -1,    -1,   138,   764,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,    -1,
      -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,   168,   245,
      -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   243,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,    -1,   216,   217,     4,     5,
      -1,     7,     8,    -1,    10,   225,    -1,    -1,    -1,    -1,
      16,    17,   232,   233,    -1,    -1,    -1,    -1,    -1,   239,
     240,   241,   867,    -1,   244,   245,    -1,    33,    -1,    -1,
      -1,   876,   877,   878,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,    -1,   110,   111,   112,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    -1,   134,    -1,
      -1,    -1,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,    -1,    -1,   161,    -1,    -1,    -1,    -1,
      -1,    -1,   168,    -1,    -1,   171,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,    -1,
     216,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    -1,    -1,    -1,    -1,   232,   233,    -1,    -1,
      -1,    -1,    -1,   239,   240,   241,    -1,    -1,   244,   245,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,    -1,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,    -1,   141,    -1,   143,
     144,    -1,    -1,    -1,   148,    -1,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,   161,    -1,    -1,
      -1,    -1,    -1,    -1,   168,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,    -1,   216,   217,   218,    -1,    -1,   221,    -1,    -1,
      -1,   225,   226,    -1,    -1,    -1,    -1,    -1,   232,   233,
      -1,    -1,    -1,    -1,    -1,   239,   240,   241,    -1,   243,
     244,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,    -1,    -1,   110,   111,   112,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,   141,    -1,
     143,   144,    -1,    -1,    -1,   148,    -1,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,    -1,    -1,   161,    -1,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,    -1,   216,   217,   218,    -1,    -1,    -1,    -1,
      -1,    -1,   225,   226,    -1,    -1,    -1,    -1,    -1,   232,
     233,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,     4,
       5,   244,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,   107,   113,   114,   110,   111,   112,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,    -1,   134,
      -1,    -1,    -1,   138,    -1,   145,   146,   147,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,    -1,    -1,   161,    -1,    -1,    -1,
      -1,   166,    -1,   168,    -1,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
      -1,   216,   217,     4,     5,    -1,     7,     8,    -1,    10,
     225,    -1,    -1,    -1,    -1,    16,    17,   232,   233,    -1,
      -1,    -1,    -1,   243,   239,   240,   241,    -1,    -1,   244,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     241,    -1,    -1,   244,    -1,    -1,    33,    -1,    -1,    -1,
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
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   167,   168,    -1,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,    -1,   216,   217,     4,     5,    -1,     7,     8,
      -1,    10,   225,    -1,    -1,    -1,    -1,    16,    17,   232,
     233,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,    -1,
      -1,   244,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,    -1,   134,    -1,    -1,    -1,   138,
      -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
      -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,   168,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,    -1,   216,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,
      -1,    -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,
     239,   240,   241,     3,    -1,   244,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,
     150,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,   159,
      -1,   161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,
     170,    -1,   172,    -1,   174,    -1,    -1,   177,   178,   179,
      -1,   181,   182,   183,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   215,    -1,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,   225,   226,    -1,    -1,   229,
     230,   231,    -1,    -1,   234,   235,   236,   237,   238,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   245,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    51,   113,   114,    -1,    -1,    -1,    -1,
      58,    59,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    82,    -1,   145,   146,   147,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,   145,   146,   147,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,
      -1,   169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
     178,   179,    -1,   181,   182,   183,   245,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,   217,
     218,   219,   220,    -1,    -1,    -1,    -1,   225,   226,    -1,
      -1,   229,   230,   231,    -1,    -1,   234,   235,   236,   237,
     238,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    51,   113,   114,    -1,    -1,
      -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    -1,   145,   146,
     147,    87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,
     146,   147,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,   161,   162,    -1,   164,   165,
      -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,   178,   179,    -1,   181,   182,   183,   245,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
      -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,   225,
     226,    -1,    -1,   229,   230,   231,    -1,    -1,   234,   235,
     236,   237,   238,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,   113,   114,
      -1,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    82,    -1,
     145,   146,   147,    87,    -1,    -1,    90,    91,    92,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,   145,   146,   147,    -1,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,
     164,   165,    -1,    -1,    -1,   169,   170,    -1,   172,    -1,
     174,    -1,    -1,   177,   178,   179,    -1,   181,   182,   183,
     245,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,
      -1,   225,   226,    -1,    -1,   229,   230,   231,    -1,    -1,
     234,   235,   236,   237,   238,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,
     113,   114,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    -1,   145,   146,   147,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,   145,   146,   147,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,
     162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,    -1,
     172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,   181,
     182,   183,   245,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   215,    -1,   217,   218,   219,   220,    -1,
      -1,    -1,    -1,   225,   226,    -1,    -1,   229,   230,   231,
      -1,    -1,   234,   235,   236,   237,   238,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    51,   113,   114,    -1,    -1,    -1,    -1,    58,    59,
      60,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    -1,    -1,   145,   146,   147,    87,    -1,    -1,
      90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,   145,   146,   147,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,   161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,
     170,    -1,   172,    -1,   174,    -1,    -1,   177,   178,   179,
      -1,   181,   182,   183,   245,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   215,    -1,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,   225,   226,    -1,    -1,   229,
     230,   231,    -1,    -1,   234,   235,   236,   237,   238,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    51,   113,   114,    -1,    -1,    -1,    -1,
      58,    59,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    -1,    -1,   145,   146,   147,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,   145,   146,   147,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,
      -1,   169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
     178,   179,    -1,   181,   182,   183,   245,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,   217,
     218,   219,   220,    -1,    -1,    -1,    -1,   225,   226,    -1,
      -1,   229,   230,   231,    -1,    -1,   234,   235,   236,   237,
     238,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    51,   113,   114,    -1,    -1,
      -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,   145,   146,
     147,    87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,
     146,   147,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,   161,   162,    -1,   164,   165,
      -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,   178,   179,    -1,   181,   182,   183,   245,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
      -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,   225,
     226,    -1,    -1,   229,   230,   231,    -1,    -1,   234,   235,
     236,   237,   238,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,   113,   114,
      -1,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,
     145,   146,   147,    87,    -1,    -1,    90,    91,    92,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,   145,   146,   147,    -1,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,
     164,   165,    -1,    -1,    -1,   169,   170,    -1,   172,    -1,
     174,    -1,    -1,   177,   178,   179,    -1,   181,   182,   183,
     245,    -1,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,   215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,
      -1,   225,   226,    45,    -1,   229,   230,   231,    -1,    51,
     234,   235,   236,   237,   238,    -1,    58,    59,    60,    -1,
     145,   146,   147,    65,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      -1,    83,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   243,   161,
     162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,    -1,
     172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,   181,
     182,   183,    -1,    -1,    -1,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,   215,    -1,   217,   218,   219,   220,    -1,
      -1,    -1,    -1,   225,   226,    45,    -1,   229,   230,   231,
      -1,    51,   234,   235,   236,   237,   238,    -1,    58,    59,
      60,    -1,   145,   146,   147,    65,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
     243,   161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,
     170,    -1,   172,    -1,   174,    -1,    -1,   177,   178,   179,
      -1,   181,   182,   183,    -1,    -1,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,   215,    -1,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,   225,   226,    45,    -1,   229,
     230,   231,    -1,    51,   234,   235,   236,   237,   238,    -1,
      58,    59,    60,    -1,   145,   146,   147,    65,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,   243,   161,   162,    -1,   164,   165,    -1,    -1,
      -1,   169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
     178,   179,    -1,   181,   182,   183,    -1,    -1,    -1,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,   215,    -1,   217,
     218,   219,   220,    -1,    -1,    -1,    -1,   225,   226,    45,
      -1,   229,   230,   231,    -1,    51,   234,   235,   236,   237,
     238,    -1,    58,    59,    60,    -1,   145,   146,   147,    65,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,   243,   161,   162,    -1,   164,   165,
      -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,   178,   179,    -1,   181,   182,   183,    -1,    -1,
      -1,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,   215,
      -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,   225,
     226,    45,    -1,   229,   230,   231,    -1,    51,   234,   235,
     236,   237,   238,    -1,    58,    59,    60,    -1,   145,   146,
     147,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   243,   161,   162,    -1,
     164,   165,    -1,    -1,    -1,   169,   170,    -1,   172,    -1,
     174,    -1,    -1,   177,   178,   179,    -1,   181,   182,   183,
      -1,    -1,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,   215,    -1,   217,   218,   219,   220,    -1,    -1,    -1,
      -1,   225,   226,    45,    -1,   229,   230,   231,    -1,    51,
     234,   235,   236,   237,   238,    -1,    58,    59,    60,    -1,
     145,   146,   147,    65,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   243,   161,
     162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,    -1,
     172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,   181,
     182,   183,    -1,    -1,    -1,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,   215,    -1,   217,   218,   219,   220,    -1,
      -1,    -1,    -1,   225,   226,    45,    -1,   229,   230,   231,
      -1,    51,   234,   235,   236,   237,   238,    -1,    58,    59,
      60,    -1,   145,   146,   147,    65,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
     243,   161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,
     170,    -1,   172,    -1,   174,    -1,    -1,   177,   178,   179,
      -1,   181,   182,   183,    -1,    -1,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,   215,    -1,   217,   218,   219,
     220,    -1,    -1,    -1,    -1,   225,   226,    45,    -1,   229,
     230,   231,    -1,    51,   234,   235,   236,   237,   238,    -1,
      58,    59,    60,    -1,   145,   146,   147,    65,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,   243,   161,   162,    -1,   164,   165,    -1,    -1,
      -1,   169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
     178,   179,    -1,   181,   182,   183,    -1,    -1,    -1,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,   215,    -1,   217,
     218,   219,   220,    -1,    -1,    -1,    -1,   225,   226,    45,
      -1,   229,   230,   231,    -1,    51,   234,   235,   236,   237,
     238,    -1,    58,    59,    60,    -1,   145,   146,   147,    65,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,   243,   161,   162,    -1,   164,   165,
      -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,   178,   179,    -1,   181,   182,   183,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,   215,
      -1,   217,   218,   219,   220,    -1,    -1,    -1,    -1,   225,
     226,    -1,    -1,   229,   230,   231,    -1,    -1,   234,   235,
     236,   237,   238,   145,   146,   147,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,   145,   146,
     147,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,   145,   146,   147,   113,   114,    -1,    -1,
     245,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,   145,   146,
     147,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,   145,   146,   147,   113,   114,    -1,    -1,
      -1,   245,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   145,   146,
     147,   113,   114,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,   145,   146,   147,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,   113,   114,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   245,   145,
     146,   147,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   245,    -1,    -1,   145,   146,
     147,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,   145,   146,   147,   113,   114,    -1,   245,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,   145,   146,
     147,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,   145,   146,   147,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   145,   146,
     147,   113,   114,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,   145,   146,   147,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,   113,   114,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,   145,   146,
     147,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     245,   113,   114,   145,   146,   147,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,   245,   145,
     146,   147,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   145,   146,   147,   113,   114,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     145,   146,   147,   245,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,   145,   146,   147,   245,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,   113,   114,    -1,   245,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
     245,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
     113,   114,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   145,   146,
     147,    -1,   113,   114,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,   145,   146,   147,    -1,    -1,   113,
     114,    -1,   245,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   145,   146,   147,   113,   114,    -1,   245,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,   245,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,   113,
     114,    -1,   245,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   243,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,   243,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,   145,   146,
     147,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   243,   145,   146,   147,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,   243,
     145,   146,   147,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,   243,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,   243,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,   145,   146,   147,   113,   114,    -1,   243,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,   145,   146,   147,
      -1,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,   243,   145,   146,   147,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,   113,   114,   243,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,   243,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,   113,   114,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,   145,   146,   147,   113,   114,
      -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
     145,   146,   147,    -1,   113,   114,   243,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   145,   146,   147,   113,
     114,   243,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,   113,   114,   243,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,   113,
     114,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,   113,   114,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,   145,   146,   147,   243,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,   113,   114,   243,
     145,   146,   147,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,   243,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   243,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
     113,   114,   243,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,   243,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,   243,   145,   146,
     147,    -1,    -1,    -1,   113,   114,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   113,   114,   243,   145,   146,   147,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,   113,   114,
     243,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   243,   113,   114,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,   145,
     146,   147,   113,   114,   243,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   113,   114,   243,   145,   146,   147,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,    -1,    -1,   243,    -1,
      -1,    -1,   113,   114,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,   113,   114,    -1,
     243,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     113,   114,   243,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,   243,   145,   146,   147,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,   243,    -1,    -1,    -1,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    -1,   243,   145,   146,
     147,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,   113,   114,    -1,
     243,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
     113,   114,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,   243,    -1,    -1,   113,   114,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,   113,   114,    -1,   243,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,   243,   113,   114,   145,   146,   147,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,   113,   114,
     243,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,
     145,   146,   147,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,   243,    -1,   145,   146,   147,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,   243,    -1,    -1,    -1,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,   113,   114,    -1,   243,   145,
     146,   147,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
     113,   114,    -1,   243,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   243,   113,
     114,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,   145,   146,   147,   113,   114,    -1,   243,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,   243,   145,   146,   147,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
     243,   145,   146,   147,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,   113,
     114,    -1,   243,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,   113,   114,    -1,   243,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,   145,   146,   147,   113,   114,    -1,   243,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,   243,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,   113,   114,    -1,   243,
     145,   146,   147,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,   113,   114,    -1,   243,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,   243,    -1,    -1,    -1,
     113,   114,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,   145,   146,   147,   113,   114,    -1,   243,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,   243,   145,   146,   147,
     113,   114,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,   243,   145,   146,   147,   113,   114,    -1,    -1,    -1,
      -1,    84,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
     243,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
     113,   114,    -1,   243,    -1,    -1,    84,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     243,    -1,   113,   114,    -1,    -1,    -1,   145,   146,   147,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    45,    51,    58,    59,    60,
      65,    69,    74,    75,    76,    77,    81,    87,    90,    91,
      92,    94,    98,    99,   100,   101,   102,   103,   104,   142,
     149,   150,   159,   161,   162,   164,   165,   169,   170,   172,
     174,   177,   178,   179,   181,   182,   183,   215,   217,   218,
     219,   220,   225,   226,   229,   230,   231,   234,   235,   236,
     237,   238,   247,   248,   249,   251,   252,   255,   256,   257,
     258,   265,   266,   273,   274,   275,   286,   251,   244,   244,
     244,     7,     8,   244,   244,   244,   244,   244,   244,   244,
     244,   244,     7,     8,     9,     4,     5,     6,     9,    10,
      16,    17,    18,    33,    58,    61,    62,    63,    64,    65,
      67,    94,   105,   106,   107,   110,   111,   112,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   141,   143,   144,   148,   151,   152,   153,
     154,   155,   156,   157,   158,   161,   168,   171,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   216,
     217,   218,   225,   226,   232,   233,   239,   240,   241,   244,
     253,   254,   255,   256,   258,   269,   270,   271,    10,   254,
     254,   254,   254,   271,     7,     8,     9,    99,     4,     4,
     271,    19,    85,   271,   271,   272,   257,   258,   259,   260,
       7,     8,     9,    10,   263,   264,   257,   274,     9,    94,
     274,     8,    10,   270,   270,     7,     8,     9,   261,   262,
     254,   254,   166,   254,   254,   254,   167,   254,   167,   168,
     254,   254,   167,   254,   254,   254,   254,   244,   244,     6,
     259,   278,   279,    21,    36,    37,   221,   243,   254,   270,
     276,   277,     7,    10,    10,   254,   254,   254,   254,     0,
     248,    19,    20,    24,    38,    39,    40,    41,    42,    43,
      44,    24,    24,   259,   243,    19,   254,   254,   245,   254,
     254,    51,   259,   280,   281,   259,   282,   283,   283,   283,
     272,   272,   272,   272,   243,   243,   243,   244,   244,   244,
     244,   244,     4,     5,   255,   256,   254,   254,   244,   244,
     244,   254,   254,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,    36,
     244,   244,   254,   244,   244,   270,   254,   244,   244,    10,
     254,   254,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,   113,   114,   145,   146,   147,
      24,    25,    26,    27,    30,    31,    32,   244,   243,    24,
      79,    24,    88,    24,    88,    88,     7,     8,     9,    19,
      83,   251,   252,   249,   250,   271,    19,   243,   243,   244,
     244,   244,   244,   243,   244,   264,    19,   244,   243,   243,
     243,   243,   254,   243,   243,   243,   254,   243,   254,   254,
     243,   243,   254,   243,   243,   243,   243,   254,   254,   243,
     279,   243,   244,   277,   243,   244,   244,   243,   243,   243,
     251,   254,   254,   254,   254,   254,   254,   254,   254,   270,
     271,    24,   274,   243,   245,   243,   245,    24,   243,   245,
     245,   259,   243,   245,   243,   245,   245,   245,   245,   245,
     245,   245,     7,     8,     9,   254,   272,   272,   272,   270,
     270,   270,     7,     8,     9,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   270,   270,   254,   270,   270,   270,   270,   270,
     244,   254,   254,   254,   254,   243,   254,   254,   243,   243,
     245,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   270,
     270,   270,   270,   270,   270,   270,   254,   254,   254,    19,
     254,     7,   254,     8,     9,    24,    88,    24,    88,    88,
     250,    19,   251,    70,   250,    85,   250,   272,   260,   254,
     254,   254,   254,   264,   245,    97,   267,   268,   254,   262,
     262,   254,   254,   243,   254,   254,   254,   243,   254,   243,
     243,   254,   254,   243,   254,   254,   254,   254,   245,   245,
     279,   279,   254,     7,   254,   254,   254,   254,   254,   271,
     254,   254,    68,   254,     7,     8,     9,   281,    19,   283,
      19,    19,    19,   245,   245,   245,   245,   245,   245,   245,
     244,   244,   244,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   243,   243,   243,   243,   245,   254,   245,
     243,   243,   243,   254,   245,   245,    10,   254,   245,    86,
     284,   285,    84,   244,    84,   244,   244,   254,     7,   254,
       8,     9,    70,    72,   250,    70,   252,   271,    73,   243,
     245,   243,   245,   243,   245,   243,    24,   259,    19,    96,
     245,   243,   243,   254,   243,   254,   243,   254,   254,   243,
     243,   254,   243,   243,   243,   243,   245,   243,   245,   245,
     243,   243,   245,   245,   244,   245,   250,   250,   250,   250,
     245,   245,   245,   270,   254,   254,   254,   245,   270,   254,
     254,   243,   272,   285,    71,    80,   254,   245,   254,   245,
     245,    84,   244,    84,   244,   244,    19,    70,    72,   251,
     254,   254,   254,     8,    68,   268,   254,   254,   254,   243,
     254,   243,   243,   254,   254,   243,   254,   254,   254,   254,
       7,   243,   243,   254,   254,   270,    50,    49,    49,    49,
     243,   243,   243,   243,   245,   245,   243,   245,   245,   243,
     245,   254,   251,   252,    19,    82,   251,    19,   251,    19,
      82,   251,    19,   251,    19,   251,   254,   245,   254,   245,
     245,   250,    19,   245,   245,   245,   245,   244,   243,   254,
     243,   254,   254,   243,   243,   254,   243,   243,   243,   254,
     254,   243,   243,   245,    33,   253,   253,   253,   254,   254,
     254,   243,    19,    19,   250,   254,    78,   250,    78,   250,
     254,    78,   250,    78,   250,    78,    19,    82,   251,    19,
     251,    19,    82,   251,    19,   251,    19,   251,    72,   250,
     270,   254,   243,   254,   243,   243,   254,   254,   270,   270,
     270,   243,   243,   254,   254,   245,   245,   245,   245,   245,
     245,   254,    71,    78,    19,   251,    78,    78,    19,   251,
      78,    78,   250,   254,    78,   250,    78,   250,   254,    78,
     250,    78,   250,    78,    72,   245,   254,   254,   254,   243,
     254,   254,   243,   250,    78,   250,    78,    78,    19,   251,
      78,    78,    19,   251,    78,    78,   243,   243,   254,   243,
     243,   254,    78,    78,   250,    78,   250,    78,   254,   254,
     243,   254,   254,   243,    78,    78,   243,   243,   254,   243,
     243,   254,   254,   254,   254,   254,   243,   243,   254,   254,
     243,   243,   254,   254,   243,   243,   254,   254
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
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
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
    FILE *yyo;
    YYLTYPE const * const yylocp;
#endif
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += fprintf (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += fprintf (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += fprintf (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += fprintf (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += fprintf (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
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
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 94 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 98 "DARIC.y"
    { ast_lines[yyfileno].push_front((yyvsp[(1) - (1)].ast)); (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 99 "DARIC.y"
    { ast_lines[yyfileno].push_front((yyvsp[(1) - (2)].ast)); (yyval.ast) = link((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 103 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (2)].ast); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 104 "DARIC.y"
    { (yyval.ast) = NULL; }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 105 "DARIC.y"
    { (yyval.ast) = link(linenumber((yyvsp[(1) - (3)].v_int)), (yyvsp[(2) - (3)].ast)); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 108 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 109 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 113 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 114 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 120 "DARIC.y"
    { (yyval.ast) = token1(CHAIN, (yyvsp[(2) - (2)].ast)); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 121 "DARIC.y"
    { (yyval.ast) = token2(CHAIN, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 122 "DARIC.y"
    { (yyval.ast) = token1(EXPECT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 123 "DARIC.y"
    { (yyval.ast) = token(END); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 124 "DARIC.y"
    { (yyval.ast) = token1(CALLPROC, string((yyvsp[(1) - (1)].v_string))); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 125 "DARIC.y"
    { (yyval.ast) = token2(CALLPROC, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 126 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 127 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 128 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 129 "DARIC.y"
    { (yyval.ast) = token1(DATA, (yyvsp[(2) - (2)].ast)); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 130 "DARIC.y"
    { (yyval.ast) = token1(READ, (yyvsp[(2) - (2)].ast)); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 131 "DARIC.y"
    { (yyval.ast) = token(RESTORE); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 132 "DARIC.y"
    { (yyval.ast) = token(RETURN); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 133 "DARIC.y"
    { (yyval.ast) = token1(RETURN_WITH_VALUE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 134 "DARIC.y"
    { (yyval.ast) = token(TRACEON); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 135 "DARIC.y"
    { (yyval.ast) = token(TRACEOFF); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 136 "DARIC.y"
    { (yyval.ast) = token(BREAKPOINT); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 138 "DARIC.y"
    { (yyval.ast) = token1(DIM, (yyvsp[(2) - (2)].ast)); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 139 "DARIC.y"
    { (yyval.ast) = token1(LOCALDIM, (yyvsp[(3) - (3)].ast)); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 141 "DARIC.y"
    { (yyval.ast) = token2(BPUT, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 142 "DARIC.y"
    { (yyval.ast) = token1(BGET, (yyvsp[(2) - (2)].ast)); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 143 "DARIC.y"
    { (yyval.ast) = token2(PTRA, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 144 "DARIC.y"
    { (yyval.ast) = token1(CLOSE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 145 "DARIC.y"
    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[(1) - (8)].v_string), Type::STRING_ARRAY), (yyvsp[(7) - (8)].ast), token(GLOBAL)); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 146 "DARIC.y"
    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[(2) - (9)].v_string), Type::STRING_ARRAY), (yyvsp[(8) - (9)].ast), token(LOCAL)); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 148 "DARIC.y"
    { (yyval.ast) = token1(OSCLI, (yyvsp[(2) - (2)].ast)); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 150 "DARIC.y"
    { (yyval.ast) = token1(GOSUB, integer((yyvsp[(2) - (2)].v_int))); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 151 "DARIC.y"
    { (yyval.ast) = token1(GOTO, integer((yyvsp[(2) - (2)].v_int))); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 153 "DARIC.y"
    { (yyval.ast) = token1(INPUT_, (yyvsp[(2) - (2)].ast)); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 154 "DARIC.y"
    { (yyval.ast) = token2(INPUT_NOQUESTIONMARK, string((yyvsp[(2) - (3)].v_string)), (yyvsp[(3) - (3)].ast)); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 155 "DARIC.y"
    { (yyval.ast) = token2(INPUT_, string((yyvsp[(2) - (4)].v_string)), (yyvsp[(4) - (4)].ast)); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 156 "DARIC.y"
    { (yyval.ast) = token3(MOUSE, string((yyvsp[(2) - (6)].v_string)), string((yyvsp[(4) - (6)].v_string)), string((yyvsp[(6) - (6)].v_string)) ); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 158 "DARIC.y"
    { (yyval.ast) = token1(SINKEY, (yyvsp[(3) - (4)].ast)); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 159 "DARIC.y"
    { (yyval.ast) = token1(SINKEYS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 160 "DARIC.y"
    { (yyval.ast) = token(GET_S); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 161 "DARIC.y"
    { (yyval.ast) = token(GETS_S); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 163 "DARIC.y"
    { (yyval.ast) = token2(IF, (yyvsp[(2) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 164 "DARIC.y"
    { (yyval.ast) = token3(IF, (yyvsp[(2) - (5)].ast), (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast)); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 165 "DARIC.y"
    { (yyval.ast) = token2(IF, (yyvsp[(2) - (5)].ast), (yyvsp[(4) - (5)].ast)); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 166 "DARIC.y"
    { (yyval.ast) = token3(IF, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(7) - (8)].ast)); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 168 "DARIC.y"
    { (yyval.ast) = token2(IF, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 169 "DARIC.y"
    { (yyval.ast) = token3(IF, (yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 170 "DARIC.y"
    { (yyval.ast) = token2(IF, (yyvsp[(2) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 171 "DARIC.y"
    { (yyval.ast) = token3(IF, (yyvsp[(2) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(8) - (9)].ast)); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 173 "DARIC.y"
    { (yyval.ast) = token2(REPEAT, (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast)); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 174 "DARIC.y"
    { (yyval.ast) = token2(REPEAT, NULL, (yyvsp[(3) - (3)].ast)); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 175 "DARIC.y"
    { (yyval.ast) = token2(WHILE, (yyvsp[(2) - (5)].ast), (yyvsp[(4) - (5)].ast)); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 177 "DARIC.y"
    { (yyval.ast) = token2(SWAP_I, string((yyvsp[(2) - (4)].v_string)), string((yyvsp[(4) - (4)].v_string))); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 178 "DARIC.y"
    { (yyval.ast) = token2(SWAP_F, string((yyvsp[(2) - (4)].v_string)), string((yyvsp[(4) - (4)].v_string))); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 179 "DARIC.y"
    { (yyval.ast) = token2(SWAP_S, string((yyvsp[(2) - (4)].v_string)), string((yyvsp[(4) - (4)].v_string))); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 182 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (9)].v_string)), string((yyvsp[(4) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 183 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (9)].v_string)), string((yyvsp[(4) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 184 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (9)].v_string)), string((yyvsp[(4) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(GLOBAL), Type::STRING); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 185 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (8)].v_string)), string((yyvsp[(4) - (8)].v_string)), (yyvsp[(7) - (8)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 186 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (8)].v_string)), string((yyvsp[(4) - (8)].v_string)), (yyvsp[(7) - (8)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 187 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (8)].v_string)), string((yyvsp[(4) - (8)].v_string)), (yyvsp[(7) - (8)].ast), token(GLOBAL), Type::STRING); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 188 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (10)].v_string)), string((yyvsp[(5) - (10)].v_string)), (yyvsp[(9) - (10)].ast), token(LOCAL), Type::REAL); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 189 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (10)].v_string)), string((yyvsp[(5) - (10)].v_string)), (yyvsp[(9) - (10)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 190 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (10)].v_string)), string((yyvsp[(5) - (10)].v_string)), (yyvsp[(9) - (10)].ast), token(LOCAL), Type::STRING); }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 191 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (9)].v_string)), string((yyvsp[(5) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(LOCAL), Type::REAL); }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 192 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (9)].v_string)), string((yyvsp[(5) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 193 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (9)].v_string)), string((yyvsp[(5) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(LOCAL), Type::STRING); }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 196 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(2) - (9)].v_string)), (yyvsp[(4) - (9)].ast), (yyvsp[(6) - (9)].ast), (yyvsp[(8) - (9)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 197 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(2) - (9)].v_string)), (yyvsp[(4) - (9)].ast), (yyvsp[(6) - (9)].ast), (yyvsp[(8) - (9)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 198 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(2) - (8)].v_string)), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(7) - (8)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 199 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(2) - (8)].v_string)), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(7) - (8)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 200 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(2) - (11)].v_string)), (yyvsp[(4) - (11)].ast), (yyvsp[(6) - (11)].ast), (yyvsp[(8) - (11)].ast), (yyvsp[(10) - (11)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 201 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(2) - (11)].v_string)), (yyvsp[(4) - (11)].ast), (yyvsp[(6) - (11)].ast), (yyvsp[(8) - (11)].ast), (yyvsp[(10) - (11)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 202 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(2) - (10)].v_string)), (yyvsp[(4) - (10)].ast), (yyvsp[(6) - (10)].ast), (yyvsp[(8) - (10)].ast), (yyvsp[(9) - (10)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 203 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(2) - (10)].v_string)), (yyvsp[(4) - (10)].ast), (yyvsp[(6) - (10)].ast), (yyvsp[(8) - (10)].ast), (yyvsp[(9) - (10)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 204 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(3) - (10)].v_string)), (yyvsp[(5) - (10)].ast), (yyvsp[(7) - (10)].ast), (yyvsp[(9) - (10)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 205 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(3) - (10)].v_string)), (yyvsp[(5) - (10)].ast), (yyvsp[(7) - (10)].ast), (yyvsp[(9) - (10)].ast), token(LOCAL), Type::REAL); }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 206 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(3) - (9)].v_string)), (yyvsp[(5) - (9)].ast), (yyvsp[(7) - (9)].ast), (yyvsp[(8) - (9)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 207 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(3) - (9)].v_string)), (yyvsp[(5) - (9)].ast), (yyvsp[(7) - (9)].ast), (yyvsp[(8) - (9)].ast), token(LOCAL), Type::REAL); }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 208 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(3) - (12)].v_string)), (yyvsp[(5) - (12)].ast), (yyvsp[(7) - (12)].ast), (yyvsp[(9) - (12)].ast), (yyvsp[(11) - (12)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 209 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(3) - (12)].v_string)), (yyvsp[(5) - (12)].ast), (yyvsp[(7) - (12)].ast), (yyvsp[(9) - (12)].ast), (yyvsp[(11) - (12)].ast), token(LOCAL), Type::REAL); }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 210 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(3) - (11)].v_string)), (yyvsp[(5) - (11)].ast), (yyvsp[(7) - (11)].ast), (yyvsp[(9) - (11)].ast), (yyvsp[(10) - (11)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 211 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(3) - (11)].v_string)), (yyvsp[(5) - (11)].ast), (yyvsp[(7) - (11)].ast), (yyvsp[(9) - (11)].ast), (yyvsp[(10) - (11)].ast), token(LOCAL), Type::REAL); }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 213 "DARIC.y"
    { (yyval.ast) = token2(CASE, (yyvsp[(2) - (6)].ast), (yyvsp[(5) - (6)].ast));  }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 214 "DARIC.y"
    { (yyval.ast) = token3(CASE, (yyvsp[(2) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(7) - (9)].ast));  }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 216 "DARIC.y"
    { (yyval.ast) = token(PRINT); }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 217 "DARIC.y"
    { (yyval.ast) = token1(PRINT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 219 "DARIC.y"
    { (yyval.ast) = token(RENDERFRAME); }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 222 "DARIC.y"
    { (yyval.ast) = token6(CREATEVERTEX, string((yyvsp[(2) - (13)].v_string)), (yyvsp[(4) - (13)].ast), (yyvsp[(7) - (13)].ast), (yyvsp[(9) - (13)].ast), (yyvsp[(11) - (13)].ast), (yyvsp[(13) - (13)].ast)); }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 225 "DARIC.y"
    { (yyval.ast) = token6(CREATETRIANGLE, string((yyvsp[(2) - (13)].v_string)), (yyvsp[(4) - (13)].ast), (yyvsp[(7) - (13)].ast), (yyvsp[(9) - (13)].ast), (yyvsp[(11) - (13)].ast), (yyvsp[(13) - (13)].ast)); }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 226 "DARIC.y"
    { (yyval.ast) = token4(TRANSLATE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 227 "DARIC.y"
    { (yyval.ast) = token4(ROTATE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 228 "DARIC.y"
    { (yyval.ast) = token2(SCALE, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 229 "DARIC.y"
    { (yyval.ast) = token1(DELETEOBJECT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 231 "DARIC.y"
    { (yyval.ast) = token(CLS); }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 232 "DARIC.y"
    { (yyval.ast) = token1(COLOUR, (yyvsp[(2) - (2)].ast)); }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 233 "DARIC.y"
    { (yyval.ast) = token3(COLOUR, (yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 234 "DARIC.y"
    { (yyval.ast) = token1(COLOURBG, (yyvsp[(2) - (2)].ast)); }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 235 "DARIC.y"
    { (yyval.ast) = token3(COLOURBG, (yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 236 "DARIC.y"
    { (yyval.ast) = token2(GRAPHICS, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 237 "DARIC.y"
    { (yyval.ast) = token2(BANKED, (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast)); }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 238 "DARIC.y"
    { (yyval.ast) = token(GRAPHICS); }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 239 "DARIC.y"
    { (yyval.ast) = token(BANKED); }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 240 "DARIC.y"
    { (yyval.ast) = token(FLIP); }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 241 "DARIC.y"
    { (yyval.ast) = token3(CIRCLE, (yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 242 "DARIC.y"
    { (yyval.ast) = token3(CIRCLEFILL, (yyvsp[(3) - (7)].ast), (yyvsp[(5) - (7)].ast), (yyvsp[(7) - (7)].ast)); }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 243 "DARIC.y"
    { (yyval.ast) = token4(LINE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 244 "DARIC.y"
    { (yyval.ast) = token4(RECTANGLE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 245 "DARIC.y"
    { (yyval.ast) = token4(RECTANGLEFILL, (yyvsp[(3) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(7) - (9)].ast), (yyvsp[(9) - (9)].ast)); }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 246 "DARIC.y"
    { (yyval.ast) = token6(TRIANGLE, (yyvsp[(2) - (12)].ast), (yyvsp[(4) - (12)].ast), (yyvsp[(6) - (12)].ast), (yyvsp[(8) - (12)].ast), (yyvsp[(10) - (12)].ast), (yyvsp[(12) - (12)].ast)); }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 247 "DARIC.y"
    { (yyval.ast) = token6(TRIANGLEFILL, (yyvsp[(3) - (13)].ast), (yyvsp[(5) - (13)].ast), (yyvsp[(7) - (13)].ast), (yyvsp[(9) - (13)].ast), (yyvsp[(11) - (13)].ast), (yyvsp[(13) - (13)].ast)); }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 250 "DARIC.y"
    { (yyval.ast) = token9(TRIANGLESHADED, (yyvsp[(3) - (19)].ast), (yyvsp[(5) - (19)].ast), (yyvsp[(7) - (19)].ast), (yyvsp[(9) - (19)].ast), (yyvsp[(11) - (19)].ast), (yyvsp[(13) - (19)].ast), (yyvsp[(15) - (19)].ast), (yyvsp[(17) - (19)].ast), (yyvsp[(19) - (19)].ast)); }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 251 "DARIC.y"
    { (yyval.ast) = token2(PLOT, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 252 "DARIC.y"
    { (yyval.ast) = token4(CLIPON, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 253 "DARIC.y"
    { (yyval.ast) = token(CLIPOFF); }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 254 "DARIC.y"
    { (yyval.ast) = token4(TEXT, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 255 "DARIC.y"
    { (yyval.ast) = token4(TEXTRIGHT, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 256 "DARIC.y"
    { (yyval.ast) = token4(TEXTCENTRE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 257 "DARIC.y"
    { (yyval.ast) = token(SHOWFPS); }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 261 "DARIC.y"
    { (yyval.ast) = integer((yyvsp[(1) - (1)].v_int)); }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 262 "DARIC.y"
    { (yyval.ast) = integer(-(yyvsp[(2) - (2)].v_int)); }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 263 "DARIC.y"
    { (yyval.ast) = real((yyvsp[(1) - (1)].v_real)); }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 264 "DARIC.y"
    { (yyval.ast) = real(-(yyvsp[(2) - (2)].v_real)); }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 268 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 269 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 270 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 271 "DARIC.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 272 "DARIC.y"
    { (yyval.ast) = token1(FLOAT_, (yyvsp[(3) - (4)].ast)); }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 273 "DARIC.y"
    { (yyval.ast) = token1(INT_, (yyvsp[(3) - (4)].ast)); }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 274 "DARIC.y"
    { (yyval.ast) = token2(MINUS, integer(0), (yyvsp[(2) - (2)].ast)); }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 275 "DARIC.y"
    { (yyval.ast) = token2(MINUS, real(0.0), (yyvsp[(2) - (2)].ast)); }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 276 "DARIC.y"
    { (yyval.ast) = token2(PLUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 277 "DARIC.y"
    { (yyval.ast) = token2(MINUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 278 "DARIC.y"
    { (yyval.ast) = token2(MULTIPLY, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 279 "DARIC.y"
    { (yyval.ast) = token2(DIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 280 "DARIC.y"
    { (yyval.ast) = token2(INTEGERDIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 281 "DARIC.y"
    { (yyval.ast) = token2(DIV, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 282 "DARIC.y"
    { (yyval.ast) = token2(MOD, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 283 "DARIC.y"
    { (yyval.ast) = token2(SHL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 284 "DARIC.y"
    { (yyval.ast) = token2(SHR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 285 "DARIC.y"
    { (yyval.ast) = token2(E, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 286 "DARIC.y"
    { (yyval.ast) = token2(NE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 287 "DARIC.y"
    { (yyval.ast) = token2(GE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 288 "DARIC.y"
    { (yyval.ast) = token2(LE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 289 "DARIC.y"
    { (yyval.ast) = token2(LT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 290 "DARIC.y"
    { (yyval.ast) = token2(GT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 291 "DARIC.y"
    { (yyval.ast) = token2(AND, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 292 "DARIC.y"
    { (yyval.ast) = token2(OR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 293 "DARIC.y"
    { (yyval.ast) = token2(EOR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 295 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 296 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 298 "DARIC.y"
    { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[(3) - (8)].v_string), Type::REAL), (yyvsp[(7) - (8)].ast)); }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 299 "DARIC.y"
    { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[(3) - (8)].v_string), Type::INTEGER), (yyvsp[(7) - (8)].ast)); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 300 "DARIC.y"
    { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[(3) - (8)].v_string), Type::STRING), (yyvsp[(7) - (8)].ast)); }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 302 "DARIC.y"
    { (yyval.ast) = token1(PTR, (yyvsp[(2) - (2)].ast)); }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 304 "DARIC.y"
    { (yyval.ast) = token(GET); }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 305 "DARIC.y"
    { (yyval.ast) = token1(INKEY, (yyvsp[(3) - (4)].ast)); }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 307 "DARIC.y"
    { (yyval.ast) = integer(1); }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 308 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 309 "DARIC.y"
    { (yyval.ast) = token(TIME); }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 311 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 312 "DARIC.y"
    { (yyval.ast) = integer(1); }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 313 "DARIC.y"
    { (yyval.ast) = integer(2); }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 314 "DARIC.y"
    { (yyval.ast) = integer(3); }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 316 "DARIC.y"
    { (yyval.ast) = token2(CREATESHAPE, string((yyvsp[(2) - (4)].v_string)), string((yyvsp[(4) - (4)].v_string))); }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 321 "DARIC.y"
    { (yyval.ast) = token9(CREATEOBJECT, (yyvsp[(2) - (18)].ast), (yyvsp[(4) - (18)].ast), (yyvsp[(6) - (18)].ast), (yyvsp[(8) - (18)].ast), (yyvsp[(10) - (18)].ast), (yyvsp[(12) - (18)].ast), (yyvsp[(14) - (18)].ast), (yyvsp[(16) - (18)].ast), (yyvsp[(18) - (18)].ast)); }
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 323 "DARIC.y"
    { (yyval.ast) = integer(0xFF0000); }
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 324 "DARIC.y"
    { (yyval.ast) = integer(0x00FF00); }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 325 "DARIC.y"
    { (yyval.ast) = integer(0xFFFF00); }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 326 "DARIC.y"
    { (yyval.ast) = integer(0x0000FF); }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 327 "DARIC.y"
    { (yyval.ast) = integer(0xFF00FF); }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 328 "DARIC.y"
    { (yyval.ast) = integer(0x00FFFF); }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 329 "DARIC.y"
    { (yyval.ast) = integer(0xFFFFFF); }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 330 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 331 "DARIC.y"
    { (yyval.ast) = integer(-1); }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 332 "DARIC.y"
    { (yyval.ast) = token3(COLOUREXP, (yyvsp[(3) - (8)].ast), (yyvsp[(5) - (8)].ast), (yyvsp[(7) - (8)].ast)); }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 333 "DARIC.y"
    { (yyval.ast) = token2(POINT_, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 334 "DARIC.y"
    { (yyval.ast) = token(SCREENWIDTH); }
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 335 "DARIC.y"
    { (yyval.ast) = token(SCREENHEIGHT); }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 336 "DARIC.y"
    { (yyval.ast) = token1(LOADTYPEFACE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 337 "DARIC.y"
    { (yyval.ast) = token2(CREATEFONT, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 338 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 339 "DARIC.y"
    { (yyval.ast) = integer(1); }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 340 "DARIC.y"
    { (yyval.ast) = integer(2); }
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 341 "DARIC.y"
    { (yyval.ast) = integer(3); }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 342 "DARIC.y"
    { (yyval.ast) = integer(4); }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 343 "DARIC.y"
    { (yyval.ast) = integer(5); }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 344 "DARIC.y"
    { (yyval.ast) = integer(6); }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 345 "DARIC.y"
    { (yyval.ast) = integer(7); }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 346 "DARIC.y"
    { (yyval.ast) = integer(8); }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 347 "DARIC.y"
    { (yyval.ast) = integer(9); }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 348 "DARIC.y"
    { (yyval.ast) = integer(10); }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 349 "DARIC.y"
    { (yyval.ast) = integer(11); }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 350 "DARIC.y"
    { (yyval.ast) = integer(12); }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 351 "DARIC.y"
    { (yyval.ast) = integer(13); }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 352 "DARIC.y"
    { (yyval.ast) = integer(14); }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 353 "DARIC.y"
    { (yyval.ast) = integer(15); }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 354 "DARIC.y"
    { (yyval.ast) = integer(16); }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 355 "DARIC.y"
    { (yyval.ast) = integer(17); }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 356 "DARIC.y"
    { (yyval.ast) = integer(18); }
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 357 "DARIC.y"
    { (yyval.ast) = integer(19); }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 358 "DARIC.y"
    { (yyval.ast) = integer(20); }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 359 "DARIC.y"
    { (yyval.ast) = integer(21); }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 360 "DARIC.y"
    { (yyval.ast) = integer(22); }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 361 "DARIC.y"
    { (yyval.ast) = integer(23); }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 362 "DARIC.y"
    { (yyval.ast) = integer(24); }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 363 "DARIC.y"
    { (yyval.ast) = integer(25); }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 364 "DARIC.y"
    { (yyval.ast) = integer(26); }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 365 "DARIC.y"
    { (yyval.ast) = token1(EOFH, (yyvsp[(2) - (2)].ast)); }
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 366 "DARIC.y"
    { (yyval.ast) = token1(BGET, (yyvsp[(2) - (2)].ast)); }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 367 "DARIC.y"
    { (yyval.ast) = token1(OPENIN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 368 "DARIC.y"
    { (yyval.ast) = token1(OPENOUT, (yyvsp[(3) - (4)].ast)); }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 369 "DARIC.y"
    { (yyval.ast) = token1(OPENUP, (yyvsp[(3) - (4)].ast)); }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 371 "DARIC.y"
    { (yyval.ast) = token(RND); }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 372 "DARIC.y"
    { (yyval.ast) = token1(RNDREAL, integer(0)); }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 373 "DARIC.y"
    { (yyval.ast) = token1(RNDREAL, integer(1)); }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 374 "DARIC.y"
    { (yyval.ast) = token1(RNDRANGE, (yyvsp[(3) - (4)].ast)); }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 376 "DARIC.y"
    { (yyval.ast) = token(PI); }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 377 "DARIC.y"
    { (yyval.ast) = token1(NOT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 378 "DARIC.y"
    { (yyval.ast) = token1(SQR, (yyvsp[(3) - (4)].ast)); }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 379 "DARIC.y"
    { (yyval.ast) = token1(LN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 380 "DARIC.y"
    { (yyval.ast) = token1(LOG, (yyvsp[(3) - (4)].ast)); }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 381 "DARIC.y"
    { (yyval.ast) = token1(EXP, (yyvsp[(3) - (4)].ast)); }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 382 "DARIC.y"
    { (yyval.ast) = token1(ATN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 383 "DARIC.y"
    { (yyval.ast) = token1(TAN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 384 "DARIC.y"
    { (yyval.ast) = token1(COS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 385 "DARIC.y"
    { (yyval.ast) = token1(SIN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 386 "DARIC.y"
    { (yyval.ast) = token1(ABS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 387 "DARIC.y"
    { (yyval.ast) = token1(ACS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 388 "DARIC.y"
    { (yyval.ast) = token1(ASN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 389 "DARIC.y"
    { (yyval.ast) = token1(DEG, (yyvsp[(3) - (4)].ast)); }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 390 "DARIC.y"
    { (yyval.ast) = token1(RAD, (yyvsp[(3) - (4)].ast)); }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 391 "DARIC.y"
    { (yyval.ast) = token1(SGN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 393 "DARIC.y"
    { (yyval.ast) = token1(ASC, (yyvsp[(3) - (4)].ast)); }
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 394 "DARIC.y"
    { (yyval.ast) = token1(LEN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 395 "DARIC.y"
    { (yyval.ast) = token3(INSTR, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), integer(1)); }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 396 "DARIC.y"
    { (yyval.ast) = token3(INSTR, (yyvsp[(3) - (8)].ast), (yyvsp[(5) - (8)].ast), (yyvsp[(7) - (8)].ast)); }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 397 "DARIC.y"
    { (yyval.ast) = token1(VAL, (yyvsp[(3) - (4)].ast)); }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 401 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::INTEGER); }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 402 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::INTEGER_ARRAY); }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 403 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::INTEGER_ARRAY); }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 404 "DARIC.y"
    { (yyval.ast) = typevariable((yyvsp[(1) - (2)].v_string), (yyvsp[(2) - (2)].v_string), Type::TYPE); }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 405 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (5)].v_string), (yyvsp[(5) - (5)].v_string), (yyvsp[(3) - (5)].ast), Type::TYPE_ARRAY); }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 409 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::REAL); }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 410 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::REAL_ARRAY); }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 411 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::REAL_ARRAY); }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 412 "DARIC.y"
    { (yyval.ast) = typevariable((yyvsp[(1) - (2)].v_string), (yyvsp[(2) - (2)].v_string), Type::TYPE); }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 413 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (5)].v_string), (yyvsp[(5) - (5)].v_string), (yyvsp[(3) - (5)].ast), Type::TYPE_ARRAY); }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 417 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 418 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 422 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::STRING); }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 423 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::STRING_ARRAY); }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 424 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::STRING_ARRAY); }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 425 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (5)].v_string), (yyvsp[(5) - (5)].v_string), (yyvsp[(3) - (5)].ast), Type::TYPE_ARRAY); }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 429 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 430 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 434 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 435 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 439 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::INTEGER); }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 440 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::REAL); }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 441 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::STRING); }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 445 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 446 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 450 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::INTEGER_ARRAY); }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 451 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::INTEGER_ARRAY); }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 452 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::REAL_ARRAY); }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 453 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::REAL_ARRAY); }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 454 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::STRING_ARRAY); }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 455 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::STRING_ARRAY); }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 456 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (6)].v_string), (yyvsp[(5) - (6)].v_string), (yyvsp[(3) - (6)].ast), Type::TYPE_ARRAY); }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 460 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 461 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 465 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::TYPE); }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 466 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::TYPE_ARRAY); }
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 470 "DARIC.y"
    { (yyval.ast) = token2(TYPE_, string((yyvsp[(2) - (5)].v_string)), (yyvsp[(4) - (5)].ast)); }
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 474 "DARIC.y"
    { (yyval.ast) = token1(FIELD, (yyvsp[(2) - (2)].ast)); }
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 478 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (2)].ast); }
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 479 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 483 "DARIC.y"
    { (yyval.ast) = string((yyvsp[(1) - (1)].v_string)); }
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 487 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 488 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 489 "DARIC.y"
    { (yyval.ast) = token2(PLUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 490 "DARIC.y"
    { (yyval.ast) = token2(E, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 491 "DARIC.y"
    { (yyval.ast) = token2(NE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 492 "DARIC.y"
    { (yyval.ast) = token2(GE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 493 "DARIC.y"
    { (yyval.ast) = token2(LE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 494 "DARIC.y"
    { (yyval.ast) = token2(LT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 495 "DARIC.y"
    { (yyval.ast) = token2(GT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 497 "DARIC.y"
    { (yyval.ast) = token1(GETSH, (yyvsp[(2) - (2)].ast)); }
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 499 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 501 "DARIC.y"
    { (yyval.ast) = token(GETS); }
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 502 "DARIC.y"
    { (yyval.ast) = token1(INKEYS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 504 "DARIC.y"
    { (yyval.ast) = token(TIMES); }
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 505 "DARIC.y"
    { (yyval.ast) = token1(STRS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 506 "DARIC.y"
    { (yyval.ast) = token1(STRSHEX, (yyvsp[(4) - (5)].ast)); }
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 507 "DARIC.y"
    { (yyval.ast) = token2(STRINGS, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 508 "DARIC.y"
    { (yyval.ast) = token1(CHRS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 307:
/* Line 1792 of yacc.c  */
#line 509 "DARIC.y"
    { (yyval.ast) = token2(LEFTS, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 510 "DARIC.y"
    { (yyval.ast) = token3(MIDS, (yyvsp[(3) - (8)].ast), (yyvsp[(5) - (8)].ast), (yyvsp[(7) - (8)].ast)); }
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 511 "DARIC.y"
    { (yyval.ast) = token2(RIGHTS, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 515 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 516 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 520 "DARIC.y"
    { (yyval.ast) = NULL; }
    break;

  case 313:
/* Line 1792 of yacc.c  */
#line 521 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 314:
/* Line 1792 of yacc.c  */
#line 522 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 526 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 527 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 528 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 529 "DARIC.y"
    { (yyval.ast) = assignment(link((yyvsp[(1) - (4)].ast), (yyvsp[(2) - (4)].ast)), (yyvsp[(4) - (4)].ast)); }
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 533 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 534 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 538 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 539 "DARIC.y"
    { (yyval.ast) = token1(LOCAL, (yyvsp[(2) - (2)].ast)); }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 540 "DARIC.y"
    { (yyval.ast) = token1(GLOBAL, (yyvsp[(2) - (2)].ast)); }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 541 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(SHL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 542 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(SHR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 543 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(PLUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 544 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(MINUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 545 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(MULTIPLY, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 546 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(DIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 547 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(INTEGERDIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 331:
/* Line 1792 of yacc.c  */
#line 551 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 552 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 553 "DARIC.y"
    { (yyval.ast) = token(COMMA); }
    break;

  case 334:
/* Line 1792 of yacc.c  */
#line 554 "DARIC.y"
    { (yyval.ast) = token(TILDE); }
    break;

  case 335:
/* Line 1792 of yacc.c  */
#line 555 "DARIC.y"
    { (yyval.ast) = token(TICK); }
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 556 "DARIC.y"
    { (yyval.ast) = token1(SPC, (yyvsp[(3) - (4)].ast)); }
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 557 "DARIC.y"
    { (yyval.ast) = token(SEMICOLON); }
    break;

  case 338:
/* Line 1792 of yacc.c  */
#line 561 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 562 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 570 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 571 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 575 "DARIC.y"
    { (yyval.ast) = NULL; }
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 576 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 577 "DARIC.y"
    { (yyval.ast) = token1(RETURN_PARAMETER, (yyvsp[(2) - (2)].ast)); }
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 581 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 582 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 348:
/* Line 1792 of yacc.c  */
#line 586 "DARIC.y"
    { (yyval.ast) = NULL; }
    break;

  case 349:
/* Line 1792 of yacc.c  */
#line 587 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 350:
/* Line 1792 of yacc.c  */
#line 591 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 592 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 596 "DARIC.y"
    { (yyval.ast) = token2(WHEN, (yyvsp[(2) - (4)].ast), (yyvsp[(3) - (4)].ast)); }
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 600 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 354:
/* Line 1792 of yacc.c  */
#line 601 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 355:
/* Line 1792 of yacc.c  */
#line 604 "DARIC.y"
    { (yyval.ast) = token3typed(DEFPROC, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::NOTYPE); }
    break;

  case 356:
/* Line 1792 of yacc.c  */
#line 605 "DARIC.y"
    { (yyval.ast) = token3typed(DEFFN, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::INTEGER); }
    break;

  case 357:
/* Line 1792 of yacc.c  */
#line 606 "DARIC.y"
    { (yyval.ast) = token3typed(DEFFN, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::REAL); }
    break;

  case 358:
/* Line 1792 of yacc.c  */
#line 607 "DARIC.y"
    { (yyval.ast) = token3typed(DEFFN, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::STRING); }
    break;


/* Line 1792 of yacc.c  */
#line 6687 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 610 "DARIC.y"


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
    stream << "Parsing error: " << e << " at line " << yylineno << " of file '" << file << "'";
    error_list.push_back(stream.str());
    status = 0;
}