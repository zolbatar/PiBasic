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
    : DIM varDeclWithDimension (COMMA varDeclWithDimension)*        # stmtDIM
    | INPUT (strExpr COMMA)? varList                                # stmtINPUT
    | (LET? | GLOBAL?) varDecl EQ expr (COMMA varDecl EQ expr)*     # stmtLET
    | LOCAL varDecl EQ expr (COMMA varDecl EQ expr)*                # stmtLOCAL
    | PRINT printList?                                              # stmtPRINT
    | TYPE varName LPAREN justVar (COMMA justVar)* RPAREN           # stmtTYPE
    ;

// Variables
var
    : numVar
    | strVar
    ;

numVar
    : varName                                                       #numVarFloat
    | varName (LPAREN numExpr (COMMA numExpr)? RPAREN)*             #numVarFloatArray
    | varNameInteger                                                #numVarInteger
    | varNameInteger (LPAREN numExpr (COMMA numExpr)? RPAREN)*      #numVarIntegerArray
    ;

strVar
    : varNameString                                                 #numVarString
    | varNameString (LPAREN numExpr (COMMA numExpr)? RPAREN)*       #numVarStringArray
    ;

justVar
    : varName           
    | varNameInteger        
    | varNameString
    ;

varName
    : VARIABLE
    ;

varNameInteger
    : VARIABLE_I
    ;

varNameString
    : VARIABLE_S
    ;

varDecl
    : var                                              #varDeclInd
    | var (LPAREN numExpr (COMMA numExpr)? RPAREN)*    #varDeclArrayed
    ;
   
varDeclWithDimension
    : var (LPAREN numExpr (COMMA numExpr)? RPAREN)*
    ;

// Lists
varList
    : varDecl (COMMA varDecl)*
    ;

exprList
    : expr (COMMA expr)*
    ;

printListItem
    : expr                          # printListExpr
    | TICK                          # printListTick
    | SPC LPAREN numExpr RPAREN     # printListSPCP
    | SPC numExpr                   # printListSPC
    ;

printList
    : TILDE? printListItem ((COMMA | SEMICOLON) TILDE? printListItem?)*
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
    : TIMES                                                     #strFuncTIMES   
    | CHRS LPAREN numExpr RPAREN                                #strFuncCHRSP
    | CHRS numExpr                                              #strFuncCHRS
    | LEFTS LPAREN strExpr COMMA numExpr RPAREN                 #strFuncLEFTS
    | MIDS LPAREN strExpr COMMA numExpr COMMA numExpr RPAREN    #strFuncMIDS3
    | MIDS LPAREN strExpr COMMA numExpr RPAREN                  #strFuncMIDS2
    | RIGHTS LPAREN strExpr COMMA numExpr RPAREN                #strFuncRIGHTS
    | STRS LPAREN numExpr RPAREN                                #strFuncSTRS
    | STRS TILDE LPAREN numExpr RPAREN                          #strFuncSTRSHEX
    | STRINGS LPAREN numExpr COMMA strExpr RPAREN               #strFuncSTRINGS
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
    : PI                                    #numFuncPI
    | TIME                                  #numFuncTIME
    | RND                                   #numFuncRND
    | RND0                                  #numFuncRND0
    | RND1                                  #numFuncRND1
    | RND LPAREN numExpr RPAREN             #numFuncRNDRANGE
    | LN LPAREN numExpr RPAREN              #numFuncLN
    | LOG LPAREN numExpr RPAREN             #numFuncLOG
    | EXP LPAREN numExpr RPAREN             #numFuncEXP
    | ATN LPAREN numExpr RPAREN             #numFuncATN
    | TAN LPAREN numExpr RPAREN             #numFuncTAN
    | COS LPAREN numExpr RPAREN             #numFuncCOS
    | SIN LPAREN numExpr RPAREN             #numFuncSIN
    | ABS LPAREN numExpr RPAREN             #numFuncABS
    | ACS LPAREN numExpr RPAREN             #numFuncACS
    | ASN LPAREN numExpr RPAREN             #numFuncASN
    | DEG LPAREN numExpr RPAREN             #numFuncDEG
    | RAD LPAREN numExpr RPAREN             #numFuncRAD
    | SQR LPAREN numExpr RPAREN             #numFuncSQR
    | SGN LPAREN numExpr RPAREN             #numFuncSGN
    
    /* String to number */
    | ASC LPAREN strExpr RPAREN                                     #numFuncASC
    | LEN LPAREN strExpr RPAREN                                     #numFuncLEN
    | INSTR LPAREN strExpr COMMA strExpr RPAREN                     #numFuncINSTR2
    | INSTR LPAREN strExpr COMMA strExpr COMMA numExpr RPAREN       #numFuncINSTR3
    | VAL LPAREN strExpr RPAREN                                     #numFuncVAL
    ;

numExpr
    : number                                #numExprNumber
    | numFunc                               #numExprFunc
    | NOT numExpr                           #numExprNOT
    | LPAREN numExpr RPAREN                 #numExprNested
    | <assoc=right> numExpr HAT numExpr     #numExprHat
    | numExpr MULTIPLY numExpr              #numExprMultiply
    | numExpr DIVIDE numExpr                #numExprDivide
    | numExpr DIV numExpr                   #numExprDIV
    | numExpr MOD numExpr                   #numExprMOD
    | numExpr PLUS numExpr                  #numExprPlus
    | numExpr MINUS numExpr                 #numExprSubtract
    | numExpr compare numExpr               #numExprNumRelop
    | strExpr compare strExpr               #numExprStrRelop
    | numExpr SHL numExpr                   #numExprSHL
    | numExpr SHR numExpr                   #numExprSHR
    | numExpr AND numExpr                   #numExprAND
    | numExpr OR numExpr                    #numExprOR
    | numExpr EOR numExpr                   #numExprEOR
    ;

compare
    : EQ        #compareEQ
    | NE        #compareNE
    | GT        #compareGT
    | GE        #compareGE
    | LT        #compareLT
    | LE        #compareLE
    ;
   
// Lexer stuff
DIM             : 'DIM' | 'Dim' | 'dim' ;
FIELD           : 'FIELD' | 'Field' | ' field' ;
INPUT           : 'INPUT' | 'Input' | 'input' ;
GLOBAL          : 'GLOBAL' | 'Global' | 'global' ;
LOCAL           : 'LOCAL' | 'Local' | 'local' ;
LET             : 'LET' | 'Let' | 'let' ;
PRINT           : 'PRINT' | 'Print' | 'print' ;
REM             : 'REM' | 'Rem' | 'rem' ;
SPC             : 'SPC' | 'Spc' | 'spc' ;
TYPE            : 'TYPE' | 'Type' | 'type';

TIME            : 'TIME' | 'Time' | 'time' ;
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

TIMES           : 'TIME$' | 'Time$' | 'time$' ;
STRS            : 'STR$' | 'Str$' | 'str$' ;
STRINGS         : 'STRING$' | 'String$' | 'string$' ;
CHRS            : 'CHR$' | 'Chr$' | 'chr$' ;
LEFTS           : 'LEFT$' | 'Left$' | 'left$' ;
MIDS            : 'MID$' | 'Mid$' | 'mid$' ;
RIGHTS          : 'RIGHT$' | 'Right$' | 'right$' ;

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

TICK            : '\'' ;
TILDE           : '~' ;
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
VARIABLE        : ([a-z]|[A-Z]|[_])+([a-z]|[A-Z]|[_]|[0-9])* ;
VARIABLE_I      : ([a-z]|[A-Z]|[_])+([a-z]|[A-Z]|[_]|[0-9])*'%' ;
VARIABLE_S      : ([a-z]|[A-Z]|[_])+([a-z]|[A-Z]|[_]|[0-9])*'$' ;
LETTERS         : [a-z|A-Z]+ ;
HEXNUMBER       : '&' [0-9A-Fa-f]+ ;
BINARYNUMBER    : '%' [0|1]+ ;
NUMBER          : [0-9]+ ([e|E] NUMBER)* ;
FLOAT           : [0-9]* '.' [0-9]* ([e|E] [0-9]+ )* ;
WS              : [ \r\n\t] + -> channel (HIDDEN) ;