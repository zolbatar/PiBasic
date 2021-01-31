grammar DARIC;

prog
    : line + EOF
    ;

line
    : ((stmt (COLON stmt?)*) | (COMMENT | REM))
    | (linenumber ((stmt (COLON stmt?)*) | (COMMENT | REM)))
    ;

linenumber
    : NUMBER
    ;

stmt
    : LET? varAssign
    | PRINT printList?
    ;

// Variables
var
    : numVar
    | strVar
    ;

numVar
    : varName
    | varName PERCENT
    ;

strVar
    : varName DOLLAR
    ;

varName
    : LETTERS (LETTERS | NUMBER | UNDERSCORE)*
    ;

varDecl
    : var (LPAREN exprList RPAREN)*
    ;
   
varAssign
    : varDecl EQ expr (COMMA varDecl EQ expr)*
    ;
   
// Lists
varList
    : varDecl (COMMA varDecl)*
    ;

exprList
    : expr (COMMA expr)*
    ;

printList
    : expr ((COMMA | SEMICOLON) expr?)*
    ;

// Expressions and such
expr
    : numExpr
    | numVar
    | strExpr
    ;
    
number
    : numberInteger
    | numberFloat
    | numberHex
    | numberBinary
    ;

numberInteger
    :  (PLUS | MINUS)? NUMBER
    ;

numberHex
    :  HEXNUMBER
    ;

numberBinary
    :  BINARYNUMBER
    ;

numberFloat
    :  (PLUS | MINUS)? FLOAT
    ;

strFunc
    : MIDS LPAREN strExpr COMMA numExpr COMMA numExpr RPAREN
    ;

string
    : STRINGLITERAL
    ;

strExpr
    : string
    | strVar
    | strFunc
    | strExpr PLUS strExpr
    ;

numFunc
    : PI
    | RND
    | RND0
    | RND1
    | RND LPAREN numExpr RPAREN
    | SQR LPAREN numExpr RPAREN
    | LN LPAREN numExpr RPAREN
    | LOG LPAREN numExpr RPAREN
    | EXP LPAREN numExpr RPAREN
    | ATN LPAREN numExpr RPAREN
    | TAN LPAREN numExpr RPAREN
    | COS LPAREN numExpr RPAREN
    | SIN LPAREN numExpr RPAREN
    | ABS LPAREN numExpr RPAREN
    | ACS LPAREN numExpr RPAREN
    | ASN LPAREN numExpr RPAREN
    | DEG LPAREN numExpr RPAREN
    | RAD LPAREN numExpr RPAREN
    | SQR LPAREN numExpr RPAREN
    | SGN LPAREN numExpr RPAREN
    
    /* String to number */
    | ASC LPAREN strExpr RPAREN
    | LEN LPAREN strExpr RPAREN
    | INSTR LPAREN strExpr COMMA strExpr RPAREN
    | INSTR LPAREN strExpr COMMA strExpr COMMA numExpr RPAREN
    | VAL LPAREN strExpr RPAREN
    ;

numExpr
    : number
    | numFunc
    | NOT numExpr
    | LPAREN numExpr RPAREN
    | <assoc=right> numExpr HAT numExpr
    | numExpr MULTIPLY numExpr
    | numExpr DIVIDE numExpr
    | numExpr DIV numExpr
    | numExpr MOD numExpr
    | numExpr PLUS numExpr
    | numExpr MINUS numExpr
    | numExpr relop numExpr
    | strExpr relop strExpr
    | numExpr SHL numExpr
    | numExpr SHR numExpr
    | numExpr AND numExpr
    | numExpr NOT numExpr
    | numExpr OR numExpr
    | numExpr EOR numExpr
    ;

relop
    : EQ
    | NE
    | GT
    | GE
    | LT
    | LE
    | AND
    | OR
    ;
   
// Lexer stuff
LET             : 'LET' | 'Let' | 'let' ;
MIDS            : 'MID$' | 'Mid$' | 'mid$' ;
PRINT           : 'PRINT' | 'Print' | 'print' ;
REM             : 'REM' | 'Rem' | 'rem' ;

PI              : 'PI' | 'Pi' | 'pi' ;
SQR             : 'SQR' | 'Sqr' | 'sqr' ;
LN              : 'LN' | 'Ln' | 'ln' ;
LOG             : 'LOG' | 'Log' | 'log' ;
EXP             : 'EXP' | 'Exp' | 'exp' ;
ATN             : 'ATN' | 'Atn' | 'atn' ;
TAN             : 'TAN' | 'Tan' | 'tan' ;
COS             : 'COS' | 'Cos' | 'cos' ;
SIN             : 'SIN' | 'Sin' | 'sin' ;
ABS             : 'ABS' | 'Abs' | 'abs' ;
ACS             : 'ACS' | 'Acs' | 'acs' ;
ASN             : 'ASN' | 'Asn' | 'asn' ;
DEG             : 'DEG' | 'Deg' | 'deg' ;
RAD             : 'RAD' | 'Rad' | 'rad' ;
SGN             : 'SGN' | 'Sgn' | 'sgn' ;

ASC             : 'ASC' | 'Asc' | 'asc' ;
LEN             : 'LEN' | 'Len' | 'len' ;
INSTR           : 'INSTR' | 'Instr' | 'instr' ;
VAL             : 'VAL' | 'Val' | 'val' ;

RND             : 'RND' | 'Rnd' | 'rnd' ;
RND0            : 'RND(0)' | 'Rnd(0)' | 'rnd(0)' ;
RND1            : 'RND(1)' | 'Rnd(1)' | 'rnd(1)' ;

EQ              : '=' ;
NE              : '<>' ;
GT              : '>' ;
GE              : '>=' ;
LT              : '<' ;
LE              : '<=' ;

NOT             : 'NOT' | 'Not' | 'not' ;
AND             : 'AND' | 'And' | 'and' ;
OR              : 'OR' | 'Or' | 'or' ;
EOR             : 'EOR' | 'Eor' | 'eor' ;

MOD             : 'MOD' | 'Mod' | 'mod' ;
DIV             : 'DIV' | 'Div' | 'div' | '//';
HAT             : '^' ;
PLUS            : '+' ;
MINUS           : '-' ;
MULTIPLY        : '*' ;
DIVIDE          : '/' ;
SHL             : '<<' ;
SHR             : '>>' ;

COLON           : ':' ;
COMMA           : ',' ;
DOLLAR          : '$' ;
LPAREN          : '(' ;
PERCENT         : '%' ;
RPAREN          : ')' ;
SEMICOLON       : ';' ;
UNDERSCORE      : '_' ;
COMMENT         : REM ~ [\r\n]* ;
STRINGLITERAL   : '"' ~ ["\r\n]* '"' ;
LETTERS         : ('a' .. 'z' | 'A' .. 'Z')+ ;
HEXNUMBER       : '&' [0-9A-Fa-f]+ ;
BINARYNUMBER    : '%' [0|1]+ ;
NUMBER          : [0-9]+ ([e|E] NUMBER)* ;
FLOAT           : [0-9]* '.' [0-9]* ([e|E] [0-9]+ )* ;
WS              : [ \r\n\t] + -> channel (HIDDEN) ;