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
    ;

numFunc
    : PI
    ;

numExpr
    : number
    | numFunc
    | LPAREN numExpr RPAREN
    | numExpr relop numExpr
    | strExpr relop strExpr
    | numExpr PLUS numExpr
    | numExpr MINUS numExpr
    | numExpr MULTIPLY numExpr
    | numExpr DIVIDE numExpr
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
AND             : 'AND' | 'And' | 'and' ;
LET             : 'LET' | 'Let' | 'let' ;
MIDS            : 'MID$' | 'Mid$' | 'mid$' ;
OR              : 'OR' | 'Or' | 'or' ;
PI              : 'PI' | 'Pi' | 'pi' ;
PRINT           : 'PRINT' | 'Print' | 'print' ;
REM             : 'REM' | 'Rem' | 'rem' ;

EQ              : '=' ;
NE              : '<>' ;
GT              : '>' ;
GE              : '>=' ;
LT              : '<' ;
LE              : '<=' ;

PLUS            : '+' ;
MINUS           : '-' ;
MULTIPLY        : '*' ;
DIVIDE          : '/' ;

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