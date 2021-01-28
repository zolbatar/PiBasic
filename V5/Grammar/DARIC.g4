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
    : LET? variableassignment
    | PRINT printlist?
    ;

// Variables
var
    : num_var
    | str_var
    ;

num_var
    : varname
    | varname PERCENT
    ;

str_var
    : varname DOLLAR
    ;

varname
    : LETTERS (LETTERS | NUMBER | UNDERSCORE)*
    ;

vardecl
    : var (LPAREN exprlist RPAREN)*
    ;
   
variableassignment
    : vardecl EQ exprlist
    ;
   
// Lists
varlist
    : vardecl (COMMA vardecl)*
    ;

exprlist
    : expr (COMMA expr)*
    ;

printlist
    : expr ((COMMA | SEMICOLON) expr?)*
    ;

// Expressions and such
expr
    : num_expr
    | num_var
    | str_expr
    ;

number
    :  (PLUS | MINUS)? (NUMBER | FLOAT)
    ;

str_func
    : MIDS LPAREN str_expr COMMA num_expr COMMA num_expr RPAREN
    ;

str_expr
    : STRINGLITERAL
    | str_var
    | str_func
    ;

num_func
    : PI
    ;

num_expr
    : number
    | num_func
    | LPAREN num_expr RPAREN
    | num_expr relop num_expr
    | str_expr relop str_expr
    | num_expr PLUS num_expr
    | num_expr MINUS num_expr
    | num_expr MULTIPLY num_expr
    | num_expr DIVIDE num_expr
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
AND             : 'AND' | 'And' ;
LET             : 'LET' | 'Let' ;
MIDS            : 'MID$' | 'Mid$' ;
OR              : 'OR' | 'Or' ;
PI              : 'PI' | 'Pi' ;
PRINT           : 'PRINT' | 'Print' ;
REM             : 'REM' | 'Rem' ;

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
NUMBER          : ('0' .. '9') + (('e' | 'E') NUMBER)* ;
FLOAT           : ('0' .. '9')* '.' ('0' .. '9') + (('e' | 'E') ('0' .. '9') +)* ;
WS              : [ \r\n\t] + -> channel (HIDDEN) ;