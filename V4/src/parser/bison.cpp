/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "Grammar/DARIC.y"

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

#line 90 "src/parser/bison.cpp"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 383 "src/parser/bison.cpp"

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  289
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10405

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  237
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  347
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1017

#define YYUNDEFTOK  2
#define YYMAXUTOK   488


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
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
  "fn_parameter_list", "when", "when_list", "define_function", YY_NULLPTR
};
#endif

# ifdef YYPRINT
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
     485,   486,   487,   488,    44,    40,    41
};
# endif

#define YYPACT_NINF (-359)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-37)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3697,  7075,  -192,  -186,  -156,    -1,  -144,  -141,  -119,  -111,
    -104,  -101,   -95,   -89,  -359,   158,  2627,  3468,  3468,  3468,
    3468,  2627,    48,   146,   147,  2627,     0,  2627,  2627,   265,
    -359,   377,   503,    38,   151,  -359,  -359,  -359,  -359,  1725,
    1725,   177,  -359,  3468,  3468,  -359,  3468,  3468,  3468,  2856,
    3060,  3468,  -359,  3264,  3468,  3468,  3468,  -359,   -65,   -63,
     342,  2395,  -359,  -359,   184,   204,   212,  3468,  3468,  3468,
    -359,  3468,   223,  -359,  3697,   209,   213,  -359,  -359,   518,
     211,   168,  -359,     6,  -359,  -359,  -359,   218,  3468,  3468,
    1914,  -359,  -359,  3468,   120,   265,   265,   265,  2627,  2627,
    2627,  2627,     9,    10,    18,  -359,  -359,  -359,    23,     1,
      24,    31,    58,   260,  3468,  3468,    66,    86,    90,  3468,
    3468,    91,   110,  -359,  -359,   123,   124,   153,   154,   167,
     170,   171,   175,   176,   181,   183,   187,   193,   196,   199,
     206,   210,  -359,  -359,  -359,   221,   222,   233,   234,   237,
     238,   245,    -8,   246,  -359,  -359,  3468,  -359,  -359,  -359,
    -359,  -359,  -359,  -359,  -359,   263,  -359,   266,  1725,  3468,
    -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,
    -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,
    -359,   269,   271,  -359,  -359,   243,  3468,  -359,  -359,  -359,
    3468,  -359, 10228,  -359,  -359,  -359,  -359,   606,  -359,     3,
   10228,  1789, 10228, 10258,   276,    11,    29,   214,   186,  -359,
    -359,  5651,  3697,  2627,   376,   169,  -359,  -359,  -359,   174,
    -359,   272,   279,   280,   284,   205,  -359,   268,  -359,   285,
     377,  -359,   400,   289,   606,   130,  -359,  -359,  -359,   274,
    -359,  7495,  7570,  7620,  7633,  7646,  3468,  7662,  3468,  3468,
    7787,  7800,  3468,  7813,  7858,  7950,  7963,  3468,  3468,    15,
    -359,   283,  -359,  -359,  -359,  -359,   290,  -359, 10228,   606,
    2395,  -359,   292,   293,   294,  7985,  8025,  8055, 10228,  -359,
    -359,  -359,  7075,  3468,  3468,  3468,  3468,  3468,  3468,  3468,
    3468,  1725,  2627,   422,   503,  -359,    35,   173,   475,   462,
    1222,   265,  -359,   296,   297,  -359,   298,   299,   304,   307,
     311,   312,   313,   314,   527,   536,   543,  3468,  3468,  2627,
    2627,  2627,  -359,  -359,  -359,  -359, 10228, 10228,  1725,  1725,
    1725, 10228, 10228,   308,  3468,  3468,  3468,  3468,  3468,  3468,
    3468,  3468,  3468,  3468,  3468,  3468,  3468,  3468,  3468,  3468,
    3468,  1725,  1725,  3468,  1725,  1725,  1725,  1725,  1725,   319,
    3468,  3468,   540,  3468,  3468,   606,  8090,  3468,  3468,   331,
    8117,  1328,  3468,  3468,  3468,  3468,  3468,  3468,  3468,  3468,
    3468,  3468,  3468,  3468,  3468,  3468,  3468,  3468,  3468,  3468,
    1725,  1725,  1725,  1725,  1725,  1725,  1725,  3468,  3468,  3468,
     547,  3468,   561,  3468,   562,   563,    56,    57,   483,  3697,
    5829,  -359,    22,  3697,   488,  -359,  3697,  2627,   265,  3468,
    3468,  3468,  3468,   377,  2162,  -359,   482,  3468,   177,   177,
    3468,  3468,  3468,  3468,  3468,  8130,  3468,  8182,  8222,  3468,
    3468,  8274,  3468,  3468,  3468,  3468,  1513,  1526,   265,  -359,
     265,  3468,  -359,   573,  3468,  3468,  3468,  3468,  3468,  -359,
   10228, 10228, 10228, 10228, 10228, 10228, 10228, 10228,   606,  -359,
    2627,  -359,  3468,  -359,  3468,  -359,   513,  3468,  -359,   391,
    -359,   120,   564,   265,   566,   568,   569,  -359,  -359,  -359,
    -359,  -359,  -359,  -359,  1570,   346,   353,   357,   111,   185,
     194,   359,   360,   361,  1662,  1754,  1813,  3703,  3858,  4080,
    4302,  4524,  4746,  4968,  5190,  5412,  5572,  5736,  5750,  5914,
    5928,   230,   264,  6092,   428,   621,   644,   711,   273,  3468,
    6106,  8287,  8314,  8349,  3468,  6270,  6284,   587,  3468,  -359,
   10228,   716,   716,   716,   716,   540,   540,   716,   716,    55,
      55,   135,   135,   135,   135,   745,  1882,  1882,   567,   567,
     567,   567,   567,   567,  -359,  6448, 10228,   769,   516,  2157,
     368,  2851,   371,   375,  3468,   604,  3468,   605,   608,    51,
    3697,   548,  7075,  -359,  2627,   542,  -359,  -359,   897,  1043,
    1151,  8379,  -359,   596,   265,   615,   529,  6462,  -359,  -359,
    8414,  8441,  8454,  8506, 10228,  3468,  8546,  3468,  3468,  8598,
    8611,  3468,  8638,  8673,  8703,  8738,  -359,  -359,  -359,  -359,
    6626,   401,  6640,  6804,  8765,  8778, 10228,  -359,  6818,  6982,
     408,  6996,  -359,  -359,  -359,  -359,  3697,  -359,  3697,  3697,
    3697,   391,  -359,  -359,  -359,  -359,  -359,  -359,   413,   414,
     418,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,
    -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,
    -359,  1725,  3468,  3468,  3468,  -359,  7159,  -359,  1725,  3468,
    3468, 10228,  -359,  -359,  -359,  8830,    67,  2627,   516,    16,
    3468,   420,  3468,   421,   423, 10126,   409, 10166,   425,   426,
     658,  -359,   160,  7075,  -359,  -359,  -359,  3468,  -359,  3468,
    -359,  3468,  -359,   670,   611,  -359,   482,  -359,   671,  3468,
    3468,  3468,  3468,  8870,  3468,  8922,  8935,  3468,  3468,  8962,
    3468,  3468,  3468,  3468,  -359,   674,   448,   450,  3468,  3468,
    -359,  -359,  1725,  -359,   636,   638,   640,   641,   457,   458,
     459,    88,  7173,  8997,  7235,  -359,   282,  9027,  7298,  3468,
    7075,  -359,  -359,  7075,  3919,  6007,  4141,  6185,  6363,  3468,
     463,  3468,   465,   467,  3697,   675,  -359,  -359,  7311,  7327,
    7340,   469,   460,  -359, 10228, 10228, 10228,  9062,  3468,  9089,
    3468,  3468,  9102,  9154,  3468, 10228,  9194,  9246,  9259,  -359,
    3468,  3468,  9286,  9321,   452,  -359,  -359,  -359,  -359,   100,
     100,   100,  3468,  -359,  -359,  3468,  -359,  -359,  3468,  -359,
    9351,   687,   688,  3697,  3468,   630,  3697,   631,  3697,  3468,
     632,  3697,   649,  3697,   650,  4363,  6541,  4585,  6719,  6897,
     646,  3697,  -359,  -359,  -359,  -359,  1725,  3468,  9386,  3468,
    9413,  9426,  3468,  3468, 10228,  1725,  1725,  1725,  9478,  9518,
    3468,  3468,  -359,    96,   480,   486,   493,  7403,  7465,  7478,
    3468,  -359,   659,   655,  4807,  -359,   662,  -359,   669,  5029,
    -359,   676,  -359,   677,  -359,  3697,  3468,   678,  3697,   679,
    3697,  3468,   680,  3697,   681,  3697,   682,  -359,   689,   597,
   10228,  3468, 10228,  3468,  3468,  9570, 10228,   606,   606,   606,
    3468,  3468, 10228, 10228,  -359,  -359,  -359,  -359,  -359,  -359,
    9583,  -359,  -359,  3697,   685,  -359,  -359,  3697,   704,  -359,
    -359,   707,  5251,  -359,   708,  -359,   712,  5473,  -359,   713,
    -359,   717,  -359,  -359,  -359, 10228,  9610,  9645,  3468,  9675,
    9710,  3468,   718,  -359,   721,  -359,  -359,  3697,   722,  -359,
    -359,  3697,   728,  -359,  -359,  3468,  3468,  9737,  3468,  3468,
    9750,  -359,  -359,   729,  -359,   731,  -359,  9802,  9842,  3468,
    9894,  9907,  3468,  -359,  -359,  3468,  3468, 10228,  3468,  3468,
    9934, 10228,  9969, 10228, 10228,  3468,  3468,  9999, 10034,  3468,
    3468, 10061, 10074,  3468,  3468, 10228, 10228
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
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
       0,     0,     0,     0,   120,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,   325,     0,     0,     0,     0,     0,
     239,   244,     0,   251,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   293,     0,     0,     0,     0,
       0,   343,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    56,     0,     0,
       0,     0,     0,   276,   106,   108,   109,     0,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,     0,    46,
       0,     0,     0,     0,     0,   344,   345,   347,   346,     0,
       0,     0,     0,   234,   296,     0,   298,   294,     0,   184,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   263,   265,   267,   268,     0,     0,     0,     0,
       0,     0,     0,     0,   113,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,   341,     0,     0,     0,    79,     0,    69,     0,     0,
      80,     0,    68,     0,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,     0,
     114,     0,   115,     0,     0,     0,   121,   123,   124,   125,
       0,     0,   100,   101,   160,   159,   161,   235,   297,   183,
       0,    94,    77,     0,     0,    66,    78,     0,     0,    65,
      67,     0,     0,    87,     0,    75,     0,     0,    88,     0,
      74,     0,    76,    58,    39,   116,     0,     0,     0,     0,
       0,     0,     0,    83,     0,    84,    85,     0,     0,    72,
      86,     0,     0,    71,    73,     0,     0,     0,     0,     0,
       0,    81,    82,     0,    91,     0,    92,     0,     0,     0,
       0,     0,     0,    89,    90,     0,     0,   117,     0,     0,
       0,   118,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   173,   119
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -359,  -359,   691,    21,   684,   172,  -209,  -358,   -17,   442,
     545,    93,  1399,    12,   382,  -359,  -328,  -359,  -220,  -359,
    -359,  -359,    87,  -359,   551,    61,   -83,  -359,   -19,  -359,
    -359,   532,  -359,  -229,  -359,   324,  -359,   -92,  -359,   118,
    -359
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     210,   211,   212,   213,   318,   319,    91,    92,    91,    92,
      91,    92,   422,   238,   241,   320,   321,   322,   323,   222,
     435,    74,     2,     3,   108,   109,   251,   252,   369,   253,
     254,   255,   257,   260,   261,   411,   263,   264,   265,   266,
     459,   229,   292,    88,   278,     2,     3,   239,     5,    89,
     285,   286,   287,   413,   288,   215,   216,   217,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   306,   307,   309,   642,   643,   310,   208,   382,    90,
     584,   586,   214,   387,   388,   223,   221,   772,   224,   393,
     394,    94,   592,   303,    95,    74,   773,   336,   337,   412,
     332,   333,   341,   342,   105,   106,   312,   315,   315,   315,
     608,   609,   400,   401,   402,   403,    96,   414,   404,   405,
     406,   710,   227,   711,    97,   237,   237,     2,     3,   108,
     109,    98,   240,   873,    99,   400,   401,   402,   403,   372,
     100,   404,   405,   406,   585,   587,   101,   218,   395,   396,
     219,   220,   376,   227,   400,   401,   402,   403,   382,   242,
     404,   405,   406,   387,   388,   102,   103,   104,   395,   396,
     267,   311,   268,    87,   227,     2,     3,   108,   109,   380,
     397,   398,   399,   381,   246,   247,   248,   227,   227,   227,
     227,   282,   302,   416,   417,   418,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   400,
     401,   402,   403,   602,   283,   404,   405,   406,   400,   401,
     402,   403,   284,   289,   404,   405,   406,   370,   291,   628,
     785,   629,   786,   292,    93,   301,   328,   305,   407,   445,
     304,   447,   448,   324,   325,   451,   505,   506,   507,   458,
     456,   457,   326,   379,   400,   401,   402,   403,   327,   329,
     404,   405,   406,   278,   332,   333,   330,     2,     3,   482,
     209,   483,     2,     3,   108,   109,   470,   471,   472,   473,
     474,   475,   476,   477,   425,   481,   395,   396,   400,   401,
     402,   403,   293,   331,   404,   405,   406,   400,   401,   402,
     403,   338,   415,   404,   405,   406,   400,   401,   402,   403,
     309,   504,   404,   405,   406,   511,   512,   513,   397,   398,
     399,   339,   822,   490,   823,   340,   343,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   596,   344,   533,   655,   269,     2,
       3,   108,   109,   540,   541,   410,   542,   543,   345,   346,
     545,   546,   227,   479,   438,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   714,   231,   232,   233,   234,   347,   348,
     575,   576,   577,   421,   579,   426,   581,   237,   642,   643,
     644,   647,   349,   427,   227,   350,   351,   484,   428,   485,
     352,   353,   598,   599,   600,   601,   354,   309,   355,   436,
     607,   656,   356,   610,   611,   612,   613,   614,   357,   616,
     657,   358,   619,   620,   359,   622,   623,   624,   625,   433,
     229,   360,    77,    77,   630,   361,   480,   632,   633,   634,
     635,   636,   400,   401,   402,   403,   362,   363,   404,   405,
     406,   874,   875,   876,   469,   638,   678,   639,   364,   365,
     641,    77,   366,   367,    77,    77,   400,   401,   402,   403,
     368,   371,   404,   405,   406,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   373,   486,
     679,   374,    77,   312,   377,   315,   378,   429,   439,   685,
       2,     3,   108,     5,   430,   431,    77,   460,   827,   432,
     434,   227,   686,    77,   437,   461,   463,   691,   464,   465,
     491,   695,   493,   492,   501,   494,    77,    77,    77,    77,
     495,   637,   293,   496,   502,    78,    78,   497,   498,   499,
     500,   227,   503,   227,   539,   334,   294,   295,   296,   297,
     298,   299,   300,   382,   832,   547,   578,   705,   580,   707,
     582,   588,   583,   594,    78,   395,   396,    78,    78,   604,
     631,   640,   652,   646,   227,   648,   227,   649,   650,   653,
     244,   245,   591,   654,   658,   659,   660,   694,   733,   406,
     735,   736,   697,   701,   739,    78,   703,   397,   398,   399,
     704,   706,   279,   708,   770,   716,   725,   709,   713,    78,
     724,   400,   401,   402,   403,   727,    78,   404,   405,   406,
     400,   401,   402,   403,   726,   745,   404,   405,   406,    78,
      78,    78,    78,   752,   780,   400,   401,   402,   403,   758,
     759,   404,   405,   406,   760,   715,   775,   777,   335,   778,
     782,   783,   681,    77,    77,   762,   763,   764,   400,   401,
     402,   403,   767,   768,   404,   405,   406,   784,   791,   792,
     644,   809,   810,   774,   811,   776,   815,   816,   872,   817,
     818,   819,   820,   821,   851,   856,   487,   227,   488,   846,
     788,   848,   789,   849,   790,   855,   881,   882,   885,   887,
     890,    77,   794,   795,   796,   797,   924,   799,   907,   375,
     802,   803,   925,   805,   806,   807,   808,   892,   894,   926,
     931,   812,   813,   932,    77,   400,   401,   402,   403,   382,
     935,   404,   405,   406,   387,   388,    77,   936,   391,   392,
     393,   394,   830,    77,   939,   940,   943,   945,   948,   950,
     952,   953,   845,   963,   847,   290,    78,    78,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   858,   965,   860,   861,   966,   969,   864,   -36,   -36,
     970,   973,   382,   868,   869,   974,   981,   387,   388,   982,
     984,   391,   392,   393,   394,   877,   986,   993,   878,   994,
     597,   879,   462,   793,    78,   645,   771,   884,     0,     0,
       0,     0,   889,     0,     0,     0,     0,     0,     0,   395,
     396,   279,     0,   954,     0,     0,     0,    78,     0,   -36,
     910,     0,   912,     0,     0,   915,   916,   -36,     0,    78,
       0,     0,   478,   922,   923,   682,    78,     0,   395,   396,
       0,    77,    77,   930,     0,    77,     0,     0,    77,     0,
      77,     0,     0,     0,     0,     0,     0,     0,   683,   942,
       0,     0,   395,   396,   947,   787,     0,     0,     0,   508,
     509,   510,     0,     0,   955,     0,   956,   957,     0,     0,
      77,     0,    77,   959,   960,     0,     0,     0,     0,     0,
       0,     0,   531,   532,     0,   534,   535,   536,   537,   538,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,    77,     0,    77,     0,     0,     0,     0,
       0,   977,   831,     0,   980,   684,   835,   837,   840,   842,
     844,   568,   569,   570,   571,   572,   573,   574,   987,   988,
       0,   990,   991,     0,    78,    78,     0,     0,    78,     0,
       0,    78,   997,    78,     0,  1000,     0,     0,  1001,  1002,
       0,  1003,  1004,     0,     0,     0,     0,     0,  1007,  1008,
       0,     0,  1011,  1012,     0,     0,  1015,  1016,     0,     0,
       0,     0,     0,    78,     0,    78,     0,     0,     0,     0,
     395,   396,     0,     0,     0,     0,     0,   897,   899,   902,
     904,   906,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,    77,     0,    78,     0,    78,     0,
       0,     0,   397,   398,   399,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   934,     0,     0,     0,
       0,   938,     0,     0,     0,     0,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
      77,    77,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   589,     0,     0,     0,   593,     0,     0,
     595,     0,     0,     0,   968,     0,     0,     0,     0,   972,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   717,     0,   718,     0,    78,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,    77,   395,   396,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,   397,   398,
     399,    78,     0,    78,    78,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,    77,    77,    77,    77,    77,
      77,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,   761,     0,     0,     0,     0,     0,     0,   766,
       0,     0,     0,     0,     0,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,    78,     0,
       0,     0,     0,     0,   395,   396,     0,     0,     0,     0,
       0,     0,     0,     0,   712,    77,     0,   719,    77,   720,
      77,     0,     0,    77,     0,    77,     0,    77,    77,    77,
      77,    77,     0,    77,     0,     0,   397,   398,   399,     0,
       0,     0,     0,   814,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,    78,    78,
      78,    78,    78,    78,     0,     0,    77,     0,     0,    78,
     754,    77,   755,   756,   757,   395,   396,    77,     0,     0,
      77,     0,    77,     0,     0,    77,     0,    77,     0,     0,
       0,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,     0,   397,   398,   399,
       0,     0,     0,     0,     0,    77,     0,     0,    78,    77,
       0,    78,     0,    78,    77,   721,    78,   722,    78,    77,
      78,    78,    78,    78,    78,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   909,     0,    77,
       0,     0,     0,    77,     0,   205,   917,   918,   919,     0,
     205,     0,     0,     0,   205,     0,   205,   205,   228,    78,
       0,     0,     0,     0,    78,     0,     0,     0,   205,   205,
      78,   395,   396,    78,     0,    78,     0,     0,    78,     0,
      78,     0,     0,     0,     0,     0,     0,     0,   489,   228,
     205,     0,     0,     0,     0,     0,     0,     0,   850,     0,
       0,     0,     0,   397,   398,   399,     0,     0,    78,     0,
     228,     0,    78,     0,     0,     0,     0,    78,     0,     0,
       0,     0,    78,   228,   228,   228,   228,   205,   205,   205,
     205,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,    78,   883,     0,     0,
     886,     0,   888,     0,     0,   891,     0,   893,     0,     0,
       0,     0,     0,     0,     0,   908,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,     0,   549,     0,     0,   205,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   941,
       0,     0,   944,     0,   946,     0,     0,   949,     0,   951,
       0,     0,     0,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   962,     0,     0,
       0,   964,   205,     0,     0,     0,   395,   396,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   395,
     396,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   983,     0,     0,     0,   985,     0,     0,   397,   398,
     399,     0,     0,     0,     0,     0,     0,     0,   228,     0,
       0,   397,   398,   399,     0,     0,     0,     0,     0,   205,
       0,     0,     0,   395,   396,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
     205,   205,     0,     0,     0,     0,     0,     0,     0,     0,
     228,     0,     0,     0,     0,   397,   398,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   205,   205,
     205,   107,     0,     0,   108,   243,     0,   205,   205,   205,
       0,     0,     0,   112,     0,     0,     0,     0,     0,   626,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     205,   205,   627,   205,   205,   205,   205,   205,     0,     0,
       0,     0,     0,     0,     0,   395,   396,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,     0,   120,     0,     0,     0,     0,     0,     0,   205,
     205,   205,   205,   205,   205,   205,   651,   397,   398,   399,
       0,     0,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,   205,   228,     0,     0,
       0,     0,     0,     0,     0,     0,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,     0,     0,     0,     0,     0,     0,   228,   146,   228,
     148,   149,   150,     0,   152,     0,   153,   395,   396,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   205,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     228,     0,   228,     0,     0,     0,     0,     0,   661,   397,
     398,   399,   395,   396,     0,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   105,   106,
       0,     2,     3,     0,   209,     0,   395,   396,     0,     0,
     110,   111,     0,   192,   397,   398,   399,     0,     0,     0,
       0,   194,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   397,   398,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,     0,     0,   115,   116,   117,   118,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     662,     0,     0,   205,     0,   395,   396,     0,     0,     0,
       0,     0,     0,   228,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,   124,     0,   408,   125,   126,   127,   397,     0,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,     0,   147,   663,
       0,     0,   151,     0,     0,     0,     0,   154,     0,     0,
       0,     0,   156,     0,     0,   157,   158,   159,   160,   161,
     162,   163,   164,     0,     0,   165,     0,     0,     0,     0,
     205,   166,     0,     0,   167,     0,     0,   205,     0,     0,
       0,     0,     0,     0,     0,     0,   205,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,     0,
     190,   191,     0,     0,     0,     0,     0,     0,     0,   193,
       0,     0,     0,     0,     0,     0,   195,   196,     0,     0,
       0,     0,     0,   197,   198,   199,     0,     0,     0,   200,
     308,   205,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,     0,     2,
       3,     0,   209,     0,     0,     0,     0,     0,   110,   111,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,     0,     0,   115,   116,   117,   118,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   700,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   205,   121,     0,     0,     0,
       0,     0,     0,     0,   205,   205,   205,   122,   123,   124,
     395,   396,   125,   126,   127,     0,     0,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,     0,   147,     0,     0,     0,
     151,     0,   397,   398,   399,   154,     0,     0,     0,     0,
     156,     0,     0,   157,   158,   159,   160,   161,   162,   163,
     164,     0,     0,   165,     0,     0,     0,     0,     0,   166,
       0,     0,   167,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,     0,   190,   191,
       0,     0,     0,     0,     0,     0,     0,   193,     0,     0,
       0,     0,     0,     0,   195,   196,     0,     0,     0,     0,
       0,   197,   198,   199,     0,     0,     0,   200,   603,   105,
     106,   107,     2,     3,   108,   109,     0,     0,     0,     0,
       0,   110,   111,   112,     0,     0,   273,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,   274,   275,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,   166,     0,     0,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
       0,   190,   191,   192,     0,     0,   276,     0,     0,     0,
     193,   194,     0,     0,     0,     0,     0,   195,   196,     0,
       0,     0,     0,     0,   197,   198,   199,     0,     0,   277,
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
       0,     0,     0,     0,   166,     0,     0,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,     0,   190,   191,   192,     0,     0,     0,     0,
       0,     0,   193,   194,     0,     0,     0,     0,     0,   195,
     196,     0,     0,     0,     0,     0,   197,   198,   199,     0,
     105,   106,   200,     2,     3,     0,   209,     0,     0,     0,
       0,     0,   110,   111,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,   115,   116,   117,
     118,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   702,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   123,   124,   395,   396,   125,   126,   127,     0,
       0,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,     0,
     147,     0,     0,     0,   151,     0,   397,   398,   399,   154,
       0,     0,     0,     0,   156,     0,     0,   157,   158,   159,
     160,   161,   162,   163,   164,     0,     0,   165,     0,     0,
       0,     0,   256,   166,     0,     0,   167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,     0,   190,   191,   105,   106,     0,     2,     3,     0,
     209,   193,     0,     0,     0,     0,   110,   111,   195,   196,
       0,     0,     0,     0,     0,   197,   198,   199,     0,     0,
       0,   200,     0,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,     0,
       0,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   123,   124,     0,     0,
     125,   126,   127,     0,     0,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,     0,   147,     0,     0,     0,   151,     0,
       0,     0,     0,   154,     0,     0,     0,     0,   156,     0,
       0,   157,   158,   159,   160,   161,   162,   163,   164,     0,
       0,   165,     0,     0,     0,     0,   258,   259,     0,     0,
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
     262,   166,     0,     0,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,     0,
     190,   191,   105,   106,     0,     2,     3,     0,   209,   193,
       0,     0,     0,     0,   110,   111,   195,   196,     0,     0,
       0,     0,     0,   197,   198,   199,     0,     0,     0,   200,
       0,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,     0,     0,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,   123,   124,     0,     0,   125,   126,
     127,     0,     0,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,     0,   147,     0,     0,     0,   151,     0,     0,     0,
       0,   154,     0,     0,     0,     0,   156,     0,     0,   157,
     158,   159,   160,   161,   162,   163,   164,     0,     0,   165,
       0,     0,     0,     0,     0,   166,     0,     0,   167,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,     0,   190,   191,     0,     0,     0,     0,
       0,     0,     0,   193,     0,     0,     0,     0,     0,     0,
     195,   196,     0,     0,     0,     0,     0,   197,   198,   199,
       1,     0,     0,   200,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,     0,    15,     0,     0,     0,     0,     0,    16,     0,
       0,     0,     0,     0,     0,    17,    18,    19,     0,     0,
       0,     0,    20,     0,     0,     0,    21,     0,     0,     0,
       0,    22,    23,    24,    25,     0,     0,     0,    26,     0,
       0,     0,     0,     0,    27,     0,     0,    28,    29,    30,
       0,    31,     0,     0,     0,    32,    33,    34,    35,    36,
      37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,   396,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,     0,     0,     0,    40,    41,   397,   398,
     399,     0,     0,     0,     0,     0,    42,     0,    43,    44,
       0,    45,    46,     0,     0,    47,    48,     0,    49,     0,
      50,     0,     0,    51,    52,    53,     0,    54,    55,    56,
       0,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,    58,    59,    60,    61,     0,     0,
       0,     0,    62,    63,     0,     0,    64,    65,    66,     0,
       0,    67,    68,    69,    70,    71,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   833,   664,
       0,     0,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,   395,   396,     0,     0,     0,     0,    17,    18,    19,
       0,     0,     0,     0,    20,     0,     0,     0,    21,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,     0,
      26,   834,     0,   397,   398,   399,    27,     0,     0,    28,
      29,    30,     0,    31,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,   395,   396,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,   397,   398,   399,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,    44,     0,    45,    46,     0,     0,    47,    48,     0,
      49,     0,    50,     0,   665,    51,    52,    53,     0,    54,
      55,    56,     0,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,    61,
       0,     0,     0,     0,    62,    63,     0,     0,    64,    65,
      66,     0,     0,    67,    68,    69,    70,    71,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     838,     0,     0,     0,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,     0,     0,
       0,     0,    16,   395,   396,     0,     0,     0,     0,    17,
      18,    19,     0,     0,     0,     0,    20,     0,     0,     0,
      21,     0,     0,     0,     0,    22,    23,    24,    25,     0,
       0,     0,    26,   839,     0,   397,   398,   399,    27,     0,
       0,    28,    29,    30,     0,    31,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,   395,   396,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,   397,   398,   399,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,     0,    45,    46,     0,     0,    47,
      48,     0,    49,     0,    50,     0,   666,    51,    52,    53,
       0,    54,    55,    56,     0,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,    58,    59,
      60,    61,     0,     0,     0,     0,    62,    63,     0,     0,
      64,    65,    66,     0,     0,    67,    68,    69,    70,    71,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   895,     0,     0,     0,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,     0,
       0,     0,     0,     0,    16,   395,   396,     0,     0,     0,
       0,    17,    18,    19,     0,     0,     0,     0,    20,     0,
       0,     0,    21,     0,     0,     0,     0,    22,    23,    24,
      25,     0,     0,     0,    26,   896,     0,   397,   398,   399,
      27,     0,     0,    28,    29,    30,     0,    31,     0,     0,
       0,    32,    33,    34,    35,    36,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,   395,   396,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,     0,     0,   397,   398,
     399,     0,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,     0,    45,    46,     0,
       0,    47,    48,     0,    49,     0,    50,     0,   667,    51,
      52,    53,     0,    54,    55,    56,     0,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,     0,     0,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,    61,     0,     0,     0,     0,    62,    63,
       0,     0,    64,    65,    66,     0,     0,    67,    68,    69,
      70,    71,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   900,     0,     0,     0,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,     0,     0,     0,     0,     0,    16,   395,   396,     0,
       0,     0,     0,    17,    18,    19,     0,     0,     0,     0,
      20,     0,     0,     0,    21,     0,     0,     0,     0,    22,
      23,    24,    25,     0,     0,     0,    26,   901,     0,   397,
     398,   399,    27,     0,     0,    28,    29,    30,     0,    31,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
       0,     0,     0,     0,     0,     0,     0,     0,   395,   396,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,     0,     0,
     397,   398,   399,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,    44,     0,    45,
      46,     0,     0,    47,    48,     0,    49,     0,    50,     0,
     668,    51,    52,    53,     0,    54,    55,    56,     0,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,    61,     0,     0,     0,     0,
      62,    63,     0,     0,    64,    65,    66,     0,     0,    67,
      68,    69,    70,    71,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   933,     0,     0,     0,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,    16,   395,
     396,     0,     0,     0,     0,    17,    18,    19,     0,     0,
       0,     0,    20,     0,     0,     0,    21,     0,     0,     0,
       0,    22,    23,    24,    25,     0,     0,     0,    26,     0,
       0,   397,   398,   399,    27,     0,     0,    28,    29,    30,
       0,    31,     0,     0,     0,    32,    33,    34,    35,    36,
      37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
     395,   396,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,   397,   398,   399,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,    44,
       0,    45,    46,     0,     0,    47,    48,     0,    49,     0,
      50,     0,   669,    51,    52,    53,     0,    54,    55,    56,
       0,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,    58,    59,    60,    61,     0,     0,
       0,     0,    62,    63,     0,     0,    64,    65,    66,     0,
       0,    67,    68,    69,    70,    71,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   937,     0,
       0,     0,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      16,   395,   396,     0,     0,     0,     0,    17,    18,    19,
       0,     0,     0,     0,    20,     0,     0,     0,    21,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,     0,
      26,     0,     0,   397,   398,   399,    27,     0,     0,    28,
      29,    30,     0,    31,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,   395,   396,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,   397,   398,   399,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,    44,     0,    45,    46,     0,     0,    47,    48,     0,
      49,     0,    50,     0,   670,    51,    52,    53,     0,    54,
      55,    56,     0,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,    61,
       0,     0,     0,     0,    62,    63,     0,     0,    64,    65,
      66,     0,     0,    67,    68,    69,    70,    71,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     967,     0,     0,     0,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,     0,     0,
       0,     0,    16,   395,   396,     0,     0,     0,     0,    17,
      18,    19,     0,     0,     0,     0,    20,     0,     0,     0,
      21,     0,     0,     0,     0,    22,    23,    24,    25,     0,
       0,     0,    26,     0,     0,   397,   398,   399,    27,     0,
       0,    28,    29,    30,     0,    31,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,   395,   396,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,   397,   398,   399,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    43,    44,     0,    45,    46,     0,     0,    47,
      48,     0,    49,     0,    50,     0,   671,    51,    52,    53,
       0,    54,    55,    56,     0,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,    58,    59,
      60,    61,     0,     0,     0,     0,    62,    63,     0,     0,
      64,    65,    66,     0,     0,    67,    68,    69,    70,    71,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   971,     0,     0,     0,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,     0,
       0,     0,     0,     0,    16,   395,   396,     0,     0,     0,
       0,    17,    18,    19,     0,     0,     0,     0,    20,     0,
       0,     0,    21,     0,     0,     0,     0,    22,    23,    24,
      25,     0,     0,     0,    26,     0,     0,   397,   398,   399,
      27,     0,     0,    28,    29,    30,     0,    31,     0,     0,
       0,    32,    33,    34,    35,    36,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,   395,   396,     0,     0,
       0,     0,     0,     0,     0,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,     0,     0,     0,    39,     0,     0,   397,   398,
     399,     0,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    43,    44,     0,    45,    46,     0,
       0,    47,    48,     0,    49,     0,    50,     0,   672,    51,
      52,    53,     0,    54,    55,    56,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     419,     0,     0,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,    61,     0,   395,   396,     0,    62,    63,
       0,     0,    64,    65,    66,     0,    15,    67,    68,    69,
      70,    71,    16,     0,     0,     0,     0,     0,     0,    17,
      18,    19,     0,     0,     0,     0,    20,   397,   398,   399,
      21,     0,     0,     0,     0,    22,    23,    24,    25,     0,
       0,     0,    26,     0,   420,     0,     0,     0,    27,     0,
       0,    28,    29,    30,     0,    31,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,     0,     0,     0,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,   673,     0,
      42,     0,    43,    44,     0,    45,    46,     0,     0,    47,
      48,     0,    49,     0,    50,     0,     0,    51,    52,    53,
       0,    54,    55,    56,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   590,   395,
     396,     0,     0,     0,     0,     0,    57,     0,    58,    59,
      60,    61,     0,   395,   396,     0,    62,    63,     0,     0,
      64,    65,    66,     0,    15,    67,    68,    69,    70,    71,
      16,   397,   398,   399,     0,     0,     0,    17,    18,    19,
       0,     0,     0,     0,    20,   397,   398,   399,    21,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,     0,
      26,     0,     0,     0,     0,     0,    27,     0,     0,    28,
      29,    30,     0,    31,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,     0,     0,     0,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,     0,     0,     0,     0,
       0,    39,   674,     0,     0,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,   675,     0,    42,     0,
      43,    44,     0,    45,    46,     0,     0,    47,    48,     0,
      49,     0,    50,     0,     0,    51,    52,    53,     0,    54,
      55,    56,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   836,   395,   396,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,    61,
       0,   395,   396,     0,    62,    63,     0,     0,    64,    65,
      66,     0,    15,    67,    68,    69,    70,    71,    16,   397,
     398,   399,     0,     0,     0,    17,    18,    19,     0,     0,
       0,     0,    20,   397,   398,   399,    21,     0,     0,     0,
       0,    22,    23,    24,    25,     0,     0,     0,    26,     0,
       0,     0,     0,     0,    27,     0,     0,    28,    29,    30,
       0,    31,     0,     0,     0,    32,    33,    34,    35,    36,
      37,    38,     0,     0,     0,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,     0,     0,     0,     0,     0,     0,    39,
     676,     0,     0,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,   677,     0,    42,     0,    43,    44,
       0,    45,    46,     0,     0,    47,    48,     0,    49,     0,
      50,     0,     0,    51,    52,    53,     0,    54,    55,    56,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   841,   395,   396,     0,     0,     0,
       0,     0,    57,     0,    58,    59,    60,    61,     0,   395,
     396,     0,    62,    63,     0,     0,    64,    65,    66,     0,
      15,    67,    68,    69,    70,    71,    16,   397,   398,   399,
       0,     0,     0,    17,    18,    19,     0,     0,     0,     0,
      20,   397,   398,   399,    21,     0,     0,     0,     0,    22,
      23,    24,    25,     0,     0,     0,    26,     0,     0,     0,
       0,     0,    27,     0,     0,    28,    29,    30,     0,    31,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
       0,     0,     0,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,     0,     0,     0,     0,     0,     0,    39,   680,     0,
       0,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,   687,     0,    42,     0,    43,    44,     0,    45,
      46,     0,     0,    47,    48,     0,    49,     0,    50,     0,
       0,    51,    52,    53,     0,    54,    55,    56,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   843,   395,   396,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,    61,     0,   395,   396,     0,
      62,    63,     0,     0,    64,    65,    66,     0,    15,    67,
      68,    69,    70,    71,    16,   397,   398,   399,     0,     0,
       0,    17,    18,    19,     0,     0,     0,     0,    20,   397,
     398,   399,    21,     0,     0,     0,     0,    22,    23,    24,
      25,     0,     0,     0,    26,     0,     0,     0,     0,     0,
      27,     0,     0,    28,    29,    30,     0,    31,     0,     0,
       0,    32,    33,    34,    35,    36,    37,    38,     0,     0,
       0,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,     0,     0,     0,    39,   692,     0,     0,     0,
       0,     0,    40,    41,     0,     0,     0,     0,     0,     0,
     693,     0,    42,     0,    43,    44,     0,    45,    46,     0,
       0,    47,    48,     0,    49,     0,    50,     0,     0,    51,
      52,    53,     0,    54,    55,    56,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     898,   395,   396,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,    61,     0,   395,   396,     0,    62,    63,
       0,     0,    64,    65,    66,     0,    15,    67,    68,    69,
      70,    71,    16,   397,   398,   399,     0,     0,     0,    17,
      18,    19,     0,     0,     0,     0,    20,   397,   398,   399,
      21,     0,     0,     0,     0,    22,    23,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,    28,    29,    30,     0,    31,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,     0,     0,     0,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,     0,     0,
       0,     0,     0,    39,   696,     0,     0,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,   728,     0,
      42,     0,    43,    44,     0,    45,    46,     0,     0,    47,
      48,     0,    49,     0,    50,     0,     0,    51,    52,    53,
       0,    54,    55,    56,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   903,   395,
     396,     0,     0,     0,     0,     0,    57,     0,    58,    59,
      60,    61,     0,   395,   396,     0,    62,    63,     0,     0,
      64,    65,    66,     0,    15,    67,    68,    69,    70,    71,
      16,   397,   398,   399,     0,     0,     0,    17,    18,    19,
       0,     0,     0,     0,    20,   397,   398,   399,    21,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,     0,
      26,     0,     0,     0,     0,     0,    27,     0,     0,    28,
      29,    30,     0,    31,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,     0,     0,     0,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,     0,     0,     0,     0,
       0,    39,   744,     0,     0,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,   746,     0,    42,     0,
      43,    44,     0,    45,    46,     0,     0,    47,    48,     0,
      49,     0,    50,     0,     0,    51,    52,    53,     0,    54,
      55,    56,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   905,   395,   396,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,    61,
       0,   395,   396,     0,    62,    63,     0,     0,    64,    65,
      66,     0,    15,    67,    68,    69,    70,    71,    16,   397,
     398,   399,     0,     0,     0,    17,    18,    19,     0,     0,
       0,     0,    20,   397,   398,   399,    21,     0,     0,     0,
       0,    22,    23,    24,    25,     0,     0,     0,    26,     0,
       0,     0,     0,     0,    27,     0,     0,    28,    29,    30,
       0,    31,     0,     0,     0,    32,    33,    34,    35,    36,
      37,    38,     0,     0,     0,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,     0,     0,     0,     0,     0,     0,    39,
     747,     0,     0,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,   750,     0,    42,     0,    43,    44,
       0,    45,    46,     0,     0,    47,    48,     0,    49,     0,
      50,     0,     0,    51,    52,    53,     0,    54,    55,    56,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,   395,   396,     0,     0,     0,
       0,     0,    57,     0,    58,    59,    60,    61,     0,   395,
     396,     0,    62,    63,     0,     0,    64,    65,    66,     0,
      15,    67,    68,    69,    70,    71,    16,   397,   398,   399,
       0,     0,     0,    17,    18,    19,     0,     0,     0,     0,
      20,   397,   398,   399,    21,     0,     0,     0,     0,    22,
      23,    24,    25,     0,     0,     0,    26,     0,     0,     0,
       0,     0,    27,     0,     0,    28,    29,    30,     0,    31,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
       0,     0,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,     0,     0,     0,     0,     0,     0,    39,   751,     0,
       0,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,   753,     0,    42,     0,    43,    44,     0,    45,
      46,     0,     0,    47,    48,     0,    49,     0,    50,     0,
       0,    51,    52,    53,     0,    54,    55,    56,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,   395,   396,     0,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,    61,   395,   396,     0,     0,
      62,    63,     0,     0,    64,    65,    66,     0,     0,    67,
      68,    69,    70,    71,   397,   398,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   397,   398,
     399,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,   395,   396,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,     0,     0,
     397,   398,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   765,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   824,
       0,   395,   396,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   395,   396,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
     395,   396,     0,   397,   398,   399,     0,     0,     0,     0,
       0,     0,     0,   395,   396,     0,   397,   398,   399,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   826,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   397,   398,   399,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,   395,   396,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,     0,     0,   829,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   852,   397,   398,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   853,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   854,     0,   395,   396,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   395,   396,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,   395,   396,
     397,   398,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   397,   398,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   927,
     397,   398,   399,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,   395,   396,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,   928,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   929,   397,   398,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   440,
       0,     0,     0,   395,   396,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,   396,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   395,
     396,     0,     0,     0,     0,   397,   398,   399,     0,     0,
       0,     0,     0,     0,     0,   395,   396,     0,   397,   398,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   397,   398,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   441,     0,     0,   397,   398,   399,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   443,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,   446,     0,     0,     0,
     395,   396,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   395,   396,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,   396,     0,     0,
       0,     0,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   397,   398,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   397,   398,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   395,   396,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,     0,     0,   397,   398,   399,     0,     0,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   449,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   450,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   452,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,     0,   395,   396,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,   396,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,   453,     0,     0,   397,   398,   399,   395,   396,
       0,     0,     0,     0,     0,     0,     0,     0,   397,   398,
     399,     0,     0,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,     0,     0,
     397,   398,   399,     0,     0,     0,     0,     0,   395,   396,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,   395,   396,
     397,   398,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   454,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   455,     0,     0,
     397,   398,   399,   395,   396,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,   466,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     395,   396,     0,     0,     0,   397,   398,   399,     0,     0,
       0,     0,     0,   395,   396,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,   467,
       0,     0,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   397,   398,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   468,
       0,     0,     0,     0,     0,   395,   396,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,   544,     0,     0,   397,   398,   399,
       0,     0,     0,     0,     0,   395,   396,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,   548,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   615,     0,     0,   397,   398,   399,
       0,     0,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,   395,   396,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     395,   396,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,   617,     0,     0,   397,
     398,   399,     0,     0,     0,     0,     0,   395,   396,     0,
       0,     0,   397,   398,   399,     0,     0,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,     0,     0,     0,     0,     0,   618,     0,     0,   397,
     398,   399,   395,   396,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,     0,   395,   396,   397,   398,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   621,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   688,     0,     0,   397,   398,   399,   395,   396,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,     0,     0,     0,     0,     0,   689,     0,
       0,     0,     0,     0,   395,   396,     0,     0,     0,   397,
     398,   399,     0,     0,     0,     0,     0,   395,   396,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,   690,     0,     0,   397,   398,   399,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   723,     0,     0,     0,     0,     0,   395,
     396,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,   729,     0,
       0,   397,   398,   399,     0,     0,     0,     0,     0,   395,
     396,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,   730,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   731,     0,
       0,   397,   398,   399,     0,     0,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,   395,   396,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   395,   396,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
     732,     0,     0,   397,   398,   399,     0,     0,     0,     0,
       0,   395,   396,     0,     0,     0,   397,   398,   399,     0,
       0,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,     0,     0,     0,     0,
     734,     0,     0,   397,   398,   399,   395,   396,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,   395,   396,   397,   398,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   737,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   738,     0,     0,   397,   398,
     399,   395,   396,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,     0,     0,
       0,     0,   740,     0,     0,     0,     0,     0,   395,   396,
       0,     0,     0,   397,   398,   399,     0,     0,     0,     0,
       0,   395,   396,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,   741,     0,     0,
     397,   398,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   397,   398,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   742,     0,     0,
       0,     0,     0,   395,   396,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,   743,     0,     0,   397,   398,   399,     0,     0,
       0,     0,     0,   395,   396,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,   748,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   749,     0,     0,   397,   398,   399,     0,     0,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,   395,   396,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   395,   396,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,   769,     0,     0,   397,   398,   399,
       0,     0,     0,     0,     0,   395,   396,     0,     0,     0,
     397,   398,   399,     0,     0,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,     0,     0,   798,     0,     0,   397,   398,   399,
     395,   396,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
     395,   396,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   800,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   801,
       0,     0,   397,   398,   399,   395,   396,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,     0,     0,     0,     0,     0,   804,     0,     0,     0,
       0,     0,   395,   396,     0,     0,     0,   397,   398,   399,
       0,     0,     0,     0,     0,   395,   396,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,   825,     0,     0,   397,   398,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   397,   398,   399,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   828,     0,     0,     0,     0,     0,   395,   396,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,   857,     0,     0,   397,
     398,   399,     0,     0,     0,     0,     0,   395,   396,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,   859,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   862,     0,     0,   397,
     398,   399,     0,     0,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,     0,   395,
     396,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   395,   396,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,     0,   863,     0,
       0,   397,   398,   399,     0,     0,     0,     0,     0,   395,
     396,     0,     0,     0,   397,   398,   399,     0,     0,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,     0,     0,     0,     0,     0,   865,     0,
       0,   397,   398,   399,   395,   396,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,     0,   395,   396,   397,   398,   399,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     866,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   867,     0,     0,   397,   398,   399,   395,
     396,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,     0,     0,     0,     0,
     870,     0,     0,     0,     0,     0,   395,   396,     0,     0,
       0,   397,   398,   399,     0,     0,     0,     0,     0,   395,
     396,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,   871,     0,     0,   397,   398,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   397,   398,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   880,     0,     0,     0,     0,
       0,   395,   396,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
     911,     0,     0,   397,   398,   399,     0,     0,     0,     0,
       0,   395,   396,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,   913,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     914,     0,     0,   397,   398,   399,     0,     0,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,     0,   395,   396,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,   396,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,   920,     0,     0,   397,   398,   399,     0,     0,
       0,     0,     0,   395,   396,     0,     0,     0,   397,   398,
     399,     0,     0,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,     0,     0,
       0,     0,   921,     0,     0,   397,   398,   399,   395,   396,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,   395,   396,
     397,   398,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   958,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   961,     0,     0,
     397,   398,   399,   395,   396,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,     0,     0,   975,     0,     0,     0,     0,     0,
     395,   396,     0,     0,     0,   397,   398,   399,     0,     0,
       0,     0,     0,   395,   396,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,   976,
       0,     0,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   397,   398,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   978,
       0,     0,     0,     0,     0,   395,   396,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,   979,     0,     0,   397,   398,   399,
       0,     0,     0,     0,     0,   395,   396,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,   989,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   992,     0,     0,   397,   398,   399,
       0,     0,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,     0,   395,   396,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     395,   396,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,     0,   995,     0,     0,   397,
     398,   399,     0,     0,     0,     0,     0,   395,   396,     0,
       0,     0,   397,   398,   399,     0,     0,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,     0,     0,     0,     0,     0,   996,     0,     0,   397,
     398,   399,   395,   396,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
       0,     0,   395,   396,   397,   398,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   998,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   999,     0,     0,   397,   398,   399,   395,   396,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,     0,     0,     0,     0,     0,  1005,     0,
       0,     0,     0,     0,   395,   396,     0,     0,     0,   397,
     398,   399,     0,     0,     0,     0,     0,   395,   396,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,     0,  1006,     0,     0,   397,   398,   399,     0,
     779,     0,     0,     0,     0,     0,     0,     0,     0,   397,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1009,     0,     0,     0,     0,     0,   395,
     396,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     781,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,     0,     0,     0,  1010,     0,
       0,   397,   398,   399,     0,     0,     0,     0,     0,   395,
     396,   382,   409,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,     0,  1013,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1014,     0,
       0,   397,   398,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   395,   396,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   395,   396,   397,   398,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   397,   398,   399
};

static const yytype_int16 yycheck[] =
{
      17,    18,    19,    20,    96,    97,     7,     8,     7,     8,
       7,     8,   221,    32,    33,    98,    99,   100,   101,    19,
     240,     0,     7,     8,     9,    10,    43,    44,    36,    46,
      47,    48,    49,    50,    51,    24,    53,    54,    55,    56,
     269,    29,    20,   235,    61,     7,     8,     9,    10,   235,
      67,    68,    69,    24,    71,     7,     8,     9,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    88,    89,    90,     7,     8,    93,    16,    23,   235,
      24,    24,    21,    28,    29,    85,    25,    71,    27,    34,
      35,   235,    70,    81,   235,    74,    80,   114,   115,    88,
       4,     5,   119,   120,     4,     5,    94,    95,    96,    97,
     438,   439,    24,    25,    26,    27,   235,    88,    30,    31,
      32,    70,    29,    72,   235,    32,    33,     7,     8,     9,
      10,   235,    94,    33,   235,    24,    25,    26,    27,   156,
     235,    30,    31,    32,    88,    88,   235,    99,   113,   114,
       4,     4,   169,    60,    24,    25,    26,    27,    23,     8,
      30,    31,    32,    28,    29,     7,     8,     9,   113,   114,
     235,    51,   235,     1,    81,     7,     8,     9,    10,   196,
     145,   146,   147,   200,     7,     8,     9,    94,    95,    96,
      97,     7,    24,     7,     8,     9,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    24,
      25,    26,    27,   433,    10,    30,    31,    32,    24,    25,
      26,    27,    10,     0,    30,    31,    32,   235,    19,   458,
      70,   460,    72,    20,   235,    24,   235,    19,   235,   256,
     234,   258,   259,   234,   234,   262,   329,   330,   331,   234,
     267,   268,   234,    10,    24,    25,    26,    27,   235,   235,
      30,    31,    32,   280,     4,     5,   235,     7,     8,   234,
      10,   236,     7,     8,     9,    10,   293,   294,   295,   296,
     297,   298,   299,   300,   223,   304,   113,   114,    24,    25,
      26,    27,    24,   235,    30,    31,    32,    24,    25,    26,
      27,   235,    88,    30,    31,    32,    24,    25,    26,    27,
     327,   328,    30,    31,    32,     7,     8,     9,   145,   146,
     147,   235,   234,   311,   236,   235,   235,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   427,   235,   363,   236,     6,     7,
       8,     9,    10,   370,   371,    79,   373,   374,   235,   235,
     377,   378,   269,   302,   234,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   592,     7,     8,     9,    10,   235,   235,
     407,   408,   409,   221,   411,    19,   413,   304,     7,     8,
       9,   493,   235,   234,   311,   235,   235,   234,   234,   236,
     235,   235,   429,   430,   431,   432,   235,   434,   235,    19,
     437,   236,   235,   440,   441,   442,   443,   444,   235,   446,
     236,   235,   449,   450,   235,   452,   453,   454,   455,   234,
     428,   235,     0,     1,   461,   235,    24,   464,   465,   466,
     467,   468,    24,    25,    26,    27,   235,   235,    30,    31,
      32,   819,   820,   821,   292,   482,   236,   484,   235,   235,
     487,    29,   235,   235,    32,    33,    24,    25,    26,    27,
     235,   235,    30,    31,    32,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   235,    24,
     236,   235,    60,   491,   235,   493,   235,   235,   234,   236,
       7,     8,     9,    10,   235,   235,    74,   234,   236,   235,
     235,   428,   539,    81,   235,   235,   234,   544,   235,   235,
     234,   548,   234,   236,     7,   236,    94,    95,    96,    97,
     236,   480,    24,   236,     8,     0,     1,   236,   236,   236,
     236,   458,     9,   460,   235,   113,    38,    39,    40,    41,
      42,    43,    44,    23,   773,   234,    19,   584,     7,   586,
       8,    88,     9,    85,    29,   113,   114,    32,    33,    97,
       7,    68,   236,    19,   491,    19,   493,    19,    19,   236,
      39,    40,   420,   236,   235,   235,   235,    10,   615,    32,
     617,   618,    86,   235,   621,    60,   235,   145,   146,   147,
     235,     7,    61,     8,   697,    73,   604,     9,    70,    74,
      24,    24,    25,    26,    27,    96,    81,    30,    31,    32,
      24,    25,    26,    27,    19,   234,    30,    31,    32,    94,
      95,    96,    97,   235,   235,    24,    25,    26,    27,   236,
     236,    30,    31,    32,   236,   594,   236,   236,   113,   236,
     235,   235,   234,   221,   222,   682,   683,   684,    24,    25,
      26,    27,   689,   690,    30,    31,    32,    19,     8,    68,
       9,     7,   234,   700,   234,   702,    50,    49,   236,    49,
      49,   234,   234,   234,    19,   235,   234,   604,   236,   236,
     717,   236,   719,   236,   721,   236,    19,    19,    78,    78,
      78,   269,   729,   730,   731,   732,   236,   734,    72,   168,
     737,   738,   236,   740,   741,   742,   743,    78,    78,   236,
      71,   748,   749,    78,   292,    24,    25,    26,    27,    23,
      78,    30,    31,    32,    28,    29,   304,    78,    32,    33,
      34,    35,   769,   311,    78,    78,    78,    78,    78,    78,
      78,    72,   779,    78,   781,    74,   221,   222,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,   798,    78,   800,   801,    78,    78,   804,    19,    20,
      78,    78,    23,   810,   811,    78,    78,    28,    29,    78,
      78,    32,    33,    34,    35,   822,    78,    78,   825,    78,
     428,   828,   280,   726,   269,   491,   698,   834,    -1,    -1,
      -1,    -1,   839,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,   280,    -1,   236,    -1,    -1,    -1,   292,    -1,    70,
     857,    -1,   859,    -1,    -1,   862,   863,    78,    -1,   304,
      -1,    -1,   301,   870,   871,   234,   311,    -1,   113,   114,
      -1,   419,   420,   880,    -1,   423,    -1,    -1,   426,    -1,
     428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,   896,
      -1,    -1,   113,   114,   901,   713,    -1,    -1,    -1,   338,
     339,   340,    -1,    -1,   911,    -1,   913,   914,    -1,    -1,
     458,    -1,   460,   920,   921,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   361,   362,    -1,   364,   365,   366,   367,   368,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   491,    -1,   493,    -1,    -1,    -1,    -1,
      -1,   958,   770,    -1,   961,   234,   774,   775,   776,   777,
     778,   400,   401,   402,   403,   404,   405,   406,   975,   976,
      -1,   978,   979,    -1,   419,   420,    -1,    -1,   423,    -1,
      -1,   426,   989,   428,    -1,   992,    -1,    -1,   995,   996,
      -1,   998,   999,    -1,    -1,    -1,    -1,    -1,  1005,  1006,
      -1,    -1,  1009,  1010,    -1,    -1,  1013,  1014,    -1,    -1,
      -1,    -1,    -1,   458,    -1,   460,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,   845,   846,   847,
     848,   849,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   590,    -1,   592,    -1,   491,    -1,   493,    -1,
      -1,    -1,   145,   146,   147,    -1,   604,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   884,    -1,    -1,    -1,
      -1,   889,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   646,    -1,
     648,   649,   650,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   419,    -1,    -1,    -1,   423,    -1,    -1,
     426,    -1,    -1,    -1,   942,    -1,    -1,    -1,    -1,   947,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,   236,    -1,   590,    -1,   592,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   604,
      -1,    -1,    -1,    -1,    -1,   713,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   145,   146,
     147,   646,    -1,   648,   649,   650,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   770,    -1,    -1,   773,   774,   775,   776,   777,
     778,    -1,    -1,    -1,    -1,    -1,   784,    -1,    -1,    -1,
      -1,    -1,   681,    -1,    -1,    -1,    -1,    -1,    -1,   688,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   713,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   590,   833,    -1,   234,   836,   236,
     838,    -1,    -1,   841,    -1,   843,    -1,   845,   846,   847,
     848,   849,    -1,   851,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,   752,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   770,    -1,    -1,   773,   774,
     775,   776,   777,   778,    -1,    -1,   884,    -1,    -1,   784,
     646,   889,   648,   649,   650,   113,   114,   895,    -1,    -1,
     898,    -1,   900,    -1,    -1,   903,    -1,   905,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,   933,    -1,    -1,   833,   937,
      -1,   836,    -1,   838,   942,   234,   841,   236,   843,   947,
     845,   846,   847,   848,   849,    -1,   851,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   856,    -1,   967,
      -1,    -1,    -1,   971,    -1,    16,   865,   866,   867,    -1,
      21,    -1,    -1,    -1,    25,    -1,    27,    28,    29,   884,
      -1,    -1,    -1,    -1,   889,    -1,    -1,    -1,    39,    40,
     895,   113,   114,   898,    -1,   900,    -1,    -1,   903,    -1,
     905,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   784,    -1,
      -1,    -1,    -1,   145,   146,   147,    -1,    -1,   933,    -1,
      81,    -1,   937,    -1,    -1,    -1,    -1,   942,    -1,    -1,
      -1,    -1,   947,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   967,    -1,    -1,    -1,   971,   833,    -1,    -1,
     836,    -1,   838,    -1,    -1,   841,    -1,   843,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   851,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,   236,    -1,    -1,   168,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   895,
      -1,    -1,   898,    -1,   900,    -1,    -1,   903,    -1,   905,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   933,    -1,    -1,
      -1,   937,   223,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   967,    -1,    -1,    -1,   971,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   269,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,   280,
      -1,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     301,   302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     311,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,   330,
     331,     6,    -1,    -1,     9,    10,    -1,   338,   339,   340,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,   236,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     361,   362,   236,   364,   365,   366,   367,   368,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,   400,
     401,   402,   403,   404,   405,   406,   236,   145,   146,   147,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   427,   428,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   458,   133,   460,
     135,   136,   137,    -1,   139,    -1,   141,   113,   114,   144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   480,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     491,    -1,   493,    -1,    -1,    -1,    -1,    -1,   236,   145,
     146,   147,   113,   114,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,     4,     5,
      -1,     7,     8,    -1,    10,    -1,   113,   114,    -1,    -1,
      16,    17,    -1,   208,   145,   146,   147,    -1,    -1,    -1,
      -1,   216,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     236,    -1,    -1,   594,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,   604,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,   234,   110,   111,   112,   145,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    -1,   134,   236,
      -1,    -1,   138,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,    -1,    -1,   161,    -1,    -1,    -1,    -1,
     681,   167,    -1,    -1,   170,    -1,    -1,   688,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   697,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,    -1,
     206,   207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    -1,    -1,   222,   223,    -1,    -1,
      -1,    -1,    -1,   229,   230,   231,    -1,    -1,    -1,   235,
     236,   752,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,    -1,     7,
       8,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   856,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   865,   866,   867,   105,   106,   107,
     113,   114,   110,   111,   112,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    -1,   134,    -1,    -1,    -1,
     138,    -1,   145,   146,   147,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,    -1,   206,   207,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,    -1,
      -1,    -1,    -1,    -1,   222,   223,    -1,    -1,    -1,    -1,
      -1,   229,   230,   231,    -1,    -1,    -1,   235,   236,     4,
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
      -1,    -1,   167,    -1,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
      -1,   206,   207,   208,    -1,    -1,   211,    -1,    -1,    -1,
     215,   216,    -1,    -1,    -1,    -1,    -1,   222,   223,    -1,
      -1,    -1,    -1,    -1,   229,   230,   231,    -1,    -1,   234,
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
      -1,    -1,    -1,    -1,   167,    -1,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,    -1,   206,   207,   208,    -1,    -1,    -1,    -1,
      -1,    -1,   215,   216,    -1,    -1,    -1,    -1,    -1,   222,
     223,    -1,    -1,    -1,    -1,    -1,   229,   230,   231,    -1,
       4,     5,   235,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,   113,   114,   110,   111,   112,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,    -1,
     134,    -1,    -1,    -1,   138,    -1,   145,   146,   147,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,   161,    -1,    -1,
      -1,    -1,   166,   167,    -1,    -1,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,    -1,   206,   207,     4,     5,    -1,     7,     8,    -1,
      10,   215,    -1,    -1,    -1,    -1,    16,    17,   222,   223,
      -1,    -1,    -1,    -1,    -1,   229,   230,   231,    -1,    -1,
      -1,   235,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,    -1,
     110,   111,   112,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,    -1,   134,    -1,    -1,    -1,   138,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,    -1,
      -1,   161,    -1,    -1,    -1,    -1,   166,   167,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,    -1,   206,   207,     4,     5,
      -1,     7,     8,    -1,    10,   215,    -1,    -1,    -1,    -1,
      16,    17,   222,   223,    -1,    -1,    -1,    -1,    -1,   229,
     230,   231,    -1,    -1,    -1,   235,    -1,    33,    -1,    -1,
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
     166,   167,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,    -1,
     206,   207,     4,     5,    -1,     7,     8,    -1,    10,   215,
      -1,    -1,    -1,    -1,    16,    17,   222,   223,    -1,    -1,
      -1,    -1,    -1,   229,   230,   231,    -1,    -1,    -1,   235,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,    -1,    -1,   110,   111,
     112,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,    -1,   134,    -1,    -1,    -1,   138,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,    -1,    -1,   161,
      -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,    -1,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,
     222,   223,    -1,    -1,    -1,    -1,    -1,   229,   230,   231,
       3,    -1,    -1,   235,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,
      -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,    -1,   149,   150,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,
      -1,   164,   165,    -1,    -1,   168,   169,    -1,   171,    -1,
     173,    -1,    -1,   176,   177,   178,    -1,   180,   181,   182,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   205,    -1,   207,   208,   209,   210,    -1,    -1,
      -1,    -1,   215,   216,    -1,    -1,   219,   220,   221,    -1,
      -1,   224,   225,   226,   227,   228,     7,     8,     9,    10,
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
     161,   162,    -1,   164,   165,    -1,    -1,   168,   169,    -1,
     171,    -1,   173,    -1,   236,   176,   177,   178,    -1,   180,
     181,   182,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   205,    -1,   207,   208,   209,   210,
      -1,    -1,    -1,    -1,   215,   216,    -1,    -1,   219,   220,
     221,    -1,    -1,   224,   225,   226,   227,   228,     7,     8,
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
     159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,   168,
     169,    -1,   171,    -1,   173,    -1,   236,   176,   177,   178,
      -1,   180,   181,   182,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,   207,   208,
     209,   210,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,
     219,   220,   221,    -1,    -1,   224,   225,   226,   227,   228,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    51,   113,   114,    -1,    -1,    -1,
      -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    -1,    -1,    -1,    81,    82,    -1,   145,   146,   147,
      87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,   146,
     147,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,
      -1,   168,   169,    -1,   171,    -1,   173,    -1,   236,   176,
     177,   178,    -1,   180,   181,   182,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,
     207,   208,   209,   210,    -1,    -1,    -1,    -1,   215,   216,
      -1,    -1,   219,   220,   221,    -1,    -1,   224,   225,   226,
     227,   228,     7,     8,     9,    10,    11,    12,    13,    14,
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
     165,    -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,
     236,   176,   177,   178,    -1,   180,   181,   182,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     205,    -1,   207,   208,   209,   210,    -1,    -1,    -1,    -1,
     215,   216,    -1,    -1,   219,   220,   221,    -1,    -1,   224,
     225,   226,   227,   228,     7,     8,     9,    10,    11,    12,
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
      -1,   164,   165,    -1,    -1,   168,   169,    -1,   171,    -1,
     173,    -1,   236,   176,   177,   178,    -1,   180,   181,   182,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   205,    -1,   207,   208,   209,   210,    -1,    -1,
      -1,    -1,   215,   216,    -1,    -1,   219,   220,   221,    -1,
      -1,   224,   225,   226,   227,   228,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,   113,   114,    -1,    -1,    -1,    -1,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    -1,    -1,   145,   146,   147,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,   145,   146,   147,    -1,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
     161,   162,    -1,   164,   165,    -1,    -1,   168,   169,    -1,
     171,    -1,   173,    -1,   236,   176,   177,   178,    -1,   180,
     181,   182,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   205,    -1,   207,   208,   209,   210,
      -1,    -1,    -1,    -1,   215,   216,    -1,    -1,   219,   220,
     221,    -1,    -1,   224,   225,   226,   227,   228,     7,     8,
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
     159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,   168,
     169,    -1,   171,    -1,   173,    -1,   236,   176,   177,   178,
      -1,   180,   181,   182,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,   207,   208,
     209,   210,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,
     219,   220,   221,    -1,    -1,   224,   225,   226,   227,   228,
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
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,   146,
     147,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,
      -1,   168,   169,    -1,   171,    -1,   173,    -1,   236,   176,
     177,   178,    -1,   180,   181,   182,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,
     207,   208,   209,   210,    -1,   113,   114,    -1,   215,   216,
      -1,    -1,   219,   220,   221,    -1,    45,   224,   225,   226,
     227,   228,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    -1,    -1,    -1,    -1,    65,   145,   146,   147,
      69,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    81,    -1,    83,    -1,    -1,    -1,    87,    -1,
      -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,
     159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,   168,
     169,    -1,   171,    -1,   173,    -1,    -1,   176,   177,   178,
      -1,   180,   181,   182,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,   113,
     114,    -1,    -1,    -1,    -1,    -1,   205,    -1,   207,   208,
     209,   210,    -1,   113,   114,    -1,   215,   216,    -1,    -1,
     219,   220,   221,    -1,    45,   224,   225,   226,   227,   228,
      51,   145,   146,   147,    -1,    -1,    -1,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,   145,   146,   147,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   236,    -1,    -1,    -1,    -1,    -1,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,   159,    -1,
     161,   162,    -1,   164,   165,    -1,    -1,   168,   169,    -1,
     171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,
     181,   182,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   113,   114,    -1,
      -1,    -1,    -1,    -1,   205,    -1,   207,   208,   209,   210,
      -1,   113,   114,    -1,   215,   216,    -1,    -1,   219,   220,
     221,    -1,    45,   224,   225,   226,   227,   228,    51,   145,
     146,   147,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,
      -1,    -1,    65,   145,   146,   147,    69,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,
      -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     236,    -1,    -1,    -1,    -1,    -1,   149,   150,    -1,    -1,
      -1,    -1,    -1,    -1,   236,    -1,   159,    -1,   161,   162,
      -1,   164,   165,    -1,    -1,   168,   169,    -1,   171,    -1,
     173,    -1,    -1,   176,   177,   178,    -1,   180,   181,   182,
      -1,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,   113,   114,    -1,    -1,    -1,
      -1,    -1,   205,    -1,   207,   208,   209,   210,    -1,   113,
     114,    -1,   215,   216,    -1,    -1,   219,   220,   221,    -1,
      45,   224,   225,   226,   227,   228,    51,   145,   146,   147,
      -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,
      65,   145,   146,   147,    69,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   236,    -1,
      -1,    -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,   236,    -1,   159,    -1,   161,   162,    -1,   164,
     165,    -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,
      -1,   176,   177,   178,    -1,   180,   181,   182,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   113,   114,    -1,    -1,    -1,    -1,    -1,
     205,    -1,   207,   208,   209,   210,    -1,   113,   114,    -1,
     215,   216,    -1,    -1,   219,   220,   221,    -1,    45,   224,
     225,   226,   227,   228,    51,   145,   146,   147,    -1,    -1,
      -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,   145,
     146,   147,    69,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   236,    -1,    -1,    -1,
      -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
     236,    -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,
      -1,   168,   169,    -1,   171,    -1,   173,    -1,    -1,   176,
     177,   178,    -1,   180,   181,   182,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,   113,   114,    -1,    -1,    -1,    -1,    -1,   205,    -1,
     207,   208,   209,   210,    -1,   113,   114,    -1,   215,   216,
      -1,    -1,   219,   220,   221,    -1,    45,   224,   225,   226,
     227,   228,    51,   145,   146,   147,    -1,    -1,    -1,    58,
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
     159,    -1,   161,   162,    -1,   164,   165,    -1,    -1,   168,
     169,    -1,   171,    -1,   173,    -1,    -1,   176,   177,   178,
      -1,   180,   181,   182,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,   113,
     114,    -1,    -1,    -1,    -1,    -1,   205,    -1,   207,   208,
     209,   210,    -1,   113,   114,    -1,   215,   216,    -1,    -1,
     219,   220,   221,    -1,    45,   224,   225,   226,   227,   228,
      51,   145,   146,   147,    -1,    -1,    -1,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,   145,   146,   147,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   236,    -1,    -1,    -1,    -1,    -1,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,   159,    -1,
     161,   162,    -1,   164,   165,    -1,    -1,   168,   169,    -1,
     171,    -1,   173,    -1,    -1,   176,   177,   178,    -1,   180,
     181,   182,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   113,   114,    -1,
      -1,    -1,    -1,    -1,   205,    -1,   207,   208,   209,   210,
      -1,   113,   114,    -1,   215,   216,    -1,    -1,   219,   220,
     221,    -1,    45,   224,   225,   226,   227,   228,    51,   145,
     146,   147,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,
      -1,    -1,    65,   145,   146,   147,    69,    -1,    -1,    -1,
      -1,    74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,
      -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     236,    -1,    -1,    -1,    -1,    -1,   149,   150,    -1,    -1,
      -1,    -1,    -1,    -1,   236,    -1,   159,    -1,   161,   162,
      -1,   164,   165,    -1,    -1,   168,   169,    -1,   171,    -1,
     173,    -1,    -1,   176,   177,   178,    -1,   180,   181,   182,
      -1,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,   205,    -1,   207,   208,   209,   210,    -1,   113,
     114,    -1,   215,   216,    -1,    -1,   219,   220,   221,    -1,
      45,   224,   225,   226,   227,   228,    51,   145,   146,   147,
      -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,
      65,   145,   146,   147,    69,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,    94,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   236,    -1,
      -1,    -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,   236,    -1,   159,    -1,   161,   162,    -1,   164,
     165,    -1,    -1,   168,   169,    -1,   171,    -1,   173,    -1,
      -1,   176,   177,   178,    -1,   180,   181,   182,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
     205,    -1,   207,   208,   209,   210,   113,   114,    -1,    -1,
     215,   216,    -1,    -1,   219,   220,   221,    -1,    -1,   224,
     225,   226,   227,   228,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     113,   114,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   236,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,   113,   114,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,
     145,   146,   147,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,   236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   236,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,   145,   146,   147,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     234,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,   234,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,   145,   146,   147,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   234,    -1,    -1,   145,   146,   147,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,   113,   114,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
     145,   146,   147,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,   234,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,   234,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,
      -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   234,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,   145,   146,   147,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   234,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,   145,
     146,   147,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   113,   114,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,   145,   146,   147,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   234,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   234,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   234,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,   145,   146,   147,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     234,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
     234,    -1,    -1,   145,   146,   147,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,   113,   114,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,   145,   146,
     147,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,   234,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
      -1,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   234,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,   234,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,   145,   146,   147,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   234,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,   145,   146,   147,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     113,   114,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,
      -1,    -1,   145,   146,   147,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   234,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   234,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,   145,
     146,   147,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,   234,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,   145,   146,   147,   113,   114,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,   113,   114,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,   145,   146,   147,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
     234,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   234,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,
      -1,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
     234,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,   113,   114,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,   234,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     234,    -1,    -1,   145,   146,   147,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,   234,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,   145,   146,   147,   113,   114,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,   113,   114,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
     145,   146,   147,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,   113,   114,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,   234,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,
      -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   234,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,   113,   114,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,   145,   146,   147,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,   234,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,   145,
     146,   147,   113,   114,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,   113,   114,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,   145,   146,   147,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,   113,   114,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   234,    -1,    -1,   145,   146,   147,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,   234,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,   113,
     114,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   234,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
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
     234,   234,   234,   245,   234,   245,   245,   234,   234,   245,
     234,   234,   234,   234,   236,   234,   236,   236,   234,   234,
     236,   236,   235,   236,   241,   241,   241,   241,   236,   236,
     236,   261,   245,   245,   245,   236,   261,   245,   245,   234,
     263,   276,    71,    80,   245,   236,   245,   236,   236,    84,
     235,    84,   235,   235,    19,    70,    72,   242,   245,   245,
     245,     8,    68,   259,   245,   245,   245,   245,   234,   245,
     234,   234,   245,   245,   234,   245,   245,   245,   245,     7,
     234,   234,   245,   245,   261,    50,    49,    49,    49,   234,
     234,   234,   234,   236,   236,   234,   236,   236,   234,   236,
     245,   242,   243,    19,    82,   242,    19,   242,    19,    82,
     242,    19,   242,    19,   242,   245,   236,   245,   236,   236,
     241,    19,   236,   236,   236,   236,   235,   234,   245,   234,
     245,   245,   234,   234,   245,   234,   234,   234,   245,   245,
     234,   234,   236,    33,   244,   244,   244,   245,   245,   245,
     234,    19,    19,   241,   245,    78,   241,    78,   241,   245,
      78,   241,    78,   241,    78,    19,    82,   242,    19,   242,
      19,    82,   242,    19,   242,    19,   242,    72,   241,   261,
     245,   234,   245,   234,   234,   245,   245,   261,   261,   261,
     234,   234,   245,   245,   236,   236,   236,   236,   236,   236,
     245,    71,    78,    19,   242,    78,    78,    19,   242,    78,
      78,   241,   245,    78,   241,    78,   241,   245,    78,   241,
      78,   241,    78,    72,   236,   245,   245,   245,   234,   245,
     245,   234,   241,    78,   241,    78,    78,    19,   242,    78,
      78,    19,   242,    78,    78,   234,   234,   245,   234,   234,
     245,    78,    78,   241,    78,   241,    78,   245,   245,   234,
     245,   245,   234,    78,    78,   234,   234,   245,   234,   234,
     245,   245,   245,   245,   245,   234,   234,   245,   245,   234,
     234,   245,   245,   234,   234,   245,   245
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
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
       8,     8,     4,     2,     1,     2,     6,     2,     6,     6,
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


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

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

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

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

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

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
  case 2:
#line 90 "Grammar/DARIC.y"
            { (yyval.ast) = (yyvsp[0].ast); }
#line 4240 "src/parser/bison.cpp"
    break;

  case 3:
#line 94 "Grammar/DARIC.y"
           { ast_lines[yyfileno].push_front((yyvsp[0].ast)); (yyval.ast) = (yyvsp[0].ast); }
#line 4246 "src/parser/bison.cpp"
    break;

  case 4:
#line 95 "Grammar/DARIC.y"
                 { ast_lines[yyfileno].push_front((yyvsp[-1].ast)); (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4252 "src/parser/bison.cpp"
    break;

  case 5:
#line 99 "Grammar/DARIC.y"
                    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4258 "src/parser/bison.cpp"
    break;

  case 6:
#line 100 "Grammar/DARIC.y"
         { (yyval.ast) = NULL; }
#line 4264 "src/parser/bison.cpp"
    break;

  case 7:
#line 101 "Grammar/DARIC.y"
                                { (yyval.ast) = link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast)); }
#line 4270 "src/parser/bison.cpp"
    break;

  case 8:
#line 104 "Grammar/DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 4276 "src/parser/bison.cpp"
    break;

  case 9:
#line 105 "Grammar/DARIC.y"
                       { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4282 "src/parser/bison.cpp"
    break;

  case 10:
#line 109 "Grammar/DARIC.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 4288 "src/parser/bison.cpp"
    break;

  case 11:
#line 110 "Grammar/DARIC.y"
                              { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4294 "src/parser/bison.cpp"
    break;

  case 15:
#line 116 "Grammar/DARIC.y"
                              { (yyval.ast) = token1(CHAIN, (yyvsp[0].ast)); }
#line 4300 "src/parser/bison.cpp"
    break;

  case 16:
#line 117 "Grammar/DARIC.y"
                                                      { (yyval.ast) = token2(CHAIN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4306 "src/parser/bison.cpp"
    break;

  case 17:
#line 118 "Grammar/DARIC.y"
                                 { (yyval.ast) = token1(EXPECT, (yyvsp[0].ast)); }
#line 4312 "src/parser/bison.cpp"
    break;

  case 18:
#line 119 "Grammar/DARIC.y"
          { (yyval.ast) = token(END); }
#line 4318 "src/parser/bison.cpp"
    break;

  case 19:
#line 120 "Grammar/DARIC.y"
                { (yyval.ast) = token1(CALLPROC, string((yyvsp[0].v_string))); }
#line 4324 "src/parser/bison.cpp"
    break;

  case 20:
#line 121 "Grammar/DARIC.y"
                                        { (yyval.ast) = token2(CALLPROC, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4330 "src/parser/bison.cpp"
    break;

  case 21:
#line 122 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4336 "src/parser/bison.cpp"
    break;

  case 22:
#line 123 "Grammar/DARIC.y"
                                            { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4342 "src/parser/bison.cpp"
    break;

  case 23:
#line 124 "Grammar/DARIC.y"
                                              { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4348 "src/parser/bison.cpp"
    break;

  case 24:
#line 125 "Grammar/DARIC.y"
                           { (yyval.ast) = token1(DATA, (yyvsp[0].ast)); }
#line 4354 "src/parser/bison.cpp"
    break;

  case 25:
#line 126 "Grammar/DARIC.y"
                         { (yyval.ast) = token1(READ, (yyvsp[0].ast)); }
#line 4360 "src/parser/bison.cpp"
    break;

  case 26:
#line 127 "Grammar/DARIC.y"
              { (yyval.ast) = token(RESTORE); }
#line 4366 "src/parser/bison.cpp"
    break;

  case 27:
#line 128 "Grammar/DARIC.y"
             { (yyval.ast) = token(RETURN); }
#line 4372 "src/parser/bison.cpp"
    break;

  case 28:
#line 129 "Grammar/DARIC.y"
                        { (yyval.ast) = token1(RETURN_WITH_VALUE, (yyvsp[0].ast)); }
#line 4378 "src/parser/bison.cpp"
    break;

  case 29:
#line 130 "Grammar/DARIC.y"
              { (yyval.ast) = token(TRACEON); }
#line 4384 "src/parser/bison.cpp"
    break;

  case 30:
#line 131 "Grammar/DARIC.y"
               { (yyval.ast) = token(TRACEOFF); }
#line 4390 "src/parser/bison.cpp"
    break;

  case 31:
#line 132 "Grammar/DARIC.y"
                 { (yyval.ast) = token(BREAKPOINT); }
#line 4396 "src/parser/bison.cpp"
    break;

  case 32:
#line 134 "Grammar/DARIC.y"
                            { (yyval.ast) = token1(DIM, (yyvsp[0].ast)); }
#line 4402 "src/parser/bison.cpp"
    break;

  case 33:
#line 135 "Grammar/DARIC.y"
                                  { (yyval.ast) = token1(LOCALDIM, (yyvsp[0].ast)); }
#line 4408 "src/parser/bison.cpp"
    break;

  case 34:
#line 137 "Grammar/DARIC.y"
                                                     { (yyval.ast) = token2(BPUT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4414 "src/parser/bison.cpp"
    break;

  case 35:
#line 138 "Grammar/DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 4420 "src/parser/bison.cpp"
    break;

  case 36:
#line 139 "Grammar/DARIC.y"
                                                  { (yyval.ast) = token2(PTRA, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4426 "src/parser/bison.cpp"
    break;

  case 37:
#line 140 "Grammar/DARIC.y"
                               { (yyval.ast) = token1(CLOSE, (yyvsp[0].ast)); }
#line 4432 "src/parser/bison.cpp"
    break;

  case 38:
#line 141 "Grammar/DARIC.y"
                                                                    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(GLOBAL)); }
#line 4438 "src/parser/bison.cpp"
    break;

  case 39:
#line 142 "Grammar/DARIC.y"
                                                                          { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(LOCAL)); }
#line 4444 "src/parser/bison.cpp"
    break;

  case 40:
#line 144 "Grammar/DARIC.y"
                              { (yyval.ast) = token1(OSCLI, (yyvsp[0].ast)); }
#line 4450 "src/parser/bison.cpp"
    break;

  case 41:
#line 146 "Grammar/DARIC.y"
                        { (yyval.ast) = token1(GOSUB, integer((yyvsp[0].v_int))); }
#line 4456 "src/parser/bison.cpp"
    break;

  case 42:
#line 147 "Grammar/DARIC.y"
                       { (yyval.ast) = token1(GOTO, integer((yyvsp[0].v_int))); }
#line 4462 "src/parser/bison.cpp"
    break;

  case 43:
#line 149 "Grammar/DARIC.y"
                                   { (yyval.ast) = token1(INPUT_, (yyvsp[0].ast)); }
#line 4468 "src/parser/bison.cpp"
    break;

  case 44:
#line 150 "Grammar/DARIC.y"
                                                  { (yyval.ast) = token2(INPUT_NOQUESTIONMARK, string((yyvsp[-1].v_string)), (yyvsp[0].ast)); }
#line 4474 "src/parser/bison.cpp"
    break;

  case 45:
#line 151 "Grammar/DARIC.y"
                                                      { (yyval.ast) = token2(INPUT_, string((yyvsp[-2].v_string)), (yyvsp[0].ast)); }
#line 4480 "src/parser/bison.cpp"
    break;

  case 46:
#line 152 "Grammar/DARIC.y"
                                                                       { (yyval.ast) = token3(MOUSE, string((yyvsp[-4].v_string)), string((yyvsp[-2].v_string)), string((yyvsp[0].v_string)) ); }
#line 4486 "src/parser/bison.cpp"
    break;

  case 47:
#line 154 "Grammar/DARIC.y"
                                       { (yyval.ast) = token1(SINKEY, (yyvsp[-1].ast)); }
#line 4492 "src/parser/bison.cpp"
    break;

  case 48:
#line 155 "Grammar/DARIC.y"
                                        { (yyval.ast) = token1(SINKEYS, (yyvsp[-1].ast)); }
#line 4498 "src/parser/bison.cpp"
    break;

  case 49:
#line 156 "Grammar/DARIC.y"
          { (yyval.ast) = token(GET_S); }
#line 4504 "src/parser/bison.cpp"
    break;

  case 50:
#line 157 "Grammar/DARIC.y"
           { (yyval.ast) = token(GETS_S); }
#line 4510 "src/parser/bison.cpp"
    break;

  case 51:
#line 159 "Grammar/DARIC.y"
                               { (yyval.ast) = token2(IF, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4516 "src/parser/bison.cpp"
    break;

  case 52:
#line 160 "Grammar/DARIC.y"
                                             { (yyval.ast) = token3(IF, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4522 "src/parser/bison.cpp"
    break;

  case 53:
#line 161 "Grammar/DARIC.y"
                                          { (yyval.ast) = token2(IF, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4528 "src/parser/bison.cpp"
    break;

  case 54:
#line 162 "Grammar/DARIC.y"
                                                              { (yyval.ast) = token3(IF, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4534 "src/parser/bison.cpp"
    break;

  case 55:
#line 164 "Grammar/DARIC.y"
                                    { (yyval.ast) = token2(IF, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4540 "src/parser/bison.cpp"
    break;

  case 56:
#line 165 "Grammar/DARIC.y"
                                                    { (yyval.ast) = token3(IF, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4546 "src/parser/bison.cpp"
    break;

  case 57:
#line 166 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(IF, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4552 "src/parser/bison.cpp"
    break;

  case 58:
#line 167 "Grammar/DARIC.y"
                                                                   { (yyval.ast) = token3(IF, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4558 "src/parser/bison.cpp"
    break;

  case 59:
#line 169 "Grammar/DARIC.y"
                                             { (yyval.ast) = token2(REPEAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4564 "src/parser/bison.cpp"
    break;

  case 60:
#line 170 "Grammar/DARIC.y"
                              { (yyval.ast) = token2(REPEAT, NULL, (yyvsp[0].ast)); }
#line 4570 "src/parser/bison.cpp"
    break;

  case 61:
#line 171 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(WHILE, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4576 "src/parser/bison.cpp"
    break;

  case 62:
#line 173 "Grammar/DARIC.y"
                                                 { (yyval.ast) = token2(SWAP_I, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4582 "src/parser/bison.cpp"
    break;

  case 63:
#line 174 "Grammar/DARIC.y"
                                 { (yyval.ast) = token2(SWAP_F, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4588 "src/parser/bison.cpp"
    break;

  case 64:
#line 175 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(SWAP_S, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4594 "src/parser/bison.cpp"
    break;

  case 65:
#line 178 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4600 "src/parser/bison.cpp"
    break;

  case 66:
#line 179 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4606 "src/parser/bison.cpp"
    break;

  case 67:
#line 180 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4612 "src/parser/bison.cpp"
    break;

  case 68:
#line 181 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4618 "src/parser/bison.cpp"
    break;

  case 69:
#line 182 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4624 "src/parser/bison.cpp"
    break;

  case 70:
#line 183 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4630 "src/parser/bison.cpp"
    break;

  case 71:
#line 184 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4636 "src/parser/bison.cpp"
    break;

  case 72:
#line 185 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4642 "src/parser/bison.cpp"
    break;

  case 73:
#line 186 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4648 "src/parser/bison.cpp"
    break;

  case 74:
#line 187 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4654 "src/parser/bison.cpp"
    break;

  case 75:
#line 188 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4660 "src/parser/bison.cpp"
    break;

  case 76:
#line 189 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4666 "src/parser/bison.cpp"
    break;

  case 77:
#line 192 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4672 "src/parser/bison.cpp"
    break;

  case 78:
#line 193 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4678 "src/parser/bison.cpp"
    break;

  case 79:
#line 194 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4684 "src/parser/bison.cpp"
    break;

  case 80:
#line 195 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4690 "src/parser/bison.cpp"
    break;

  case 81:
#line 196 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4696 "src/parser/bison.cpp"
    break;

  case 82:
#line 197 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4702 "src/parser/bison.cpp"
    break;

  case 83:
#line 198 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4708 "src/parser/bison.cpp"
    break;

  case 84:
#line 199 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4714 "src/parser/bison.cpp"
    break;

  case 85:
#line 200 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4720 "src/parser/bison.cpp"
    break;

  case 86:
#line 201 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4726 "src/parser/bison.cpp"
    break;

  case 87:
#line 202 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4732 "src/parser/bison.cpp"
    break;

  case 88:
#line 203 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4738 "src/parser/bison.cpp"
    break;

  case 89:
#line 204 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4744 "src/parser/bison.cpp"
    break;

  case 90:
#line 205 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4750 "src/parser/bison.cpp"
    break;

  case 91:
#line 206 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4756 "src/parser/bison.cpp"
    break;

  case 92:
#line 207 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4762 "src/parser/bison.cpp"
    break;

  case 93:
#line 209 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(CASE, (yyvsp[-4].ast), (yyvsp[-1].ast));  }
#line 4768 "src/parser/bison.cpp"
    break;

  case 94:
#line 210 "Grammar/DARIC.y"
                                                                      { (yyval.ast) = token3(CASE, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-2].ast));  }
#line 4774 "src/parser/bison.cpp"
    break;

  case 95:
#line 212 "Grammar/DARIC.y"
            { (yyval.ast) = token(PRINT); }
#line 4780 "src/parser/bison.cpp"
    break;

  case 96:
#line 213 "Grammar/DARIC.y"
                                  { (yyval.ast) = token1(PRINT, (yyvsp[0].ast)); }
#line 4786 "src/parser/bison.cpp"
    break;

  case 97:
#line 215 "Grammar/DARIC.y"
                  { (yyval.ast) = token(RENDERFRAME); }
#line 4792 "src/parser/bison.cpp"
    break;

  case 98:
#line 218 "Grammar/DARIC.y"
                                                      { (yyval.ast) = token6(CREATEVERTEX, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4798 "src/parser/bison.cpp"
    break;

  case 99:
#line 221 "Grammar/DARIC.y"
                                                  { (yyval.ast) = token6(CREATETRIANGLE, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4804 "src/parser/bison.cpp"
    break;

  case 100:
#line 222 "Grammar/DARIC.y"
                                                                                                        { (yyval.ast) = token4(TRANSLATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4810 "src/parser/bison.cpp"
    break;

  case 101:
#line 223 "Grammar/DARIC.y"
                                                                                                      { (yyval.ast) = token4(ROTATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4816 "src/parser/bison.cpp"
    break;

  case 102:
#line 224 "Grammar/DARIC.y"
                                                      { (yyval.ast) = token2(SCALE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4822 "src/parser/bison.cpp"
    break;

  case 103:
#line 225 "Grammar/DARIC.y"
                                      { (yyval.ast) = token1(DELETEOBJECT, (yyvsp[0].ast)); }
#line 4828 "src/parser/bison.cpp"
    break;

  case 104:
#line 227 "Grammar/DARIC.y"
          { (yyval.ast) = token(CLS); }
#line 4834 "src/parser/bison.cpp"
    break;

  case 105:
#line 228 "Grammar/DARIC.y"
                                { (yyval.ast) = token1(COLOUR, (yyvsp[0].ast)); }
#line 4840 "src/parser/bison.cpp"
    break;

  case 106:
#line 229 "Grammar/DARIC.y"
                                                                              { (yyval.ast) = token3(COLOUR, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4846 "src/parser/bison.cpp"
    break;

  case 107:
#line 230 "Grammar/DARIC.y"
                                  { (yyval.ast) = token1(COLOURBG, (yyvsp[0].ast)); }
#line 4852 "src/parser/bison.cpp"
    break;

  case 108:
#line 231 "Grammar/DARIC.y"
                                                                                { (yyval.ast) = token3(COLOURBG, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4858 "src/parser/bison.cpp"
    break;

  case 109:
#line 232 "Grammar/DARIC.y"
                                                                                { (yyval.ast) = token3(GRAPHICS, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4864 "src/parser/bison.cpp"
    break;

  case 110:
#line 233 "Grammar/DARIC.y"
               { (yyval.ast) = token(GRAPHICS); }
#line 4870 "src/parser/bison.cpp"
    break;

  case 111:
#line 234 "Grammar/DARIC.y"
           { (yyval.ast) = token(FLIP); }
#line 4876 "src/parser/bison.cpp"
    break;

  case 112:
#line 235 "Grammar/DARIC.y"
                                                                              { (yyval.ast) = token3(CIRCLE, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4882 "src/parser/bison.cpp"
    break;

  case 113:
#line 236 "Grammar/DARIC.y"
                                                                                   { (yyval.ast) = token3(CIRCLEFILL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4888 "src/parser/bison.cpp"
    break;

  case 114:
#line 237 "Grammar/DARIC.y"
                                                                                                   { (yyval.ast) = token4(LINE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4894 "src/parser/bison.cpp"
    break;

  case 115:
#line 238 "Grammar/DARIC.y"
                                                                                                        { (yyval.ast) = token4(RECTANGLE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4900 "src/parser/bison.cpp"
    break;

  case 116:
#line 239 "Grammar/DARIC.y"
                                                                                                             { (yyval.ast) = token4(RECTANGLEFILL, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4906 "src/parser/bison.cpp"
    break;

  case 117:
#line 240 "Grammar/DARIC.y"
                                                                                                                                                     { (yyval.ast) = token6(TRIANGLE, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4912 "src/parser/bison.cpp"
    break;

  case 118:
#line 241 "Grammar/DARIC.y"
                                                                                                                                                          { (yyval.ast) = token6(TRIANGLEFILL, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4918 "src/parser/bison.cpp"
    break;

  case 119:
#line 244 "Grammar/DARIC.y"
                                                                                         { (yyval.ast) = token9(TRIANGLESHADED, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4924 "src/parser/bison.cpp"
    break;

  case 120:
#line 245 "Grammar/DARIC.y"
                                                     { (yyval.ast) = token2(PLOT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4930 "src/parser/bison.cpp"
    break;

  case 121:
#line 246 "Grammar/DARIC.y"
                                                                                                     { (yyval.ast) = token4(CLIPON, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4936 "src/parser/bison.cpp"
    break;

  case 122:
#line 247 "Grammar/DARIC.y"
              { (yyval.ast) = token(CLIPOFF); }
#line 4942 "src/parser/bison.cpp"
    break;

  case 123:
#line 248 "Grammar/DARIC.y"
                                                                                                  { (yyval.ast) = token4(TEXT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4948 "src/parser/bison.cpp"
    break;

  case 124:
#line 249 "Grammar/DARIC.y"
                                                                                                       { (yyval.ast) = token4(TEXTRIGHT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4954 "src/parser/bison.cpp"
    break;

  case 125:
#line 250 "Grammar/DARIC.y"
                                                                                                        { (yyval.ast) = token4(TEXTCENTRE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4960 "src/parser/bison.cpp"
    break;

  case 126:
#line 251 "Grammar/DARIC.y"
              { (yyval.ast) = token(SHOWFPS); }
#line 4966 "src/parser/bison.cpp"
    break;

  case 127:
#line 255 "Grammar/DARIC.y"
                  { (yyval.ast) = integer((yyvsp[0].v_int)); }
#line 4972 "src/parser/bison.cpp"
    break;

  case 128:
#line 256 "Grammar/DARIC.y"
                                  { (yyval.ast) = integer(-(yyvsp[0].v_int)); }
#line 4978 "src/parser/bison.cpp"
    break;

  case 129:
#line 257 "Grammar/DARIC.y"
                   { (yyval.ast) = real((yyvsp[0].v_real)); }
#line 4984 "src/parser/bison.cpp"
    break;

  case 130:
#line 258 "Grammar/DARIC.y"
                                   { (yyval.ast) = real(-(yyvsp[0].v_real)); }
#line 4990 "src/parser/bison.cpp"
    break;

  case 131:
#line 262 "Grammar/DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 4996 "src/parser/bison.cpp"
    break;

  case 132:
#line 263 "Grammar/DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5002 "src/parser/bison.cpp"
    break;

  case 133:
#line 264 "Grammar/DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5008 "src/parser/bison.cpp"
    break;

  case 134:
#line 265 "Grammar/DARIC.y"
                                 { (yyval.ast) = (yyvsp[-1].ast); }
#line 5014 "src/parser/bison.cpp"
    break;

  case 135:
#line 266 "Grammar/DARIC.y"
                                        { (yyval.ast) = token1(FLOAT_, (yyvsp[-1].ast)); }
#line 5020 "src/parser/bison.cpp"
    break;

  case 136:
#line 267 "Grammar/DARIC.y"
                                      { (yyval.ast) = token1(INT_, (yyvsp[-1].ast)); }
#line 5026 "src/parser/bison.cpp"
    break;

  case 137:
#line 268 "Grammar/DARIC.y"
                             { (yyval.ast) = token2(MINUS, integer(0), (yyvsp[0].ast)); }
#line 5032 "src/parser/bison.cpp"
    break;

  case 138:
#line 269 "Grammar/DARIC.y"
                          { (yyval.ast) = token2(MINUS, real(0.0), (yyvsp[0].ast)); }
#line 5038 "src/parser/bison.cpp"
    break;

  case 139:
#line 270 "Grammar/DARIC.y"
                                                 { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5044 "src/parser/bison.cpp"
    break;

  case 140:
#line 271 "Grammar/DARIC.y"
                                                  { (yyval.ast) = token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5050 "src/parser/bison.cpp"
    break;

  case 141:
#line 272 "Grammar/DARIC.y"
                                                     { (yyval.ast) = token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5056 "src/parser/bison.cpp"
    break;

  case 142:
#line 273 "Grammar/DARIC.y"
                                                   { (yyval.ast) = token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5062 "src/parser/bison.cpp"
    break;

  case 143:
#line 274 "Grammar/DARIC.y"
                                                           { (yyval.ast) = token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5068 "src/parser/bison.cpp"
    break;

  case 144:
#line 275 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5074 "src/parser/bison.cpp"
    break;

  case 145:
#line 276 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5080 "src/parser/bison.cpp"
    break;

  case 146:
#line 277 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5086 "src/parser/bison.cpp"
    break;

  case 147:
#line 278 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5092 "src/parser/bison.cpp"
    break;

  case 148:
#line 279 "Grammar/DARIC.y"
                                              { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5098 "src/parser/bison.cpp"
    break;

  case 149:
#line 280 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5104 "src/parser/bison.cpp"
    break;

  case 150:
#line 281 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5110 "src/parser/bison.cpp"
    break;

  case 151:
#line 282 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5116 "src/parser/bison.cpp"
    break;

  case 152:
#line 283 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5122 "src/parser/bison.cpp"
    break;

  case 153:
#line 284 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5128 "src/parser/bison.cpp"
    break;

  case 154:
#line 285 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5134 "src/parser/bison.cpp"
    break;

  case 155:
#line 286 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5140 "src/parser/bison.cpp"
    break;

  case 156:
#line 287 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(EOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5146 "src/parser/bison.cpp"
    break;

  case 157:
#line 289 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5152 "src/parser/bison.cpp"
    break;

  case 158:
#line 290 "Grammar/DARIC.y"
                                            { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5158 "src/parser/bison.cpp"
    break;

  case 159:
#line 292 "Grammar/DARIC.y"
                                              { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::REAL), (yyvsp[-1].ast)); }
#line 5164 "src/parser/bison.cpp"
    break;

  case 160:
#line 293 "Grammar/DARIC.y"
                                                      { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::INTEGER), (yyvsp[-1].ast)); }
#line 5170 "src/parser/bison.cpp"
    break;

  case 161:
#line 294 "Grammar/DARIC.y"
                                                     { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::STRING), (yyvsp[-1].ast)); }
#line 5176 "src/parser/bison.cpp"
    break;

  case 162:
#line 296 "Grammar/DARIC.y"
                             { (yyval.ast) = token1(PTR, (yyvsp[0].ast)); }
#line 5182 "src/parser/bison.cpp"
    break;

  case 163:
#line 298 "Grammar/DARIC.y"
          { (yyval.ast) = token(GET); }
#line 5188 "src/parser/bison.cpp"
    break;

  case 164:
#line 299 "Grammar/DARIC.y"
                                       { (yyval.ast) = token1(INKEY, (yyvsp[-1].ast)); }
#line 5194 "src/parser/bison.cpp"
    break;

  case 165:
#line 301 "Grammar/DARIC.y"
               { (yyval.ast) = integer(1); }
#line 5200 "src/parser/bison.cpp"
    break;

  case 166:
#line 302 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5206 "src/parser/bison.cpp"
    break;

  case 167:
#line 303 "Grammar/DARIC.y"
           { (yyval.ast) = token(TIME); }
#line 5212 "src/parser/bison.cpp"
    break;

  case 168:
#line 305 "Grammar/DARIC.y"
                        { (yyval.ast) = integer(0); }
#line 5218 "src/parser/bison.cpp"
    break;

  case 169:
#line 306 "Grammar/DARIC.y"
                        { (yyval.ast) = integer(1); }
#line 5224 "src/parser/bison.cpp"
    break;

  case 170:
#line 307 "Grammar/DARIC.y"
                        { (yyval.ast) = integer(2); }
#line 5230 "src/parser/bison.cpp"
    break;

  case 171:
#line 308 "Grammar/DARIC.y"
                        { (yyval.ast) = integer(3); }
#line 5236 "src/parser/bison.cpp"
    break;

  case 172:
#line 310 "Grammar/DARIC.y"
                                                  { (yyval.ast) = token2(CREATESHAPE, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 5242 "src/parser/bison.cpp"
    break;

  case 173:
#line 315 "Grammar/DARIC.y"
                                                  { (yyval.ast) = token9(CREATEOBJECT, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5248 "src/parser/bison.cpp"
    break;

  case 174:
#line 317 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0xFF0000); }
#line 5254 "src/parser/bison.cpp"
    break;

  case 175:
#line 318 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0x00FF00); }
#line 5260 "src/parser/bison.cpp"
    break;

  case 176:
#line 319 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0xFFFF00); }
#line 5266 "src/parser/bison.cpp"
    break;

  case 177:
#line 320 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0x0000FF); }
#line 5272 "src/parser/bison.cpp"
    break;

  case 178:
#line 321 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0xFF00FF); }
#line 5278 "src/parser/bison.cpp"
    break;

  case 179:
#line 322 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0x00FFFF); }
#line 5284 "src/parser/bison.cpp"
    break;

  case 180:
#line 323 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0xFFFFFF); }
#line 5290 "src/parser/bison.cpp"
    break;

  case 181:
#line 324 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5296 "src/parser/bison.cpp"
    break;

  case 182:
#line 325 "Grammar/DARIC.y"
                { (yyval.ast) = integer(-1); }
#line 5302 "src/parser/bison.cpp"
    break;

  case 183:
#line 326 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token3(COLOUREXP, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5308 "src/parser/bison.cpp"
    break;

  case 184:
#line 327 "Grammar/DARIC.y"
                                                               { (yyval.ast) = token2(POINT_, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5314 "src/parser/bison.cpp"
    break;

  case 185:
#line 328 "Grammar/DARIC.y"
                  { (yyval.ast) = token(SCREENWIDTH); }
#line 5320 "src/parser/bison.cpp"
    break;

  case 186:
#line 329 "Grammar/DARIC.y"
                   { (yyval.ast) = token(SCREENHEIGHT); }
#line 5326 "src/parser/bison.cpp"
    break;

  case 187:
#line 330 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(LOADTYPEFACE, (yyvsp[0].ast)); }
#line 5332 "src/parser/bison.cpp"
    break;

  case 188:
#line 331 "Grammar/DARIC.y"
                                                           { (yyval.ast) = token2(CREATEFONT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5338 "src/parser/bison.cpp"
    break;

  case 189:
#line 332 "Grammar/DARIC.y"
             { (yyval.ast) = integer(0); }
#line 5344 "src/parser/bison.cpp"
    break;

  case 190:
#line 333 "Grammar/DARIC.y"
             { (yyval.ast) = integer(1); }
#line 5350 "src/parser/bison.cpp"
    break;

  case 191:
#line 334 "Grammar/DARIC.y"
             { (yyval.ast) = integer(2); }
#line 5356 "src/parser/bison.cpp"
    break;

  case 192:
#line 335 "Grammar/DARIC.y"
             { (yyval.ast) = integer(3); }
#line 5362 "src/parser/bison.cpp"
    break;

  case 193:
#line 336 "Grammar/DARIC.y"
             { (yyval.ast) = integer(4); }
#line 5368 "src/parser/bison.cpp"
    break;

  case 194:
#line 337 "Grammar/DARIC.y"
             { (yyval.ast) = integer(5); }
#line 5374 "src/parser/bison.cpp"
    break;

  case 195:
#line 338 "Grammar/DARIC.y"
             { (yyval.ast) = integer(6); }
#line 5380 "src/parser/bison.cpp"
    break;

  case 196:
#line 339 "Grammar/DARIC.y"
             { (yyval.ast) = integer(7); }
#line 5386 "src/parser/bison.cpp"
    break;

  case 197:
#line 340 "Grammar/DARIC.y"
              { (yyval.ast) = integer(8); }
#line 5392 "src/parser/bison.cpp"
    break;

  case 198:
#line 341 "Grammar/DARIC.y"
             { (yyval.ast) = integer(9); }
#line 5398 "src/parser/bison.cpp"
    break;

  case 199:
#line 342 "Grammar/DARIC.y"
             { (yyval.ast) = integer(10); }
#line 5404 "src/parser/bison.cpp"
    break;

  case 200:
#line 343 "Grammar/DARIC.y"
             { (yyval.ast) = integer(11); }
#line 5410 "src/parser/bison.cpp"
    break;

  case 201:
#line 344 "Grammar/DARIC.y"
             { (yyval.ast) = integer(12); }
#line 5416 "src/parser/bison.cpp"
    break;

  case 202:
#line 345 "Grammar/DARIC.y"
             { (yyval.ast) = integer(13); }
#line 5422 "src/parser/bison.cpp"
    break;

  case 203:
#line 346 "Grammar/DARIC.y"
             { (yyval.ast) = integer(14); }
#line 5428 "src/parser/bison.cpp"
    break;

  case 204:
#line 347 "Grammar/DARIC.y"
             { (yyval.ast) = integer(15); }
#line 5434 "src/parser/bison.cpp"
    break;

  case 205:
#line 348 "Grammar/DARIC.y"
             { (yyval.ast) = integer(16); }
#line 5440 "src/parser/bison.cpp"
    break;

  case 206:
#line 349 "Grammar/DARIC.y"
              { (yyval.ast) = integer(17); }
#line 5446 "src/parser/bison.cpp"
    break;

  case 207:
#line 350 "Grammar/DARIC.y"
                              { (yyval.ast) = token1(EOFH, (yyvsp[0].ast)); }
#line 5452 "src/parser/bison.cpp"
    break;

  case 208:
#line 351 "Grammar/DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 5458 "src/parser/bison.cpp"
    break;

  case 209:
#line 352 "Grammar/DARIC.y"
                                       { (yyval.ast) = token1(OPENIN, (yyvsp[-1].ast)); }
#line 5464 "src/parser/bison.cpp"
    break;

  case 210:
#line 353 "Grammar/DARIC.y"
                                        { (yyval.ast) = token1(OPENOUT, (yyvsp[-1].ast)); }
#line 5470 "src/parser/bison.cpp"
    break;

  case 211:
#line 354 "Grammar/DARIC.y"
                                       { (yyval.ast) = token1(OPENUP, (yyvsp[-1].ast)); }
#line 5476 "src/parser/bison.cpp"
    break;

  case 212:
#line 356 "Grammar/DARIC.y"
          { (yyval.ast) = token(RND); }
#line 5482 "src/parser/bison.cpp"
    break;

  case 213:
#line 357 "Grammar/DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(0)); }
#line 5488 "src/parser/bison.cpp"
    break;

  case 214:
#line 358 "Grammar/DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(1)); }
#line 5494 "src/parser/bison.cpp"
    break;

  case 215:
#line 359 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(RNDRANGE, (yyvsp[-1].ast)); }
#line 5500 "src/parser/bison.cpp"
    break;

  case 216:
#line 361 "Grammar/DARIC.y"
         { (yyval.ast) = token(PI); }
#line 5506 "src/parser/bison.cpp"
    break;

  case 217:
#line 362 "Grammar/DARIC.y"
                             { (yyval.ast) = token1(NOT, (yyvsp[0].ast)); }
#line 5512 "src/parser/bison.cpp"
    break;

  case 218:
#line 363 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(SQR, (yyvsp[-1].ast)); }
#line 5518 "src/parser/bison.cpp"
    break;

  case 219:
#line 364 "Grammar/DARIC.y"
                                    { (yyval.ast) = token1(LN, (yyvsp[-1].ast)); }
#line 5524 "src/parser/bison.cpp"
    break;

  case 220:
#line 365 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(LOG, (yyvsp[-1].ast)); }
#line 5530 "src/parser/bison.cpp"
    break;

  case 221:
#line 366 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(EXP, (yyvsp[-1].ast)); }
#line 5536 "src/parser/bison.cpp"
    break;

  case 222:
#line 367 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(ATN, (yyvsp[-1].ast)); }
#line 5542 "src/parser/bison.cpp"
    break;

  case 223:
#line 368 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(TAN, (yyvsp[-1].ast)); }
#line 5548 "src/parser/bison.cpp"
    break;

  case 224:
#line 369 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(COS, (yyvsp[-1].ast)); }
#line 5554 "src/parser/bison.cpp"
    break;

  case 225:
#line 370 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(SIN, (yyvsp[-1].ast)); }
#line 5560 "src/parser/bison.cpp"
    break;

  case 226:
#line 371 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(ABS, (yyvsp[-1].ast)); }
#line 5566 "src/parser/bison.cpp"
    break;

  case 227:
#line 372 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(ACS, (yyvsp[-1].ast)); }
#line 5572 "src/parser/bison.cpp"
    break;

  case 228:
#line 373 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(ASN, (yyvsp[-1].ast)); }
#line 5578 "src/parser/bison.cpp"
    break;

  case 229:
#line 374 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(DEG, (yyvsp[-1].ast)); }
#line 5584 "src/parser/bison.cpp"
    break;

  case 230:
#line 375 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(RAD, (yyvsp[-1].ast)); }
#line 5590 "src/parser/bison.cpp"
    break;

  case 231:
#line 376 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(SGN, (yyvsp[-1].ast)); }
#line 5596 "src/parser/bison.cpp"
    break;

  case 232:
#line 378 "Grammar/DARIC.y"
                                    { (yyval.ast) = token1(ASC, (yyvsp[-1].ast)); }
#line 5602 "src/parser/bison.cpp"
    break;

  case 233:
#line 379 "Grammar/DARIC.y"
                                    { (yyval.ast) = token1(LEN, (yyvsp[-1].ast)); }
#line 5608 "src/parser/bison.cpp"
    break;

  case 234:
#line 380 "Grammar/DARIC.y"
                                                            { (yyval.ast) = token3(INSTR, (yyvsp[-3].ast), (yyvsp[-1].ast), integer(1)); }
#line 5614 "src/parser/bison.cpp"
    break;

  case 235:
#line 381 "Grammar/DARIC.y"
                                                                                   { (yyval.ast) = token3(INSTR, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5620 "src/parser/bison.cpp"
    break;

  case 236:
#line 382 "Grammar/DARIC.y"
                                    { (yyval.ast) = token1(VAL, (yyvsp[-1].ast)); }
#line 5626 "src/parser/bison.cpp"
    break;

  case 237:
#line 386 "Grammar/DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5632 "src/parser/bison.cpp"
    break;

  case 238:
#line 387 "Grammar/DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5638 "src/parser/bison.cpp"
    break;

  case 239:
#line 388 "Grammar/DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5644 "src/parser/bison.cpp"
    break;

  case 240:
#line 389 "Grammar/DARIC.y"
                                     { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5650 "src/parser/bison.cpp"
    break;

  case 241:
#line 390 "Grammar/DARIC.y"
                                                                { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5656 "src/parser/bison.cpp"
    break;

  case 242:
#line 394 "Grammar/DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 5662 "src/parser/bison.cpp"
    break;

  case 243:
#line 395 "Grammar/DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5668 "src/parser/bison.cpp"
    break;

  case 244:
#line 396 "Grammar/DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5674 "src/parser/bison.cpp"
    break;

  case 245:
#line 397 "Grammar/DARIC.y"
                             { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5680 "src/parser/bison.cpp"
    break;

  case 246:
#line 398 "Grammar/DARIC.y"
                                                        { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5686 "src/parser/bison.cpp"
    break;

  case 247:
#line 402 "Grammar/DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5692 "src/parser/bison.cpp"
    break;

  case 248:
#line 403 "Grammar/DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5698 "src/parser/bison.cpp"
    break;

  case 249:
#line 407 "Grammar/DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 5704 "src/parser/bison.cpp"
    break;

  case 250:
#line 408 "Grammar/DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5710 "src/parser/bison.cpp"
    break;

  case 251:
#line 409 "Grammar/DARIC.y"
                                                                        { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5716 "src/parser/bison.cpp"
    break;

  case 252:
#line 410 "Grammar/DARIC.y"
                                                               { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5722 "src/parser/bison.cpp"
    break;

  case 253:
#line 414 "Grammar/DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5728 "src/parser/bison.cpp"
    break;

  case 254:
#line 415 "Grammar/DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 5734 "src/parser/bison.cpp"
    break;

  case 255:
#line 419 "Grammar/DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 5740 "src/parser/bison.cpp"
    break;

  case 256:
#line 420 "Grammar/DARIC.y"
                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5746 "src/parser/bison.cpp"
    break;

  case 257:
#line 424 "Grammar/DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5752 "src/parser/bison.cpp"
    break;

  case 258:
#line 425 "Grammar/DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 5758 "src/parser/bison.cpp"
    break;

  case 259:
#line 426 "Grammar/DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 5764 "src/parser/bison.cpp"
    break;

  case 260:
#line 430 "Grammar/DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 5770 "src/parser/bison.cpp"
    break;

  case 261:
#line 431 "Grammar/DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5776 "src/parser/bison.cpp"
    break;

  case 262:
#line 435 "Grammar/DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5782 "src/parser/bison.cpp"
    break;

  case 263:
#line 436 "Grammar/DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5788 "src/parser/bison.cpp"
    break;

  case 264:
#line 437 "Grammar/DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5794 "src/parser/bison.cpp"
    break;

  case 265:
#line 438 "Grammar/DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5800 "src/parser/bison.cpp"
    break;

  case 266:
#line 439 "Grammar/DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5806 "src/parser/bison.cpp"
    break;

  case 267:
#line 440 "Grammar/DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5812 "src/parser/bison.cpp"
    break;

  case 268:
#line 441 "Grammar/DARIC.y"
                                                            { (yyval.ast) = typevariable1d((yyvsp[-5].v_string), (yyvsp[-1].v_string), (yyvsp[-3].ast), Type::TYPE_ARRAY); }
#line 5818 "src/parser/bison.cpp"
    break;

  case 269:
#line 445 "Grammar/DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 5824 "src/parser/bison.cpp"
    break;

  case 270:
#line 446 "Grammar/DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5830 "src/parser/bison.cpp"
    break;

  case 271:
#line 450 "Grammar/DARIC.y"
                    { (yyval.ast) = variable((yyvsp[0].v_string), Type::TYPE); }
#line 5836 "src/parser/bison.cpp"
    break;

  case 272:
#line 451 "Grammar/DARIC.y"
                                               { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::TYPE_ARRAY); }
#line 5842 "src/parser/bison.cpp"
    break;

  case 273:
#line 455 "Grammar/DARIC.y"
                                            { (yyval.ast) = token2(TYPE_, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5848 "src/parser/bison.cpp"
    break;

  case 274:
#line 459 "Grammar/DARIC.y"
                     { (yyval.ast) = token1(FIELD, (yyvsp[0].ast)); }
#line 5854 "src/parser/bison.cpp"
    break;

  case 275:
#line 463 "Grammar/DARIC.y"
              { (yyval.ast) = (yyvsp[-1].ast); }
#line 5860 "src/parser/bison.cpp"
    break;

  case 276:
#line 464 "Grammar/DARIC.y"
                          { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5866 "src/parser/bison.cpp"
    break;

  case 277:
#line 468 "Grammar/DARIC.y"
                     { (yyval.ast) = string((yyvsp[0].v_string)); }
#line 5872 "src/parser/bison.cpp"
    break;

  case 278:
#line 472 "Grammar/DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 5878 "src/parser/bison.cpp"
    break;

  case 279:
#line 473 "Grammar/DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 5884 "src/parser/bison.cpp"
    break;

  case 280:
#line 474 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5890 "src/parser/bison.cpp"
    break;

  case 281:
#line 475 "Grammar/DARIC.y"
                                            { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5896 "src/parser/bison.cpp"
    break;

  case 282:
#line 476 "Grammar/DARIC.y"
                                             { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5902 "src/parser/bison.cpp"
    break;

  case 283:
#line 477 "Grammar/DARIC.y"
                                             { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5908 "src/parser/bison.cpp"
    break;

  case 284:
#line 478 "Grammar/DARIC.y"
                                             { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5914 "src/parser/bison.cpp"
    break;

  case 285:
#line 479 "Grammar/DARIC.y"
                                             { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5920 "src/parser/bison.cpp"
    break;

  case 286:
#line 480 "Grammar/DARIC.y"
                                             { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5926 "src/parser/bison.cpp"
    break;

  case 287:
#line 482 "Grammar/DARIC.y"
                               { (yyval.ast) = token1(GETSH, (yyvsp[0].ast)); }
#line 5932 "src/parser/bison.cpp"
    break;

  case 288:
#line 484 "Grammar/DARIC.y"
                                              { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5938 "src/parser/bison.cpp"
    break;

  case 289:
#line 486 "Grammar/DARIC.y"
           { (yyval.ast) = token(GETS); }
#line 5944 "src/parser/bison.cpp"
    break;

  case 290:
#line 487 "Grammar/DARIC.y"
                                        { (yyval.ast) = token1(INKEYS, (yyvsp[-1].ast)); }
#line 5950 "src/parser/bison.cpp"
    break;

  case 291:
#line 489 "Grammar/DARIC.y"
            { (yyval.ast) = token(TIMES); }
#line 5956 "src/parser/bison.cpp"
    break;

  case 292:
#line 490 "Grammar/DARIC.y"
                                      { (yyval.ast) = token1(STRS, (yyvsp[-1].ast)); }
#line 5962 "src/parser/bison.cpp"
    break;

  case 293:
#line 491 "Grammar/DARIC.y"
                                            { (yyval.ast) = token1(STRSHEX, (yyvsp[-1].ast)); }
#line 5968 "src/parser/bison.cpp"
    break;

  case 294:
#line 492 "Grammar/DARIC.y"
                                                               { (yyval.ast) = token2(STRINGS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5974 "src/parser/bison.cpp"
    break;

  case 295:
#line 493 "Grammar/DARIC.y"
                                      { (yyval.ast) = token1(CHRS, (yyvsp[-1].ast)); }
#line 5980 "src/parser/bison.cpp"
    break;

  case 296:
#line 494 "Grammar/DARIC.y"
                                                             { (yyval.ast) = token2(LEFTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5986 "src/parser/bison.cpp"
    break;

  case 297:
#line 495 "Grammar/DARIC.y"
                                                                                   { (yyval.ast) = token3(MIDS, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5992 "src/parser/bison.cpp"
    break;

  case 298:
#line 496 "Grammar/DARIC.y"
                                                              { (yyval.ast) = token2(RIGHTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5998 "src/parser/bison.cpp"
    break;

  case 299:
#line 500 "Grammar/DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6004 "src/parser/bison.cpp"
    break;

  case 300:
#line 501 "Grammar/DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6010 "src/parser/bison.cpp"
    break;

  case 301:
#line 505 "Grammar/DARIC.y"
                     { (yyval.ast) = NULL; }
#line 6016 "src/parser/bison.cpp"
    break;

  case 302:
#line 506 "Grammar/DARIC.y"
                 { (yyval.ast) = (yyvsp[0].ast); }
#line 6022 "src/parser/bison.cpp"
    break;

  case 303:
#line 507 "Grammar/DARIC.y"
                                     { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6028 "src/parser/bison.cpp"
    break;

  case 304:
#line 511 "Grammar/DARIC.y"
                                            { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6034 "src/parser/bison.cpp"
    break;

  case 305:
#line 512 "Grammar/DARIC.y"
                                          { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6040 "src/parser/bison.cpp"
    break;

  case 306:
#line 513 "Grammar/DARIC.y"
                                 { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6046 "src/parser/bison.cpp"
    break;

  case 307:
#line 514 "Grammar/DARIC.y"
                                          { (yyval.ast) = assignment(link((yyvsp[-3].ast), (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 6052 "src/parser/bison.cpp"
    break;

  case 308:
#line 518 "Grammar/DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6058 "src/parser/bison.cpp"
    break;

  case 309:
#line 519 "Grammar/DARIC.y"
                                            { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6064 "src/parser/bison.cpp"
    break;

  case 310:
#line 523 "Grammar/DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6070 "src/parser/bison.cpp"
    break;

  case 311:
#line 524 "Grammar/DARIC.y"
                            { (yyval.ast) = token1(LOCAL, (yyvsp[0].ast)); }
#line 6076 "src/parser/bison.cpp"
    break;

  case 312:
#line 525 "Grammar/DARIC.y"
                             { (yyval.ast) = token1(GLOBAL, (yyvsp[0].ast)); }
#line 6082 "src/parser/bison.cpp"
    break;

  case 313:
#line 526 "Grammar/DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6088 "src/parser/bison.cpp"
    break;

  case 314:
#line 527 "Grammar/DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6094 "src/parser/bison.cpp"
    break;

  case 315:
#line 528 "Grammar/DARIC.y"
                                                 { (yyval.ast) = assignment((yyvsp[-2].ast), token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6100 "src/parser/bison.cpp"
    break;

  case 316:
#line 529 "Grammar/DARIC.y"
                                                  { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6106 "src/parser/bison.cpp"
    break;

  case 317:
#line 530 "Grammar/DARIC.y"
                                                     { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6112 "src/parser/bison.cpp"
    break;

  case 318:
#line 531 "Grammar/DARIC.y"
                                                   { (yyval.ast) = assignment((yyvsp[-2].ast), token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6118 "src/parser/bison.cpp"
    break;

  case 319:
#line 532 "Grammar/DARIC.y"
                                                          { (yyval.ast) = assignment((yyvsp[-2].ast), token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6124 "src/parser/bison.cpp"
    break;

  case 320:
#line 536 "Grammar/DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6130 "src/parser/bison.cpp"
    break;

  case 321:
#line 537 "Grammar/DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6136 "src/parser/bison.cpp"
    break;

  case 322:
#line 538 "Grammar/DARIC.y"
          { (yyval.ast) = token(COMMA); }
#line 6142 "src/parser/bison.cpp"
    break;

  case 323:
#line 539 "Grammar/DARIC.y"
            { (yyval.ast) = token(TILDE); }
#line 6148 "src/parser/bison.cpp"
    break;

  case 324:
#line 540 "Grammar/DARIC.y"
           { (yyval.ast) = token(TICK); }
#line 6154 "src/parser/bison.cpp"
    break;

  case 325:
#line 541 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(SPC, (yyvsp[-1].ast)); }
#line 6160 "src/parser/bison.cpp"
    break;

  case 326:
#line 542 "Grammar/DARIC.y"
                { (yyval.ast) = token(SEMICOLON); }
#line 6166 "src/parser/bison.cpp"
    break;

  case 327:
#line 546 "Grammar/DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6172 "src/parser/bison.cpp"
    break;

  case 328:
#line 547 "Grammar/DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6178 "src/parser/bison.cpp"
    break;

  case 330:
#line 555 "Grammar/DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6184 "src/parser/bison.cpp"
    break;

  case 331:
#line 556 "Grammar/DARIC.y"
                                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6190 "src/parser/bison.cpp"
    break;

  case 332:
#line 560 "Grammar/DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6196 "src/parser/bison.cpp"
    break;

  case 333:
#line 561 "Grammar/DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6202 "src/parser/bison.cpp"
    break;

  case 334:
#line 562 "Grammar/DARIC.y"
                      { (yyval.ast) = token1(RETURN_PARAMETER, (yyvsp[0].ast)); }
#line 6208 "src/parser/bison.cpp"
    break;

  case 335:
#line 566 "Grammar/DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 6214 "src/parser/bison.cpp"
    break;

  case 336:
#line 567 "Grammar/DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6220 "src/parser/bison.cpp"
    break;

  case 337:
#line 571 "Grammar/DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6226 "src/parser/bison.cpp"
    break;

  case 338:
#line 572 "Grammar/DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6232 "src/parser/bison.cpp"
    break;

  case 339:
#line 576 "Grammar/DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6238 "src/parser/bison.cpp"
    break;

  case 340:
#line 577 "Grammar/DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6244 "src/parser/bison.cpp"
    break;

  case 341:
#line 581 "Grammar/DARIC.y"
                                         { (yyval.ast) = token2(WHEN, (yyvsp[-2].ast), (yyvsp[-1].ast)); }
#line 6250 "src/parser/bison.cpp"
    break;

  case 342:
#line 585 "Grammar/DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 6256 "src/parser/bison.cpp"
    break;

  case 343:
#line 586 "Grammar/DARIC.y"
                     { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6262 "src/parser/bison.cpp"
    break;

  case 344:
#line 589 "Grammar/DARIC.y"
                                                                           { (yyval.ast) = token3typed(DEFPROC, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::NOTYPE); }
#line 6268 "src/parser/bison.cpp"
    break;

  case 345:
#line 590 "Grammar/DARIC.y"
                                                                              { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::INTEGER); }
#line 6274 "src/parser/bison.cpp"
    break;

  case 346:
#line 591 "Grammar/DARIC.y"
                                                                           { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::REAL); }
#line 6280 "src/parser/bison.cpp"
    break;

  case 347:
#line 592 "Grammar/DARIC.y"
                                                                             { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::STRING); }
#line 6286 "src/parser/bison.cpp"
    break;


#line 6290 "src/parser/bison.cpp"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp, yylsp);
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
  return yyresult;
}
#line 595 "Grammar/DARIC.y"


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
