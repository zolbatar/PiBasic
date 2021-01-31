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
PI              : 'PI' | 'Pi' | 'pi' ;
PRINT           : 'PRINT' | 'Print' | 'print' ;
REM             : 'REM' | 'Rem' | 'rem' ;

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
BINARYNUMBER    : '&' [0|1]+ ;
NUMBER          : [0-9] + ([e|E] NUMBER)* ;
FLOAT           : [0-9]* '.' [0-9]* ([e|E] [0-9]+ )* ;
WS              : [ \r\n\t] + -> channel (HIDDEN) ;