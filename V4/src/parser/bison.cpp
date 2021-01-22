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

/* Line 371 of yacc.c  */
#line 90 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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
     NEG = 488
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 25 "DARIC.y"

    int v_int;
    double v_real;
    const char *v_string;
    struct AST *ast;


/* Line 387 of yacc.c  */
#line 374 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
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
#line 415 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"

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
#define YYLAST   10520

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  237
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  349
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1019

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
      -1,   210,   270,    -1,   210,     6,   270,    -1,   210,     6,
     234,   270,    -1,   220,     7,   234,     7,   234,     7,    -1,
     208,   235,   245,   236,    -1,   209,   235,   245,   236,    -1,
     216,    -1,   217,    -1,    77,   262,   242,    -1,    77,   262,
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
      71,    -1,   211,    -1,   211,   268,    -1,   228,    -1,   221,
      10,   235,   245,   236,   234,   245,   234,   245,   234,   245,
     234,   245,    -1,   222,    10,   235,   245,   236,   234,   245,
     234,   245,   234,   245,   234,   245,    -1,   225,   245,   234,
     245,   234,   245,   234,   245,    -1,   226,   245,   234,   245,
     234,   245,   234,   245,    -1,   227,   245,   234,   245,    -1,
     229,   245,    -1,   159,    -1,   161,   245,    -1,   161,   245,
     234,   245,   234,   245,    -1,   162,   245,    -1,   162,   245,
     234,   245,   234,   245,    -1,   165,   245,   234,   245,    -1,
     165,   166,   245,   234,   245,    -1,   165,    -1,   165,   166,
      -1,   164,    -1,   179,   245,   234,   245,   234,   245,    -1,
     179,   167,   245,   234,   245,   234,   245,    -1,   169,   245,
     234,   245,   234,   245,   234,   245,    -1,   172,   245,   234,
     245,   234,   245,   234,   245,    -1,   172,   167,   245,   234,
     245,   234,   245,   234,   245,    -1,   174,   245,   234,   245,
     234,   245,   234,   245,   234,   245,   234,   245,    -1,   174,
     167,   245,   234,   245,   234,   245,   234,   245,   234,   245,
     234,   245,    -1,   174,   168,   245,   234,   245,   234,   245,
     234,   245,   234,   245,   234,   245,   234,   245,   234,   245,
     234,   245,    -1,   170,   245,   234,   245,    -1,   177,   245,
     234,   245,   234,   245,   234,   245,    -1,   178,    -1,   181,
     245,   234,   245,   234,   245,   234,   261,    -1,   182,   245,
     234,   245,   234,   245,   234,   261,    -1,   183,   245,   234,
     245,   234,   245,   234,   261,    -1,   206,    -1,     4,    -1,
      33,     4,    -1,     5,    -1,    33,     5,    -1,   244,    -1,
     246,    -1,   247,    -1,   235,   245,   236,    -1,   110,   235,
     245,   236,    -1,   111,   235,   245,   236,    -1,    33,   246,
      -1,    33,   247,    -1,   245,    32,   245,    -1,   245,    33,
     245,    -1,   245,    34,   245,    -1,   245,    35,   245,    -1,
     245,    23,   245,    -1,   245,   113,   245,    -1,   245,   114,
     245,    -1,   245,    28,   245,    -1,   245,    29,   245,    -1,
     245,    24,   245,    -1,   245,    27,   245,    -1,   245,    26,
     245,    -1,   245,    25,   245,    -1,   245,    30,   245,    -1,
     245,    31,   245,    -1,   245,   145,   245,    -1,   245,   146,
     245,    -1,   245,   147,   245,    -1,    16,   235,   263,   236,
      -1,    17,   235,   263,   236,    -1,    94,   235,     8,   235,
     236,   234,   244,   236,    -1,    94,   235,     7,   235,   236,
     234,   244,   236,    -1,    94,   235,     9,   235,   236,   234,
     244,   236,    -1,    65,   245,    -1,   216,    -1,   208,   235,
     245,   236,    -1,   131,    -1,   130,    -1,   143,    -1,   230,
      -1,   231,    -1,   168,    -1,   232,    -1,   223,    10,   234,
      10,    -1,   224,   245,   234,   245,   234,   245,   234,   245,
     234,   245,   234,   245,   234,   245,   234,   245,   234,   245,
      -1,   151,    -1,   152,    -1,   153,    -1,   154,    -1,   155,
      -1,   156,    -1,   157,    -1,   158,    -1,   207,    -1,   161,
     235,   245,   234,   245,   234,   245,   236,    -1,   171,   235,
     245,   234,   245,   236,    -1,   204,    -1,   205,    -1,   184,
     261,    -1,   185,   245,   234,   245,    -1,   186,    -1,   187,
      -1,   188,    -1,   189,    -1,   190,    -1,   191,    -1,   192,
      -1,   193,    -1,   194,    -1,   195,    -1,   196,    -1,   197,
      -1,   198,    -1,   199,    -1,   200,    -1,   201,    -1,   202,
      -1,   203,    -1,    61,   245,    -1,    58,   245,    -1,    62,
     235,   261,   236,    -1,    64,   235,   261,   236,    -1,    63,
     235,   261,   236,    -1,   105,    -1,   106,    -1,   107,    -1,
     105,   235,   245,   236,    -1,   129,    -1,   148,   245,    -1,
     115,   235,   245,   236,    -1,   116,   235,   245,   236,    -1,
     117,   235,   245,   236,    -1,   118,   235,   245,   236,    -1,
     119,   235,   245,   236,    -1,   120,   235,   245,   236,    -1,
     121,   235,   245,   236,    -1,   122,   235,   245,   236,    -1,
     124,   235,   245,   236,    -1,   112,   235,   245,   236,    -1,
     123,   235,   245,   236,    -1,   125,   235,   245,   236,    -1,
     126,   235,   245,   236,    -1,   127,   235,   245,   236,    -1,
     132,   235,   261,   236,    -1,   138,   235,   261,   236,    -1,
     134,   235,   261,   234,   261,   236,    -1,   134,   235,   261,
     234,   261,   234,   245,   236,    -1,   128,   235,   261,   236,
      -1,     7,    -1,     7,   235,   245,   236,    -1,     7,   235,
     245,   234,   245,   236,    -1,    10,     7,    -1,    10,   235,
     245,   236,     7,    -1,     8,    -1,     8,   235,   245,   236,
      -1,     8,   235,   245,   234,   245,   236,    -1,    10,     8,
      -1,    10,   235,   245,   236,     8,    -1,   246,    -1,   247,
      -1,     9,    -1,     9,   235,   245,   236,    -1,     9,   235,
     245,   234,   245,   236,    -1,    10,   235,   245,   236,     9,
      -1,   248,    -1,   249,    -1,   250,    -1,   250,   234,   251,
      -1,     7,    -1,     8,    -1,     9,    -1,   252,    -1,   252,
     234,   253,    -1,     7,   235,   245,   236,    -1,     7,   235,
     245,   234,   245,   236,    -1,     8,   235,   245,   236,    -1,
       8,   235,   245,   234,   245,   236,    -1,     9,   235,   245,
     236,    -1,     9,   235,   245,   234,   245,   236,    -1,    10,
     235,   245,   234,     8,   236,    -1,   254,    -1,   254,   234,
     255,    -1,    10,    -1,    10,   235,   245,   236,    -1,   100,
       8,    19,   259,    96,    -1,    97,   250,    -1,   258,    19,
      -1,   258,    19,   259,    -1,     6,    -1,   260,    -1,   249,
      -1,   261,    32,   261,    -1,   261,    24,   261,    -1,   261,
      27,   261,    -1,   261,    26,   261,    -1,   261,    25,   261,
      -1,   261,    30,   261,    -1,   261,    31,   261,    -1,    67,
     245,    -1,    18,   235,   263,   236,    -1,   217,    -1,   209,
     235,   245,   236,    -1,   144,    -1,   139,   235,   245,   236,
      -1,   139,    36,   235,   245,   236,    -1,   141,   235,   245,
     234,   261,   236,    -1,   133,   235,   245,   236,    -1,   135,
     235,   261,   234,   245,   236,    -1,   136,   235,   261,   234,
     245,   234,   245,   236,    -1,   137,   235,   261,   234,   245,
     236,    -1,   245,    -1,   261,    -1,    -1,   262,    -1,   262,
     234,   263,    -1,   248,    24,   245,    -1,   249,    24,   261,
      -1,   256,    24,   262,    -1,   256,   250,    24,   262,    -1,
     264,    -1,   264,   234,   265,    -1,   265,    -1,    99,   265,
      -1,    98,   265,    -1,   248,    38,   245,    -1,   248,    39,
     245,    -1,   248,    40,   245,    -1,   248,    41,   245,    -1,
     248,    42,   245,    -1,   248,    43,   245,    -1,   248,    44,
     245,    -1,   261,    -1,   245,    -1,   234,    -1,    36,    -1,
      37,    -1,   212,   235,   245,   236,    -1,    21,    -1,   267,
      -1,   267,   268,    -1,   250,    -1,   269,    -1,   269,   234,
     270,    -1,    -1,   250,    -1,    51,   250,    -1,   271,    -1,
     271,   234,   272,    -1,    -1,   250,    -1,   273,    -1,   273,
     234,   274,    -1,    86,   263,   242,    19,    -1,   275,    -1,
     275,   276,    -1,    11,   235,   272,   236,    19,   241,    50,
      -1,    12,   235,   274,   236,    19,   241,    49,    -1,    14,
     235,   274,   236,    19,   241,    49,    -1,    13,   235,   274,
     236,    19,   241,    49,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    92,    92,    96,    97,   101,   102,   103,   106,   107,
     111,   112,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   136,   137,   139,   140,   141,   142,   143,   144,
     146,   148,   149,   151,   152,   153,   154,   156,   157,   158,
     159,   161,   162,   163,   164,   166,   167,   168,   169,   171,
     172,   173,   175,   176,   177,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   211,   212,   214,   215,   217,   218,   221,
     224,   225,   226,   227,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   249,   250,   251,   252,   253,   254,   255,   259,
     260,   261,   262,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   293,
     294,   296,   297,   298,   300,   302,   303,   305,   306,   307,
     309,   310,   311,   312,   314,   315,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   360,   361,   362,   363,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   382,   383,   384,   385,   386,   390,
     391,   392,   393,   394,   398,   399,   400,   401,   402,   406,
     407,   411,   412,   413,   414,   418,   419,   423,   424,   428,
     429,   430,   434,   435,   439,   440,   441,   442,   443,   444,
     445,   449,   450,   454,   455,   459,   463,   467,   468,   472,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   486,
     488,   490,   491,   493,   494,   495,   496,   497,   498,   499,
     500,   504,   505,   509,   510,   511,   515,   516,   517,   518,
     522,   523,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   540,   541,   542,   543,   544,   545,   546,   550,
     551,   555,   559,   560,   564,   565,   566,   570,   571,   575,
     576,   580,   581,   585,   589,   590,   593,   594,   595,   596
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
  "PROP35", "PROP40", "PROP50", "PROP75", "PROP100", "SCREENWIDTH",
  "SCREENHEIGHT", "SHOWFPS", "LASTPOS", "INKEY", "INKEYS", "INPUT_",
  "PRINT", "SPC", "SINKEY", "SINKEYS", "INPUT_NOQUESTIONMARK", "GET",
  "GETS", "GET_S", "GETS_S", "MOUSE", "CREATEVERTEX", "CREATETRIANGLE",
  "CREATESHAPE", "CREATEOBJECT", "TRANSLATE", "ROTATE", "SCALE",
  "RENDERFRAME", "DELETEOBJECT", "SOLID", "WIREFRAME", "FILLEDWIREFRAME",
  "NEG", "','", "'('", "')'", "$accept", "daric", "lines", "line",
  "embed_lines", "statements", "statement", "number", "expression_numeric",
  "variable_integer", "variable_real", "variable_numeric",
  "variable_string", "variable", "variable_list", "plain_variable",
  "plain_variable_list", "dim_variable", "dim_variable_list",
  "type_variable", "type", "field", "field_list", "string",
  "expression_string", "expression", "expression_list",
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
     243,   243,   243,   243,   243,   243,   243,   243,   243,   244,
     244,   244,   244,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   246,
     246,   246,   246,   246,   247,   247,   247,   247,   247,   248,
     248,   249,   249,   249,   249,   250,   250,   251,   251,   252,
     252,   252,   253,   253,   254,   254,   254,   254,   254,   254,
     254,   255,   255,   256,   256,   257,   258,   259,   259,   260,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   262,   262,   263,   263,   263,   264,   264,   264,   264,
     265,   265,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   267,   267,   267,   267,   267,   267,   267,   268,
     268,   269,   270,   270,   271,   271,   271,   272,   272,   273,
     273,   274,   274,   275,   276,   276,   277,   277,   277,   277
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
#define YYPACT_NINF -642
static const yytype_int16 yypact[] =
{
    3746,  7141,  -221,  -213,  -200,    -1,  -193,  -182,  -131,  -107,
    -101,   -72,   -49,   -41,  -642,    58,  2467,  3516,  3516,  3516,
    3516,  2467,   112,   197,   213,  2467,     1,  2467,  2467,   341,
    -642,   392,   531,   122,   214,  -642,  -642,  -642,  -642,   929,
     929,   142,  -642,  3516,  3516,  -642,  2696,  3516,  3516,  2901,
    3106,  3516,  -642,  3311,  3516,  3516,  3516,  -642,     3,     6,
     379,  2235,  -642,  -642,   232,   234,   240,  3516,  3516,  3516,
    -642,  3516,   257,  -642,  3746,   239,   242,  -642,  -642,   417,
     249,   168,  -642,    29,  -642,  -642,  -642,   255,  3516,  3516,
    1797,  -642,  -642,  3516,   161,   341,   341,   341,  2467,  2467,
    2467,  2467,    41,    42,    52,  -642,  -642,  -642,    59,     2,
      60,    64,    65,   511,  3516,  3516,    75,    79,    80,  3516,
    3516,    88,    89,  -642,  -642,   118,   124,   125,   155,   159,
     169,   171,   172,   175,   176,   177,   185,   187,   198,   201,
     207,   208,  -642,  -642,  -642,   209,   219,   227,   231,   233,
     235,   236,   -12,   243,  -642,  -642,  3516,  -642,  -642,  -642,
    -642,  -642,  -642,  -642,  -642,   247,  -642,   248,   929,  3516,
    -642,  -642,  -642,  -642,  -642,  -642,  -642,  -642,  -642,  -642,
    -642,  -642,  -642,  -642,  -642,  -642,  -642,  -642,  -642,  -642,
    -642,   253,   256,  -642,  -642,   278,  3516,  -642,  -642,  -642,
    3516,  -642, 10360,  -642,  -642,  -642,  -642,   277,  -642,    33,
   10360,  1792, 10360, 10373,   286,     4,    36,   199,   158,  -642,
    -642,  5709,  3746,  2467,   337,   162,  -642,  -642,  -642,   174,
    -642,   258,   259,   268,   274,   263,  -642,   393,  -642,   282,
     392,  -642,   413,   285,   277,   130,  -642,  -642,  -642,   292,
    -642,  2691,  7637,  3516,  7687,  7700,  7713,  3516,  7729,  3516,
    3516,  7854,  7867,  3516,  7880,  7925,  8017,  8030,  3516,  3516,
      38,  -642,   293,  -642,  -642,  -642,  -642,   297,  -642, 10360,
     277,  2235,  -642,   294,   299,   300,  8052,  8092,  8122, 10360,
    -642,  -642,  -642,  7141,  3516,  3516,  3516,  3516,  3516,  3516,
    3516,  3516,   929,  2467,   424,   531,  -642,    82,   596,   453,
     617,   631,   341,  -642,   296,   254,  -642,   302,   306,   307,
     309,   318,   320,   325,   326,   556,   557,   555,  3516,  3516,
    2467,  2467,  2467,  -642,  -642,  -642,  -642, 10360, 10360,   929,
     929,   929, 10360, 10360,   223,  3516,  3516,  3516,  3516,  3516,
    3516,  3516,  3516,  3516,  3516,  3516,  3516,  3516,  3516,  3516,
    3516,  3516,   929,   929,  3516,   929,   929,   929,   929,   929,
     332,  3516,  3516,  -642,  3516,  3516,   277,  8157,  3516,  3516,
     334,  8184,  1310,  3516,  3516,  3516,  3516,  3516,  3516,  3516,
    3516,  3516,  3516,  3516,  3516,  3516,  3516,  3516,  3516,  3516,
    3516,   929,   929,   929,   929,   929,   929,   929,  3516,  3516,
    3516,   551,  3516,   570,  3516,   573,   574,    45,    50,   494,
    3746,  5888,  -642,    67,  3746,   499,  -642,  3746,  2467,   341,
    3516,  3516,  3516,  3516,   392,  2002,  -642,   488,  3516,   142,
     142,  3516,  3516,  8197,  3516,  3516,  3516,  8249,  3516,  8289,
    8341,  3516,  3516,  8354,  3516,  3516,  3516,  3516,  1493,  1548,
     341,  -642,   341,  3516,  -642,   582,  3516,  3516,  3516,  3516,
    3516,  -642, 10360, 10360, 10360, 10360, 10360, 10360, 10360, 10360,
     277,  -642,  2467,  -642,  3516,  -642,  3516,  -642,   522,  3516,
    -642,   262,  -642,   161,   572,   341,   575,   576,   577,  -642,
    -642,  -642,  -642,  -642,  -642,  -642,  1602,   369,   372,   374,
      53,    69,   116,   376,   377,   378,  1618,  1727,  3753,  3908,
    4131,  4354,  4577,  4800,  5023,  5246,  5469,  5630,  5795,  5809,
    5974,  5988,  6153,   173,   183,  6167,   449,   474,   548,   670,
     194,  3516,  6332,  8381,  8416,  8446,  3516,  6346,  6511,   604,
    3516,  -642,   144,   788,   788,   788,   788,  -642,  -642,   788,
     788,   564,   564,   144,   144,   144,   144,  1472,  2024,  2024,
     583,   583,   583,   583,   583,   583,  -642,  6525, 10360,  1142,
     530, 10193,   383, 10233,   397,   398,  3516,   627,  3516,   628,
     626,   -51,  3746,   567,  7141,  -642,  2467,   565,  -642,  -642,
    1013,  1068,  1258,  8481,  -642,   629,   341,   648,   578,  6690,
    -642,  -642,  8508,  8521,  3516, 10360,  8573, 10360,  3516,  8613,
    3516,  3516,  8665,  8678,  3516,  8705,  8740,  8770,  8805,  -642,
    -642,  -642,  -642,  6704,   437,  6869,  6883,  8832,  8845, 10360,
    -642,  7048,  7062,   438,  7226,  -642,  -642,  -642,  -642,  3746,
    -642,  3746,  3746,  3746,   262,  -642,  -642,  -642,  -642,  -642,
    -642,   436,   443,   444,  -642,  -642,  -642,  -642,  -642,  -642,
    -642,  -642,  -642,  -642,  -642,  -642,  -642,  -642,  -642,  -642,
    -642,  -642,  -642,  -642,   929,  3516,  3516,  3516,  -642,  7240,
    -642,   929,  3516,  3516, 10360,  -642,  -642,  -642,  8897,    74,
    2467,   530,    47,  3516,   445,  3516,   446,   451, 10297,   454,
   10325,   455,   456,   673,  -642,   121,  7141,  -642,  -642,  -642,
    3516,  -642,  3516,  -642,  3516,  -642,   685,   630,  -642,   488,
    -642,   695,  3516,  3516, 10360,  3516,  8937,  3516,  8989,  9002,
    3516,  3516,  9029,  3516,  3516,  3516,  3516,  -642,   699,   477,
     478,  3516,  3516,  -642,  -642,   929,  -642,   663,   665,   668,
     672,   485,   491,   498,    31,  7302,  9064,  7365,  -642,   229,
    9094,  7378,  3516,  7141,  -642,  -642,  7141,  3969,  6067,  4192,
    6246,  6425,  3516,   486,  3516,   500,   501,  3746,   719,  -642,
    -642,  7394,  7407,  7470,   503,   512,  -642, 10360, 10360,  9129,
    3516,  9156,  3516,  3516,  9169,  9221,  3516, 10360,  9261,  9313,
    9326,  -642,  3516,  3516,  9353,  9388,   266,  -642,  -642,  -642,
    -642,   131,   131,   131,  3516,  -642,  -642,  3516,  -642,  -642,
    3516,  -642,  9418,   727,   729,  3746,  3516,   671,  3746,   674,
    3746,  3516,   675,  3746,   676,  3746,   679,  4415,  6604,  4638,
    6783,  6962,   678,  3746,  -642,  -642,  -642,  -642,   929,  3516,
    9453,  3516,  9480,  9493,  3516,  3516, 10360,   929,   929,   929,
    9545,  9585,  3516,  3516,  -642,   140,   515,   523,   524,  7532,
    7545,  7562,  3516,  -642,   687,   683,  4861,  -642,   688,  -642,
     691,  5084,  -642,   692,  -642,   693,  -642,  3746,  3516,   694,
    3746,   701,  3746,  3516,   702,  3746,   703,  3746,   706,  -642,
     715,   295, 10360,  3516, 10360,  3516,  3516,  9637, 10360,   277,
     277,   277,  3516,  3516, 10360, 10360,  -642,  -642,  -642,  -642,
    -642,  -642,  9650,  -642,  -642,  3746,   710,  -642,  -642,  3746,
     712,  -642,  -642,   713,  5307,  -642,   714,  -642,   716,  5530,
    -642,   720,  -642,   721,  -642,  -642,  -642, 10360,  9677,  9712,
    3516,  9742,  9777,  3516,   722,  -642,   728,  -642,  -642,  3746,
     730,  -642,  -642,  3746,   731,  -642,  -642,  3516,  3516,  9804,
    3516,  3516,  9817,  -642,  -642,   734,  -642,   736,  -642,  9869,
    9909,  3516,  9961,  9974,  3516,  -642,  -642,  3516,  3516, 10360,
    3516,  3516, 10001, 10360, 10036, 10360, 10360,  3516,  3516, 10066,
   10101,  3516,  3516, 10128, 10141,  3516,  3516, 10360, 10360
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -642,  -642,   741,    49,   182,    24,  -210,  -641,   -17,   463,
     837,    93,  1108,    -6,   344,  -642,  -281,  -642,  -232,  -642,
    -642,  -642,    96,  -642,   145,    43,   -83,  -642,   -20,  -642,
    -642,   537,  -642,  -227,  -642,   333,  -642,   -92,  -642,    92,
    -642
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -37
static const yytype_int16 yytable[] =
{
     210,   211,   212,   213,   319,   320,    91,    92,   436,    91,
      92,   423,   238,   241,    88,   321,   322,   323,   324,   713,
     222,   714,    89,   229,   370,    87,   251,   252,   412,   254,
     255,   256,   258,   261,   262,    90,   264,   265,   266,   267,
      91,    92,    94,   461,   279,     2,     3,   108,   109,    74,
     286,   287,   288,    95,   289,   401,   402,   403,   404,   208,
     414,   405,   406,   407,   214,   102,   103,   104,   221,   586,
     224,   307,   308,   310,   588,   304,   311,   401,   402,   403,
     404,   645,   646,   405,   406,   407,   223,   293,   313,   316,
     316,   316,   413,   401,   402,   403,   404,   337,   338,   405,
     406,   407,   342,   343,    96,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   775,   215,
     216,   217,   227,    74,   415,   237,   237,   776,    97,     2,
       3,   239,     5,   587,    98,   105,   106,   594,   589,   373,
     401,   402,   403,   404,   333,   334,   405,   406,   407,   246,
     247,   248,   377,   227,   401,   402,   403,   404,   610,   611,
     405,   406,   407,    99,   875,   417,   418,   419,     2,     3,
     108,   109,   388,   389,   227,     2,     3,   108,   109,   381,
     876,   877,   878,   382,   244,   245,   100,   227,   227,   227,
     227,   788,   303,   789,   101,   396,   397,   401,   402,   403,
     404,   219,   604,   405,   406,   407,   280,   401,   402,   403,
     404,   218,   312,   405,   406,   407,   240,   220,   401,   402,
     403,   404,   242,   371,   405,   406,   407,   398,   399,   400,
     513,   514,   515,   631,    93,   632,   443,   329,   268,   283,
     447,   269,   449,   450,   284,   422,   453,   507,   508,   509,
     285,   458,   459,   401,   402,   403,   404,   290,   292,   405,
     406,   407,   293,   305,   279,   824,   426,   825,   408,   645,
     646,   647,   460,   302,   306,   325,   326,   472,   473,   474,
     475,   476,   477,   478,   479,   483,   327,   416,   380,   658,
     401,   402,   403,   404,   328,   330,   405,   406,   407,   331,
     332,   401,   402,   403,   404,   659,   492,   405,   406,   407,
     339,   310,   506,   376,   340,   341,   484,   471,   485,   401,
     402,   403,   404,   344,   345,   405,   406,   407,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   598,   481,   535,     2,     3,
     108,   109,   660,   346,   542,   543,   427,   544,   545,   347,
     348,   547,   548,   227,   439,   411,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   717,   270,     2,     3,   108,   109,
     349,   577,   578,   579,   350,   581,   428,   583,   237,   231,
     232,   233,   234,   650,   351,   227,   352,   353,   429,   681,
     354,   355,   356,   600,   601,   602,   603,   294,   310,   682,
     357,   609,   358,   229,   612,   613,   280,   615,   616,   617,
     688,   619,   437,   359,   622,   623,   360,   625,   626,   627,
     628,   294,   361,   362,   363,   593,   633,   480,   482,   635,
     636,   637,   638,   639,   364,   295,   296,   297,   298,   299,
     300,   301,   365,    77,    77,   829,   366,   641,   367,   642,
     368,   369,   644,   401,   402,   403,   404,   488,   372,   405,
     406,   407,   374,   375,   510,   511,   512,   313,   378,   316,
     494,   379,    77,   430,   431,    77,    77,   434,   401,   402,
     403,   404,   874,   432,   405,   406,   407,   533,   534,   433,
     536,   537,   538,   539,   540,   333,   334,   435,     2,     3,
     438,   209,   227,    77,   689,   640,   440,   462,   465,   694,
     493,   956,   463,   698,   466,   467,   495,    77,     2,     3,
     108,     5,   496,   497,    77,   498,   570,   571,   572,   573,
     574,   575,   576,   227,   499,   227,   500,    77,    77,    77,
      77,   501,   502,   503,   505,   504,   834,   541,   549,   708,
     580,   710,   401,   402,   403,   404,   335,   582,   405,   406,
     407,   584,   590,   585,   596,   606,   227,   383,   227,   634,
     643,   649,   388,   389,   651,   652,   653,   734,   394,   395,
     728,   736,   591,   738,   739,   655,   595,   742,   656,   597,
     657,   661,   662,   663,   697,   407,   700,   773,   704,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   706,   707,   709,   712,   711,   716,   719,   718,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   727,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   729,   765,   766,
     767,   748,   761,   755,   730,   770,   771,   396,   397,   762,
     763,   778,   780,   684,    77,    77,   777,   781,   779,   783,
     785,   786,   787,   794,   401,   402,   403,   404,   795,   227,
     405,   406,   407,   791,   647,   792,   811,   793,   685,   396,
     397,   812,   813,   817,   818,   797,   798,   819,   799,   821,
     801,   820,   848,   804,   805,   822,   807,   808,   809,   810,
     396,   397,   823,    77,   814,   815,   850,   851,   853,   857,
     790,   398,   399,   400,   396,   397,   883,   858,   884,   887,
     909,   926,   889,   892,   894,   832,    77,   896,   933,   927,
     928,   934,   398,   399,   400,   847,   937,   849,    77,   938,
     941,   942,   945,   599,   715,    77,   398,   399,   400,   947,
     950,   952,   686,   860,   954,   862,   863,   955,   965,   866,
     967,   968,   971,   774,   972,   870,   871,   833,   975,   976,
     983,   837,   839,   842,   844,   846,   984,   879,   986,   988,
     880,   383,   995,   881,   996,   291,   388,   389,   464,   886,
     392,   393,   394,   395,   891,   796,   648,     0,     0,   764,
     486,   757,   487,   758,   759,   760,   769,    78,    78,     0,
       0,     0,   912,     0,   914,     0,     0,   917,   918,     0,
       0,   489,     0,   490,     0,   924,   925,     0,     0,     0,
       0,     0,     0,     0,     0,   932,    78,   491,     0,    78,
      78,   899,   901,   904,   906,   908,     0,     0,     0,     0,
       0,   944,     0,    77,    77,     0,   949,    77,     0,     0,
      77,     0,    77,     0,     0,     0,   957,    78,   958,   959,
     816,   396,   397,     0,   687,   961,   962,     0,     0,     0,
     936,    78,     0,     0,     0,   940,     0,     0,    78,     0,
       0,     0,     0,    77,     0,    77,     0,     0,     0,     0,
       0,    78,    78,    78,    78,   107,     0,     0,   108,   243,
       0,     0,     0,   979,     0,     0,   982,   112,     0,     0,
     336,     0,     0,     0,     0,     0,    77,     0,    77,     0,
     989,   990,     0,   992,   993,     0,     0,     0,   970,   852,
       0,     0,     0,   974,   999,     0,     0,  1002,     0,     0,
    1003,  1004,     0,  1005,  1006,     0,     0,     0,     0,     0,
    1009,  1010,     0,     0,  1013,  1014,   120,     0,  1017,  1018,
       0,     0,     0,   911,     0,     0,     0,     0,     0,     0,
       0,     0,   919,   920,   921,     0,     0,   885,     0,     0,
     888,     0,   890,     0,     0,   893,     0,   895,     0,     0,
       0,     0,     0,     0,     0,   910,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,    77,     0,    77,    78,    78,
       0,     0,   146,     0,   148,   149,   150,     0,   152,    77,
     153,     0,     0,   155,     0,     0,     0,     0,     0,   943,
       0,     0,   946,     0,   948,     0,     0,   951,     0,   953,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,    78,     0,     0,
       0,     0,    77,     0,    77,    77,    77,   964,     0,     0,
       0,   966,     0,     0,   205,     0,   396,   397,     0,   205,
      78,     0,     0,   205,     0,   205,   205,   228,   192,     0,
       0,     0,    78,     0,     0,     0,   194,   205,   205,    78,
       0,   985,     0,     0,     0,   987,     0,     0,   398,   399,
     400,   -36,   -36,     0,     0,   383,     0,     0,   228,   205,
     388,   389,     0,     0,   392,   393,   394,   395,     0,    77,
       0,   396,   397,     0,     0,     0,     0,     0,     0,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   228,   228,   228,   228,   205,   205,   205,   205,
       0,     0,   -36,   398,   399,   400,     0,     0,     0,     0,
     -36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,    77,
      77,    77,    77,    77,    77,     0,     0,   720,     0,   721,
      77,     0,     0,     0,     0,   396,   397,    78,    78,     0,
       0,    78,     0,     0,    78,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   205,     0,     0,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,    78,    77,    78,
       0,    77,   722,    77,   723,     0,    77,     0,    77,     0,
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
      78,     0,   724,     0,   725,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,   205,
     205,   205,   205,   205,   205,   205,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,     0,   205,   228,     0,     0,
       0,     0,     0,     0,     0,     0,   551,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   228,     0,
     228,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,   396,   397,     0,     0,     0,
     205,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   228,     0,   228,     0,     0,   396,   397,     0,     0,
      78,     0,     0,    78,    78,    78,    78,    78,    78,     0,
       0,     0,     0,     0,    78,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   398,   399,
     400,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,     0,     0,     0,
       0,   396,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,    78,     0,    78,     0,     0,
      78,     0,    78,     0,    78,    78,    78,    78,    78,     0,
      78,     0,     0,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,   205,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   228,   396,   397,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,    78,   629,
       0,   396,   397,     0,    78,     0,     0,    78,     0,    78,
       0,     0,    78,     0,    78,     0,     0,   398,   399,   400,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   398,   399,   400,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,    78,     0,     0,     0,
       0,    78,     0,     0,   630,     0,    78,     0,     0,     0,
       0,     0,   205,     0,     0,     0,     0,     0,     0,   205,
       0,   105,   106,     0,     2,     3,    78,   209,   205,     0,
      78,     0,     0,   110,   111,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,   654,     0,
     396,   397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   664,   114,     0,     0,   115,   116,
     117,   118,   119,   205,     0,     0,     0,     0,     0,     0,
       0,     0,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,   123,   124,   396,   397,   125,   126,   127,
       0,     0,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
       0,   147,     0,     0,     0,   151,     0,   398,   399,   400,
     154,     0,     0,     0,     0,   156,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,     0,     0,   165,     0,
       0,     0,     0,   665,     0,   166,   205,     0,   167,     0,
       0,     0,     0,     0,     0,   205,   205,   205,     0,     0,
       0,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,     0,   190,   191,   105,   106,     0,     2,
       3,     0,   209,   193,     0,     0,     0,     0,   110,   111,
     195,   196,     0,     0,     0,     0,   409,   197,   198,   199,
       0,     0,   200,   309,     0,   113,     0,     0,     0,     0,
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
       0,     0,   197,   198,   199,     0,     0,   200,   605,   105,
     106,   107,     2,     3,   108,   109,     0,     0,     0,     0,
       0,   110,   111,   112,     0,     0,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,   275,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,   115,   116,   117,   118,
     119,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,   124,     0,     0,   125,   126,   127,     0,     0,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,     0,   153,     0,   154,   155,
       0,     0,     0,   156,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,     0,     0,   165,     0,     0,     0,
       0,     0,     0,   166,     0,     0,   167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,     0,   190,   191,   192,     0,     0,   277,     0,     0,
       0,   193,   194,     0,     0,     0,     0,     0,   195,   196,
       0,     0,     0,     0,     0,   197,   198,   199,     0,   278,
     200,   105,   106,   107,     2,     3,   108,   109,     0,     0,
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
     187,   188,   189,     0,   190,   191,   192,     0,     0,     0,
       0,     0,     0,   193,   194,     0,     0,     0,     0,     0,
     195,   196,     0,     0,     0,     0,     0,   197,   198,   199,
     105,   106,   200,     2,     3,     0,   209,     0,     0,     0,
       0,     0,   110,   111,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,   115,   116,   117,
     118,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   123,   124,   396,   397,   125,   126,   127,     0,
       0,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,     0,
     147,     0,     0,     0,   151,     0,   398,   399,   400,   154,
       0,     0,     0,     0,   156,     0,     0,   157,   158,   159,
     160,   161,   162,   163,   164,     0,     0,   165,     0,     0,
       0,     0,   253,     0,   166,     0,     0,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,     0,   190,   191,   105,   106,     0,     2,     3,
       0,   209,   193,     0,     0,     0,     0,   110,   111,   195,
     196,     0,     0,     0,     0,   441,   197,   198,   199,     0,
       0,   200,     0,     0,   113,     0,     0,     0,     0,     0,
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
       0,     0,   165,     0,     0,     0,     0,     0,   257,   166,
       0,     0,   167,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,     0,   190,   191,
     105,   106,     0,     2,     3,     0,   209,   193,     0,     0,
       0,     0,   110,   111,   195,   196,     0,     0,     0,     0,
       0,   197,   198,   199,     0,     0,   200,     0,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,   115,   116,   117,
     118,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   123,   124,     0,     0,   125,   126,   127,     0,
       0,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,     0,
     147,     0,     0,     0,   151,     0,     0,     0,     0,   154,
       0,     0,     0,     0,   156,     0,     0,   157,   158,   159,
     160,   161,   162,   163,   164,     0,     0,   165,     0,     0,
       0,     0,     0,   259,   260,     0,     0,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,     0,   190,   191,   105,   106,     0,     2,     3,
       0,   209,   193,     0,     0,     0,     0,   110,   111,   195,
     196,     0,     0,     0,     0,     0,   197,   198,   199,     0,
       0,   200,     0,     0,   113,     0,     0,     0,     0,     0,
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
       0,     0,   165,     0,     0,     0,     0,     0,   263,   166,
       0,     0,   167,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,     0,   190,   191,
     105,   106,     0,     2,     3,     0,   209,   193,     0,     0,
       0,     0,   110,   111,   195,   196,     0,     0,     0,     0,
       0,   197,   198,   199,     0,     0,   200,     0,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,   115,   116,   117,
     118,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   123,   124,     0,     0,   125,   126,   127,     0,
       0,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,     0,
     147,     0,     0,     0,   151,     0,     0,     0,     0,   154,
       0,     0,     0,     0,   156,     0,     0,   157,   158,   159,
     160,   161,   162,   163,   164,     0,     0,   165,     0,     0,
       0,     0,     0,     0,   166,     0,     0,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,     0,   190,   191,     0,     0,     0,     0,     0,
       0,     0,   193,     0,     0,     0,     0,     0,     0,   195,
     196,     0,     0,     0,     0,     0,   197,   198,   199,     1,
       0,   200,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,    15,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,    17,    18,    19,     0,     0,     0,
       0,    20,     0,     0,     0,    21,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,     0,    26,     0,     0,
       0,     0,     0,    27,     0,     0,    28,    29,    30,     0,
      31,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   396,   397,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,    40,    41,     0,   398,   399,
     400,     0,     0,     0,     0,    42,     0,    43,    44,     0,
      45,    46,     0,     0,     0,    47,    48,     0,    49,     0,
      50,     0,     0,    51,    52,    53,     0,    54,    55,    56,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,    58,    59,    60,    61,     0,     0,
       0,     0,    62,    63,     0,     0,    64,    65,    66,     0,
       0,    67,    68,    69,    70,    71,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   835,   666,
       0,     0,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,   396,   397,     0,     0,     0,     0,    17,    18,    19,
       0,     0,     0,     0,    20,     0,     0,     0,    21,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,     0,
      26,   836,     0,   398,   399,   400,    27,     0,     0,    28,
      29,    30,     0,    31,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,   396,   397,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,   398,   399,   400,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,    44,     0,    45,    46,     0,     0,     0,    47,    48,
       0,    49,     0,    50,   667,     0,    51,    52,    53,     0,
      54,    55,    56,     0,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
      61,     0,     0,     0,     0,    62,    63,     0,     0,    64,
      65,    66,     0,     0,    67,    68,    69,    70,    71,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   840,     0,     0,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     0,     0,
       0,     0,     0,    16,   396,   397,     0,     0,     0,     0,
      17,    18,    19,     0,     0,     0,     0,    20,     0,     0,
       0,    21,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,    26,   841,     0,   398,   399,   400,    27,
       0,     0,    28,    29,    30,     0,    31,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,   398,   399,   400,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,    44,     0,    45,    46,     0,     0,
       0,    47,    48,     0,    49,     0,    50,   668,     0,    51,
      52,    53,     0,    54,    55,    56,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,    61,     0,     0,     0,     0,    62,    63,
       0,     0,    64,    65,    66,     0,     0,    67,    68,    69,
      70,    71,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   897,     0,     0,     0,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,     0,     0,     0,     0,     0,    16,   396,   397,     0,
       0,     0,     0,    17,    18,    19,     0,     0,     0,     0,
      20,     0,     0,     0,    21,     0,     0,     0,     0,    22,
      23,    24,    25,     0,     0,     0,    26,   898,     0,   398,
     399,   400,    27,     0,     0,    28,    29,    30,     0,    31,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,     0,     0,
     398,   399,   400,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,    44,     0,    45,
      46,     0,     0,     0,    47,    48,     0,    49,     0,    50,
     669,     0,    51,    52,    53,     0,    54,    55,    56,     0,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,    61,     0,     0,     0,
       0,    62,    63,     0,     0,    64,    65,    66,     0,     0,
      67,    68,    69,    70,    71,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   902,     0,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,     0,     0,     0,     0,     0,    16,
     396,   397,     0,     0,     0,     0,    17,    18,    19,     0,
       0,     0,     0,    20,     0,     0,     0,    21,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,    26,
     903,     0,   398,   399,   400,    27,     0,     0,    28,    29,
      30,     0,    31,     0,     0,     0,    32,    33,    34,    35,
      36,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,   396,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,   398,   399,   400,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
      44,     0,    45,    46,     0,     0,     0,    47,    48,     0,
      49,     0,    50,   670,     0,    51,    52,    53,     0,    54,
      55,    56,     0,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,    61,
       0,     0,     0,     0,    62,    63,     0,     0,    64,    65,
      66,     0,     0,    67,    68,    69,    70,    71,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     935,     0,     0,     0,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,     0,     0,
       0,     0,    16,   396,   397,     0,     0,     0,     0,    17,
      18,    19,     0,     0,     0,     0,    20,     0,     0,     0,
      21,     0,     0,     0,     0,    22,    23,    24,    25,     0,
       0,     0,    26,     0,     0,   398,   399,   400,    27,     0,
       0,    28,    29,    30,     0,    31,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,   396,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,   398,   399,   400,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,     0,    45,    46,     0,     0,     0,
      47,    48,     0,    49,     0,    50,   671,     0,    51,    52,
      53,     0,    54,    55,    56,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,    61,     0,     0,     0,     0,    62,    63,     0,
       0,    64,    65,    66,     0,     0,    67,    68,    69,    70,
      71,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   939,     0,     0,     0,   383,   384,   385,
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
       0,     0,     0,    47,    48,     0,    49,     0,    50,   672,
       0,    51,    52,    53,     0,    54,    55,    56,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,    61,     0,     0,     0,     0,
      62,    63,     0,     0,    64,    65,    66,     0,     0,    67,
      68,    69,    70,    71,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   969,     0,     0,     0,
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
       0,    50,   673,     0,    51,    52,    53,     0,    54,    55,
      56,     0,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,    61,     0,
       0,     0,     0,    62,    63,     0,     0,    64,    65,    66,
       0,     0,    67,    68,    69,    70,    71,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   973,
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
       0,     0,     0,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,    39,     0,     0,   398,   399,   400,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,     0,    45,    46,     0,     0,     0,    47,
      48,     0,    49,     0,    50,   674,     0,    51,    52,    53,
       0,    54,    55,    56,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   420,     0,
       0,     0,     0,     0,     0,     0,    57,     0,    58,    59,
      60,    61,     0,   396,   397,     0,    62,    63,     0,     0,
      64,    65,    66,     0,    15,    67,    68,    69,    70,    71,
      16,     0,     0,     0,     0,     0,     0,    17,    18,    19,
       0,     0,     0,     0,    20,   398,   399,   400,    21,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,     0,
      26,     0,   421,     0,     0,     0,    27,     0,     0,    28,
      29,    30,     0,    31,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,     0,     0,     0,     0,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,   675,     0,    42,     0,
      43,    44,     0,    45,    46,     0,     0,     0,    47,    48,
       0,    49,     0,    50,     0,     0,    51,    52,    53,     0,
      54,    55,    56,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   592,   396,   397,
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
      39,   676,     0,     0,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,   677,     0,    42,     0,    43,
      44,     0,    45,    46,     0,     0,     0,    47,    48,     0,
      49,     0,    50,     0,     0,    51,    52,    53,     0,    54,
      55,    56,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   838,   396,   397,     0,
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
     678,     0,     0,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,   679,     0,    42,     0,    43,    44,
       0,    45,    46,     0,     0,     0,    47,    48,     0,    49,
       0,    50,     0,     0,    51,    52,    53,     0,    54,    55,
      56,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   843,   396,   397,     0,     0,
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
     394,   395,     0,     0,     0,     0,     0,     0,    39,   680,
       0,     0,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,   683,     0,    42,     0,    43,    44,     0,
      45,    46,     0,     0,     0,    47,    48,     0,    49,     0,
      50,     0,     0,    51,    52,    53,     0,    54,    55,    56,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   845,   396,   397,     0,     0,     0,
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
     395,     0,     0,     0,     0,     0,     0,    39,   690,     0,
       0,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,   695,     0,    42,     0,    43,    44,     0,    45,
      46,     0,     0,     0,    47,    48,     0,    49,     0,    50,
       0,     0,    51,    52,    53,     0,    54,    55,    56,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   900,   396,   397,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,    61,     0,   396,   397,
       0,    62,    63,     0,     0,    64,    65,    66,     0,    15,
      67,    68,    69,    70,    71,    16,   398,   399,   400,     0,
       0,     0,    17,    18,    19,     0,     0,     0,     0,    20,
     398,   399,   400,    21,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,    26,     0,     0,     0,     0,
       0,    27,     0,     0,    28,    29,    30,     0,    31,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,     0,
       0,     0,     0,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,     0,     0,     0,     0,    39,   696,     0,     0,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,   699,     0,    42,     0,    43,    44,     0,    45,    46,
       0,     0,     0,    47,    48,     0,    49,     0,    50,     0,
       0,    51,    52,    53,     0,    54,    55,    56,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   905,   396,   397,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,    61,     0,   396,   397,     0,
      62,    63,     0,     0,    64,    65,    66,     0,    15,    67,
      68,    69,    70,    71,    16,   398,   399,   400,     0,     0,
       0,    17,    18,    19,     0,     0,     0,     0,    20,   398,
     399,   400,    21,     0,     0,     0,     0,    22,    23,    24,
      25,     0,     0,     0,    26,     0,     0,     0,     0,     0,
      27,     0,     0,    28,    29,    30,     0,    31,     0,     0,
       0,    32,    33,    34,    35,    36,    37,    38,     0,     0,
       0,     0,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,    39,   731,     0,     0,     0,
       0,     0,    40,    41,     0,     0,     0,     0,     0,     0,
     747,     0,    42,     0,    43,    44,     0,    45,    46,     0,
       0,     0,    47,    48,     0,    49,     0,    50,     0,     0,
      51,    52,    53,     0,    54,    55,    56,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   907,   396,   397,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    60,    61,     0,   396,   397,     0,    62,
      63,     0,     0,    64,    65,    66,     0,    15,    67,    68,
      69,    70,    71,    16,   398,   399,   400,     0,     0,     0,
      17,    18,    19,     0,     0,     0,     0,    20,   398,   399,
     400,    21,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,    26,     0,     0,     0,     0,     0,    27,
       0,     0,    28,    29,    30,     0,    31,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    38,     0,     0,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,     0,     0,     0,    39,   749,     0,     0,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,   750,
       0,    42,     0,    43,    44,     0,    45,    46,     0,     0,
       0,    47,    48,     0,    49,     0,    50,     0,     0,    51,
      52,    53,     0,    54,    55,    56,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,   396,   397,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,    61,     0,   396,   397,     0,    62,    63,
       0,     0,    64,    65,    66,     0,    15,    67,    68,    69,
      70,    71,    16,   398,   399,   400,     0,     0,     0,    17,
      18,    19,     0,     0,     0,     0,    20,   398,   399,   400,
      21,     0,     0,     0,     0,    22,    23,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,    28,    29,    30,     0,    31,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,     0,     0,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,     0,     0,    39,   753,     0,     0,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,   754,     0,
      42,     0,    43,    44,     0,    45,    46,     0,     0,     0,
      47,    48,     0,    49,     0,    50,     0,     0,    51,    52,
      53,     0,    54,    55,    56,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,   396,
     397,     0,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,    61,   396,   397,     0,     0,    62,    63,     0,
       0,    64,    65,    66,     0,     0,    67,    68,    69,    70,
      71,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   398,   399,   400,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,   396,   397,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   756,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   768,     0,   396,   397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   396,   397,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,   396,   397,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
     396,   397,     0,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   826,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,   399,   400,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,   396,   397,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
       0,   828,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   831,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     854,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   855,     0,   396,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,   396,   397,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   856,   398,   399,   400,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,   929,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   930,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   931,     0,
     396,   397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   396,   397,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   396,   397,     0,     0,
       0,     0,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,   396,   397,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,   399,
     400,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   442,     0,     0,   398,   399,   400,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
       0,   444,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   445,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,   448,     0,     0,     0,   396,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   396,   397,     0,     0,     0,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,     0,     0,
     398,   399,   400,     0,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   451,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   452,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   454,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
     396,   397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   396,   397,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,   455,
       0,     0,   398,   399,   400,   396,   397,     0,     0,     0,
       0,     0,     0,     0,     0,   398,   399,   400,     0,     0,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,     0,   398,   399,   400,
       0,     0,     0,     0,     0,   396,   397,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,   396,   397,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   456,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   457,     0,     0,   398,   399,   400,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,   468,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   396,   397,     0,
       0,     0,   398,   399,   400,     0,     0,     0,     0,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,   469,     0,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   470,     0,     0,     0,
       0,     0,   396,   397,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,   546,     0,     0,   398,   399,   400,     0,     0,     0,
       0,     0,   396,   397,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,   550,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   614,     0,     0,   398,   399,   400,     0,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,     0,   396,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   396,   397,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,   618,     0,     0,   398,   399,   400,     0,
       0,     0,     0,     0,   396,   397,     0,     0,     0,   398,
     399,   400,     0,     0,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,     0,
       0,     0,     0,   620,     0,     0,   398,   399,   400,   396,
     397,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,   396,
     397,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   621,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   624,     0,
       0,   398,   399,   400,   396,   397,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,   691,     0,     0,     0,     0,
       0,   396,   397,     0,     0,     0,   398,   399,   400,     0,
       0,     0,     0,     0,   396,   397,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
     692,     0,     0,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,   399,   400,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     693,     0,     0,     0,     0,     0,   396,   397,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,   726,     0,     0,   398,   399,
     400,     0,     0,     0,     0,     0,   396,   397,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,   732,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   733,     0,     0,   398,   399,
     400,     0,     0,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,     0,   396,   397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   396,   397,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,   735,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,   396,   397,
       0,     0,     0,   398,   399,   400,     0,     0,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,     0,     0,     0,     0,   737,     0,     0,
     398,   399,   400,   396,   397,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,   396,   397,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   740,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   741,     0,     0,   398,   399,   400,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,     0,     0,     0,   743,
       0,     0,     0,     0,     0,   396,   397,     0,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,   744,     0,     0,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   745,     0,     0,     0,     0,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,   746,
       0,     0,   398,   399,   400,     0,     0,     0,     0,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,   751,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   752,
       0,     0,   398,   399,   400,     0,     0,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,     0,   396,   397,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   397,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,   772,     0,     0,   398,   399,   400,     0,     0,     0,
       0,     0,   396,   397,     0,     0,     0,   398,   399,   400,
       0,     0,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,     0,     0,
       0,   800,     0,     0,   398,   399,   400,   396,   397,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,   396,   397,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   802,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   803,     0,     0,   398,
     399,   400,   396,   397,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,     0,
       0,     0,     0,   806,     0,     0,     0,     0,     0,   396,
     397,     0,     0,     0,   398,   399,   400,     0,     0,     0,
       0,     0,   396,   397,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,   827,     0,
       0,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,   399,   400,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   830,     0,
       0,     0,     0,     0,   396,   397,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,   859,     0,     0,   398,   399,   400,     0,
       0,     0,     0,     0,   396,   397,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
     861,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   864,     0,     0,   398,   399,   400,     0,
       0,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,     0,   396,   397,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   396,
     397,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,     0,   865,     0,     0,   398,   399,
     400,     0,     0,     0,     0,     0,   396,   397,     0,     0,
       0,   398,   399,   400,     0,     0,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,   867,     0,     0,   398,   399,
     400,   396,   397,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,   396,   397,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   868,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     869,     0,     0,   398,   399,   400,   396,   397,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,     0,     0,     0,     0,     0,   872,     0,     0,
       0,     0,     0,   396,   397,     0,     0,     0,   398,   399,
     400,     0,     0,     0,     0,     0,   396,   397,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,   873,     0,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,   399,
     400,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   882,     0,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,     0,   913,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,   396,   397,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,   915,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   916,     0,     0,
     398,   399,   400,     0,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,     0,
     396,   397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   396,   397,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,     0,   922,
       0,     0,   398,   399,   400,     0,     0,     0,     0,     0,
     396,   397,     0,     0,     0,   398,   399,   400,     0,     0,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,     0,     0,     0,     0,   923,
       0,     0,   398,   399,   400,   396,   397,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,   396,   397,   398,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   960,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   963,     0,     0,   398,   399,   400,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,     0,     0,     0,     0,
       0,   977,     0,     0,     0,     0,     0,   396,   397,     0,
       0,     0,   398,   399,   400,     0,     0,     0,     0,     0,
     396,   397,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,     0,   978,     0,     0,   398,
     399,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   980,     0,     0,     0,
       0,     0,   396,   397,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
       0,   981,     0,     0,   398,   399,   400,     0,     0,     0,
       0,     0,   396,   397,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,   991,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   994,     0,     0,   398,   399,   400,     0,     0,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,     0,   396,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   396,   397,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,   997,     0,     0,   398,   399,   400,     0,
       0,     0,     0,     0,   396,   397,     0,     0,     0,   398,
     399,   400,     0,     0,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,     0,
       0,     0,     0,   998,     0,     0,   398,   399,   400,   396,
     397,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,     0,     0,   396,
     397,   398,   399,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1000,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1001,     0,
       0,   398,   399,   400,   396,   397,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
       0,     0,     0,     0,     0,  1007,     0,     0,     0,     0,
       0,   396,   397,     0,     0,     0,   398,   399,   400,     0,
       0,     0,     0,     0,   396,   397,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,     0,
    1008,     0,     0,   398,   399,   400,     0,   703,     0,     0,
       0,     0,     0,     0,     0,     0,   398,   399,   400,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1011,     0,     0,     0,     0,     0,   396,   397,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   705,     0,     0,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,     0,     0,  1012,     0,     0,   398,   399,
     400,     0,     0,     0,     0,     0,   396,   397,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     0,  1015,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1016,     0,     0,   398,   399,
     400,   782,     0,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   383,   410,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   784,
     396,   397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
       0,     0,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,   399,   400,   396,   397,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   396,   397,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   398,   399,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,   399,
     400
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-642)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      17,    18,    19,    20,    96,    97,     7,     8,   240,     7,
       8,   221,    32,    33,   235,    98,    99,   100,   101,    70,
      19,    72,   235,    29,    36,     1,    43,    44,    24,    46,
      47,    48,    49,    50,    51,   235,    53,    54,    55,    56,
       7,     8,   235,   270,    61,     7,     8,     9,    10,     0,
      67,    68,    69,   235,    71,    24,    25,    26,    27,    16,
      24,    30,    31,    32,    21,     7,     8,     9,    25,    24,
      27,    88,    89,    90,    24,    81,    93,    24,    25,    26,
      27,     7,     8,    30,    31,    32,    85,    20,    94,    95,
      96,    97,    88,    24,    25,    26,    27,   114,   115,    30,
      31,    32,   119,   120,   235,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    71,     7,
       8,     9,    29,    74,    88,    32,    33,    80,   235,     7,
       8,     9,    10,    88,   235,     4,     5,    70,    88,   156,
      24,    25,    26,    27,     4,     5,    30,    31,    32,     7,
       8,     9,   169,    60,    24,    25,    26,    27,   439,   440,
      30,    31,    32,   235,    33,     7,     8,     9,     7,     8,
       9,    10,    28,    29,    81,     7,     8,     9,    10,   196,
     821,   822,   823,   200,    39,    40,   235,    94,    95,    96,
      97,    70,    24,    72,   235,   113,   114,    24,    25,    26,
      27,     4,   434,    30,    31,    32,    61,    24,    25,    26,
      27,    99,    51,    30,    31,    32,    94,     4,    24,    25,
      26,    27,     8,   235,    30,    31,    32,   145,   146,   147,
       7,     8,     9,   460,   235,   462,   253,   235,   235,     7,
     257,   235,   259,   260,    10,   221,   263,   330,   331,   332,
      10,   268,   269,    24,    25,    26,    27,     0,    19,    30,
      31,    32,    20,   234,   281,   234,   223,   236,   235,     7,
       8,     9,   234,    24,    19,   234,   234,   294,   295,   296,
     297,   298,   299,   300,   301,   305,   234,    88,    10,   236,
      24,    25,    26,    27,   235,   235,    30,    31,    32,   235,
     235,    24,    25,    26,    27,   236,   312,    30,    31,    32,
     235,   328,   329,   168,   235,   235,   234,   293,   236,    24,
      25,    26,    27,   235,   235,    30,    31,    32,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   428,   303,   364,     7,     8,
       9,    10,   236,   235,   371,   372,    19,   374,   375,   235,
     235,   378,   379,   270,   234,    79,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   594,     6,     7,     8,     9,    10,
     235,   408,   409,   410,   235,   412,   234,   414,   305,     7,
       8,     9,    10,   495,   235,   312,   235,   235,   234,   236,
     235,   235,   235,   430,   431,   432,   433,    24,   435,   236,
     235,   438,   235,   429,   441,   442,   281,   444,   445,   446,
     236,   448,    19,   235,   451,   452,   235,   454,   455,   456,
     457,    24,   235,   235,   235,   421,   463,   302,    24,   466,
     467,   468,   469,   470,   235,    38,    39,    40,    41,    42,
      43,    44,   235,     0,     1,   236,   235,   484,   235,   486,
     235,   235,   489,    24,    25,    26,    27,    24,   235,    30,
      31,    32,   235,   235,   339,   340,   341,   493,   235,   495,
     236,   235,    29,   235,   235,    32,    33,   234,    24,    25,
      26,    27,   236,   235,    30,    31,    32,   362,   363,   235,
     365,   366,   367,   368,   369,     4,     5,   235,     7,     8,
     235,    10,   429,    60,   541,   482,   234,   234,   234,   546,
     234,   236,   235,   550,   235,   235,   234,    74,     7,     8,
       9,    10,   236,   236,    81,   236,   401,   402,   403,   404,
     405,   406,   407,   460,   236,   462,   236,    94,    95,    96,
      97,   236,   236,     7,     9,     8,   776,   235,   234,   586,
      19,   588,    24,    25,    26,    27,   113,     7,    30,    31,
      32,     8,    88,     9,    85,    97,   493,    23,   495,     7,
      68,    19,    28,    29,    19,    19,    19,   614,    34,    35,
     606,   618,   420,   620,   621,   236,   424,   624,   236,   427,
     236,   235,   235,   235,    10,    32,    86,   700,   235,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,   235,   235,     7,     9,     8,    70,    73,   596,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    24,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    19,   685,   686,
     687,   234,   236,   235,    96,   692,   693,   113,   114,   236,
     236,   236,   236,   234,   221,   222,   703,   236,   705,   235,
     235,   235,    19,     8,    24,    25,    26,    27,    68,   606,
      30,    31,    32,   720,     9,   722,     7,   724,   234,   113,
     114,   234,   234,    50,    49,   732,   733,    49,   735,   234,
     737,    49,   236,   740,   741,   234,   743,   744,   745,   746,
     113,   114,   234,   270,   751,   752,   236,   236,    19,   236,
     716,   145,   146,   147,   113,   114,    19,   235,    19,    78,
      72,   236,    78,    78,    78,   772,   293,    78,    71,   236,
     236,    78,   145,   146,   147,   782,    78,   784,   305,    78,
      78,    78,    78,   429,   592,   312,   145,   146,   147,    78,
      78,    78,   234,   800,    78,   802,   803,    72,    78,   806,
      78,    78,    78,   701,    78,   812,   813,   773,    78,    78,
      78,   777,   778,   779,   780,   781,    78,   824,    78,    78,
     827,    23,    78,   830,    78,    74,    28,    29,   281,   836,
      32,    33,    34,    35,   841,   729,   493,    -1,    -1,   684,
     234,   649,   236,   651,   652,   653,   691,     0,     1,    -1,
      -1,    -1,   859,    -1,   861,    -1,    -1,   864,   865,    -1,
      -1,   234,    -1,   236,    -1,   872,   873,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   882,    29,   236,    -1,    32,
      33,   847,   848,   849,   850,   851,    -1,    -1,    -1,    -1,
      -1,   898,    -1,   420,   421,    -1,   903,   424,    -1,    -1,
     427,    -1,   429,    -1,    -1,    -1,   913,    60,   915,   916,
     755,   113,   114,    -1,   234,   922,   923,    -1,    -1,    -1,
     886,    74,    -1,    -1,    -1,   891,    -1,    -1,    81,    -1,
      -1,    -1,    -1,   460,    -1,   462,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,     6,    -1,    -1,     9,    10,
      -1,    -1,    -1,   960,    -1,    -1,   963,    18,    -1,    -1,
     113,    -1,    -1,    -1,    -1,    -1,   493,    -1,   495,    -1,
     977,   978,    -1,   980,   981,    -1,    -1,    -1,   944,   787,
      -1,    -1,    -1,   949,   991,    -1,    -1,   994,    -1,    -1,
     997,   998,    -1,  1000,  1001,    -1,    -1,    -1,    -1,    -1,
    1007,  1008,    -1,    -1,  1011,  1012,    67,    -1,  1015,  1016,
      -1,    -1,    -1,   858,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   867,   868,   869,    -1,    -1,   835,    -1,    -1,
     838,    -1,   840,    -1,    -1,   843,    -1,   845,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   853,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,   592,    -1,   594,   221,   222,
      -1,    -1,   133,    -1,   135,   136,   137,    -1,   139,   606,
     141,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,   897,
      -1,    -1,   900,    -1,   902,    -1,    -1,   905,    -1,   907,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,   270,    -1,    -1,
      -1,    -1,   649,    -1,   651,   652,   653,   935,    -1,    -1,
      -1,   939,    -1,    -1,    16,    -1,   113,   114,    -1,    21,
     293,    -1,    -1,    25,    -1,    27,    28,    29,   209,    -1,
      -1,    -1,   305,    -1,    -1,    -1,   217,    39,    40,   312,
      -1,   969,    -1,    -1,    -1,   973,    -1,    -1,   145,   146,
     147,    19,    20,    -1,    -1,    23,    -1,    -1,    60,    61,
      28,    29,    -1,    -1,    32,    33,    34,    35,    -1,   716,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,    -1,    70,   145,   146,   147,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   773,    -1,    -1,   776,
     777,   778,   779,   780,   781,    -1,    -1,   234,    -1,   236,
     787,    -1,    -1,    -1,    -1,   113,   114,   420,   421,    -1,
      -1,   424,    -1,    -1,   427,    -1,   429,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,   460,   835,   462,
      -1,   838,   234,   840,   236,    -1,   843,    -1,   845,    -1,
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
     653,    -1,   234,    -1,   236,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,   401,
     402,   403,   404,   405,   406,   407,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   428,   429,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,
      -1,    -1,    -1,   716,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   460,    -1,
     462,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   113,   114,    -1,    -1,    -1,
     482,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   493,    -1,   495,    -1,    -1,   113,   114,    -1,    -1,
     773,    -1,    -1,   776,   777,   778,   779,   780,   781,    -1,
      -1,    -1,    -1,    -1,   787,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   145,   146,
     147,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   835,    -1,    -1,   838,    -1,   840,    -1,    -1,
     843,    -1,   845,    -1,   847,   848,   849,   850,   851,    -1,
     853,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   596,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   606,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,   886,    -1,    -1,    -1,    -1,   891,   236,
      -1,   113,   114,    -1,   897,    -1,    -1,   900,    -1,   902,
      -1,    -1,   905,    -1,   907,    -1,    -1,   145,   146,   147,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,   935,    -1,    -1,    -1,   939,    -1,    -1,    -1,
      -1,   944,    -1,    -1,   236,    -1,   949,    -1,    -1,    -1,
      -1,    -1,   684,    -1,    -1,    -1,    -1,    -1,    -1,   691,
      -1,     4,     5,    -1,     7,     8,   969,    10,   700,    -1,
     973,    -1,    -1,    16,    17,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   236,    58,    -1,    -1,    61,    62,
      63,    64,    65,   755,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,   113,   114,   110,   111,   112,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,   134,    -1,    -1,    -1,   138,    -1,   145,   146,   147,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,    -1,    -1,   161,    -1,
      -1,    -1,    -1,   236,    -1,   168,   858,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    -1,   867,   868,   869,    -1,    -1,
      -1,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,    -1,   207,   208,     4,     5,    -1,     7,
       8,    -1,    10,   216,    -1,    -1,    -1,    -1,    16,    17,
     223,   224,    -1,    -1,    -1,    -1,   234,   230,   231,   232,
      -1,    -1,   235,   236,    -1,    33,    -1,    -1,    -1,    -1,
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
      -1,    -1,   230,   231,   232,    -1,    -1,   235,   236,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,
      65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,   107,    -1,    -1,   110,   111,   112,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,    -1,   141,    -1,   143,   144,
      -1,    -1,    -1,   148,    -1,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,    -1,    -1,   161,    -1,    -1,    -1,
      -1,    -1,    -1,   168,    -1,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,    -1,   207,   208,   209,    -1,    -1,   212,    -1,    -1,
      -1,   216,   217,    -1,    -1,    -1,    -1,    -1,   223,   224,
      -1,    -1,    -1,    -1,    -1,   230,   231,   232,    -1,   234,
     235,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
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
     203,   204,   205,    -1,   207,   208,   209,    -1,    -1,    -1,
      -1,    -1,    -1,   216,   217,    -1,    -1,    -1,    -1,    -1,
     223,   224,    -1,    -1,    -1,    -1,    -1,   230,   231,   232,
       4,     5,   235,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,   113,   114,   110,   111,   112,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,    -1,
     134,    -1,    -1,    -1,   138,    -1,   145,   146,   147,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,   161,    -1,    -1,
      -1,    -1,   166,    -1,   168,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,    -1,   207,   208,     4,     5,    -1,     7,     8,
      -1,    10,   216,    -1,    -1,    -1,    -1,    16,    17,   223,
     224,    -1,    -1,    -1,    -1,   234,   230,   231,   232,    -1,
      -1,   235,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,   167,   168,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,    -1,   207,   208,
       4,     5,    -1,     7,     8,    -1,    10,   216,    -1,    -1,
      -1,    -1,    16,    17,   223,   224,    -1,    -1,    -1,    -1,
      -1,   230,   231,   232,    -1,    -1,   235,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,    -1,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,    -1,
     134,    -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,   161,    -1,    -1,
      -1,    -1,    -1,   167,   168,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,    -1,   207,   208,     4,     5,    -1,     7,     8,
      -1,    10,   216,    -1,    -1,    -1,    -1,    16,    17,   223,
     224,    -1,    -1,    -1,    -1,    -1,   230,   231,   232,    -1,
      -1,   235,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,   167,   168,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,    -1,   207,   208,
       4,     5,    -1,     7,     8,    -1,    10,   216,    -1,    -1,
      -1,    -1,    16,    17,   223,   224,    -1,    -1,    -1,    -1,
      -1,   230,   231,   232,    -1,    -1,   235,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,    -1,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,    -1,
     134,    -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,   161,    -1,    -1,
      -1,    -1,    -1,    -1,   168,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,    -1,   207,   208,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,
     224,    -1,    -1,    -1,    -1,    -1,   230,   231,   232,     3,
      -1,   235,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,   149,   150,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,
     164,   165,    -1,    -1,    -1,   169,   170,    -1,   172,    -1,
     174,    -1,    -1,   177,   178,   179,    -1,   181,   182,   183,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,   208,   209,   210,   211,    -1,    -1,
      -1,    -1,   216,   217,    -1,    -1,   220,   221,   222,    -1,
      -1,   225,   226,   227,   228,   229,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,   236,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,   113,   114,    -1,    -1,    -1,    -1,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    82,    -1,   145,   146,   147,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,   145,   146,   147,    -1,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
     161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,   170,
      -1,   172,    -1,   174,   236,    -1,   177,   178,   179,    -1,
     181,   182,   183,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   206,    -1,   208,   209,   210,
     211,    -1,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,
     221,   222,    -1,    -1,   225,   226,   227,   228,   229,     7,
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
      -1,   169,   170,    -1,   172,    -1,   174,   236,    -1,   177,
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
     236,    -1,   177,   178,   179,    -1,   181,   182,   183,    -1,
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
     172,    -1,   174,   236,    -1,   177,   178,   179,    -1,   181,
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
      -1,    -1,    81,    -1,    -1,   145,   146,   147,    87,    -1,
      -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,   145,   146,   147,    -1,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,    -1,
     169,   170,    -1,   172,    -1,   174,   236,    -1,   177,   178,
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
      -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,   236,
      -1,   177,   178,   179,    -1,   181,   182,   183,    -1,    23,
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
      -1,   174,   236,    -1,   177,   178,   179,    -1,   181,   182,
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
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,   145,   146,   147,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,   161,   162,    -1,   164,   165,    -1,    -1,    -1,   169,
     170,    -1,   172,    -1,   174,   236,    -1,   177,   178,   179,
      -1,   181,   182,   183,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,   208,   209,
     210,   211,    -1,   113,   114,    -1,   216,   217,    -1,    -1,
     220,   221,   222,    -1,    45,   225,   226,   227,   228,   229,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,   145,   146,   147,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,   159,    -1,
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
     142,   236,    -1,    -1,    -1,    -1,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,   236,    -1,   159,    -1,   161,
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
     236,    -1,    -1,    -1,    -1,    -1,   149,   150,    -1,    -1,
      -1,    -1,    -1,    -1,   236,    -1,   159,    -1,   161,   162,
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
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   142,   236,
      -1,    -1,    -1,    -1,    -1,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,   236,    -1,   159,    -1,   161,   162,    -1,
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
      35,    -1,    -1,    -1,    -1,    -1,    -1,   142,   236,    -1,
      -1,    -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,   236,    -1,   159,    -1,   161,   162,    -1,   164,
     165,    -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,
      -1,    -1,   177,   178,   179,    -1,   181,   182,   183,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   113,   114,    -1,    -1,    -1,    -1,
      -1,   206,    -1,   208,   209,   210,   211,    -1,   113,   114,
      -1,   216,   217,    -1,    -1,   220,   221,   222,    -1,    45,
     225,   226,   227,   228,   229,    51,   145,   146,   147,    -1,
      -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
     145,   146,   147,    69,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   236,    -1,    -1,
      -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,   236,    -1,   159,    -1,   161,   162,    -1,   164,   165,
      -1,    -1,    -1,   169,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,   178,   179,    -1,   181,   182,   183,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   113,   114,    -1,    -1,    -1,    -1,    -1,
     206,    -1,   208,   209,   210,   211,    -1,   113,   114,    -1,
     216,   217,    -1,    -1,   220,   221,   222,    -1,    45,   225,
     226,   227,   228,   229,    51,   145,   146,   147,    -1,    -1,
      -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,   145,
     146,   147,    69,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   236,    -1,    -1,    -1,
      -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
     236,    -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,
      -1,    -1,   169,   170,    -1,   172,    -1,   174,    -1,    -1,
     177,   178,   179,    -1,   181,   182,   183,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   113,   114,    -1,    -1,    -1,    -1,    -1,   206,
      -1,   208,   209,   210,   211,    -1,   113,   114,    -1,   216,
     217,    -1,    -1,   220,   221,   222,    -1,    45,   225,   226,
     227,   228,   229,    51,   145,   146,   147,    -1,    -1,    -1,
      58,    59,    60,    -1,    -1,    -1,    -1,    65,   145,   146,
     147,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   236,    -1,    -1,    -1,    -1,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,   236,
      -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,
      -1,   169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,
     178,   179,    -1,   181,   182,   183,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,   206,    -1,
     208,   209,   210,   211,    -1,   113,   114,    -1,   216,   217,
      -1,    -1,   220,   221,   222,    -1,    45,   225,   226,   227,
     228,   229,    51,   145,   146,   147,    -1,    -1,    -1,    58,
      59,    60,    -1,    -1,    -1,    -1,    65,   145,   146,   147,
      69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   236,    -1,    -1,    -1,    -1,    -1,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,
     159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,    -1,
     169,   170,    -1,   172,    -1,   174,    -1,    -1,   177,   178,
     179,    -1,   181,   182,   183,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,   208,
     209,   210,   211,   113,   114,    -1,    -1,   216,   217,    -1,
      -1,   220,   221,   222,    -1,    -1,   225,   226,   227,   228,
     229,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,   113,   114,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,   236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   236,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   236,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   113,   114,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   236,   145,   146,   147,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,   236,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   236,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,   145,   146,   147,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   234,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   234,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,   234,
      -1,    -1,   145,   146,   147,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   113,   114,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,   145,   146,   147,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   234,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
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
     234,    -1,    -1,   145,   146,   147,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     234,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   234,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,   145,   146,
     147,    84,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    84,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147
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
     228,   229,   238,   239,   240,   242,   243,   246,   247,   248,
     249,   256,   257,   264,   265,   266,   277,   242,   235,   235,
     235,     7,     8,   235,   235,   235,   235,   235,   235,   235,
     235,   235,     7,     8,     9,     4,     5,     6,     9,    10,
      16,    17,    18,    33,    58,    61,    62,    63,    64,    65,
      67,    94,   105,   106,   107,   110,   111,   112,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   141,   143,   144,   148,   151,   152,   153,
     154,   155,   156,   157,   158,   161,   168,   171,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     207,   208,   209,   216,   217,   223,   224,   230,   231,   232,
     235,   244,   245,   246,   247,   249,   260,   261,   262,    10,
     245,   245,   245,   245,   262,     7,     8,     9,    99,     4,
       4,   262,    19,    85,   262,   262,   263,   248,   249,   250,
     251,     7,     8,     9,    10,   254,   255,   248,   265,     9,
      94,   265,     8,    10,   261,   261,     7,     8,     9,   252,
     253,   245,   245,   166,   245,   245,   245,   167,   245,   167,
     168,   245,   245,   167,   245,   245,   245,   245,   235,   235,
       6,   250,   269,   270,    21,    36,    37,   212,   234,   245,
     261,   267,   268,     7,    10,    10,   245,   245,   245,   245,
       0,   239,    19,    20,    24,    38,    39,    40,    41,    42,
      43,    44,    24,    24,   250,   234,    19,   245,   245,   236,
     245,   245,    51,   250,   271,   272,   250,   273,   274,   274,
     274,   263,   263,   263,   263,   234,   234,   234,   235,   235,
     235,   235,   235,     4,     5,   246,   247,   245,   245,   235,
     235,   235,   245,   245,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
      36,   235,   235,   245,   235,   235,   261,   245,   235,   235,
      10,   245,   245,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,   113,   114,   145,   146,
     147,    24,    25,    26,    27,    30,    31,    32,   235,   234,
      24,    79,    24,    88,    24,    88,    88,     7,     8,     9,
      19,    83,   242,   243,   240,   241,   262,    19,   234,   234,
     235,   235,   235,   235,   234,   235,   255,    19,   235,   234,
     234,   234,   234,   245,   234,   234,   234,   245,   234,   245,
     245,   234,   234,   245,   234,   234,   234,   234,   245,   245,
     234,   270,   234,   235,   268,   234,   235,   235,   234,   234,
     234,   242,   245,   245,   245,   245,   245,   245,   245,   245,
     261,   262,    24,   265,   234,   236,   234,   236,    24,   234,
     236,   236,   250,   234,   236,   234,   236,   236,   236,   236,
     236,   236,   236,     7,     8,     9,   245,   263,   263,   263,
     261,   261,   261,     7,     8,     9,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   261,   261,   245,   261,   261,   261,   261,
     261,   235,   245,   245,   245,   245,   234,   245,   245,   234,
     234,   236,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     261,   261,   261,   261,   261,   261,   261,   245,   245,   245,
      19,   245,     7,   245,     8,     9,    24,    88,    24,    88,
      88,   241,    19,   242,    70,   241,    85,   241,   263,   251,
     245,   245,   245,   245,   255,   236,    97,   258,   259,   245,
     253,   253,   245,   245,   234,   245,   245,   245,   234,   245,
     234,   234,   245,   245,   234,   245,   245,   245,   245,   236,
     236,   270,   270,   245,     7,   245,   245,   245,   245,   245,
     262,   245,   245,    68,   245,     7,     8,     9,   272,    19,
     274,    19,    19,    19,   236,   236,   236,   236,   236,   236,
     236,   235,   235,   235,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   234,   234,   234,   234,   236,   245,
     236,   234,   234,   234,   245,   236,   236,    10,   245,   236,
      86,   275,   276,    84,   235,    84,   235,   235,   245,     7,
     245,     8,     9,    70,    72,   241,    70,   243,   262,    73,
     234,   236,   234,   236,   234,   236,   234,    24,   250,    19,
      96,   236,   234,   234,   245,   234,   245,   234,   245,   245,
     234,   234,   245,   234,   234,   234,   234,   236,   234,   236,
     236,   234,   234,   236,   236,   235,   236,   241,   241,   241,
     241,   236,   236,   236,   261,   245,   245,   245,   236,   261,
     245,   245,   234,   263,   276,    71,    80,   245,   236,   245,
     236,   236,    84,   235,    84,   235,   235,    19,    70,    72,
     242,   245,   245,   245,     8,    68,   259,   245,   245,   245,
     234,   245,   234,   234,   245,   245,   234,   245,   245,   245,
     245,     7,   234,   234,   245,   245,   261,    50,    49,    49,
      49,   234,   234,   234,   234,   236,   236,   234,   236,   236,
     234,   236,   245,   242,   243,    19,    82,   242,    19,   242,
      19,    82,   242,    19,   242,    19,   242,   245,   236,   245,
     236,   236,   241,    19,   236,   236,   236,   236,   235,   234,
     245,   234,   245,   245,   234,   234,   245,   234,   234,   234,
     245,   245,   234,   234,   236,    33,   244,   244,   244,   245,
     245,   245,   234,    19,    19,   241,   245,    78,   241,    78,
     241,   245,    78,   241,    78,   241,    78,    19,    82,   242,
      19,   242,    19,    82,   242,    19,   242,    19,   242,    72,
     241,   261,   245,   234,   245,   234,   234,   245,   245,   261,
     261,   261,   234,   234,   245,   245,   236,   236,   236,   236,
     236,   236,   245,    71,    78,    19,   242,    78,    78,    19,
     242,    78,    78,   241,   245,    78,   241,    78,   241,   245,
      78,   241,    78,   241,    78,    72,   236,   245,   245,   245,
     234,   245,   245,   234,   241,    78,   241,    78,    78,    19,
     242,    78,    78,    19,   242,    78,    78,   234,   234,   245,
     234,   234,   245,    78,    78,   241,    78,   241,    78,   245,
     245,   234,   245,   245,   234,    78,    78,   234,   234,   245,
     234,   234,   245,   245,   245,   245,   245,   234,   234,   245,
     245,   234,   234,   245,   245,   234,   234,   245,   245
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
#line 92 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 96 "DARIC.y"
    { ast_lines[yyfileno].push_front((yyvsp[(1) - (1)].ast)); (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 97 "DARIC.y"
    { ast_lines[yyfileno].push_front((yyvsp[(1) - (2)].ast)); (yyval.ast) = link((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 101 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (2)].ast); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 102 "DARIC.y"
    { (yyval.ast) = NULL; }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 103 "DARIC.y"
    { (yyval.ast) = link(linenumber((yyvsp[(1) - (3)].v_int)), (yyvsp[(2) - (3)].ast)); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 106 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 107 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 111 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 112 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 118 "DARIC.y"
    { (yyval.ast) = token1(CHAIN, (yyvsp[(2) - (2)].ast)); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 119 "DARIC.y"
    { (yyval.ast) = token2(CHAIN, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 120 "DARIC.y"
    { (yyval.ast) = token1(EXPECT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 121 "DARIC.y"
    { (yyval.ast) = token(END); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 122 "DARIC.y"
    { (yyval.ast) = token1(CALLPROC, string((yyvsp[(1) - (1)].v_string))); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 123 "DARIC.y"
    { (yyval.ast) = token2(CALLPROC, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 124 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 125 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 126 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 127 "DARIC.y"
    { (yyval.ast) = token1(DATA, (yyvsp[(2) - (2)].ast)); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 128 "DARIC.y"
    { (yyval.ast) = token1(READ, (yyvsp[(2) - (2)].ast)); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 129 "DARIC.y"
    { (yyval.ast) = token(RESTORE); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 130 "DARIC.y"
    { (yyval.ast) = token(RETURN); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 131 "DARIC.y"
    { (yyval.ast) = token1(RETURN_WITH_VALUE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 132 "DARIC.y"
    { (yyval.ast) = token(TRACEON); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 133 "DARIC.y"
    { (yyval.ast) = token(TRACEOFF); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 134 "DARIC.y"
    { (yyval.ast) = token(BREAKPOINT); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 136 "DARIC.y"
    { (yyval.ast) = token1(DIM, (yyvsp[(2) - (2)].ast)); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 137 "DARIC.y"
    { (yyval.ast) = token1(LOCALDIM, (yyvsp[(3) - (3)].ast)); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 139 "DARIC.y"
    { (yyval.ast) = token2(BPUT, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 140 "DARIC.y"
    { (yyval.ast) = token1(BGET, (yyvsp[(2) - (2)].ast)); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 141 "DARIC.y"
    { (yyval.ast) = token2(PTRA, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 142 "DARIC.y"
    { (yyval.ast) = token1(CLOSE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 143 "DARIC.y"
    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[(1) - (8)].v_string), Type::STRING_ARRAY), (yyvsp[(7) - (8)].ast), token(GLOBAL)); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 144 "DARIC.y"
    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[(2) - (9)].v_string), Type::STRING_ARRAY), (yyvsp[(8) - (9)].ast), token(LOCAL)); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 146 "DARIC.y"
    { (yyval.ast) = token1(OSCLI, (yyvsp[(2) - (2)].ast)); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 148 "DARIC.y"
    { (yyval.ast) = token1(GOSUB, integer((yyvsp[(2) - (2)].v_int))); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 149 "DARIC.y"
    { (yyval.ast) = token1(GOTO, integer((yyvsp[(2) - (2)].v_int))); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 151 "DARIC.y"
    { (yyval.ast) = token1(INPUT_, (yyvsp[(2) - (2)].ast)); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 152 "DARIC.y"
    { (yyval.ast) = token2(INPUT_NOQUESTIONMARK, string((yyvsp[(2) - (3)].v_string)), (yyvsp[(3) - (3)].ast)); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 153 "DARIC.y"
    { (yyval.ast) = token2(INPUT_, string((yyvsp[(2) - (4)].v_string)), (yyvsp[(4) - (4)].ast)); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 154 "DARIC.y"
    { (yyval.ast) = token3(MOUSE, string((yyvsp[(2) - (6)].v_string)), string((yyvsp[(4) - (6)].v_string)), string((yyvsp[(6) - (6)].v_string)) ); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 156 "DARIC.y"
    { (yyval.ast) = token1(SINKEY, (yyvsp[(3) - (4)].ast)); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 157 "DARIC.y"
    { (yyval.ast) = token1(SINKEYS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 158 "DARIC.y"
    { (yyval.ast) = token(GET_S); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 159 "DARIC.y"
    { (yyval.ast) = token(GETS_S); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 161 "DARIC.y"
    { (yyval.ast) = token2(IF, (yyvsp[(2) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 162 "DARIC.y"
    { (yyval.ast) = token3(IF, (yyvsp[(2) - (5)].ast), (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast)); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 163 "DARIC.y"
    { (yyval.ast) = token2(IF, (yyvsp[(2) - (5)].ast), (yyvsp[(4) - (5)].ast)); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 164 "DARIC.y"
    { (yyval.ast) = token3(IF, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(7) - (8)].ast)); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 166 "DARIC.y"
    { (yyval.ast) = token2(IF, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 167 "DARIC.y"
    { (yyval.ast) = token3(IF, (yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 168 "DARIC.y"
    { (yyval.ast) = token2(IF, (yyvsp[(2) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 169 "DARIC.y"
    { (yyval.ast) = token3(IF, (yyvsp[(2) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(8) - (9)].ast)); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 171 "DARIC.y"
    { (yyval.ast) = token2(REPEAT, (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast)); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 172 "DARIC.y"
    { (yyval.ast) = token2(REPEAT, NULL, (yyvsp[(3) - (3)].ast)); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 173 "DARIC.y"
    { (yyval.ast) = token2(WHILE, (yyvsp[(2) - (5)].ast), (yyvsp[(4) - (5)].ast)); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 175 "DARIC.y"
    { (yyval.ast) = token2(SWAP_I, string((yyvsp[(2) - (4)].v_string)), string((yyvsp[(4) - (4)].v_string))); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 176 "DARIC.y"
    { (yyval.ast) = token2(SWAP_F, string((yyvsp[(2) - (4)].v_string)), string((yyvsp[(4) - (4)].v_string))); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 177 "DARIC.y"
    { (yyval.ast) = token2(SWAP_S, string((yyvsp[(2) - (4)].v_string)), string((yyvsp[(4) - (4)].v_string))); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 180 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (9)].v_string)), string((yyvsp[(4) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 181 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (9)].v_string)), string((yyvsp[(4) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 182 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (9)].v_string)), string((yyvsp[(4) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(GLOBAL), Type::STRING); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 183 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (8)].v_string)), string((yyvsp[(4) - (8)].v_string)), (yyvsp[(7) - (8)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 184 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (8)].v_string)), string((yyvsp[(4) - (8)].v_string)), (yyvsp[(7) - (8)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 185 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(2) - (8)].v_string)), string((yyvsp[(4) - (8)].v_string)), (yyvsp[(7) - (8)].ast), token(GLOBAL), Type::STRING); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 186 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (10)].v_string)), string((yyvsp[(5) - (10)].v_string)), (yyvsp[(9) - (10)].ast), token(LOCAL), Type::REAL); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 187 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (10)].v_string)), string((yyvsp[(5) - (10)].v_string)), (yyvsp[(9) - (10)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 188 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (10)].v_string)), string((yyvsp[(5) - (10)].v_string)), (yyvsp[(9) - (10)].ast), token(LOCAL), Type::STRING); }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 189 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (9)].v_string)), string((yyvsp[(5) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(LOCAL), Type::REAL); }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 190 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (9)].v_string)), string((yyvsp[(5) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 191 "DARIC.y"
    { (yyval.ast) = token4typed(FORIN, string((yyvsp[(3) - (9)].v_string)), string((yyvsp[(5) - (9)].v_string)), (yyvsp[(8) - (9)].ast), token(LOCAL), Type::STRING); }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 194 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(2) - (9)].v_string)), (yyvsp[(4) - (9)].ast), (yyvsp[(6) - (9)].ast), (yyvsp[(8) - (9)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 195 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(2) - (9)].v_string)), (yyvsp[(4) - (9)].ast), (yyvsp[(6) - (9)].ast), (yyvsp[(8) - (9)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 196 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(2) - (8)].v_string)), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(7) - (8)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 197 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(2) - (8)].v_string)), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(7) - (8)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 198 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(2) - (11)].v_string)), (yyvsp[(4) - (11)].ast), (yyvsp[(6) - (11)].ast), (yyvsp[(8) - (11)].ast), (yyvsp[(10) - (11)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 199 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(2) - (11)].v_string)), (yyvsp[(4) - (11)].ast), (yyvsp[(6) - (11)].ast), (yyvsp[(8) - (11)].ast), (yyvsp[(10) - (11)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 200 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(2) - (10)].v_string)), (yyvsp[(4) - (10)].ast), (yyvsp[(6) - (10)].ast), (yyvsp[(8) - (10)].ast), (yyvsp[(9) - (10)].ast), token(GLOBAL), Type::INTEGER); }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 201 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(2) - (10)].v_string)), (yyvsp[(4) - (10)].ast), (yyvsp[(6) - (10)].ast), (yyvsp[(8) - (10)].ast), (yyvsp[(9) - (10)].ast), token(GLOBAL), Type::REAL); }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 202 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(3) - (10)].v_string)), (yyvsp[(5) - (10)].ast), (yyvsp[(7) - (10)].ast), (yyvsp[(9) - (10)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 203 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(3) - (10)].v_string)), (yyvsp[(5) - (10)].ast), (yyvsp[(7) - (10)].ast), (yyvsp[(9) - (10)].ast), token(LOCAL), Type::REAL); }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 204 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(3) - (9)].v_string)), (yyvsp[(5) - (9)].ast), (yyvsp[(7) - (9)].ast), (yyvsp[(8) - (9)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 205 "DARIC.y"
    { (yyval.ast) = token5typed(FOR, string((yyvsp[(3) - (9)].v_string)), (yyvsp[(5) - (9)].ast), (yyvsp[(7) - (9)].ast), (yyvsp[(8) - (9)].ast), token(LOCAL), Type::REAL); }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 206 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(3) - (12)].v_string)), (yyvsp[(5) - (12)].ast), (yyvsp[(7) - (12)].ast), (yyvsp[(9) - (12)].ast), (yyvsp[(11) - (12)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 207 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(3) - (12)].v_string)), (yyvsp[(5) - (12)].ast), (yyvsp[(7) - (12)].ast), (yyvsp[(9) - (12)].ast), (yyvsp[(11) - (12)].ast), token(LOCAL), Type::REAL); }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 208 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(3) - (11)].v_string)), (yyvsp[(5) - (11)].ast), (yyvsp[(7) - (11)].ast), (yyvsp[(9) - (11)].ast), (yyvsp[(10) - (11)].ast), token(LOCAL), Type::INTEGER); }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 209 "DARIC.y"
    { (yyval.ast) = token6typed(FOR, string((yyvsp[(3) - (11)].v_string)), (yyvsp[(5) - (11)].ast), (yyvsp[(7) - (11)].ast), (yyvsp[(9) - (11)].ast), (yyvsp[(10) - (11)].ast), token(LOCAL), Type::REAL); }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 211 "DARIC.y"
    { (yyval.ast) = token2(CASE, (yyvsp[(2) - (6)].ast), (yyvsp[(5) - (6)].ast));  }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 212 "DARIC.y"
    { (yyval.ast) = token3(CASE, (yyvsp[(2) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(7) - (9)].ast));  }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 214 "DARIC.y"
    { (yyval.ast) = token(PRINT); }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 215 "DARIC.y"
    { (yyval.ast) = token1(PRINT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 217 "DARIC.y"
    { (yyval.ast) = token(RENDERFRAME); }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 220 "DARIC.y"
    { (yyval.ast) = token6(CREATEVERTEX, string((yyvsp[(2) - (13)].v_string)), (yyvsp[(4) - (13)].ast), (yyvsp[(7) - (13)].ast), (yyvsp[(9) - (13)].ast), (yyvsp[(11) - (13)].ast), (yyvsp[(13) - (13)].ast)); }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 223 "DARIC.y"
    { (yyval.ast) = token6(CREATETRIANGLE, string((yyvsp[(2) - (13)].v_string)), (yyvsp[(4) - (13)].ast), (yyvsp[(7) - (13)].ast), (yyvsp[(9) - (13)].ast), (yyvsp[(11) - (13)].ast), (yyvsp[(13) - (13)].ast)); }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 224 "DARIC.y"
    { (yyval.ast) = token4(TRANSLATE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 225 "DARIC.y"
    { (yyval.ast) = token4(ROTATE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 226 "DARIC.y"
    { (yyval.ast) = token2(SCALE, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 227 "DARIC.y"
    { (yyval.ast) = token1(DELETEOBJECT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 229 "DARIC.y"
    { (yyval.ast) = token(CLS); }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 230 "DARIC.y"
    { (yyval.ast) = token1(COLOUR, (yyvsp[(2) - (2)].ast)); }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 231 "DARIC.y"
    { (yyval.ast) = token3(COLOUR, (yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 232 "DARIC.y"
    { (yyval.ast) = token1(COLOURBG, (yyvsp[(2) - (2)].ast)); }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 233 "DARIC.y"
    { (yyval.ast) = token3(COLOURBG, (yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 234 "DARIC.y"
    { (yyval.ast) = token2(GRAPHICS, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 235 "DARIC.y"
    { (yyval.ast) = token2(BANKED, (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].ast)); }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 236 "DARIC.y"
    { (yyval.ast) = token(GRAPHICS); }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 237 "DARIC.y"
    { (yyval.ast) = token(BANKED); }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 238 "DARIC.y"
    { (yyval.ast) = token(FLIP); }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 239 "DARIC.y"
    { (yyval.ast) = token3(CIRCLE, (yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast)); }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 240 "DARIC.y"
    { (yyval.ast) = token3(CIRCLEFILL, (yyvsp[(3) - (7)].ast), (yyvsp[(5) - (7)].ast), (yyvsp[(7) - (7)].ast)); }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 241 "DARIC.y"
    { (yyval.ast) = token4(LINE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 242 "DARIC.y"
    { (yyval.ast) = token4(RECTANGLE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 243 "DARIC.y"
    { (yyval.ast) = token4(RECTANGLEFILL, (yyvsp[(3) - (9)].ast), (yyvsp[(5) - (9)].ast), (yyvsp[(7) - (9)].ast), (yyvsp[(9) - (9)].ast)); }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 244 "DARIC.y"
    { (yyval.ast) = token6(TRIANGLE, (yyvsp[(2) - (12)].ast), (yyvsp[(4) - (12)].ast), (yyvsp[(6) - (12)].ast), (yyvsp[(8) - (12)].ast), (yyvsp[(10) - (12)].ast), (yyvsp[(12) - (12)].ast)); }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 245 "DARIC.y"
    { (yyval.ast) = token6(TRIANGLEFILL, (yyvsp[(3) - (13)].ast), (yyvsp[(5) - (13)].ast), (yyvsp[(7) - (13)].ast), (yyvsp[(9) - (13)].ast), (yyvsp[(11) - (13)].ast), (yyvsp[(13) - (13)].ast)); }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 248 "DARIC.y"
    { (yyval.ast) = token9(TRIANGLESHADED, (yyvsp[(3) - (19)].ast), (yyvsp[(5) - (19)].ast), (yyvsp[(7) - (19)].ast), (yyvsp[(9) - (19)].ast), (yyvsp[(11) - (19)].ast), (yyvsp[(13) - (19)].ast), (yyvsp[(15) - (19)].ast), (yyvsp[(17) - (19)].ast), (yyvsp[(19) - (19)].ast)); }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 249 "DARIC.y"
    { (yyval.ast) = token2(PLOT, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 250 "DARIC.y"
    { (yyval.ast) = token4(CLIPON, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 251 "DARIC.y"
    { (yyval.ast) = token(CLIPOFF); }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 252 "DARIC.y"
    { (yyval.ast) = token4(TEXT, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 253 "DARIC.y"
    { (yyval.ast) = token4(TEXTRIGHT, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 254 "DARIC.y"
    { (yyval.ast) = token4(TEXTCENTRE, (yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast), (yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast)); }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 255 "DARIC.y"
    { (yyval.ast) = token(SHOWFPS); }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 259 "DARIC.y"
    { (yyval.ast) = integer((yyvsp[(1) - (1)].v_int)); }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 260 "DARIC.y"
    { (yyval.ast) = integer(-(yyvsp[(2) - (2)].v_int)); }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 261 "DARIC.y"
    { (yyval.ast) = real((yyvsp[(1) - (1)].v_real)); }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 262 "DARIC.y"
    { (yyval.ast) = real(-(yyvsp[(2) - (2)].v_real)); }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 266 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 267 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 268 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 269 "DARIC.y"
    { (yyval.ast) = (yyvsp[(2) - (3)].ast); }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 270 "DARIC.y"
    { (yyval.ast) = token1(FLOAT_, (yyvsp[(3) - (4)].ast)); }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 271 "DARIC.y"
    { (yyval.ast) = token1(INT_, (yyvsp[(3) - (4)].ast)); }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 272 "DARIC.y"
    { (yyval.ast) = token2(MINUS, integer(0), (yyvsp[(2) - (2)].ast)); }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 273 "DARIC.y"
    { (yyval.ast) = token2(MINUS, real(0.0), (yyvsp[(2) - (2)].ast)); }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 274 "DARIC.y"
    { (yyval.ast) = token2(PLUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 275 "DARIC.y"
    { (yyval.ast) = token2(MINUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 276 "DARIC.y"
    { (yyval.ast) = token2(MULTIPLY, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 277 "DARIC.y"
    { (yyval.ast) = token2(DIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 278 "DARIC.y"
    { (yyval.ast) = token2(INTEGERDIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 279 "DARIC.y"
    { (yyval.ast) = token2(DIV, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 280 "DARIC.y"
    { (yyval.ast) = token2(MOD, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 281 "DARIC.y"
    { (yyval.ast) = token2(SHL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 282 "DARIC.y"
    { (yyval.ast) = token2(SHR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 283 "DARIC.y"
    { (yyval.ast) = token2(E, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 284 "DARIC.y"
    { (yyval.ast) = token2(NE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 285 "DARIC.y"
    { (yyval.ast) = token2(GE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 286 "DARIC.y"
    { (yyval.ast) = token2(LE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 287 "DARIC.y"
    { (yyval.ast) = token2(LT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 288 "DARIC.y"
    { (yyval.ast) = token2(GT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 289 "DARIC.y"
    { (yyval.ast) = token2(AND, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 290 "DARIC.y"
    { (yyval.ast) = token2(OR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 291 "DARIC.y"
    { (yyval.ast) = token2(EOR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 293 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 294 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 296 "DARIC.y"
    { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[(3) - (8)].v_string), Type::REAL), (yyvsp[(7) - (8)].ast)); }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 297 "DARIC.y"
    { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[(3) - (8)].v_string), Type::INTEGER), (yyvsp[(7) - (8)].ast)); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 298 "DARIC.y"
    { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[(3) - (8)].v_string), Type::STRING), (yyvsp[(7) - (8)].ast)); }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 300 "DARIC.y"
    { (yyval.ast) = token1(PTR, (yyvsp[(2) - (2)].ast)); }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 302 "DARIC.y"
    { (yyval.ast) = token(GET); }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 303 "DARIC.y"
    { (yyval.ast) = token1(INKEY, (yyvsp[(3) - (4)].ast)); }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 305 "DARIC.y"
    { (yyval.ast) = integer(1); }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 306 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 307 "DARIC.y"
    { (yyval.ast) = token(TIME); }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 309 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 310 "DARIC.y"
    { (yyval.ast) = integer(1); }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 311 "DARIC.y"
    { (yyval.ast) = integer(2); }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 312 "DARIC.y"
    { (yyval.ast) = integer(3); }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 314 "DARIC.y"
    { (yyval.ast) = token2(CREATESHAPE, string((yyvsp[(2) - (4)].v_string)), string((yyvsp[(4) - (4)].v_string))); }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 319 "DARIC.y"
    { (yyval.ast) = token9(CREATEOBJECT, (yyvsp[(2) - (18)].ast), (yyvsp[(4) - (18)].ast), (yyvsp[(6) - (18)].ast), (yyvsp[(8) - (18)].ast), (yyvsp[(10) - (18)].ast), (yyvsp[(12) - (18)].ast), (yyvsp[(14) - (18)].ast), (yyvsp[(16) - (18)].ast), (yyvsp[(18) - (18)].ast)); }
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 321 "DARIC.y"
    { (yyval.ast) = integer(0xFF0000); }
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 322 "DARIC.y"
    { (yyval.ast) = integer(0x00FF00); }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 323 "DARIC.y"
    { (yyval.ast) = integer(0xFFFF00); }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 324 "DARIC.y"
    { (yyval.ast) = integer(0x0000FF); }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 325 "DARIC.y"
    { (yyval.ast) = integer(0xFF00FF); }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 326 "DARIC.y"
    { (yyval.ast) = integer(0x00FFFF); }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 327 "DARIC.y"
    { (yyval.ast) = integer(0xFFFFFF); }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 328 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 329 "DARIC.y"
    { (yyval.ast) = integer(-1); }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 330 "DARIC.y"
    { (yyval.ast) = token3(COLOUREXP, (yyvsp[(3) - (8)].ast), (yyvsp[(5) - (8)].ast), (yyvsp[(7) - (8)].ast)); }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 331 "DARIC.y"
    { (yyval.ast) = token2(POINT_, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 332 "DARIC.y"
    { (yyval.ast) = token(SCREENWIDTH); }
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 333 "DARIC.y"
    { (yyval.ast) = token(SCREENHEIGHT); }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 334 "DARIC.y"
    { (yyval.ast) = token1(LOADTYPEFACE, (yyvsp[(2) - (2)].ast)); }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 335 "DARIC.y"
    { (yyval.ast) = token2(CREATEFONT, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 336 "DARIC.y"
    { (yyval.ast) = integer(0); }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 337 "DARIC.y"
    { (yyval.ast) = integer(1); }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 338 "DARIC.y"
    { (yyval.ast) = integer(2); }
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 339 "DARIC.y"
    { (yyval.ast) = integer(3); }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 340 "DARIC.y"
    { (yyval.ast) = integer(4); }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 341 "DARIC.y"
    { (yyval.ast) = integer(5); }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 342 "DARIC.y"
    { (yyval.ast) = integer(6); }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 343 "DARIC.y"
    { (yyval.ast) = integer(7); }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 344 "DARIC.y"
    { (yyval.ast) = integer(8); }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 345 "DARIC.y"
    { (yyval.ast) = integer(9); }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 346 "DARIC.y"
    { (yyval.ast) = integer(10); }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 347 "DARIC.y"
    { (yyval.ast) = integer(11); }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 348 "DARIC.y"
    { (yyval.ast) = integer(12); }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 349 "DARIC.y"
    { (yyval.ast) = integer(13); }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 350 "DARIC.y"
    { (yyval.ast) = integer(14); }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 351 "DARIC.y"
    { (yyval.ast) = integer(15); }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 352 "DARIC.y"
    { (yyval.ast) = integer(16); }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 353 "DARIC.y"
    { (yyval.ast) = integer(17); }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 354 "DARIC.y"
    { (yyval.ast) = token1(EOFH, (yyvsp[(2) - (2)].ast)); }
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 355 "DARIC.y"
    { (yyval.ast) = token1(BGET, (yyvsp[(2) - (2)].ast)); }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 356 "DARIC.y"
    { (yyval.ast) = token1(OPENIN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 357 "DARIC.y"
    { (yyval.ast) = token1(OPENOUT, (yyvsp[(3) - (4)].ast)); }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 358 "DARIC.y"
    { (yyval.ast) = token1(OPENUP, (yyvsp[(3) - (4)].ast)); }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 360 "DARIC.y"
    { (yyval.ast) = token(RND); }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 361 "DARIC.y"
    { (yyval.ast) = token1(RNDREAL, integer(0)); }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 362 "DARIC.y"
    { (yyval.ast) = token1(RNDREAL, integer(1)); }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 363 "DARIC.y"
    { (yyval.ast) = token1(RNDRANGE, (yyvsp[(3) - (4)].ast)); }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 365 "DARIC.y"
    { (yyval.ast) = token(PI); }
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 366 "DARIC.y"
    { (yyval.ast) = token1(NOT, (yyvsp[(2) - (2)].ast)); }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 367 "DARIC.y"
    { (yyval.ast) = token1(SQR, (yyvsp[(3) - (4)].ast)); }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 368 "DARIC.y"
    { (yyval.ast) = token1(LN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 369 "DARIC.y"
    { (yyval.ast) = token1(LOG, (yyvsp[(3) - (4)].ast)); }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 370 "DARIC.y"
    { (yyval.ast) = token1(EXP, (yyvsp[(3) - (4)].ast)); }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 371 "DARIC.y"
    { (yyval.ast) = token1(ATN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 372 "DARIC.y"
    { (yyval.ast) = token1(TAN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 373 "DARIC.y"
    { (yyval.ast) = token1(COS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 374 "DARIC.y"
    { (yyval.ast) = token1(SIN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 375 "DARIC.y"
    { (yyval.ast) = token1(ABS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 376 "DARIC.y"
    { (yyval.ast) = token1(ACS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 377 "DARIC.y"
    { (yyval.ast) = token1(ASN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 378 "DARIC.y"
    { (yyval.ast) = token1(DEG, (yyvsp[(3) - (4)].ast)); }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 379 "DARIC.y"
    { (yyval.ast) = token1(RAD, (yyvsp[(3) - (4)].ast)); }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 380 "DARIC.y"
    { (yyval.ast) = token1(SGN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 382 "DARIC.y"
    { (yyval.ast) = token1(ASC, (yyvsp[(3) - (4)].ast)); }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 383 "DARIC.y"
    { (yyval.ast) = token1(LEN, (yyvsp[(3) - (4)].ast)); }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 384 "DARIC.y"
    { (yyval.ast) = token3(INSTR, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), integer(1)); }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 385 "DARIC.y"
    { (yyval.ast) = token3(INSTR, (yyvsp[(3) - (8)].ast), (yyvsp[(5) - (8)].ast), (yyvsp[(7) - (8)].ast)); }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 386 "DARIC.y"
    { (yyval.ast) = token1(VAL, (yyvsp[(3) - (4)].ast)); }
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 390 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::INTEGER); }
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 391 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::INTEGER_ARRAY); }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 392 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::INTEGER_ARRAY); }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 393 "DARIC.y"
    { (yyval.ast) = typevariable((yyvsp[(1) - (2)].v_string), (yyvsp[(2) - (2)].v_string), Type::TYPE); }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 394 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (5)].v_string), (yyvsp[(5) - (5)].v_string), (yyvsp[(3) - (5)].ast), Type::TYPE_ARRAY); }
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 398 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::REAL); }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 399 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::REAL_ARRAY); }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 400 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::REAL_ARRAY); }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 401 "DARIC.y"
    { (yyval.ast) = typevariable((yyvsp[(1) - (2)].v_string), (yyvsp[(2) - (2)].v_string), Type::TYPE); }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 402 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (5)].v_string), (yyvsp[(5) - (5)].v_string), (yyvsp[(3) - (5)].ast), Type::TYPE_ARRAY); }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 406 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 407 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 411 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::STRING); }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 412 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::STRING_ARRAY); }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 413 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::STRING_ARRAY); }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 414 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (5)].v_string), (yyvsp[(5) - (5)].v_string), (yyvsp[(3) - (5)].ast), Type::TYPE_ARRAY); }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 418 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 419 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 423 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 424 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 428 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::INTEGER); }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 429 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::REAL); }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 430 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::STRING); }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 434 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 435 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 439 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::INTEGER_ARRAY); }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 440 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::INTEGER_ARRAY); }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 441 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::REAL_ARRAY); }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 442 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::REAL_ARRAY); }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 443 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::STRING_ARRAY); }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 444 "DARIC.y"
    { (yyval.ast) = variable2d((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast), Type::STRING_ARRAY); }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 445 "DARIC.y"
    { (yyval.ast) = typevariable1d((yyvsp[(1) - (6)].v_string), (yyvsp[(5) - (6)].v_string), (yyvsp[(3) - (6)].ast), Type::TYPE_ARRAY); }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 449 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 450 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 454 "DARIC.y"
    { (yyval.ast) = variable((yyvsp[(1) - (1)].v_string), Type::TYPE); }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 455 "DARIC.y"
    { (yyval.ast) = variable1d((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::TYPE_ARRAY); }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 459 "DARIC.y"
    { (yyval.ast) = token2(TYPE_, string((yyvsp[(2) - (5)].v_string)), (yyvsp[(4) - (5)].ast)); }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 463 "DARIC.y"
    { (yyval.ast) = token1(FIELD, (yyvsp[(2) - (2)].ast)); }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 467 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (2)].ast); }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 468 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 472 "DARIC.y"
    { (yyval.ast) = string((yyvsp[(1) - (1)].v_string)); }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 476 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 477 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 478 "DARIC.y"
    { (yyval.ast) = token2(PLUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 479 "DARIC.y"
    { (yyval.ast) = token2(E, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 480 "DARIC.y"
    { (yyval.ast) = token2(NE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 481 "DARIC.y"
    { (yyval.ast) = token2(GE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 482 "DARIC.y"
    { (yyval.ast) = token2(LE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 483 "DARIC.y"
    { (yyval.ast) = token2(LT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 484 "DARIC.y"
    { (yyval.ast) = token2(GT, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 486 "DARIC.y"
    { (yyval.ast) = token1(GETSH, (yyvsp[(2) - (2)].ast)); }
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 488 "DARIC.y"
    { (yyval.ast) = token2(CALLFN, string((yyvsp[(1) - (4)].v_string)), (yyvsp[(3) - (4)].ast)); }
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 490 "DARIC.y"
    { (yyval.ast) = token(GETS); }
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 491 "DARIC.y"
    { (yyval.ast) = token1(INKEYS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 493 "DARIC.y"
    { (yyval.ast) = token(TIMES); }
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 494 "DARIC.y"
    { (yyval.ast) = token1(STRS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 495 "DARIC.y"
    { (yyval.ast) = token1(STRSHEX, (yyvsp[(4) - (5)].ast)); }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 496 "DARIC.y"
    { (yyval.ast) = token2(STRINGS, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 497 "DARIC.y"
    { (yyval.ast) = token1(CHRS, (yyvsp[(3) - (4)].ast)); }
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 498 "DARIC.y"
    { (yyval.ast) = token2(LEFTS, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 499 "DARIC.y"
    { (yyval.ast) = token3(MIDS, (yyvsp[(3) - (8)].ast), (yyvsp[(5) - (8)].ast), (yyvsp[(7) - (8)].ast)); }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 500 "DARIC.y"
    { (yyval.ast) = token2(RIGHTS, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 504 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 505 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 509 "DARIC.y"
    { (yyval.ast) = NULL; }
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 510 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 511 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 515 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 307:
/* Line 1792 of yacc.c  */
#line 516 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 517 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 518 "DARIC.y"
    { (yyval.ast) = assignment(link((yyvsp[(1) - (4)].ast), (yyvsp[(2) - (4)].ast)), (yyvsp[(4) - (4)].ast)); }
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 522 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 523 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 527 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 313:
/* Line 1792 of yacc.c  */
#line 528 "DARIC.y"
    { (yyval.ast) = token1(LOCAL, (yyvsp[(2) - (2)].ast)); }
    break;

  case 314:
/* Line 1792 of yacc.c  */
#line 529 "DARIC.y"
    { (yyval.ast) = token1(GLOBAL, (yyvsp[(2) - (2)].ast)); }
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 530 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(SHL, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 531 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(SHR, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 532 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(PLUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 533 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(MINUS, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 534 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(MULTIPLY, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 535 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(DIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 536 "DARIC.y"
    { (yyval.ast) = assignment((yyvsp[(1) - (3)].ast), token2(INTEGERDIVIDE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 540 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 541 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 542 "DARIC.y"
    { (yyval.ast) = token(COMMA); }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 543 "DARIC.y"
    { (yyval.ast) = token(TILDE); }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 544 "DARIC.y"
    { (yyval.ast) = token(TICK); }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 545 "DARIC.y"
    { (yyval.ast) = token1(SPC, (yyvsp[(3) - (4)].ast)); }
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 546 "DARIC.y"
    { (yyval.ast) = token(SEMICOLON); }
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 550 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 551 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 559 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 560 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 334:
/* Line 1792 of yacc.c  */
#line 564 "DARIC.y"
    { (yyval.ast) = NULL; }
    break;

  case 335:
/* Line 1792 of yacc.c  */
#line 565 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 566 "DARIC.y"
    { (yyval.ast) = token1(RETURN_PARAMETER, (yyvsp[(2) - (2)].ast)); }
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 570 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 338:
/* Line 1792 of yacc.c  */
#line 571 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 575 "DARIC.y"
    { (yyval.ast) = NULL; }
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 576 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 580 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 581 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 585 "DARIC.y"
    { (yyval.ast) = token2(WHEN, (yyvsp[(2) - (4)].ast), (yyvsp[(3) - (4)].ast)); }
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 589 "DARIC.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 590 "DARIC.y"
    { (yyval.ast) = link((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 593 "DARIC.y"
    { (yyval.ast) = token3typed(DEFPROC, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::NOTYPE); }
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 594 "DARIC.y"
    { (yyval.ast) = token3typed(DEFFN, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::INTEGER); }
    break;

  case 348:
/* Line 1792 of yacc.c  */
#line 595 "DARIC.y"
    { (yyval.ast) = token3typed(DEFFN, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::REAL); }
    break;

  case 349:
/* Line 1792 of yacc.c  */
#line 596 "DARIC.y"
    { (yyval.ast) = token3typed(DEFFN, string((yyvsp[(1) - (7)].v_string)), (yyvsp[(3) - (7)].ast), (yyvsp[(6) - (7)].ast), Type::STRING); }
    break;


/* Line 1792 of yacc.c  */
#line 6577 "C:\\Users\\d_dud\\source\\repos\\PiBasic\\V4\\src\\parser\\bison.cpp"
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
#line 599 "DARIC.y"


int parse(const char *filename) {
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
    return 1;
}

void yyerror(const char *e) {
    std::stringstream stream;
    stream << "Parsing error: " << e << " at line " << yylineno << " of file '" << file << "'";
    error_list.push_back(stream.str());
}