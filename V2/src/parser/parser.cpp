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
#line 1 "parser.y"

#include <iostream>
#include <stack>
#include <stdio.h>
#include <map>
#include "../ast/ast.h"
extern int yylex();
extern int yylineno;
extern int yyfileno;
extern FILE *yyin;
void yyerror(const char *e);
int yylex_destroy(void);
struct ast *final;
extern std::string file;
extern std::stack<std::string> file_stack;
extern std::map<std::string, int> files_index;

/* Line 371 of yacc.c  */
#line 86 "parser.cpp"

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
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
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
     TERM = 258,
     TYPE = 259,
     END_TYPE = 260,
     FIELD = 261,
     RETURN = 262,
     RETURNVALUE = 263,
     REF = 264,
     LINE_NUMBER = 265,
     LITERAL_INT = 266,
     LITERAL_FLOAT = 267,
     LITERAL_STRING = 268,
     STAR = 269,
     INTEGER_VARIABLE = 270,
     VARIABLE = 271,
     STRING_VARIABLE = 272,
     TYPE_VARIABLE = 273,
     STRING_FUNCTION = 274,
     INTEGER_FUNCTION = 275,
     FLOAT_FUNCTION = 276,
     PROCEDURE = 277,
     DEFINE_PROCEDURE = 278,
     DEFINE_INTEGER_FUNCTION = 279,
     DEFINE_FLOAT_FUNCTION = 280,
     DEFINE_STRING_FUNCTION = 281,
     DEFINE = 282,
     DOUBLESEMI = 283,
     DATA = 284,
     DIM = 285,
     ELSE = 286,
     END = 287,
     END_IF = 288,
     END_FUNCTION = 289,
     END_PROCEDURE = 290,
     END_WHILE = 291,
     FOR = 292,
     FUNCTION = 293,
     GLOBAL = 294,
     IF = 295,
     INPUT = 296,
     LOCAL = 297,
     NEXT = 298,
     OSCLI = 299,
     PRINT = 300,
     READ = 301,
     REPEAT = 302,
     WHILE = 303,
     CASE = 304,
     WHEN = 305,
     END_CASE = 306,
     OF = 307,
     OTHERWISE = 308,
     RESTORE = 309,
     RND = 310,
     SPC = 311,
     STEP = 312,
     TAB = 313,
     THEN = 314,
     TO = 315,
     TIME = 316,
     TIMES = 317,
     TRACEON = 318,
     TRACEOFF = 319,
     UNTIL = 320,
     CLOSE = 321,
     OPENIN = 322,
     OPENOUT = 323,
     OPENUP = 324,
     BGET = 325,
     BPUT = 326,
     EOFH = 327,
     INKEY = 328,
     INKEYS = 329,
     SHL = 330,
     SHR = 331,
     INT = 332,
     FLOAT = 333,
     FALSE = 334,
     TRUE = 335,
     INTEGERDIVIDE = 336,
     E = 337,
     GE = 338,
     LE = 339,
     NE = 340,
     AND = 341,
     OR = 342,
     EOR = 343,
     GOSUB = 344,
     GOTO = 345,
     ASC = 346,
     CHRS = 347,
     INSTR = 348,
     LEFTS = 349,
     MIDS = 350,
     RIGHTS = 351,
     LEN = 352,
     STRS = 353,
     STRINGS = 354,
     ACS = 355,
     DIV = 356,
     MOD = 357,
     SQR = 358,
     LN = 359,
     LOG = 360,
     EXP = 361,
     ATN = 362,
     TAN = 363,
     COS = 364,
     SIN = 365,
     ABS = 366,
     ASN = 367,
     DEG = 368,
     RAD = 369,
     SGN = 370,
     VAL = 371,
     PI = 372,
     CLS = 373,
     CLG = 374,
     COLOUR = 375,
     COLOURBG = 376,
     FLIP = 377,
     GRAPHICS = 378,
     LINE = 379,
     PLOT = 380,
     RECTANGLE = 381,
     TRIANGLE = 382,
     CLIP = 383,
     CLIPOFF = 384,
     FILL = 385,
     SHADED = 386,
     CIRCLE = 387,
     ELLIPSE = 388,
     TEXT = 389,
     TEXTRIGHT = 390,
     TEXTCENTRE = 391,
     LOADTYPEFACE = 392,
     CREATEFONT = 393,
     MONO10 = 394,
     MONO15 = 395,
     MONO20 = 396,
     MONO25 = 397,
     MONO30 = 398,
     MONO40 = 399,
     MONO50 = 400,
     MONO75 = 401,
     MONO100 = 402,
     PROP10 = 403,
     PROP15 = 404,
     PROP20 = 405,
     PROP25 = 406,
     PROP30 = 407,
     PROP40 = 408,
     PROP50 = 409,
     PROP75 = 410,
     PROP100 = 411,
     SCREENWIDTH = 412,
     SCREENHEIGHT = 413,
     PI3D_CREATEVERTEX = 414,
     PI3D_CREATETRIANGLE = 415,
     PI3D_CREATESHAPE = 416,
     PI3D_CREATEOBJECT = 417,
     PI3D_TRANSLATE = 418,
     PI3D_ROTATE = 419,
     PI3D_SCALE = 420,
     PI3D_RENDERFRAME = 421,
     SOLID = 422,
     WIREFRAME = 423,
     EDGEDWIREFRAME = 424,
     NOT = 425,
     NEG = 426
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 22 "parser.y"

    int v_int;
    double v_float;
    const char *v_string;
    struct ast *ast;


/* Line 387 of yacc.c  */
#line 308 "parser.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 336 "parser.cpp"

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
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  245
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8041

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  184
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  284
/* YYNRULES -- Number of states.  */
#define YYNSTATES  803

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   426

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   183,
     178,   179,   174,   172,   180,   173,     2,   175,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   181,
     170,     2,   171,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,   182,     2,     2,     2,
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
     165,   166,   167,   168,   169,   176,   177
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    12,    16,    19,    21,
      23,    25,    28,    31,    33,    38,    41,    43,    45,    47,
      49,    52,    55,    59,    61,    67,    74,    79,    86,    91,
     100,   109,   120,   131,   136,   141,   144,   147,   151,   156,
     158,   161,   165,   168,   172,   181,   190,   199,   202,   204,
     207,   209,   212,   217,   219,   221,   226,   229,   232,   234,
     248,   262,   271,   280,   285,   287,   294,   297,   304,   307,
     309,   316,   323,   331,   340,   349,   359,   372,   386,   406,
     411,   420,   422,   424,   429,   431,   436,   443,   445,   450,
     457,   463,   469,   471,   474,   476,   479,   481,   483,   486,
     489,   493,   497,   501,   505,   509,   513,   517,   521,   525,
     527,   532,   537,   542,   551,   553,   555,   558,   563,   565,
     567,   569,   571,   573,   575,   577,   579,   581,   583,   585,
     587,   589,   591,   593,   595,   597,   599,   601,   606,   611,
     630,   649,   668,   687,   690,   693,   696,   699,   702,   704,
     707,   712,   717,   722,   727,   732,   737,   742,   747,   752,
     757,   762,   767,   772,   777,   779,   781,   783,   788,   793,
     800,   809,   814,   818,   822,   826,   830,   834,   838,   842,
     846,   850,   855,   860,   864,   866,   871,   878,   880,   882,
     884,   888,   892,   896,   900,   902,   907,   912,   914,   919,
     925,   932,   937,   944,   953,   960,   964,   968,   972,   976,
     980,   984,   988,   990,   992,   993,   995,   999,  1001,  1005,
    1007,  1009,  1010,  1012,  1016,  1017,  1019,  1022,  1026,  1031,
    1035,  1039,  1044,  1046,  1050,  1053,  1055,  1058,  1061,  1063,
    1066,  1070,  1073,  1075,  1078,  1080,  1082,  1086,  1088,  1091,
    1093,  1098,  1100,  1104,  1108,  1113,  1118,  1123,  1130,  1137,
    1144,  1151,  1153,  1155,  1159,  1163,  1171,  1176,  1183,  1187,
    1195,  1200,  1207,  1211,  1219,  1224,  1231,  1235,  1243,  1248,
    1255,  1259,  1267,  1272,  1279
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     185,     0,    -1,   187,    -1,    10,    -1,     3,    -1,   188,
       3,    -1,   188,     3,   187,    -1,   186,   187,    -1,   204,
      -1,   205,    -1,   218,    -1,    89,    11,    -1,    90,    11,
      -1,    22,    -1,    22,   178,   197,   179,    -1,     8,   196,
      -1,     7,    -1,   206,    -1,   207,    -1,   208,    -1,    29,
     197,    -1,    30,   217,    -1,    42,    30,   217,    -1,    32,
      -1,    49,   199,    52,   210,    51,    -1,    40,   196,   187,
      31,   187,    33,    -1,    40,   196,   187,    33,    -1,    40,
     196,    59,   188,    31,   188,    -1,    40,   196,    59,   188,
      -1,    37,    15,    82,   192,    60,   192,   187,    43,    -1,
      37,    16,    82,   192,    60,   192,   187,    43,    -1,    37,
      15,    82,   192,    60,   192,    57,   192,   187,    43,    -1,
      37,    16,    82,   192,    60,   192,    57,   192,   187,    43,
      -1,    73,   178,   192,   179,    -1,    74,   178,   192,   179,
      -1,    44,   195,    -1,    41,   212,    -1,    41,    13,   212,
      -1,    41,    13,   180,   212,    -1,    45,    -1,    45,   213,
      -1,    45,   213,   181,    -1,    45,   214,    -1,    45,   214,
      28,    -1,   134,   192,   180,   192,   180,   192,   180,   195,
      -1,   135,   192,   180,   192,   180,   192,   180,   195,    -1,
     136,   192,   180,   192,   180,   192,   180,   195,    -1,    46,
     200,    -1,    47,    -1,    65,   196,    -1,    54,    -1,    14,
     198,    -1,    48,   196,   187,    36,    -1,    63,    -1,    64,
      -1,    71,   192,   180,   192,    -1,    70,   192,    -1,    66,
     192,    -1,   166,    -1,   159,    18,   178,   192,   179,   180,
     192,   180,   192,   180,   192,   180,   192,    -1,   160,    18,
     178,   192,   179,   180,   192,   180,   192,   180,   192,   180,
     192,    -1,   163,   192,   180,   192,   180,   192,   180,   192,
      -1,   164,   192,   180,   192,   180,   192,   180,   192,    -1,
     165,   192,   180,   192,    -1,   118,    -1,   120,   192,   180,
     192,   180,   192,    -1,   120,   192,    -1,   121,   192,   180,
     192,   180,   192,    -1,   121,   192,    -1,   122,    -1,   123,
     192,   180,   192,   180,   192,    -1,   132,   192,   180,   192,
     180,   192,    -1,   132,   130,   192,   180,   192,   180,   192,
      -1,   124,   192,   180,   192,   180,   192,   180,   192,    -1,
     126,   192,   180,   192,   180,   192,   180,   192,    -1,   126,
     130,   192,   180,   192,   180,   192,   180,   192,    -1,   127,
     192,   180,   192,   180,   192,   180,   192,   180,   192,   180,
     192,    -1,   127,   130,   192,   180,   192,   180,   192,   180,
     192,   180,   192,   180,   192,    -1,   127,   131,   192,   180,
     192,   180,   192,   180,   192,   180,   192,   180,   192,   180,
     192,   180,   192,   180,   192,    -1,   125,   192,   180,   192,
      -1,   128,   192,   180,   192,   180,   192,   180,   192,    -1,
     129,    -1,    18,    -1,    18,   178,   192,   179,    -1,    15,
      -1,    15,   178,   192,   179,    -1,    15,   178,   192,   180,
     192,   179,    -1,    16,    -1,    16,   178,   192,   179,    -1,
      16,   178,   192,   180,   192,   179,    -1,    18,   178,   192,
     179,    15,    -1,    18,   178,   192,   179,    16,    -1,    11,
      -1,   173,    11,    -1,    12,    -1,   173,    12,    -1,   191,
      -1,   190,    -1,   173,   190,    -1,    18,   190,    -1,   192,
     172,   192,    -1,   192,   173,   192,    -1,   192,   174,   192,
      -1,   192,   175,   192,    -1,   192,    81,   192,    -1,   192,
     101,   192,    -1,   192,   102,   192,    -1,   192,    75,   192,
      -1,   192,    76,   192,    -1,    20,    -1,    20,   178,   197,
     179,    -1,    21,   178,   197,   179,    -1,    73,   178,   192,
     179,    -1,   120,   178,   192,   180,   192,   180,   192,   179,
      -1,   157,    -1,   158,    -1,   137,   195,    -1,   138,   192,
     180,   192,    -1,   139,    -1,   140,    -1,   141,    -1,   142,
      -1,   143,    -1,   144,    -1,   145,    -1,   146,    -1,   147,
      -1,   148,    -1,   149,    -1,   150,    -1,   151,    -1,   152,
      -1,   153,    -1,   154,    -1,   155,    -1,   156,    -1,    55,
      -1,    55,   178,   192,   179,    -1,   161,    18,   180,    18,
      -1,   162,   192,   180,   192,   180,   192,   180,   192,   180,
     192,   180,   192,   180,   192,   180,   192,   180,   167,    -1,
     162,   192,   180,   192,   180,   192,   180,   192,   180,   192,
     180,   192,   180,   192,   180,   192,   180,   168,    -1,   162,
     192,   180,   192,   180,   192,   180,   192,   180,   192,   180,
     192,   180,   192,   180,   192,   180,   131,    -1,   162,   192,
     180,   192,   180,   192,   180,   192,   180,   192,   180,   192,
     180,   192,   180,   192,   180,   169,    -1,    72,   192,    -1,
      70,   192,    -1,    67,   195,    -1,    68,   195,    -1,    69,
     195,    -1,   117,    -1,   176,   192,    -1,   103,   178,   192,
     179,    -1,   104,   178,   192,   179,    -1,   105,   178,   192,
     179,    -1,   106,   178,   192,   179,    -1,   107,   178,   192,
     179,    -1,   108,   178,   192,   179,    -1,   109,   178,   192,
     179,    -1,   110,   178,   192,   179,    -1,   111,   178,   192,
     179,    -1,   100,   178,   192,   179,    -1,   112,   178,   192,
     179,    -1,   113,   178,   192,   179,    -1,   114,   178,   192,
     179,    -1,   115,   178,   192,   179,    -1,    61,    -1,    79,
      -1,    80,    -1,    91,   178,   195,   179,    -1,    97,   178,
     195,   179,    -1,    93,   178,   195,   180,   195,   179,    -1,
      93,   178,   195,   180,   195,   180,   192,   179,    -1,   116,
     178,   195,   179,    -1,   192,    82,   192,    -1,   192,    85,
     192,    -1,   192,    83,   192,    -1,   192,    84,   192,    -1,
     192,   170,   192,    -1,   192,   171,   192,    -1,   192,    86,
     192,    -1,   192,    87,   192,    -1,   192,    88,   192,    -1,
      78,   178,   192,   179,    -1,    77,   178,   192,   179,    -1,
     178,   192,   179,    -1,    17,    -1,    17,   178,   192,   179,
      -1,    17,   178,   192,   180,   192,   179,    -1,    13,    -1,
     194,    -1,   193,    -1,   195,   172,   195,    -1,   195,   173,
     195,    -1,   195,   174,   195,    -1,   195,   175,   195,    -1,
      19,    -1,    19,   178,   197,   179,    -1,    74,   178,   192,
     179,    -1,    62,    -1,    98,   178,   192,   179,    -1,    98,
     182,   178,   192,   179,    -1,    99,   178,   192,   180,   195,
     179,    -1,    92,   178,   192,   179,    -1,    94,   178,   195,
     180,   192,   179,    -1,    95,   178,   195,   180,   192,   180,
     192,   179,    -1,    96,   178,   195,   180,   192,   179,    -1,
     195,    82,   195,    -1,   195,    85,   195,    -1,   195,    83,
     195,    -1,   195,    84,   195,    -1,   195,   170,   195,    -1,
     195,   171,   195,    -1,   178,   195,   179,    -1,   192,    -1,
     195,    -1,    -1,   196,    -1,   196,   180,   197,    -1,   192,
      -1,   192,   180,   198,    -1,   190,    -1,   193,    -1,    -1,
     199,    -1,   199,   180,   200,    -1,    -1,   199,    -1,     7,
     199,    -1,   199,   180,   201,    -1,     7,   199,   180,   201,
      -1,   199,    82,   196,    -1,   189,    82,    16,    -1,   189,
     199,    82,   196,    -1,   202,    -1,   202,   180,   203,    -1,
      39,   203,    -1,   203,    -1,    42,   203,    -1,     4,    16,
      -1,     5,    -1,     6,   199,    -1,    50,   197,   188,    -1,
      53,   188,    -1,   209,    -1,   209,   210,    -1,   199,    -1,
     211,    -1,   211,   180,   212,    -1,   196,    -1,   183,   213,
      -1,   182,    -1,    56,   178,   192,   179,    -1,   213,    -1,
     213,   180,   214,    -1,   213,   181,   214,    -1,    15,   178,
     192,   179,    -1,    16,   178,   192,   179,    -1,    17,   178,
     192,   179,    -1,    18,   178,   192,   180,    16,   179,    -1,
      15,   178,   192,   180,   192,   179,    -1,    16,   178,   192,
     180,   192,   179,    -1,    17,   178,   192,   180,   192,   179,
      -1,   215,    -1,   216,    -1,   215,   180,   217,    -1,   216,
     180,   217,    -1,    27,    22,   178,   201,   179,   187,    35,
      -1,    27,    22,   187,    35,    -1,    23,   178,   201,   179,
     187,    35,    -1,    23,   187,    35,    -1,    27,    22,   178,
     200,   179,   187,    35,    -1,    27,    22,   187,    35,    -1,
      23,   178,   200,   179,   187,    35,    -1,    23,   187,    35,
      -1,    27,    20,   178,   200,   179,   187,    34,    -1,    27,
      20,   187,    34,    -1,    24,   178,   200,   179,   187,    34,
      -1,    24,   187,    34,    -1,    27,    21,   178,   200,   179,
     187,    34,    -1,    27,    21,   187,    34,    -1,    25,   178,
     200,   179,   187,    34,    -1,    25,   187,    34,    -1,    27,
      19,   178,   200,   179,   187,    34,    -1,    27,    19,   187,
      34,    -1,    26,   178,   200,   179,   187,    34,    -1,    26,
     187,    34,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    84,    84,    86,    88,    89,    90,    91,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     107,   108,   109,   110,   112,   113,   114,   115,   116,   118,
     120,   122,   125,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   153,   154,   155,   158,   159,
     164,   169,   171,   173,   177,   178,   179,   180,   181,   182,
     183,   184,   187,   190,   193,   196,   199,   204,   209,   216,
     217,   220,   222,   223,   225,   226,   227,   228,   229,   230,
     231,   232,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   252,
     253,   254,   256,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   282,   283,   285,   286,
     293,   300,   307,   315,   316,   317,   318,   319,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   338,   339,   340,   342,   343,   344,
     345,   346,   348,   349,   350,   351,   352,   353,   355,   356,
     357,   359,   360,   361,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   374,   375,   377,   379,   380,   381,
     382,   383,   384,   385,   386,   388,   389,   390,   391,   392,
     393,   395,   397,   398,   399,   400,   401,   402,   403,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   416,
     417,   418,   419,   420,   422,   423,   424,   426,   427,   428,
     430,   431,   432,   433,   435,   436,   437,   439,   440,   441,
     442,   443,   444,   445,   447,   448,   449,   450,   452,   453,
     454,   456,   457,   458,   459,   461,   462,   463,   464,   466,
     467,   468,   469,   471,   472,   473,   474,   476,   477,   478,
     479,   481,   482,   483,   484
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TERM", "TYPE", "END_TYPE", "FIELD",
  "RETURN", "RETURNVALUE", "REF", "LINE_NUMBER", "LITERAL_INT",
  "LITERAL_FLOAT", "LITERAL_STRING", "STAR", "INTEGER_VARIABLE",
  "VARIABLE", "STRING_VARIABLE", "TYPE_VARIABLE", "STRING_FUNCTION",
  "INTEGER_FUNCTION", "FLOAT_FUNCTION", "PROCEDURE", "DEFINE_PROCEDURE",
  "DEFINE_INTEGER_FUNCTION", "DEFINE_FLOAT_FUNCTION",
  "DEFINE_STRING_FUNCTION", "DEFINE", "DOUBLESEMI", "DATA", "DIM", "ELSE",
  "END", "END_IF", "END_FUNCTION", "END_PROCEDURE", "END_WHILE", "FOR",
  "FUNCTION", "GLOBAL", "IF", "INPUT", "LOCAL", "NEXT", "OSCLI", "PRINT",
  "READ", "REPEAT", "WHILE", "CASE", "WHEN", "END_CASE", "OF", "OTHERWISE",
  "RESTORE", "RND", "SPC", "STEP", "TAB", "THEN", "TO", "TIME", "TIMES",
  "TRACEON", "TRACEOFF", "UNTIL", "CLOSE", "OPENIN", "OPENOUT", "OPENUP",
  "BGET", "BPUT", "EOFH", "INKEY", "INKEYS", "SHL", "SHR", "INT", "FLOAT",
  "FALSE", "TRUE", "INTEGERDIVIDE", "E", "GE", "LE", "NE", "AND", "OR",
  "EOR", "GOSUB", "GOTO", "ASC", "CHRS", "INSTR", "LEFTS", "MIDS",
  "RIGHTS", "LEN", "STRS", "STRINGS", "ACS", "DIV", "MOD", "SQR", "LN",
  "LOG", "EXP", "ATN", "TAN", "COS", "SIN", "ABS", "ASN", "DEG", "RAD",
  "SGN", "VAL", "PI", "CLS", "CLG", "COLOUR", "COLOURBG", "FLIP",
  "GRAPHICS", "LINE", "PLOT", "RECTANGLE", "TRIANGLE", "CLIP", "CLIPOFF",
  "FILL", "SHADED", "CIRCLE", "ELLIPSE", "TEXT", "TEXTRIGHT", "TEXTCENTRE",
  "LOADTYPEFACE", "CREATEFONT", "MONO10", "MONO15", "MONO20", "MONO25",
  "MONO30", "MONO40", "MONO50", "MONO75", "MONO100", "PROP10", "PROP15",
  "PROP20", "PROP25", "PROP30", "PROP40", "PROP50", "PROP75", "PROP100",
  "SCREENWIDTH", "SCREENHEIGHT", "PI3D_CREATEVERTEX",
  "PI3D_CREATETRIANGLE", "PI3D_CREATESHAPE", "PI3D_CREATEOBJECT",
  "PI3D_TRANSLATE", "PI3D_ROTATE", "PI3D_SCALE", "PI3D_RENDERFRAME",
  "SOLID", "WIREFRAME", "EDGEDWIREFRAME", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "NOT", "NEG", "'('", "')'", "','", "';'", "'~'", "'\\''",
  "$accept", "pibasic", "line_number", "statement_list", "statement",
  "type_variable", "numeric_variable", "number", "numeric_expression",
  "string_variable", "string", "string_expression", "expression",
  "expression_list", "numeric_expr_list", "variable", "variable_list",
  "proc_variable_list", "assignment", "assignment_list", "global", "local",
  "type", "end_type", "field", "when", "when_list", "input_expression",
  "input_expression_list", "print_expression", "print_expression_list",
  "dim_variable", "dim_2d_variable", "dim_variable_list", "function", YY_NULL
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
      60,    62,    43,    45,    42,    47,   425,   426,    40,    41,
      44,    59,   126,    39
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   184,   185,   186,   187,   187,   187,   187,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   189,   189,   190,   190,   190,   190,   190,   190,
     190,   190,   191,   191,   191,   191,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   193,   193,   193,   194,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   196,   196,   197,   197,   197,   198,   198,   199,
     199,   200,   200,   200,   201,   201,   201,   201,   201,   202,
     202,   202,   203,   203,   204,   204,   205,   206,   207,   208,
     209,   209,   210,   210,   211,   212,   212,   213,   213,   213,
     213,   214,   214,   214,   215,   215,   215,   215,   216,   216,
     216,   217,   217,   217,   217,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     3,     2,     1,     1,
       1,     2,     2,     1,     4,     2,     1,     1,     1,     1,
       2,     2,     3,     1,     5,     6,     4,     6,     4,     8,
       8,    10,    10,     4,     4,     2,     2,     3,     4,     1,
       2,     3,     2,     3,     8,     8,     8,     2,     1,     2,
       1,     2,     4,     1,     1,     4,     2,     2,     1,    13,
      13,     8,     8,     4,     1,     6,     2,     6,     2,     1,
       6,     6,     7,     8,     8,     9,    12,    13,    19,     4,
       8,     1,     1,     4,     1,     4,     6,     1,     4,     6,
       5,     5,     1,     2,     1,     2,     1,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       4,     4,     4,     8,     1,     1,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,    18,
      18,    18,    18,     2,     2,     2,     2,     2,     1,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     1,     1,     1,     4,     4,     6,
       8,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     4,     3,     1,     4,     6,     1,     1,     1,
       3,     3,     3,     3,     1,     4,     4,     1,     4,     5,
       6,     4,     6,     8,     6,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     0,     1,     3,     1,     3,     1,
       1,     0,     1,     3,     0,     1,     2,     3,     4,     3,
       3,     4,     1,     3,     2,     1,     2,     2,     1,     2,
       3,     2,     1,     2,     1,     1,     3,     1,     2,     1,
       4,     1,     3,     3,     4,     4,     4,     6,     6,     6,
       6,     1,     1,     3,     3,     7,     4,     6,     3,     7,
       4,     6,     3,     7,     4,     6,     3,     7,     4,     6,
       3,     7,     4,     6,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     4,     0,   238,     0,    16,     0,     3,     0,    84,
      87,   184,    82,    13,     0,     0,     0,     0,     0,   214,
       0,    23,     0,     0,     0,     0,     0,     0,    39,   221,
      48,     0,     0,    50,    53,    54,     0,     0,     0,     0,
       0,     0,     0,     0,    64,     0,     0,    69,     0,     0,
       0,     0,     0,     0,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,     0,     0,     2,     0,     0,
     219,   220,     0,   232,   235,     8,     9,    17,    18,    19,
      10,   237,     0,   239,    92,    94,   187,     0,   194,   109,
       0,   136,   164,   197,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
       0,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   114,   115,     0,     0,     0,     0,     0,    97,    96,
     212,   189,   188,   213,    15,     0,   217,    51,     0,     0,
       0,     0,   214,   221,     0,   221,     0,   221,     0,   221,
       0,     0,     0,     0,     0,   215,    20,     0,     0,     0,
       0,   261,   262,    21,     0,     0,   234,     0,     0,   244,
     245,    36,     0,   236,     0,    35,     0,   249,     0,   247,
      40,    42,   222,    47,     0,     0,    49,    57,    56,     0,
       0,     0,    11,    12,    66,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     7,     5,     0,     0,
       0,     0,     0,    99,   214,   214,   214,     0,   145,   146,
     147,   144,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,    93,    95,    98,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   222,     0,
       0,   268,     0,   276,     0,   280,     0,   284,   221,     0,
     221,     0,   221,     0,   221,     0,   214,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
      22,     0,   248,     0,    41,    43,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,   230,     0,   229,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   183,   211,   107,   108,
     104,   172,   174,   175,   173,   178,   179,   180,   105,   106,
     176,   177,   100,   101,   102,   103,   205,   207,   208,   206,
     209,   210,   190,   191,   192,   193,   218,    85,     0,    88,
       0,   185,     0,    83,    14,   226,   221,     0,     0,     0,
       0,     0,     0,   282,     0,   274,     0,   278,     0,     0,
     266,   216,     0,     0,     0,     0,   263,   264,     0,     0,
      28,     0,    26,    38,   246,     0,   251,   252,   253,   223,
      52,   214,     0,   242,     0,    55,    33,    34,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,   231,
       0,   195,   110,   111,   137,   112,   196,   182,   181,   167,
     201,     0,     0,     0,     0,   168,   198,     0,     0,   159,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   160,
     161,   162,   163,   171,     0,   117,   138,     0,     0,     0,
       0,    90,    91,   224,   227,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   254,     0,   255,     0,   256,
       0,     0,     0,     0,     0,     0,   250,     0,     0,   241,
     243,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,    86,
      89,   186,   225,   228,   271,   267,   275,   279,   283,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    25,   240,    65,    67,    70,     0,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,     0,
       0,     0,   169,     0,   202,     0,   204,   200,     0,     0,
     224,   281,   273,   277,   269,   265,   258,   259,   260,   257,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,    30,    73,     0,    74,
       0,     0,     0,    80,    44,    45,    46,     0,     0,    61,
      62,   170,   203,   113,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,    31,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,     0,    77,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   141,   139,
     140,   142,    78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    65,    66,    67,    68,    69,   158,   159,   160,    71,
     162,   163,   185,   186,   167,    72,   519,   594,    73,    74,
      75,    76,    77,    78,    79,   523,   524,   200,   201,   516,
     518,   191,   192,   193,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -356
static const yytype_int16 yypact[] =
{
    3990,  -356,    -2,  -356,   119,  -356,  3163,  -356,  3650,  -170,
    -150,  -132,  -120,  -111,  1194,  1363,  1528,  1693,   173,  3163,
     189,  -356,    20,   193,  3163,   110,    66,    -1,  2990,   119,
    -356,  3163,   119,  -356,  -356,  -356,  3163,  3650,  3650,  3650,
     -98,   -93,    90,    96,  -356,  3650,  3650,  -356,  3650,  3650,
    3650,  3424,  3276,  3650,  -356,  3537,  3650,  3650,  3650,    91,
      93,  3650,  3650,  3650,  -356,   108,  3990,  -356,   109,    47,
    -356,  -356,    31,   -62,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,   -59,  -356,  -356,  -356,  -356,     8,   -58,   -40,
     -39,   -38,  -356,  -356,    -1,    -1,    -1,  3650,  3650,   -35,
     -34,   -33,   -31,  -356,  -356,   -27,   -20,   -14,   -13,   -12,
     -10,    -7,  -167,    -4,     1,     2,     3,     5,     7,     9,
      41,    42,    44,    48,    50,    51,    53,    58,    61,  -356,
      62,    -1,  3650,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,   135,  3650,    88,  3650,  3163,  -356,  -356,
    7866,  -356,  -356,   759,  -356,  3650,  4320,  -356,  3650,  3650,
    3650,  3650,  3163,    59,   120,   119,   125,   119,   184,   119,
     191,  1858,  2023,  2188,  2353,    57,  -356,    63,    64,    65,
      67,    68,    70,  -356,   156,   164,  -356,  3826,     4,  -356,
      71,  -356,   189,  -356,    -1,   759,    69,  -356,  2990,  -356,
     -11,   224,    73,  -356,  3990,   202,  -356,  7866,  7866,  4344,
    3650,  3650,  -356,  -356,  4366,  4395,  4446,  4475,  4497,  3650,
    4521,  3650,  3650,  4552,  4598,  3650,  4627,  4655,  4678,  4707,
      83,    84,  4730,  4758,  4787,  -356,  -356,  3990,   248,   183,
    3163,   193,  3650,  -356,  3163,  3163,  3163,  3650,   759,   759,
     759,  7866,  7866,  3650,  3650,  3650,  3650,    -1,  3650,    -1,
      -1,    -1,    -1,    -1,  3650,    89,  3650,  3650,  3650,  3650,
    3650,  3650,  3650,  3650,  3650,  3650,  3650,  3650,  3650,  3650,
    3650,    -1,  3650,   759,  4810,   103,  4833,  -356,  -356,  -356,
    -356,  6644,   652,  3650,  3650,  3650,  3650,  3650,  3650,  3650,
    3650,  3650,  3650,  3650,  3650,  3650,  3650,  3650,  3650,  3650,
    3650,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  3650,   783,   837,  4163,  6667,   112,   119,   113,   143,
     145,  -356,   147,  -356,   149,  -356,   151,  -356,   119,   258,
     119,   300,   119,   301,    59,   302,  3163,  3650,  3650,  3650,
    3650,   189,   189,  3650,  3650,  4153,    -6,   119,  -356,   119,
    -356,  3650,  -356,  2990,  2990,  -356,   119,   310,    52,  3650,
    6690,  6723,  3650,  3650,  3650,  3650,  3650,  4864,  3650,  4913,
    4941,  3650,  3650,  4965,  3650,  3650,  3650,  3650,  3650,  3650,
    3650,  3650,  3650,  -356,  -356,  3163,  -356,  -356,  6746,   175,
     178,   181,  6769,  6798,  6848,  6877,  6899,   916,  6923,   282,
     525,   770,   892,   993,  6953,  3650,  4988,  7004,  7028,  7058,
    7080,  7109,  7133,  7185,  7214,  7238,  7260,  7290,  7319,  7365,
    7395,  1106,  5016,  3650,   343,  3650,  -356,  -356,  -356,  -356,
     -24,   -42,   -42,   -42,   -42,   944,   363,   363,   -24,   -24,
     -42,   -42,    40,    40,   -24,   -24,    60,    60,    60,    60,
      60,    60,  -118,  -118,  -356,  -356,  -356,  -356,  3650,  -356,
    3650,  -356,  3650,    56,  -356,   182,    59,  3990,  3990,  3990,
    3990,  3990,   190,  -356,   194,  -356,   200,  -356,   203,   206,
    -356,  -356,  4219,  4264,  4286,  5068,  -356,  -356,   115,   257,
     337,  3990,  -356,  -356,  -356,  7424,  -102,  -356,  -356,  -356,
    -356,  3163,  4153,    52,   321,  7866,  -356,  -356,  5091,  5119,
    5143,  5171,  7866,  3650,  5194,  3650,  3650,  5246,  5274,  3650,
    5296,  5326,  5349,  5377,  7446,  7470,  5406,  5429,  7866,  -356,
      56,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,    -1,  3650,  3650,  3650,  -356,  -356,  7500,    -1,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,  3650,  7866,  -356,  5452,  7551,  7575,
    7605,  -356,  -356,    59,  -356,   346,   360,   362,   364,   365,
    3990,  3990,  3990,  3990,  3990,  -356,  3650,  -356,  3650,  -356,
    3650,   381,  3650,  3650,  4153,   367,  -356,  2990,  4153,  -356,
    -356,  -356,  3650,  3650,  3650,  3650,  5483,  3650,  5532,  5560,
    3650,  3650,  5584,  3650,  3650,  3650,  3650,   227,   228,  3650,
    3650,   231,  7627,  5607,  7656,  -356,  1339,  5635,  3650,  -356,
    -356,  -356,   229,  -356,  -356,  -356,  -356,  -356,  -356,   378,
     379,   384,   385,   387,  7680,  7732,  7761,   240,  2518,  2691,
    -356,  -356,  -356,  7866,  7866,  7866,  5687,  3650,  5710,  3650,
    3650,  5738,  5762,  3650,  7866,  5790,  5813,  5865,  3650,  3650,
    5893,  5915,  -356,  3650,  -356,  3650,  -356,  -356,  3650,  5945,
      59,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    3650,   380,  3650,   382,  3650,  5968,  3650,  5996,  6025,  3650,
    3650,  7866,    -1,    -1,    -1,  6048,  6071,  3650,  3650,  7785,
    7807,  7837,  3650,  2864,  -356,  2864,  -356,  7866,  3650,  7866,
    3650,  3650,  6102,  7866,   759,   759,   759,  3650,  3650,  7866,
    7866,  -356,  -356,  -356,  6151,   383,   390,  7866,  6179,  6203,
    3650,  6226,  6254,  3650,  -356,  -356,  3650,  3650,  6306,  3650,
    3650,  6329,  6357,  6381,  3650,  6409,  6432,  3650,  3650,  3650,
    7866,  3650,  3650,  6484,  7866,  6512,  7866,  7866,  3650,  3650,
    6534,  6564,  3650,  3650,  6587,  6615,   -99,  3650,  -356,  -356,
    -356,  -356,  7866
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -356,  -356,  -356,   304,  -355,  -356,   480,  -356,    -8,   780,
    -356,   320,    86,  -168,   105,   808,   -23,  -172,  -356,   -21,
    -356,  -356,  -356,  -356,  -356,  -356,   -89,  -356,  -191,   -19,
     -25,  -356,  -356,  -189,  -356
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -252
static const yytype_int16 yytable[] =
{
     166,   340,   196,   211,   336,   203,   213,   368,   168,   210,
     510,   274,    86,   370,    81,   275,    11,  -251,    88,     9,
      10,    11,    82,     9,    10,   511,    82,   512,   169,   217,
     218,   219,   798,   303,   304,   194,   195,   224,   225,   305,
     226,   227,   228,   230,   233,   234,   170,   236,   237,   238,
     239,   303,   304,   242,   243,   244,   329,   330,   171,   313,
     314,    93,     9,    10,    11,    82,   337,   172,   799,   800,
     801,   591,   592,   100,     9,    10,    11,    82,   373,   617,
     220,     9,    10,    11,    12,   221,   409,   410,   411,   261,
     262,   106,   164,   108,   109,   110,   202,   112,   113,   297,
     298,   222,   521,     9,    10,   522,    82,   223,   245,   240,
     197,   241,   247,   250,   209,   303,   304,   214,   251,   252,
     254,   305,   216,   198,   294,     9,    10,    11,    82,   248,
     317,   318,   319,   320,     9,    10,    11,    82,   255,   256,
     257,   313,   314,   263,   264,   265,   296,   266,   300,   301,
     339,   267,   342,   295,   344,   341,   346,   301,   268,   343,
     332,   333,   334,   335,   269,   270,   271,   619,   272,   373,
     374,   273,   506,   507,   276,   612,   513,   204,   514,   277,
     278,   279,   499,   280,   367,   281,   252,   282,   501,   372,
     303,   304,   181,   182,   183,   184,   305,   306,   307,   308,
     309,   310,   311,   312,   187,   188,   189,   190,     9,    10,
      11,    12,   380,   381,   319,   320,   313,   314,   345,   283,
     284,   387,   285,   389,   390,   347,   286,   393,   287,   288,
     407,   289,   327,   328,   329,   330,   290,   356,   363,   291,
     292,   357,   358,   359,   408,   360,   364,   371,   361,   412,
     362,   369,   375,   376,   378,   413,   414,   415,   416,   670,
     418,   398,   399,   672,   404,   405,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   444,   442,   315,   316,   317,   318,   319,
     320,   484,   493,   486,   209,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   321,   322,   323,   324,   613,   174,   176,
     178,   180,   487,   166,   488,   492,   489,   494,   490,   496,
     491,   498,   303,   304,   495,   497,   406,   500,   305,   306,
     307,   308,   309,   310,   311,   312,   520,   205,   517,   502,
     503,   504,   505,   618,   551,   508,   509,   552,   313,   314,
     553,   586,   593,   515,   321,   322,   323,   324,   614,   600,
     246,   525,   621,   601,   528,   529,   530,   531,   532,   602,
     534,   654,   603,   537,   538,   604,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   655,   656,   667,   657,   658,
     671,   325,   326,   327,   328,   329,   330,   688,   689,   700,
     692,   693,   701,   702,   258,   259,   260,   567,   703,   709,
     704,   653,   705,   734,     0,   736,   764,   315,   316,   317,
     318,   319,   320,   765,   620,   585,   476,   587,   303,   304,
       0,     0,     0,     0,   305,   306,   307,   308,   309,   310,
       0,   293,   325,   326,   327,   328,   329,   330,     0,   209,
     209,     0,   561,     0,   313,   314,     0,     0,     0,     0,
     588,     0,   589,     0,   590,     0,     0,   302,     0,     0,
      70,     0,     0,     0,    70,   349,   351,   353,   355,     0,
       0,   549,     0,     0,    70,    70,    70,    70,     0,     0,
       0,   366,     0,    70,     0,    70,    70,     0,     0,    70,
       0,     0,    70,     0,     0,     0,     0,     0,   377,     0,
       0,     0,     0,     0,   302,   626,     0,   628,   629,     0,
       0,   632,     0,   315,   316,   317,   318,   319,   320,     0,
       0,     0,     0,     0,     0,     0,    70,     0,     0,    70,
       0,   403,     0,     0,   642,   643,   644,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   253,     0,     0,
       0,     0,     0,     0,     0,     0,   647,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   417,     0,   419,
     420,   421,   422,   423,     0,     0,     0,     0,   664,     0,
     665,     0,   666,     0,   668,   669,     0,   321,   322,   323,
     324,   441,     0,     0,   673,   674,   675,   676,     0,   678,
       0,     0,   681,   682,     0,   684,   685,   686,   687,     0,
       0,   690,   691,     0,     0,   299,     0,     0,     0,     0,
     699,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,     0,     0,    70,     0,    70,     0,    70,     0,    70,
       0,    70,    70,    70,    70,     0,     0,     0,     0,   715,
       0,   717,   718,     0,     0,   721,     0,    70,    70,     0,
     725,   726,     0,     0,     0,   729,     0,   730,     0,     0,
     731,     0,     0,     0,    70,   325,   326,   327,   328,   329,
     330,     0,   733,   209,   735,   562,   737,     0,   739,     0,
       0,   742,   743,     0,     0,     0,     0,     0,     0,   749,
     750,     0,     0,     0,   754,     0,     0,    70,     0,     0,
     757,    70,   758,   759,   321,   322,   323,   324,     0,   761,
     762,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   768,     0,     0,   771,     0,     0,   772,   773,
       0,   775,   776,     0,     0,     0,   780,     0,     0,   783,
     784,   785,     0,   786,   787,     0,     0,     0,     0,     0,
     790,   791,     0,     0,   794,   795,   161,     0,     0,   802,
       0,   595,   596,   597,   598,   599,     0,     0,     0,   161,
       0,     0,     0,     0,   161,     0,     0,   161,   161,     0,
       0,   161,    83,     0,     0,   615,   161,    70,     0,     0,
       0,     0,   325,   326,   327,   328,   329,   330,    70,     0,
      70,   447,    70,   199,    70,     0,     0,   212,     0,     0,
     215,   321,   322,   323,   324,    70,     0,    70,     0,    70,
       0,     0,   321,   322,   323,   324,    70,     0,   303,   304,
       0,     0,     0,     0,   305,   306,   307,   308,   309,   310,
     311,   312,     0,     0,   161,   161,   161,   249,     0,     0,
       0,   641,     0,     0,   313,   314,     0,     0,   646,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   659,   660,   661,   662,   663,     0,
       0,   161,   303,   304,     0,     0,     0,     0,   305,   306,
     307,   308,   309,   310,   311,   312,     0,     0,     0,   325,
     326,   327,   328,   329,   330,     0,     0,   161,   313,   314,
     325,   326,   327,   328,   329,   330,     0,     0,     0,     0,
     563,     0,   161,   315,   316,   317,   318,   319,   320,     0,
       0,     0,   477,   478,     0,     0,    70,    70,    70,    70,
      70,    70,   711,   713,   321,   322,   323,   324,     0,     0,
       0,   338,     0,   212,   161,   212,     0,   212,   161,     0,
       0,    70,     0,     0,     0,     0,     0,     0,   321,   322,
     323,   324,    70,     0,     0,     0,   199,   315,   316,   317,
     318,   319,   320,     0,     0,     0,   479,   480,     0,   303,
     304,     0,     0,     0,     0,   305,   306,   307,   308,   309,
     161,     0,     0,     0,   161,   161,   161,   755,     0,   756,
       0,     0,   744,   745,   746,   313,   314,   161,     0,   161,
     161,   161,   161,   161,     0,     0,     0,     0,     0,     0,
       0,     0,   325,   326,   327,   328,   329,   330,     0,     0,
       0,   161,   564,    70,     0,   321,   322,   323,   324,     0,
      70,    70,    70,    70,    70,     0,   325,   326,   327,   328,
     329,   330,     0,     0,    70,   559,     0,     0,    70,     0,
       0,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,     0,     0,     0,   315,   316,   317,   318,   319,   320,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,     0,     0,     0,
       0,     0,     0,     0,     0,   485,     0,     0,    70,    70,
       0,     0,     0,   161,   161,     0,   212,     0,   212,     0,
     212,     0,   338,   325,   326,   327,   328,   329,   330,     0,
       0,     0,   565,     0,     0,   199,     0,   199,     0,     0,
      70,     0,     0,     0,   212,   161,     0,     0,   321,   322,
     323,   324,     0,     0,     0,     0,     0,     1,     2,     3,
       4,     5,     6,     0,     7,     0,     0,     0,     8,     9,
      10,    11,    12,    70,     0,    70,    13,    14,    15,    16,
      17,    18,     0,    19,    20,     0,    21,     0,     0,     0,
       0,    22,     0,    23,    24,    25,    26,     0,    27,    28,
      29,    30,    31,    32,     0,     0,     0,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,     0,     0,     0,    38,    39,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,   325,   326,   327,   328,
     329,   330,     0,    42,    43,   583,     0,     0,     0,     0,
       0,     0,     0,     0,   338,     0,     0,     0,     0,     0,
       0,   161,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,    55,     0,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,     0,     0,     0,     0,     0,     0,   161,     0,
       0,     0,     0,    59,    60,     0,     0,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     6,   173,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,     0,     0,    13,    14,    15,    16,    17,
      18,     0,    19,    20,     0,    21,     0,   161,     0,     0,
      22,   652,    23,    24,    25,    26,     0,    27,    28,    29,
      30,    31,    32,     0,     0,     0,     0,    33,     0,     0,
       0,   321,   322,   323,   324,     0,    34,    35,    36,    37,
       0,     0,     0,    38,    39,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,    55,     0,    56,    57,    58,
       0,     0,   161,   161,   161,     0,     0,     0,   652,   325,
     326,   327,   328,   329,   330,     0,     0,     0,   697,     0,
       0,     0,    59,    60,     0,     0,    61,    62,    63,    64,
       0,     1,     2,     3,     4,     5,     6,     0,     7,     0,
       0,   175,     8,     9,    10,    11,    12,     0,     0,     0,
      13,    14,    15,    16,    17,    18,     0,    19,    20,     0,
      21,     0,     0,     0,     0,    22,     0,    23,    24,    25,
      26,     0,    27,    28,    29,    30,    31,    32,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,     0,     0,     0,    38,    39,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
      55,     0,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,     0,
       0,    61,    62,    63,    64,     0,     1,     2,     3,     4,
       5,     6,     0,     7,     0,     0,   177,     8,     9,    10,
      11,    12,     0,     0,     0,    13,    14,    15,    16,    17,
      18,     0,    19,    20,     0,    21,     0,     0,     0,     0,
      22,     0,    23,    24,    25,    26,     0,    27,    28,    29,
      30,    31,    32,     0,     0,     0,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,    37,
       0,     0,     0,    38,    39,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,    55,     0,    56,    57,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,     0,     0,    61,    62,    63,    64,
       0,     1,     2,     3,     4,     5,     6,     0,     7,     0,
       0,   179,     8,     9,    10,    11,    12,     0,     0,     0,
      13,    14,    15,    16,    17,    18,     0,    19,    20,     0,
      21,     0,     0,     0,     0,    22,     0,    23,    24,    25,
      26,     0,    27,    28,    29,    30,    31,    32,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,     0,     0,     0,    38,    39,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
      55,     0,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,     0,
       0,    61,    62,    63,    64,     0,     1,     2,     3,     4,
       5,     6,     0,     7,     0,     0,   348,     8,     9,    10,
      11,    12,     0,     0,     0,    13,    14,    15,    16,    17,
      18,     0,    19,    20,     0,    21,     0,     0,     0,     0,
      22,     0,    23,    24,    25,    26,     0,    27,    28,    29,
      30,    31,    32,     0,     0,     0,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,    37,
       0,     0,     0,    38,    39,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,    55,     0,    56,    57,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,     0,     0,    61,    62,    63,    64,
       0,     1,     2,     3,     4,     5,     6,     0,     7,     0,
       0,   350,     8,     9,    10,    11,    12,     0,     0,     0,
      13,    14,    15,    16,    17,    18,     0,    19,    20,     0,
      21,     0,     0,     0,     0,    22,     0,    23,    24,    25,
      26,     0,    27,    28,    29,    30,    31,    32,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,     0,     0,     0,    38,    39,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
      55,     0,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,     0,
       0,    61,    62,    63,    64,     0,     1,     2,     3,     4,
       5,     6,     0,     7,     0,     0,   352,     8,     9,    10,
      11,    12,     0,     0,     0,    13,    14,    15,    16,    17,
      18,     0,    19,    20,     0,    21,     0,     0,     0,     0,
      22,     0,    23,    24,    25,    26,     0,    27,    28,    29,
      30,    31,    32,     0,     0,     0,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,    37,
       0,     0,     0,    38,    39,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,    55,     0,    56,    57,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,     0,     0,    61,    62,    63,    64,
       0,     1,     2,     3,     4,     5,     6,     0,     7,     0,
       0,   354,     8,     9,    10,    11,    12,     0,     0,     0,
      13,    14,    15,    16,    17,    18,     0,    19,    20,     0,
      21,     0,     0,     0,     0,    22,     0,    23,    24,    25,
      26,     0,    27,    28,    29,    30,    31,    32,     0,     0,
       0,     0,    33,     0,     0,   710,     0,     0,     0,     0,
       0,    34,    35,    36,    37,     0,     0,     0,    38,    39,
       0,    40,    41,   303,   304,     0,     0,     0,     0,   305,
     306,   307,   308,   309,   310,   311,   312,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   313,
     314,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
      55,     0,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,     0,
       0,    61,    62,    63,    64,     0,     0,     0,   315,   316,
     317,   318,   319,   320,     1,     2,     3,     4,     5,     6,
       0,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,     0,     0,    13,    14,    15,    16,    17,    18,     0,
      19,    20,     0,    21,     0,     0,     0,     0,    22,     0,
      23,    24,    25,    26,     0,    27,    28,    29,    30,    31,
      32,     0,     0,     0,     0,    33,     0,     0,   712,     0,
       0,     0,     0,     0,    34,    35,    36,    37,     0,     0,
       0,    38,    39,     0,    40,    41,   303,   304,     0,     0,
       0,     0,   305,   306,   307,   308,   309,   310,   311,   312,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   313,   314,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
       0,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,    55,     0,    56,    57,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,     0,     0,    61,    62,    63,    64,     0,     0,
       0,   315,   316,   317,   318,   319,   320,     1,     2,     3,
       4,     5,     6,     0,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,     0,     0,    13,    14,    15,    16,
      17,    18,     0,    19,    20,     0,    21,     0,     0,     0,
       0,    22,     0,    23,    24,    25,    26,     0,    27,    28,
      29,    30,    31,    32,     0,     0,     0,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,     0,     0,     0,    38,    39,     0,    40,    41,   303,
     304,     0,     0,     0,     0,   305,   306,   307,   308,   309,
     310,   311,   312,    42,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   313,   314,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,    55,     0,    56,    57,
      58,    84,    85,    86,     0,     9,    10,    11,    87,    88,
      89,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,     0,     0,    61,    62,    63,
      64,     0,     0,     0,   315,   316,   317,   318,   319,   320,
       0,     0,     0,     0,     0,    91,   206,     0,     0,     0,
       0,    92,    93,     0,     0,     0,     0,    94,    95,    96,
      97,     0,    98,    99,   100,     0,     0,   101,   102,   103,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,     0,     0,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,     0,     0,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,     0,
       0,   153,   154,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   155,     0,     0,   156,     0,   157,     0,
       0,     0,   207,   208,    84,    85,    86,     0,     9,    10,
      11,    87,    88,    89,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,    92,    93,     0,     0,     0,     0,
      94,    95,    96,    97,     0,    98,    99,   100,     0,     0,
     101,   102,   103,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,     0,     0,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,     0,     0,   130,     0,     0,     0,    84,    85,     0,
       0,     9,    10,     0,    87,     0,    89,    90,     0,     0,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,     0,     0,   153,   154,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,   155,    92,     0,   156,
       0,   157,     0,    94,    95,    96,    97,     0,    98,    99,
       0,     0,     0,   101,   102,   103,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,     0,   107,
       0,     0,     0,   111,     0,     0,   114,     0,     0,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,   232,     0,     0,
       0,     0,     0,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    84,    85,   153,   154,     9,
      10,     0,    87,     0,    89,    90,     0,     0,     0,   155,
       0,     0,   156,     0,   165,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,    94,    95,    96,    97,     0,    98,    99,     0,     0,
       0,   101,   102,   103,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,     0,   107,     0,     0,
       0,   111,     0,     0,   114,     0,     0,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,     0,     0,   130,     0,     0,     0,    84,    85,
       0,     0,     9,    10,   229,    87,     0,    89,    90,     0,
       0,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,     0,     0,   153,   154,     0,     0,     0,
       0,     0,    91,     0,     0,     0,     0,   155,    92,     0,
     156,     0,   165,     0,    94,    95,    96,    97,     0,    98,
      99,     0,     0,     0,   101,   102,   103,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,     0,
     107,     0,     0,     0,   111,     0,     0,   114,     0,     0,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,     0,     0,   130,     0,     0,
       0,    84,    85,     0,     0,     9,    10,   235,    87,     0,
      89,    90,     0,     0,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,     0,     0,   153,   154,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
     155,    92,     0,   156,     0,   165,     0,    94,    95,    96,
      97,     0,    98,    99,     0,     0,     0,   101,   102,   103,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,     0,   107,     0,     0,     0,   111,     0,     0,
     114,     0,     0,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,     0,     0,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,     0,
       0,   153,   154,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   155,     0,     0,   156,     0,   165,     1,
       2,     3,     4,     5,     6,     0,     7,     0,     0,     0,
       8,     9,    10,    11,    12,     0,     0,     0,    13,    14,
      15,    16,    17,    18,     0,    19,    20,     0,    21,     0,
       0,     0,     0,    22,     0,    23,    24,    25,    26,     0,
      27,    28,    29,    30,    31,    32,     0,     0,     0,     0,
      33,     0,     0,     0,     0,   365,     0,     0,     0,    34,
      35,    36,    37,     0,     0,     0,    38,    39,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44,     0,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,    55,     0,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,     0,     0,    61,
      62,    63,    64,     1,     2,     3,     4,     5,     6,     0,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
       0,     0,    13,    14,    15,    16,    17,    18,     0,    19,
      20,     0,    21,     0,     0,     0,     0,    22,     0,    23,
      24,    25,    26,     0,    27,    28,    29,    30,    31,    32,
       0,     0,     0,     0,    33,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,     0,     0,     0,
      38,    39,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,    55,     0,    56,    57,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,     0,     0,    61,    62,    63,    64,     2,     3,     4,
       5,     6,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,     0,     0,     0,    13,    14,    15,    16,    17,
      18,     0,    19,    20,     0,    21,     0,     0,     0,     0,
      22,     0,    23,    24,    25,    26,     0,    27,    28,    29,
      30,    31,    32,     0,     0,     0,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,    37,
       0,     0,     0,    38,    39,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   303,   304,
       0,     0,    42,    43,   305,   306,   307,   308,   309,   310,
     311,   312,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   313,   314,     0,     0,     0,     0,
       0,    44,     0,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,    55,     0,    56,    57,    58,
       0,     0,     0,     0,   303,   304,     0,     0,     0,     0,
     305,   306,   307,   308,   309,   310,   311,   312,     0,     0,
       0,     0,    59,    60,     0,     0,    61,    62,    63,    64,
     313,   314,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   315,   316,   317,   318,   319,   320,   303,
     304,     0,   481,   482,     0,   305,   306,   307,   308,   309,
     310,   311,   312,     0,     0,     0,     0,     0,     0,     0,
       0,   303,   304,     0,     0,   313,   314,   305,   306,   307,
     308,   309,   310,   311,   312,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   313,   314,   315,
     316,   317,   318,   319,   320,   303,   304,     0,   605,   606,
       0,   305,   306,   307,   308,   309,   310,   311,   312,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   303,
     304,   313,   314,     0,     0,   305,   306,   307,   308,   309,
     310,   311,   312,     0,   315,   316,   317,   318,   319,   320,
       0,   303,   304,   607,   608,   313,   314,   305,   306,   307,
     308,   309,   310,   311,   312,     0,   315,   316,   317,   318,
     319,   320,     0,     0,     0,   609,   610,   313,   314,     0,
     303,   304,     0,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,     0,     0,     0,     0,
     315,   316,   317,   318,   319,   320,   313,   314,     0,     0,
     331,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   315,   316,   317,   318,   319,   320,
       0,   303,   304,     0,   379,     0,     0,   305,   306,   307,
     308,   309,   310,   311,   312,     0,   315,   316,   317,   318,
     319,   320,     0,     0,     0,     0,   382,   313,   314,     0,
     303,   304,     0,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   312,     0,   315,   316,   317,   318,   319,
     320,     0,   303,   304,     0,   383,   313,   314,   305,   306,
     307,   308,   309,   310,   311,   312,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   303,   304,   313,   314,
       0,     0,   305,   306,   307,   308,   309,   310,   311,   312,
       0,     0,     0,     0,     0,     0,   315,   316,   317,   318,
     319,   320,   313,   314,     0,     0,   384,   303,   304,     0,
       0,     0,     0,   305,   306,   307,   308,   309,   310,   311,
     312,     0,     0,     0,     0,   315,   316,   317,   318,   319,
     320,     0,     0,   313,   314,   385,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   315,   316,   317,
     318,   319,   320,   303,   304,     0,     0,   386,     0,   305,
     306,   307,   308,   309,   310,   311,   312,     0,     0,     0,
       0,   315,   316,   317,   318,   319,   320,     0,     0,   313,
     314,   388,   303,   304,     0,     0,     0,     0,   305,   306,
     307,   308,   309,   310,   311,   312,     0,     0,     0,     0,
       0,     0,   315,   316,   317,   318,   319,   320,   313,   314,
     303,   304,   391,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   303,   304,     0,   313,   314,     0,   305,
     306,   307,   308,   309,   310,   311,   312,     0,   315,   316,
     317,   318,   319,   320,     0,     0,     0,     0,   392,   313,
     314,     0,   303,   304,     0,     0,     0,     0,   305,   306,
     307,   308,   309,   310,   311,   312,     0,   315,   316,   317,
     318,   319,   320,     0,     0,   303,   304,   394,   313,   314,
       0,   305,   306,   307,   308,   309,   310,   311,   312,     0,
       0,     0,     0,     0,     0,   315,   316,   317,   318,   319,
     320,   313,   314,   303,   304,   395,     0,     0,     0,   305,
     306,   307,   308,   309,   310,   311,   312,     0,   315,   316,
     317,   318,   319,   320,     0,     0,     0,     0,   396,   313,
     314,     0,   303,   304,     0,     0,     0,     0,   305,   306,
     307,   308,   309,   310,   311,   312,     0,   315,   316,   317,
     318,   319,   320,     0,     0,   303,   304,   397,   313,   314,
       0,   305,   306,   307,   308,   309,   310,   311,   312,     0,
     315,   316,   317,   318,   319,   320,     0,     0,   303,   304,
     400,   313,   314,     0,   305,   306,   307,   308,   309,   310,
     311,   312,     0,     0,     0,     0,     0,     0,   315,   316,
     317,   318,   319,   320,   313,   314,     0,     0,   401,   303,
     304,     0,     0,     0,     0,   305,   306,   307,   308,   309,
     310,   311,   312,     0,     0,     0,     0,   315,   316,   317,
     318,   319,   320,     0,     0,   313,   314,   402,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     315,   316,   317,   318,   319,   320,     0,     0,   303,   304,
     443,     0,     0,     0,   305,   306,   307,   308,   309,   310,
     311,   312,     0,   315,   316,   317,   318,   319,   320,     0,
       0,     0,     0,   445,   313,   314,   303,   304,     0,     0,
       0,     0,   305,   306,   307,   308,   309,   310,   311,   312,
       0,     0,     0,     0,   315,   316,   317,   318,   319,   320,
     303,   304,   313,   314,   533,     0,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   303,   304,     0,   313,   314,     0,   305,
     306,   307,   308,   309,   310,   311,   312,     0,     0,     0,
       0,     0,     0,   315,   316,   317,   318,   319,   320,   313,
     314,   303,   304,   535,     0,     0,     0,   305,   306,   307,
     308,   309,   310,   311,   312,     0,     0,     0,     0,     0,
       0,   315,   316,   317,   318,   319,   320,   313,   314,     0,
       0,   536,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   315,   316,   317,   318,   319,
     320,     0,     0,   303,   304,   539,     0,     0,     0,   305,
     306,   307,   308,   309,   310,   311,   312,     0,   315,   316,
     317,   318,   319,   320,     0,     0,   303,   304,   568,   313,
     314,     0,   305,   306,   307,   308,   309,   310,   311,   312,
       0,     0,     0,     0,     0,     0,   315,   316,   317,   318,
     319,   320,   313,   314,   303,   304,   584,     0,     0,     0,
     305,   306,   307,   308,   309,   310,   311,   312,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   303,   304,
     313,   314,     0,     0,   305,   306,   307,   308,   309,   310,
     311,   312,     0,     0,     0,     0,     0,     0,   315,   316,
     317,   318,   319,   320,   313,   314,   303,   304,   611,     0,
       0,     0,   305,   306,   307,   308,   309,   310,   311,   312,
       0,   315,   316,   317,   318,   319,   320,     0,     0,   303,
     304,   622,   313,   314,     0,   305,   306,   307,   308,   309,
     310,   311,   312,     0,     0,     0,     0,     0,     0,   315,
     316,   317,   318,   319,   320,   313,   314,     0,     0,   623,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   315,   316,   317,   318,   319,   320,     0,
       0,   303,   304,   624,     0,     0,     0,   305,   306,   307,
     308,   309,   310,   311,   312,     0,     0,     0,     0,     0,
       0,   315,   316,   317,   318,   319,   320,   313,   314,   303,
     304,   625,     0,     0,     0,   305,   306,   307,   308,   309,
     310,   311,   312,     0,   315,   316,   317,   318,   319,   320,
       0,   303,   304,     0,   627,   313,   314,   305,   306,   307,
     308,   309,   310,   311,   312,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   313,   314,     0,
       0,   303,   304,     0,     0,     0,     0,   305,   306,   307,
     308,   309,   310,   311,   312,     0,   315,   316,   317,   318,
     319,   320,     0,     0,   303,   304,   630,   313,   314,     0,
     305,   306,   307,   308,   309,   310,   311,   312,     0,     0,
       0,     0,     0,     0,   315,   316,   317,   318,   319,   320,
     313,   314,   303,   304,   631,     0,     0,     0,   305,   306,
     307,   308,   309,   310,   311,   312,   315,   316,   317,   318,
     319,   320,     0,     0,     0,     0,   633,     0,   313,   314,
       0,   303,   304,     0,     0,     0,     0,   305,   306,   307,
     308,   309,   310,   311,   312,     0,   315,   316,   317,   318,
     319,   320,     0,     0,   303,   304,   634,   313,   314,     0,
     305,   306,   307,   308,   309,   310,   311,   312,     0,   315,
     316,   317,   318,   319,   320,     0,     0,   303,   304,   635,
     313,   314,     0,   305,   306,   307,   308,   309,   310,   311,
     312,     0,     0,     0,     0,     0,     0,   315,   316,   317,
     318,   319,   320,   313,   314,     0,     0,   636,   303,   304,
       0,     0,     0,     0,   305,   306,   307,   308,   309,   310,
     311,   312,     0,     0,     0,     0,   315,   316,   317,   318,
     319,   320,     0,     0,   313,   314,   639,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   315,
     316,   317,   318,   319,   320,     0,     0,   303,   304,   640,
       0,     0,     0,   305,   306,   307,   308,   309,   310,   311,
     312,     0,   315,   316,   317,   318,   319,   320,     0,     0,
       0,     0,   648,   313,   314,   303,   304,     0,     0,     0,
       0,   305,   306,   307,   308,   309,   310,   311,   312,     0,
       0,     0,     0,   315,   316,   317,   318,   319,   320,   303,
     304,   313,   314,   677,     0,   305,   306,   307,   308,   309,
     310,   311,   312,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   303,   304,     0,   313,   314,     0,   305,   306,
     307,   308,   309,   310,   311,   312,     0,     0,     0,     0,
       0,     0,   315,   316,   317,   318,   319,   320,   313,   314,
     303,   304,   679,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,     0,     0,     0,     0,
     315,   316,   317,   318,   319,   320,   313,   314,     0,     0,
     680,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   315,   316,   317,   318,   319,   320,
       0,     0,   303,   304,   683,     0,     0,     0,   305,   306,
     307,   308,   309,   310,   311,   312,     0,   315,   316,   317,
     318,   319,   320,     0,     0,   303,   304,   695,   313,   314,
       0,   305,   306,   307,   308,   309,   310,   311,   312,     0,
       0,     0,     0,     0,     0,   315,   316,   317,   318,   319,
     320,   313,   314,   303,   304,   698,     0,     0,     0,   305,
     306,   307,   308,   309,   310,   311,   312,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   303,   304,   313,
     314,     0,     0,   305,   306,   307,   308,   309,   310,   311,
     312,     0,     0,     0,     0,     0,     0,   315,   316,   317,
     318,   319,   320,   313,   314,   303,   304,   714,     0,     0,
       0,   305,   306,   307,   308,   309,   310,   311,   312,     0,
     315,   316,   317,   318,   319,   320,     0,     0,   303,   304,
     716,   313,   314,     0,   305,   306,   307,   308,   309,   310,
     311,   312,     0,     0,     0,     0,     0,     0,   315,   316,
     317,   318,   319,   320,   313,   314,     0,     0,   719,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   315,   316,   317,   318,   319,   320,     0,     0,
     303,   304,   720,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,     0,     0,     0,     0,
     315,   316,   317,   318,   319,   320,   313,   314,   303,   304,
     722,     0,     0,     0,   305,   306,   307,   308,   309,   310,
     311,   312,     0,   315,   316,   317,   318,   319,   320,     0,
     303,   304,     0,   723,   313,   314,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   313,   314,     0,     0,
     303,   304,     0,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   312,     0,   315,   316,   317,   318,   319,
     320,     0,     0,   303,   304,   724,   313,   314,     0,   305,
     306,   307,   308,   309,   310,   311,   312,     0,     0,     0,
       0,     0,     0,   315,   316,   317,   318,   319,   320,   313,
     314,   303,   304,   727,     0,     0,     0,   305,   306,   307,
     308,   309,   310,   311,   312,   315,   316,   317,   318,   319,
     320,     0,     0,     0,     0,   728,     0,   313,   314,     0,
     303,   304,     0,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   312,     0,   315,   316,   317,   318,   319,
     320,     0,     0,   303,   304,   732,   313,   314,     0,   305,
     306,   307,   308,   309,   310,   311,   312,     0,   315,   316,
     317,   318,   319,   320,     0,     0,   303,   304,   738,   313,
     314,     0,   305,   306,   307,   308,   309,   310,   311,   312,
       0,     0,     0,     0,     0,     0,   315,   316,   317,   318,
     319,   320,   313,   314,     0,     0,   740,   303,   304,     0,
       0,     0,     0,   305,   306,   307,   308,   309,   310,   311,
     312,     0,     0,     0,     0,   315,   316,   317,   318,   319,
     320,     0,     0,   313,   314,   741,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   315,   316,
     317,   318,   319,   320,     0,     0,   303,   304,   747,     0,
       0,     0,   305,   306,   307,   308,   309,   310,   311,   312,
       0,   315,   316,   317,   318,   319,   320,     0,     0,     0,
       0,   748,   313,   314,   303,   304,     0,     0,     0,     0,
     305,   306,   307,   308,   309,   310,   311,   312,     0,     0,
       0,     0,   315,   316,   317,   318,   319,   320,   303,   304,
     313,   314,   760,     0,   305,   306,   307,   308,   309,   310,
     311,   312,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   303,   304,     0,   313,   314,     0,   305,   306,   307,
     308,   309,   310,   311,   312,     0,     0,     0,     0,     0,
       0,   315,   316,   317,   318,   319,   320,   313,   314,   303,
     304,   763,     0,     0,     0,   305,   306,   307,   308,   309,
     310,   311,   312,     0,     0,     0,     0,     0,     0,   315,
     316,   317,   318,   319,   320,   313,   314,     0,     0,   766,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   315,   316,   317,   318,   319,   320,     0,
       0,   303,   304,   767,     0,     0,     0,   305,   306,   307,
     308,   309,   310,   311,   312,     0,   315,   316,   317,   318,
     319,   320,     0,     0,   303,   304,   769,   313,   314,     0,
     305,   306,   307,   308,   309,   310,   311,   312,     0,     0,
       0,     0,     0,     0,   315,   316,   317,   318,   319,   320,
     313,   314,   303,   304,   770,     0,     0,     0,   305,   306,
     307,   308,   309,   310,   311,   312,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   303,   304,   313,   314,
       0,     0,   305,   306,   307,   308,   309,   310,   311,   312,
       0,     0,     0,     0,     0,     0,   315,   316,   317,   318,
     319,   320,   313,   314,   303,   304,   774,     0,     0,     0,
     305,   306,   307,   308,   309,   310,   311,   312,     0,   315,
     316,   317,   318,   319,   320,     0,     0,   303,   304,   777,
     313,   314,     0,   305,   306,   307,   308,   309,   310,   311,
     312,     0,     0,     0,     0,     0,     0,   315,   316,   317,
     318,   319,   320,   313,   314,     0,     0,   778,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   315,   316,   317,   318,   319,   320,     0,     0,   303,
     304,   779,     0,     0,     0,   305,   306,   307,   308,   309,
     310,   311,   312,     0,     0,     0,     0,     0,     0,   315,
     316,   317,   318,   319,   320,   313,   314,   303,   304,   781,
       0,     0,     0,   305,   306,   307,   308,   309,   310,   311,
     312,     0,   315,   316,   317,   318,   319,   320,     0,   303,
     304,     0,   782,   313,   314,   305,   306,   307,   308,   309,
     310,   311,   312,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   313,   314,     0,     0,   303,
     304,     0,     0,     0,     0,   305,   306,   307,   308,   309,
     310,   311,   312,     0,   315,   316,   317,   318,   319,   320,
       0,     0,   303,   304,   788,   313,   314,     0,   305,   306,
     307,   308,   309,   310,   311,   312,     0,     0,     0,     0,
       0,     0,   315,   316,   317,   318,   319,   320,   313,   314,
     303,   304,   789,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   312,   315,   316,   317,   318,   319,   320,
       0,     0,     0,     0,   792,     0,   313,   314,     0,   303,
     304,     0,     0,     0,     0,   305,   306,   307,   308,   309,
     310,   311,   312,     0,   315,   316,   317,   318,   319,   320,
       0,     0,   303,   304,   793,   313,   314,     0,   305,   306,
     307,   308,   309,   310,   311,   312,     0,   315,   316,   317,
     318,   319,   320,     0,     0,   303,   304,   796,   313,   314,
       0,   305,   306,   307,   308,   309,   310,   311,   312,     0,
       0,     0,     0,     0,     0,   315,   316,   317,   318,   319,
     320,   313,   314,     0,     0,   797,     0,     0,   303,   304,
       0,     0,     0,     0,   305,   306,   307,   308,   309,   310,
     311,   312,     0,     0,   315,   316,   317,   318,   319,   320,
       0,   303,   304,   446,   313,   314,     0,   305,   306,   307,
     308,   309,   310,   311,   312,     0,     0,   315,   316,   317,
     318,   319,   320,     0,   303,   304,   483,   313,   314,     0,
     305,   306,   307,   308,   309,   310,   311,   312,     0,     0,
     315,   316,   317,   318,   319,   320,     0,     0,     0,   526,
     313,   314,     0,   303,   304,     0,     0,     0,     0,   305,
     306,   307,   308,   309,   310,   311,   312,     0,     0,     0,
       0,     0,     0,   315,   316,   317,   318,   319,   320,   313,
     314,     0,   527,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   315,   316,   317,   318,
     319,   320,     0,   303,   304,   550,     0,     0,     0,   305,
     306,   307,   308,   309,   310,   311,   312,     0,     0,   315,
     316,   317,   318,   319,   320,     0,     0,     0,   554,   313,
     314,     0,   303,   304,     0,     0,     0,     0,   305,   306,
     307,   308,   309,   310,   311,   312,     0,     0,   315,   316,
     317,   318,   319,   320,   303,   304,     0,   555,   313,   314,
     305,   306,   307,   308,   309,   310,   311,   312,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   303,   304,
     313,   314,     0,     0,   305,   306,   307,   308,   309,   310,
     311,   312,     0,     0,     0,     0,     0,     0,   315,   316,
     317,   318,   319,   320,   313,   314,     0,   556,   303,   304,
       0,     0,     0,     0,   305,   306,   307,   308,   309,   310,
     311,   312,     0,     0,     0,     0,     0,   315,   316,   317,
     318,   319,   320,     0,   313,   314,   557,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   315,
     316,   317,   318,   319,   320,     0,     0,     0,   558,   303,
     304,     0,     0,     0,     0,   305,   306,   307,   308,   309,
     310,   311,   312,   315,   316,   317,   318,   319,   320,     0,
       0,     0,   560,   303,   304,   313,   314,     0,     0,   305,
     306,   307,   308,   309,   310,   311,   312,     0,     0,     0,
       0,     0,     0,   315,   316,   317,   318,   319,   320,   313,
     314,     0,   566,   303,   304,     0,     0,     0,     0,   305,
     306,   307,   308,   309,   310,   311,   312,     0,     0,     0,
       0,     0,     0,     0,     0,   303,   304,     0,     0,   313,
     314,   305,   306,   307,   308,   309,   310,   311,   312,     0,
       0,     0,     0,     0,   315,   316,   317,   318,   319,   320,
       0,   313,   314,   569,   303,   304,     0,     0,     0,     0,
     305,   306,   307,   308,   309,   310,   311,   312,   315,   316,
     317,   318,   319,   320,     0,     0,     0,   570,   303,   304,
     313,   314,     0,     0,   305,   306,   307,   308,   309,   310,
     311,   312,     0,     0,     0,     0,     0,     0,   315,   316,
     317,   318,   319,   320,   313,   314,     0,   571,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     315,   316,   317,   318,   319,   320,     0,     0,     0,   572,
     303,   304,     0,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,     0,     0,     0,   315,
     316,   317,   318,   319,   320,     0,   313,   314,   573,   303,
     304,     0,     0,     0,     0,   305,   306,   307,   308,   309,
     310,   311,   312,   315,   316,   317,   318,   319,   320,     0,
       0,     0,   574,   303,   304,   313,   314,     0,     0,   305,
     306,   307,   308,   309,   310,   311,   312,     0,     0,     0,
       0,     0,     0,     0,     0,   303,   304,     0,     0,   313,
     314,   305,   306,   307,   308,   309,   310,   311,   312,     0,
       0,     0,     0,     0,     0,   315,   316,   317,   318,   319,
     320,   313,   314,     0,   575,   303,   304,     0,     0,     0,
       0,   305,   306,   307,   308,   309,   310,   311,   312,     0,
       0,     0,     0,     0,   315,   316,   317,   318,   319,   320,
       0,   313,   314,   576,   303,   304,     0,     0,     0,     0,
     305,   306,   307,   308,   309,   310,   311,   312,   315,   316,
     317,   318,   319,   320,     0,     0,     0,   577,     0,     0,
     313,   314,     0,     0,     0,     0,     0,     0,     0,     0,
     315,   316,   317,   318,   319,   320,     0,     0,     0,   578,
     303,   304,     0,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,     0,     0,     0,     0,
     315,   316,   317,   318,   319,   320,   313,   314,     0,   579,
     303,   304,     0,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,     0,     0,     0,   315,
     316,   317,   318,   319,   320,     0,   313,   314,   580,   303,
     304,     0,     0,     0,     0,   305,   306,   307,   308,   309,
     310,   311,   312,     0,     0,     0,     0,     0,     0,     0,
       0,   303,   304,     0,     0,   313,   314,   305,   306,   307,
     308,   309,   310,   311,   312,   315,   316,   317,   318,   319,
     320,     0,     0,     0,   581,   303,   304,   313,   314,     0,
       0,   305,   306,   307,   308,   309,   310,   311,   312,     0,
       0,     0,     0,     0,     0,   315,   316,   317,   318,   319,
     320,   313,   314,     0,   582,   303,   304,     0,     0,     0,
       0,   305,   306,   307,   308,   309,   310,   311,   312,     0,
       0,     0,     0,     0,   315,   316,   317,   318,   319,   320,
       0,   313,   314,   616,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   315,   316,   317,   318,
     319,   320,     0,     0,     0,   637,   303,   304,     0,     0,
       0,     0,   305,   306,   307,   308,   309,   310,   311,   312,
     315,   316,   317,   318,   319,   320,     0,     0,     0,   638,
     303,   304,   313,   314,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,     0,     0,     0,     0,
     315,   316,   317,   318,   319,   320,   313,   314,     0,   645,
     303,   304,     0,     0,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,     0,     0,     0,     0,
       0,     0,   303,   304,     0,     0,   313,   314,   305,   306,
     307,   308,   309,   310,   311,   312,     0,     0,     0,     0,
       0,   315,   316,   317,   318,   319,   320,     0,   313,   314,
     649,   303,   304,     0,     0,     0,     0,   305,   306,   307,
     308,   309,   310,   311,   312,   315,   316,   317,   318,   319,
     320,     0,     0,     0,   650,   303,   304,   313,   314,     0,
       0,   305,   306,   307,   308,   309,   310,   311,   312,     0,
       0,     0,     0,     0,     0,   315,   316,   317,   318,   319,
     320,   313,   314,     0,   651,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   315,   316,   317,
     318,   319,   320,     0,     0,     0,   694,   303,   304,     0,
       0,     0,     0,   305,   306,   307,   308,   309,   310,   311,
     312,     0,     0,     0,     0,     0,   315,   316,   317,   318,
     319,   320,     0,   313,   314,   696,   303,   304,     0,     0,
       0,     0,   305,   306,   307,   308,   309,   310,   311,   312,
     315,   316,   317,   318,   319,   320,     0,     0,     0,   706,
     303,   304,   313,   314,     0,     0,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,     0,     0,     0,     0,
       0,     0,   303,   304,     0,     0,   313,   314,   305,   306,
     307,   308,   309,   310,   311,   312,     0,     0,     0,     0,
       0,     0,   315,   316,   317,   318,   319,   320,   313,   314,
       0,   707,   303,   304,     0,     0,     0,     0,   305,   306,
     307,   308,   309,   310,   311,   312,     0,     0,     0,     0,
       0,   315,   316,   317,   318,   319,   320,     0,   313,   314,
     708,   303,   304,     0,     0,     0,     0,   305,   306,   307,
     308,   309,   310,   311,   312,   315,   316,   317,   318,   319,
     320,     0,     0,     0,   751,     0,     0,   313,   314,     0,
       0,     0,     0,     0,     0,     0,     0,   315,   316,   317,
     318,   319,   320,     0,     0,     0,   752,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   315,   316,   317,
     318,   319,   320,     0,     0,     0,   753,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   315,   316,   317,   318,
     319,   320
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-356)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       8,   173,    23,    28,   172,    26,    29,   198,   178,    28,
     365,   178,    13,   202,    16,   182,    17,    28,    19,    15,
      16,    17,    18,    15,    16,    31,    18,    33,   178,    37,
      38,    39,   131,    75,    76,    15,    16,    45,    46,    81,
      48,    49,    50,    51,    52,    53,   178,    55,    56,    57,
      58,    75,    76,    61,    62,    63,   174,   175,   178,   101,
     102,    62,    15,    16,    17,    18,     7,   178,   167,   168,
     169,    15,    16,    74,    15,    16,    17,    18,   180,   181,
     178,    15,    16,    17,    18,   178,   254,   255,   256,    97,
      98,    92,     6,    94,    95,    96,    30,    98,    99,    11,
      12,    11,    50,    15,    16,    53,    18,    11,     0,    18,
      24,    18,     3,    82,    28,    75,    76,    31,   180,   178,
     178,    81,    36,    13,   132,    15,    16,    17,    18,    82,
     172,   173,   174,   175,    15,    16,    17,    18,   178,   178,
     178,   101,   102,   178,   178,   178,   154,   178,   156,   157,
     173,   178,   175,    18,   177,    35,   179,   165,   178,    34,
     168,   169,   170,   171,   178,   178,   178,   522,   178,   180,
     181,   178,   361,   362,   178,    60,   367,   178,   369,   178,
     178,   178,   354,   178,   180,   178,   178,   178,   356,   208,
      75,    76,    19,    20,    21,    22,    81,    82,    83,    84,
      85,    86,    87,    88,    15,    16,    17,    18,    15,    16,
      17,    18,   220,   221,   174,   175,   101,   102,    34,   178,
     178,   229,   178,   231,   232,    34,   178,   235,   178,   178,
     251,   178,   172,   173,   174,   175,   178,   180,    82,   178,
     178,   178,   178,   178,   252,   178,    82,   178,   180,   257,
     180,   180,    28,   180,    52,   263,   264,   265,   266,   614,
     268,   178,   178,   618,    16,    82,   274,   178,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   180,   292,   170,   171,   172,   173,   174,
     175,   179,    34,   180,   208,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,    82,    83,    84,    85,    60,    14,    15,
      16,    17,   179,   331,   179,   348,   179,   350,   179,   352,
     179,   354,    75,    76,    34,    34,   250,    35,    81,    82,
      83,    84,    85,    86,    87,    88,    36,    27,   373,   357,
     358,   359,   360,   521,   179,   363,   364,   179,   101,   102,
     179,    18,   180,   371,    82,    83,    84,    85,    31,   179,
      66,   379,    51,   179,   382,   383,   384,   385,   386,   179,
     388,    35,   179,   391,   392,   179,   394,   395,   396,   397,
     398,   399,   400,   401,   402,    35,    34,    16,    34,    34,
      33,   170,   171,   172,   173,   174,   175,   180,   180,   180,
     179,   180,    34,    34,    94,    95,    96,   425,    34,   179,
      35,   593,    35,    43,    -1,    43,    43,   170,   171,   172,
     173,   174,   175,    43,   523,   443,   331,   445,    75,    76,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      -1,   131,   170,   171,   172,   173,   174,   175,    -1,   373,
     374,    -1,   180,    -1,   101,   102,    -1,    -1,    -1,    -1,
     478,    -1,   480,    -1,   482,    -1,    -1,   157,    -1,    -1,
       0,    -1,    -1,    -1,     4,   181,   182,   183,   184,    -1,
      -1,   405,    -1,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,   197,    -1,    23,    -1,    25,    26,    -1,    -1,    29,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,   214,    -1,
      -1,    -1,    -1,    -1,   204,   533,    -1,   535,   536,    -1,
      -1,   539,    -1,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    69,
      -1,   247,    -1,    -1,   562,   563,   564,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   584,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,   269,
     270,   271,   272,   273,    -1,    -1,    -1,    -1,   606,    -1,
     608,    -1,   610,    -1,   612,   613,    -1,    82,    83,    84,
      85,   291,    -1,    -1,   622,   623,   624,   625,    -1,   627,
      -1,    -1,   630,   631,    -1,   633,   634,   635,   636,    -1,
      -1,   639,   640,    -1,    -1,   155,    -1,    -1,    -1,    -1,
     648,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,    -1,    -1,   173,    -1,   175,    -1,   177,    -1,   179,
      -1,   181,   182,   183,   184,    -1,    -1,    -1,    -1,   677,
      -1,   679,   680,    -1,    -1,   683,    -1,   197,   198,    -1,
     688,   689,    -1,    -1,    -1,   693,    -1,   695,    -1,    -1,
     698,    -1,    -1,    -1,   214,   170,   171,   172,   173,   174,
     175,    -1,   710,   617,   712,   180,   714,    -1,   716,    -1,
      -1,   719,   720,    -1,    -1,    -1,    -1,    -1,    -1,   727,
     728,    -1,    -1,    -1,   732,    -1,    -1,   247,    -1,    -1,
     738,   251,   740,   741,    82,    83,    84,    85,    -1,   747,
     748,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   760,    -1,    -1,   763,    -1,    -1,   766,   767,
      -1,   769,   770,    -1,    -1,    -1,   774,    -1,    -1,   777,
     778,   779,    -1,   781,   782,    -1,    -1,    -1,    -1,    -1,
     788,   789,    -1,    -1,   792,   793,     6,    -1,    -1,   797,
      -1,   487,   488,   489,   490,   491,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,     4,    -1,    -1,   511,    36,   337,    -1,    -1,
      -1,    -1,   170,   171,   172,   173,   174,   175,   348,    -1,
     350,   179,   352,    25,   354,    -1,    -1,    29,    -1,    -1,
      32,    82,    83,    84,    85,   365,    -1,   367,    -1,   369,
      -1,    -1,    82,    83,    84,    85,   376,    -1,    75,    76,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    94,    95,    96,    69,    -1,    -1,
      -1,   561,    -1,    -1,   101,   102,    -1,    -1,   568,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   600,   601,   602,   603,   604,    -1,
      -1,   131,    75,    76,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,   170,
     171,   172,   173,   174,   175,    -1,    -1,   157,   101,   102,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
     180,    -1,   172,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,   179,   180,    -1,    -1,   486,   487,   488,   489,
     490,   491,   668,   669,    82,    83,    84,    85,    -1,    -1,
      -1,   173,    -1,   175,   204,   177,    -1,   179,   208,    -1,
      -1,   511,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,   522,    -1,    -1,    -1,   198,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,   179,   180,    -1,    75,
      76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
     250,    -1,    -1,    -1,   254,   255,   256,   733,    -1,   735,
      -1,    -1,   722,   723,   724,   101,   102,   267,    -1,   269,
     270,   271,   272,   273,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,   291,   180,   593,    -1,    82,    83,    84,    85,    -1,
     600,   601,   602,   603,   604,    -1,   170,   171,   172,   173,
     174,   175,    -1,    -1,   614,   179,    -1,    -1,   618,    -1,
      -1,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,    -1,    -1,    -1,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   356,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   337,    -1,    -1,   668,   669,
      -1,    -1,    -1,   373,   374,    -1,   348,    -1,   350,    -1,
     352,    -1,   354,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,   179,    -1,    -1,   367,    -1,   369,    -1,    -1,
     700,    -1,    -1,    -1,   376,   405,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,   733,    -1,   735,    22,    23,    24,    25,
      26,    27,    -1,    29,    30,    -1,    32,    -1,    -1,    -1,
      -1,    37,    -1,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    70,    71,    -1,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,
     174,   175,    -1,    89,    90,   179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   486,    -1,    -1,    -1,    -1,    -1,
      -1,   521,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,    -1,    -1,   132,    -1,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   561,    -1,    -1,    -1,    -1,    -1,    -1,   568,    -1,
      -1,    -1,    -1,   159,   160,    -1,    -1,   163,   164,   165,
     166,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,   178,    10,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,    -1,    32,    -1,   617,    -1,    -1,
      37,   593,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    82,    83,    84,    85,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,   132,    -1,   134,   135,   136,
      -1,    -1,   722,   723,   724,    -1,    -1,    -1,   700,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,   179,    -1,
      -1,    -1,   159,   160,    -1,    -1,   163,   164,   165,   166,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      -1,   178,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    37,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,    -1,    -1,
     132,    -1,   134,   135,   136,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,
      -1,   163,   164,   165,   166,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    -1,   178,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      37,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,   132,    -1,   134,   135,   136,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,   160,    -1,    -1,   163,   164,   165,   166,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      -1,   178,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    37,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,    -1,    -1,
     132,    -1,   134,   135,   136,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,
      -1,   163,   164,   165,   166,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    -1,   178,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      37,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,   132,    -1,   134,   135,   136,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,   160,    -1,    -1,   163,   164,   165,   166,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      -1,   178,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    37,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,    -1,    -1,
     132,    -1,   134,   135,   136,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,
      -1,   163,   164,   165,   166,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    -1,   178,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      37,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,   132,    -1,   134,   135,   136,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,   160,    -1,    -1,   163,   164,   165,   166,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      -1,   178,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    37,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      -1,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,    -1,    -1,
     132,    -1,   134,   135,   136,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,    -1,
      -1,   163,   164,   165,   166,    -1,    -1,    -1,   170,   171,
     172,   173,   174,   175,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    -1,    32,    -1,    -1,    -1,    -1,    37,    -1,
      39,    40,    41,    42,    -1,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    70,    71,    -1,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,   132,    -1,   134,   135,   136,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,   160,    -1,    -1,   163,   164,   165,   166,    -1,    -1,
      -1,   170,   171,   172,   173,   174,   175,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    -1,    29,    30,    -1,    32,    -1,    -1,    -1,
      -1,    37,    -1,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    70,    71,    -1,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,    -1,    -1,   132,    -1,   134,   135,
     136,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,   160,    -1,    -1,   163,   164,   165,
     166,    -1,    -1,    -1,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    -1,    72,    73,    74,    -1,    -1,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,    -1,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,    -1,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,    -1,
      -1,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   173,    -1,    -1,   176,    -1,   178,    -1,
      -1,    -1,   182,   183,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    -1,    72,    73,    74,    -1,    -1,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    -1,    -1,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,    -1,    -1,   120,    -1,    -1,    -1,    11,    12,    -1,
      -1,    15,    16,    -1,    18,    -1,    20,    21,    -1,    -1,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,    -1,    -1,   161,   162,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,   173,    61,    -1,   176,
      -1,   178,    -1,    67,    68,    69,    70,    -1,    72,    73,
      -1,    -1,    -1,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    93,
      -1,    -1,    -1,    97,    -1,    -1,   100,    -1,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,
      -1,    -1,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,    11,    12,   161,   162,    15,
      16,    -1,    18,    -1,    20,    21,    -1,    -1,    -1,   173,
      -1,    -1,   176,    -1,   178,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    -1,    72,    73,    -1,    -1,
      -1,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    93,    -1,    -1,
      -1,    97,    -1,    -1,   100,    -1,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,    -1,    -1,   120,    -1,    -1,    -1,    11,    12,
      -1,    -1,    15,    16,   130,    18,    -1,    20,    21,    -1,
      -1,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,    -1,    -1,   161,   162,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,   173,    61,    -1,
     176,    -1,   178,    -1,    67,    68,    69,    70,    -1,    72,
      73,    -1,    -1,    -1,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      93,    -1,    -1,    -1,    97,    -1,    -1,   100,    -1,    -1,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,    -1,    -1,   120,    -1,    -1,
      -1,    11,    12,    -1,    -1,    15,    16,   130,    18,    -1,
      20,    21,    -1,    -1,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,    -1,    -1,   161,   162,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
     173,    61,    -1,   176,    -1,   178,    -1,    67,    68,    69,
      70,    -1,    72,    73,    -1,    -1,    -1,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    93,    -1,    -1,    -1,    97,    -1,    -1,
     100,    -1,    -1,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,    -1,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,    -1,
      -1,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   173,    -1,    -1,   176,    -1,   178,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    -1,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    37,    -1,    39,    40,    41,    42,    -1,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    70,    71,    -1,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    -1,    -1,   132,    -1,
     134,   135,   136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,    -1,    -1,   163,
     164,   165,   166,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    -1,    29,
      30,    -1,    32,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    42,    -1,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      70,    71,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
      -1,    -1,   132,    -1,   134,   135,   136,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
     160,    -1,    -1,   163,   164,   165,   166,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      37,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      -1,    -1,    89,    90,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,   102,    -1,    -1,    -1,    -1,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,   132,    -1,   134,   135,   136,
      -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,   159,   160,    -1,    -1,   163,   164,   165,   166,
     101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   170,   171,   172,   173,   174,   175,    75,
      76,    -1,   179,   180,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    -1,   101,   102,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   170,
     171,   172,   173,   174,   175,    75,    76,    -1,   179,   180,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,   101,   102,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,   170,   171,   172,   173,   174,   175,
      -1,    75,    76,   179,   180,   101,   102,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,   179,   180,   101,   102,    -1,
      75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
     170,   171,   172,   173,   174,   175,   101,   102,    -1,    -1,
     180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,   175,
      -1,    75,    76,    -1,   180,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,   180,   101,   102,    -1,
      75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,   170,   171,   172,   173,   174,
     175,    -1,    75,    76,    -1,   180,   101,   102,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,   101,   102,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,
     174,   175,   101,   102,    -1,    -1,   180,    75,    76,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,
     175,    -1,    -1,   101,   102,   180,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,
     173,   174,   175,    75,    76,    -1,    -1,   180,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,   170,   171,   172,   173,   174,   175,    -1,    -1,   101,
     102,   180,    75,    76,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,   170,   171,   172,   173,   174,   175,   101,   102,
      75,    76,   180,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,   101,   102,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,   180,   101,
     102,    -1,    75,    76,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,   170,   171,   172,
     173,   174,   175,    -1,    -1,    75,    76,   180,   101,   102,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,
     175,   101,   102,    75,    76,   180,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,   180,   101,
     102,    -1,    75,    76,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,   170,   171,   172,
     173,   174,   175,    -1,    -1,    75,    76,   180,   101,   102,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
     170,   171,   172,   173,   174,   175,    -1,    -1,    75,    76,
     180,   101,   102,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,   170,   171,
     172,   173,   174,   175,   101,   102,    -1,    -1,   180,    75,
      76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,   170,   171,   172,
     173,   174,   175,    -1,    -1,   101,   102,   180,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,   171,   172,   173,   174,   175,    -1,    -1,    75,    76,
     180,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,   180,   101,   102,    75,    76,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,   175,
      75,    76,   101,   102,   180,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,   101,   102,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,   170,   171,   172,   173,   174,   175,   101,
     102,    75,    76,   180,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,   170,   171,   172,   173,   174,   175,   101,   102,    -1,
      -1,   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,
     175,    -1,    -1,    75,    76,   180,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,   170,   171,
     172,   173,   174,   175,    -1,    -1,    75,    76,   180,   101,
     102,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,
     174,   175,   101,   102,    75,    76,   180,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
     101,   102,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,   170,   171,
     172,   173,   174,   175,   101,   102,    75,    76,   180,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,   170,   171,   172,   173,   174,   175,    -1,    -1,    75,
      76,   180,   101,   102,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,   170,
     171,   172,   173,   174,   175,   101,   102,    -1,    -1,   180,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   170,   171,   172,   173,   174,   175,    -1,
      -1,    75,    76,   180,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,   170,   171,   172,   173,   174,   175,   101,   102,    75,
      76,   180,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,   170,   171,   172,   173,   174,   175,
      -1,    75,    76,    -1,   180,   101,   102,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,    -1,
      -1,    75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,   170,   171,   172,   173,
     174,   175,    -1,    -1,    75,    76,   180,   101,   102,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,   175,
     101,   102,    75,    76,   180,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,   180,    -1,   101,   102,
      -1,    75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,   170,   171,   172,   173,
     174,   175,    -1,    -1,    75,    76,   180,   101,   102,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,   170,
     171,   172,   173,   174,   175,    -1,    -1,    75,    76,   180,
     101,   102,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,
     173,   174,   175,   101,   102,    -1,    -1,   180,    75,    76,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,   170,   171,   172,   173,
     174,   175,    -1,    -1,   101,   102,   180,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,
     171,   172,   173,   174,   175,    -1,    -1,    75,    76,   180,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,   180,   101,   102,    75,    76,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,   170,   171,   172,   173,   174,   175,    75,
      76,   101,   102,   180,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,   101,   102,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,   170,   171,   172,   173,   174,   175,   101,   102,
      75,    76,   180,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
     170,   171,   172,   173,   174,   175,   101,   102,    -1,    -1,
     180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,   175,
      -1,    -1,    75,    76,   180,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,   170,   171,   172,
     173,   174,   175,    -1,    -1,    75,    76,   180,   101,   102,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,
     175,   101,   102,    75,    76,   180,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,   101,
     102,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,
     173,   174,   175,   101,   102,    75,    76,   180,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
     170,   171,   172,   173,   174,   175,    -1,    -1,    75,    76,
     180,   101,   102,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,   170,   171,
     172,   173,   174,   175,   101,   102,    -1,    -1,   180,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   170,   171,   172,   173,   174,   175,    -1,    -1,
      75,    76,   180,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
     170,   171,   172,   173,   174,   175,   101,   102,    75,    76,
     180,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,   170,   171,   172,   173,   174,   175,    -1,
      75,    76,    -1,   180,   101,   102,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,    -1,    -1,
      75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,   170,   171,   172,   173,   174,
     175,    -1,    -1,    75,    76,   180,   101,   102,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,   170,   171,   172,   173,   174,   175,   101,
     102,    75,    76,   180,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,   180,    -1,   101,   102,    -1,
      75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,   170,   171,   172,   173,   174,
     175,    -1,    -1,    75,    76,   180,   101,   102,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,   170,   171,
     172,   173,   174,   175,    -1,    -1,    75,    76,   180,   101,
     102,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,
     174,   175,   101,   102,    -1,    -1,   180,    75,    76,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,
     175,    -1,    -1,   101,   102,   180,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,   171,
     172,   173,   174,   175,    -1,    -1,    75,    76,   180,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,   180,   101,   102,    75,    76,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,   170,   171,   172,   173,   174,   175,    75,    76,
     101,   102,   180,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,   101,   102,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,   170,   171,   172,   173,   174,   175,   101,   102,    75,
      76,   180,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,   170,
     171,   172,   173,   174,   175,   101,   102,    -1,    -1,   180,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   170,   171,   172,   173,   174,   175,    -1,
      -1,    75,    76,   180,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,   170,   171,   172,   173,
     174,   175,    -1,    -1,    75,    76,   180,   101,   102,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,   175,
     101,   102,    75,    76,   180,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,   101,   102,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,
     174,   175,   101,   102,    75,    76,   180,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,   170,
     171,   172,   173,   174,   175,    -1,    -1,    75,    76,   180,
     101,   102,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,
     173,   174,   175,   101,   102,    -1,    -1,   180,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,   171,   172,   173,   174,   175,    -1,    -1,    75,
      76,   180,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,   170,
     171,   172,   173,   174,   175,   101,   102,    75,    76,   180,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,   170,   171,   172,   173,   174,   175,    -1,    75,
      76,    -1,   180,   101,   102,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,   170,   171,   172,   173,   174,   175,
      -1,    -1,    75,    76,   180,   101,   102,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,   170,   171,   172,   173,   174,   175,   101,   102,
      75,    76,   180,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,   180,    -1,   101,   102,    -1,    75,
      76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,   170,   171,   172,   173,   174,   175,
      -1,    -1,    75,    76,   180,   101,   102,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,   170,   171,   172,
     173,   174,   175,    -1,    -1,    75,    76,   180,   101,   102,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,
     175,   101,   102,    -1,    -1,   180,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,   170,   171,   172,   173,   174,   175,
      -1,    75,    76,   179,   101,   102,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,   170,   171,   172,
     173,   174,   175,    -1,    75,    76,   179,   101,   102,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,   179,
     101,   102,    -1,    75,    76,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,   170,   171,   172,   173,   174,   175,   101,
     102,    -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,
     174,   175,    -1,    75,    76,   179,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,   179,   101,
     102,    -1,    75,    76,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,   170,   171,
     172,   173,   174,   175,    75,    76,    -1,   179,   101,   102,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
     101,   102,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,   170,   171,
     172,   173,   174,   175,   101,   102,    -1,   179,    75,    76,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,
     173,   174,   175,    -1,   101,   102,   179,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,   179,    75,
      76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,   179,    75,    76,   101,   102,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,   170,   171,   172,   173,   174,   175,   101,
     102,    -1,   179,    75,    76,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,   101,
     102,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,   175,
      -1,   101,   102,   179,    75,    76,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,   179,    75,    76,
     101,   102,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,   170,   171,
     172,   173,   174,   175,   101,   102,    -1,   179,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,   179,
      75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,   170,
     171,   172,   173,   174,   175,    -1,   101,   102,   179,    75,
      76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,   179,    75,    76,   101,   102,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,   101,
     102,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,
     175,   101,   102,    -1,   179,    75,    76,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,   175,
      -1,   101,   102,   179,    75,    76,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,   179,    -1,    -1,
     101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,   179,
      75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
     170,   171,   172,   173,   174,   175,   101,   102,    -1,   179,
      75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,   170,
     171,   172,   173,   174,   175,    -1,   101,   102,   179,    75,
      76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    -1,   101,   102,    81,    82,    83,
      84,    85,    86,    87,    88,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,   179,    75,    76,   101,   102,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,
     175,   101,   102,    -1,   179,    75,    76,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,   175,
      -1,   101,   102,   179,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,   179,    75,    76,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,   179,
      75,    76,   101,   102,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
     170,   171,   172,   173,   174,   175,   101,   102,    -1,   179,
      75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,   101,   102,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,   170,   171,   172,   173,   174,   175,    -1,   101,   102,
     179,    75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,   179,    75,    76,   101,   102,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,   174,
     175,   101,   102,    -1,   179,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,   179,    75,    76,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,
     174,   175,    -1,   101,   102,   179,    75,    76,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,   179,
      75,    76,   101,   102,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,   101,   102,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,   170,   171,   172,   173,   174,   175,   101,   102,
      -1,   179,    75,    76,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,   170,   171,   172,   173,   174,   175,    -1,   101,   102,
     179,    75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,   179,    -1,    -1,   101,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,   179,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,   179,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,
     174,   175
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    10,    14,    15,
      16,    17,    18,    22,    23,    24,    25,    26,    27,    29,
      30,    32,    37,    39,    40,    41,    42,    44,    45,    46,
      47,    48,    49,    54,    63,    64,    65,    66,    70,    71,
      73,    74,    89,    90,   118,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   132,   134,   135,   136,   159,
     160,   163,   164,   165,   166,   185,   186,   187,   188,   189,
     190,   193,   199,   202,   203,   204,   205,   206,   207,   208,
     218,    16,    18,   199,    11,    12,    13,    18,    19,    20,
      21,    55,    61,    62,    67,    68,    69,    70,    72,    73,
      74,    77,    78,    79,    80,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     120,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   161,   162,   173,   176,   178,   190,   191,
     192,   193,   194,   195,   196,   178,   192,   198,   178,   178,
     178,   178,   178,   178,   187,   178,   187,   178,   187,   178,
     187,    19,    20,    21,    22,   196,   197,    15,    16,    17,
      18,   215,   216,   217,    15,    16,   203,   196,    13,   199,
     211,   212,    30,   203,   178,   195,    56,   182,   183,   196,
     213,   214,   199,   200,   196,   199,   196,   192,   192,   192,
     178,   178,    11,    11,   192,   192,   192,   192,   192,   130,
     192,   130,   131,   192,   192,   130,   192,   192,   192,   192,
      18,    18,   192,   192,   192,     0,   187,     3,    82,   199,
      82,   180,   178,   190,   178,   178,   178,   178,   195,   195,
     195,   192,   192,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   182,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   195,   192,    18,   192,    11,    12,   190,
     192,   192,   195,    75,    76,    81,    82,    83,    84,    85,
      86,    87,    88,   101,   102,   170,   171,   172,   173,   174,
     175,    82,    83,    84,    85,   170,   171,   172,   173,   174,
     175,   180,   192,   192,   192,   192,   197,     7,   199,   200,
     201,    35,   200,    34,   200,    34,   200,    34,   178,   187,
     178,   187,   178,   187,   178,   187,   180,   178,   178,   178,
     178,   180,   180,    82,    82,    59,   187,   180,   212,   180,
     217,   178,   213,   180,   181,    28,   180,   187,    52,   180,
     192,   192,   180,   180,   180,   180,   180,   192,   180,   192,
     192,   180,   180,   192,   180,   180,   180,   180,   178,   178,
     180,   180,   180,   187,    16,    82,   196,   203,   192,   197,
     197,   197,   192,   192,   192,   192,   192,   195,   192,   195,
     195,   195,   195,   195,   192,   178,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   195,   192,   180,   180,   180,   179,   179,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   198,   179,   180,   179,
     180,   179,   180,   179,   179,   199,   180,   179,   179,   179,
     179,   179,   200,    34,   200,    34,   200,    34,   200,   201,
      35,   197,   192,   192,   192,   192,   217,   217,   192,   192,
     188,    31,    33,   212,   212,   192,   213,   214,   214,   200,
      36,    50,    53,   209,   210,   192,   179,   179,   192,   192,
     192,   192,   192,   180,   192,   180,   180,   192,   192,   180,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   196,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   180,   180,   180,   180,   179,   179,   192,   180,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   180,   192,    18,   192,   192,   192,
     192,    15,    16,   180,   201,   187,   187,   187,   187,   187,
     179,   179,   179,   179,   179,   179,   180,   179,   180,   179,
     180,   180,    60,    60,    31,   187,   179,   181,   197,   188,
     210,    51,   180,   180,   180,   180,   192,   180,   192,   192,
     180,   180,   192,   180,   180,   180,   180,   179,   179,   180,
     180,   195,   192,   192,   192,   179,   195,   192,   180,   179,
     179,   179,   199,   201,    35,    35,    34,    34,    34,   187,
     187,   187,   187,   187,   192,   192,   192,    16,   192,   192,
     188,    33,   188,   192,   192,   192,   192,   180,   192,   180,
     180,   192,   192,   180,   192,   192,   192,   192,   180,   180,
     192,   192,   179,   180,   179,   180,   179,   179,   180,   192,
     180,    34,    34,    34,    35,    35,   179,   179,   179,   179,
      57,   187,    57,   187,   180,   192,   180,   192,   192,   180,
     180,   192,   180,   180,   180,   192,   192,   180,   180,   192,
     192,   192,   180,   192,    43,   192,    43,   192,   180,   192,
     180,   180,   192,   192,   195,   195,   195,   180,   180,   192,
     192,   179,   179,   179,   192,   187,   187,   192,   192,   192,
     180,   192,   192,   180,    43,    43,   180,   180,   192,   180,
     180,   192,   192,   192,   180,   192,   192,   180,   180,   180,
     192,   180,   180,   192,   192,   192,   192,   192,   180,   180,
     192,   192,   180,   180,   192,   192,   180,   180,   131,   167,
     168,   169,   192
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


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 84 "parser.y"
    { final = (yyvsp[(1) - (1)].ast); }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 86 "parser.y"
    { yylineno = (yyvsp[(1) - (1)].v_int); (yyval.ast) = new_line_number_ast((yyvsp[(1) - (1)].v_int)); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 88 "parser.y"
    { (yyval.ast) = NULL; }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 89 "parser.y"
    { (yyval.ast) = new_ast((yyvsp[(1) - (2)].ast), NULL); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 90 "parser.y"
    { (yyval.ast) = new_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 91 "parser.y"
    { (yyval.ast) = new_ast((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 96 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Gosub, new_int_ast((yyvsp[(2) - (2)].v_int)), NULL); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 97 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Goto, new_int_ast((yyvsp[(2) - (2)].v_int)), NULL); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 98 "parser.y"
    { (yyval.ast) = new_token_ast(Token::FunctionCall, new_variable_ast((yyvsp[(1) - (1)].v_string), Type::None), NULL); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 99 "parser.y"
    { (yyval.ast) = new_token_ast(Token::FunctionCall, new_variable_ast((yyvsp[(1) - (4)].v_string), Type::None), (yyvsp[(3) - (4)].ast)); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 100 "parser.y"
    { (yyval.ast) = new_token_ast(Token::ReturnValue, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 101 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Return, NULL, NULL); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 107 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Data, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 108 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Dim, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 109 "parser.y"
    { (yyval.ast) = new_token_ast(Token::LocalDim, (yyvsp[(3) - (3)].ast), NULL); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 110 "parser.y"
    { (yyval.ast) = new_token_ast(Token::End, NULL, NULL); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 112 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Case, (yyvsp[(2) - (5)].ast), (yyvsp[(4) - (5)].ast));  }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 113 "parser.y"
    { (yyval.ast) =     new_token_ast(Token::If, (yyvsp[(2) - (6)].ast), new_ast((yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast))); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 114 "parser.y"
    { (yyval.ast) = new_token_ast(Token::If, (yyvsp[(2) - (4)].ast), new_ast((yyvsp[(3) - (4)].ast), NULL)); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 115 "parser.y"
    { (yyval.ast) = new_token_ast(Token::If, (yyvsp[(2) - (6)].ast), new_ast((yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast))); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 116 "parser.y"
    { (yyval.ast) = new_token_ast(Token::If, (yyvsp[(2) - (4)].ast), new_ast((yyvsp[(4) - (4)].ast), NULL)); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 119 "parser.y"
    { (yyval.ast) = new_token_ast(Token::For, new_assignment_ast(new_variable_ast((yyvsp[(2) - (8)].v_string), Type::Integer), (yyvsp[(4) - (8)].ast)), new_ast((yyvsp[(6) - (8)].ast), (yyvsp[(7) - (8)].ast))); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 121 "parser.y"
    { (yyval.ast) = new_token_ast(Token::For, new_assignment_ast(new_variable_ast((yyvsp[(2) - (8)].v_string), Type::Float), (yyvsp[(4) - (8)].ast)), new_ast((yyvsp[(6) - (8)].ast), (yyvsp[(7) - (8)].ast))); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 123 "parser.y"
    { (yyval.ast) = new_token_ast(Token::ForStep, new_assignment_ast(new_variable_ast((yyvsp[(2) - (10)].v_string), Type::Integer), (yyvsp[(4) - (10)].ast)), 
                                new_ast((yyvsp[(6) - (10)].ast), new_ast((yyvsp[(8) - (10)].ast), (yyvsp[(9) - (10)].ast)))); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 126 "parser.y"
    { (yyval.ast) = new_token_ast(Token::ForStep, new_assignment_ast(new_variable_ast((yyvsp[(2) - (10)].v_string), Type::Float), (yyvsp[(4) - (10)].ast)), 
                                new_ast((yyvsp[(6) - (10)].ast), new_ast((yyvsp[(8) - (10)].ast), (yyvsp[(9) - (10)].ast)))); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 129 "parser.y"
    { (yyval.ast) = new_token_ast(Token::SInkey, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 130 "parser.y"
    { (yyval.ast) = new_token_ast(Token::SInkeys, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 131 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Oscli, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 132 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Input, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 133 "parser.y"
    { (yyval.ast) = new_token_ast(Token::InputNoQuestionMark, new_string_ast((yyvsp[(2) - (3)].v_string)), (yyvsp[(3) - (3)].ast)); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 134 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Input, new_string_ast((yyvsp[(2) - (4)].v_string)), (yyvsp[(4) - (4)].ast)); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 135 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Print, NULL, NULL); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 136 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Print, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 137 "parser.y"
    { (yyval.ast) = new_token_ast(Token::PrintN, (yyvsp[(2) - (3)].ast), NULL); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 138 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Print, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 139 "parser.y"
    { (yyval.ast) = new_token_ast(Token::PrintN, (yyvsp[(2) - (3)].ast), NULL); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 140 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Text, new_ast((yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast)), new_ast((yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast))); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 141 "parser.y"
    { (yyval.ast) = new_token_ast(Token::TextRight, new_ast((yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast)), new_ast((yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast))); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 142 "parser.y"
    { (yyval.ast) = new_token_ast(Token::TextCentre, new_ast((yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast)), new_ast((yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast))); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 143 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Read, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 144 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Repeat, NULL, NULL); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 145 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Until, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 146 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Restore, NULL, NULL); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 147 "parser.y"
    { (yyval.ast) = new_star_command_ast(new_string_ast((yyvsp[(1) - (2)].v_string)), (yyvsp[(2) - (2)].ast)); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 148 "parser.y"
    { (yyval.ast) = new_token_ast(Token::While, (yyvsp[(2) - (4)].ast), (yyvsp[(3) - (4)].ast)); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 149 "parser.y"
    { (yyval.ast) = new_token_ast(Token::TraceOn, NULL, NULL); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 150 "parser.y"
    { (yyval.ast) = new_token_ast(Token::TraceOff, NULL, NULL); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 153 "parser.y"
    { (yyval.ast) = new_token_ast(Token::BPut, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 154 "parser.y"
    { (yyval.ast) = new_token_ast(Token::BGet, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 155 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Close, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 158 "parser.y"
    { (yyval.ast) = new_token_ast(Token::RenderFrame, NULL, NULL); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 161 "parser.y"
    { (yyval.ast) = new_token_ast(Token::CreateVertex, 
                                new_variable_with_index_ast((yyvsp[(2) - (13)].v_string), (yyvsp[(4) - (13)].ast), Type::TypeArray), 
                                new_ast(new_ast((yyvsp[(7) - (13)].ast), (yyvsp[(9) - (13)].ast)), new_ast((yyvsp[(11) - (13)].ast), (yyvsp[(13) - (13)].ast)))); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 166 "parser.y"
    { (yyval.ast) = new_token_ast(Token::CreateTriangle,
                                new_variable_with_index_ast((yyvsp[(2) - (13)].v_string), (yyvsp[(4) - (13)].ast), Type::TypeArray), 
                                new_ast(new_ast((yyvsp[(7) - (13)].ast), (yyvsp[(9) - (13)].ast)), new_ast((yyvsp[(11) - (13)].ast), (yyvsp[(13) - (13)].ast)))); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 170 "parser.y"
    { (yyval.ast) = new_token_ast(Token::ObjectTranslate, new_ast((yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast)), new_ast((yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast))); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 172 "parser.y"
    { (yyval.ast) = new_token_ast(Token::ObjectRotate, new_ast((yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast)), new_ast((yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast))); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 174 "parser.y"
    { (yyval.ast) = new_token_ast(Token::ObjectScale, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 177 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Cls, NULL, NULL); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 178 "parser.y"
    { (yyval.ast) = new_token_ast(Token::ColourRGB, new_ast((yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast)), (yyvsp[(6) - (6)].ast)); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 179 "parser.y"
    { (yyval.ast) = new_token_ast(Token::ColourHEX, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 180 "parser.y"
    { (yyval.ast) = new_token_ast(Token::ColourBgRGB, new_ast((yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast)), (yyvsp[(6) - (6)].ast)); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 181 "parser.y"
    { (yyval.ast) = new_token_ast(Token::ColourBgHEX, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 182 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Flip, NULL, NULL); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 183 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Graphics, (yyvsp[(2) - (6)].ast), new_ast((yyvsp[(4) - (6)].ast), (yyvsp[(6) - (6)].ast))); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 186 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Circle, new_ast((yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast)), (yyvsp[(6) - (6)].ast)); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 189 "parser.y"
    { (yyval.ast) = new_token_ast(Token::CircleFill, new_ast((yyvsp[(3) - (7)].ast), (yyvsp[(5) - (7)].ast)), (yyvsp[(7) - (7)].ast)); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 192 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Line, new_ast((yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast)), new_ast((yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast))); }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 195 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Rectangle, new_ast((yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast)), new_ast((yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast))); }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 198 "parser.y"
    { (yyval.ast) = new_token_ast(Token::RectangleFill, new_ast((yyvsp[(3) - (9)].ast), (yyvsp[(5) - (9)].ast)), new_ast((yyvsp[(7) - (9)].ast), (yyvsp[(9) - (9)].ast))); }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 203 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Triangle, new_ast(new_ast((yyvsp[(2) - (12)].ast), (yyvsp[(4) - (12)].ast)), new_ast((yyvsp[(6) - (12)].ast), (yyvsp[(8) - (12)].ast))), new_ast((yyvsp[(10) - (12)].ast), (yyvsp[(12) - (12)].ast))); }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 208 "parser.y"
    { (yyval.ast) = new_token_ast(Token::TriangleFill, new_ast(new_ast((yyvsp[(3) - (13)].ast), (yyvsp[(5) - (13)].ast)), new_ast((yyvsp[(7) - (13)].ast), (yyvsp[(9) - (13)].ast))), new_ast((yyvsp[(11) - (13)].ast), (yyvsp[(13) - (13)].ast))); }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 213 "parser.y"
    { (yyval.ast) = new_token_ast(Token::TriangleShaded, 
                                        new_ast(new_ast(new_ast((yyvsp[(3) - (19)].ast), (yyvsp[(5) - (19)].ast)), (yyvsp[(7) - (19)].ast)), new_ast(new_ast((yyvsp[(9) - (19)].ast), (yyvsp[(11) - (19)].ast)), (yyvsp[(13) - (19)].ast))),
                                        new_ast(new_ast((yyvsp[(15) - (19)].ast), (yyvsp[(17) - (19)].ast)), (yyvsp[(19) - (19)].ast))); }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 216 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Plot, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 219 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Clip, new_ast((yyvsp[(2) - (8)].ast), (yyvsp[(4) - (8)].ast)), new_ast((yyvsp[(6) - (8)].ast), (yyvsp[(8) - (8)].ast))); }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 220 "parser.y"
    { (yyval.ast) = new_token_ast(Token::ClipOff, NULL, NULL); }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 222 "parser.y"
    { (yyval.ast) = new_variable_ast((yyvsp[(1) - (1)].v_string), Type::Type); }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 223 "parser.y"
    { (yyval.ast) = new_variable_with_index_ast((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::TypeArray); }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 225 "parser.y"
    { (yyval.ast) = new_variable_ast((yyvsp[(1) - (1)].v_string), Type::Integer); }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 226 "parser.y"
    { (yyval.ast) = new_variable_with_index_ast((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::IntegerArray); }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 227 "parser.y"
    { (yyval.ast) = new_variable_with_index_ast((yyvsp[(1) - (6)].v_string), new_ast((yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)), Type::IntegerArray); }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 228 "parser.y"
    { (yyval.ast) = new_variable_ast((yyvsp[(1) - (1)].v_string), Type::Float); }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 229 "parser.y"
    { (yyval.ast) = new_variable_with_index_ast((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::FloatArray); }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 230 "parser.y"
    { (yyval.ast) = new_variable_with_index_ast((yyvsp[(1) - (6)].v_string), new_ast((yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)), Type::FloatArray); }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 231 "parser.y"
    { (yyval.ast) = new_type_variable_with_index_ast((yyvsp[(1) - (5)].v_string), (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].v_string), Type::TypeArray); }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 232 "parser.y"
    { (yyval.ast) = new_type_variable_with_index_ast((yyvsp[(1) - (5)].v_string), (yyvsp[(3) - (5)].ast), (yyvsp[(5) - (5)].v_string), Type::TypeArray); }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 234 "parser.y"
    { (yyval.ast) = new_int_ast((yyvsp[(1) - (1)].v_int)); }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 235 "parser.y"
    { (yyval.ast) = new_int_ast(-(yyvsp[(2) - (2)].v_int)); }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 236 "parser.y"
    { (yyval.ast) = new_float_ast((yyvsp[(1) - (1)].v_float)); }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 237 "parser.y"
    { (yyval.ast) = new_float_ast(-(yyvsp[(2) - (2)].v_float)); }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 240 "parser.y"
    { (yyval.ast) = new_expression_ast(new_float_ast(0.0), (yyvsp[(2) - (2)].ast), Operator::Subtract); }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 241 "parser.y"
    { (yyval.ast) = new_fieldvariable_ast((yyvsp[(1) - (2)].v_string), Type::Type, (yyvsp[(2) - (2)].ast)); }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 242 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Plus); }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 243 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Subtract); }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 244 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Multiply); }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 245 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Divide); }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 246 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::IntegerDivide); }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 247 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Div); }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 248 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Mod); }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 249 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::ShiftLeft); }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 250 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::ShiftRight); }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 252 "parser.y"
    { (yyval.ast) = new_token_ast(Token::FunctionCall, new_variable_ast((yyvsp[(1) - (1)].v_string), Type::None), NULL); }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 253 "parser.y"
    { (yyval.ast) = new_token_ast(Token::FunctionCall, new_variable_ast((yyvsp[(1) - (4)].v_string), Type::None), (yyvsp[(3) - (4)].ast)); }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 254 "parser.y"
    { (yyval.ast) = new_token_ast(Token::FunctionCall, new_variable_ast((yyvsp[(1) - (4)].v_string), Type::None), (yyvsp[(3) - (4)].ast)); }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 256 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Inkey, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 258 "parser.y"
    { (yyval.ast) = new_token_ast(Token::ColourExpression, new_ast((yyvsp[(3) - (8)].ast), (yyvsp[(5) - (8)].ast)), (yyvsp[(7) - (8)].ast)); }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 259 "parser.y"
    { (yyval.ast) = new_token_ast(Token::ScreenWidth, NULL, NULL); }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 260 "parser.y"
    { (yyval.ast) = new_token_ast(Token::ScreenHeight, NULL, NULL); }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 261 "parser.y"
    { (yyval.ast) = new_token_ast(Token::LoadTypeface, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 262 "parser.y"
    { (yyval.ast) = new_token_ast(Token::CreateFont, (yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast)); }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 263 "parser.y"
    { (yyval.ast) = new_int_ast(0); }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 264 "parser.y"
    { (yyval.ast) = new_int_ast(1); }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 265 "parser.y"
    { (yyval.ast) = new_int_ast(2); }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 266 "parser.y"
    { (yyval.ast) = new_int_ast(3); }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 267 "parser.y"
    { (yyval.ast) = new_int_ast(4); }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 268 "parser.y"
    { (yyval.ast) = new_int_ast(5); }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 269 "parser.y"
    { (yyval.ast) = new_int_ast(6); }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 270 "parser.y"
    { (yyval.ast) = new_int_ast(7); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 271 "parser.y"
    { (yyval.ast) = new_int_ast(8); }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 272 "parser.y"
    { (yyval.ast) = new_int_ast(9); }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 273 "parser.y"
    { (yyval.ast) = new_int_ast(10); }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 274 "parser.y"
    { (yyval.ast) = new_int_ast(11); }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 275 "parser.y"
    { (yyval.ast) = new_int_ast(12); }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 276 "parser.y"
    { (yyval.ast) = new_int_ast(13); }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 277 "parser.y"
    { (yyval.ast) = new_int_ast(14); }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 278 "parser.y"
    { (yyval.ast) = new_int_ast(15); }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 279 "parser.y"
    { (yyval.ast) = new_int_ast(16); }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 280 "parser.y"
    { (yyval.ast) = new_int_ast(17); }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 282 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Rnd, NULL, NULL); }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 283 "parser.y"
    { (yyval.ast) = new_token_ast(Token::RndRange, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 285 "parser.y"
    { (yyval.ast) = new_token_ast(Token::CreateShape, new_variable_ast((yyvsp[(2) - (4)].v_string), Type::Type), new_variable_ast((yyvsp[(4) - (4)].v_string), Type::Type)); }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 290 "parser.y"
    { (yyval.ast) = new_token_ast(Token::CreateObjectSolid, 
                            new_ast((yyvsp[(2) - (18)].ast), new_ast((yyvsp[(4) - (18)].ast), new_ast((yyvsp[(6) - (18)].ast), (yyvsp[(8) - (18)].ast)))),  
                            new_ast(new_ast((yyvsp[(10) - (18)].ast), new_ast((yyvsp[(12) - (18)].ast), (yyvsp[(14) - (18)].ast))), (yyvsp[(16) - (18)].ast))); }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 297 "parser.y"
    { (yyval.ast) = new_token_ast(Token::CreateObjectWireframe, 
                            new_ast((yyvsp[(2) - (18)].ast), new_ast((yyvsp[(4) - (18)].ast), new_ast((yyvsp[(6) - (18)].ast), (yyvsp[(8) - (18)].ast)))),  
                            new_ast(new_ast((yyvsp[(10) - (18)].ast), new_ast((yyvsp[(12) - (18)].ast), (yyvsp[(14) - (18)].ast))), (yyvsp[(16) - (18)].ast))); }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 304 "parser.y"
    { (yyval.ast) = new_token_ast(Token::CreateObjectShaded, 
                            new_ast((yyvsp[(2) - (18)].ast), new_ast((yyvsp[(4) - (18)].ast), new_ast((yyvsp[(6) - (18)].ast), (yyvsp[(8) - (18)].ast)))),  
                            new_ast(new_ast((yyvsp[(10) - (18)].ast), new_ast((yyvsp[(12) - (18)].ast), (yyvsp[(14) - (18)].ast))), (yyvsp[(16) - (18)].ast))); }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 311 "parser.y"
    { (yyval.ast) = new_token_ast(Token::CreateObjectEdgedWireframe, 
                            new_ast((yyvsp[(2) - (18)].ast), new_ast((yyvsp[(4) - (18)].ast), new_ast((yyvsp[(6) - (18)].ast), (yyvsp[(8) - (18)].ast)))),  
                            new_ast(new_ast((yyvsp[(10) - (18)].ast), new_ast((yyvsp[(12) - (18)].ast), (yyvsp[(14) - (18)].ast))), (yyvsp[(16) - (18)].ast))); }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 315 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Eof, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 316 "parser.y"
    { (yyval.ast) = new_token_ast(Token::BGet, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 317 "parser.y"
    { (yyval.ast) = new_token_ast(Token::OpenIn, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 318 "parser.y"
    { (yyval.ast) = new_token_ast(Token::OpenOut, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 319 "parser.y"
    { (yyval.ast) = new_token_ast(Token::OpenUp, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 321 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Pi, NULL, NULL); }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 322 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Not, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 323 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Sqr, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 324 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Ln, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 325 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Log, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 326 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Exp, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 327 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Atn, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 328 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Tan, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 329 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Cos, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 330 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Sin, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 331 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Abs, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 332 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Acs, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 333 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Asn, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 334 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Deg, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 335 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Rad, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 336 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Sgn, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 338 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Time, NULL, NULL); }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 339 "parser.y"
    { (yyval.ast) = new_token_ast(Token::False, NULL, NULL); }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 340 "parser.y"
    { (yyval.ast) = new_token_ast(Token::True, NULL, NULL); }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 342 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Asc, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 343 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Len, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 344 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Instr, (yyvsp[(3) - (6)].ast), new_ast((yyvsp[(5) - (6)].ast), new_int_ast(1))); }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 345 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Instr, (yyvsp[(3) - (8)].ast), new_ast((yyvsp[(5) - (8)].ast), (yyvsp[(7) - (8)].ast))); }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 346 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Val, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 348 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Equal); }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 349 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::NotEqual); }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 350 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::GreaterEqual); }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 351 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::LessEqual); }
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 352 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Less); }
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 353 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Greater); }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 355 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::And); }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 356 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Or); }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 357 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Eor); }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 359 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Float, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 360 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Int, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 361 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(2) - (3)].ast), NULL, Operator::None); }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 363 "parser.y"
    { (yyval.ast) = new_variable_ast((yyvsp[(1) - (1)].v_string), Type::String); }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 364 "parser.y"
    { (yyval.ast) = new_variable_with_index_ast((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::StringArray); }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 365 "parser.y"
    { (yyval.ast) = new_variable_with_index_ast((yyvsp[(1) - (6)].v_string), new_ast((yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)), Type::StringArray); }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 366 "parser.y"
    { (yyval.ast) = new_string_ast((yyvsp[(1) - (1)].v_string)); }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 369 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Plus); }
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 370 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Subtract); }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 371 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Multiply); }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 372 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Divide); }
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 374 "parser.y"
    { (yyval.ast) = new_token_ast(Token::FunctionCall, new_variable_ast((yyvsp[(1) - (1)].v_string), Type::None), NULL); }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 375 "parser.y"
    { (yyval.ast) = new_token_ast(Token::FunctionCall, new_variable_ast((yyvsp[(1) - (4)].v_string), Type::None), (yyvsp[(3) - (4)].ast)); }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 377 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Inkeys, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 379 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Times, NULL, NULL); }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 380 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Strs, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 381 "parser.y"
    { (yyval.ast) = new_token_ast(Token::StrsHex, (yyvsp[(4) - (5)].ast), NULL); }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 382 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Strings, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 383 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Chrs, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 384 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Lefts, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 385 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Mids, (yyvsp[(3) - (8)].ast), new_ast((yyvsp[(5) - (8)].ast), (yyvsp[(7) - (8)].ast))); }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 386 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Rights, (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)); }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 388 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Equal); }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 389 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::NotEqual); }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 390 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::GreaterEqual); }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 391 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::LessEqual); }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 392 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Less); }
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 393 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast), Operator::Greater); }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 395 "parser.y"
    { (yyval.ast) = new_expression_ast((yyvsp[(2) - (3)].ast), NULL, Operator::None); }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 399 "parser.y"
    { (yyval.ast) = NULL; }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 400 "parser.y"
    { (yyval.ast) = new_ast((yyvsp[(1) - (1)].ast), NULL); }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 401 "parser.y"
    { (yyval.ast) = new_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 402 "parser.y"
    { (yyval.ast) = new_ast((yyvsp[(1) - (1)].ast), NULL); }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 403 "parser.y"
    { (yyval.ast) = new_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 407 "parser.y"
    { (yyval.ast) = NULL; }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 409 "parser.y"
    { (yyval.ast) = new_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 410 "parser.y"
    { (yyval.ast) = NULL; }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 412 "parser.y"
    { (yyval.ast) = new_token_ast(Token::ReturnVariable, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 413 "parser.y"
    { (yyval.ast) = new_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 414 "parser.y"
    { (yyval.ast) = new_ast(new_token_ast(Token::ReturnVariable, (yyvsp[(2) - (4)].ast), NULL), (yyvsp[(4) - (4)].ast)); }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 416 "parser.y"
    { (yyval.ast) = new_assignment_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 417 "parser.y"
    { (yyval.ast) = new_assignment_ast((yyvsp[(1) - (3)].ast), new_type_ast((yyvsp[(3) - (3)].v_string))); }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 418 "parser.y"
    { (yyval.ast) = new_assignment_ast((yyvsp[(1) - (4)].ast), new_ast((yyvsp[(2) - (4)].ast), (yyvsp[(4) - (4)].ast))); }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 420 "parser.y"
    { (yyval.ast) = new_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 422 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Global, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 423 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Global, (yyvsp[(1) - (1)].ast), NULL); }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 424 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Local, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 426 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Type, new_variable_ast((yyvsp[(2) - (2)].v_string), Type::None), NULL); }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 427 "parser.y"
    { (yyval.ast) = new_token_ast(Token::EndType, NULL, NULL); }
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 428 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Field, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 430 "parser.y"
    { (yyval.ast) = new_token_ast(Token::When, (yyvsp[(2) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 431 "parser.y"
    { (yyval.ast) = new_token_ast(Token::Otherwise, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 433 "parser.y"
    { (yyval.ast) = new_ast((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast)); }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 437 "parser.y"
    { (yyval.ast) = new_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 440 "parser.y"
    { (yyval.ast) = new_token_ast(Token::PrintNewLine, (yyvsp[(2) - (2)].ast), NULL); }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 441 "parser.y"
    { (yyval.ast) = new_token_ast(Token::PrintHex, NULL, NULL); }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 442 "parser.y"
    { (yyval.ast) = new_token_ast(Token::PrintSpc, (yyvsp[(3) - (4)].ast), NULL); }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 444 "parser.y"
    { (yyval.ast) = new_ast(new_token_ast(Token::PrintComma, NULL, NULL), new_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 445 "parser.y"
    { (yyval.ast) = new_ast(new_token_ast(Token::PrintSemiColon, NULL, NULL), new_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast))); }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 447 "parser.y"
    { (yyval.ast) = new_variable_with_index_ast((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::IntegerArray); }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 448 "parser.y"
    { (yyval.ast) = new_variable_with_index_ast((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::FloatArray); }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 449 "parser.y"
    { (yyval.ast) = new_variable_with_index_ast((yyvsp[(1) - (4)].v_string), (yyvsp[(3) - (4)].ast), Type::StringArray); }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 450 "parser.y"
    { (yyval.ast) = new_type_variable_with_index_ast((yyvsp[(1) - (6)].v_string), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].v_string), Type::TypeArray); }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 452 "parser.y"
    { (yyval.ast) = new_variable_with_index_ast((yyvsp[(1) - (6)].v_string), new_ast((yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)), Type::IntegerArray); }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 453 "parser.y"
    { (yyval.ast) = new_variable_with_index_ast((yyvsp[(1) - (6)].v_string), new_ast((yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)), Type::FloatArray); }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 454 "parser.y"
    { (yyval.ast) = new_variable_with_index_ast((yyvsp[(1) - (6)].v_string), new_ast((yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast)), Type::StringArray); }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 458 "parser.y"
    { (yyval.ast) = new_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 459 "parser.y"
    { (yyval.ast) = new_ast((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)); }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 461 "parser.y"
    { (yyval.ast) = new_function_ast(Type::None, new_variable_ast((yyvsp[(2) - (7)].v_string), Type::None), new_ast((yyvsp[(4) - (7)].ast), (yyvsp[(6) - (7)].ast))); }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 462 "parser.y"
    { (yyval.ast) = new_function_ast(Type::None, new_variable_ast((yyvsp[(2) - (4)].v_string), Type::None), new_ast(NULL, (yyvsp[(3) - (4)].ast))); }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 463 "parser.y"
    { (yyval.ast) = new_function_ast(Type::None, new_variable_ast((yyvsp[(1) - (6)].v_string), Type::None), new_ast((yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast))); }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 464 "parser.y"
    { (yyval.ast) = new_function_ast(Type::None, new_variable_ast((yyvsp[(1) - (3)].v_string), Type::None), new_ast(NULL, (yyvsp[(2) - (3)].ast))); }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 466 "parser.y"
    { (yyval.ast) = new_function_ast(Type::None, new_variable_ast((yyvsp[(2) - (7)].v_string), Type::None), new_ast((yyvsp[(4) - (7)].ast), (yyvsp[(6) - (7)].ast))); }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 467 "parser.y"
    { (yyval.ast) = new_function_ast(Type::None, new_variable_ast((yyvsp[(2) - (4)].v_string), Type::None), new_ast(NULL, (yyvsp[(3) - (4)].ast))); }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 468 "parser.y"
    { (yyval.ast) = new_function_ast(Type::None, new_variable_ast((yyvsp[(1) - (6)].v_string), Type::None), new_ast((yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast))); }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 469 "parser.y"
    { (yyval.ast) = new_function_ast(Type::None, new_variable_ast((yyvsp[(1) - (3)].v_string), Type::None), new_ast(NULL, (yyvsp[(2) - (3)].ast))); }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 471 "parser.y"
    { (yyval.ast) = new_function_ast(Type::Integer, new_variable_ast((yyvsp[(2) - (7)].v_string), Type::Integer), new_ast((yyvsp[(4) - (7)].ast), (yyvsp[(6) - (7)].ast))); }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 472 "parser.y"
    { (yyval.ast) = new_function_ast(Type::Integer, new_variable_ast((yyvsp[(2) - (4)].v_string), Type::Integer), new_ast(NULL, (yyvsp[(3) - (4)].ast))); }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 473 "parser.y"
    { (yyval.ast) = new_function_ast(Type::Integer, new_variable_ast((yyvsp[(1) - (6)].v_string), Type::Integer), new_ast((yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast))); }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 474 "parser.y"
    { (yyval.ast) = new_function_ast(Type::Integer, new_variable_ast((yyvsp[(1) - (3)].v_string), Type::Integer), new_ast(NULL, (yyvsp[(2) - (3)].ast))); }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 476 "parser.y"
    { (yyval.ast) = new_function_ast(Type::Float, new_variable_ast((yyvsp[(2) - (7)].v_string), Type::Integer), new_ast((yyvsp[(4) - (7)].ast), (yyvsp[(6) - (7)].ast))); }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 477 "parser.y"
    { (yyval.ast) = new_function_ast(Type::Float, new_variable_ast((yyvsp[(2) - (4)].v_string), Type::Integer), new_ast(NULL, (yyvsp[(3) - (4)].ast))); }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 478 "parser.y"
    { (yyval.ast) = new_function_ast(Type::Float, new_variable_ast((yyvsp[(1) - (6)].v_string), Type::Integer), new_ast((yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast))); }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 479 "parser.y"
    { (yyval.ast) = new_function_ast(Type::Float, new_variable_ast((yyvsp[(1) - (3)].v_string), Type::Integer), new_ast(NULL, (yyvsp[(2) - (3)].ast))); }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 481 "parser.y"
    { (yyval.ast) = new_function_ast(Type::String, new_variable_ast((yyvsp[(2) - (7)].v_string), Type::Integer), new_ast((yyvsp[(4) - (7)].ast), (yyvsp[(6) - (7)].ast))); }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 482 "parser.y"
    { (yyval.ast) = new_function_ast(Type::String, new_variable_ast((yyvsp[(2) - (4)].v_string), Type::Integer), new_ast(NULL, (yyvsp[(3) - (4)].ast))); }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 483 "parser.y"
    { (yyval.ast) = new_function_ast(Type::String, new_variable_ast((yyvsp[(1) - (6)].v_string), Type::Integer), new_ast((yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast))); }
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 484 "parser.y"
    { (yyval.ast) = new_function_ast(Type::String, new_variable_ast((yyvsp[(1) - (3)].v_string), Type::Integer), new_ast(NULL, (yyvsp[(2) - (3)].ast))); }
    break;


/* Line 1792 of yacc.c  */
#line 5244 "parser.cpp"
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
		      yytoken, &yylval);
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
#line 486 "parser.y"


struct ast *parse(const char *filename) {
#if defined(_WIN32) || defined(WIN32)
    errno_t err = fopen_s(&yyin, filename, "r");
#else
    yyin = fopen(filename, "r");
#endif

    if (!yyin) {
        std::cout << "Error opening source file '" << filename << "'" << std::endl;
        exit(0);
    }
    file = filename;
    files_index.insert(std::pair<std::string, int>(file, yyfileno));
    yyparse();
    fclose(yyin);
    yylex_destroy();
    return final;
}

void yyerror(const char *e) {
    std::cout << "Parsing error: " << e << " at line " << yylineno << " of file '" << file << "'" << std::endl;
    exit(1);
}
