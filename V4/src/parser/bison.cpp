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
#include "ast.h"

AST *final = nullptr;
extern int yylex();
extern FILE *yyin;
extern int yyfileno;
extern int yylineno;
extern std::string file;
extern std::map<std::string, int> files_index;
std::map<int, std::list<AST *>> ast_lines;
void yyerror(const char *e);
int yylex_destroy(void);

/* Line 371 of yacc.c  */
#line 88 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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
     SCREENWIDTH = 459,
     SCREENHEIGHT = 460,
     SHOWFPS = 461,
     LASTPOS = 462,
     INKEY = 463,
     INKEYS = 464,
     INPUT_ = 465,
     PRINT = 466,
     SPC = 467,
     SINKEY = 468,
     SINKEYS = 469,
     INPUT_NOQUESTIONMARK = 470,
     GET = 471,
     GETS = 472,
     GET_S = 473,
     GETS_S = 474,
     MOUSE = 475,
     CREATEVERTEX = 476,
     CREATETRIANGLE = 477,
     CREATESHAPE = 478,
     CREATEOBJECT = 479,
     TRANSLATE = 480,
     ROTATE = 481,
     SCALE = 482,
     RENDERFRAME = 483,
     DELETEOBJECT = 484,
     SOLID = 485,
     WIREFRAME = 486,
     FILLEDWIREFRAME = 487,
     INTEGERDIVIDE = 488,
     NEG = 489
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 23 "DARIC.y"

    int v_int;
    double v_real;
    const char *v_string;
    struct AST *ast;


/* Line 387 of yacc.c  */
#line 373 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
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
#line 414 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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
#define YYFINAL  290
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10605

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  238
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  349
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1019

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   489

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     236,   237,     2,     2,   235,     2,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234
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
    1086,  1089,  1094,  1099,  1104,  1106,  1108,  1110,  1115,  1117,
    1120,  1125,  1130,  1135,  1140,  1145,  1150,  1155,  1160,  1165,
    1170,  1175,  1180,  1185,  1190,  1195,  1200,  1207,  1216,  1221,
    1223,  1228,  1235,  1238,  1244,  1246,  1251,  1258,  1261,  1267,
    1269,  1271,  1273,  1278,  1285,  1291,  1293,  1295,  1297,  1301,
    1303,  1305,  1307,  1309,  1313,  1318,  1325,  1330,  1337,  1342,
    1349,  1356,  1358,  1362,  1364,  1369,  1375,  1378,  1381,  1385,
    1387,  1389,  1391,  1395,  1399,  1403,  1407,  1411,  1415,  1419,
    1422,  1427,  1429,  1434,  1436,  1441,  1447,  1454,  1459,  1466,
    1475,  1482,  1484,  1486,  1487,  1489,  1493,  1497,  1501,  1505,
    1510,  1512,  1516,  1518,  1521,  1524,  1528,  1532,  1536,  1540,
    1544,  1548,  1552,  1554,  1556,  1558,  1560,  1562,  1567,  1569,
    1571,  1574,  1576,  1578,  1582,  1583,  1585,  1588,  1590,  1594,
    1595,  1597,  1599,  1603,  1608,  1610,  1613,  1621,  1629,  1637
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     239,     0,    -1,   240,    -1,   241,    -1,   241,   240,    -1,
     243,    19,    -1,    19,    -1,     3,   243,    19,    -1,   241,
      -1,   241,   242,    -1,   244,    -1,   244,    20,   243,    -1,
     267,    -1,   278,    -1,   258,    -1,   149,   262,    -1,   149,
     262,   235,   254,    -1,   150,   254,    -1,   101,    -1,    15,
      -1,    15,   236,   264,   237,    -1,    16,   236,   264,   237,
      -1,    17,   236,   264,   237,    -1,    18,   236,   264,   237,
      -1,    90,   264,    -1,    91,   252,    -1,    92,    -1,    51,
      -1,    51,   263,    -1,   102,    -1,   103,    -1,   104,    -1,
      94,   256,    -1,    99,    94,   256,    -1,    59,   246,   235,
     246,    -1,    58,   246,    -1,    65,   246,    24,   246,    -1,
      60,   246,    -1,     9,   236,   237,    24,    68,   236,   262,
     237,    -1,    99,     9,   236,   237,    24,    68,   236,   262,
     237,    -1,   142,   262,    -1,    75,     4,    -1,    76,     4,
      -1,   210,   271,    -1,   210,     6,   271,    -1,   210,     6,
     235,   271,    -1,   220,     7,   235,     7,   235,     7,    -1,
     208,   236,   246,   237,    -1,   209,   236,   246,   237,    -1,
     216,    -1,   217,    -1,    77,   263,   243,    -1,    77,   263,
     244,    70,   244,    -1,    77,   263,    19,   242,    72,    -1,
      77,   263,    19,   242,    70,    19,   242,    72,    -1,    77,
     263,    83,   243,    -1,    77,   263,    83,   243,    70,   243,
      -1,    77,   263,    83,    19,   242,    72,    -1,    77,   263,
      83,    19,   242,    70,    19,   242,    72,    -1,    81,    19,
     242,    85,   263,    -1,    81,    85,   263,    -1,    87,   263,
      19,   242,    73,    -1,    45,     7,   235,     7,    -1,    45,
       8,   235,     8,    -1,    45,     9,   235,     9,    -1,    74,
       8,    88,     8,   236,   237,    19,   242,    78,    -1,    74,
       7,    88,     7,   236,   237,    19,   242,    78,    -1,    74,
       9,    88,     9,   236,   237,    19,   242,    78,    -1,    74,
       8,    88,     8,   236,   237,   243,    78,    -1,    74,     7,
      88,     7,   236,   237,   243,    78,    -1,    74,     9,    88,
       9,   236,   237,   243,    78,    -1,    74,    99,     8,    88,
       8,   236,   237,    19,   242,    78,    -1,    74,    99,     7,
      88,     7,   236,   237,    19,   242,    78,    -1,    74,    99,
       9,    88,     9,   236,   237,    19,   242,    78,    -1,    74,
      99,     8,    88,     8,   236,   237,   243,    78,    -1,    74,
      99,     7,    88,     7,   236,   237,   243,    78,    -1,    74,
      99,     9,    88,     9,   236,   237,   243,    78,    -1,    74,
       7,    24,   246,    84,   246,    19,   242,    78,    -1,    74,
       8,    24,   246,    84,   246,    19,   242,    78,    -1,    74,
       7,    24,   246,    84,   246,   243,    78,    -1,    74,     8,
      24,   246,    84,   246,   243,    78,    -1,    74,     7,    24,
     246,    84,   246,    82,   246,    19,   242,    78,    -1,    74,
       8,    24,   246,    84,   246,    82,   246,    19,   242,    78,
      -1,    74,     7,    24,   246,    84,   246,    82,   246,   243,
      78,    -1,    74,     8,    24,   246,    84,   246,    82,   246,
     243,    78,    -1,    74,    99,     7,    24,   246,    84,   246,
      19,   242,    78,    -1,    74,    99,     8,    24,   246,    84,
     246,    19,   242,    78,    -1,    74,    99,     7,    24,   246,
      84,   246,   243,    78,    -1,    74,    99,     8,    24,   246,
      84,   246,   243,    78,    -1,    74,    99,     7,    24,   246,
      84,   246,    82,   246,    19,   242,    78,    -1,    74,    99,
       8,    24,   246,    84,   246,    82,   246,    19,   242,    78,
      -1,    74,    99,     7,    24,   246,    84,   246,    82,   246,
     243,    78,    -1,    74,    99,     8,    24,   246,    84,   246,
      82,   246,   243,    78,    -1,    69,   263,    79,    19,   277,
      71,    -1,    69,   263,    79,    19,   277,    80,   244,    19,
      71,    -1,   211,    -1,   211,   269,    -1,   228,    -1,   221,
      10,   236,   246,   237,   235,   246,   235,   246,   235,   246,
     235,   246,    -1,   222,    10,   236,   246,   237,   235,   246,
     235,   246,   235,   246,   235,   246,    -1,   225,   246,   235,
     246,   235,   246,   235,   246,    -1,   226,   246,   235,   246,
     235,   246,   235,   246,    -1,   227,   246,   235,   246,    -1,
     229,   246,    -1,   159,    -1,   161,   246,    -1,   161,   246,
     235,   246,   235,   246,    -1,   162,   246,    -1,   162,   246,
     235,   246,   235,   246,    -1,   165,   246,   235,   246,    -1,
     165,   166,   246,   235,   246,    -1,   165,    -1,   165,   166,
      -1,   164,    -1,   179,   246,   235,   246,   235,   246,    -1,
     179,   167,   246,   235,   246,   235,   246,    -1,   169,   246,
     235,   246,   235,   246,   235,   246,    -1,   172,   246,   235,
     246,   235,   246,   235,   246,    -1,   172,   167,   246,   235,
     246,   235,   246,   235,   246,    -1,   174,   246,   235,   246,
     235,   246,   235,   246,   235,   246,   235,   246,    -1,   174,
     167,   246,   235,   246,   235,   246,   235,   246,   235,   246,
     235,   246,    -1,   174,   168,   246,   235,   246,   235,   246,
     235,   246,   235,   246,   235,   246,   235,   246,   235,   246,
     235,   246,    -1,   170,   246,   235,   246,    -1,   177,   246,
     235,   246,   235,   246,   235,   246,    -1,   178,    -1,   181,
     246,   235,   246,   235,   246,   235,   262,    -1,   182,   246,
     235,   246,   235,   246,   235,   262,    -1,   183,   246,   235,
     246,   235,   246,   235,   262,    -1,   206,    -1,     4,    -1,
      33,     4,    -1,     5,    -1,    33,     5,    -1,   245,    -1,
     247,    -1,   248,    -1,   236,   246,   237,    -1,   110,   236,
     246,   237,    -1,   111,   236,   246,   237,    -1,    33,   247,
      -1,    33,   248,    -1,   246,    32,   246,    -1,   246,    33,
     246,    -1,   246,    34,   246,    -1,   246,    35,   246,    -1,
     246,    23,   246,    -1,   246,   113,   246,    -1,   246,   114,
     246,    -1,   246,    28,   246,    -1,   246,    29,   246,    -1,
     246,    24,   246,    -1,   246,    27,   246,    -1,   246,    26,
     246,    -1,   246,    25,   246,    -1,   246,    30,   246,    -1,
     246,    31,   246,    -1,   246,   145,   246,    -1,   246,   146,
     246,    -1,   246,   147,   246,    -1,    16,   236,   264,   237,
      -1,    17,   236,   264,   237,    -1,    94,   236,     8,   236,
     237,   235,   245,   237,    -1,    94,   236,     7,   236,   237,
     235,   245,   237,    -1,    94,   236,     9,   236,   237,   235,
     245,   237,    -1,    65,   246,    -1,   216,    -1,   208,   236,
     246,   237,    -1,   131,    -1,   130,    -1,   143,    -1,   230,
      -1,   231,    -1,   168,    -1,   232,    -1,   223,    10,   235,
      10,    -1,   224,   246,   235,   246,   235,   246,   235,   246,
     235,   246,   235,   246,   235,   246,   235,   246,   235,   246,
      -1,   151,    -1,   152,    -1,   153,    -1,   154,    -1,   155,
      -1,   156,    -1,   157,    -1,   158,    -1,   207,    -1,   161,
     236,   246,   235,   246,   235,   246,   237,    -1,   171,   236,
     246,   235,   246,   237,    -1,   204,    -1,   205,    -1,   184,
     262,    -1,   185,   246,   235,   246,    -1,   186,    -1,   187,
      -1,   188,    -1,   189,    -1,   190,    -1,   191,    -1,   192,
      -1,   193,    -1,   194,    -1,   195,    -1,   196,    -1,   197,
      -1,   198,    -1,   199,    -1,   200,    -1,   201,    -1,   202,
      -1,   203,    -1,    61,   246,    -1,    58,   246,    -1,    62,
     236,   262,   237,    -1,    64,   236,   262,   237,    -1,    63,
     236,   262,   237,    -1,   105,    -1,   106,    -1,   107,    -1,
     105,   236,   246,   237,    -1,   129,    -1,   148,   246,    -1,
     115,   236,   246,   237,    -1,   116,   236,   246,   237,    -1,
     117,   236,   246,   237,    -1,   118,   236,   246,   237,    -1,
     119,   236,   246,   237,    -1,   120,   236,   246,   237,    -1,
     121,   236,   246,   237,    -1,   122,   236,   246,   237,    -1,
     124,   236,   246,   237,    -1,   112,   236,   246,   237,    -1,
     123,   236,   246,   237,    -1,   125,   236,   246,   237,    -1,
     126,   236,   246,   237,    -1,   127,   236,   246,   237,    -1,
     132,   236,   262,   237,    -1,   138,   236,   262,   237,    -1,
     134,   236,   262,   235,   262,   237,    -1,   134,   236,   262,
     235,   262,   235,   246,   237,    -1,   128,   236,   262,   237,
      -1,     7,    -1,     7,   236,   246,   237,    -1,     7,   236,
     246,   235,   246,   237,    -1,    10,     7,    -1,    10,   236,
     246,   237,     7,    -1,     8,    -1,     8,   236,   246,   237,
      -1,     8,   236,   246,   235,   246,   237,    -1,    10,     8,
      -1,    10,   236,   246,   237,     8,    -1,   247,    -1,   248,
      -1,     9,    -1,     9,   236,   246,   237,    -1,     9,   236,
     246,   235,   246,   237,    -1,    10,   236,   246,   237,     9,
      -1,   249,    -1,   250,    -1,   251,    -1,   251,   235,   252,
      -1,     7,    -1,     8,    -1,     9,    -1,   253,    -1,   253,
     235,   254,    -1,     7,   236,   246,   237,    -1,     7,   236,
     246,   235,   246,   237,    -1,     8,   236,   246,   237,    -1,
       8,   236,   246,   235,   246,   237,    -1,     9,   236,   246,
     237,    -1,     9,   236,   246,   235,   246,   237,    -1,    10,
     236,   246,   235,     8,   237,    -1,   255,    -1,   255,   235,
     256,    -1,    10,    -1,    10,   236,   246,   237,    -1,   100,
       8,    19,   260,    96,    -1,    97,   251,    -1,   259,    19,
      -1,   259,    19,   260,    -1,     6,    -1,   261,    -1,   250,
      -1,   262,    32,   262,    -1,   262,    24,   262,    -1,   262,
      27,   262,    -1,   262,    26,   262,    -1,   262,    25,   262,
      -1,   262,    30,   262,    -1,   262,    31,   262,    -1,    67,
     246,    -1,    18,   236,   264,   237,    -1,   217,    -1,   209,
     236,   246,   237,    -1,   144,    -1,   139,   236,   246,   237,
      -1,   139,    36,   236,   246,   237,    -1,   141,   236,   246,
     235,   262,   237,    -1,   133,   236,   246,   237,    -1,   135,
     236,   262,   235,   246,   237,    -1,   136,   236,   262,   235,
     246,   235,   246,   237,    -1,   137,   236,   262,   235,   246,
     237,    -1,   246,    -1,   262,    -1,    -1,   263,    -1,   263,
     235,   264,    -1,   249,    24,   246,    -1,   250,    24,   262,
      -1,   257,    24,   263,    -1,   257,   251,    24,   263,    -1,
     265,    -1,   265,   235,   266,    -1,   266,    -1,    99,   266,
      -1,    98,   266,    -1,   249,    38,   246,    -1,   249,    39,
     246,    -1,   249,    40,   246,    -1,   249,    41,   246,    -1,
     249,    42,   246,    -1,   249,    43,   246,    -1,   249,    44,
     246,    -1,   262,    -1,   246,    -1,   235,    -1,    36,    -1,
      37,    -1,   212,   236,   246,   237,    -1,    21,    -1,   268,
      -1,   268,   269,    -1,   251,    -1,   270,    -1,   270,   235,
     271,    -1,    -1,   251,    -1,    51,   251,    -1,   272,    -1,
     272,   235,   273,    -1,    -1,   251,    -1,   274,    -1,   274,
     235,   275,    -1,    86,   264,   243,    19,    -1,   276,    -1,
     276,   277,    -1,    11,   236,   273,   237,    19,   242,    50,
      -1,    12,   236,   275,   237,    19,   242,    49,    -1,    14,
     236,   275,   237,    19,   242,    49,    -1,    13,   236,   275,
     237,    19,   242,    49,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    90,    90,    94,    95,    99,   100,   101,   104,   105,
     109,   110,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   134,   135,   137,   138,   139,   140,   141,   142,
     144,   146,   147,   149,   150,   151,   152,   154,   155,   156,
     157,   159,   160,   161,   162,   164,   165,   166,   167,   169,
     170,   171,   173,   174,   175,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   209,   210,   212,   213,   215,   216,   219,
     222,   223,   224,   225,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   247,   248,   249,   250,   251,   252,   253,   257,
     258,   259,   260,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   291,
     292,   294,   295,   296,   298,   300,   301,   303,   304,   305,
     307,   308,   309,   310,   312,   313,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   358,   359,   360,   361,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   380,   381,   382,   383,   384,   388,
     389,   390,   391,   392,   396,   397,   398,   399,   400,   404,
     405,   409,   410,   411,   412,   416,   417,   421,   422,   426,
     427,   428,   432,   433,   437,   438,   439,   440,   441,   442,
     443,   447,   448,   452,   453,   457,   461,   465,   466,   470,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   484,
     486,   488,   489,   491,   492,   493,   494,   495,   496,   497,
     498,   502,   503,   507,   508,   509,   513,   514,   515,   516,
     520,   521,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   538,   539,   540,   541,   542,   543,   544,   548,
     549,   553,   557,   558,   562,   563,   564,   568,   569,   573,
     574,   578,   579,   583,   587,   588,   591,   592,   593,   594
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
  "STRING_FUNCTION", "NL", "SS", "SEMICOLON", "COMMA", "INTEGER_DIVIDE",
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
  "PROP35", "PROP40", "PROP50", "PROP75", "PROP100", "SCREENWIDTH",
  "SCREENHEIGHT", "SHOWFPS", "LASTPOS", "INKEY", "INKEYS", "INPUT_",
  "PRINT", "SPC", "SINKEY", "SINKEYS", "INPUT_NOQUESTIONMARK", "GET",
  "GETS", "GET_S", "GETS_S", "MOUSE", "CREATEVERTEX", "CREATETRIANGLE",
  "CREATESHAPE", "CREATEOBJECT", "TRANSLATE", "ROTATE", "SCALE",
  "RENDERFRAME", "DELETEOBJECT", "SOLID", "WIREFRAME", "FILLEDWIREFRAME",
  "INTEGERDIVIDE", "NEG", "','", "'('", "')'", "$accept", "daric", "lines",
  "line", "embed_lines", "statements", "statement", "number",
  "expression_numeric", "variable_integer", "variable_real",
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
     485,   486,   487,   488,   489,    44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   238,   239,   240,   240,   241,   241,   241,   242,   242,
     243,   243,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   245,
     245,   245,   245,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   247,
     247,   247,   247,   247,   248,   248,   248,   248,   248,   249,
     249,   250,   250,   250,   250,   251,   251,   252,   252,   253,
     253,   253,   254,   254,   255,   255,   255,   255,   255,   255,
     255,   256,   256,   257,   257,   258,   259,   260,   260,   261,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   263,   263,   264,   264,   264,   265,   265,   265,   265,
     266,   266,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   268,   268,   268,   268,   268,   268,   268,   269,
     269,   270,   271,   271,   272,   272,   272,   273,   273,   274,
     274,   275,   275,   276,   277,   277,   278,   278,   278,   278
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

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   239,   244,   251,   273,     0,     0,     0,     0,
      19,     0,     0,     0,     6,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   303,     0,
      26,     0,     0,     0,     0,    18,    29,    30,    31,     0,
       0,     0,   104,     0,     0,   113,   111,     0,     0,     0,
       0,     0,   124,     0,     0,     0,     0,   128,     0,     0,
       0,    95,    49,    50,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     2,     3,     0,    10,   249,   250,     0,
       0,     0,    14,   310,   312,    12,    13,     0,     0,     0,
       0,   242,   247,     0,   334,   339,   339,   339,   303,   303,
     303,   303,     0,     0,     0,   129,   131,   279,   251,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   214,   215,   216,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,   168,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   169,   293,     0,   176,   177,   178,
     179,   180,   181,   182,   183,     0,   172,     0,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   187,   188,
     184,     0,     0,   165,   291,     0,     0,   170,   171,   173,
       0,   133,   301,   134,   135,   281,   280,   302,    28,     0,
      35,     0,    37,     0,     0,     0,     0,     0,     0,    41,
      42,     0,     0,     0,     0,   304,    24,   255,   256,   257,
      25,     0,     0,     0,     0,   271,    32,     0,   314,   251,
       0,   313,     0,     0,    40,    15,   259,   260,   261,   262,
      17,   105,   107,   112,     0,     0,     0,     0,     0,     0,
     172,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   331,   332,    43,   328,   325,   326,     0,   324,   323,
     322,   329,    96,     0,     0,     0,     0,     0,     0,   103,
       1,     4,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,   335,   337,     0,   340,   341,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     303,   303,   303,   130,   132,   139,   140,   210,   209,     0,
       0,     0,   164,   289,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,     0,   189,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,    10,     8,     0,    60,     0,   303,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,     0,   330,     0,     0,     0,     0,     0,
       0,    11,   306,   315,   316,   317,   318,   319,   320,   321,
     307,   308,     0,   311,     0,   240,     0,   245,     0,     0,
     252,   274,   336,   334,     0,   339,     0,     0,     0,    20,
      21,    22,    23,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   136,   145,   150,   153,   152,   151,   148,   149,   154,
     155,   141,   142,   143,   144,   146,   147,   156,   157,   158,
     283,   286,   285,   284,   287,   288,   282,     0,    34,   150,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     9,     0,     0,   305,   258,
       0,     0,     0,     0,   272,     0,     0,     0,     0,     0,
      16,   263,     0,     0,     0,   109,     0,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
      48,    45,   333,     0,     0,     0,     0,     0,     0,   102,
     309,     0,     0,     0,     0,   243,   248,   254,   338,     0,
     342,     0,     0,     0,     0,   159,   160,   290,   211,   213,
     212,     0,     0,     0,   217,   137,   138,   229,   220,   221,
     222,   223,   224,   225,   226,   227,   230,   228,   231,   232,
     233,   238,   234,   297,     0,     0,     0,     0,   235,     0,
     294,     0,     0,     0,   190,   166,   292,   174,     0,     0,
     303,   344,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,    52,    59,    61,
       0,   264,     0,   266,     0,   268,     0,     0,   276,   277,
     275,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   327,     0,     0,
       0,     0,     0,   241,   246,     0,   253,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   295,     0,
       0,     0,     0,     0,   345,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
      56,     0,     0,     0,     0,     0,   278,   106,   108,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
       0,    46,     0,     0,     0,     0,     0,   346,   347,   349,
     348,     0,     0,     0,     0,   236,   298,     0,   300,   296,
       0,   186,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,   267,   269,   270,     0,     0,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,   343,     0,     0,     0,    79,     0,    69,
       0,     0,    80,     0,    68,     0,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,   116,     0,   117,     0,     0,     0,   123,   125,
     126,   127,     0,     0,   100,   101,   162,   161,   163,   237,
     299,   185,     0,    94,    77,     0,     0,    66,    78,     0,
       0,    65,    67,     0,     0,    87,     0,    75,     0,     0,
      88,     0,    74,     0,    76,    58,    39,   118,     0,     0,
       0,     0,     0,     0,     0,    83,     0,    84,    85,     0,
       0,    72,    86,     0,     0,    71,    73,     0,     0,     0,
       0,     0,     0,    81,    82,     0,    91,     0,    92,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,   119,
       0,     0,     0,   120,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   175,   121
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    72,    73,   424,   425,    75,    76,   201,   202,   203,
     204,    79,    80,   271,   230,   249,   250,   235,   236,    81,
      82,   607,   608,   206,   207,   225,   226,    83,    84,    85,
     281,   282,   272,   273,   314,   315,   317,   318,   701,   702,
      86
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -381
static const yytype_int16 yypact[] =
{
    3749,  7144,  -222,  -216,  -178,    -1,  -154,  -144,  -140,  -118,
    -115,  -112,   -96,   -89,  -381,    54,  2469,  3519,  3519,  3519,
    3519,  2469,    58,    20,   154,  2469,    16,  2469,  2469,   265,
    -381,   342,   378,    38,   160,  -381,  -381,  -381,  -381,   613,
     613,   173,  -381,  3519,  3519,  -381,  2699,  3519,  3519,  2904,
    3109,  3519,  -381,  3314,  3519,  3519,  3519,  -381,   -63,   -50,
     223,  2236,  -381,  -381,   184,   190,   191,  3519,  3519,  3519,
    -381,  3519,   205,  -381,  3749,   174,   192,  -381,  -381,   121,
     187,   168,  -381,   -19,  -381,  -381,  -381,   202,  3519,  3519,
    1797,  -381,  -381,  3519,   120,   265,   265,   265,  2469,  2469,
    2469,  2469,     3,     9,    23,  -381,  -381,  -381,    -2,     1,
      26,    27,    40,   162,  3519,  3519,    50,    51,    59,  3519,
    3519,    60,    64,  -381,  -381,    65,    71,    78,    87,    88,
     117,   128,   129,   153,   158,   166,   181,   186,   196,   200,
     208,   212,  -381,  -381,  -381,   222,   232,   234,   237,   238,
     239,   243,    21,   252,  -381,  -381,  3519,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,   254,  -381,   255,   613,  3519,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,
    -381,   257,   258,  -381,  -381,   279,  3519,  -381,  -381,  -381,
    3519,  -381, 10445,  -381,  -381,  -381,  -381,   602,  -381,    14,
   10445,  7692, 10445, 10458,   236,   -14,    29,   268,   392,  -381,
    -381,  5712,  3749,  2469,   341,   155,  -381,  -381,  -381,   161,
    -381,   261,   262,   263,   264,   169,  -381,   395,  -381,   266,
     342,  -381,   414,   269,   602,   124,  -381,  -381,  -381,   224,
    -381,  7705,  7735,  3519,  7797,  7832,  7860,  3519,  7873,  3519,
    3519,  7889,  7924,  3519,  7965,  8016,  8029,  8057,  3519,  3519,
      33,  -381,   230,  -381,  -381,  -381,  -381,   270,  -381, 10445,
     602,  2236,  -381,   274,   280,   281,  8121,  8156,  8182, 10445,
    -381,  -381,  -381,  7144,  3519,  3519,  3519,  3519,  3519,  3519,
    3519,  3519,   613,  2469,   454,   378,  -381,    81,   617,   477,
    1014,   631,   265,  -381,   283,   282,  -381,   285,   284,   289,
     290,   291,   294,   297,   301,   496,   531,   534,  3519,  3519,
    2469,  2469,  2469,  -381,  -381,  -381,  -381, 10445, 10445,   613,
     613,   613, 10445, 10445,   399,  3519,  3519,  3519,  3519,  3519,
    3519,  3519,  3519,  3519,  3519,  3519,  3519,  3519,  3519,  3519,
    3519,  3519,   613,   613,  3519,   613,   613,   613,   613,   613,
     304,  3519,  3519,   522,  3519,  3519,   602,  8195,  3519,  3519,
     319,  8248,  1493,  3519,  3519,  3519,  3519,  3519,  3519,  3519,
    3519,  3519,  3519,  3519,  3519,  3519,  3519,  3519,  3519,  3519,
    3519,   613,   613,   613,   613,   613,   613,   613,  3519,  3519,
    3519,   537,  3519,   556,  3519,   557,   555,    31,    32,   479,
    3749,  5891,  -381,    61,  3749,   483,  -381,  3749,  2469,   265,
    3519,  3519,  3519,  3519,   342,  2002,  -381,   473,  3519,   173,
     173,  3519,  3519,  8287,  3519,  3519,  3519,  8340,  3519,  8353,
    8379,  3519,  3519,  8414,  3519,  3519,  3519,  3519,  1548,  1602,
     265,  -381,   265,  3519,  -381,   565,  3519,  3519,  3519,  3519,
    3519,  -381, 10445, 10445, 10445, 10445, 10445, 10445, 10445, 10445,
     602,  -381,  2469,  -381,  3519,  -381,  3519,  -381,   505,  3519,
    -381,   403,  -381,   120,   562,   265,   563,   568,   570,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,  1619,   337,   338,   353,
     111,   172,   183,   355,   356,   357,  1727,  3755,  3911,  4134,
    4357,  4580,  4803,  5026,  5249,  5472,  5633,  5798,  5812,  5977,
    5991,  6156,  6170,   193,   229,  6335,   553,   647,   666,  1036,
     267,  3519,  6349,  8478,  8506,  8519,  3519,  6514,  6528,   584,
    3519,  -381, 10445,   448,   448,   448,   448,   522,   522,   448,
     448,   507,   507,   242,   242,   242,   242,  1473,  2024,  2024,
     564,   564,   564,   564,   564,   564,  -381,  6693, 10445,   919,
     509,  1792,   362,  2694,   363,   369,  3519,   601,  3519,   603,
     604,    74,  3749,   540,  7144,  -381,  2469,   539,  -381,  -381,
    1067,  1258,  1310,  8570,  -381,   590,   265,   596,   520,  6707,
    -381,  -381,  8611,  8646,  3519, 10445,  8662, 10445,  3519,  8675,
    3519,  3519,  8703,  8738,  3519,  8800,  8830,  8843,  8892,  -381,
    -381,  -381,  -381,  6872,   383,  6886,  7051,  8935,  8984, 10445,
    -381,  7065,  7229,   388,  7243,  -381,  -381,  -381,  -381,  3749,
    -381,  3749,  3749,  3749,   403,  -381,  -381,  -381,  -381,  -381,
    -381,   393,   398,   400,  -381,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,   613,  3519,  3519,  3519,  -381,  7305,
    -381,   613,  3519,  3519, 10445,  -381,  -381,  -381,  8997,    79,
    2469,   509,   -11,  3519,   401,  3519,   416,   444, 10383,   389,
   10418,   446,   447,   668,  -381,   197,  7144,  -381,  -381,  -381,
    3519,  -381,  3519,  -381,  3519,  -381,   628,   621,  -381,   473,
    -381,   685,  3519,  3519, 10445,  3519,  9027,  3519,  9089,  9124,
    3519,  3519,  9152,  3519,  3519,  3519,  3519,  -381,   688,   465,
     466,  3519,  3519,  -381,  -381,   613,  -381,   652,   655,   657,
     659,   474,   475,   476,    53,  7368,  9165,  7381,  -381,   278,
    9181,  7398,  3519,  7144,  -381,  -381,  7144,  3972,  6070,  4195,
    6249,  6428,  3519,   480,  3519,   482,   484,  3749,   693,  -381,
    -381,  7411,  7474,  7536,   485,   478,  -381, 10445, 10445,  9216,
    3519,  9257,  3519,  3519,  9308,  9321,  3519, 10445,  9349,  9413,
    9448,  -381,  3519,  3519,  9474,  9487,   295,  -381,  -381,  -381,
    -381,    90,    90,    90,  3519,  -381,  -381,  3519,  -381,  -381,
    3519,  -381,  9540,   694,   706,  3749,  3519,   654,  3749,   658,
    3749,  3519,   660,  3749,   661,  3749,   663,  4418,  6607,  4641,
    6786,  6965,   665,  3749,  -381,  -381,  -381,  -381,   613,  3519,
    9579,  3519,  9632,  9645,  3519,  3519, 10445,   613,   613,   613,
    9671,  9706,  3519,  3519,  -381,    95,   506,   510,   514,  7549,
    7599,  7642,  3519,  -381,   671,   675,  4864,  -381,   680,  -381,
     681,  5087,  -381,   682,  -381,   683,  -381,  3749,  3519,   691,
    3749,   692,  3749,  3519,   695,  3749,   701,  3749,   702,  -381,
     699,   430, 10445,  3519, 10445,  3519,  3519,  9770, 10445,   602,
     602,   602,  3519,  3519, 10445, 10445,  -381,  -381,  -381,  -381,
    -381,  -381,  9798,  -381,  -381,  3749,   703,  -381,  -381,  3749,
     704,  -381,  -381,   709,  5310,  -381,   712,  -381,   713,  5533,
    -381,   714,  -381,   715,  -381,  -381,  -381, 10445,  9811,  9862,
    3519,  9903,  9938,  3519,   716,  -381,   720,  -381,  -381,  3749,
     721,  -381,  -381,  3749,   722,  -381,  -381,  3519,  3519,  9954,
    3519,  3519,  9967,  -381,  -381,   728,  -381,   730,  -381,  9995,
   10030,  3519, 10092, 10122,  3519,  -381,  -381,  3519,  3519, 10445,
    3519,  3519, 10135, 10445, 10184, 10445, 10445,  3519,  3519, 10227,
   10276,  3519,  3519, 10289, 10319,  3519,  3519, 10445, 10445
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -381,  -381,   698,    19,   182,    24,  -210,  -380,   -17,   463,
     837,    93,  1108,    -6,   380,  -381,  -306,  -381,  -212,  -381,
    -381,  -381,    37,  -381,   145,    43,   -83,  -381,   -20,  -381,
    -381,   503,  -381,  -221,  -381,   318,  -381,   -92,  -381,   113,
    -381
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -37
static const yytype_int16 yytable[] =
{
     210,   211,   212,   213,   319,   320,    91,    92,    91,    92,
     412,   423,   238,   241,    88,   321,   322,   323,   324,    74,
      89,    91,    92,   229,   219,    87,   251,   252,   436,   254,
     255,   256,   258,   261,   262,   222,   264,   265,   266,   267,
       2,     3,   108,   109,   279,     2,     3,   239,     5,   461,
     286,   287,   288,   414,   289,   586,   588,   370,    90,   208,
     775,   102,   103,   104,   214,   215,   216,   217,   221,   776,
     224,   307,   308,   310,   413,   304,   311,   401,   402,   403,
     404,   293,    94,   405,   406,   407,   645,   646,   313,   316,
     316,   316,    95,    74,   105,   106,    96,   337,   338,   333,
     334,   223,   342,   343,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   415,    97,   587,
     589,    98,   227,   875,    99,   237,   237,     2,     3,   108,
     109,   594,   240,   610,   611,   401,   402,   403,   404,   373,
     100,   405,   406,   407,   713,   294,   714,   101,   401,   402,
     403,   404,   377,   227,   405,   406,   407,   218,   220,   295,
     296,   297,   298,   299,   300,   301,   333,   334,   242,     2,
       3,   312,   209,   268,   227,     2,     3,   108,   109,   381,
     246,   247,   248,   382,   244,   245,   269,   227,   227,   227,
     227,   283,   303,   292,   396,   397,   401,   402,   403,   404,
     284,   285,   405,   406,   407,   290,   280,   401,   402,   403,
     404,   302,   293,   405,   406,   407,   305,   401,   402,   403,
     404,   306,   604,   405,   406,   407,   398,   399,   400,   270,
       2,     3,   108,   109,   328,    93,   443,   329,   325,   631,
     447,   632,   449,   450,   326,   422,   453,   507,   508,   509,
     408,   458,   459,   401,   402,   403,   404,   371,   327,   405,
     406,   407,   330,   331,   279,   383,   426,   788,   460,   789,
     388,   389,     2,     3,   108,   109,   332,   472,   473,   474,
     475,   476,   477,   478,   479,   483,   339,   340,   824,   380,
     825,   401,   402,   403,   404,   341,   344,   405,   406,   407,
     345,   346,   401,   402,   403,   404,   492,   347,   405,   406,
     407,   310,   506,   376,   348,   411,   484,   471,   485,   401,
     402,   403,   404,   349,   350,   405,   406,   407,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   598,   481,   535,   658,   231,
     232,   233,   234,   351,   542,   543,   416,   544,   545,   439,
     427,   547,   548,   227,   352,   353,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   717,     2,     3,   108,     5,   354,
     428,   577,   578,   579,   355,   581,   429,   583,   237,   417,
     418,   419,   356,   650,   434,   227,   513,   514,   515,   659,
     645,   646,   647,   600,   601,   602,   603,   357,   310,   294,
     660,   609,   358,   229,   612,   613,   280,   615,   616,   617,
     681,   619,   359,   437,   622,   623,   360,   625,   626,   627,
     628,   876,   877,   878,   361,   593,   633,   480,   362,   635,
     636,   637,   638,   639,   401,   402,   403,   404,   363,   440,
     405,   406,   407,    77,    77,   462,   682,   641,   364,   642,
     365,   383,   644,   366,   367,   368,   388,   389,   482,   369,
     392,   393,   394,   395,   510,   511,   512,   313,   372,   316,
     374,   375,    77,   378,   379,    77,    77,   430,   431,   432,
     433,   488,   435,   503,   688,   438,   463,   533,   534,   465,
     536,   537,   538,   539,   540,   829,   466,   467,   493,   494,
     495,   496,   227,    77,   689,   640,   497,   498,   499,   694,
     383,   500,   874,   698,   501,   388,   389,    77,   502,   504,
     541,   394,   395,   505,    77,   383,   570,   571,   572,   573,
     574,   575,   576,   227,   549,   227,   580,    77,    77,    77,
      77,   396,   397,   582,   585,   584,   834,   590,   596,   708,
     606,   710,   634,   643,   655,   656,   335,   401,   402,   403,
     404,   649,   651,   405,   406,   407,   227,   652,   227,   653,
     657,   661,   662,   663,   697,   700,   407,   734,   704,   706,
     728,   736,   591,   738,   739,   707,   595,   742,   709,   597,
     716,   711,   719,   712,   727,   729,   730,   773,   748,   107,
     396,   397,   108,   243,   755,   783,   401,   402,   403,   404,
     761,   112,   405,   406,   407,   762,   794,   763,   778,   718,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   780,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   956,   765,   766,
     767,   401,   402,   403,   404,   770,   771,   405,   406,   407,
     120,   781,   785,   786,    77,    77,   777,   787,   779,   795,
     401,   402,   403,   404,   647,   811,   405,   406,   407,   227,
     812,   813,   817,   791,   818,   792,   819,   793,   820,   821,
     822,   823,   853,   883,   858,   797,   798,   848,   799,   850,
     801,   851,   857,   804,   805,   884,   807,   808,   809,   810,
     396,   397,   887,    77,   814,   815,   889,   909,   892,   894,
     790,   896,   933,   926,   396,   397,   146,   927,   148,   149,
     150,   928,   152,   934,   153,   832,    77,   155,   937,   938,
     941,   942,   398,   399,   400,   847,   796,   849,    77,   945,
     947,   955,   291,   950,   715,    77,   398,   399,   400,   952,
     954,   965,   967,   860,   464,   862,   863,   968,   684,   866,
     971,   972,   975,   976,   983,   870,   871,   833,   984,   986,
     988,   837,   839,   842,   844,   846,   995,   879,   996,   599,
     880,   648,     0,   881,   774,     0,     0,     0,     0,   886,
       0,     0,   192,     0,   891,     0,     0,     0,     0,   764,
     194,   757,     0,   758,   759,   760,   769,    78,    78,     0,
       0,     0,   912,     0,   914,     0,     0,   917,   918,     0,
       0,     0,   486,     0,   487,   924,   925,     0,     0,     0,
       0,     0,     0,     0,     0,   932,    78,     0,   491,    78,
      78,   899,   901,   904,   906,   908,     0,     0,     0,     0,
       0,   944,   685,    77,    77,     0,   949,    77,     0,     0,
      77,     0,    77,     0,     0,     0,   957,    78,   958,   959,
     816,   686,     0,     0,     0,   961,   962,     0,     0,     0,
     936,    78,     0,     0,     0,   940,     0,     0,    78,     0,
       0,     0,     0,    77,     0,    77,     0,     0,     0,     0,
       0,    78,    78,    78,    78,     0,     0,     0,   -36,   -36,
       0,     0,   383,   979,     0,     0,   982,   388,   389,     0,
     336,   392,   393,   394,   395,     0,    77,     0,    77,     0,
     989,   990,     0,   992,   993,     0,     0,     0,   970,   852,
       0,     0,     0,   974,   999,     0,     0,  1002,     0,     0,
    1003,  1004,     0,  1005,  1006,     0,     0,     0,     0,   -36,
    1009,  1010,     0,     0,  1013,  1014,     0,   -36,  1017,  1018,
       0,     0,     0,   911,     0,     0,     0,     0,     0,     0,
       0,     0,   919,   920,   921,     0,     0,   885,     0,     0,
     888,     0,   890,     0,     0,   893,     0,   895,     0,     0,
       0,     0,   396,   397,     0,   910,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,     0,     0,    77,     0,    77,    78,    78,
     401,   402,   403,   404,     0,     0,   405,   406,   407,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   943,
       0,     0,   946,     0,   948,     0,     0,   951,     0,   953,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,     0,    78,     0,     0,
       0,     0,    77,     0,    77,    77,    77,   964,     0,     0,
       0,   966,     0,     0,   205,     0,     0,   396,   397,   205,
      78,     0,     0,   205,     0,   205,   205,   228,     0,     0,
       0,     0,    78,     0,     0,     0,     0,   205,   205,    78,
       0,   985,     0,     0,     0,   987,     0,     0,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,   228,   205,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
     396,   397,     0,     0,     0,     0,     0,     0,     0,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   228,   228,   228,   228,   205,   205,   205,   205,
       0,     0,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,    77,
      77,    77,    77,    77,    77,     0,     0,     0,     0,   489,
      77,   490,     0,     0,     0,     0,     0,    78,    78,     0,
       0,    78,     0,     0,    78,     0,    78,     0,     0,     0,
       0,   687,     0,     0,     0,     0,   205,     0,     0,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,    78,    77,    78,
       0,    77,   720,    77,   721,     0,    77,     0,    77,     0,
      77,    77,    77,    77,    77,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,   205,    78,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,    77,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
      77,     0,     0,    77,     0,    77,     0,     0,    77,     0,
      77,   396,   397,     0,     0,     0,     0,     0,   228,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   205,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,    77,   398,   399,   400,     0,    77,     0,     0,
     205,   205,    77,     0,     0,     0,     0,     0,     0,     0,
     228,     0,     0,   396,   397,     0,     0,     0,     0,    78,
       0,    78,    77,     0,     0,     0,    77,     0,   205,   205,
     205,     0,     0,    78,     0,     0,     0,   205,   205,   205,
       0,     0,     0,     0,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     205,   205,     0,   205,   205,   205,   205,   205,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,    78,    78,
      78,     0,     0,   722,     0,   723,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   205,
     205,   205,   205,   205,   205,   205,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,     0,   205,   228,     0,     0,
       0,     0,     0,     0,     0,   724,     0,   725,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   228,     0,
     228,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,   396,   397,     0,     0,
     205,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   228,     0,   228,     0,     0,   396,   397,     0,     0,
      78,     0,     0,    78,    78,    78,    78,    78,    78,     0,
       0,     0,     0,     0,    78,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   398,   399,
     400,     0,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,     0,     0,
       0,   396,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,    78,     0,    78,     0,     0,
      78,     0,    78,     0,    78,    78,    78,    78,    78,     0,
      78,     0,     0,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,   205,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   228,   396,   397,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,    78,     0,
     551,     0,   396,   397,    78,     0,     0,    78,     0,    78,
       0,     0,    78,     0,    78,     0,     0,   398,   399,   400,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,   398,   399,   400,     0,     0,     0,
       0,     0,    78,     0,     0,     0,    78,     0,     0,     0,
       0,    78,     0,     0,     0,   629,    78,     0,     0,     0,
       0,     0,   205,     0,     0,     0,     0,     0,     0,   205,
       0,   105,   106,     0,     2,     3,    78,   209,   205,     0,
      78,     0,     0,   110,   111,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,   630,
     396,   397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   654,     0,   115,   116,
     117,   118,   119,   205,     0,     0,     0,     0,     0,     0,
       0,     0,   398,   399,   400,     0,   703,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,   123,   124,   396,   397,   125,   126,   127,
       0,     0,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
       0,   147,     0,     0,     0,   151,     0,   398,   399,   400,
     154,     0,     0,     0,     0,   156,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,     0,     0,   165,     0,
       0,     0,     0,     0,   664,   166,   205,     0,   167,     0,
       0,     0,     0,     0,     0,   205,   205,   205,     0,     0,
       0,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,     0,   190,   191,   105,   106,     0,     2,
       3,     0,   209,   193,     0,     0,     0,     0,   110,   111,
     195,   196,     0,     0,     0,     0,     0,   197,   198,   199,
       0,     0,     0,   200,   309,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     114,     0,     0,   115,   116,   117,   118,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   123,   124,
       0,     0,   125,   126,   127,     0,     0,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,     0,   147,   396,   397,     0,
     151,     0,     0,     0,     0,   154,     0,     0,     0,     0,
     156,     0,     0,   157,   158,   159,   160,   161,   162,   163,
     164,     0,     0,   165,     0,     0,     0,     0,     0,   398,
     166,     0,     0,   167,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,     0,   190,
     191,     0,     0,     0,     0,     0,     0,     0,   193,     0,
       0,     0,     0,     0,     0,   195,   196,     0,     0,     0,
       0,     0,   197,   198,   199,     0,     0,     0,   200,   605,
     105,   106,   107,     2,     3,   108,   109,     0,     0,     0,
       0,     0,   110,   111,   112,     0,     0,   274,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,   275,   276,     0,     0,     0,     0,     0,     0,
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
     188,   189,     0,   190,   191,   192,     0,     0,   277,     0,
       0,     0,   193,   194,     0,     0,     0,     0,     0,   195,
     196,     0,     0,     0,     0,     0,   197,   198,   199,     0,
       0,   278,   200,   105,   106,   107,     2,     3,   108,   109,
       0,     0,     0,     0,     0,   110,   111,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
     115,   116,   117,   118,   119,     0,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,     0,     0,   125,
     126,   127,     0,     0,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,     0,
     153,     0,   154,   155,     0,     0,     0,   156,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,     0,     0,
     165,     0,     0,     0,     0,     0,     0,   166,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,     0,   190,   191,   192,     0,
       0,     0,     0,     0,     0,   193,   194,     0,     0,     0,
       0,     0,   195,   196,     0,     0,     0,     0,     0,   197,
     198,   199,     0,   105,   106,   200,     2,     3,     0,   209,
       0,     0,     0,     0,     0,   110,   111,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   705,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,   396,   397,   125,
     126,   127,     0,     0,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,     0,   147,     0,     0,     0,   151,     0,   398,
     399,   400,   154,     0,     0,     0,     0,   156,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,     0,     0,
     165,     0,     0,     0,     0,   253,     0,   166,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,     0,   190,   191,   105,   106,
       0,     2,     3,     0,   209,   193,     0,     0,     0,     0,
     110,   111,   195,   196,     0,     0,     0,     0,     0,   197,
     198,   199,     0,     0,     0,   200,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,   257,   166,     0,     0,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
       0,   190,   191,   105,   106,     0,     2,     3,     0,   209,
     193,     0,     0,     0,     0,   110,   111,   195,   196,     0,
       0,     0,     0,     0,   197,   198,   199,     0,     0,     0,
     200,     0,   113,     0,     0,     0,     0,     0,     0,     0,
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
     165,     0,     0,     0,     0,     0,   259,   260,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,     0,   190,   191,   105,   106,
       0,     2,     3,     0,   209,   193,     0,     0,     0,     0,
     110,   111,   195,   196,     0,     0,     0,     0,     0,   197,
     198,   199,     0,     0,     0,   200,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,   263,   166,     0,     0,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
       0,   190,   191,   105,   106,     0,     2,     3,     0,   209,
     193,     0,     0,     0,     0,   110,   111,   195,   196,     0,
       0,     0,     0,     0,   197,   198,   199,     0,     0,     0,
     200,     0,   113,     0,     0,     0,     0,     0,     0,     0,
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
     165,     0,     0,     0,     0,     0,     0,   166,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,     0,   190,   191,     0,     0,
       0,     0,     0,     0,     0,   193,     0,     0,     0,     0,
       0,     0,   195,   196,     0,     0,     0,     0,     0,   197,
     198,   199,     1,     0,     0,   200,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,     0,     0,     0,     0,     0,     0,    17,    18,    19,
       0,     0,     0,     0,    20,     0,     0,     0,    21,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,     0,
      26,     0,     0,     0,     0,     0,    27,     0,     0,    28,
      29,    30,     0,    31,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,     0,     0,     0,    40,    41,
     398,   399,   400,     0,     0,     0,     0,     0,    42,     0,
      43,    44,     0,    45,    46,     0,     0,     0,    47,    48,
       0,    49,     0,    50,     0,     0,    51,    52,    53,     0,
      54,    55,    56,     0,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
      61,     0,     0,     0,     0,    62,    63,     0,     0,    64,
      65,    66,     0,     0,    67,    68,    69,    70,    71,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   835,   665,     0,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     0,     0,
       0,     0,     0,    16,   396,   397,     0,     0,     0,     0,
      17,    18,    19,     0,     0,     0,     0,    20,     0,     0,
       0,    21,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,    26,   836,     0,   398,   399,   400,    27,
       0,     0,    28,    29,    30,     0,    31,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,   398,   399,   400,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,    44,     0,    45,    46,     0,     0,
       0,    47,    48,     0,    49,     0,    50,     0,   666,    51,
      52,    53,     0,    54,    55,    56,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,    61,     0,     0,     0,     0,    62,    63,
       0,     0,    64,    65,    66,     0,     0,    67,    68,    69,
      70,    71,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   840,     0,     0,     0,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,     0,     0,     0,     0,     0,    16,   396,   397,     0,
       0,     0,     0,    17,    18,    19,     0,     0,     0,     0,
      20,     0,     0,     0,    21,     0,     0,     0,     0,    22,
      23,    24,    25,     0,     0,     0,    26,   841,     0,   398,
     399,   400,    27,     0,     0,    28,    29,    30,     0,    31,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,     0,     0,
     398,   399,   400,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,    44,     0,    45,
      46,     0,     0,     0,    47,    48,     0,    49,     0,    50,
       0,   667,    51,    52,    53,     0,    54,    55,    56,     0,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,    61,     0,     0,     0,
       0,    62,    63,     0,     0,    64,    65,    66,     0,     0,
      67,    68,    69,    70,    71,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   897,     0,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,     0,     0,     0,     0,     0,    16,
     396,   397,     0,     0,     0,     0,    17,    18,    19,     0,
       0,     0,     0,    20,     0,     0,     0,    21,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,    26,
     898,     0,   398,   399,   400,    27,     0,     0,    28,    29,
      30,     0,    31,     0,     0,     0,    32,    33,    34,    35,
      36,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,   396,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,   398,   399,   400,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
      44,     0,    45,    46,     0,     0,     0,    47,    48,     0,
      49,     0,    50,     0,   668,    51,    52,    53,     0,    54,
      55,    56,     0,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,    61,
       0,     0,     0,     0,    62,    63,     0,     0,    64,    65,
      66,     0,     0,    67,    68,    69,    70,    71,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     902,     0,     0,     0,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,     0,     0,
       0,     0,    16,   396,   397,     0,     0,     0,     0,    17,
      18,    19,     0,     0,     0,     0,    20,     0,     0,     0,
      21,     0,     0,     0,     0,    22,    23,    24,    25,     0,
       0,     0,    26,   903,     0,   398,   399,   400,    27,     0,
       0,    28,    29,    30,     0,    31,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,   396,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,   398,   399,   400,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,     0,    45,    46,     0,     0,     0,
      47,    48,     0,    49,     0,    50,     0,   669,    51,    52,
      53,     0,    54,    55,    56,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,    61,     0,     0,     0,     0,    62,    63,     0,
       0,    64,    65,    66,     0,     0,    67,    68,    69,    70,
      71,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   935,     0,     0,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,   396,   397,     0,     0,
       0,     0,    17,    18,    19,     0,     0,     0,     0,    20,
       0,     0,     0,    21,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,    26,     0,     0,   398,   399,
     400,    27,     0,     0,    28,    29,    30,     0,    31,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,     0,
       0,     0,     0,     0,     0,     0,     0,   396,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,     0,   398,
     399,   400,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,    44,     0,    45,    46,
       0,     0,     0,    47,    48,     0,    49,     0,    50,     0,
     670,    51,    52,    53,     0,    54,    55,    56,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,    61,     0,     0,     0,     0,
      62,    63,     0,     0,    64,    65,    66,     0,     0,    67,
      68,    69,    70,    71,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   939,     0,     0,     0,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,    16,   396,
     397,     0,     0,     0,     0,    17,    18,    19,     0,     0,
       0,     0,    20,     0,     0,     0,    21,     0,     0,     0,
       0,    22,    23,    24,    25,     0,     0,     0,    26,     0,
       0,   398,   399,   400,    27,     0,     0,    28,    29,    30,
       0,    31,     0,     0,     0,    32,    33,    34,    35,    36,
      37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,   398,   399,   400,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,    44,
       0,    45,    46,     0,     0,     0,    47,    48,     0,    49,
       0,    50,     0,   671,    51,    52,    53,     0,    54,    55,
      56,     0,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,    61,     0,
       0,     0,     0,    62,    63,     0,     0,    64,    65,    66,
       0,     0,    67,    68,    69,    70,    71,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   969,
       0,     0,     0,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,    16,   396,   397,     0,     0,     0,     0,    17,    18,
      19,     0,     0,     0,     0,    20,     0,     0,     0,    21,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,    26,     0,     0,   398,   399,   400,    27,     0,     0,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,   396,   397,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,   398,   399,   400,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,     0,    45,    46,     0,     0,     0,    47,
      48,     0,    49,     0,    50,     0,   672,    51,    52,    53,
       0,    54,    55,    56,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,    58,    59,
      60,    61,     0,     0,     0,     0,    62,    63,     0,     0,
      64,    65,    66,     0,     0,    67,    68,    69,    70,    71,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   973,     0,     0,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,     0,
       0,     0,     0,     0,    16,   396,   397,     0,     0,     0,
       0,    17,    18,    19,     0,     0,     0,     0,    20,     0,
       0,     0,    21,     0,     0,     0,     0,    22,    23,    24,
      25,     0,     0,     0,    26,     0,     0,   398,   399,   400,
      27,     0,     0,    28,    29,    30,     0,    31,     0,     0,
       0,    32,    33,    34,    35,    36,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,   396,   397,     0,     0,
       0,     0,     0,     0,     0,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,    39,     0,     0,   398,   399,
     400,     0,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,     0,    45,    46,     0,
       0,     0,    47,    48,     0,    49,     0,    50,     0,   673,
      51,    52,    53,     0,    54,    55,    56,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   420,     0,     0,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    60,    61,     0,   396,   397,     0,    62,
      63,     0,     0,    64,    65,    66,     0,    15,    67,    68,
      69,    70,    71,    16,     0,     0,     0,     0,     0,     0,
      17,    18,    19,     0,     0,     0,     0,    20,   398,   399,
     400,    21,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,    26,     0,   421,     0,     0,     0,    27,
       0,     0,    28,    29,    30,     0,    31,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    38,     0,     0,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
     674,    42,     0,    43,    44,     0,    45,    46,     0,     0,
       0,    47,    48,     0,    49,     0,    50,     0,     0,    51,
      52,    53,     0,    54,    55,    56,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     592,   396,   397,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,    61,     0,   396,   397,     0,    62,    63,
       0,     0,    64,    65,    66,     0,    15,    67,    68,    69,
      70,    71,    16,   398,   399,   400,     0,     0,     0,    17,
      18,    19,     0,     0,     0,     0,    20,   398,   399,   400,
      21,     0,     0,     0,     0,    22,    23,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,    28,    29,    30,     0,    31,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,     0,
       0,     0,     0,    39,     0,   675,     0,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,   676,
      42,     0,    43,    44,     0,    45,    46,     0,     0,     0,
      47,    48,     0,    49,     0,    50,     0,     0,    51,    52,
      53,     0,    54,    55,    56,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   838,
     396,   397,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,    61,     0,   396,   397,     0,    62,    63,     0,
       0,    64,    65,    66,     0,    15,    67,    68,    69,    70,
      71,    16,   398,   399,   400,     0,     0,     0,    17,    18,
      19,     0,     0,     0,     0,    20,   398,   399,   400,    21,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,    26,     0,     0,     0,     0,     0,    27,     0,     0,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,     0,     0,     0,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,    39,     0,   677,     0,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,   678,    42,
       0,    43,    44,     0,    45,    46,     0,     0,     0,    47,
      48,     0,    49,     0,    50,     0,     0,    51,    52,    53,
       0,    54,    55,    56,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   843,   396,
     397,     0,     0,     0,     0,     0,    57,     0,    58,    59,
      60,    61,     0,   396,   397,     0,    62,    63,     0,     0,
      64,    65,    66,     0,    15,    67,    68,    69,    70,    71,
      16,   398,   399,   400,     0,     0,     0,    17,    18,    19,
       0,     0,     0,     0,    20,   398,   399,   400,    21,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,     0,
      26,     0,     0,     0,     0,     0,    27,     0,     0,    28,
      29,    30,     0,    31,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,     0,     0,     0,     0,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,     0,     0,
       0,    39,     0,   679,     0,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,   680,    42,     0,
      43,    44,     0,    45,    46,     0,     0,     0,    47,    48,
       0,    49,     0,    50,     0,     0,    51,    52,    53,     0,
      54,    55,    56,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   845,   396,   397,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
      61,     0,   396,   397,     0,    62,    63,     0,     0,    64,
      65,    66,     0,    15,    67,    68,    69,    70,    71,    16,
     398,   399,   400,     0,     0,     0,    17,    18,    19,     0,
       0,     0,     0,    20,   398,   399,   400,    21,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,    26,
       0,     0,     0,     0,     0,    27,     0,     0,    28,    29,
      30,     0,    31,     0,     0,     0,    32,    33,    34,    35,
      36,    37,    38,     0,     0,     0,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,     0,     0,     0,
      39,     0,   683,     0,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,   690,    42,     0,    43,
      44,     0,    45,    46,     0,     0,     0,    47,    48,     0,
      49,     0,    50,     0,     0,    51,    52,    53,     0,    54,
      55,    56,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   900,   396,   397,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,    61,
       0,   396,   397,     0,    62,    63,     0,     0,    64,    65,
      66,     0,    15,    67,    68,    69,    70,    71,    16,   398,
     399,   400,     0,     0,     0,    17,    18,    19,     0,     0,
       0,     0,    20,   398,   399,   400,    21,     0,     0,     0,
       0,    22,    23,    24,    25,     0,     0,     0,    26,     0,
       0,     0,     0,     0,    27,     0,     0,    28,    29,    30,
       0,    31,     0,     0,     0,    32,    33,    34,    35,    36,
      37,    38,     0,     0,     0,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,     0,     0,     0,    39,
       0,   695,     0,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,   696,    42,     0,    43,    44,
       0,    45,    46,     0,     0,     0,    47,    48,     0,    49,
       0,    50,     0,     0,    51,    52,    53,     0,    54,    55,
      56,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   905,   396,   397,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,    61,     0,
     396,   397,     0,    62,    63,     0,     0,    64,    65,    66,
       0,    15,    67,    68,    69,    70,    71,    16,   398,   399,
     400,     0,     0,     0,    17,    18,    19,     0,     0,     0,
       0,    20,   398,   399,   400,    21,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,     0,    26,     0,     0,
       0,     0,     0,    27,     0,     0,    28,    29,    30,     0,
      31,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,     0,     0,     0,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,     0,     0,     0,     0,     0,    39,     0,
     699,     0,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,   731,    42,     0,    43,    44,     0,
      45,    46,     0,     0,     0,    47,    48,     0,    49,     0,
      50,     0,     0,    51,    52,    53,     0,    54,    55,    56,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   907,   396,   397,     0,     0,     0,
       0,     0,    57,     0,    58,    59,    60,    61,     0,   396,
     397,     0,    62,    63,     0,     0,    64,    65,    66,     0,
      15,    67,    68,    69,    70,    71,    16,   398,   399,   400,
       0,     0,     0,    17,    18,    19,     0,     0,     0,     0,
      20,   398,   399,   400,    21,     0,     0,     0,     0,    22,
      23,    24,    25,     0,     0,     0,    26,     0,     0,     0,
       0,     0,    27,     0,     0,    28,    29,    30,     0,    31,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
       0,     0,     0,     0,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,     0,     0,     0,     0,    39,     0,   747,
       0,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,   749,    42,     0,    43,    44,     0,    45,
      46,     0,     0,     0,    47,    48,     0,    49,     0,    50,
       0,     0,    51,    52,    53,     0,    54,    55,    56,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,   396,   397,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,    61,     0,   396,   397,
       0,    62,    63,     0,     0,    64,    65,    66,     0,    15,
      67,    68,    69,    70,    71,    16,   398,   399,   400,     0,
       0,     0,    17,    18,    19,     0,     0,     0,     0,    20,
     398,   399,   400,    21,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,    26,     0,     0,     0,     0,
       0,    27,     0,     0,    28,    29,    30,     0,    31,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,     0,
       0,     0,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,     0,    39,     0,   750,     0,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,   753,    42,     0,    43,    44,     0,    45,    46,
       0,     0,     0,    47,    48,     0,    49,     0,    50,     0,
       0,    51,    52,    53,     0,    54,    55,    56,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,   396,   397,     0,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,    61,   396,   397,     0,     0,
      62,    63,     0,     0,    64,    65,    66,     0,     0,    67,
      68,    69,    70,    71,   398,   399,   400,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,   399,
     400,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,   396,   397,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   754,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     756,   396,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   396,   397,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,   396,   397,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,   396,   397,   398,   399,   400,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   768,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,   399,   400,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,   396,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   826,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   828,   398,
     399,   400,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   831,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   854,   396,
     397,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   396,   397,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,   399,   400,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   855,   396,   397,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,     0,   398,   399,   400,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   397,     0,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,   856,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   929,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,   930,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
     398,   399,   400,     0,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   931,
     398,   399,   400,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,   409,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     441,     0,   398,   399,   400,   396,   397,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     442,     0,     0,   396,   397,     0,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,   396,   397,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,   396,   397,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,   399,
     400,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   444,     0,   398,   399,   400,   396,   397,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,   445,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   448,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   451,     0,     0,     0,     0,   396,
     397,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   396,   397,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,   452,
       0,   398,   399,   400,     0,     0,     0,     0,     0,     0,
     396,   397,     0,     0,   398,   399,   400,     0,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,     0,     0,     0,     0,     0,     0,     0,
     454,     0,   398,   399,   400,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,     0,   396,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   455,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   456,     0,   398,   399,   400,   396,
     397,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,     0,     0,     0,
       0,     0,   457,     0,     0,   396,   397,     0,     0,     0,
       0,   398,   399,   400,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   468,     0,     0,     0,
       0,   396,   397,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,   469,     0,   398,   399,   400,     0,     0,     0,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,   470,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     546,     0,   398,   399,   400,     0,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,   396,   397,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   396,   397,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   550,     0,   398,   399,   400,     0,     0,
       0,     0,   396,   397,     0,     0,     0,     0,   398,   399,
     400,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,     0,     0,     0,
       0,     0,   614,     0,   398,   399,   400,   396,   397,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   618,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   620,     0,
       0,   396,   397,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,     0,     0,   621,     0,     0,     0,     0,   396,
     397,     0,     0,   398,   399,   400,     0,     0,     0,     0,
       0,     0,   396,   397,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,   624,
       0,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,   399,   400,     0,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,   396,   397,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,   691,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,   396,   397,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,   692,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   693,     0,   398,   399,   400,   396,
     397,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,   396,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
       0,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   726,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,   396,   397,     0,     0,
     398,   399,   400,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   732,     0,   398,   399,
     400,   396,   397,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,   733,     0,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   735,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     737,     0,     0,   396,   397,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   740,     0,
       0,     0,     0,   396,   397,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,   396,   397,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,   741,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,   399,
     400,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   397,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,   743,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,   744,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   745,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   396,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,   746,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   397,   398,   399,   400,     0,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     751,     0,   398,   399,   400,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,   396,   397,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,   752,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   772,     0,   398,   399,   400,   396,   397,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   800,     0,     0,   396,   397,     0,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,   396,   397,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   802,     0,   398,   399,   400,   396,
     397,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,   803,
       0,   398,   399,   400,     0,     0,     0,     0,     0,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,   806,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     827,     0,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   830,     0,     0,     0,
       0,   396,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   396,   397,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,   859,     0,   398,   399,   400,     0,     0,     0,     0,
       0,     0,   396,   397,     0,     0,   398,   399,   400,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,     0,     0,     0,
       0,     0,   861,     0,   398,   399,   400,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,   396,   397,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   864,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   865,     0,   398,   399,
     400,   396,   397,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,     0,     0,   867,     0,     0,   396,   397,     0,
       0,     0,     0,   398,   399,   400,     0,     0,     0,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   868,     0,
       0,     0,     0,   396,   397,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,   869,     0,   398,   399,   400,     0,     0,
       0,     0,   396,   397,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,   872,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   873,     0,   398,   399,   400,     0,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,     0,     0,   396,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   882,     0,   398,   399,   400,
       0,     0,     0,     0,   396,   397,     0,     0,     0,     0,
     398,   399,   400,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,     0,     0,   913,     0,   398,   399,   400,   396,
     397,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,     0,
       0,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   915,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     916,     0,     0,   396,   397,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,     0,     0,   922,     0,     0,     0,
       0,   396,   397,     0,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,   396,   397,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,   923,     0,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,   399,   400,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,   396,   397,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,   960,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,   396,   397,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,   963,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   977,     0,   398,   399,
     400,   396,   397,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,   396,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   397,     0,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   978,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,   396,   397,
       0,     0,   398,   399,   400,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   980,     0,
     398,   399,   400,   396,   397,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,   981,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   991,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   994,     0,     0,   396,   397,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     997,     0,     0,     0,     0,   396,   397,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,   998,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   396,   397,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,  1000,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,  1001,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1007,     0,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   396,
     397,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   396,   397,     0,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,  1008,
       0,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,   396,   397,   398,   399,   400,     0,     0,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,     0,     0,     0,
       0,     0,  1011,     0,   398,   399,   400,   782,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   383,   410,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,   396,   397,     0,     0,
       0,     0,   784,     0,     0,     0,     0,     0,     0,     0,
       0,  1012,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1015,     0,     0,     0,   398,   399,
     400,   396,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1016,     0,     0,     0,   396,   397,
       0,     0,     0,   398,   399,   400,     0,     0,     0,     0,
       0,   396,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   398,   399,   400
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-381)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      17,    18,    19,    20,    96,    97,     7,     8,     7,     8,
      24,   221,    32,    33,   236,    98,    99,   100,   101,     0,
     236,     7,     8,    29,     4,     1,    43,    44,   240,    46,
      47,    48,    49,    50,    51,    19,    53,    54,    55,    56,
       7,     8,     9,    10,    61,     7,     8,     9,    10,   270,
      67,    68,    69,    24,    71,    24,    24,    36,   236,    16,
      71,     7,     8,     9,    21,     7,     8,     9,    25,    80,
      27,    88,    89,    90,    88,    81,    93,    24,    25,    26,
      27,    20,   236,    30,    31,    32,     7,     8,    94,    95,
      96,    97,   236,    74,     4,     5,   236,   114,   115,     4,
       5,    85,   119,   120,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    88,   236,    88,
      88,   236,    29,    33,   236,    32,    33,     7,     8,     9,
      10,    70,    94,   439,   440,    24,    25,    26,    27,   156,
     236,    30,    31,    32,    70,    24,    72,   236,    24,    25,
      26,    27,   169,    60,    30,    31,    32,    99,     4,    38,
      39,    40,    41,    42,    43,    44,     4,     5,     8,     7,
       8,    51,    10,   236,    81,     7,     8,     9,    10,   196,
       7,     8,     9,   200,    39,    40,   236,    94,    95,    96,
      97,     7,    24,    19,   113,   114,    24,    25,    26,    27,
      10,    10,    30,    31,    32,     0,    61,    24,    25,    26,
      27,    24,    20,    30,    31,    32,   235,    24,    25,    26,
      27,    19,   434,    30,    31,    32,   145,   146,   147,     6,
       7,     8,     9,    10,   236,   236,   253,   236,   235,   460,
     257,   462,   259,   260,   235,   221,   263,   330,   331,   332,
     236,   268,   269,    24,    25,    26,    27,   236,   235,    30,
      31,    32,   236,   236,   281,    23,   223,    70,   235,    72,
      28,    29,     7,     8,     9,    10,   236,   294,   295,   296,
     297,   298,   299,   300,   301,   305,   236,   236,   235,    10,
     237,    24,    25,    26,    27,   236,   236,    30,    31,    32,
     236,   236,    24,    25,    26,    27,   312,   236,    30,    31,
      32,   328,   329,   168,   236,    79,   235,   293,   237,    24,
      25,    26,    27,   236,   236,    30,    31,    32,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   428,   303,   364,   237,     7,
       8,     9,    10,   236,   371,   372,    88,   374,   375,   235,
      19,   378,   379,   270,   236,   236,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   594,     7,     8,     9,    10,   236,
     235,   408,   409,   410,   236,   412,   235,   414,   305,     7,
       8,     9,   236,   495,   235,   312,     7,     8,     9,   237,
       7,     8,     9,   430,   431,   432,   433,   236,   435,    24,
     237,   438,   236,   429,   441,   442,   281,   444,   445,   446,
     237,   448,   236,    19,   451,   452,   236,   454,   455,   456,
     457,   821,   822,   823,   236,   421,   463,   302,   236,   466,
     467,   468,   469,   470,    24,    25,    26,    27,   236,   235,
      30,    31,    32,     0,     1,   235,   237,   484,   236,   486,
     236,    23,   489,   236,   236,   236,    28,    29,    24,   236,
      32,    33,    34,    35,   339,   340,   341,   493,   236,   495,
     236,   236,    29,   236,   236,    32,    33,   236,   236,   236,
     236,    24,   236,     7,   237,   236,   236,   362,   363,   235,
     365,   366,   367,   368,   369,   237,   236,   236,   235,   237,
     235,   237,   429,    60,   541,   482,   237,   237,   237,   546,
      23,   237,   237,   550,   237,    28,    29,    74,   237,     8,
     236,    34,    35,     9,    81,    23,   401,   402,   403,   404,
     405,   406,   407,   460,   235,   462,    19,    94,    95,    96,
      97,   113,   114,     7,     9,     8,   776,    88,    85,   586,
      97,   588,     7,    68,   237,   237,   113,    24,    25,    26,
      27,    19,    19,    30,    31,    32,   493,    19,   495,    19,
     237,   236,   236,   236,    10,    86,    32,   614,   236,   236,
     606,   618,   420,   620,   621,   236,   424,   624,     7,   427,
      70,     8,    73,     9,    24,    19,    96,   700,   235,     6,
     113,   114,     9,    10,   236,   236,    24,    25,    26,    27,
     237,    18,    30,    31,    32,   237,     8,   237,   237,   596,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   237,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   237,   685,   686,
     687,    24,    25,    26,    27,   692,   693,    30,    31,    32,
      67,   237,   236,   236,   221,   222,   703,    19,   705,    68,
      24,    25,    26,    27,     9,     7,    30,    31,    32,   606,
     235,   235,    50,   720,    49,   722,    49,   724,    49,   235,
     235,   235,    19,    19,   236,   732,   733,   237,   735,   237,
     737,   237,   237,   740,   741,    19,   743,   744,   745,   746,
     113,   114,    78,   270,   751,   752,    78,    72,    78,    78,
     716,    78,    71,   237,   113,   114,   133,   237,   135,   136,
     137,   237,   139,    78,   141,   772,   293,   144,    78,    78,
      78,    78,   145,   146,   147,   782,   729,   784,   305,    78,
      78,    72,    74,    78,   592,   312,   145,   146,   147,    78,
      78,    78,    78,   800,   281,   802,   803,    78,   235,   806,
      78,    78,    78,    78,    78,   812,   813,   773,    78,    78,
      78,   777,   778,   779,   780,   781,    78,   824,    78,   429,
     827,   493,    -1,   830,   701,    -1,    -1,    -1,    -1,   836,
      -1,    -1,   209,    -1,   841,    -1,    -1,    -1,    -1,   684,
     217,   649,    -1,   651,   652,   653,   691,     0,     1,    -1,
      -1,    -1,   859,    -1,   861,    -1,    -1,   864,   865,    -1,
      -1,    -1,   235,    -1,   237,   872,   873,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   882,    29,    -1,   237,    32,
      33,   847,   848,   849,   850,   851,    -1,    -1,    -1,    -1,
      -1,   898,   235,   420,   421,    -1,   903,   424,    -1,    -1,
     427,    -1,   429,    -1,    -1,    -1,   913,    60,   915,   916,
     755,   235,    -1,    -1,    -1,   922,   923,    -1,    -1,    -1,
     886,    74,    -1,    -1,    -1,   891,    -1,    -1,    81,    -1,
      -1,    -1,    -1,   460,    -1,   462,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    -1,    -1,    -1,    19,    20,
      -1,    -1,    23,   960,    -1,    -1,   963,    28,    29,    -1,
     113,    32,    33,    34,    35,    -1,   493,    -1,   495,    -1,
     977,   978,    -1,   980,   981,    -1,    -1,    -1,   944,   787,
      -1,    -1,    -1,   949,   991,    -1,    -1,   994,    -1,    -1,
     997,   998,    -1,  1000,  1001,    -1,    -1,    -1,    -1,    70,
    1007,  1008,    -1,    -1,  1011,  1012,    -1,    78,  1015,  1016,
      -1,    -1,    -1,   858,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   867,   868,   869,    -1,    -1,   835,    -1,    -1,
     838,    -1,   840,    -1,    -1,   843,    -1,   845,    -1,    -1,
      -1,    -1,   113,   114,    -1,   853,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,   592,    -1,   594,   221,   222,
      24,    25,    26,    27,    -1,    -1,    30,    31,    32,   606,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   897,
      -1,    -1,   900,    -1,   902,    -1,    -1,   905,    -1,   907,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,   270,    -1,    -1,
      -1,    -1,   649,    -1,   651,   652,   653,   935,    -1,    -1,
      -1,   939,    -1,    -1,    16,    -1,    -1,   113,   114,    21,
     293,    -1,    -1,    25,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    39,    40,   312,
      -1,   969,    -1,    -1,    -1,   973,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   716,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   773,    -1,    -1,   776,
     777,   778,   779,   780,   781,    -1,    -1,    -1,    -1,   235,
     787,   237,    -1,    -1,    -1,    -1,    -1,   420,   421,    -1,
      -1,   424,    -1,    -1,   427,    -1,   429,    -1,    -1,    -1,
      -1,   235,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,   460,   835,   462,
      -1,   838,   235,   840,   237,    -1,   843,    -1,   845,    -1,
     847,   848,   849,   850,   851,    -1,   853,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     493,   223,   495,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,   886,
      -1,    -1,    -1,    -1,   891,    -1,    -1,    -1,    -1,    -1,
     897,    -1,    -1,   900,    -1,   902,    -1,    -1,   905,    -1,
     907,   113,   114,    -1,    -1,    -1,    -1,    -1,   270,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   935,    -1,
      -1,    -1,   939,   145,   146,   147,    -1,   944,    -1,    -1,
     302,   303,   949,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     312,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,   592,
      -1,   594,   969,    -1,    -1,    -1,   973,    -1,   330,   331,
     332,    -1,    -1,   606,    -1,    -1,    -1,   339,   340,   341,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     362,   363,    -1,   365,   366,   367,   368,   369,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   649,    -1,   651,   652,
     653,    -1,    -1,   235,    -1,   237,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   401,
     402,   403,   404,   405,   406,   407,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   428,   429,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,   237,    -1,    -1,
      -1,    -1,    -1,   716,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   460,    -1,
     462,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,   113,   114,    -1,    -1,
     482,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   493,    -1,   495,    -1,    -1,   113,   114,    -1,    -1,
     773,    -1,    -1,   776,   777,   778,   779,   780,   781,    -1,
      -1,    -1,    -1,    -1,   787,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   145,   146,
     147,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   835,    -1,    -1,   838,    -1,   840,    -1,    -1,
     843,    -1,   845,    -1,   847,   848,   849,   850,   851,    -1,
     853,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   596,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   606,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,   886,    -1,    -1,    -1,    -1,   891,    -1,
     237,    -1,   113,   114,   897,    -1,    -1,   900,    -1,   902,
      -1,    -1,   905,    -1,   907,    -1,    -1,   145,   146,   147,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,   935,    -1,    -1,    -1,   939,    -1,    -1,    -1,
      -1,   944,    -1,    -1,    -1,   237,   949,    -1,    -1,    -1,
      -1,    -1,   684,    -1,    -1,    -1,    -1,    -1,    -1,   691,
      -1,     4,     5,    -1,     7,     8,   969,    10,   700,    -1,
     973,    -1,    -1,    16,    17,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,   237,    -1,    61,    62,
      63,    64,    65,   755,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,   113,   114,   110,   111,   112,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,   134,    -1,    -1,    -1,   138,    -1,   145,   146,   147,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,    -1,    -1,   161,    -1,
      -1,    -1,    -1,    -1,   237,   168,   858,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    -1,   867,   868,   869,    -1,    -1,
      -1,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,    -1,   207,   208,     4,     5,    -1,     7,
       8,    -1,    10,   216,    -1,    -1,    -1,    -1,    16,    17,
     223,   224,    -1,    -1,    -1,    -1,    -1,   230,   231,   232,
      -1,    -1,    -1,   236,   237,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      58,    -1,    -1,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
      -1,    -1,   110,   111,   112,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    -1,   134,   113,   114,    -1,
     138,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,   145,
     168,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,    -1,   207,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,
      -1,    -1,    -1,    -1,    -1,   223,   224,    -1,    -1,    -1,
      -1,    -1,   230,   231,   232,    -1,    -1,    -1,   236,   237,
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
     204,   205,    -1,   207,   208,   209,    -1,    -1,   212,    -1,
      -1,    -1,   216,   217,    -1,    -1,    -1,    -1,    -1,   223,
     224,    -1,    -1,    -1,    -1,    -1,   230,   231,   232,    -1,
      -1,   235,   236,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,   107,    -1,    -1,   110,
     111,   112,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,    -1,   143,   144,    -1,    -1,    -1,   148,    -1,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,    -1,    -1,
     161,    -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,    -1,   207,   208,   209,    -1,
      -1,    -1,    -1,    -1,    -1,   216,   217,    -1,    -1,    -1,
      -1,    -1,   223,   224,    -1,    -1,    -1,    -1,    -1,   230,
     231,   232,    -1,     4,     5,   236,     7,     8,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,   107,   113,   114,   110,
     111,   112,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,    -1,   134,    -1,    -1,    -1,   138,    -1,   145,
     146,   147,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,    -1,    -1,
     161,    -1,    -1,    -1,    -1,   166,    -1,   168,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,    -1,   207,   208,     4,     5,
      -1,     7,     8,    -1,    10,   216,    -1,    -1,    -1,    -1,
      16,    17,   223,   224,    -1,    -1,    -1,    -1,    -1,   230,
     231,   232,    -1,    -1,    -1,   236,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   167,   168,    -1,    -1,   171,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
      -1,   207,   208,     4,     5,    -1,     7,     8,    -1,    10,
     216,    -1,    -1,    -1,    -1,    16,    17,   223,   224,    -1,
      -1,    -1,    -1,    -1,   230,   231,   232,    -1,    -1,    -1,
     236,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     201,   202,   203,   204,   205,    -1,   207,   208,     4,     5,
      -1,     7,     8,    -1,    10,   216,    -1,    -1,    -1,    -1,
      16,    17,   223,   224,    -1,    -1,    -1,    -1,    -1,   230,
     231,   232,    -1,    -1,    -1,   236,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   167,   168,    -1,    -1,   171,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
      -1,   207,   208,     4,     5,    -1,     7,     8,    -1,    10,
     216,    -1,    -1,    -1,    -1,    16,    17,   223,   224,    -1,
      -1,    -1,    -1,    -1,   230,   231,   232,    -1,    -1,    -1,
     236,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     161,    -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,    -1,   207,   208,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,
      -1,    -1,   223,   224,    -1,    -1,    -1,    -1,    -1,   230,
     231,   232,     3,    -1,    -1,   236,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,   159,    -1,
     161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,
     181,   182,   183,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   206,    -1,   208,   209,   210,
     211,    -1,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,
     221,   222,    -1,    -1,   225,   226,   227,   228,   229,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   237,    -1,    -1,    23,    24,    25,    26,    27,
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
      -1,   169,   170,    -1,   172,    -1,   174,    -1,   237,   177,
     178,   179,    -1,   181,   182,   183,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,
     208,   209,   210,   211,    -1,    -1,    -1,    -1,   216,   217,
      -1,    -1,   220,   221,   222,    -1,    -1,   225,   226,   227,
     228,   229,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    51,   113,   114,    -1,
      -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    81,    82,    -1,   145,
     146,   147,    87,    -1,    -1,    90,    91,    92,    -1,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
     145,   146,   147,    -1,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,   164,
     165,    -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,
      -1,   237,   177,   178,   179,    -1,   181,   182,   183,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   206,    -1,   208,   209,   210,   211,    -1,    -1,    -1,
      -1,   216,   217,    -1,    -1,   220,   221,   222,    -1,    -1,
     225,   226,   227,   228,   229,     7,     8,     9,    10,    11,
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
     172,    -1,   174,    -1,   237,   177,   178,   179,    -1,   181,
     182,   183,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   206,    -1,   208,   209,   210,   211,
      -1,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,   221,
     222,    -1,    -1,   225,   226,   227,   228,   229,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    51,   113,   114,    -1,    -1,    -1,    -1,    58,
      59,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    81,    82,    -1,   145,   146,   147,    87,    -1,
      -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,   145,   146,   147,    -1,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,    -1,
     169,   170,    -1,   172,    -1,   174,    -1,   237,   177,   178,
     179,    -1,   181,   182,   183,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,   208,
     209,   210,   211,    -1,    -1,    -1,    -1,   216,   217,    -1,
      -1,   220,   221,   222,    -1,    -1,   225,   226,   227,   228,
     229,     7,     8,     9,    10,    11,    12,    13,    14,    15,
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
     237,   177,   178,   179,    -1,   181,   182,   183,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    -1,   208,   209,   210,   211,    -1,    -1,    -1,    -1,
     216,   217,    -1,    -1,   220,   221,   222,    -1,    -1,   225,
     226,   227,   228,   229,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,   113,
     114,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,
      -1,   145,   146,   147,    87,    -1,    -1,    90,    91,    92,
      -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,   145,   146,   147,    -1,   149,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,
      -1,   164,   165,    -1,    -1,    -1,   169,   170,    -1,   172,
      -1,   174,    -1,   237,   177,   178,   179,    -1,   181,   182,
     183,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,   208,   209,   210,   211,    -1,
      -1,    -1,    -1,   216,   217,    -1,    -1,   220,   221,   222,
      -1,    -1,   225,   226,   227,   228,   229,     7,     8,     9,
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
     170,    -1,   172,    -1,   174,    -1,   237,   177,   178,   179,
      -1,   181,   182,   183,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,   208,   209,
     210,   211,    -1,    -1,    -1,    -1,   216,   217,    -1,    -1,
     220,   221,   222,    -1,    -1,   225,   226,   227,   228,   229,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    51,   113,   114,    -1,    -1,    -1,
      -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    -1,    -1,    -1,    81,    -1,    -1,   145,   146,   147,
      87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,   146,
     147,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,
      -1,    -1,   169,   170,    -1,   172,    -1,   174,    -1,   237,
     177,   178,   179,    -1,   181,   182,   183,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,   208,   209,   210,   211,    -1,   113,   114,    -1,   216,
     217,    -1,    -1,   220,   221,   222,    -1,    45,   225,   226,
     227,   228,   229,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    -1,    -1,    -1,    -1,    65,   145,   146,
     147,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    -1,    83,    -1,    -1,    -1,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     237,   159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,
      -1,   169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
     178,   179,    -1,   181,   182,   183,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,   113,   114,    -1,    -1,    -1,    -1,    -1,   206,    -1,
     208,   209,   210,   211,    -1,   113,   114,    -1,   216,   217,
      -1,    -1,   220,   221,   222,    -1,    45,   225,   226,   227,
     228,   229,    51,   145,   146,   147,    -1,    -1,    -1,    58,
      59,    60,    -1,    -1,    -1,    -1,    65,   145,   146,   147,
      69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,   237,    -1,    -1,    -1,    -1,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,
     159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,    -1,
     169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,   178,
     179,    -1,   181,   182,   183,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
     113,   114,    -1,    -1,    -1,    -1,    -1,   206,    -1,   208,
     209,   210,   211,    -1,   113,   114,    -1,   216,   217,    -1,
      -1,   220,   221,   222,    -1,    45,   225,   226,   227,   228,
     229,    51,   145,   146,   147,    -1,    -1,    -1,    58,    59,
      60,    -1,    -1,    -1,    -1,    65,   145,   146,   147,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,   237,    -1,    -1,    -1,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,   159,
      -1,   161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,
     170,    -1,   172,    -1,   174,    -1,    -1,   177,   178,   179,
      -1,   181,   182,   183,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,   113,
     114,    -1,    -1,    -1,    -1,    -1,   206,    -1,   208,   209,
     210,   211,    -1,   113,   114,    -1,   216,   217,    -1,    -1,
     220,   221,   222,    -1,    45,   225,   226,   227,   228,   229,
      51,   145,   146,   147,    -1,    -1,    -1,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,   145,   146,   147,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,   237,    -1,    -1,    -1,    -1,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,   159,    -1,
     161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,
     181,   182,   183,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   113,   114,
      -1,    -1,    -1,    -1,    -1,   206,    -1,   208,   209,   210,
     211,    -1,   113,   114,    -1,   216,   217,    -1,    -1,   220,
     221,   222,    -1,    45,   225,   226,   227,   228,   229,    51,
     145,   146,   147,    -1,    -1,    -1,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,   145,   146,   147,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
     142,    -1,   237,    -1,    -1,    -1,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   237,   159,    -1,   161,
     162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,    -1,
     172,    -1,   174,    -1,    -1,   177,   178,   179,    -1,   181,
     182,   183,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   113,   114,    -1,
      -1,    -1,    -1,    -1,   206,    -1,   208,   209,   210,   211,
      -1,   113,   114,    -1,   216,   217,    -1,    -1,   220,   221,
     222,    -1,    45,   225,   226,   227,   228,   229,    51,   145,
     146,   147,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,
      -1,    -1,    65,   145,   146,   147,    69,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,
      -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,   237,    -1,    -1,    -1,    -1,   149,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   237,   159,    -1,   161,   162,
      -1,   164,   165,    -1,    -1,    -1,   169,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,   178,   179,    -1,   181,   182,
     183,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   113,   114,    -1,    -1,
      -1,    -1,    -1,   206,    -1,   208,   209,   210,   211,    -1,
     113,   114,    -1,   216,   217,    -1,    -1,   220,   221,   222,
      -1,    45,   225,   226,   227,   228,   229,    51,   145,   146,
     147,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,
      -1,    65,   145,   146,   147,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
     237,    -1,    -1,    -1,    -1,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   237,   159,    -1,   161,   162,    -1,
     164,   165,    -1,    -1,    -1,   169,   170,    -1,   172,    -1,
     174,    -1,    -1,   177,   178,   179,    -1,   181,   182,   183,
      -1,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,   113,   114,    -1,    -1,    -1,
      -1,    -1,   206,    -1,   208,   209,   210,   211,    -1,   113,
     114,    -1,   216,   217,    -1,    -1,   220,   221,   222,    -1,
      45,   225,   226,   227,   228,   229,    51,   145,   146,   147,
      -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,
      65,   145,   146,   147,    69,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,   237,
      -1,    -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   237,   159,    -1,   161,   162,    -1,   164,
     165,    -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,
      -1,    -1,   177,   178,   179,    -1,   181,   182,   183,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,   113,   114,    -1,    -1,    -1,    -1,
      -1,   206,    -1,   208,   209,   210,   211,    -1,   113,   114,
      -1,   216,   217,    -1,    -1,   220,   221,   222,    -1,    45,
     225,   226,   227,   228,   229,    51,   145,   146,   147,    -1,
      -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
     145,   146,   147,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,   237,    -1,
      -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   237,   159,    -1,   161,   162,    -1,   164,   165,
      -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,   178,   179,    -1,   181,   182,   183,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    -1,   208,   209,   210,   211,   113,   114,    -1,    -1,
     216,   217,    -1,    -1,   220,   221,   222,    -1,    -1,   225,
     226,   227,   228,   229,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   113,   114,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     237,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   113,   114,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   237,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,   145,
     146,   147,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,   237,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   237,   113,   114,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   237,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,   237,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
     145,   146,   147,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,
     145,   146,   147,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,   145,   146,   147,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,   113,   114,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   113,   114,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,   145,   146,   147,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   235,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   235,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   235,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,   145,   146,   147,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,   145,   146,   147,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,   145,   146,   147,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,
      -1,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   235,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,   145,   146,   147,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    -1,    -1,   145,   146,
     147,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,   145,   146,   147,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
      -1,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   235,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   235,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,   145,   146,   147,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
     145,   146,   147,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,   145,   146,
     147,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   235,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
      -1,    -1,    -1,   113,   114,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   235,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   235,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   235,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   235,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,   145,   146,   147,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,   145,   146,   147,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,   145,   146,   147,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,   113,   114,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   113,   114,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,   145,   146,   147,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   235,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   235,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,   145,   146,   147,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,   145,   146,   147,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,   145,   146,
     147,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
      -1,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   235,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,   145,   146,   147,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,
     145,   146,   147,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,   145,   146,   147,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   235,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   235,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,   145,   146,
     147,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,   145,   146,   147,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
     145,   146,   147,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   235,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,    -1,    -1,   113,   114,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   235,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   235,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   235,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,   145,   146,   147,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,   145,   146,   147,    84,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,   145,   146,
     147,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147
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
     174,   177,   178,   179,   181,   182,   183,   206,   208,   209,
     210,   211,   216,   217,   220,   221,   222,   225,   226,   227,
     228,   229,   239,   240,   241,   243,   244,   247,   248,   249,
     250,   257,   258,   265,   266,   267,   278,   243,   236,   236,
     236,     7,     8,   236,   236,   236,   236,   236,   236,   236,
     236,   236,     7,     8,     9,     4,     5,     6,     9,    10,
      16,    17,    18,    33,    58,    61,    62,    63,    64,    65,
      67,    94,   105,   106,   107,   110,   111,   112,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   141,   143,   144,   148,   151,   152,   153,
     154,   155,   156,   157,   158,   161,   168,   171,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     207,   208,   209,   216,   217,   223,   224,   230,   231,   232,
     236,   245,   246,   247,   248,   250,   261,   262,   263,    10,
     246,   246,   246,   246,   263,     7,     8,     9,    99,     4,
       4,   263,    19,    85,   263,   263,   264,   249,   250,   251,
     252,     7,     8,     9,    10,   255,   256,   249,   266,     9,
      94,   266,     8,    10,   262,   262,     7,     8,     9,   253,
     254,   246,   246,   166,   246,   246,   246,   167,   246,   167,
     168,   246,   246,   167,   246,   246,   246,   246,   236,   236,
       6,   251,   270,   271,    21,    36,    37,   212,   235,   246,
     262,   268,   269,     7,    10,    10,   246,   246,   246,   246,
       0,   240,    19,    20,    24,    38,    39,    40,    41,    42,
      43,    44,    24,    24,   251,   235,    19,   246,   246,   237,
     246,   246,    51,   251,   272,   273,   251,   274,   275,   275,
     275,   264,   264,   264,   264,   235,   235,   235,   236,   236,
     236,   236,   236,     4,     5,   247,   248,   246,   246,   236,
     236,   236,   246,   246,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
      36,   236,   236,   246,   236,   236,   262,   246,   236,   236,
      10,   246,   246,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,   113,   114,   145,   146,
     147,    24,    25,    26,    27,    30,    31,    32,   236,   235,
      24,    79,    24,    88,    24,    88,    88,     7,     8,     9,
      19,    83,   243,   244,   241,   242,   263,    19,   235,   235,
     236,   236,   236,   236,   235,   236,   256,    19,   236,   235,
     235,   235,   235,   246,   235,   235,   235,   246,   235,   246,
     246,   235,   235,   246,   235,   235,   235,   235,   246,   246,
     235,   271,   235,   236,   269,   235,   236,   236,   235,   235,
     235,   243,   246,   246,   246,   246,   246,   246,   246,   246,
     262,   263,    24,   266,   235,   237,   235,   237,    24,   235,
     237,   237,   251,   235,   237,   235,   237,   237,   237,   237,
     237,   237,   237,     7,     8,     9,   246,   264,   264,   264,
     262,   262,   262,     7,     8,     9,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   262,   262,   246,   262,   262,   262,   262,
     262,   236,   246,   246,   246,   246,   235,   246,   246,   235,
     235,   237,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     262,   262,   262,   262,   262,   262,   262,   246,   246,   246,
      19,   246,     7,   246,     8,     9,    24,    88,    24,    88,
      88,   242,    19,   243,    70,   242,    85,   242,   264,   252,
     246,   246,   246,   246,   256,   237,    97,   259,   260,   246,
     254,   254,   246,   246,   235,   246,   246,   246,   235,   246,
     235,   235,   246,   246,   235,   246,   246,   246,   246,   237,
     237,   271,   271,   246,     7,   246,   246,   246,   246,   246,
     263,   246,   246,    68,   246,     7,     8,     9,   273,    19,
     275,    19,    19,    19,   237,   237,   237,   237,   237,   237,
     237,   236,   236,   236,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   235,   235,   235,   235,   237,   246,
     237,   235,   235,   235,   246,   237,   237,    10,   246,   237,
      86,   276,   277,    84,   236,    84,   236,   236,   246,     7,
     246,     8,     9,    70,    72,   242,    70,   244,   263,    73,
     235,   237,   235,   237,   235,   237,   235,    24,   251,    19,
      96,   237,   235,   235,   246,   235,   246,   235,   246,   246,
     235,   235,   246,   235,   235,   235,   235,   237,   235,   237,
     237,   235,   235,   237,   237,   236,   237,   242,   242,   242,
     242,   237,   237,   237,   262,   246,   246,   246,   237,   262,
     246,   246,   235,   264,   277,    71,    80,   246,   237,   246,
     237,   237,    84,   236,    84,   236,   236,    19,    70,    72,
     243,   246,   246,   246,     8,    68,   260,   246,   246,   246,
     235,   246,   235,   235,   246,   246,   235,   246,   246,   246,
     246,     7,   235,   235,   246,   246,   262,    50,    49,    49,
      49,   235,   235,   235,   235,   237,   237,   235,   237,   237,
     235,   237,   246,   243,   244,    19,    82,   243,    19,   243,
      19,    82,   243,    19,   243,    19,   243,   246,   237,   246,
     237,   237,   242,    19,   237,   237,   237,   237,   236,   235,
     246,   235,   246,   246,   235,   235,   246,   235,   235,   235,
     246,   246,   235,   235,   237,    33,   245,   245,   245,   246,
     246,   246,   235,    19,    19,   242,   246,    78,   242,    78,
     242,   246,    78,   242,    78,   242,    78,    19,    82,   243,
      19,   243,    19,    82,   243,    19,   243,    19,   243,    72,
     242,   262,   246,   235,   246,   235,   235,   246,   246,   262,
     262,   262,   235,   235,   246,   246,   237,   237,   237,   237,
     237,   237,   246,    71,    78,    19,   243,    78,    78,    19,
     243,    78,    78,   242,   246,    78,   242,    78,   242,   246,
      78,   242,    78,   242,    78,    72,   237,   246,   246,   246,
     235,   246,   246,   235,   242,    78,   242,    78,    78,    19,
     243,    78,    78,    19,   243,    78,    78,   235,   235,   246,
     235,   235,   246,    78,    78,   242,    78,   242,    78,   246,
     246,   235,   246,   246,   235,    78,    78,   235,   235,   246,
     235,   235,   246,   246,   246,   246,   246,   235,   235,   246,
     246,   235,   235,   246,   246,   235,   235,   246,   246
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
#line 90 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 94 "DARIC.y"
    { ast_lines[yyfileno].push_front((yyvsp[(1) - (1)].ast)); (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 95 "DARIC.y"
    { ast_lines[yyfileno].push_front((yyvsp[(1) - (2)].ast)); (yyval.ast) = link((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 99 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (2)].ast); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 100 "DARIC.y"
    { (yyval.ast) = NULL; }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 101 "DARIC.y"
    { (yyval.ast) = link(linenumber((yyvsp[(1) - (3)].v_int)), (yyvsp[(2) - (3)].ast)); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 104 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 105 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 109 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 110 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 116 "DARIC.y"
    { (yyval.ast) = token1(CHAIN, (yyvsp[(2) - (2)].ast)); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 117 "DARIC.y"
    { (yyval.ast) = token2(CHAIN, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 118 "DARIC.y"
    { (yyval.ast) = token1(EXPECT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 119 "DARIC.y"
    { (yyval.ast) = token(END); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 120 "DARIC.y"
    { (yyval.ast) = token1(CALLPROC, string((yyvsp[(1) - (1)].v_string))); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 121 "DARIC.y"
    { (yyval.ast) = token2(CALLPROC, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 122 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 123 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 124 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 125 "DARIC.y"
    { (yyval.ast) = token1(DATA, (yyvsp[(2) - (2)].ast)); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 126 "DARIC.y"
    { (yyval.ast) = token1(READ, (yyvsp[(2) - (2)].ast)); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 127 "DARIC.y"
    { (yyval.ast) = token(RESTORE); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 128 "DARIC.y"
    { (yyval.ast) = token(RETURN); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 129 "DARIC.y"
    { (yyval.ast) = token1(RETURN_WITH_VALUE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 130 "DARIC.y"
    { (yyval.ast) = token(TRACEON); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 131 "DARIC.y"
    { (yyval.ast) = token(TRACEOFF); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 132 "DARIC.y"
    { (yyval.ast) = token(BREAKPOINT); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 134 "DARIC.y"
    { (yyval.ast) = token1(DIM, (yyvsp[(2) - (2)].ast)); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 135 "DARIC.y"
    { (yyval.ast) = token1(LOCALDIM, (yyvsp[(3) - (3)].ast)); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 137 "DARIC.y"
    { (yyval.ast) = token2(BPUT, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 138 "DARIC.y"
    { (yyval.ast) = token1(BGET, (yyvsp[(2) - (2)].ast)); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 139 "DARIC.y"
    { (yyval.ast) = token2(PTRA, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 140 "DARIC.y"
    { (yyval.ast) = token1(CLOSE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 141 "DARIC.y"
    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[(1) - (8)].v_string), Type::STRING_ARRAY), (yyvsp[(7) - (8)].ast), token(GLOBAL)); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 142 "DARIC.y"
    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[(2) - (9)].v_string), Type::STRING_ARRAY), (yyvsp[(8) - (9)].ast), token(LOCAL)); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 144 "DARIC.y"
    { (yyval.ast) = token1(OSCLI, (yyvsp[(2) - (2)].ast)); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 146 "DARIC.y"
    { (yyval.ast) = token1(GOSUB, integer((yyvsp[(2) - (2)].v_int))); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 147 "DARIC.y"
    { (yyval.ast) = token1(GOTO, integer((yyvsp[(2) - (2)].v_int))); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 149 "DARIC.y"
    { (yyval.ast) = token1(INPUT_, (yyvsp[(2) - (2)].ast)); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 150 "DARIC.y"
    { (yyval.ast) = token2(INPUT_NOQUESTIONMARK, string((yyvsp[(2) - (3)].v_string)), (yyvsp[(3) - (3)].ast)); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 151 "DARIC.y"
    { (yyval.ast) = token2(INPUT_, string((yyvsp[(2) - (4)].v_string)), (yyvsp[(4) - (4)].ast)); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 152 "DARIC.y"
    { (yyval.ast) = token3(MOUSE, string((yyvsp[(2) - (6)].v_string)), string((yyvsp[(4) - (6)].v_string)), string((yyvsp[(6) - (6)].v_string)) ); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 154 "DARIC.y"
    { (yyval.ast) = token1(SINKEY, (yyvsp[(3) - (4)].ast)); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 155 "DARIC.y"
    { (yyval.ast) = token1(SINKEYS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 156 "DARIC.y"
    { (yyval.ast) = token(GET_S); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 157 "DARIC.y"
    { (yyval.ast) = token(GETS_S); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 159 "DARIC.y"
    { (yyval.ast) = token2(IF, (yyvsp[(2) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 160 "DARIC.y"
    { (yyval.ast) = token3(IF, (yyvsp[(2) - (5)].ast), (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast)); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 161 "DARIC.y"
    { (yyval.ast) = token2(IF, (yyvsp[(2) - (5)].ast), (yyvsp[(4) - (5)].ast)); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 162 "DARIC.y"
    { (yyval.ast) = token3(IF, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(7) - (8)].ast)); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 164 "DARIC.y"
    { (yyval.ast) = token2(IF, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 165 "DARIC.y"
    { (yyval.ast) = token3(IF, (yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 166 "DARIC.y"
    { (yyval.ast) = token2(IF, (yyvsp[(2) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 167 "DARIC.y"
    { (yyval.ast) = token3(IF, (yyvsp[(2) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(8) - (9)].ast)); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 169 "DARIC.y"
    { (yyval.ast) = token2(REPEAT, (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast)); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 170 "DARIC.y"
    { (yyval.ast) = token2(REPEAT, NULL, (yyvsp[(3) - (3)].ast)); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 171 "DARIC.y"
    { (yyval.ast) = token2(WHILE, (yyvsp[(2) - (5)].ast), (yyvsp[(4) - (5)].ast)); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 173 "DARIC.y"
    { (yyval.ast) = token2(SWAP_I, string((yyvsp[(2) - (4)].v_string)), string((yyvsp[(4) - (4)].v_string))); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 174 "DARIC.y"
    { (yyval.ast) = token2(SWAP_F, string((yyvsp[(2) - (4)].v_string)), string((yyvsp[(4) - (4)].v_string))); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 175 "DARIC.y"
    { (yyval.ast) = token2(SWAP_S, string((yyvsp[(2) - (4)].v_string)), string((yyvsp[(4) - (4)].v_string))); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 178 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (9)].v_string)), string((yyvsp[(4) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 179 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (9)].v_string)), string((yyvsp[(4) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 180 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (9)].v_string)), string((yyvsp[(4) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(GLOBAL), Type::STRING); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 181 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (8)].v_string)), string((yyvsp[(4) - (8)].v_string)), (yyvsp[(7) - (8)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 182 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (8)].v_string)), string((yyvsp[(4) - (8)].v_string)), (yyvsp[(7) - (8)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 183 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (8)].v_string)), string((yyvsp[(4) - (8)].v_string)), (yyvsp[(7) - (8)].ast), token(GLOBAL), Type::STRING); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 184 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (10)].v_string)), string((yyvsp[(5) - (10)].v_string)), (yyvsp[(9) - (10)].ast), token(LOCAL), Type::REAL); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 185 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (10)].v_string)), string((yyvsp[(5) - (10)].v_string)), (yyvsp[(9) - (10)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 186 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (10)].v_string)), string((yyvsp[(5) - (10)].v_string)), (yyvsp[(9) - (10)].ast), token(LOCAL), Type::STRING); }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 187 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (9)].v_string)), string((yyvsp[(5) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(LOCAL), Type::REAL); }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 188 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (9)].v_string)), string((yyvsp[(5) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 189 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (9)].v_string)), string((yyvsp[(5) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(LOCAL), Type::STRING); }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 192 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(2) - (9)].v_string)), (yyvsp[(4) - (9)].ast), (yyvsp[(6) - (9)].ast), (yyvsp[(8) - (9)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 193 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(2) - (9)].v_string)), (yyvsp[(4) - (9)].ast), (yyvsp[(6) - (9)].ast), (yyvsp[(8) - (9)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 194 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(2) - (8)].v_string)), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(7) - (8)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 195 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(2) - (8)].v_string)), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(7) - (8)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 196 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(2) - (11)].v_string)), (yyvsp[(4) - (11)].ast), (yyvsp[(6) - (11)].ast), (yyvsp[(8) - (11)].ast), (yyvsp[(10) - (11)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 197 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(2) - (11)].v_string)), (yyvsp[(4) - (11)].ast), (yyvsp[(6) - (11)].ast), (yyvsp[(8) - (11)].ast), (yyvsp[(10) - (11)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 198 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(2) - (10)].v_string)), (yyvsp[(4) - (10)].ast), (yyvsp[(6) - (10)].ast), (yyvsp[(8) - (10)].ast), (yyvsp[(9) - (10)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 199 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(2) - (10)].v_string)), (yyvsp[(4) - (10)].ast), (yyvsp[(6) - (10)].ast), (yyvsp[(8) - (10)].ast), (yyvsp[(9) - (10)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 200 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(3) - (10)].v_string)), (yyvsp[(5) - (10)].ast), (yyvsp[(7) - (10)].ast), (yyvsp[(9) - (10)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 201 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(3) - (10)].v_string)), (yyvsp[(5) - (10)].ast), (yyvsp[(7) - (10)].ast), (yyvsp[(9) - (10)].ast), token(LOCAL), Type::REAL); }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 202 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(3) - (9)].v_string)), (yyvsp[(5) - (9)].ast), (yyvsp[(7) - (9)].ast), (yyvsp[(8) - (9)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 203 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(3) - (9)].v_string)), (yyvsp[(5) - (9)].ast), (yyvsp[(7) - (9)].ast), (yyvsp[(8) - (9)].ast), token(LOCAL), Type::REAL); }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 204 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(3) - (12)].v_string)), (yyvsp[(5) - (12)].ast), (yyvsp[(7) - (12)].ast), (yyvsp[(9) - (12)].ast), (yyvsp[(11) - (12)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 205 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(3) - (12)].v_string)), (yyvsp[(5) - (12)].ast), (yyvsp[(7) - (12)].ast), (yyvsp[(9) - (12)].ast), (yyvsp[(11) - (12)].ast), token(LOCAL), Type::REAL); }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 206 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(3) - (11)].v_string)), (yyvsp[(5) - (11)].ast), (yyvsp[(7) - (11)].ast), (yyvsp[(9) - (11)].ast), (yyvsp[(10) - (11)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 207 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(3) - (11)].v_string)), (yyvsp[(5) - (11)].ast), (yyvsp[(7) - (11)].ast), (yyvsp[(9) - (11)].ast), (yyvsp[(10) - (11)].ast), token(LOCAL), Type::REAL); }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 209 "DARIC.y"
    { (yyval.ast) = token2(CASE, (yyvsp[(2) - (6)].ast), (yyvsp[(5) - (6)].ast));  }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 210 "DARIC.y"
    { (yyval.ast) = token3(CASE, (yyvsp[(2) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(7) - (9)].ast));  }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 212 "DARIC.y"
    { (yyval.ast) = token(PRINT); }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 213 "DARIC.y"
    { (yyval.ast) = token1(PRINT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 215 "DARIC.y"
    { (yyval.ast) = token(RENDERFRAME); }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 218 "DARIC.y"
    { (yyval.ast) = token6(CREATEVERTEX, string((yyvsp[(2) - (13)].v_string)), (yyvsp[(4) - (13)].ast), (yyvsp[(7) - (13)].ast), (yyvsp[(9) - (13)].ast), (yyvsp[(11) - (13)].ast), (yyvsp[(13) - (13)].ast)); }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 221 "DARIC.y"
    { (yyval.ast) = token6(CREATETRIANGLE, string((yyvsp[(2) - (13)].v_string)), (yyvsp[(4) - (13)].ast), (yyvsp[(7) - (13)].ast), (yyvsp[(9) - (13)].ast), (yyvsp[(11) - (13)].ast), (yyvsp[(13) - (13)].ast)); }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 222 "DARIC.y"
    { (yyval.ast) = token4(TRANSLATE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 223 "DARIC.y"
    { (yyval.ast) = token4(ROTATE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 224 "DARIC.y"
    { (yyval.ast) = token2(SCALE, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 225 "DARIC.y"
    { (yyval.ast) = token1(DELETEOBJECT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 227 "DARIC.y"
    { (yyval.ast) = token(CLS); }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 228 "DARIC.y"
    { (yyval.ast) = token1(COLOUR, (yyvsp[(2) - (2)].ast)); }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 229 "DARIC.y"
    { (yyval.ast) = token3(COLOUR, (yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 230 "DARIC.y"
    { (yyval.ast) = token1(COLOURBG, (yyvsp[(2) - (2)].ast)); }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 231 "DARIC.y"
    { (yyval.ast) = token3(COLOURBG, (yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 232 "DARIC.y"
    { (yyval.ast) = token2(GRAPHICS, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 233 "DARIC.y"
    { (yyval.ast) = token2(BANKED, (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast)); }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 234 "DARIC.y"
    { (yyval.ast) = token(GRAPHICS); }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 235 "DARIC.y"
    { (yyval.ast) = token(BANKED); }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 236 "DARIC.y"
    { (yyval.ast) = token(FLIP); }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 237 "DARIC.y"
    { (yyval.ast) = token3(CIRCLE, (yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 238 "DARIC.y"
    { (yyval.ast) = token3(CIRCLEFILL, (yyvsp[(3) - (7)].ast), (yyvsp[(5) - (7)].ast), (yyvsp[(7) - (7)].ast)); }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 239 "DARIC.y"
    { (yyval.ast) = token4(LINE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 240 "DARIC.y"
    { (yyval.ast) = token4(RECTANGLE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 241 "DARIC.y"
    { (yyval.ast) = token4(RECTANGLEFILL, (yyvsp[(3) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(7) - (9)].ast), (yyvsp[(9) - (9)].ast)); }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 242 "DARIC.y"
    { (yyval.ast) = token6(TRIANGLE, (yyvsp[(2) - (12)].ast), (yyvsp[(4) - (12)].ast), (yyvsp[(6) - (12)].ast), (yyvsp[(8) - (12)].ast), (yyvsp[(10) - (12)].ast), (yyvsp[(12) - (12)].ast)); }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 243 "DARIC.y"
    { (yyval.ast) = token6(TRIANGLEFILL, (yyvsp[(3) - (13)].ast), (yyvsp[(5) - (13)].ast), (yyvsp[(7) - (13)].ast), (yyvsp[(9) - (13)].ast), (yyvsp[(11) - (13)].ast), (yyvsp[(13) - (13)].ast)); }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 246 "DARIC.y"
    { (yyval.ast) = token9(TRIANGLESHADED, (yyvsp[(3) - (19)].ast), (yyvsp[(5) - (19)].ast), (yyvsp[(7) - (19)].ast), (yyvsp[(9) - (19)].ast), (yyvsp[(11) - (19)].ast), (yyvsp[(13) - (19)].ast), (yyvsp[(15) - (19)].ast), (yyvsp[(17) - (19)].ast), (yyvsp[(19) - (19)].ast)); }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 247 "DARIC.y"
    { (yyval.ast) = token2(PLOT, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 248 "DARIC.y"
    { (yyval.ast) = token4(CLIPON, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 249 "DARIC.y"
    { (yyval.ast) = token(CLIPOFF); }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 250 "DARIC.y"
    { (yyval.ast) = token4(TEXT, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 251 "DARIC.y"
    { (yyval.ast) = token4(TEXTRIGHT, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 252 "DARIC.y"
    { (yyval.ast) = token4(TEXTCENTRE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 253 "DARIC.y"
    { (yyval.ast) = token(SHOWFPS); }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 257 "DARIC.y"
    { (yyval.ast) = integer((yyvsp[(1) - (1)].v_int)); }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 258 "DARIC.y"
    { (yyval.ast) = integer(-(yyvsp[(2) - (2)].v_int)); }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 259 "DARIC.y"
    { (yyval.ast) = real((yyvsp[(1) - (1)].v_real)); }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 260 "DARIC.y"
    { (yyval.ast) = real(-(yyvsp[(2) - (2)].v_real)); }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 264 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 265 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 266 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 267 "DARIC.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 268 "DARIC.y"
    { (yyval.ast) = token1(FLOAT_, (yyvsp[(3) - (4)].ast)); }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 269 "DARIC.y"
    { (yyval.ast) = token1(INT_, (yyvsp[(3) - (4)].ast)); }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 270 "DARIC.y"
    { (yyval.ast) = token2(MINUS, integer(0), (yyvsp[(2) - (2)].ast)); }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 271 "DARIC.y"
    { (yyval.ast) = token2(MINUS, real(0.0), (yyvsp[(2) - (2)].ast)); }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 272 "DARIC.y"
    { (yyval.ast) = token2(PLUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 273 "DARIC.y"
    { (yyval.ast) = token2(MINUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 274 "DARIC.y"
    { (yyval.ast) = token2(MULTIPLY, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 275 "DARIC.y"
    { (yyval.ast) = token2(DIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 276 "DARIC.y"
    { (yyval.ast) = token2(INTEGERDIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 277 "DARIC.y"
    { (yyval.ast) = token2(DIV, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 278 "DARIC.y"
    { (yyval.ast) = token2(MOD, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 279 "DARIC.y"
    { (yyval.ast) = token2(SHL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 280 "DARIC.y"
    { (yyval.ast) = token2(SHR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 281 "DARIC.y"
    { (yyval.ast) = token2(E, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 282 "DARIC.y"
    { (yyval.ast) = token2(NE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 283 "DARIC.y"
    { (yyval.ast) = token2(GE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 284 "DARIC.y"
    { (yyval.ast) = token2(LE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 285 "DARIC.y"
    { (yyval.ast) = token2(LT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 286 "DARIC.y"
    { (yyval.ast) = token2(GT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 287 "DARIC.y"
    { (yyval.ast) = token2(AND, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 288 "DARIC.y"
    { (yyval.ast) = token2(OR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 289 "DARIC.y"
    { (yyval.ast) = token2(EOR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 291 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 292 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 294 "DARIC.y"
    { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[(3) - (8)].v_string), Type::REAL), (yyvsp[(7) - (8)].ast)); }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 295 "DARIC.y"
    { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[(3) - (8)].v_string), Type::INTEGER), (yyvsp[(7) - (8)].ast)); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 296 "DARIC.y"
    { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[(3) - (8)].v_string), Type::STRING), (yyvsp[(7) - (8)].ast)); }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 298 "DARIC.y"
    { (yyval.ast) = token1(PTR, (yyvsp[(2) - (2)].ast)); }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 300 "DARIC.y"
    { (yyval.ast) = token(GET); }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 301 "DARIC.y"
    { (yyval.ast) = token1(INKEY, (yyvsp[(3) - (4)].ast)); }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 303 "DARIC.y"
    { (yyval.ast) = integer(1); }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 304 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 305 "DARIC.y"
    { (yyval.ast) = token(TIME); }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 307 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 308 "DARIC.y"
    { (yyval.ast) = integer(1); }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 309 "DARIC.y"
    { (yyval.ast) = integer(2); }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 310 "DARIC.y"
    { (yyval.ast) = integer(3); }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 312 "DARIC.y"
    { (yyval.ast) = token2(CREATESHAPE, string((yyvsp[(2) - (4)].v_string)), string((yyvsp[(4) - (4)].v_string))); }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 317 "DARIC.y"
    { (yyval.ast) = token9(CREATEOBJECT, (yyvsp[(2) - (18)].ast), (yyvsp[(4) - (18)].ast), (yyvsp[(6) - (18)].ast), (yyvsp[(8) - (18)].ast), (yyvsp[(10) - (18)].ast), (yyvsp[(12) - (18)].ast), (yyvsp[(14) - (18)].ast), (yyvsp[(16) - (18)].ast), (yyvsp[(18) - (18)].ast)); }
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 319 "DARIC.y"
    { (yyval.ast) = integer(0xFF0000); }
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 320 "DARIC.y"
    { (yyval.ast) = integer(0x00FF00); }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 321 "DARIC.y"
    { (yyval.ast) = integer(0xFFFF00); }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 322 "DARIC.y"
    { (yyval.ast) = integer(0x0000FF); }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 323 "DARIC.y"
    { (yyval.ast) = integer(0xFF00FF); }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 324 "DARIC.y"
    { (yyval.ast) = integer(0x00FFFF); }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 325 "DARIC.y"
    { (yyval.ast) = integer(0xFFFFFF); }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 326 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 327 "DARIC.y"
    { (yyval.ast) = integer(-1); }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 328 "DARIC.y"
    { (yyval.ast) = token3(COLOUREXP, (yyvsp[(3) - (8)].ast), (yyvsp[(5) - (8)].ast), (yyvsp[(7) - (8)].ast)); }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 329 "DARIC.y"
    { (yyval.ast) = token2(POINT_, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 330 "DARIC.y"
    { (yyval.ast) = token(SCREENWIDTH); }
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 331 "DARIC.y"
    { (yyval.ast) = token(SCREENHEIGHT); }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 332 "DARIC.y"
    { (yyval.ast) = token1(LOADTYPEFACE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 333 "DARIC.y"
    { (yyval.ast) = token2(CREATEFONT, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 334 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 335 "DARIC.y"
    { (yyval.ast) = integer(1); }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 336 "DARIC.y"
    { (yyval.ast) = integer(2); }
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 337 "DARIC.y"
    { (yyval.ast) = integer(3); }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 338 "DARIC.y"
    { (yyval.ast) = integer(4); }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 339 "DARIC.y"
    { (yyval.ast) = integer(5); }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 340 "DARIC.y"
    { (yyval.ast) = integer(6); }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 341 "DARIC.y"
    { (yyval.ast) = integer(7); }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 342 "DARIC.y"
    { (yyval.ast) = integer(8); }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 343 "DARIC.y"
    { (yyval.ast) = integer(9); }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 344 "DARIC.y"
    { (yyval.ast) = integer(10); }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 345 "DARIC.y"
    { (yyval.ast) = integer(11); }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 346 "DARIC.y"
    { (yyval.ast) = integer(12); }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 347 "DARIC.y"
    { (yyval.ast) = integer(13); }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 348 "DARIC.y"
    { (yyval.ast) = integer(14); }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 349 "DARIC.y"
    { (yyval.ast) = integer(15); }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 350 "DARIC.y"
    { (yyval.ast) = integer(16); }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 351 "DARIC.y"
    { (yyval.ast) = integer(17); }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 352 "DARIC.y"
    { (yyval.ast) = token1(EOFH, (yyvsp[(2) - (2)].ast)); }
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 353 "DARIC.y"
    { (yyval.ast) = token1(BGET, (yyvsp[(2) - (2)].ast)); }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 354 "DARIC.y"
    { (yyval.ast) = token1(OPENIN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 355 "DARIC.y"
    { (yyval.ast) = token1(OPENOUT, (yyvsp[(3) - (4)].ast)); }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 356 "DARIC.y"
    { (yyval.ast) = token1(OPENUP, (yyvsp[(3) - (4)].ast)); }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 358 "DARIC.y"
    { (yyval.ast) = token(RND); }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 359 "DARIC.y"
    { (yyval.ast) = token1(RNDREAL, integer(0)); }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 360 "DARIC.y"
    { (yyval.ast) = token1(RNDREAL, integer(1)); }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 361 "DARIC.y"
    { (yyval.ast) = token1(RNDRANGE, (yyvsp[(3) - (4)].ast)); }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 363 "DARIC.y"
    { (yyval.ast) = token(PI); }
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 364 "DARIC.y"
    { (yyval.ast) = token1(NOT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 365 "DARIC.y"
    { (yyval.ast) = token1(SQR, (yyvsp[(3) - (4)].ast)); }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 366 "DARIC.y"
    { (yyval.ast) = token1(LN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 367 "DARIC.y"
    { (yyval.ast) = token1(LOG, (yyvsp[(3) - (4)].ast)); }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 368 "DARIC.y"
    { (yyval.ast) = token1(EXP, (yyvsp[(3) - (4)].ast)); }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 369 "DARIC.y"
    { (yyval.ast) = token1(ATN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 370 "DARIC.y"
    { (yyval.ast) = token1(TAN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 371 "DARIC.y"
    { (yyval.ast) = token1(COS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 372 "DARIC.y"
    { (yyval.ast) = token1(SIN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 373 "DARIC.y"
    { (yyval.ast) = token1(ABS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 374 "DARIC.y"
    { (yyval.ast) = token1(ACS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 375 "DARIC.y"
    { (yyval.ast) = token1(ASN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 376 "DARIC.y"
    { (yyval.ast) = token1(DEG, (yyvsp[(3) - (4)].ast)); }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 377 "DARIC.y"
    { (yyval.ast) = token1(RAD, (yyvsp[(3) - (4)].ast)); }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 378 "DARIC.y"
    { (yyval.ast) = token1(SGN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 380 "DARIC.y"
    { (yyval.ast) = token1(ASC, (yyvsp[(3) - (4)].ast)); }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 381 "DARIC.y"
    { (yyval.ast) = token1(LEN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 382 "DARIC.y"
    { (yyval.ast) = token3(INSTR, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), integer(1)); }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 383 "DARIC.y"
    { (yyval.ast) = token3(INSTR, (yyvsp[(3) - (8)].ast), (yyvsp[(5) - (8)].ast), (yyvsp[(7) - (8)].ast)); }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 384 "DARIC.y"
    { (yyval.ast) = token1(VAL, (yyvsp[(3) - (4)].ast)); }
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 388 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::INTEGER); }
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 389 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::INTEGER_ARRAY); }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 390 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::INTEGER_ARRAY); }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 391 "DARIC.y"
    { (yyval.ast) = typevariable((yyvsp[(1) - (2)].v_string), (yyvsp[(2) - (2)].v_string), Type::TYPE); }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 392 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (5)].v_string), (yyvsp[(5) - (5)].v_string), (yyvsp[(3) - (5)].ast), Type::TYPE_ARRAY); }
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 396 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::REAL); }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 397 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::REAL_ARRAY); }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 398 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::REAL_ARRAY); }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 399 "DARIC.y"
    { (yyval.ast) = typevariable((yyvsp[(1) - (2)].v_string), (yyvsp[(2) - (2)].v_string), Type::TYPE); }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 400 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (5)].v_string), (yyvsp[(5) - (5)].v_string), (yyvsp[(3) - (5)].ast), Type::TYPE_ARRAY); }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 404 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 405 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 409 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::STRING); }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 410 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::STRING_ARRAY); }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 411 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::STRING_ARRAY); }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 412 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (5)].v_string), (yyvsp[(5) - (5)].v_string), (yyvsp[(3) - (5)].ast), Type::TYPE_ARRAY); }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 416 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 417 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 421 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 422 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 426 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::INTEGER); }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 427 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::REAL); }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 428 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::STRING); }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 432 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 433 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 437 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::INTEGER_ARRAY); }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 438 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::INTEGER_ARRAY); }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 439 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::REAL_ARRAY); }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 440 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::REAL_ARRAY); }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 441 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::STRING_ARRAY); }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 442 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::STRING_ARRAY); }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 443 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (6)].v_string), (yyvsp[(5) - (6)].v_string), (yyvsp[(3) - (6)].ast), Type::TYPE_ARRAY); }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 447 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 448 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 452 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::TYPE); }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 453 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::TYPE_ARRAY); }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 457 "DARIC.y"
    { (yyval.ast) = token2(TYPE_, string((yyvsp[(2) - (5)].v_string)), (yyvsp[(4) - (5)].ast)); }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 461 "DARIC.y"
    { (yyval.ast) = token1(FIELD, (yyvsp[(2) - (2)].ast)); }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 465 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (2)].ast); }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 466 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 470 "DARIC.y"
    { (yyval.ast) = string((yyvsp[(1) - (1)].v_string)); }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 474 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 475 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 476 "DARIC.y"
    { (yyval.ast) = token2(PLUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 477 "DARIC.y"
    { (yyval.ast) = token2(E, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 478 "DARIC.y"
    { (yyval.ast) = token2(NE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 479 "DARIC.y"
    { (yyval.ast) = token2(GE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 480 "DARIC.y"
    { (yyval.ast) = token2(LE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 481 "DARIC.y"
    { (yyval.ast) = token2(LT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 482 "DARIC.y"
    { (yyval.ast) = token2(GT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 484 "DARIC.y"
    { (yyval.ast) = token1(GETSH, (yyvsp[(2) - (2)].ast)); }
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 486 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 488 "DARIC.y"
    { (yyval.ast) = token(GETS); }
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 489 "DARIC.y"
    { (yyval.ast) = token1(INKEYS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 491 "DARIC.y"
    { (yyval.ast) = token(TIMES); }
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 492 "DARIC.y"
    { (yyval.ast) = token1(STRS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 493 "DARIC.y"
    { (yyval.ast) = token1(STRSHEX, (yyvsp[(4) - (5)].ast)); }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 494 "DARIC.y"
    { (yyval.ast) = token2(STRINGS, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 495 "DARIC.y"
    { (yyval.ast) = token1(CHRS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 496 "DARIC.y"
    { (yyval.ast) = token2(LEFTS, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 497 "DARIC.y"
    { (yyval.ast) = token3(MIDS, (yyvsp[(3) - (8)].ast), (yyvsp[(5) - (8)].ast), (yyvsp[(7) - (8)].ast)); }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 498 "DARIC.y"
    { (yyval.ast) = token2(RIGHTS, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 502 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 503 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 507 "DARIC.y"
    { (yyval.ast) = NULL; }
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 508 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 509 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 513 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 307:
/* Line 1792 of yacc.c  */
#line 514 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 515 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 516 "DARIC.y"
    { (yyval.ast) = assignment(link((yyvsp[(1) - (4)].ast), (yyvsp[(2) - (4)].ast)), (yyvsp[(4) - (4)].ast)); }
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 520 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 521 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 525 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 313:
/* Line 1792 of yacc.c  */
#line 526 "DARIC.y"
    { (yyval.ast) = token1(LOCAL, (yyvsp[(2) - (2)].ast)); }
    break;

  case 314:
/* Line 1792 of yacc.c  */
#line 527 "DARIC.y"
    { (yyval.ast) = token1(GLOBAL, (yyvsp[(2) - (2)].ast)); }
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 528 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(SHL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 529 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(SHR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 530 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(PLUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 531 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(MINUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 532 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(MULTIPLY, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 533 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(DIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 534 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(INTEGERDIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 538 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 539 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 540 "DARIC.y"
    { (yyval.ast) = token(COMMA); }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 541 "DARIC.y"
    { (yyval.ast) = token(TILDE); }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 542 "DARIC.y"
    { (yyval.ast) = token(TICK); }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 543 "DARIC.y"
    { (yyval.ast) = token1(SPC, (yyvsp[(3) - (4)].ast)); }
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 544 "DARIC.y"
    { (yyval.ast) = token(SEMICOLON); }
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 548 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 549 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 557 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 558 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 334:
/* Line 1792 of yacc.c  */
#line 562 "DARIC.y"
    { (yyval.ast) = NULL; }
    break;

  case 335:
/* Line 1792 of yacc.c  */
#line 563 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 564 "DARIC.y"
    { (yyval.ast) = token1(RETURN_PARAMETER, (yyvsp[(2) - (2)].ast)); }
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 568 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 338:
/* Line 1792 of yacc.c  */
#line 569 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 573 "DARIC.y"
    { (yyval.ast) = NULL; }
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 574 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 578 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 579 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 583 "DARIC.y"
    { (yyval.ast) = token2(WHEN, (yyvsp[(2) - (4)].ast), (yyvsp[(3) - (4)].ast)); }
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 587 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 588 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 591 "DARIC.y"
    { (yyval.ast) = token3typed(DEFPROC, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::NOTYPE); }
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 592 "DARIC.y"
    { (yyval.ast) = token3typed(DEFFN, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::INTEGER); }
    break;

  case 348:
/* Line 1792 of yacc.c  */
#line 593 "DARIC.y"
    { (yyval.ast) = token3typed(DEFFN, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::REAL); }
    break;

  case 349:
/* Line 1792 of yacc.c  */
#line 594 "DARIC.y"
    { (yyval.ast) = token3typed(DEFFN, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::STRING); }
    break;


/* Line 1792 of yacc.c  */
#line 6592 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
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
#line 597 "DARIC.y"


void parse(const char *filename) {
    yyfileno = 0;
    yyin = fopen(filename, "r");

    if (!yyin) {
        std::cout << "Error opening source file '" << filename << "'" << std::endl;
        exit(0);
    }
    file = filename;
    files_index.insert(std::pair<std::string, int>(file, yyfileno));
    yyparse();
    fclose(yyin);
    yylex_destroy();
}

void yyerror(const char *e) {
    std::cout << "Parsing error: " << e << " at line " << yylineno << " of file '" << file << "'" << std::endl;
    exit(1);
}