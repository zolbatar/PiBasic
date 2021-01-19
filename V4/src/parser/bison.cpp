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
#line 372 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
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
#line 413 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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
#define YYFINAL  289
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10342

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  237
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  347
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1015

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   488

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     235,   236,     2,     2,   234,     2,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231,   232,   233
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
     660,   662,   664,   671,   679,   688,   697,   707,   720,   734,
     754,   759,   768,   770,   779,   788,   797,   799,   801,   804,
     806,   809,   811,   813,   815,   819,   824,   829,   832,   835,
     839,   843,   847,   851,   855,   859,   863,   867,   871,   875,
     879,   883,   887,   891,   895,   899,   903,   907,   912,   917,
     926,   935,   944,   947,   949,   954,   956,   958,   960,   962,
     964,   966,   968,   973,   992,   994,   996,   998,  1000,  1002,
    1004,  1006,  1008,  1010,  1019,  1026,  1028,  1030,  1033,  1038,
    1040,  1042,  1044,  1046,  1048,  1050,  1052,  1054,  1056,  1058,
    1060,  1062,  1064,  1066,  1068,  1070,  1072,  1074,  1077,  1080,
    1085,  1090,  1095,  1097,  1099,  1101,  1106,  1108,  1111,  1116,
    1121,  1126,  1131,  1136,  1141,  1146,  1151,  1156,  1161,  1166,
    1171,  1176,  1181,  1186,  1191,  1198,  1207,  1212,  1214,  1219,
    1226,  1229,  1235,  1237,  1242,  1249,  1252,  1258,  1260,  1262,
    1264,  1269,  1276,  1282,  1284,  1286,  1288,  1292,  1294,  1296,
    1298,  1300,  1304,  1309,  1316,  1321,  1328,  1333,  1340,  1347,
    1349,  1353,  1355,  1360,  1366,  1369,  1372,  1376,  1378,  1380,
    1382,  1386,  1390,  1394,  1398,  1402,  1406,  1410,  1413,  1418,
    1420,  1425,  1427,  1432,  1438,  1445,  1450,  1457,  1466,  1473,
    1475,  1477,  1478,  1480,  1484,  1488,  1492,  1496,  1501,  1503,
    1507,  1509,  1512,  1515,  1519,  1523,  1527,  1531,  1535,  1539,
    1543,  1545,  1547,  1549,  1551,  1553,  1558,  1560,  1562,  1565,
    1567,  1569,  1573,  1574,  1576,  1579,  1581,  1585,  1586,  1588,
    1590,  1594,  1599,  1601,  1604,  1612,  1620,  1628
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     238,     0,    -1,   239,    -1,   240,    -1,   240,   239,    -1,
     242,    19,    -1,    19,    -1,     3,   242,    19,    -1,   240,
      -1,   240,   241,    -1,   243,    -1,   243,    20,   242,    -1,
     266,    -1,   277,    -1,   257,    -1,   149,   261,    -1,   149,
     261,   234,   253,    -1,   150,   253,    -1,   101,    -1,    15,
      -1,    15,   235,   263,   236,    -1,    16,   235,   263,   236,
      -1,    17,   235,   263,   236,    -1,    18,   235,   263,   236,
      -1,    90,   263,    -1,    91,   251,    -1,    92,    -1,    51,
      -1,    51,   262,    -1,   102,    -1,   103,    -1,   104,    -1,
      94,   255,    -1,    99,    94,   255,    -1,    59,   245,   234,
     245,    -1,    58,   245,    -1,    65,   245,    24,   245,    -1,
      60,   245,    -1,     9,   235,   236,    24,    68,   235,   261,
     236,    -1,    99,     9,   235,   236,    24,    68,   235,   261,
     236,    -1,   142,   261,    -1,    75,     4,    -1,    76,     4,
      -1,   209,   270,    -1,   209,     6,   270,    -1,   209,     6,
     234,   270,    -1,   219,     7,   234,     7,   234,     7,    -1,
     207,   235,   245,   236,    -1,   208,   235,   245,   236,    -1,
     215,    -1,   216,    -1,    77,   262,   242,    -1,    77,   262,
     243,    70,   243,    -1,    77,   262,    19,   241,    72,    -1,
      77,   262,    19,   241,    70,    19,   241,    72,    -1,    77,
     262,    83,   242,    -1,    77,   262,    83,   242,    70,   242,
      -1,    77,   262,    83,    19,   241,    72,    -1,    77,   262,
      83,    19,   241,    70,    19,   241,    72,    -1,    81,    19,
     241,    85,   262,    -1,    81,    85,   262,    -1,    87,   262,
      19,   241,    73,    -1,    45,     7,   234,     7,    -1,    45,
       8,   234,     8,    -1,    45,     9,   234,     9,    -1,    74,
       8,    88,     8,   235,   236,    19,   241,    78,    -1,    74,
       7,    88,     7,   235,   236,    19,   241,    78,    -1,    74,
       9,    88,     9,   235,   236,    19,   241,    78,    -1,    74,
       8,    88,     8,   235,   236,   242,    78,    -1,    74,     7,
      88,     7,   235,   236,   242,    78,    -1,    74,     9,    88,
       9,   235,   236,   242,    78,    -1,    74,    99,     8,    88,
       8,   235,   236,    19,   241,    78,    -1,    74,    99,     7,
      88,     7,   235,   236,    19,   241,    78,    -1,    74,    99,
       9,    88,     9,   235,   236,    19,   241,    78,    -1,    74,
      99,     8,    88,     8,   235,   236,   242,    78,    -1,    74,
      99,     7,    88,     7,   235,   236,   242,    78,    -1,    74,
      99,     9,    88,     9,   235,   236,   242,    78,    -1,    74,
       7,    24,   245,    84,   245,    19,   241,    78,    -1,    74,
       8,    24,   245,    84,   245,    19,   241,    78,    -1,    74,
       7,    24,   245,    84,   245,   242,    78,    -1,    74,     8,
      24,   245,    84,   245,   242,    78,    -1,    74,     7,    24,
     245,    84,   245,    82,   245,    19,   241,    78,    -1,    74,
       8,    24,   245,    84,   245,    82,   245,    19,   241,    78,
      -1,    74,     7,    24,   245,    84,   245,    82,   245,   242,
      78,    -1,    74,     8,    24,   245,    84,   245,    82,   245,
     242,    78,    -1,    74,    99,     7,    24,   245,    84,   245,
      19,   241,    78,    -1,    74,    99,     8,    24,   245,    84,
     245,    19,   241,    78,    -1,    74,    99,     7,    24,   245,
      84,   245,   242,    78,    -1,    74,    99,     8,    24,   245,
      84,   245,   242,    78,    -1,    74,    99,     7,    24,   245,
      84,   245,    82,   245,    19,   241,    78,    -1,    74,    99,
       8,    24,   245,    84,   245,    82,   245,    19,   241,    78,
      -1,    74,    99,     7,    24,   245,    84,   245,    82,   245,
     242,    78,    -1,    74,    99,     8,    24,   245,    84,   245,
      82,   245,   242,    78,    -1,    69,   262,    79,    19,   276,
      71,    -1,    69,   262,    79,    19,   276,    80,   243,    19,
      71,    -1,   210,    -1,   210,   268,    -1,   227,    -1,   220,
      10,   235,   245,   236,   234,   245,   234,   245,   234,   245,
     234,   245,    -1,   221,    10,   235,   245,   236,   234,   245,
     234,   245,   234,   245,   234,   245,    -1,   224,   245,   234,
     245,   234,   245,   234,   245,    -1,   225,   245,   234,   245,
     234,   245,   234,   245,    -1,   226,   245,   234,   245,    -1,
     228,   245,    -1,   159,    -1,   161,   245,    -1,   161,   245,
     234,   245,   234,   245,    -1,   162,   245,    -1,   162,   245,
     234,   245,   234,   245,    -1,   165,   245,   234,   245,    -1,
     165,    -1,   164,    -1,   178,   245,   234,   245,   234,   245,
      -1,   178,   166,   245,   234,   245,   234,   245,    -1,   168,
     245,   234,   245,   234,   245,   234,   245,    -1,   171,   245,
     234,   245,   234,   245,   234,   245,    -1,   171,   166,   245,
     234,   245,   234,   245,   234,   245,    -1,   173,   245,   234,
     245,   234,   245,   234,   245,   234,   245,   234,   245,    -1,
     173,   166,   245,   234,   245,   234,   245,   234,   245,   234,
     245,   234,   245,    -1,   173,   167,   245,   234,   245,   234,
     245,   234,   245,   234,   245,   234,   245,   234,   245,   234,
     245,   234,   245,    -1,   169,   245,   234,   245,    -1,   176,
     245,   234,   245,   234,   245,   234,   245,    -1,   177,    -1,
     180,   245,   234,   245,   234,   245,   234,   261,    -1,   181,
     245,   234,   245,   234,   245,   234,   261,    -1,   182,   245,
     234,   245,   234,   245,   234,   261,    -1,   205,    -1,     4,
      -1,    33,     4,    -1,     5,    -1,    33,     5,    -1,   244,
      -1,   246,    -1,   247,    -1,   235,   245,   236,    -1,   110,
     235,   245,   236,    -1,   111,   235,   245,   236,    -1,    33,
     246,    -1,    33,   247,    -1,   245,    32,   245,    -1,   245,
      33,   245,    -1,   245,    34,   245,    -1,   245,    35,   245,
      -1,   245,    23,   245,    -1,   245,   113,   245,    -1,   245,
     114,   245,    -1,   245,    28,   245,    -1,   245,    29,   245,
      -1,   245,    24,   245,    -1,   245,    27,   245,    -1,   245,
      26,   245,    -1,   245,    25,   245,    -1,   245,    30,   245,
      -1,   245,    31,   245,    -1,   245,   145,   245,    -1,   245,
     146,   245,    -1,   245,   147,   245,    -1,    16,   235,   263,
     236,    -1,    17,   235,   263,   236,    -1,    94,   235,     8,
     235,   236,   234,   244,   236,    -1,    94,   235,     7,   235,
     236,   234,   244,   236,    -1,    94,   235,     9,   235,   236,
     234,   244,   236,    -1,    65,   245,    -1,   215,    -1,   207,
     235,   245,   236,    -1,   131,    -1,   130,    -1,   143,    -1,
     229,    -1,   230,    -1,   167,    -1,   231,    -1,   222,    10,
     234,    10,    -1,   223,   245,   234,   245,   234,   245,   234,
     245,   234,   245,   234,   245,   234,   245,   234,   245,   234,
     245,    -1,   151,    -1,   152,    -1,   153,    -1,   154,    -1,
     155,    -1,   156,    -1,   157,    -1,   158,    -1,   206,    -1,
     161,   235,   245,   234,   245,   234,   245,   236,    -1,   170,
     235,   245,   234,   245,   236,    -1,   203,    -1,   204,    -1,
     183,   261,    -1,   184,   245,   234,   245,    -1,   185,    -1,
     186,    -1,   187,    -1,   188,    -1,   189,    -1,   190,    -1,
     191,    -1,   192,    -1,   193,    -1,   194,    -1,   195,    -1,
     196,    -1,   197,    -1,   198,    -1,   199,    -1,   200,    -1,
     201,    -1,   202,    -1,    61,   245,    -1,    58,   245,    -1,
      62,   235,   261,   236,    -1,    64,   235,   261,   236,    -1,
      63,   235,   261,   236,    -1,   105,    -1,   106,    -1,   107,
      -1,   105,   235,   245,   236,    -1,   129,    -1,   148,   245,
      -1,   115,   235,   245,   236,    -1,   116,   235,   245,   236,
      -1,   117,   235,   245,   236,    -1,   118,   235,   245,   236,
      -1,   119,   235,   245,   236,    -1,   120,   235,   245,   236,
      -1,   121,   235,   245,   236,    -1,   122,   235,   245,   236,
      -1,   124,   235,   245,   236,    -1,   112,   235,   245,   236,
      -1,   123,   235,   245,   236,    -1,   125,   235,   245,   236,
      -1,   126,   235,   245,   236,    -1,   127,   235,   245,   236,
      -1,   132,   235,   261,   236,    -1,   138,   235,   261,   236,
      -1,   134,   235,   261,   234,   261,   236,    -1,   134,   235,
     261,   234,   261,   234,   245,   236,    -1,   128,   235,   261,
     236,    -1,     7,    -1,     7,   235,   245,   236,    -1,     7,
     235,   245,   234,   245,   236,    -1,    10,     7,    -1,    10,
     235,   245,   236,     7,    -1,     8,    -1,     8,   235,   245,
     236,    -1,     8,   235,   245,   234,   245,   236,    -1,    10,
       8,    -1,    10,   235,   245,   236,     8,    -1,   246,    -1,
     247,    -1,     9,    -1,     9,   235,   245,   236,    -1,     9,
     235,   245,   234,   245,   236,    -1,    10,   235,   245,   236,
       9,    -1,   248,    -1,   249,    -1,   250,    -1,   250,   234,
     251,    -1,     7,    -1,     8,    -1,     9,    -1,   252,    -1,
     252,   234,   253,    -1,     7,   235,   245,   236,    -1,     7,
     235,   245,   234,   245,   236,    -1,     8,   235,   245,   236,
      -1,     8,   235,   245,   234,   245,   236,    -1,     9,   235,
     245,   236,    -1,     9,   235,   245,   234,   245,   236,    -1,
      10,   235,   245,   234,     8,   236,    -1,   254,    -1,   254,
     234,   255,    -1,    10,    -1,    10,   235,   245,   236,    -1,
     100,     8,    19,   259,    96,    -1,    97,   250,    -1,   258,
      19,    -1,   258,    19,   259,    -1,     6,    -1,   260,    -1,
     249,    -1,   261,    32,   261,    -1,   261,    24,   261,    -1,
     261,    27,   261,    -1,   261,    26,   261,    -1,   261,    25,
     261,    -1,   261,    30,   261,    -1,   261,    31,   261,    -1,
      67,   245,    -1,    18,   235,   263,   236,    -1,   216,    -1,
     208,   235,   245,   236,    -1,   144,    -1,   139,   235,   245,
     236,    -1,   139,    36,   235,   245,   236,    -1,   141,   235,
     245,   234,   261,   236,    -1,   133,   235,   245,   236,    -1,
     135,   235,   261,   234,   245,   236,    -1,   136,   235,   261,
     234,   245,   234,   245,   236,    -1,   137,   235,   261,   234,
     245,   236,    -1,   245,    -1,   261,    -1,    -1,   262,    -1,
     262,   234,   263,    -1,   248,    24,   245,    -1,   249,    24,
     261,    -1,   256,    24,   262,    -1,   256,   250,    24,   262,
      -1,   264,    -1,   264,   234,   265,    -1,   265,    -1,    99,
     265,    -1,    98,   265,    -1,   248,    38,   245,    -1,   248,
      39,   245,    -1,   248,    40,   245,    -1,   248,    41,   245,
      -1,   248,    42,   245,    -1,   248,    43,   245,    -1,   248,
      44,   245,    -1,   261,    -1,   245,    -1,   234,    -1,    36,
      -1,    37,    -1,   211,   235,   245,   236,    -1,    21,    -1,
     267,    -1,   267,   268,    -1,   250,    -1,   269,    -1,   269,
     234,   270,    -1,    -1,   250,    -1,    51,   250,    -1,   271,
      -1,   271,   234,   272,    -1,    -1,   250,    -1,   273,    -1,
     273,   234,   274,    -1,    86,   263,   242,    19,    -1,   275,
      -1,   275,   276,    -1,    11,   235,   272,   236,    19,   241,
      50,    -1,    12,   235,   274,   236,    19,   241,    49,    -1,
      14,   235,   274,   236,    19,   241,    49,    -1,    13,   235,
     274,   236,    19,   241,    49,    -1
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
     245,   246,   247,   248,   249,   250,   251,   255,   256,   257,
     258,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   289,   290,   292,
     293,   294,   296,   298,   299,   301,   302,   303,   305,   306,
     307,   308,   310,   311,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   356,   357,   358,   359,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   378,   379,   380,   381,   382,   386,   387,   388,
     389,   390,   394,   395,   396,   397,   398,   402,   403,   407,
     408,   409,   410,   414,   415,   419,   420,   424,   425,   426,
     430,   431,   435,   436,   437,   438,   439,   440,   441,   445,
     446,   450,   451,   455,   459,   463,   464,   468,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   482,   484,   486,
     487,   489,   490,   491,   492,   493,   494,   495,   496,   500,
     501,   505,   506,   507,   511,   512,   513,   514,   518,   519,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     536,   537,   538,   539,   540,   541,   542,   546,   547,   551,
     555,   556,   560,   561,   562,   566,   567,   571,   572,   576,
     577,   581,   585,   586,   589,   590,   591,   592
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
  "COLOUREXP", "FLIP", "GRAPHICS", "FILL", "SHADED", "LINE", "PLOT",
  "POINT_", "RECTANGLE", "RECTANGLEFILL", "TRIANGLE", "TRIANGLEFILL",
  "TRIANGLESHADED", "CLIPON", "CLIPOFF", "CIRCLE", "CIRCLEFILL", "TEXT",
  "TEXTRIGHT", "TEXTCENTRE", "LOADTYPEFACE", "CREATEFONT", "MONO15",
  "MONO20", "MONO25", "MONO30", "MONO35", "MONO40", "MONO50", "MONO75",
  "MONO100", "PROP15", "PROP20", "PROP25", "PROP30", "PROP35", "PROP40",
  "PROP50", "PROP75", "PROP100", "SCREENWIDTH", "SCREENHEIGHT", "SHOWFPS",
  "LASTPOS", "INKEY", "INKEYS", "INPUT_", "PRINT", "SPC", "SINKEY",
  "SINKEYS", "INPUT_NOQUESTIONMARK", "GET", "GETS", "GET_S", "GETS_S",
  "MOUSE", "CREATEVERTEX", "CREATETRIANGLE", "CREATESHAPE", "CREATEOBJECT",
  "TRANSLATE", "ROTATE", "SCALE", "RENDERFRAME", "DELETEOBJECT", "SOLID",
  "WIREFRAME", "FILLEDWIREFRAME", "INTEGERDIVIDE", "NEG", "','", "'('",
  "')'", "$accept", "daric", "lines", "line", "embed_lines", "statements",
  "statement", "number", "expression_numeric", "variable_integer",
  "variable_real", "variable_numeric", "variable_string", "variable",
  "variable_list", "plain_variable", "plain_variable_list", "dim_variable",
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
     485,   486,   487,   488,    44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   237,   238,   239,   239,   240,   240,   240,   241,   241,
     242,   242,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   244,   244,   244,
     244,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   246,   246,   246,
     246,   246,   247,   247,   247,   247,   247,   248,   248,   249,
     249,   249,   249,   250,   250,   251,   251,   252,   252,   252,
     253,   253,   254,   254,   254,   254,   254,   254,   254,   255,
     255,   256,   256,   257,   258,   259,   259,   260,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   262,
     262,   263,   263,   263,   264,   264,   264,   264,   265,   265,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     267,   267,   267,   267,   267,   267,   267,   268,   268,   269,
     270,   270,   271,   271,   271,   272,   272,   273,   273,   274,
     274,   275,   276,   276,   277,   277,   277,   277
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
       1,     1,     6,     7,     8,     8,     9,    12,    13,    19,
       4,     8,     1,     8,     8,     8,     1,     1,     2,     1,
       2,     1,     1,     1,     3,     4,     4,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     4,     8,
       8,     8,     2,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     4,    18,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     8,     6,     1,     1,     2,     4,     1,
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
       3,     4,     1,     2,     7,     7,     7,     7
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   237,   242,   249,   271,     0,     0,     0,     0,
      19,     0,     0,     0,     6,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   301,     0,
      26,     0,     0,     0,     0,    18,    29,    30,    31,     0,
       0,     0,   104,     0,     0,   111,   110,     0,     0,     0,
       0,     0,   122,     0,     0,     0,     0,   126,     0,     0,
       0,    95,    49,    50,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     2,     3,     0,    10,   247,   248,     0,
       0,     0,    14,   308,   310,    12,    13,     0,     0,     0,
       0,   240,   245,     0,   332,   337,   337,   337,   301,   301,
     301,   301,     0,     0,     0,   127,   129,   277,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,   166,   165,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   167,   291,     0,   174,   175,   176,
     177,   178,   179,   180,   181,     0,   170,     0,     0,     0,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   185,   186,
     182,     0,     0,   163,   289,     0,     0,   168,   169,   171,
       0,   131,   299,   132,   133,   279,   278,   300,    28,     0,
      35,     0,    37,     0,     0,     0,     0,     0,     0,    41,
      42,     0,     0,     0,     0,   302,    24,   253,   254,   255,
      25,     0,     0,     0,     0,   269,    32,     0,   312,   249,
       0,   311,     0,     0,    40,    15,   257,   258,   259,   260,
      17,   105,   107,     0,     0,     0,     0,     0,     0,   170,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     329,   330,    43,   326,   323,   324,     0,   322,   321,   320,
     327,    96,     0,     0,     0,     0,     0,     0,   103,     1,
       4,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     0,
       0,     0,   333,   335,     0,   338,   339,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   301,
     301,   301,   128,   130,   137,   138,   208,   207,     0,     0,
       0,   162,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,     0,     0,   187,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,    10,     8,     0,    60,     0,   301,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
       0,     0,   328,     0,     0,     0,     0,     0,     0,    11,
     304,   313,   314,   315,   316,   317,   318,   319,   305,   306,
       0,   309,     0,   238,     0,   243,     0,     0,   250,   272,
     334,   332,     0,   337,     0,     0,     0,    20,    21,    22,
      23,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   134,
     143,   148,   151,   150,   149,   146,   147,   152,   153,   139,
     140,   141,   142,   144,   145,   154,   155,   156,   281,   284,
     283,   282,   285,   286,   280,     0,    34,   148,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,     9,     0,     0,   303,   256,     0,     0,
       0,     0,   270,     0,     0,     0,     0,     0,    16,   261,
       0,     0,   109,     0,   120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    48,    45,   331,
       0,     0,     0,     0,     0,     0,   102,   307,     0,     0,
       0,     0,   241,   246,   252,   336,     0,   340,     0,     0,
       0,     0,   157,   158,   288,   209,   211,   210,     0,     0,
       0,   215,   135,   136,   227,   218,   219,   220,   221,   222,
     223,   224,   225,   228,   226,   229,   230,   231,   236,   232,
     295,     0,     0,     0,     0,   233,     0,   292,     0,     0,
       0,   188,   164,   290,   172,     0,     0,   301,   342,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,     0,    52,    59,    61,     0,   262,     0,
     264,     0,   266,     0,     0,   274,   275,   273,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   325,     0,     0,     0,     0,     0,   239,
     244,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   293,     0,     0,     0,     0,     0,
     343,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,    56,     0,     0,     0,
       0,     0,   276,   106,   108,     0,     0,     0,     0,     0,
       0,     0,     0,   112,     0,     0,     0,    46,     0,     0,
       0,     0,     0,   344,   345,   347,   346,     0,     0,     0,
       0,   234,   296,     0,   298,   294,     0,   184,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     263,   265,   267,   268,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,   341,
       0,     0,     0,    79,     0,    69,     0,     0,    80,     0,
      68,     0,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,     0,   114,     0,
     115,     0,     0,     0,   121,   123,   124,   125,     0,     0,
     100,   101,   160,   159,   161,   235,   297,   183,     0,    94,
      77,     0,     0,    66,    78,     0,     0,    65,    67,     0,
       0,    87,     0,    75,     0,     0,    88,     0,    74,     0,
      76,    58,    39,   116,     0,     0,     0,     0,     0,     0,
       0,    83,     0,    84,    85,     0,     0,    72,    86,     0,
       0,    71,    73,     0,     0,     0,     0,     0,     0,    81,
      82,     0,    91,     0,    92,     0,     0,     0,     0,     0,
       0,    89,    90,     0,     0,   117,     0,     0,     0,   118,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   173,   119
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    72,    73,   423,   424,    75,    76,   201,   202,   203,
     204,    79,    80,   270,   230,   249,   250,   235,   236,    81,
      82,   605,   606,   206,   207,   225,   226,    83,    84,    85,
     280,   281,   271,   272,   313,   314,   316,   317,   698,   699,
      86
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -363
static const yytype_int16 yypact[] =
{
    3726,  7104,  -215,  -200,  -188,    -1,  -182,  -157,  -153,  -125,
    -115,   -95,   -91,   -86,  -363,   158,  2656,  3497,  3497,  3497,
    3497,  2656,    58,   166,   167,  2656,     0,  2656,  2656,   223,
    -363,   305,   314,   117,   154,  -363,  -363,  -363,  -363,   495,
     495,   341,  -363,  3497,  3497,  -363,  3497,  3497,  3497,  2885,
    3089,  3497,  -363,  3293,  3497,  3497,  3497,  -363,   -57,   -34,
     263,  2424,  -363,  -363,   195,   200,   215,  3497,  3497,  3497,
    -363,  3497,   240,  -363,  3726,   225,   229,  -363,  -363,   364,
     228,   219,  -363,    19,  -363,  -363,  -363,   239,  3497,  3497,
    1982,  -363,  -363,  3497,   121,   223,   223,   223,  2656,  2656,
    2656,  2656,    25,    30,    34,  -363,  -363,  -363,    49,     1,
      55,    56,    65,   291,  3497,  3497,    67,    74,   116,  3497,
    3497,   123,   124,  -363,  -363,   149,   152,   175,   176,   181,
     184,   187,   196,   224,   227,   233,   234,   236,   237,   238,
     243,   248,  -363,  -363,  -363,   252,   253,   264,   265,   267,
     268,   271,   -15,   272,  -363,  -363,  3497,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,   273,  -363,   275,   495,  3497,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,   277,   279,  -363,  -363,   287,  3497,  -363,  -363,  -363,
    3497,  -363, 10155,  -363,  -363,  -363,  -363,   581,  -363,     3,
   10155,  7524, 10155, 10195,   285,    62,    80,   297,   391,  -363,
    -363,  5680,  3726,  2656,   307,   118,  -363,  -363,  -363,   155,
    -363,   280,   281,   282,   283,   292,  -363,   406,  -363,   284,
     305,  -363,   439,   286,   581,    31,  -363,  -363,  -363,   294,
    -363,  7599,  7649,  7662,  7675,  7691,  3497,  7816,  3497,  3497,
    7829,  7842,  3497,  7887,  7979,  7992,  8014,  3497,  3497,    33,
    -363,   295,  -363,  -363,  -363,  -363,   298,  -363, 10155,   581,
    2424,  -363,   296,   300,   301,  8054,  8084,  8119, 10155,  -363,
    -363,  -363,  7104,  3497,  3497,  3497,  3497,  3497,  3497,  3497,
    3497,   495,  2656,   508,   314,  -363,   161,  1049,   513,  1114,
     900,   223,  -363,   304,   303,  -363,   306,   313,   332,   334,
     335,   336,   338,   342,   309,   455,   541,  3497,  3497,  2656,
    2656,  2656,  -363,  -363,  -363,  -363, 10155, 10155,   495,   495,
     495, 10155, 10155,   434,  3497,  3497,  3497,  3497,  3497,  3497,
    3497,  3497,  3497,  3497,  3497,  3497,  3497,  3497,  3497,  3497,
    3497,   495,   495,  3497,   495,   495,   495,   495,   495,   308,
    3497,  3497,   554,  3497,  3497,   581,  8146,  3497,  3497,   359,
    8159,  1221,  3497,  3497,  3497,  3497,  3497,  3497,  3497,  3497,
    3497,  3497,  3497,  3497,  3497,  3497,  3497,  3497,  3497,  3497,
     495,   495,   495,   495,   495,   495,   495,  3497,  3497,  3497,
     575,  3497,   588,  3497,   591,   587,    81,   127,   514,  3726,
    5858,  -363,     5,  3726,   518,  -363,  3726,  2656,   223,  3497,
    3497,  3497,  3497,   305,  2191,  -363,   512,  3497,   341,   341,
    3497,  3497,  3497,  3497,  3497,  8211,  3497,  8251,  8303,  3497,
    3497,  8316,  3497,  3497,  3497,  3497,  1508,  1743,   223,  -363,
     223,  3497,  -363,   603,  3497,  3497,  3497,  3497,  3497,  -363,
   10155, 10155, 10155, 10155, 10155, 10155, 10155, 10155,   581,  -363,
    2656,  -363,  3497,  -363,  3497,  -363,   547,  3497,  -363,   445,
    -363,   121,   597,   223,   598,   600,   601,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  1787,   385,   387,   388,    82,   111,
     150,   392,   394,   398,  1803,  1912,  1928,  3732,  3887,  4109,
    4331,  4553,  4775,  4997,  5219,  5441,  5601,  5765,  5779,  5943,
    5957,   173,   182,  6121,    91,   129,   521,   534,   192,  3497,
    6135,  8343,  8378,  8408,  3497,  6299,  6313,   616,  3497,  -363,
   10155,   462,   462,   462,   462,   554,   554,   462,   462,   411,
     411,   135,   135,   135,   135,   664,   556,   556,   606,   606,
     606,   606,   606,   606,  -363,  6477, 10155,  1152,   549,   712,
     405,  1174,   407,   408,  3497,   634,  3497,   636,   637,     9,
    3726,   577,  7104,  -363,  2656,   572,  -363,  -363,  1494,  1561,
    1730,  8443,  -363,   624,   223,   630,   555,  6491,  -363,  -363,
    8470,  8483, 10155,  8535, 10155,  3497,  8575,  3497,  3497,  8627,
    8640,  3497,  8667,  8702,  8732,  8767,  -363,  -363,  -363,  -363,
    6655,   416,  6669,  6833,  8794,  8807, 10155,  -363,  6847,  7011,
     417,  7025,  -363,  -363,  -363,  -363,  3726,  -363,  3726,  3726,
    3726,   445,  -363,  -363,  -363,  -363,  -363,  -363,   418,   420,
     421,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,   495,  3497,  3497,  3497,  -363,  7188,  -363,   495,  3497,
    3497, 10155,  -363,  -363,  -363,  8859,    16,  2656,   549,   -11,
    3497,   422,  3497,   423,   424,  1977,   426,  2880,   427,   428,
     645,  -363,   247,  7104,  -363,  -363,  -363,  3497,  -363,  3497,
    -363,  3497,  -363,   660,   585,  -363,   512,  -363,   662,  3497,
    3497,  3497,  8899,  3497,  8951,  8964,  3497,  3497,  8991,  3497,
    3497,  3497,  3497,  -363,   667,   441,   442,  3497,  3497,  -363,
    -363,   495,  -363,   627,   629,   631,   635,   471,   472,   473,
      69,  7202,  9026,  7264,  -363,   230,  9056,  7327,  3497,  7104,
    -363,  -363,  7104,  3948,  6036,  4170,  6214,  6392,  3497,   443,
    3497,   474,   479,  3726,   689,  -363,  -363,  7340,  7356,  7369,
     481,   483,  -363, 10155, 10155,  9091,  3497,  9118,  3497,  3497,
    9131,  9183,  3497, 10155,  9223,  9275,  9288,  -363,  3497,  3497,
    9315,  9350,   262,  -363,  -363,  -363,  -363,    44,    44,    44,
    3497,  -363,  -363,  3497,  -363,  -363,  3497,  -363,  9380,   690,
     702,  3726,  3497,   648,  3726,   649,  3726,  3497,   650,  3726,
     654,  3726,   670,  4392,  6570,  4614,  6748,  6926,   677,  3726,
    -363,  -363,  -363,  -363,   495,  3497,  9415,  3497,  9442,  9455,
    3497,  3497, 10155,   495,   495,   495,  9507,  9547,  3497,  3497,
    -363,    87,   517,   520,   522,  7432,  7494,  7507,  3497,  -363,
     679,   676,  4836,  -363,   681,  -363,   682,  5058,  -363,   691,
    -363,   692,  -363,  3726,  3497,   694,  3726,   695,  3726,  3497,
     696,  3726,   697,  3726,   698,  -363,   685,   450, 10155,  3497,
   10155,  3497,  3497,  9599, 10155,   581,   581,   581,  3497,  3497,
   10155, 10155,  -363,  -363,  -363,  -363,  -363,  -363,  9612,  -363,
    -363,  3726,   705,  -363,  -363,  3726,   706,  -363,  -363,   708,
    5280,  -363,   709,  -363,   710,  5502,  -363,   716,  -363,   717,
    -363,  -363,  -363, 10155,  9639,  9674,  3497,  9704,  9739,  3497,
     719,  -363,   720,  -363,  -363,  3726,   721,  -363,  -363,  3726,
     722,  -363,  -363,  3497,  3497,  9766,  3497,  3497,  9779,  -363,
    -363,   723,  -363,   724,  -363,  9831,  9871,  3497,  9923,  9936,
    3497,  -363,  -363,  3497,  3497, 10155,  3497,  3497,  9963, 10155,
    9998, 10155, 10155,  3497,  3497, 10028, 10063,  3497,  3497, 10090,
   10103,  3497,  3497, 10155, 10155
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -363,  -363,   693,    45,   199,   172,  -209,  -362,   -17,   460,
     733,    51,  1381,    -7,   352,  -363,  -305,  -363,  -212,  -363,
    -363,  -363,    64,  -363,  1050,    43,   -83,  -363,   -19,  -363,
    -363,   524,  -363,  -223,  -363,   317,  -363,   -92,  -363,   107,
    -363
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -37
static const yytype_int16 yytable[] =
{
     210,   211,   212,   213,   318,   319,    91,    92,    91,    92,
      91,    92,   422,   238,   241,   320,   321,   322,   323,   222,
      88,   369,   229,   642,   643,   292,   251,   252,   435,   253,
     254,   255,   257,   260,   261,    89,   263,   264,   265,   266,
       2,     3,   108,   109,   278,    74,   459,    90,   105,   106,
     285,   286,   287,    94,   288,   400,   401,   402,   403,   208,
     771,   404,   405,   406,   214,   215,   216,   217,   221,   772,
     224,   306,   307,   309,   303,   592,   310,   871,    95,   710,
     227,   711,    96,   237,   237,   223,   411,   312,   315,   315,
     315,   332,   333,   400,   401,   402,   403,   336,   337,   404,
     405,   406,   341,   342,   413,   584,   400,   401,   402,   403,
      97,   227,   404,   405,   406,   400,   401,   402,   403,    74,
      98,   404,   405,   406,     2,     3,   239,     5,     2,     3,
     108,   109,   227,   608,   609,   400,   401,   402,   403,   372,
      99,   404,   405,   406,   100,   227,   227,   227,   227,   101,
     412,   586,   376,   400,   401,   402,   403,   218,   382,   404,
     405,   406,   242,   387,   388,   102,   103,   104,   414,   585,
     219,   220,   311,    87,   400,   401,   402,   403,   267,   380,
     404,   405,   406,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   400,   401,   402,
     403,   268,   282,   404,   405,   406,   400,   401,   402,   403,
     283,   240,   404,   405,   406,   587,   400,   401,   402,   403,
     370,   602,   404,   405,   406,   284,     2,     3,   108,   109,
       2,     3,   108,   109,    93,   628,   328,   629,   407,   445,
     289,   447,   448,   302,   291,   451,   505,   506,   507,   292,
     456,   457,   301,   304,   400,   401,   402,   403,   305,   324,
     404,   405,   406,   278,   325,   438,   425,   458,   326,   269,
       2,     3,   108,   109,   395,   396,   470,   471,   472,   473,
     474,   475,   476,   477,   327,   481,   400,   401,   402,   403,
     329,   330,   404,   405,   406,   332,   333,   379,     2,     3,
     331,   209,   338,   820,   490,   821,   397,   398,   399,   339,
     309,   504,   231,   232,   233,   234,   501,   784,   655,   785,
     227,     2,     3,   108,     5,   681,   426,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   596,   479,   533,   656,   246,   247,
     248,   340,   427,   540,   541,   237,   542,   543,   343,   344,
     545,   546,   227,   682,   410,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   714,   345,   415,   657,   346,   293,   428,
     575,   576,   577,   421,   579,   482,   581,   483,   416,   417,
     418,   647,   294,   295,   296,   297,   298,   299,   300,   678,
     347,   348,   598,   599,   600,   601,   349,   309,   679,   350,
     607,   229,   351,   610,   611,   612,   613,   614,   685,   616,
     293,   352,   619,   620,   382,   622,   623,   624,   625,   387,
     388,   511,   512,   513,   630,   393,   394,   632,   633,   634,
     635,   636,   642,   643,   644,   872,   873,   874,   436,   353,
      77,    77,   354,   502,   469,   638,   825,   639,   355,   356,
     641,   357,   358,   359,   400,   401,   402,   403,   360,   227,
     404,   405,   406,   361,   312,   382,   315,   362,   363,    77,
     387,   388,    77,    77,   391,   392,   393,   394,   870,   364,
     365,   107,   366,   367,   108,   243,   368,   371,   373,   227,
     374,   227,   377,   112,   378,   429,   430,   431,   432,   434,
      77,   437,   686,   637,   395,   396,   433,   691,   439,   460,
     463,   695,   480,   461,    77,   464,   465,   486,   491,   492,
     493,    77,   227,   539,   227,   400,   401,   402,   403,   494,
     503,   404,   405,   406,    77,    77,    77,    77,   400,   401,
     402,   403,   120,   830,   404,   405,   406,   705,   495,   707,
     496,   497,   498,   334,   499,   395,   396,   382,   500,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   591,   547,   578,   580,   583,   725,   732,   582,
     734,   735,   588,   594,   738,   400,   401,   402,   403,   604,
     631,   404,   405,   406,   769,   640,   646,   648,   589,   649,
     650,   652,   593,   653,   654,   595,   694,   658,   146,   659,
     148,   149,   150,   660,   152,   697,   153,   715,   406,   155,
     701,   706,   703,   704,   708,   716,   709,   713,   724,   726,
     744,   727,   751,   791,   757,   227,   758,   759,   774,   776,
     777,   779,   781,   782,   783,   761,   762,   763,   790,   395,
     396,   644,   766,   767,   807,   808,   809,   813,   814,   844,
     815,    77,    77,   773,   816,   775,   952,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     787,   397,   788,   192,   789,   817,   818,   819,   849,   879,
     846,   194,   793,   794,   795,   847,   797,   853,   854,   800,
     801,   880,   803,   804,   805,   806,   883,   885,   888,    77,
     810,   811,   890,    78,    78,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   892,   905,
     929,   828,    77,   922,   930,   683,   923,   951,   924,   933,
     934,   843,    78,   845,    77,    78,    78,   290,   684,   937,
     938,    77,   941,   943,   946,   948,   950,   395,   396,   856,
     597,   858,   859,   961,   963,   862,   964,   967,   968,   712,
     792,   866,   867,    78,   971,   972,   700,   979,   980,   982,
     984,   991,   992,   875,   462,   770,   876,    78,   645,   877,
       0,     0,     0,     0,    78,   882,     0,     0,     0,     0,
     887,     0,     0,     0,     0,   395,   396,    78,    78,    78,
      78,     0,     0,     0,     0,     0,     0,     0,   908,     0,
     910,     0,     0,   913,   914,   753,   335,   754,   755,   756,
       0,   920,   921,     0,     0,     0,     0,   397,   398,   399,
       0,   928,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   940,     0,    77,
      77,     0,   945,    77,     0,   786,    77,     0,    77,     0,
       0,     0,   953,     0,   954,   955,     0,     0,     0,     0,
       0,   957,   958,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
      77,     0,     0,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,     0,   975,
       0,   829,   978,     0,     0,   833,   835,   838,   840,   842,
       0,    77,     0,    77,    78,    78,   985,   986,     0,   988,
     989,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     995,     0,     0,   998,     0,     0,   999,  1000,     0,  1001,
    1002,     0,   848,     0,     0,     0,  1005,  1006,     0,     0,
    1009,  1010,     0,     0,  1013,  1014,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   395,   396,   895,   897,   900,   902,   904,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
     881,     0,     0,   884,     0,   886,     0,    78,   889,     0,
     891,     0,     0,     0,    78,   397,   398,   399,   906,     0,
      77,     0,    77,     0,   932,     0,     0,     0,     0,   936,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,     0,     0,   244,
     245,     0,   939,     0,     0,   942,     0,   944,     0,     0,
     947,     0,   949,     0,     0,     0,    77,     0,    77,    77,
      77,   279,   966,     0,     0,     0,     0,   970,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     960,     0,     0,     0,   962,     0,   489,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,     0,    78,    78,     0,     0,    78,     0,     0,    78,
       0,    78,   395,   396,   981,     0,     0,     0,   983,     0,
       0,   -36,   -36,    77,     0,   382,     0,     0,     0,     0,
     387,   388,     0,     0,   391,   392,   393,   394,     0,     0,
       0,    78,     0,    78,   397,   398,   399,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,     0,     0,     0,     0,     0,     0,     0,   375,     0,
       0,     0,   -36,     0,    78,     0,    78,   395,   396,    77,
     -36,     0,    77,    77,    77,    77,    77,    77,     0,     0,
       0,     0,     0,    77,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,   702,   397,
     398,   399,     0,     0,     0,   395,   396,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   484,     0,   485,     0,   395,   396,     0,
       0,    77,     0,     0,    77,     0,    77,     0,     0,    77,
       0,    77,     0,    77,    77,    77,    77,    77,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   397,
     398,   399,     0,    78,     0,    78,     0,     0,     0,     0,
     279,     0,     0,     0,   395,   396,     0,    78,     0,     0,
       0,     0,    77,     0,     0,     0,     0,    77,   487,     0,
     488,   478,     0,    77,     0,     0,    77,     0,    77,     0,
       0,    77,     0,    77,     0,     0,   397,   398,   399,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,    78,    78,    78,     0,     0,     0,     0,   508,   509,
     510,    77,     0,     0,     0,    77,     0,   205,     0,     0,
      77,     0,   205,     0,     0,    77,   205,     0,   205,   205,
     228,   531,   532,     0,   534,   535,   536,   537,   538,     0,
     205,   205,     0,     0,     0,    77,     0,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   228,   205,     0,     0,     0,    78,     0,     0,     0,
     568,   569,   570,   571,   572,   573,   574,   549,     0,     0,
       0,     0,   228,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   228,   228,   228,   228,   205,
     205,   205,   205,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,    78,    78,    78,    78,    78,
      78,     0,     0,     0,     0,     0,    78,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,     0,     0,     0,   205,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,    78,     0,    78,
       0,     0,    78,     0,    78,     0,    78,    78,    78,    78,
      78,     0,    78,     0,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,     0,     0,
       0,     0,     0,     0,   205,     0,     0,   395,   396,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
      78,   395,   396,     0,     0,     0,    78,     0,     0,    78,
       0,    78,     0,     0,    78,     0,    78,     0,     0,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
     228,     0,     0,   397,   398,   399,     0,     0,     0,     0,
       0,   205,     0,     0,    78,     0,     0,     0,    78,     0,
       0,     0,     0,    78,   395,   396,     0,     0,    78,     0,
       0,     0,   205,   205,     0,     0,     0,     0,     0,     0,
       0,     0,   228,     0,     0,     0,     0,     0,    78,     0,
       0,     0,    78,     0,     0,     0,   397,   398,   399,     0,
     205,   205,   205,     0,     0,     0,     0,     0,     0,   205,
     205,   205,     0,     0,     0,     0,     0,     0,   717,     0,
     718,   760,     0,     0,     0,     0,     0,     0,   765,     0,
       0,     0,   205,   205,   626,   205,   205,   205,   205,   205,
       0,     0,     0,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,   205,   205,   205,   205,   205,   205,   205,     0,     0,
       0,     0,     0,     0,     0,   719,     0,   720,     0,     0,
       0,   812,     0,     0,     0,     0,     0,     0,   205,   228,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,     0,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   228,
       0,   228,     0,   395,   396,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,   396,     0,     0,
       0,   205,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   228,     0,   228,   397,   398,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   397,   398,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     395,   396,     0,     0,   907,     0,     0,     0,     0,     0,
       0,     0,     0,   915,   916,   917,   395,   396,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   397,   398,   399,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   397,   398,
     399,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   721,     0,   722,     0,     0,     0,
       0,     0,     0,     0,     0,   205,     0,     0,     0,   627,
       0,     0,     0,     0,     0,   228,   105,   106,     0,     2,
       3,     0,   209,     0,     0,     0,     0,     0,   110,   111,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,   113,     0,     0,     0,     0,
       0,     0,     0,   651,     0,   395,   396,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   661,
     114,   395,   396,   115,   116,   117,   118,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   397,   398,   399,
       0,   778,   205,     0,     0,     0,     0,     0,     0,   205,
       0,     0,     0,   397,   398,   399,   121,     0,   205,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   123,   124,
     395,   396,   125,   126,   127,     0,     0,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,     0,   147,     0,     0,     0,
     151,     0,   397,   398,   399,   154,     0,     0,     0,     0,
     156,     0,   205,   157,   158,   159,   160,   161,   162,   163,
     164,     0,     0,   165,     0,     0,     0,     0,   662,   166,
       0,     0,   167,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   663,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,     0,   190,   191,
       0,     0,     0,     0,     0,   105,   106,   193,     2,     3,
       0,   209,     0,     0,   195,   196,     0,   110,   111,     0,
       0,   197,   198,   199,     0,     0,     0,   200,   308,     0,
       0,     0,     0,     0,   113,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   205,     0,     0,     0,     0,
       0,     0,     0,     0,   205,   205,   205,     0,     0,   114,
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
       0,     0,   165,     0,     0,     0,     0,     0,   166,     0,
       0,   167,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,     0,   190,   191,     0,
       0,     0,     0,     0,     0,     0,   193,     0,     0,     0,
       0,     0,     0,   195,   196,     0,     0,     0,     0,     0,
     197,   198,   199,     0,     0,     0,   200,   603,   105,   106,
     107,     2,     3,   108,   109,     0,     0,     0,     0,     0,
     110,   111,   112,     0,     0,   273,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
     274,   275,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,     0,     0,   115,   116,   117,   118,   119,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,   124,     0,     0,   125,   126,   127,     0,     0,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,     0,   153,     0,   154,   155,     0,
       0,     0,   156,     0,     0,   157,   158,   159,   160,   161,
     162,   163,   164,     0,     0,   165,     0,     0,     0,     0,
       0,   166,     0,     0,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,     0,
     190,   191,   192,     0,     0,   276,     0,     0,     0,   193,
     194,     0,     0,     0,     0,     0,   195,   196,     0,     0,
       0,     0,     0,   197,   198,   199,     0,     0,   277,   200,
     105,   106,   107,     2,     3,   108,   109,     0,     0,     0,
       0,     0,   110,   111,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   166,     0,     0,   167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,     0,   190,   191,   192,     0,     0,     0,     0,     0,
       0,   193,   194,     0,     0,     0,     0,     0,   195,   196,
       0,     0,     0,     0,     0,   197,   198,   199,     0,   105,
     106,   200,     2,     3,     0,   209,     0,     0,     0,     0,
       0,   110,   111,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   780,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,   124,   395,   396,   125,   126,   127,     0,     0,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,     0,   147,
       0,     0,     0,   151,     0,   397,   398,   399,   154,     0,
       0,     0,     0,   156,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,     0,     0,   165,     0,     0,     0,
       0,   256,   166,     0,     0,   167,     0,     0,     0,     0,
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
     165,     0,     0,     0,     0,   258,   259,     0,     0,   167,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,     0,   190,   191,   105,   106,     0,
       2,     3,     0,   209,   193,     0,     0,     0,     0,   110,
     111,   195,   196,     0,     0,     0,     0,     0,   197,   198,
     199,     0,     0,     0,   200,     0,   113,     0,     0,     0,
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
     163,   164,     0,     0,   165,     0,     0,     0,     0,   262,
     166,     0,     0,   167,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,     0,   190,
     191,   105,   106,     0,     2,     3,     0,   209,   193,     0,
       0,     0,     0,   110,   111,   195,   196,     0,     0,     0,
       0,     0,   197,   198,   199,     0,     0,     0,   200,     0,
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
       0,     0,     0,     0,   166,     0,     0,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,     0,   190,   191,     0,     0,     0,     0,     0,
       0,     0,   193,     0,     0,     0,     0,     0,     0,   195,
     196,     0,     0,     0,     0,     0,   197,   198,   199,     1,
       0,     0,   200,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,    15,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,    17,    18,    19,     0,     0,     0,
       0,    20,     0,     0,     0,    21,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,     0,    26,     0,     0,
       0,     0,     0,    27,     0,     0,    28,    29,    30,     0,
      31,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   395,   396,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,    40,    41,   397,   398,   399,
       0,     0,     0,     0,     0,    42,     0,    43,    44,     0,
      45,    46,     0,     0,    47,    48,     0,    49,     0,    50,
       0,     0,    51,    52,    53,     0,    54,    55,    56,     0,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,    61,     0,     0,     0,
       0,    62,    63,     0,     0,    64,    65,    66,     0,     0,
      67,    68,    69,    70,    71,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   831,   664,     0,
       0,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,     0,     0,     0,     0,     0,    16,
     395,   396,     0,     0,     0,     0,    17,    18,    19,     0,
       0,     0,     0,    20,     0,     0,     0,    21,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,    26,
     832,     0,   397,   398,   399,    27,     0,     0,    28,    29,
      30,     0,    31,     0,     0,     0,    32,    33,    34,    35,
      36,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,   395,   396,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,   397,   398,   399,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
      44,     0,    45,    46,     0,     0,    47,    48,     0,    49,
       0,    50,     0,   665,    51,    52,    53,     0,    54,    55,
      56,     0,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,    61,     0,
       0,     0,     0,    62,    63,     0,     0,    64,    65,    66,
       0,     0,    67,    68,    69,    70,    71,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   836,
       0,     0,     0,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,    16,   395,   396,     0,     0,     0,     0,    17,    18,
      19,     0,     0,     0,     0,    20,     0,     0,     0,    21,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,    26,   837,     0,   397,   398,   399,    27,     0,     0,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,   395,   396,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,   397,   398,   399,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,     0,    45,    46,     0,     0,    47,    48,
       0,    49,     0,    50,     0,   666,    51,    52,    53,     0,
      54,    55,    56,     0,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
      61,     0,     0,     0,     0,    62,    63,     0,     0,    64,
      65,    66,     0,     0,    67,    68,    69,    70,    71,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   893,     0,     0,     0,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     0,     0,
       0,     0,     0,    16,   395,   396,     0,     0,     0,     0,
      17,    18,    19,     0,     0,     0,     0,    20,     0,     0,
       0,    21,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,    26,   894,     0,   397,   398,   399,    27,
       0,     0,    28,    29,    30,     0,    31,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,   395,   396,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,   397,   398,   399,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,    44,     0,    45,    46,     0,     0,
      47,    48,     0,    49,     0,    50,     0,   667,    51,    52,
      53,     0,    54,    55,    56,     0,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,    61,     0,     0,     0,     0,    62,    63,     0,
       0,    64,    65,    66,     0,     0,    67,    68,    69,    70,
      71,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   898,     0,     0,     0,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    16,   395,   396,     0,     0,
       0,     0,    17,    18,    19,     0,     0,     0,     0,    20,
       0,     0,     0,    21,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,    26,   899,     0,   397,   398,
     399,    27,     0,     0,    28,    29,    30,     0,    31,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,     0,
       0,     0,     0,     0,     0,     0,     0,   395,   396,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,     0,   397,
     398,   399,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,    44,     0,    45,    46,
       0,     0,    47,    48,     0,    49,     0,    50,     0,   668,
      51,    52,    53,     0,    54,    55,    56,     0,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    60,    61,     0,     0,     0,     0,    62,
      63,     0,     0,    64,    65,    66,     0,     0,    67,    68,
      69,    70,    71,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   931,     0,     0,     0,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,    16,   395,   396,
       0,     0,     0,     0,    17,    18,    19,     0,     0,     0,
       0,    20,     0,     0,     0,    21,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,     0,    26,     0,     0,
     397,   398,   399,    27,     0,     0,    28,    29,    30,     0,
      31,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,     0,     0,     0,     0,     0,     0,     0,     0,   395,
     396,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,   397,   398,   399,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,     0,
      45,    46,     0,     0,    47,    48,     0,    49,     0,    50,
       0,   669,    51,    52,    53,     0,    54,    55,    56,     0,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,    61,     0,     0,     0,
       0,    62,    63,     0,     0,    64,    65,    66,     0,     0,
      67,    68,    69,    70,    71,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   935,     0,     0,
       0,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,     0,     0,     0,     0,     0,    16,
     395,   396,     0,     0,     0,     0,    17,    18,    19,     0,
       0,     0,     0,    20,     0,     0,     0,    21,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,    26,
       0,     0,   397,   398,   399,    27,     0,     0,    28,    29,
      30,     0,    31,     0,     0,     0,    32,    33,    34,    35,
      36,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,   395,   396,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,   397,   398,   399,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
      44,     0,    45,    46,     0,     0,    47,    48,     0,    49,
       0,    50,     0,   670,    51,    52,    53,     0,    54,    55,
      56,     0,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,    61,     0,
       0,     0,     0,    62,    63,     0,     0,    64,    65,    66,
       0,     0,    67,    68,    69,    70,    71,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   965,
       0,     0,     0,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,    16,   395,   396,     0,     0,     0,     0,    17,    18,
      19,     0,     0,     0,     0,    20,     0,     0,     0,    21,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,    26,     0,     0,   397,   398,   399,    27,     0,     0,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,   395,   396,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,   397,   398,   399,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,     0,    45,    46,     0,     0,    47,    48,
       0,    49,     0,    50,     0,   671,    51,    52,    53,     0,
      54,    55,    56,     0,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
      61,     0,     0,     0,     0,    62,    63,     0,     0,    64,
      65,    66,     0,     0,    67,    68,    69,    70,    71,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   969,     0,     0,     0,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     0,     0,
       0,     0,     0,    16,   395,   396,     0,     0,     0,     0,
      17,    18,    19,     0,     0,     0,     0,    20,     0,     0,
       0,    21,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,    26,     0,     0,   397,   398,   399,    27,
       0,     0,    28,    29,    30,     0,    31,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,   395,   396,     0,     0,     0,
       0,     0,     0,     0,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,   397,   398,   399,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,    44,     0,    45,    46,     0,     0,
      47,    48,     0,    49,     0,    50,     0,   672,    51,    52,
      53,     0,    54,    55,    56,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   419,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,    61,     0,   395,   396,     0,    62,    63,     0,
       0,    64,    65,    66,     0,    15,    67,    68,    69,    70,
      71,    16,     0,     0,     0,     0,     0,     0,    17,    18,
      19,     0,     0,     0,     0,    20,   397,   398,   399,    21,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,    26,     0,   420,     0,     0,     0,    27,     0,     0,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,     0,     0,     0,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,     0,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,   673,     0,    42,
       0,    43,    44,     0,    45,    46,     0,     0,    47,    48,
       0,    49,     0,    50,     0,     0,    51,    52,    53,     0,
      54,    55,    56,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   590,   395,   396,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
      61,     0,   395,   396,     0,    62,    63,     0,     0,    64,
      65,    66,     0,    15,    67,    68,    69,    70,    71,    16,
     397,   398,   399,     0,     0,     0,    17,    18,    19,     0,
       0,     0,     0,    20,   397,   398,   399,    21,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,    26,
       0,     0,     0,     0,     0,    27,     0,     0,    28,    29,
      30,     0,    31,     0,     0,     0,    32,    33,    34,    35,
      36,    37,    38,     0,     0,     0,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,     0,     0,     0,     0,     0,
      39,   674,     0,     0,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,   675,     0,    42,     0,    43,
      44,     0,    45,    46,     0,     0,    47,    48,     0,    49,
       0,    50,     0,     0,    51,    52,    53,     0,    54,    55,
      56,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   834,   395,   396,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,    61,     0,
     395,   396,     0,    62,    63,     0,     0,    64,    65,    66,
       0,    15,    67,    68,    69,    70,    71,    16,   397,   398,
     399,     0,     0,     0,    17,    18,    19,     0,     0,     0,
       0,    20,   397,   398,   399,    21,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,     0,    26,     0,     0,
       0,     0,     0,    27,     0,     0,    28,    29,    30,     0,
      31,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,     0,     0,     0,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,     0,     0,     0,     0,     0,     0,    39,   676,
       0,     0,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,   677,     0,    42,     0,    43,    44,     0,
      45,    46,     0,     0,    47,    48,     0,    49,     0,    50,
       0,     0,    51,    52,    53,     0,    54,    55,    56,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   839,   395,   396,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,    61,     0,   395,   396,
       0,    62,    63,     0,     0,    64,    65,    66,     0,    15,
      67,    68,    69,    70,    71,    16,   397,   398,   399,     0,
       0,     0,    17,    18,    19,     0,     0,     0,     0,    20,
     397,   398,   399,    21,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,    26,     0,     0,     0,     0,
       0,    27,     0,     0,    28,    29,    30,     0,    31,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,     0,
       0,     0,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,     0,     0,     0,     0,     0,    39,   680,     0,     0,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,   687,     0,    42,     0,    43,    44,     0,    45,    46,
       0,     0,    47,    48,     0,    49,     0,    50,     0,     0,
      51,    52,    53,     0,    54,    55,    56,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   841,   395,   396,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    60,    61,     0,   395,   396,     0,    62,
      63,     0,     0,    64,    65,    66,     0,    15,    67,    68,
      69,    70,    71,    16,   397,   398,   399,     0,     0,     0,
      17,    18,    19,     0,     0,     0,     0,    20,   397,   398,
     399,    21,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,    26,     0,     0,     0,     0,     0,    27,
       0,     0,    28,    29,    30,     0,    31,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    38,     0,     0,     0,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,     0,     0,
       0,     0,     0,     0,    39,   692,     0,     0,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,   693,
       0,    42,     0,    43,    44,     0,    45,    46,     0,     0,
      47,    48,     0,    49,     0,    50,     0,     0,    51,    52,
      53,     0,    54,    55,    56,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   896,
     395,   396,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,    61,     0,   395,   396,     0,    62,    63,     0,
       0,    64,    65,    66,     0,    15,    67,    68,    69,    70,
      71,    16,   397,   398,   399,     0,     0,     0,    17,    18,
      19,     0,     0,     0,     0,    20,   397,   398,   399,    21,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,    26,     0,     0,     0,     0,     0,    27,     0,     0,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,     0,     0,     0,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,     0,     0,     0,
       0,     0,    39,   696,     0,     0,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,   728,     0,    42,
       0,    43,    44,     0,    45,    46,     0,     0,    47,    48,
       0,    49,     0,    50,     0,     0,    51,    52,    53,     0,
      54,    55,    56,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   901,   395,   396,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
      61,     0,   395,   396,     0,    62,    63,     0,     0,    64,
      65,    66,     0,    15,    67,    68,    69,    70,    71,    16,
     397,   398,   399,     0,     0,     0,    17,    18,    19,     0,
       0,     0,     0,    20,   397,   398,   399,    21,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,    26,
       0,     0,     0,     0,     0,    27,     0,     0,    28,    29,
      30,     0,    31,     0,     0,     0,    32,    33,    34,    35,
      36,    37,    38,     0,     0,     0,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,     0,     0,     0,     0,     0,
      39,   743,     0,     0,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,   745,     0,    42,     0,    43,
      44,     0,    45,    46,     0,     0,    47,    48,     0,    49,
       0,    50,     0,     0,    51,    52,    53,     0,    54,    55,
      56,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   903,   395,   396,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,    61,     0,
     395,   396,     0,    62,    63,     0,     0,    64,    65,    66,
       0,    15,    67,    68,    69,    70,    71,    16,   397,   398,
     399,     0,     0,     0,    17,    18,    19,     0,     0,     0,
       0,    20,   397,   398,   399,    21,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,     0,    26,     0,     0,
       0,     0,     0,    27,     0,     0,    28,    29,    30,     0,
      31,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,     0,     0,     0,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,     0,     0,     0,     0,     0,     0,    39,   746,
       0,     0,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,   749,     0,    42,     0,    43,    44,     0,
      45,    46,     0,     0,    47,    48,     0,    49,     0,    50,
       0,     0,    51,    52,    53,     0,    54,    55,    56,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,   395,   396,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,    61,     0,   395,   396,
       0,    62,    63,     0,     0,    64,    65,    66,     0,    15,
      67,    68,    69,    70,    71,    16,   397,   398,   399,     0,
       0,     0,    17,    18,    19,     0,     0,     0,     0,    20,
     397,   398,   399,    21,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,    26,     0,     0,     0,     0,
       0,    27,     0,     0,    28,    29,    30,     0,    31,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,     0,
       0,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,     0,     0,     0,     0,    39,   750,     0,     0,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,   752,     0,    42,     0,    43,    44,     0,    45,    46,
       0,     0,    47,    48,     0,    49,     0,    50,     0,     0,
      51,    52,    53,     0,    54,    55,    56,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,   395,   396,     0,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    60,    61,   395,   396,     0,     0,    62,
      63,     0,     0,    64,    65,    66,     0,     0,    67,    68,
      69,    70,    71,   397,   398,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   397,   398,   399,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,   395,   396,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,     0,     0,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   764,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   822,     0,
     395,   396,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   395,   396,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,   395,
     396,     0,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,   395,   396,     0,   397,   398,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     824,   397,   398,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   397,   398,   399,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,   395,   396,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,     0,     0,   827,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   850,   397,   398,   399,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   851,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   852,     0,   395,   396,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     395,   396,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,   395,   396,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   925,   397,
     398,   399,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,   395,   396,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,     0,     0,
     926,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   927,   397,   398,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   408,     0,
       0,     0,   395,   396,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   395,   396,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   395,   396,
       0,     0,     0,     0,   397,   398,   399,     0,     0,     0,
       0,     0,     0,     0,   395,   396,     0,   397,   398,   399,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     397,   398,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   440,     0,     0,   397,   398,   399,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,     0,   441,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   442,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   443,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,   444,     0,     0,     0,   395,
     396,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   395,   396,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   395,   396,     0,     0,     0,
       0,   397,   398,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   397,   398,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   397,   398,   399,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     395,   396,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,   397,   398,   399,     0,     0,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     446,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   449,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   450,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,     0,   395,   396,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   395,   396,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,   452,     0,     0,   397,   398,   399,   395,   396,     0,
       0,     0,     0,     0,     0,     0,     0,   397,   398,   399,
       0,     0,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,     0,     0,   397,
     398,   399,     0,     0,     0,     0,     0,   395,   396,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,   395,   396,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   453,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   454,     0,     0,   397,
     398,   399,   395,   396,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,   455,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   395,
     396,     0,     0,     0,   397,   398,   399,     0,     0,     0,
       0,     0,   395,   396,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,   466,     0,
       0,   397,   398,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   397,   398,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   467,     0,
       0,     0,     0,     0,   395,   396,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,   468,     0,     0,   397,   398,   399,     0,
       0,     0,     0,     0,   395,   396,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
     544,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   548,     0,     0,   397,   398,   399,     0,
       0,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,   395,   396,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   395,
     396,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,   615,     0,     0,   397,   398,
     399,     0,     0,     0,     0,     0,   395,   396,     0,     0,
       0,   397,   398,   399,     0,     0,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,     0,     0,     0,     0,   617,     0,     0,   397,   398,
     399,   395,   396,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,   395,   396,   397,   398,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   618,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     621,     0,     0,   397,   398,   399,   395,   396,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,     0,     0,     0,     0,     0,   688,     0,     0,
       0,     0,     0,   395,   396,     0,     0,     0,   397,   398,
     399,     0,     0,     0,     0,     0,   395,   396,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,   689,     0,     0,   397,   398,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   397,   398,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   690,     0,     0,     0,     0,     0,   395,   396,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,   723,     0,     0,
     397,   398,   399,     0,     0,     0,     0,     0,   395,   396,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,   729,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   730,     0,     0,
     397,   398,   399,     0,     0,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
     395,   396,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   395,   396,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,   731,
       0,     0,   397,   398,   399,     0,     0,     0,     0,     0,
     395,   396,     0,     0,     0,   397,   398,   399,     0,     0,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,     0,     0,     0,     0,   733,
       0,     0,   397,   398,   399,   395,   396,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,   395,   396,   397,   398,   399,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   736,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   737,     0,     0,   397,   398,   399,
     395,   396,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,     0,     0,     0,
       0,   739,     0,     0,     0,     0,     0,   395,   396,     0,
       0,     0,   397,   398,   399,     0,     0,     0,     0,     0,
     395,   396,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,   740,     0,     0,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   741,     0,     0,     0,
       0,     0,   395,   396,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,   742,     0,     0,   397,   398,   399,     0,     0,     0,
       0,     0,   395,   396,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,   747,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   748,     0,     0,   397,   398,   399,     0,     0,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,     0,   395,   396,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   395,   396,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,   768,     0,     0,   397,   398,   399,     0,
       0,     0,     0,     0,   395,   396,     0,     0,     0,   397,
     398,   399,     0,     0,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,     0,     0,
       0,     0,     0,   796,     0,     0,   397,   398,   399,   395,
     396,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,     0,   395,
     396,   397,   398,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   798,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   799,     0,
       0,   397,   398,   399,   395,   396,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,     0,     0,     0,     0,   802,     0,     0,     0,     0,
       0,   395,   396,     0,     0,     0,   397,   398,   399,     0,
       0,     0,     0,     0,   395,   396,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
     823,     0,     0,   397,   398,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   397,   398,   399,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     826,     0,     0,     0,     0,     0,   395,   396,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,   855,     0,     0,   397,   398,
     399,     0,     0,     0,     0,     0,   395,   396,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,   857,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   860,     0,     0,   397,   398,
     399,     0,     0,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,   395,   396,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   395,   396,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,   861,     0,     0,
     397,   398,   399,     0,     0,     0,     0,     0,   395,   396,
       0,     0,     0,   397,   398,   399,     0,     0,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,     0,     0,     0,     0,     0,   863,     0,     0,
     397,   398,   399,   395,   396,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,     0,   395,   396,   397,   398,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   864,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   865,     0,     0,   397,   398,   399,   395,   396,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,     0,     0,     0,     0,   868,
       0,     0,     0,     0,     0,   395,   396,     0,     0,     0,
     397,   398,   399,     0,     0,     0,     0,     0,   395,   396,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,   869,     0,     0,   397,   398,   399,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     397,   398,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   878,     0,     0,     0,     0,     0,
     395,   396,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,   909,
       0,     0,   397,   398,   399,     0,     0,     0,     0,     0,
     395,   396,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,   911,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   912,
       0,     0,   397,   398,   399,     0,     0,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,     0,   395,   396,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   395,   396,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,   918,     0,     0,   397,   398,   399,     0,     0,     0,
       0,     0,   395,   396,     0,     0,     0,   397,   398,   399,
       0,     0,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,     0,     0,     0,
       0,   919,     0,     0,   397,   398,   399,   395,   396,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,   395,   396,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   956,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   959,     0,     0,   397,
     398,   399,   395,   396,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,     0,     0,
       0,     0,     0,   973,     0,     0,     0,     0,     0,   395,
     396,     0,     0,     0,   397,   398,   399,     0,     0,     0,
       0,     0,   395,   396,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,   974,     0,
       0,   397,   398,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   397,   398,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   976,     0,
       0,     0,     0,     0,   395,   396,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,   977,     0,     0,   397,   398,   399,     0,
       0,     0,     0,     0,   395,   396,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
     987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   990,     0,     0,   397,   398,   399,     0,
       0,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,   395,   396,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   395,
     396,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,   993,     0,     0,   397,   398,
     399,     0,     0,     0,     0,     0,   395,   396,     0,     0,
       0,   397,   398,   399,     0,     0,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,     0,     0,     0,     0,   994,     0,     0,   397,   398,
     399,   395,   396,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,   395,   396,   397,   398,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   996,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     997,     0,     0,   397,   398,   399,   395,   396,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,     0,     0,     0,     0,     0,  1003,     0,     0,
       0,     0,     0,   395,   396,     0,     0,     0,   397,   398,
     399,     0,     0,     0,     0,     0,   395,   396,   382,   409,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,  1004,     0,     0,   397,   398,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   397,   398,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1007,     0,     0,     0,     0,     0,   395,   396,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1008,     0,     0,
     397,   398,   399,     0,     0,     0,     0,     0,   395,   396,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1011,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1012,     0,     0,
     397,   398,   399
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-363)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      17,    18,    19,    20,    96,    97,     7,     8,     7,     8,
       7,     8,   221,    32,    33,    98,    99,   100,   101,    19,
     235,    36,    29,     7,     8,    20,    43,    44,   240,    46,
      47,    48,    49,    50,    51,   235,    53,    54,    55,    56,
       7,     8,     9,    10,    61,     0,   269,   235,     4,     5,
      67,    68,    69,   235,    71,    24,    25,    26,    27,    16,
      71,    30,    31,    32,    21,     7,     8,     9,    25,    80,
      27,    88,    89,    90,    81,    70,    93,    33,   235,    70,
      29,    72,   235,    32,    33,    85,    24,    94,    95,    96,
      97,     4,     5,    24,    25,    26,    27,   114,   115,    30,
      31,    32,   119,   120,    24,    24,    24,    25,    26,    27,
     235,    60,    30,    31,    32,    24,    25,    26,    27,    74,
     235,    30,    31,    32,     7,     8,     9,    10,     7,     8,
       9,    10,    81,   438,   439,    24,    25,    26,    27,   156,
     235,    30,    31,    32,   235,    94,    95,    96,    97,   235,
      88,    24,   169,    24,    25,    26,    27,    99,    23,    30,
      31,    32,     8,    28,    29,     7,     8,     9,    88,    88,
       4,     4,    51,     1,    24,    25,    26,    27,   235,   196,
      30,    31,    32,   200,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    24,    25,    26,
      27,   235,     7,    30,    31,    32,    24,    25,    26,    27,
      10,    94,    30,    31,    32,    88,    24,    25,    26,    27,
     235,   433,    30,    31,    32,    10,     7,     8,     9,    10,
       7,     8,     9,    10,   235,   458,   235,   460,   235,   256,
       0,   258,   259,    24,    19,   262,   329,   330,   331,    20,
     267,   268,    24,   234,    24,    25,    26,    27,    19,   234,
      30,    31,    32,   280,   234,   234,   223,   234,   234,     6,
       7,     8,     9,    10,   113,   114,   293,   294,   295,   296,
     297,   298,   299,   300,   235,   304,    24,    25,    26,    27,
     235,   235,    30,    31,    32,     4,     5,    10,     7,     8,
     235,    10,   235,   234,   311,   236,   145,   146,   147,   235,
     327,   328,     7,     8,     9,    10,     7,    70,   236,    72,
     269,     7,     8,     9,    10,   234,    19,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   427,   302,   363,   236,     7,     8,
       9,   235,   234,   370,   371,   304,   373,   374,   235,   235,
     377,   378,   311,   234,    79,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   592,   235,    88,   236,   235,    24,   234,
     407,   408,   409,   221,   411,   234,   413,   236,     7,     8,
       9,   493,    38,    39,    40,    41,    42,    43,    44,   236,
     235,   235,   429,   430,   431,   432,   235,   434,   236,   235,
     437,   428,   235,   440,   441,   442,   443,   444,   236,   446,
      24,   235,   449,   450,    23,   452,   453,   454,   455,    28,
      29,     7,     8,     9,   461,    34,    35,   464,   465,   466,
     467,   468,     7,     8,     9,   817,   818,   819,    19,   235,
       0,     1,   235,     8,   292,   482,   236,   484,   235,   235,
     487,   235,   235,   235,    24,    25,    26,    27,   235,   428,
      30,    31,    32,   235,   491,    23,   493,   235,   235,    29,
      28,    29,    32,    33,    32,    33,    34,    35,   236,   235,
     235,     6,   235,   235,     9,    10,   235,   235,   235,   458,
     235,   460,   235,    18,   235,   235,   235,   235,   235,   235,
      60,   235,   539,   480,   113,   114,   234,   544,   234,   234,
     234,   548,    24,   235,    74,   235,   235,    24,   234,   236,
     234,    81,   491,   235,   493,    24,    25,    26,    27,   236,
       9,    30,    31,    32,    94,    95,    96,    97,    24,    25,
      26,    27,    67,   772,    30,    31,    32,   584,   236,   586,
     236,   236,   236,   113,   236,   113,   114,    23,   236,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,   420,   234,    19,     7,     9,   604,   615,     8,
     617,   618,    88,    85,   621,    24,    25,    26,    27,    97,
       7,    30,    31,    32,   697,    68,    19,    19,   419,    19,
      19,   236,   423,   236,   236,   426,    10,   235,   133,   235,
     135,   136,   137,   235,   139,    86,   141,   594,    32,   144,
     235,     7,   235,   235,     8,    73,     9,    70,    24,    19,
     234,    96,   235,    68,   236,   604,   236,   236,   236,   236,
     236,   235,   235,   235,    19,   682,   683,   684,     8,   113,
     114,     9,   689,   690,     7,   234,   234,    50,    49,   236,
      49,   221,   222,   700,    49,   702,   236,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
     717,   145,   719,   208,   721,   234,   234,   234,    19,    19,
     236,   216,   729,   730,   731,   236,   733,   236,   235,   736,
     737,    19,   739,   740,   741,   742,    78,    78,    78,   269,
     747,   748,    78,     0,     1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    78,    72,
      71,   768,   292,   236,    78,   234,   236,    72,   236,    78,
      78,   778,    29,   780,   304,    32,    33,    74,   234,    78,
      78,   311,    78,    78,    78,    78,    78,   113,   114,   796,
     428,   798,   799,    78,    78,   802,    78,    78,    78,   590,
     726,   808,   809,    60,    78,    78,    84,    78,    78,    78,
      78,    78,    78,   820,   280,   698,   823,    74,   491,   826,
      -1,    -1,    -1,    -1,    81,   832,    -1,    -1,    -1,    -1,
     837,    -1,    -1,    -1,    -1,   113,   114,    94,    95,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   855,    -1,
     857,    -1,    -1,   860,   861,   646,   113,   648,   649,   650,
      -1,   868,   869,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,   878,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   894,    -1,   419,
     420,    -1,   899,   423,    -1,   713,   426,    -1,   428,    -1,
      -1,    -1,   909,    -1,   911,   912,    -1,    -1,    -1,    -1,
      -1,   918,   919,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   458,    -1,
     460,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,   956,
      -1,   769,   959,    -1,    -1,   773,   774,   775,   776,   777,
      -1,   491,    -1,   493,   221,   222,   973,   974,    -1,   976,
     977,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     987,    -1,    -1,   990,    -1,    -1,   993,   994,    -1,   996,
     997,    -1,   783,    -1,    -1,    -1,  1003,  1004,    -1,    -1,
    1007,  1008,    -1,    -1,  1011,  1012,    -1,    -1,    -1,    -1,
      -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,   843,   844,   845,   846,   847,
      -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,    -1,
     831,    -1,    -1,   834,    -1,   836,    -1,   304,   839,    -1,
     841,    -1,    -1,    -1,   311,   145,   146,   147,   849,    -1,
     590,    -1,   592,    -1,   882,    -1,    -1,    -1,    -1,   887,
      -1,    -1,    -1,    -1,   604,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    39,
      40,    -1,   893,    -1,    -1,   896,    -1,   898,    -1,    -1,
     901,    -1,   903,    -1,    -1,    -1,   646,    -1,   648,   649,
     650,    61,   940,    -1,    -1,    -1,    -1,   945,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     931,    -1,    -1,    -1,   935,    -1,   236,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   419,   420,    -1,    -1,   423,    -1,    -1,   426,
      -1,   428,   113,   114,   965,    -1,    -1,    -1,   969,    -1,
      -1,    19,    20,   713,    -1,    23,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,    -1,    -1,
      -1,   458,    -1,   460,   145,   146,   147,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,
      -1,    -1,    70,    -1,   491,    -1,   493,   113,   114,   769,
      78,    -1,   772,   773,   774,   775,   776,   777,    -1,    -1,
      -1,    -1,    -1,   783,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    84,   145,
     146,   147,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,   236,    -1,   113,   114,    -1,
      -1,   831,    -1,    -1,   834,    -1,   836,    -1,    -1,   839,
      -1,   841,    -1,   843,   844,   845,   846,   847,    -1,   849,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,   590,    -1,   592,    -1,    -1,    -1,    -1,
     280,    -1,    -1,    -1,   113,   114,    -1,   604,    -1,    -1,
      -1,    -1,   882,    -1,    -1,    -1,    -1,   887,   234,    -1,
     236,   301,    -1,   893,    -1,    -1,   896,    -1,   898,    -1,
      -1,   901,    -1,   903,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   646,
      -1,   648,   649,   650,    -1,    -1,    -1,    -1,   338,   339,
     340,   931,    -1,    -1,    -1,   935,    -1,    16,    -1,    -1,
     940,    -1,    21,    -1,    -1,   945,    25,    -1,    27,    28,
      29,   361,   362,    -1,   364,   365,   366,   367,   368,    -1,
      39,    40,    -1,    -1,    -1,   965,    -1,    -1,    -1,   969,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    -1,    -1,    -1,   713,    -1,    -1,    -1,
     400,   401,   402,   403,   404,   405,   406,   236,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   769,    -1,    -1,   772,   773,   774,   775,   776,
     777,    -1,    -1,    -1,    -1,    -1,   783,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,   168,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   831,    -1,    -1,   834,    -1,   836,
      -1,    -1,   839,    -1,   841,    -1,   843,   844,   845,   846,
     847,    -1,   849,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   223,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,   882,    -1,    -1,    -1,    -1,
     887,   113,   114,    -1,    -1,    -1,   893,    -1,    -1,   896,
      -1,   898,    -1,    -1,   901,    -1,   903,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     269,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,   280,    -1,    -1,   931,    -1,    -1,    -1,   935,    -1,
      -1,    -1,    -1,   940,   113,   114,    -1,    -1,   945,    -1,
      -1,    -1,   301,   302,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,   965,    -1,
      -1,    -1,   969,    -1,    -1,    -1,   145,   146,   147,    -1,
     329,   330,   331,    -1,    -1,    -1,    -1,    -1,    -1,   338,
     339,   340,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,
     236,   681,    -1,    -1,    -1,    -1,    -1,    -1,   688,    -1,
      -1,    -1,   361,   362,   236,   364,   365,   366,   367,   368,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   400,   401,   402,   403,   404,   405,   406,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   234,    -1,   236,    -1,    -1,
      -1,   751,    -1,    -1,    -1,    -1,    -1,    -1,   427,   428,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   458,
      -1,   460,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,   480,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   491,    -1,   493,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,   854,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   863,   864,   865,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   145,   146,
     147,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,   234,    -1,   236,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   594,    -1,    -1,    -1,   236,
      -1,    -1,    -1,    -1,    -1,   604,     4,     5,    -1,     7,
       8,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   236,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,
      58,   113,   114,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    84,   681,    -1,    -1,    -1,    -1,    -1,    -1,   688,
      -1,    -1,    -1,   145,   146,   147,    94,    -1,   697,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
     113,   114,   110,   111,   112,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    -1,   134,    -1,    -1,    -1,
     138,    -1,   145,   146,   147,   143,    -1,    -1,    -1,    -1,
     148,    -1,   751,   151,   152,   153,   154,   155,   156,   157,
     158,    -1,    -1,   161,    -1,    -1,    -1,    -1,   236,   167,
      -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   236,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,    -1,   206,   207,
      -1,    -1,    -1,    -1,    -1,     4,     5,   215,     7,     8,
      -1,    10,    -1,    -1,   222,   223,    -1,    16,    17,    -1,
      -1,   229,   230,   231,    -1,    -1,    -1,   235,   236,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   854,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   863,   864,   865,    -1,    -1,    58,
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
      -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,   167,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,    -1,    -1,
      -1,    -1,    -1,   222,   223,    -1,    -1,    -1,    -1,    -1,
     229,   230,   231,    -1,    -1,    -1,   235,   236,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,    -1,   110,   111,   112,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,    -1,   141,    -1,   143,   144,    -1,
      -1,    -1,   148,    -1,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,    -1,    -1,   161,    -1,    -1,    -1,    -1,
      -1,   167,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,    -1,
     206,   207,   208,    -1,    -1,   211,    -1,    -1,    -1,   215,
     216,    -1,    -1,    -1,    -1,    -1,   222,   223,    -1,    -1,
      -1,    -1,    -1,   229,   230,   231,    -1,    -1,   234,   235,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,    -1,   206,   207,   208,    -1,    -1,    -1,    -1,    -1,
      -1,   215,   216,    -1,    -1,    -1,    -1,    -1,   222,   223,
      -1,    -1,    -1,    -1,    -1,   229,   230,   231,    -1,     4,
       5,   235,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,   107,   113,   114,   110,   111,   112,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,    -1,   134,
      -1,    -1,    -1,   138,    -1,   145,   146,   147,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,    -1,    -1,   161,    -1,    -1,    -1,
      -1,   166,   167,    -1,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
      -1,   206,   207,     4,     5,    -1,     7,     8,    -1,    10,
     215,    -1,    -1,    -1,    -1,    16,    17,   222,   223,    -1,
      -1,    -1,    -1,    -1,   229,   230,   231,    -1,    -1,    -1,
     235,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     161,    -1,    -1,    -1,    -1,   166,   167,    -1,    -1,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,    -1,   206,   207,     4,     5,    -1,
       7,     8,    -1,    10,   215,    -1,    -1,    -1,    -1,    16,
      17,   222,   223,    -1,    -1,    -1,    -1,    -1,   229,   230,
     231,    -1,    -1,    -1,   235,    -1,    33,    -1,    -1,    -1,
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
     157,   158,    -1,    -1,   161,    -1,    -1,    -1,    -1,   166,
     167,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,    -1,   206,
     207,     4,     5,    -1,     7,     8,    -1,    10,   215,    -1,
      -1,    -1,    -1,    16,    17,   222,   223,    -1,    -1,    -1,
      -1,    -1,   229,   230,   231,    -1,    -1,    -1,   235,    -1,
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
      -1,    -1,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,    -1,   206,   207,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,   222,
     223,    -1,    -1,    -1,    -1,    -1,   229,   230,   231,     3,
      -1,    -1,   235,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,   149,   150,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,
     164,   165,    -1,    -1,   168,   169,    -1,   171,    -1,   173,
      -1,    -1,   176,   177,   178,    -1,   180,   181,   182,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,   210,    -1,    -1,    -1,
      -1,   215,   216,    -1,    -1,   219,   220,   221,    -1,    -1,
     224,   225,   226,   227,   228,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   236,    -1,
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
     162,    -1,   164,   165,    -1,    -1,   168,   169,    -1,   171,
      -1,   173,    -1,   236,   176,   177,   178,    -1,   180,   181,
     182,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,   207,   208,   209,   210,    -1,
      -1,    -1,    -1,   215,   216,    -1,    -1,   219,   220,   221,
      -1,    -1,   224,   225,   226,   227,   228,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    51,   113,   114,    -1,    -1,    -1,    -1,    58,    59,
      60,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    82,    -1,   145,   146,   147,    87,    -1,    -1,
      90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,   145,   146,   147,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,   161,   162,    -1,   164,   165,    -1,    -1,   168,   169,
      -1,   171,    -1,   173,    -1,   236,   176,   177,   178,    -1,
     180,   181,   182,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,    -1,   207,   208,   209,
     210,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,   219,
     220,   221,    -1,    -1,   224,   225,   226,   227,   228,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    23,    24,    25,    26,    27,
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
     168,   169,    -1,   171,    -1,   173,    -1,   236,   176,   177,
     178,    -1,   180,   181,   182,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,   207,
     208,   209,   210,    -1,    -1,    -1,    -1,   215,   216,    -1,
      -1,   219,   220,   221,    -1,    -1,   224,   225,   226,   227,
     228,     7,     8,     9,    10,    11,    12,    13,    14,    15,
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
      -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,   236,
     176,   177,   178,    -1,   180,   181,   182,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,   207,   208,   209,   210,    -1,    -1,    -1,    -1,   215,
     216,    -1,    -1,   219,   220,   221,    -1,    -1,   224,   225,
     226,   227,   228,     7,     8,     9,    10,    11,    12,    13,
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
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,   145,   146,   147,    -1,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,
     164,   165,    -1,    -1,   168,   169,    -1,   171,    -1,   173,
      -1,   236,   176,   177,   178,    -1,   180,   181,   182,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,   210,    -1,    -1,    -1,
      -1,   215,   216,    -1,    -1,   219,   220,   221,    -1,    -1,
     224,   225,   226,   227,   228,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,
     113,   114,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      -1,    -1,   145,   146,   147,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,   145,   146,   147,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,
     162,    -1,   164,   165,    -1,    -1,   168,   169,    -1,   171,
      -1,   173,    -1,   236,   176,   177,   178,    -1,   180,   181,
     182,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,   207,   208,   209,   210,    -1,
      -1,    -1,    -1,   215,   216,    -1,    -1,   219,   220,   221,
      -1,    -1,   224,   225,   226,   227,   228,     7,     8,     9,
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
      -1,   161,   162,    -1,   164,   165,    -1,    -1,   168,   169,
      -1,   171,    -1,   173,    -1,   236,   176,   177,   178,    -1,
     180,   181,   182,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,    -1,   207,   208,   209,
     210,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,   219,
     220,   221,    -1,    -1,   224,   225,   226,   227,   228,     7,
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
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,   145,   146,   147,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,
     168,   169,    -1,   171,    -1,   173,    -1,   236,   176,   177,
     178,    -1,   180,   181,   182,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,   207,
     208,   209,   210,    -1,   113,   114,    -1,   215,   216,    -1,
      -1,   219,   220,   221,    -1,    45,   224,   225,   226,   227,
     228,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    -1,    -1,    -1,    -1,    65,   145,   146,   147,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,   159,
      -1,   161,   162,    -1,   164,   165,    -1,    -1,   168,   169,
      -1,   171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,
     180,   181,   182,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   113,   114,
      -1,    -1,    -1,    -1,    -1,   205,    -1,   207,   208,   209,
     210,    -1,   113,   114,    -1,   215,   216,    -1,    -1,   219,
     220,   221,    -1,    45,   224,   225,   226,   227,   228,    51,
     145,   146,   147,    -1,    -1,    -1,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,   145,   146,   147,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   236,    -1,    -1,    -1,    -1,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,   236,    -1,   159,    -1,   161,
     162,    -1,   164,   165,    -1,    -1,   168,   169,    -1,   171,
      -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,   181,
     182,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   113,   114,    -1,    -1,
      -1,    -1,    -1,   205,    -1,   207,   208,   209,   210,    -1,
     113,   114,    -1,   215,   216,    -1,    -1,   219,   220,   221,
      -1,    45,   224,   225,   226,   227,   228,    51,   145,   146,
     147,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,
      -1,    65,   145,   146,   147,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   236,
      -1,    -1,    -1,    -1,    -1,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,   236,    -1,   159,    -1,   161,   162,    -1,
     164,   165,    -1,    -1,   168,   169,    -1,   171,    -1,   173,
      -1,    -1,   176,   177,   178,    -1,   180,   181,   182,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   113,   114,    -1,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,   210,    -1,   113,   114,
      -1,   215,   216,    -1,    -1,   219,   220,   221,    -1,    45,
     224,   225,   226,   227,   228,    51,   145,   146,   147,    -1,
      -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
     145,   146,   147,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   236,    -1,    -1,
      -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,   236,    -1,   159,    -1,   161,   162,    -1,   164,   165,
      -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,    -1,
     176,   177,   178,    -1,   180,   181,   182,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   113,   114,    -1,    -1,    -1,    -1,    -1,   205,
      -1,   207,   208,   209,   210,    -1,   113,   114,    -1,   215,
     216,    -1,    -1,   219,   220,   221,    -1,    45,   224,   225,
     226,   227,   228,    51,   145,   146,   147,    -1,    -1,    -1,
      58,    59,    60,    -1,    -1,    -1,    -1,    65,   145,   146,
     147,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   236,    -1,    -1,    -1,    -1,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,   236,
      -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,
     168,   169,    -1,   171,    -1,   173,    -1,    -1,   176,   177,
     178,    -1,   180,   181,   182,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
     113,   114,    -1,    -1,    -1,    -1,    -1,   205,    -1,   207,
     208,   209,   210,    -1,   113,   114,    -1,   215,   216,    -1,
      -1,   219,   220,   221,    -1,    45,   224,   225,   226,   227,
     228,    51,   145,   146,   147,    -1,    -1,    -1,    58,    59,
      60,    -1,    -1,    -1,    -1,    65,   145,   146,   147,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   236,    -1,    -1,    -1,    -1,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,   159,
      -1,   161,   162,    -1,   164,   165,    -1,    -1,   168,   169,
      -1,   171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,
     180,   181,   182,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   113,   114,
      -1,    -1,    -1,    -1,    -1,   205,    -1,   207,   208,   209,
     210,    -1,   113,   114,    -1,   215,   216,    -1,    -1,   219,
     220,   221,    -1,    45,   224,   225,   226,   227,   228,    51,
     145,   146,   147,    -1,    -1,    -1,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,   145,   146,   147,    69,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,
      92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   236,    -1,    -1,    -1,    -1,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,   236,    -1,   159,    -1,   161,
     162,    -1,   164,   165,    -1,    -1,   168,   169,    -1,   171,
      -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,   181,
     182,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   113,   114,    -1,    -1,
      -1,    -1,    -1,   205,    -1,   207,   208,   209,   210,    -1,
     113,   114,    -1,   215,   216,    -1,    -1,   219,   220,   221,
      -1,    45,   224,   225,   226,   227,   228,    51,   145,   146,
     147,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,
      -1,    65,   145,   146,   147,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   236,
      -1,    -1,    -1,    -1,    -1,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,   236,    -1,   159,    -1,   161,   162,    -1,
     164,   165,    -1,    -1,   168,   169,    -1,   171,    -1,   173,
      -1,    -1,   176,   177,   178,    -1,   180,   181,   182,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,   113,   114,    -1,    -1,    -1,    -1,
      -1,   205,    -1,   207,   208,   209,   210,    -1,   113,   114,
      -1,   215,   216,    -1,    -1,   219,   220,   221,    -1,    45,
     224,   225,   226,   227,   228,    51,   145,   146,   147,    -1,
      -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
     145,   146,   147,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   236,    -1,    -1,
      -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,   236,    -1,   159,    -1,   161,   162,    -1,   164,   165,
      -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,    -1,
     176,   177,   178,    -1,   180,   181,   182,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,   207,   208,   209,   210,   113,   114,    -1,    -1,   215,
     216,    -1,    -1,   219,   220,   221,    -1,    -1,   224,   225,
     226,   227,   228,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,   113,
     114,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     236,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   236,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   236,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   113,   114,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,   145,
     146,   147,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
     236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   236,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,   145,   146,   147,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   234,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
     234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   234,    -1,    -1,   145,   146,   147,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   113,   114,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,   145,
     146,   147,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   234,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   234,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   234,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,   145,   146,   147,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   234,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,   145,   146,
     147,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   113,   114,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     234,    -1,    -1,   145,   146,   147,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   234,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,   234,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
     145,   146,   147,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,   234,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   234,
      -1,    -1,   145,   146,   147,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   113,   114,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,   145,   146,   147,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   234,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,
      -1,    -1,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   234,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   234,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,   145,   146,   147,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   234,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,   145,   146,   147,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   113,
     114,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,   145,   146,   147,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     234,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     234,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   234,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,   145,   146,
     147,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,   234,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,   145,   146,   147,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
     145,   146,   147,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   113,   114,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,   145,   146,   147,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   234,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   234,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,   234,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   234,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,
      -1,    -1,   145,   146,   147,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   234,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,   145,   146,   147,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   113,   114,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,   145,
     146,   147,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   234,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   234,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,   145,   146,   147,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   234,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,   145,   146,
     147,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   113,   114,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     234,    -1,    -1,   145,   146,   147,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   234,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
     145,   146,   147
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    45,    51,    58,    59,    60,
      65,    69,    74,    75,    76,    77,    81,    87,    90,    91,
      92,    94,    98,    99,   100,   101,   102,   103,   104,   142,
     149,   150,   159,   161,   162,   164,   165,   168,   169,   171,
     173,   176,   177,   178,   180,   181,   182,   205,   207,   208,
     209,   210,   215,   216,   219,   220,   221,   224,   225,   226,
     227,   228,   238,   239,   240,   242,   243,   246,   247,   248,
     249,   256,   257,   264,   265,   266,   277,   242,   235,   235,
     235,     7,     8,   235,   235,   235,   235,   235,   235,   235,
     235,   235,     7,     8,     9,     4,     5,     6,     9,    10,
      16,    17,    18,    33,    58,    61,    62,    63,    64,    65,
      67,    94,   105,   106,   107,   110,   111,   112,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   141,   143,   144,   148,   151,   152,   153,
     154,   155,   156,   157,   158,   161,   167,   170,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     206,   207,   208,   215,   216,   222,   223,   229,   230,   231,
     235,   244,   245,   246,   247,   249,   260,   261,   262,    10,
     245,   245,   245,   245,   262,     7,     8,     9,    99,     4,
       4,   262,    19,    85,   262,   262,   263,   248,   249,   250,
     251,     7,     8,     9,    10,   254,   255,   248,   265,     9,
      94,   265,     8,    10,   261,   261,     7,     8,     9,   252,
     253,   245,   245,   245,   245,   245,   166,   245,   166,   167,
     245,   245,   166,   245,   245,   245,   245,   235,   235,     6,
     250,   269,   270,    21,    36,    37,   211,   234,   245,   261,
     267,   268,     7,    10,    10,   245,   245,   245,   245,     0,
     239,    19,    20,    24,    38,    39,    40,    41,    42,    43,
      44,    24,    24,   250,   234,    19,   245,   245,   236,   245,
     245,    51,   250,   271,   272,   250,   273,   274,   274,   274,
     263,   263,   263,   263,   234,   234,   234,   235,   235,   235,
     235,   235,     4,     5,   246,   247,   245,   245,   235,   235,
     235,   245,   245,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,    36,
     235,   235,   245,   235,   235,   261,   245,   235,   235,    10,
     245,   245,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,   113,   114,   145,   146,   147,
      24,    25,    26,    27,    30,    31,    32,   235,   234,    24,
      79,    24,    88,    24,    88,    88,     7,     8,     9,    19,
      83,   242,   243,   240,   241,   262,    19,   234,   234,   235,
     235,   235,   235,   234,   235,   255,    19,   235,   234,   234,
     234,   234,   234,   234,   234,   245,   234,   245,   245,   234,
     234,   245,   234,   234,   234,   234,   245,   245,   234,   270,
     234,   235,   268,   234,   235,   235,   234,   234,   234,   242,
     245,   245,   245,   245,   245,   245,   245,   245,   261,   262,
      24,   265,   234,   236,   234,   236,    24,   234,   236,   236,
     250,   234,   236,   234,   236,   236,   236,   236,   236,   236,
     236,     7,     8,     9,   245,   263,   263,   263,   261,   261,
     261,     7,     8,     9,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   261,   261,   245,   261,   261,   261,   261,   261,   235,
     245,   245,   245,   245,   234,   245,   245,   234,   234,   236,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   261,   261,
     261,   261,   261,   261,   261,   245,   245,   245,    19,   245,
       7,   245,     8,     9,    24,    88,    24,    88,    88,   241,
      19,   242,    70,   241,    85,   241,   263,   251,   245,   245,
     245,   245,   255,   236,    97,   258,   259,   245,   253,   253,
     245,   245,   245,   245,   245,   234,   245,   234,   234,   245,
     245,   234,   245,   245,   245,   245,   236,   236,   270,   270,
     245,     7,   245,   245,   245,   245,   245,   262,   245,   245,
      68,   245,     7,     8,     9,   272,    19,   274,    19,    19,
      19,   236,   236,   236,   236,   236,   236,   236,   235,   235,
     235,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   234,   234,   234,   234,   236,   245,   236,   234,   234,
     234,   245,   236,   236,    10,   245,   236,    86,   275,   276,
      84,   235,    84,   235,   235,   245,     7,   245,     8,     9,
      70,    72,   241,    70,   243,   262,    73,   234,   236,   234,
     236,   234,   236,   234,    24,   250,    19,    96,   236,   234,
     234,   234,   245,   234,   245,   245,   234,   234,   245,   234,
     234,   234,   234,   236,   234,   236,   236,   234,   234,   236,
     236,   235,   236,   241,   241,   241,   241,   236,   236,   236,
     261,   245,   245,   245,   236,   261,   245,   245,   234,   263,
     276,    71,    80,   245,   236,   245,   236,   236,    84,   235,
      84,   235,   235,    19,    70,    72,   242,   245,   245,   245,
       8,    68,   259,   245,   245,   245,   234,   245,   234,   234,
     245,   245,   234,   245,   245,   245,   245,     7,   234,   234,
     245,   245,   261,    50,    49,    49,    49,   234,   234,   234,
     234,   236,   236,   234,   236,   236,   234,   236,   245,   242,
     243,    19,    82,   242,    19,   242,    19,    82,   242,    19,
     242,    19,   242,   245,   236,   245,   236,   236,   241,    19,
     236,   236,   236,   236,   235,   234,   245,   234,   245,   245,
     234,   234,   245,   234,   234,   234,   245,   245,   234,   234,
     236,    33,   244,   244,   244,   245,   245,   245,   234,    19,
      19,   241,   245,    78,   241,    78,   241,   245,    78,   241,
      78,   241,    78,    19,    82,   242,    19,   242,    19,    82,
     242,    19,   242,    19,   242,    72,   241,   261,   245,   234,
     245,   234,   234,   245,   245,   261,   261,   261,   234,   234,
     245,   245,   236,   236,   236,   236,   236,   236,   245,    71,
      78,    19,   242,    78,    78,    19,   242,    78,    78,   241,
     245,    78,   241,    78,   241,   245,    78,   241,    78,   241,
      78,    72,   236,   245,   245,   245,   234,   245,   245,   234,
     241,    78,   241,    78,    78,    19,   242,    78,    78,    19,
     242,    78,    78,   234,   234,   245,   234,   234,   245,    78,
      78,   241,    78,   241,    78,   245,   245,   234,   245,   245,
     234,    78,    78,   234,   234,   245,   234,   234,   245,   245,
     245,   245,   245,   234,   234,   245,   245,   234,   234,   245,
     245,   234,   234,   245,   245
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
    { (yyval.ast) = token(GRAPHICS); }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 234 "DARIC.y"
    { (yyval.ast) = token(FLIP); }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 235 "DARIC.y"
    { (yyval.ast) = token3(CIRCLE, (yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 236 "DARIC.y"
    { (yyval.ast) = token3(CIRCLEFILL, (yyvsp[(3) - (7)].ast), (yyvsp[(5) - (7)].ast), (yyvsp[(7) - (7)].ast)); }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 237 "DARIC.y"
    { (yyval.ast) = token4(LINE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 238 "DARIC.y"
    { (yyval.ast) = token4(RECTANGLE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 239 "DARIC.y"
    { (yyval.ast) = token4(RECTANGLEFILL, (yyvsp[(3) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(7) - (9)].ast), (yyvsp[(9) - (9)].ast)); }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 240 "DARIC.y"
    { (yyval.ast) = token6(TRIANGLE, (yyvsp[(2) - (12)].ast), (yyvsp[(4) - (12)].ast), (yyvsp[(6) - (12)].ast), (yyvsp[(8) - (12)].ast), (yyvsp[(10) - (12)].ast), (yyvsp[(12) - (12)].ast)); }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 241 "DARIC.y"
    { (yyval.ast) = token6(TRIANGLEFILL, (yyvsp[(3) - (13)].ast), (yyvsp[(5) - (13)].ast), (yyvsp[(7) - (13)].ast), (yyvsp[(9) - (13)].ast), (yyvsp[(11) - (13)].ast), (yyvsp[(13) - (13)].ast)); }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 244 "DARIC.y"
    { (yyval.ast) = token9(TRIANGLESHADED, (yyvsp[(3) - (19)].ast), (yyvsp[(5) - (19)].ast), (yyvsp[(7) - (19)].ast), (yyvsp[(9) - (19)].ast), (yyvsp[(11) - (19)].ast), (yyvsp[(13) - (19)].ast), (yyvsp[(15) - (19)].ast), (yyvsp[(17) - (19)].ast), (yyvsp[(19) - (19)].ast)); }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 245 "DARIC.y"
    { (yyval.ast) = token2(PLOT, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 246 "DARIC.y"
    { (yyval.ast) = token4(CLIPON, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 247 "DARIC.y"
    { (yyval.ast) = token(CLIPOFF); }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 248 "DARIC.y"
    { (yyval.ast) = token4(TEXT, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 249 "DARIC.y"
    { (yyval.ast) = token4(TEXTRIGHT, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 250 "DARIC.y"
    { (yyval.ast) = token4(TEXTCENTRE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 251 "DARIC.y"
    { (yyval.ast) = token(SHOWFPS); }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 255 "DARIC.y"
    { (yyval.ast) = integer((yyvsp[(1) - (1)].v_int)); }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 256 "DARIC.y"
    { (yyval.ast) = integer(-(yyvsp[(2) - (2)].v_int)); }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 257 "DARIC.y"
    { (yyval.ast) = real((yyvsp[(1) - (1)].v_real)); }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 258 "DARIC.y"
    { (yyval.ast) = real(-(yyvsp[(2) - (2)].v_real)); }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 262 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 263 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 264 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 265 "DARIC.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 266 "DARIC.y"
    { (yyval.ast) = token1(FLOAT_, (yyvsp[(3) - (4)].ast)); }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 267 "DARIC.y"
    { (yyval.ast) = token1(INT_, (yyvsp[(3) - (4)].ast)); }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 268 "DARIC.y"
    { (yyval.ast) = token2(MINUS, integer(0), (yyvsp[(2) - (2)].ast)); }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 269 "DARIC.y"
    { (yyval.ast) = token2(MINUS, real(0.0), (yyvsp[(2) - (2)].ast)); }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 270 "DARIC.y"
    { (yyval.ast) = token2(PLUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 271 "DARIC.y"
    { (yyval.ast) = token2(MINUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 272 "DARIC.y"
    { (yyval.ast) = token2(MULTIPLY, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 273 "DARIC.y"
    { (yyval.ast) = token2(DIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 274 "DARIC.y"
    { (yyval.ast) = token2(INTEGERDIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 275 "DARIC.y"
    { (yyval.ast) = token2(DIV, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 276 "DARIC.y"
    { (yyval.ast) = token2(MOD, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 277 "DARIC.y"
    { (yyval.ast) = token2(SHL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 278 "DARIC.y"
    { (yyval.ast) = token2(SHR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 279 "DARIC.y"
    { (yyval.ast) = token2(E, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 280 "DARIC.y"
    { (yyval.ast) = token2(NE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 281 "DARIC.y"
    { (yyval.ast) = token2(GE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 282 "DARIC.y"
    { (yyval.ast) = token2(LE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 283 "DARIC.y"
    { (yyval.ast) = token2(LT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 284 "DARIC.y"
    { (yyval.ast) = token2(GT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 285 "DARIC.y"
    { (yyval.ast) = token2(AND, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 286 "DARIC.y"
    { (yyval.ast) = token2(OR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 287 "DARIC.y"
    { (yyval.ast) = token2(EOR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 289 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 290 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 292 "DARIC.y"
    { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[(3) - (8)].v_string), Type::REAL), (yyvsp[(7) - (8)].ast)); }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 293 "DARIC.y"
    { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[(3) - (8)].v_string), Type::INTEGER), (yyvsp[(7) - (8)].ast)); }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 294 "DARIC.y"
    { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[(3) - (8)].v_string), Type::STRING), (yyvsp[(7) - (8)].ast)); }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 296 "DARIC.y"
    { (yyval.ast) = token1(PTR, (yyvsp[(2) - (2)].ast)); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 298 "DARIC.y"
    { (yyval.ast) = token(GET); }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 299 "DARIC.y"
    { (yyval.ast) = token1(INKEY, (yyvsp[(3) - (4)].ast)); }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 301 "DARIC.y"
    { (yyval.ast) = integer(1); }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 302 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 303 "DARIC.y"
    { (yyval.ast) = token(TIME); }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 305 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 306 "DARIC.y"
    { (yyval.ast) = integer(1); }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 307 "DARIC.y"
    { (yyval.ast) = integer(2); }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 308 "DARIC.y"
    { (yyval.ast) = integer(3); }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 310 "DARIC.y"
    { (yyval.ast) = token2(CREATESHAPE, string((yyvsp[(2) - (4)].v_string)), string((yyvsp[(4) - (4)].v_string))); }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 315 "DARIC.y"
    { (yyval.ast) = token9(CREATEOBJECT, (yyvsp[(2) - (18)].ast), (yyvsp[(4) - (18)].ast), (yyvsp[(6) - (18)].ast), (yyvsp[(8) - (18)].ast), (yyvsp[(10) - (18)].ast), (yyvsp[(12) - (18)].ast), (yyvsp[(14) - (18)].ast), (yyvsp[(16) - (18)].ast), (yyvsp[(18) - (18)].ast)); }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 317 "DARIC.y"
    { (yyval.ast) = integer(0xFF0000); }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 318 "DARIC.y"
    { (yyval.ast) = integer(0x00FF00); }
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 319 "DARIC.y"
    { (yyval.ast) = integer(0xFFFF00); }
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 320 "DARIC.y"
    { (yyval.ast) = integer(0x0000FF); }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 321 "DARIC.y"
    { (yyval.ast) = integer(0xFF00FF); }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 322 "DARIC.y"
    { (yyval.ast) = integer(0x00FFFF); }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 323 "DARIC.y"
    { (yyval.ast) = integer(0xFFFFFF); }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 324 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 325 "DARIC.y"
    { (yyval.ast) = integer(-1); }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 326 "DARIC.y"
    { (yyval.ast) = token3(COLOUREXP, (yyvsp[(3) - (8)].ast), (yyvsp[(5) - (8)].ast), (yyvsp[(7) - (8)].ast)); }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 327 "DARIC.y"
    { (yyval.ast) = token2(POINT_, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 328 "DARIC.y"
    { (yyval.ast) = token(SCREENWIDTH); }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 329 "DARIC.y"
    { (yyval.ast) = token(SCREENHEIGHT); }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 330 "DARIC.y"
    { (yyval.ast) = token1(LOADTYPEFACE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 331 "DARIC.y"
    { (yyval.ast) = token2(CREATEFONT, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 332 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 333 "DARIC.y"
    { (yyval.ast) = integer(1); }
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 334 "DARIC.y"
    { (yyval.ast) = integer(2); }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 335 "DARIC.y"
    { (yyval.ast) = integer(3); }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 336 "DARIC.y"
    { (yyval.ast) = integer(4); }
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 337 "DARIC.y"
    { (yyval.ast) = integer(5); }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 338 "DARIC.y"
    { (yyval.ast) = integer(6); }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 339 "DARIC.y"
    { (yyval.ast) = integer(7); }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 340 "DARIC.y"
    { (yyval.ast) = integer(8); }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 341 "DARIC.y"
    { (yyval.ast) = integer(9); }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 342 "DARIC.y"
    { (yyval.ast) = integer(10); }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 343 "DARIC.y"
    { (yyval.ast) = integer(11); }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 344 "DARIC.y"
    { (yyval.ast) = integer(12); }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 345 "DARIC.y"
    { (yyval.ast) = integer(13); }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 346 "DARIC.y"
    { (yyval.ast) = integer(14); }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 347 "DARIC.y"
    { (yyval.ast) = integer(15); }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 348 "DARIC.y"
    { (yyval.ast) = integer(16); }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 349 "DARIC.y"
    { (yyval.ast) = integer(17); }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 350 "DARIC.y"
    { (yyval.ast) = token1(EOFH, (yyvsp[(2) - (2)].ast)); }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 351 "DARIC.y"
    { (yyval.ast) = token1(BGET, (yyvsp[(2) - (2)].ast)); }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 352 "DARIC.y"
    { (yyval.ast) = token1(OPENIN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 353 "DARIC.y"
    { (yyval.ast) = token1(OPENOUT, (yyvsp[(3) - (4)].ast)); }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 354 "DARIC.y"
    { (yyval.ast) = token1(OPENUP, (yyvsp[(3) - (4)].ast)); }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 356 "DARIC.y"
    { (yyval.ast) = token(RND); }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 357 "DARIC.y"
    { (yyval.ast) = token1(RNDREAL, integer(0)); }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 358 "DARIC.y"
    { (yyval.ast) = token1(RNDREAL, integer(1)); }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 359 "DARIC.y"
    { (yyval.ast) = token1(RNDRANGE, (yyvsp[(3) - (4)].ast)); }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 361 "DARIC.y"
    { (yyval.ast) = token(PI); }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 362 "DARIC.y"
    { (yyval.ast) = token1(NOT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 363 "DARIC.y"
    { (yyval.ast) = token1(SQR, (yyvsp[(3) - (4)].ast)); }
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 364 "DARIC.y"
    { (yyval.ast) = token1(LN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 365 "DARIC.y"
    { (yyval.ast) = token1(LOG, (yyvsp[(3) - (4)].ast)); }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 366 "DARIC.y"
    { (yyval.ast) = token1(EXP, (yyvsp[(3) - (4)].ast)); }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 367 "DARIC.y"
    { (yyval.ast) = token1(ATN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 368 "DARIC.y"
    { (yyval.ast) = token1(TAN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 369 "DARIC.y"
    { (yyval.ast) = token1(COS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 370 "DARIC.y"
    { (yyval.ast) = token1(SIN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 371 "DARIC.y"
    { (yyval.ast) = token1(ABS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 372 "DARIC.y"
    { (yyval.ast) = token1(ACS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 373 "DARIC.y"
    { (yyval.ast) = token1(ASN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 374 "DARIC.y"
    { (yyval.ast) = token1(DEG, (yyvsp[(3) - (4)].ast)); }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 375 "DARIC.y"
    { (yyval.ast) = token1(RAD, (yyvsp[(3) - (4)].ast)); }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 376 "DARIC.y"
    { (yyval.ast) = token1(SGN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 378 "DARIC.y"
    { (yyval.ast) = token1(ASC, (yyvsp[(3) - (4)].ast)); }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 379 "DARIC.y"
    { (yyval.ast) = token1(LEN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 380 "DARIC.y"
    { (yyval.ast) = token3(INSTR, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), integer(1)); }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 381 "DARIC.y"
    { (yyval.ast) = token3(INSTR, (yyvsp[(3) - (8)].ast), (yyvsp[(5) - (8)].ast), (yyvsp[(7) - (8)].ast)); }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 382 "DARIC.y"
    { (yyval.ast) = token1(VAL, (yyvsp[(3) - (4)].ast)); }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 386 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::INTEGER); }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 387 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::INTEGER_ARRAY); }
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 388 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::INTEGER_ARRAY); }
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 389 "DARIC.y"
    { (yyval.ast) = typevariable((yyvsp[(1) - (2)].v_string), (yyvsp[(2) - (2)].v_string), Type::TYPE); }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 390 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (5)].v_string), (yyvsp[(5) - (5)].v_string), (yyvsp[(3) - (5)].ast), Type::TYPE_ARRAY); }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 394 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::REAL); }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 395 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::REAL_ARRAY); }
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 396 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::REAL_ARRAY); }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 397 "DARIC.y"
    { (yyval.ast) = typevariable((yyvsp[(1) - (2)].v_string), (yyvsp[(2) - (2)].v_string), Type::TYPE); }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 398 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (5)].v_string), (yyvsp[(5) - (5)].v_string), (yyvsp[(3) - (5)].ast), Type::TYPE_ARRAY); }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 402 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 403 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 407 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::STRING); }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 408 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::STRING_ARRAY); }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 409 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::STRING_ARRAY); }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 410 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (5)].v_string), (yyvsp[(5) - (5)].v_string), (yyvsp[(3) - (5)].ast), Type::TYPE_ARRAY); }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 414 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 415 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 419 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 420 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 424 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::INTEGER); }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 425 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::REAL); }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 426 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::STRING); }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 430 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 431 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 435 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::INTEGER_ARRAY); }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 436 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::INTEGER_ARRAY); }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 437 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::REAL_ARRAY); }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 438 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::REAL_ARRAY); }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 439 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::STRING_ARRAY); }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 440 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::STRING_ARRAY); }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 441 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (6)].v_string), (yyvsp[(5) - (6)].v_string), (yyvsp[(3) - (6)].ast), Type::TYPE_ARRAY); }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 445 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 446 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 450 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::TYPE); }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 451 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::TYPE_ARRAY); }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 455 "DARIC.y"
    { (yyval.ast) = token2(TYPE_, string((yyvsp[(2) - (5)].v_string)), (yyvsp[(4) - (5)].ast)); }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 459 "DARIC.y"
    { (yyval.ast) = token1(FIELD, (yyvsp[(2) - (2)].ast)); }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 463 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (2)].ast); }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 464 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 468 "DARIC.y"
    { (yyval.ast) = string((yyvsp[(1) - (1)].v_string)); }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 472 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 473 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 474 "DARIC.y"
    { (yyval.ast) = token2(PLUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 475 "DARIC.y"
    { (yyval.ast) = token2(E, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 476 "DARIC.y"
    { (yyval.ast) = token2(NE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 477 "DARIC.y"
    { (yyval.ast) = token2(GE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 478 "DARIC.y"
    { (yyval.ast) = token2(LE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 479 "DARIC.y"
    { (yyval.ast) = token2(LT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 480 "DARIC.y"
    { (yyval.ast) = token2(GT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 482 "DARIC.y"
    { (yyval.ast) = token1(GETSH, (yyvsp[(2) - (2)].ast)); }
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 484 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 486 "DARIC.y"
    { (yyval.ast) = token(GETS); }
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 487 "DARIC.y"
    { (yyval.ast) = token1(INKEYS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 489 "DARIC.y"
    { (yyval.ast) = token(TIMES); }
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 490 "DARIC.y"
    { (yyval.ast) = token1(STRS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 491 "DARIC.y"
    { (yyval.ast) = token1(STRSHEX, (yyvsp[(4) - (5)].ast)); }
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 492 "DARIC.y"
    { (yyval.ast) = token2(STRINGS, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 493 "DARIC.y"
    { (yyval.ast) = token1(CHRS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 494 "DARIC.y"
    { (yyval.ast) = token2(LEFTS, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 495 "DARIC.y"
    { (yyval.ast) = token3(MIDS, (yyvsp[(3) - (8)].ast), (yyvsp[(5) - (8)].ast), (yyvsp[(7) - (8)].ast)); }
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 496 "DARIC.y"
    { (yyval.ast) = token2(RIGHTS, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 500 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 501 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 505 "DARIC.y"
    { (yyval.ast) = NULL; }
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 506 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 507 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 511 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 512 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 513 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 307:
/* Line 1792 of yacc.c  */
#line 514 "DARIC.y"
    { (yyval.ast) = assignment(link((yyvsp[(1) - (4)].ast), (yyvsp[(2) - (4)].ast)), (yyvsp[(4) - (4)].ast)); }
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 518 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 519 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 523 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 524 "DARIC.y"
    { (yyval.ast) = token1(LOCAL, (yyvsp[(2) - (2)].ast)); }
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 525 "DARIC.y"
    { (yyval.ast) = token1(GLOBAL, (yyvsp[(2) - (2)].ast)); }
    break;

  case 313:
/* Line 1792 of yacc.c  */
#line 526 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(SHL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 314:
/* Line 1792 of yacc.c  */
#line 527 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(SHR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 528 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(PLUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 529 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(MINUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 530 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(MULTIPLY, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 531 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(DIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 532 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(INTEGERDIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 536 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 537 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 538 "DARIC.y"
    { (yyval.ast) = token(COMMA); }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 539 "DARIC.y"
    { (yyval.ast) = token(TILDE); }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 540 "DARIC.y"
    { (yyval.ast) = token(TICK); }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 541 "DARIC.y"
    { (yyval.ast) = token1(SPC, (yyvsp[(3) - (4)].ast)); }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 542 "DARIC.y"
    { (yyval.ast) = token(SEMICOLON); }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 546 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 547 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 555 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 331:
/* Line 1792 of yacc.c  */
#line 556 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 560 "DARIC.y"
    { (yyval.ast) = NULL; }
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 561 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 334:
/* Line 1792 of yacc.c  */
#line 562 "DARIC.y"
    { (yyval.ast) = token1(RETURN_PARAMETER, (yyvsp[(2) - (2)].ast)); }
    break;

  case 335:
/* Line 1792 of yacc.c  */
#line 566 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 567 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 571 "DARIC.y"
    { (yyval.ast) = NULL; }
    break;

  case 338:
/* Line 1792 of yacc.c  */
#line 572 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 576 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 577 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 581 "DARIC.y"
    { (yyval.ast) = token2(WHEN, (yyvsp[(2) - (4)].ast), (yyvsp[(3) - (4)].ast)); }
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 585 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 586 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 589 "DARIC.y"
    { (yyval.ast) = token3typed(DEFPROC, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::NOTYPE); }
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 590 "DARIC.y"
    { (yyval.ast) = token3typed(DEFFN, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::INTEGER); }
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 591 "DARIC.y"
    { (yyval.ast) = token3typed(DEFFN, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::REAL); }
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 592 "DARIC.y"
    { (yyval.ast) = token3typed(DEFFN, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::STRING); }
    break;


/* Line 1792 of yacc.c  */
#line 6525 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
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
#line 595 "DARIC.y"


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