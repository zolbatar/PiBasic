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
#define YYFINAL  290
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10520

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  237
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  349
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1019

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

#define YYPACT_NINF (-642)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-37)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -642,  -642,   741,    49,   182,    24,  -210,  -641,   -17,   463,
     837,    93,  1108,    -6,   344,  -642,  -281,  -642,  -232,  -642,
    -642,  -642,    96,  -642,   145,    43,   -83,  -642,   -20,  -642,
    -642,   537,  -642,  -227,  -642,   333,  -642,   -92,  -642,    92,
    -642
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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
static const yytype_int16 yystos[] =
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
#line 4265 "src/parser/bison.cpp"
    break;

  case 3:
#line 94 "Grammar/DARIC.y"
           { ast_lines[yyfileno].push_front((yyvsp[0].ast)); (yyval.ast) = (yyvsp[0].ast); }
#line 4271 "src/parser/bison.cpp"
    break;

  case 4:
#line 95 "Grammar/DARIC.y"
                 { ast_lines[yyfileno].push_front((yyvsp[-1].ast)); (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4277 "src/parser/bison.cpp"
    break;

  case 5:
#line 99 "Grammar/DARIC.y"
                    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4283 "src/parser/bison.cpp"
    break;

  case 6:
#line 100 "Grammar/DARIC.y"
         { (yyval.ast) = NULL; }
#line 4289 "src/parser/bison.cpp"
    break;

  case 7:
#line 101 "Grammar/DARIC.y"
                                { (yyval.ast) = link(linenumber((yyvsp[-2].v_int)), (yyvsp[-1].ast)); }
#line 4295 "src/parser/bison.cpp"
    break;

  case 8:
#line 104 "Grammar/DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 4301 "src/parser/bison.cpp"
    break;

  case 9:
#line 105 "Grammar/DARIC.y"
                       { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4307 "src/parser/bison.cpp"
    break;

  case 10:
#line 109 "Grammar/DARIC.y"
                { (yyval.ast) = (yyvsp[0].ast); }
#line 4313 "src/parser/bison.cpp"
    break;

  case 11:
#line 110 "Grammar/DARIC.y"
                              { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4319 "src/parser/bison.cpp"
    break;

  case 15:
#line 116 "Grammar/DARIC.y"
                              { (yyval.ast) = token1(CHAIN, (yyvsp[0].ast)); }
#line 4325 "src/parser/bison.cpp"
    break;

  case 16:
#line 117 "Grammar/DARIC.y"
                                                      { (yyval.ast) = token2(CHAIN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4331 "src/parser/bison.cpp"
    break;

  case 17:
#line 118 "Grammar/DARIC.y"
                                 { (yyval.ast) = token1(EXPECT, (yyvsp[0].ast)); }
#line 4337 "src/parser/bison.cpp"
    break;

  case 18:
#line 119 "Grammar/DARIC.y"
          { (yyval.ast) = token(END); }
#line 4343 "src/parser/bison.cpp"
    break;

  case 19:
#line 120 "Grammar/DARIC.y"
                { (yyval.ast) = token1(CALLPROC, string((yyvsp[0].v_string))); }
#line 4349 "src/parser/bison.cpp"
    break;

  case 20:
#line 121 "Grammar/DARIC.y"
                                        { (yyval.ast) = token2(CALLPROC, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4355 "src/parser/bison.cpp"
    break;

  case 21:
#line 122 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4361 "src/parser/bison.cpp"
    break;

  case 22:
#line 123 "Grammar/DARIC.y"
                                            { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4367 "src/parser/bison.cpp"
    break;

  case 23:
#line 124 "Grammar/DARIC.y"
                                              { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 4373 "src/parser/bison.cpp"
    break;

  case 24:
#line 125 "Grammar/DARIC.y"
                           { (yyval.ast) = token1(DATA, (yyvsp[0].ast)); }
#line 4379 "src/parser/bison.cpp"
    break;

  case 25:
#line 126 "Grammar/DARIC.y"
                         { (yyval.ast) = token1(READ, (yyvsp[0].ast)); }
#line 4385 "src/parser/bison.cpp"
    break;

  case 26:
#line 127 "Grammar/DARIC.y"
              { (yyval.ast) = token(RESTORE); }
#line 4391 "src/parser/bison.cpp"
    break;

  case 27:
#line 128 "Grammar/DARIC.y"
             { (yyval.ast) = token(RETURN); }
#line 4397 "src/parser/bison.cpp"
    break;

  case 28:
#line 129 "Grammar/DARIC.y"
                        { (yyval.ast) = token1(RETURN_WITH_VALUE, (yyvsp[0].ast)); }
#line 4403 "src/parser/bison.cpp"
    break;

  case 29:
#line 130 "Grammar/DARIC.y"
              { (yyval.ast) = token(TRACEON); }
#line 4409 "src/parser/bison.cpp"
    break;

  case 30:
#line 131 "Grammar/DARIC.y"
               { (yyval.ast) = token(TRACEOFF); }
#line 4415 "src/parser/bison.cpp"
    break;

  case 31:
#line 132 "Grammar/DARIC.y"
                 { (yyval.ast) = token(BREAKPOINT); }
#line 4421 "src/parser/bison.cpp"
    break;

  case 32:
#line 134 "Grammar/DARIC.y"
                            { (yyval.ast) = token1(DIM, (yyvsp[0].ast)); }
#line 4427 "src/parser/bison.cpp"
    break;

  case 33:
#line 135 "Grammar/DARIC.y"
                                  { (yyval.ast) = token1(LOCALDIM, (yyvsp[0].ast)); }
#line 4433 "src/parser/bison.cpp"
    break;

  case 34:
#line 137 "Grammar/DARIC.y"
                                                     { (yyval.ast) = token2(BPUT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4439 "src/parser/bison.cpp"
    break;

  case 35:
#line 138 "Grammar/DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 4445 "src/parser/bison.cpp"
    break;

  case 36:
#line 139 "Grammar/DARIC.y"
                                                  { (yyval.ast) = token2(PTRA, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4451 "src/parser/bison.cpp"
    break;

  case 37:
#line 140 "Grammar/DARIC.y"
                               { (yyval.ast) = token1(CLOSE, (yyvsp[0].ast)); }
#line 4457 "src/parser/bison.cpp"
    break;

  case 38:
#line 141 "Grammar/DARIC.y"
                                                                    { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(GLOBAL)); }
#line 4463 "src/parser/bison.cpp"
    break;

  case 39:
#line 142 "Grammar/DARIC.y"
                                                                          { (yyval.ast) = token3(LISTFILES, variable((yyvsp[-7].v_string), Type::STRING_ARRAY), (yyvsp[-1].ast), token(LOCAL)); }
#line 4469 "src/parser/bison.cpp"
    break;

  case 40:
#line 144 "Grammar/DARIC.y"
                              { (yyval.ast) = token1(OSCLI, (yyvsp[0].ast)); }
#line 4475 "src/parser/bison.cpp"
    break;

  case 41:
#line 146 "Grammar/DARIC.y"
                        { (yyval.ast) = token1(GOSUB, integer((yyvsp[0].v_int))); }
#line 4481 "src/parser/bison.cpp"
    break;

  case 42:
#line 147 "Grammar/DARIC.y"
                       { (yyval.ast) = token1(GOTO, integer((yyvsp[0].v_int))); }
#line 4487 "src/parser/bison.cpp"
    break;

  case 43:
#line 149 "Grammar/DARIC.y"
                                   { (yyval.ast) = token1(INPUT_, (yyvsp[0].ast)); }
#line 4493 "src/parser/bison.cpp"
    break;

  case 44:
#line 150 "Grammar/DARIC.y"
                                                  { (yyval.ast) = token2(INPUT_NOQUESTIONMARK, string((yyvsp[-1].v_string)), (yyvsp[0].ast)); }
#line 4499 "src/parser/bison.cpp"
    break;

  case 45:
#line 151 "Grammar/DARIC.y"
                                                      { (yyval.ast) = token2(INPUT_, string((yyvsp[-2].v_string)), (yyvsp[0].ast)); }
#line 4505 "src/parser/bison.cpp"
    break;

  case 46:
#line 152 "Grammar/DARIC.y"
                                                                       { (yyval.ast) = token3(MOUSE, string((yyvsp[-4].v_string)), string((yyvsp[-2].v_string)), string((yyvsp[0].v_string)) ); }
#line 4511 "src/parser/bison.cpp"
    break;

  case 47:
#line 154 "Grammar/DARIC.y"
                                       { (yyval.ast) = token1(SINKEY, (yyvsp[-1].ast)); }
#line 4517 "src/parser/bison.cpp"
    break;

  case 48:
#line 155 "Grammar/DARIC.y"
                                        { (yyval.ast) = token1(SINKEYS, (yyvsp[-1].ast)); }
#line 4523 "src/parser/bison.cpp"
    break;

  case 49:
#line 156 "Grammar/DARIC.y"
          { (yyval.ast) = token(GET_S); }
#line 4529 "src/parser/bison.cpp"
    break;

  case 50:
#line 157 "Grammar/DARIC.y"
           { (yyval.ast) = token(GETS_S); }
#line 4535 "src/parser/bison.cpp"
    break;

  case 51:
#line 159 "Grammar/DARIC.y"
                               { (yyval.ast) = token2(IF, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4541 "src/parser/bison.cpp"
    break;

  case 52:
#line 160 "Grammar/DARIC.y"
                                             { (yyval.ast) = token3(IF, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4547 "src/parser/bison.cpp"
    break;

  case 53:
#line 161 "Grammar/DARIC.y"
                                          { (yyval.ast) = token2(IF, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4553 "src/parser/bison.cpp"
    break;

  case 54:
#line 162 "Grammar/DARIC.y"
                                                              { (yyval.ast) = token3(IF, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4559 "src/parser/bison.cpp"
    break;

  case 55:
#line 164 "Grammar/DARIC.y"
                                    { (yyval.ast) = token2(IF, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4565 "src/parser/bison.cpp"
    break;

  case 56:
#line 165 "Grammar/DARIC.y"
                                                    { (yyval.ast) = token3(IF, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4571 "src/parser/bison.cpp"
    break;

  case 57:
#line 166 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(IF, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4577 "src/parser/bison.cpp"
    break;

  case 58:
#line 167 "Grammar/DARIC.y"
                                                                   { (yyval.ast) = token3(IF, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4583 "src/parser/bison.cpp"
    break;

  case 59:
#line 169 "Grammar/DARIC.y"
                                             { (yyval.ast) = token2(REPEAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4589 "src/parser/bison.cpp"
    break;

  case 60:
#line 170 "Grammar/DARIC.y"
                              { (yyval.ast) = token2(REPEAT, NULL, (yyvsp[0].ast)); }
#line 4595 "src/parser/bison.cpp"
    break;

  case 61:
#line 171 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(WHILE, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 4601 "src/parser/bison.cpp"
    break;

  case 62:
#line 173 "Grammar/DARIC.y"
                                                 { (yyval.ast) = token2(SWAP_I, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4607 "src/parser/bison.cpp"
    break;

  case 63:
#line 174 "Grammar/DARIC.y"
                                 { (yyval.ast) = token2(SWAP_F, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4613 "src/parser/bison.cpp"
    break;

  case 64:
#line 175 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(SWAP_S, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 4619 "src/parser/bison.cpp"
    break;

  case 65:
#line 178 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4625 "src/parser/bison.cpp"
    break;

  case 66:
#line 179 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4631 "src/parser/bison.cpp"
    break;

  case 67:
#line 180 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4637 "src/parser/bison.cpp"
    break;

  case 68:
#line 181 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4643 "src/parser/bison.cpp"
    break;

  case 69:
#line 182 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4649 "src/parser/bison.cpp"
    break;

  case 70:
#line 183 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(GLOBAL), Type::STRING); }
#line 4655 "src/parser/bison.cpp"
    break;

  case 71:
#line 184 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4661 "src/parser/bison.cpp"
    break;

  case 72:
#line 185 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4667 "src/parser/bison.cpp"
    break;

  case 73:
#line 186 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-7].v_string)), string((yyvsp[-5].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4673 "src/parser/bison.cpp"
    break;

  case 74:
#line 187 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4679 "src/parser/bison.cpp"
    break;

  case 75:
#line 188 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4685 "src/parser/bison.cpp"
    break;

  case 76:
#line 189 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token4typed(FORIN, string((yyvsp[-6].v_string)), string((yyvsp[-4].v_string)), (yyvsp[-1].ast), token(LOCAL), Type::STRING); }
#line 4691 "src/parser/bison.cpp"
    break;

  case 77:
#line 192 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4697 "src/parser/bison.cpp"
    break;

  case 78:
#line 193 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4703 "src/parser/bison.cpp"
    break;

  case 79:
#line 194 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4709 "src/parser/bison.cpp"
    break;

  case 80:
#line 195 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4715 "src/parser/bison.cpp"
    break;

  case 81:
#line 196 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4721 "src/parser/bison.cpp"
    break;

  case 82:
#line 197 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4727 "src/parser/bison.cpp"
    break;

  case 83:
#line 198 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::INTEGER); }
#line 4733 "src/parser/bison.cpp"
    break;

  case 84:
#line 199 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(GLOBAL), Type::REAL); }
#line 4739 "src/parser/bison.cpp"
    break;

  case 85:
#line 200 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4745 "src/parser/bison.cpp"
    break;

  case 86:
#line 201 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-7].v_string)), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4751 "src/parser/bison.cpp"
    break;

  case 87:
#line 202 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4757 "src/parser/bison.cpp"
    break;

  case 88:
#line 203 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token5typed(FOR, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4763 "src/parser/bison.cpp"
    break;

  case 89:
#line 204 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4769 "src/parser/bison.cpp"
    break;

  case 90:
#line 205 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-9].v_string)), (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4775 "src/parser/bison.cpp"
    break;

  case 91:
#line 206 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::INTEGER); }
#line 4781 "src/parser/bison.cpp"
    break;

  case 92:
#line 207 "Grammar/DARIC.y"
                                                                                                                             { (yyval.ast) = token6typed(FOR, string((yyvsp[-8].v_string)), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), token(LOCAL), Type::REAL); }
#line 4787 "src/parser/bison.cpp"
    break;

  case 93:
#line 209 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(CASE, (yyvsp[-4].ast), (yyvsp[-1].ast));  }
#line 4793 "src/parser/bison.cpp"
    break;

  case 94:
#line 210 "Grammar/DARIC.y"
                                                                      { (yyval.ast) = token3(CASE, (yyvsp[-7].ast), (yyvsp[-4].ast), (yyvsp[-2].ast));  }
#line 4799 "src/parser/bison.cpp"
    break;

  case 95:
#line 212 "Grammar/DARIC.y"
            { (yyval.ast) = token(PRINT); }
#line 4805 "src/parser/bison.cpp"
    break;

  case 96:
#line 213 "Grammar/DARIC.y"
                                  { (yyval.ast) = token1(PRINT, (yyvsp[0].ast)); }
#line 4811 "src/parser/bison.cpp"
    break;

  case 97:
#line 215 "Grammar/DARIC.y"
                  { (yyval.ast) = token(RENDERFRAME); }
#line 4817 "src/parser/bison.cpp"
    break;

  case 98:
#line 218 "Grammar/DARIC.y"
                                                      { (yyval.ast) = token6(CREATEVERTEX, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4823 "src/parser/bison.cpp"
    break;

  case 99:
#line 221 "Grammar/DARIC.y"
                                                  { (yyval.ast) = token6(CREATETRIANGLE, string((yyvsp[-11].v_string)), (yyvsp[-9].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4829 "src/parser/bison.cpp"
    break;

  case 100:
#line 222 "Grammar/DARIC.y"
                                                                                                        { (yyval.ast) = token4(TRANSLATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4835 "src/parser/bison.cpp"
    break;

  case 101:
#line 223 "Grammar/DARIC.y"
                                                                                                      { (yyval.ast) = token4(ROTATE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4841 "src/parser/bison.cpp"
    break;

  case 102:
#line 224 "Grammar/DARIC.y"
                                                      { (yyval.ast) = token2(SCALE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4847 "src/parser/bison.cpp"
    break;

  case 103:
#line 225 "Grammar/DARIC.y"
                                      { (yyval.ast) = token1(DELETEOBJECT, (yyvsp[0].ast)); }
#line 4853 "src/parser/bison.cpp"
    break;

  case 104:
#line 227 "Grammar/DARIC.y"
          { (yyval.ast) = token(CLS); }
#line 4859 "src/parser/bison.cpp"
    break;

  case 105:
#line 228 "Grammar/DARIC.y"
                                { (yyval.ast) = token1(COLOUR, (yyvsp[0].ast)); }
#line 4865 "src/parser/bison.cpp"
    break;

  case 106:
#line 229 "Grammar/DARIC.y"
                                                                              { (yyval.ast) = token3(COLOUR, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4871 "src/parser/bison.cpp"
    break;

  case 107:
#line 230 "Grammar/DARIC.y"
                                  { (yyval.ast) = token1(COLOURBG, (yyvsp[0].ast)); }
#line 4877 "src/parser/bison.cpp"
    break;

  case 108:
#line 231 "Grammar/DARIC.y"
                                                                                { (yyval.ast) = token3(COLOURBG, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4883 "src/parser/bison.cpp"
    break;

  case 109:
#line 232 "Grammar/DARIC.y"
                                                         { (yyval.ast) = token2(GRAPHICS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4889 "src/parser/bison.cpp"
    break;

  case 110:
#line 233 "Grammar/DARIC.y"
                                                                { (yyval.ast) = token2(BANKED, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4895 "src/parser/bison.cpp"
    break;

  case 111:
#line 234 "Grammar/DARIC.y"
               { (yyval.ast) = token(GRAPHICS); }
#line 4901 "src/parser/bison.cpp"
    break;

  case 112:
#line 235 "Grammar/DARIC.y"
                      { (yyval.ast) = token(BANKED); }
#line 4907 "src/parser/bison.cpp"
    break;

  case 113:
#line 236 "Grammar/DARIC.y"
           { (yyval.ast) = token(FLIP); }
#line 4913 "src/parser/bison.cpp"
    break;

  case 114:
#line 237 "Grammar/DARIC.y"
                                                                              { (yyval.ast) = token3(CIRCLE, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4919 "src/parser/bison.cpp"
    break;

  case 115:
#line 238 "Grammar/DARIC.y"
                                                                                   { (yyval.ast) = token3(CIRCLEFILL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4925 "src/parser/bison.cpp"
    break;

  case 116:
#line 239 "Grammar/DARIC.y"
                                                                                                   { (yyval.ast) = token4(LINE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4931 "src/parser/bison.cpp"
    break;

  case 117:
#line 240 "Grammar/DARIC.y"
                                                                                                        { (yyval.ast) = token4(RECTANGLE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4937 "src/parser/bison.cpp"
    break;

  case 118:
#line 241 "Grammar/DARIC.y"
                                                                                                             { (yyval.ast) = token4(RECTANGLEFILL, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4943 "src/parser/bison.cpp"
    break;

  case 119:
#line 242 "Grammar/DARIC.y"
                                                                                                                                                     { (yyval.ast) = token6(TRIANGLE, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4949 "src/parser/bison.cpp"
    break;

  case 120:
#line 243 "Grammar/DARIC.y"
                                                                                                                                                          { (yyval.ast) = token6(TRIANGLEFILL, (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4955 "src/parser/bison.cpp"
    break;

  case 121:
#line 246 "Grammar/DARIC.y"
                                                                                         { (yyval.ast) = token9(TRIANGLESHADED, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4961 "src/parser/bison.cpp"
    break;

  case 122:
#line 247 "Grammar/DARIC.y"
                                                     { (yyval.ast) = token2(PLOT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4967 "src/parser/bison.cpp"
    break;

  case 123:
#line 248 "Grammar/DARIC.y"
                                                                                                     { (yyval.ast) = token4(CLIPON, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4973 "src/parser/bison.cpp"
    break;

  case 124:
#line 249 "Grammar/DARIC.y"
              { (yyval.ast) = token(CLIPOFF); }
#line 4979 "src/parser/bison.cpp"
    break;

  case 125:
#line 250 "Grammar/DARIC.y"
                                                                                                  { (yyval.ast) = token4(TEXT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4985 "src/parser/bison.cpp"
    break;

  case 126:
#line 251 "Grammar/DARIC.y"
                                                                                                       { (yyval.ast) = token4(TEXTRIGHT, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4991 "src/parser/bison.cpp"
    break;

  case 127:
#line 252 "Grammar/DARIC.y"
                                                                                                        { (yyval.ast) = token4(TEXTCENTRE, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4997 "src/parser/bison.cpp"
    break;

  case 128:
#line 253 "Grammar/DARIC.y"
              { (yyval.ast) = token(SHOWFPS); }
#line 5003 "src/parser/bison.cpp"
    break;

  case 129:
#line 257 "Grammar/DARIC.y"
                  { (yyval.ast) = integer((yyvsp[0].v_int)); }
#line 5009 "src/parser/bison.cpp"
    break;

  case 130:
#line 258 "Grammar/DARIC.y"
                                  { (yyval.ast) = integer(-(yyvsp[0].v_int)); }
#line 5015 "src/parser/bison.cpp"
    break;

  case 131:
#line 259 "Grammar/DARIC.y"
                   { (yyval.ast) = real((yyvsp[0].v_real)); }
#line 5021 "src/parser/bison.cpp"
    break;

  case 132:
#line 260 "Grammar/DARIC.y"
                                   { (yyval.ast) = real(-(yyvsp[0].v_real)); }
#line 5027 "src/parser/bison.cpp"
    break;

  case 133:
#line 264 "Grammar/DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 5033 "src/parser/bison.cpp"
    break;

  case 134:
#line 265 "Grammar/DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5039 "src/parser/bison.cpp"
    break;

  case 135:
#line 266 "Grammar/DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5045 "src/parser/bison.cpp"
    break;

  case 136:
#line 267 "Grammar/DARIC.y"
                                 { (yyval.ast) = (yyvsp[-1].ast); }
#line 5051 "src/parser/bison.cpp"
    break;

  case 137:
#line 268 "Grammar/DARIC.y"
                                        { (yyval.ast) = token1(FLOAT_, (yyvsp[-1].ast)); }
#line 5057 "src/parser/bison.cpp"
    break;

  case 138:
#line 269 "Grammar/DARIC.y"
                                      { (yyval.ast) = token1(INT_, (yyvsp[-1].ast)); }
#line 5063 "src/parser/bison.cpp"
    break;

  case 139:
#line 270 "Grammar/DARIC.y"
                             { (yyval.ast) = token2(MINUS, integer(0), (yyvsp[0].ast)); }
#line 5069 "src/parser/bison.cpp"
    break;

  case 140:
#line 271 "Grammar/DARIC.y"
                          { (yyval.ast) = token2(MINUS, real(0.0), (yyvsp[0].ast)); }
#line 5075 "src/parser/bison.cpp"
    break;

  case 141:
#line 272 "Grammar/DARIC.y"
                                                 { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5081 "src/parser/bison.cpp"
    break;

  case 142:
#line 273 "Grammar/DARIC.y"
                                                  { (yyval.ast) = token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5087 "src/parser/bison.cpp"
    break;

  case 143:
#line 274 "Grammar/DARIC.y"
                                                     { (yyval.ast) = token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5093 "src/parser/bison.cpp"
    break;

  case 144:
#line 275 "Grammar/DARIC.y"
                                                   { (yyval.ast) = token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5099 "src/parser/bison.cpp"
    break;

  case 145:
#line 276 "Grammar/DARIC.y"
                                                          { (yyval.ast) = token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5105 "src/parser/bison.cpp"
    break;

  case 146:
#line 277 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5111 "src/parser/bison.cpp"
    break;

  case 147:
#line 278 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5117 "src/parser/bison.cpp"
    break;

  case 148:
#line 279 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5123 "src/parser/bison.cpp"
    break;

  case 149:
#line 280 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5129 "src/parser/bison.cpp"
    break;

  case 150:
#line 281 "Grammar/DARIC.y"
                                              { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5135 "src/parser/bison.cpp"
    break;

  case 151:
#line 282 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5141 "src/parser/bison.cpp"
    break;

  case 152:
#line 283 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5147 "src/parser/bison.cpp"
    break;

  case 153:
#line 284 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5153 "src/parser/bison.cpp"
    break;

  case 154:
#line 285 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5159 "src/parser/bison.cpp"
    break;

  case 155:
#line 286 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5165 "src/parser/bison.cpp"
    break;

  case 156:
#line 287 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5171 "src/parser/bison.cpp"
    break;

  case 157:
#line 288 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5177 "src/parser/bison.cpp"
    break;

  case 158:
#line 289 "Grammar/DARIC.y"
                                                { (yyval.ast) = token2(EOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5183 "src/parser/bison.cpp"
    break;

  case 159:
#line 291 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5189 "src/parser/bison.cpp"
    break;

  case 160:
#line 292 "Grammar/DARIC.y"
                                            { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5195 "src/parser/bison.cpp"
    break;

  case 161:
#line 294 "Grammar/DARIC.y"
                                              { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::REAL), (yyvsp[-1].ast)); }
#line 5201 "src/parser/bison.cpp"
    break;

  case 162:
#line 295 "Grammar/DARIC.y"
                                                      { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::INTEGER), (yyvsp[-1].ast)); }
#line 5207 "src/parser/bison.cpp"
    break;

  case 163:
#line 296 "Grammar/DARIC.y"
                                                     { (yyval.ast) = token2(ARRAYSIZE, variable((yyvsp[-5].v_string), Type::STRING), (yyvsp[-1].ast)); }
#line 5213 "src/parser/bison.cpp"
    break;

  case 164:
#line 298 "Grammar/DARIC.y"
                             { (yyval.ast) = token1(PTR, (yyvsp[0].ast)); }
#line 5219 "src/parser/bison.cpp"
    break;

  case 165:
#line 300 "Grammar/DARIC.y"
          { (yyval.ast) = token(GET); }
#line 5225 "src/parser/bison.cpp"
    break;

  case 166:
#line 301 "Grammar/DARIC.y"
                                       { (yyval.ast) = token1(INKEY, (yyvsp[-1].ast)); }
#line 5231 "src/parser/bison.cpp"
    break;

  case 167:
#line 303 "Grammar/DARIC.y"
               { (yyval.ast) = integer(1); }
#line 5237 "src/parser/bison.cpp"
    break;

  case 168:
#line 304 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5243 "src/parser/bison.cpp"
    break;

  case 169:
#line 305 "Grammar/DARIC.y"
           { (yyval.ast) = token(TIME); }
#line 5249 "src/parser/bison.cpp"
    break;

  case 170:
#line 307 "Grammar/DARIC.y"
                        { (yyval.ast) = integer(0); }
#line 5255 "src/parser/bison.cpp"
    break;

  case 171:
#line 308 "Grammar/DARIC.y"
                        { (yyval.ast) = integer(1); }
#line 5261 "src/parser/bison.cpp"
    break;

  case 172:
#line 309 "Grammar/DARIC.y"
                        { (yyval.ast) = integer(2); }
#line 5267 "src/parser/bison.cpp"
    break;

  case 173:
#line 310 "Grammar/DARIC.y"
                        { (yyval.ast) = integer(3); }
#line 5273 "src/parser/bison.cpp"
    break;

  case 174:
#line 312 "Grammar/DARIC.y"
                                                  { (yyval.ast) = token2(CREATESHAPE, string((yyvsp[-2].v_string)), string((yyvsp[0].v_string))); }
#line 5279 "src/parser/bison.cpp"
    break;

  case 175:
#line 317 "Grammar/DARIC.y"
                                                  { (yyval.ast) = token9(CREATEOBJECT, (yyvsp[-16].ast), (yyvsp[-14].ast), (yyvsp[-12].ast), (yyvsp[-10].ast), (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5285 "src/parser/bison.cpp"
    break;

  case 176:
#line 319 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0xFF0000); }
#line 5291 "src/parser/bison.cpp"
    break;

  case 177:
#line 320 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0x00FF00); }
#line 5297 "src/parser/bison.cpp"
    break;

  case 178:
#line 321 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0xFFFF00); }
#line 5303 "src/parser/bison.cpp"
    break;

  case 179:
#line 322 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0x0000FF); }
#line 5309 "src/parser/bison.cpp"
    break;

  case 180:
#line 323 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0xFF00FF); }
#line 5315 "src/parser/bison.cpp"
    break;

  case 181:
#line 324 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0x00FFFF); }
#line 5321 "src/parser/bison.cpp"
    break;

  case 182:
#line 325 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0xFFFFFF); }
#line 5327 "src/parser/bison.cpp"
    break;

  case 183:
#line 326 "Grammar/DARIC.y"
                { (yyval.ast) = integer(0); }
#line 5333 "src/parser/bison.cpp"
    break;

  case 184:
#line 327 "Grammar/DARIC.y"
                { (yyval.ast) = integer(-1); }
#line 5339 "src/parser/bison.cpp"
    break;

  case 185:
#line 328 "Grammar/DARIC.y"
                                                                                      { (yyval.ast) = token3(COLOUREXP, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5345 "src/parser/bison.cpp"
    break;

  case 186:
#line 329 "Grammar/DARIC.y"
                                                               { (yyval.ast) = token2(POINT_, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5351 "src/parser/bison.cpp"
    break;

  case 187:
#line 330 "Grammar/DARIC.y"
                  { (yyval.ast) = token(SCREENWIDTH); }
#line 5357 "src/parser/bison.cpp"
    break;

  case 188:
#line 331 "Grammar/DARIC.y"
                   { (yyval.ast) = token(SCREENHEIGHT); }
#line 5363 "src/parser/bison.cpp"
    break;

  case 189:
#line 332 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(LOADTYPEFACE, (yyvsp[0].ast)); }
#line 5369 "src/parser/bison.cpp"
    break;

  case 190:
#line 333 "Grammar/DARIC.y"
                                                           { (yyval.ast) = token2(CREATEFONT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5375 "src/parser/bison.cpp"
    break;

  case 191:
#line 334 "Grammar/DARIC.y"
             { (yyval.ast) = integer(0); }
#line 5381 "src/parser/bison.cpp"
    break;

  case 192:
#line 335 "Grammar/DARIC.y"
             { (yyval.ast) = integer(1); }
#line 5387 "src/parser/bison.cpp"
    break;

  case 193:
#line 336 "Grammar/DARIC.y"
             { (yyval.ast) = integer(2); }
#line 5393 "src/parser/bison.cpp"
    break;

  case 194:
#line 337 "Grammar/DARIC.y"
             { (yyval.ast) = integer(3); }
#line 5399 "src/parser/bison.cpp"
    break;

  case 195:
#line 338 "Grammar/DARIC.y"
             { (yyval.ast) = integer(4); }
#line 5405 "src/parser/bison.cpp"
    break;

  case 196:
#line 339 "Grammar/DARIC.y"
             { (yyval.ast) = integer(5); }
#line 5411 "src/parser/bison.cpp"
    break;

  case 197:
#line 340 "Grammar/DARIC.y"
             { (yyval.ast) = integer(6); }
#line 5417 "src/parser/bison.cpp"
    break;

  case 198:
#line 341 "Grammar/DARIC.y"
             { (yyval.ast) = integer(7); }
#line 5423 "src/parser/bison.cpp"
    break;

  case 199:
#line 342 "Grammar/DARIC.y"
              { (yyval.ast) = integer(8); }
#line 5429 "src/parser/bison.cpp"
    break;

  case 200:
#line 343 "Grammar/DARIC.y"
             { (yyval.ast) = integer(9); }
#line 5435 "src/parser/bison.cpp"
    break;

  case 201:
#line 344 "Grammar/DARIC.y"
             { (yyval.ast) = integer(10); }
#line 5441 "src/parser/bison.cpp"
    break;

  case 202:
#line 345 "Grammar/DARIC.y"
             { (yyval.ast) = integer(11); }
#line 5447 "src/parser/bison.cpp"
    break;

  case 203:
#line 346 "Grammar/DARIC.y"
             { (yyval.ast) = integer(12); }
#line 5453 "src/parser/bison.cpp"
    break;

  case 204:
#line 347 "Grammar/DARIC.y"
             { (yyval.ast) = integer(13); }
#line 5459 "src/parser/bison.cpp"
    break;

  case 205:
#line 348 "Grammar/DARIC.y"
             { (yyval.ast) = integer(14); }
#line 5465 "src/parser/bison.cpp"
    break;

  case 206:
#line 349 "Grammar/DARIC.y"
             { (yyval.ast) = integer(15); }
#line 5471 "src/parser/bison.cpp"
    break;

  case 207:
#line 350 "Grammar/DARIC.y"
             { (yyval.ast) = integer(16); }
#line 5477 "src/parser/bison.cpp"
    break;

  case 208:
#line 351 "Grammar/DARIC.y"
              { (yyval.ast) = integer(17); }
#line 5483 "src/parser/bison.cpp"
    break;

  case 209:
#line 352 "Grammar/DARIC.y"
                              { (yyval.ast) = token1(EOFH, (yyvsp[0].ast)); }
#line 5489 "src/parser/bison.cpp"
    break;

  case 210:
#line 353 "Grammar/DARIC.y"
                              { (yyval.ast) = token1(BGET, (yyvsp[0].ast)); }
#line 5495 "src/parser/bison.cpp"
    break;

  case 211:
#line 354 "Grammar/DARIC.y"
                                       { (yyval.ast) = token1(OPENIN, (yyvsp[-1].ast)); }
#line 5501 "src/parser/bison.cpp"
    break;

  case 212:
#line 355 "Grammar/DARIC.y"
                                        { (yyval.ast) = token1(OPENOUT, (yyvsp[-1].ast)); }
#line 5507 "src/parser/bison.cpp"
    break;

  case 213:
#line 356 "Grammar/DARIC.y"
                                       { (yyval.ast) = token1(OPENUP, (yyvsp[-1].ast)); }
#line 5513 "src/parser/bison.cpp"
    break;

  case 214:
#line 358 "Grammar/DARIC.y"
          { (yyval.ast) = token(RND); }
#line 5519 "src/parser/bison.cpp"
    break;

  case 215:
#line 359 "Grammar/DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(0)); }
#line 5525 "src/parser/bison.cpp"
    break;

  case 216:
#line 360 "Grammar/DARIC.y"
           { (yyval.ast) = token1(RNDREAL, integer(1)); }
#line 5531 "src/parser/bison.cpp"
    break;

  case 217:
#line 361 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(RNDRANGE, (yyvsp[-1].ast)); }
#line 5537 "src/parser/bison.cpp"
    break;

  case 218:
#line 363 "Grammar/DARIC.y"
         { (yyval.ast) = token(PI); }
#line 5543 "src/parser/bison.cpp"
    break;

  case 219:
#line 364 "Grammar/DARIC.y"
                             { (yyval.ast) = token1(NOT, (yyvsp[0].ast)); }
#line 5549 "src/parser/bison.cpp"
    break;

  case 220:
#line 365 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(SQR, (yyvsp[-1].ast)); }
#line 5555 "src/parser/bison.cpp"
    break;

  case 221:
#line 366 "Grammar/DARIC.y"
                                    { (yyval.ast) = token1(LN, (yyvsp[-1].ast)); }
#line 5561 "src/parser/bison.cpp"
    break;

  case 222:
#line 367 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(LOG, (yyvsp[-1].ast)); }
#line 5567 "src/parser/bison.cpp"
    break;

  case 223:
#line 368 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(EXP, (yyvsp[-1].ast)); }
#line 5573 "src/parser/bison.cpp"
    break;

  case 224:
#line 369 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(ATN, (yyvsp[-1].ast)); }
#line 5579 "src/parser/bison.cpp"
    break;

  case 225:
#line 370 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(TAN, (yyvsp[-1].ast)); }
#line 5585 "src/parser/bison.cpp"
    break;

  case 226:
#line 371 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(COS, (yyvsp[-1].ast)); }
#line 5591 "src/parser/bison.cpp"
    break;

  case 227:
#line 372 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(SIN, (yyvsp[-1].ast)); }
#line 5597 "src/parser/bison.cpp"
    break;

  case 228:
#line 373 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(ABS, (yyvsp[-1].ast)); }
#line 5603 "src/parser/bison.cpp"
    break;

  case 229:
#line 374 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(ACS, (yyvsp[-1].ast)); }
#line 5609 "src/parser/bison.cpp"
    break;

  case 230:
#line 375 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(ASN, (yyvsp[-1].ast)); }
#line 5615 "src/parser/bison.cpp"
    break;

  case 231:
#line 376 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(DEG, (yyvsp[-1].ast)); }
#line 5621 "src/parser/bison.cpp"
    break;

  case 232:
#line 377 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(RAD, (yyvsp[-1].ast)); }
#line 5627 "src/parser/bison.cpp"
    break;

  case 233:
#line 378 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(SGN, (yyvsp[-1].ast)); }
#line 5633 "src/parser/bison.cpp"
    break;

  case 234:
#line 380 "Grammar/DARIC.y"
                                    { (yyval.ast) = token1(ASC, (yyvsp[-1].ast)); }
#line 5639 "src/parser/bison.cpp"
    break;

  case 235:
#line 381 "Grammar/DARIC.y"
                                    { (yyval.ast) = token1(LEN, (yyvsp[-1].ast)); }
#line 5645 "src/parser/bison.cpp"
    break;

  case 236:
#line 382 "Grammar/DARIC.y"
                                                            { (yyval.ast) = token3(INSTR, (yyvsp[-3].ast), (yyvsp[-1].ast), integer(1)); }
#line 5651 "src/parser/bison.cpp"
    break;

  case 237:
#line 383 "Grammar/DARIC.y"
                                                                                   { (yyval.ast) = token3(INSTR, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 5657 "src/parser/bison.cpp"
    break;

  case 238:
#line 384 "Grammar/DARIC.y"
                                    { (yyval.ast) = token1(VAL, (yyvsp[-1].ast)); }
#line 5663 "src/parser/bison.cpp"
    break;

  case 239:
#line 388 "Grammar/DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5669 "src/parser/bison.cpp"
    break;

  case 240:
#line 389 "Grammar/DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5675 "src/parser/bison.cpp"
    break;

  case 241:
#line 390 "Grammar/DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5681 "src/parser/bison.cpp"
    break;

  case 242:
#line 391 "Grammar/DARIC.y"
                                     { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5687 "src/parser/bison.cpp"
    break;

  case 243:
#line 392 "Grammar/DARIC.y"
                                                                { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5693 "src/parser/bison.cpp"
    break;

  case 244:
#line 396 "Grammar/DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 5699 "src/parser/bison.cpp"
    break;

  case 245:
#line 397 "Grammar/DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5705 "src/parser/bison.cpp"
    break;

  case 246:
#line 398 "Grammar/DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5711 "src/parser/bison.cpp"
    break;

  case 247:
#line 399 "Grammar/DARIC.y"
                             { (yyval.ast) = typevariable((yyvsp[-1].v_string), (yyvsp[0].v_string), Type::TYPE); }
#line 5717 "src/parser/bison.cpp"
    break;

  case 248:
#line 400 "Grammar/DARIC.y"
                                                        { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5723 "src/parser/bison.cpp"
    break;

  case 249:
#line 404 "Grammar/DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5729 "src/parser/bison.cpp"
    break;

  case 250:
#line 405 "Grammar/DARIC.y"
                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5735 "src/parser/bison.cpp"
    break;

  case 251:
#line 409 "Grammar/DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 5741 "src/parser/bison.cpp"
    break;

  case 252:
#line 410 "Grammar/DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5747 "src/parser/bison.cpp"
    break;

  case 253:
#line 411 "Grammar/DARIC.y"
                                                                        { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5753 "src/parser/bison.cpp"
    break;

  case 254:
#line 412 "Grammar/DARIC.y"
                                                               { (yyval.ast) = typevariable1d((yyvsp[-4].v_string), (yyvsp[0].v_string), (yyvsp[-2].ast), Type::TYPE_ARRAY); }
#line 5759 "src/parser/bison.cpp"
    break;

  case 255:
#line 416 "Grammar/DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 5765 "src/parser/bison.cpp"
    break;

  case 256:
#line 417 "Grammar/DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 5771 "src/parser/bison.cpp"
    break;

  case 257:
#line 421 "Grammar/DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 5777 "src/parser/bison.cpp"
    break;

  case 258:
#line 422 "Grammar/DARIC.y"
                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5783 "src/parser/bison.cpp"
    break;

  case 259:
#line 426 "Grammar/DARIC.y"
                       { (yyval.ast) = variable((yyvsp[0].v_string), Type::INTEGER); }
#line 5789 "src/parser/bison.cpp"
    break;

  case 260:
#line 427 "Grammar/DARIC.y"
               { (yyval.ast) = variable((yyvsp[0].v_string), Type::REAL); }
#line 5795 "src/parser/bison.cpp"
    break;

  case 261:
#line 428 "Grammar/DARIC.y"
                      { (yyval.ast) = variable((yyvsp[0].v_string), Type::STRING); }
#line 5801 "src/parser/bison.cpp"
    break;

  case 262:
#line 432 "Grammar/DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 5807 "src/parser/bison.cpp"
    break;

  case 263:
#line 433 "Grammar/DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5813 "src/parser/bison.cpp"
    break;

  case 264:
#line 437 "Grammar/DARIC.y"
                                                  { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5819 "src/parser/bison.cpp"
    break;

  case 265:
#line 438 "Grammar/DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::INTEGER_ARRAY); }
#line 5825 "src/parser/bison.cpp"
    break;

  case 266:
#line 439 "Grammar/DARIC.y"
                                          { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5831 "src/parser/bison.cpp"
    break;

  case 267:
#line 440 "Grammar/DARIC.y"
                                                                 { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::REAL_ARRAY); }
#line 5837 "src/parser/bison.cpp"
    break;

  case 268:
#line 441 "Grammar/DARIC.y"
                                                 { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5843 "src/parser/bison.cpp"
    break;

  case 269:
#line 442 "Grammar/DARIC.y"
                                                                         { (yyval.ast) = variable2d((yyvsp[-5].v_string), (yyvsp[-3].ast), (yyvsp[-1].ast), Type::STRING_ARRAY); }
#line 5849 "src/parser/bison.cpp"
    break;

  case 270:
#line 443 "Grammar/DARIC.y"
                                                            { (yyval.ast) = typevariable1d((yyvsp[-5].v_string), (yyvsp[-1].v_string), (yyvsp[-3].ast), Type::TYPE_ARRAY); }
#line 5855 "src/parser/bison.cpp"
    break;

  case 271:
#line 447 "Grammar/DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 5861 "src/parser/bison.cpp"
    break;

  case 272:
#line 448 "Grammar/DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5867 "src/parser/bison.cpp"
    break;

  case 273:
#line 452 "Grammar/DARIC.y"
                    { (yyval.ast) = variable((yyvsp[0].v_string), Type::TYPE); }
#line 5873 "src/parser/bison.cpp"
    break;

  case 274:
#line 453 "Grammar/DARIC.y"
                                               { (yyval.ast) = variable1d((yyvsp[-3].v_string), (yyvsp[-1].ast), Type::TYPE_ARRAY); }
#line 5879 "src/parser/bison.cpp"
    break;

  case 275:
#line 457 "Grammar/DARIC.y"
                                            { (yyval.ast) = token2(TYPE_, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5885 "src/parser/bison.cpp"
    break;

  case 276:
#line 461 "Grammar/DARIC.y"
                     { (yyval.ast) = token1(FIELD, (yyvsp[0].ast)); }
#line 5891 "src/parser/bison.cpp"
    break;

  case 277:
#line 465 "Grammar/DARIC.y"
              { (yyval.ast) = (yyvsp[-1].ast); }
#line 5897 "src/parser/bison.cpp"
    break;

  case 278:
#line 466 "Grammar/DARIC.y"
                          { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5903 "src/parser/bison.cpp"
    break;

  case 279:
#line 470 "Grammar/DARIC.y"
                     { (yyval.ast) = string((yyvsp[0].v_string)); }
#line 5909 "src/parser/bison.cpp"
    break;

  case 280:
#line 474 "Grammar/DARIC.y"
             { (yyval.ast) = (yyvsp[0].ast); }
#line 5915 "src/parser/bison.cpp"
    break;

  case 281:
#line 475 "Grammar/DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 5921 "src/parser/bison.cpp"
    break;

  case 282:
#line 476 "Grammar/DARIC.y"
                                               { (yyval.ast) = token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5927 "src/parser/bison.cpp"
    break;

  case 283:
#line 477 "Grammar/DARIC.y"
                                            { (yyval.ast) = token2(E, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5933 "src/parser/bison.cpp"
    break;

  case 284:
#line 478 "Grammar/DARIC.y"
                                             { (yyval.ast) = token2(NE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5939 "src/parser/bison.cpp"
    break;

  case 285:
#line 479 "Grammar/DARIC.y"
                                             { (yyval.ast) = token2(GE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5945 "src/parser/bison.cpp"
    break;

  case 286:
#line 480 "Grammar/DARIC.y"
                                             { (yyval.ast) = token2(LE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5951 "src/parser/bison.cpp"
    break;

  case 287:
#line 481 "Grammar/DARIC.y"
                                             { (yyval.ast) = token2(LT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5957 "src/parser/bison.cpp"
    break;

  case 288:
#line 482 "Grammar/DARIC.y"
                                             { (yyval.ast) = token2(GT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5963 "src/parser/bison.cpp"
    break;

  case 289:
#line 484 "Grammar/DARIC.y"
                               { (yyval.ast) = token1(GETSH, (yyvsp[0].ast)); }
#line 5969 "src/parser/bison.cpp"
    break;

  case 290:
#line 486 "Grammar/DARIC.y"
                                              { (yyval.ast) = token2(CALLFN, string((yyvsp[-3].v_string)), (yyvsp[-1].ast)); }
#line 5975 "src/parser/bison.cpp"
    break;

  case 291:
#line 488 "Grammar/DARIC.y"
           { (yyval.ast) = token(GETS); }
#line 5981 "src/parser/bison.cpp"
    break;

  case 292:
#line 489 "Grammar/DARIC.y"
                                        { (yyval.ast) = token1(INKEYS, (yyvsp[-1].ast)); }
#line 5987 "src/parser/bison.cpp"
    break;

  case 293:
#line 491 "Grammar/DARIC.y"
            { (yyval.ast) = token(TIMES); }
#line 5993 "src/parser/bison.cpp"
    break;

  case 294:
#line 492 "Grammar/DARIC.y"
                                      { (yyval.ast) = token1(STRS, (yyvsp[-1].ast)); }
#line 5999 "src/parser/bison.cpp"
    break;

  case 295:
#line 493 "Grammar/DARIC.y"
                                            { (yyval.ast) = token1(STRSHEX, (yyvsp[-1].ast)); }
#line 6005 "src/parser/bison.cpp"
    break;

  case 296:
#line 494 "Grammar/DARIC.y"
                                                               { (yyval.ast) = token2(STRINGS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6011 "src/parser/bison.cpp"
    break;

  case 297:
#line 495 "Grammar/DARIC.y"
                                      { (yyval.ast) = token1(CHRS, (yyvsp[-1].ast)); }
#line 6017 "src/parser/bison.cpp"
    break;

  case 298:
#line 496 "Grammar/DARIC.y"
                                                             { (yyval.ast) = token2(LEFTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6023 "src/parser/bison.cpp"
    break;

  case 299:
#line 497 "Grammar/DARIC.y"
                                                                                   { (yyval.ast) = token3(MIDS, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6029 "src/parser/bison.cpp"
    break;

  case 300:
#line 498 "Grammar/DARIC.y"
                                                              { (yyval.ast) = token2(RIGHTS, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6035 "src/parser/bison.cpp"
    break;

  case 301:
#line 502 "Grammar/DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6041 "src/parser/bison.cpp"
    break;

  case 302:
#line 503 "Grammar/DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6047 "src/parser/bison.cpp"
    break;

  case 303:
#line 507 "Grammar/DARIC.y"
                     { (yyval.ast) = NULL; }
#line 6053 "src/parser/bison.cpp"
    break;

  case 304:
#line 508 "Grammar/DARIC.y"
                 { (yyval.ast) = (yyvsp[0].ast); }
#line 6059 "src/parser/bison.cpp"
    break;

  case 305:
#line 509 "Grammar/DARIC.y"
                                     { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6065 "src/parser/bison.cpp"
    break;

  case 306:
#line 513 "Grammar/DARIC.y"
                                            { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6071 "src/parser/bison.cpp"
    break;

  case 307:
#line 514 "Grammar/DARIC.y"
                                          { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6077 "src/parser/bison.cpp"
    break;

  case 308:
#line 515 "Grammar/DARIC.y"
                                 { (yyval.ast) = assignment((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6083 "src/parser/bison.cpp"
    break;

  case 309:
#line 516 "Grammar/DARIC.y"
                                          { (yyval.ast) = assignment(link((yyvsp[-3].ast), (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 6089 "src/parser/bison.cpp"
    break;

  case 310:
#line 520 "Grammar/DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6095 "src/parser/bison.cpp"
    break;

  case 311:
#line 521 "Grammar/DARIC.y"
                                            { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6101 "src/parser/bison.cpp"
    break;

  case 312:
#line 525 "Grammar/DARIC.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6107 "src/parser/bison.cpp"
    break;

  case 313:
#line 526 "Grammar/DARIC.y"
                            { (yyval.ast) = token1(LOCAL, (yyvsp[0].ast)); }
#line 6113 "src/parser/bison.cpp"
    break;

  case 314:
#line 527 "Grammar/DARIC.y"
                             { (yyval.ast) = token1(GLOBAL, (yyvsp[0].ast)); }
#line 6119 "src/parser/bison.cpp"
    break;

  case 315:
#line 528 "Grammar/DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHL, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6125 "src/parser/bison.cpp"
    break;

  case 316:
#line 529 "Grammar/DARIC.y"
                                                { (yyval.ast) = assignment((yyvsp[-2].ast), token2(SHR, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6131 "src/parser/bison.cpp"
    break;

  case 317:
#line 530 "Grammar/DARIC.y"
                                                 { (yyval.ast) = assignment((yyvsp[-2].ast), token2(PLUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6137 "src/parser/bison.cpp"
    break;

  case 318:
#line 531 "Grammar/DARIC.y"
                                                  { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MINUS, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6143 "src/parser/bison.cpp"
    break;

  case 319:
#line 532 "Grammar/DARIC.y"
                                                     { (yyval.ast) = assignment((yyvsp[-2].ast), token2(MULTIPLY, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6149 "src/parser/bison.cpp"
    break;

  case 320:
#line 533 "Grammar/DARIC.y"
                                                   { (yyval.ast) = assignment((yyvsp[-2].ast), token2(DIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6155 "src/parser/bison.cpp"
    break;

  case 321:
#line 534 "Grammar/DARIC.y"
                                                          { (yyval.ast) = assignment((yyvsp[-2].ast), token2(INTEGERDIVIDE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 6161 "src/parser/bison.cpp"
    break;

  case 322:
#line 538 "Grammar/DARIC.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6167 "src/parser/bison.cpp"
    break;

  case 323:
#line 539 "Grammar/DARIC.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6173 "src/parser/bison.cpp"
    break;

  case 324:
#line 540 "Grammar/DARIC.y"
          { (yyval.ast) = token(COMMA); }
#line 6179 "src/parser/bison.cpp"
    break;

  case 325:
#line 541 "Grammar/DARIC.y"
            { (yyval.ast) = token(TILDE); }
#line 6185 "src/parser/bison.cpp"
    break;

  case 326:
#line 542 "Grammar/DARIC.y"
           { (yyval.ast) = token(TICK); }
#line 6191 "src/parser/bison.cpp"
    break;

  case 327:
#line 543 "Grammar/DARIC.y"
                                     { (yyval.ast) = token1(SPC, (yyvsp[-1].ast)); }
#line 6197 "src/parser/bison.cpp"
    break;

  case 328:
#line 544 "Grammar/DARIC.y"
                { (yyval.ast) = token(SEMICOLON); }
#line 6203 "src/parser/bison.cpp"
    break;

  case 329:
#line 548 "Grammar/DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6209 "src/parser/bison.cpp"
    break;

  case 330:
#line 549 "Grammar/DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6215 "src/parser/bison.cpp"
    break;

  case 332:
#line 557 "Grammar/DARIC.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6221 "src/parser/bison.cpp"
    break;

  case 333:
#line 558 "Grammar/DARIC.y"
                                                 { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6227 "src/parser/bison.cpp"
    break;

  case 334:
#line 562 "Grammar/DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6233 "src/parser/bison.cpp"
    break;

  case 335:
#line 563 "Grammar/DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6239 "src/parser/bison.cpp"
    break;

  case 336:
#line 564 "Grammar/DARIC.y"
                      { (yyval.ast) = token1(RETURN_PARAMETER, (yyvsp[0].ast)); }
#line 6245 "src/parser/bison.cpp"
    break;

  case 337:
#line 568 "Grammar/DARIC.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 6251 "src/parser/bison.cpp"
    break;

  case 338:
#line 569 "Grammar/DARIC.y"
                                             { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6257 "src/parser/bison.cpp"
    break;

  case 339:
#line 573 "Grammar/DARIC.y"
                    { (yyval.ast) = NULL; }
#line 6263 "src/parser/bison.cpp"
    break;

  case 340:
#line 574 "Grammar/DARIC.y"
               { (yyval.ast) = (yyvsp[0].ast); }
#line 6269 "src/parser/bison.cpp"
    break;

  case 341:
#line 578 "Grammar/DARIC.y"
                   { (yyval.ast) = (yyvsp[0].ast); }
#line 6275 "src/parser/bison.cpp"
    break;

  case 342:
#line 579 "Grammar/DARIC.y"
                                         { (yyval.ast) = link((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6281 "src/parser/bison.cpp"
    break;

  case 343:
#line 583 "Grammar/DARIC.y"
                                         { (yyval.ast) = token2(WHEN, (yyvsp[-2].ast), (yyvsp[-1].ast)); }
#line 6287 "src/parser/bison.cpp"
    break;

  case 344:
#line 587 "Grammar/DARIC.y"
           { (yyval.ast) = (yyvsp[0].ast); }
#line 6293 "src/parser/bison.cpp"
    break;

  case 345:
#line 588 "Grammar/DARIC.y"
                     { (yyval.ast) = link((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6299 "src/parser/bison.cpp"
    break;

  case 346:
#line 591 "Grammar/DARIC.y"
                                                                           { (yyval.ast) = token3typed(DEFPROC, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::NOTYPE); }
#line 6305 "src/parser/bison.cpp"
    break;

  case 347:
#line 592 "Grammar/DARIC.y"
                                                                              { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::INTEGER); }
#line 6311 "src/parser/bison.cpp"
    break;

  case 348:
#line 593 "Grammar/DARIC.y"
                                                                           { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::REAL); }
#line 6317 "src/parser/bison.cpp"
    break;

  case 349:
#line 594 "Grammar/DARIC.y"
                                                                             { (yyval.ast) = token3typed(DEFFN, string((yyvsp[-6].v_string)), (yyvsp[-4].ast), (yyvsp[-1].ast), Type::STRING); }
#line 6323 "src/parser/bison.cpp"
    break;


#line 6327 "src/parser/bison.cpp"

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
#line 597 "Grammar/DARIC.y"


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
