/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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
/* Line 2058 of yacc.c  */
#line 22 "parser.y"

    int v_int;
    double v_float;
    const char *v_string;
    struct ast *ast;


/* Line 2058 of yacc.c  */
#line 236 "parser.hpp"
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
