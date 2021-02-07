grammar DARIC;

prog
    : line* EOF
    ;

line
    : NEWLINE
    | COLON NEWLINE
    | content NEWLINE
    | linenumber content NEWLINE
    ;

content
    : ((stmt (COLON stmt?)*) | (COMMENT | REM))
    ;

body
    : content
    | line
    ;

bodyStar
    : body*
    ;

linenumber
    : NUMBER
    ;

stmt
    : BREAKPOINT                                                            # stmtBREAKPOINT
    | CASE expr OF NEWLINE when+ (OTHERWISE bodyStar)? ENDCASE              # stmtCASE
    | CHAIN strExpr                                                         # stmtCHAIN
    | DATA literal (COMMA literal)*                                         # stmtDATA
    | DIM varDeclWithDimension (COMMA varDeclWithDimension)*                # stmtDIM
    | END                                                                   # stmtEND
    | EQ expr?                                                              # stmtRETURN
    | RETURN expr?                                                          # stmtRETURN
    | DEF fnName LPAREN functionVarList? RPAREN COLON? bodyStar ENDFN       # stmtDEFFN
    | DEF PROC_NAME LPAREN functionVarList? RPAREN COLON? bodyStar ENDPROC  # stmtDEFPROC
    | fnName LPAREN functionParList? RPAREN                                 # stmtCallFN
    | IF expr THEN? t=content (ELSE f=content)?                             # stmtIF
    | IF expr THEN? t=bodyStar (ELSE f=bodyStar)? ENDIF                     # stmtIFMultiline
    | INPUT (strExpr COMMA)? varList                                        # stmtINPUT
    | (LET? | GLOBAL?) varDecl EQ expr (COMMA varDecl EQ expr)*             # stmtLET
    | LOCAL varDecl EQ expr (COMMA varDecl EQ expr)*                        # stmtLOCAL
    | LOCAL DIM varDeclWithDimension (COMMA varDeclWithDimension)*          # stmtLOCALDIM
    | PRINT printList?                                                      # stmtPRINT
    | PROC_NAME LPAREN functionParList? RPAREN                              # stmtCallPROC
    | READ varDecl (COMMA varDecl)*                                         # stmtREAD
    | RESTORE                                                               # stmtRESTORE
    | TRACEON                                                               # stmtTRACEON
    | TRACEOFF                                                              # stmtTRACEOFF
    | TYPE varName LPAREN justVar (COMMA justVar)* RPAREN                   # stmtTYPE
    | REPEAT body* UNTIL expr                                               # stmtREPEAT
    | WHILE expr body* ENDWHILE                                             # stmtWHILE
    ;

when
    : WHEN expr (COMMA expr)* COLON bodyStar
    ;

fnName
    : FN_FLOAT
    | FN_INTEGER
    | FN_STRING
    ;

literal
    : number
    | string
    ;

var
    : numVar
    | strVar
    | typeVar
    ;

typeVar
    : varNameType                                                   #typeVarType
    ;

numVar
    : varName                                                       #numVarFloat
    | varName (LPAREN numExpr (COMMA numExpr)? RPAREN)*             #numVarFloatArray
    | varNameInteger                                                #numVarInteger
    | varNameInteger (LPAREN numExpr (COMMA numExpr)? RPAREN)*      #numVarIntegerArray
    | typeVar varName                                               #numVarFloatField
    | typeVar LPAREN numExpr RPAREN varName                         #numVarFloatFieldArray
    | typeVar varNameInteger                                        #numVarIntegerField
    | typeVar LPAREN numExpr RPAREN varNameInteger                  #numVarIntegerFieldArray
    | FN_FLOAT LPAREN functionParList? RPAREN                       #numVarFloatFN
    | FN_INTEGER LPAREN functionParList? RPAREN                     #numVarIntegerFN
    | FN_STRING LPAREN functionParList? RPAREN                      #numVarStringFN
    ;

strVar
    : varNameString                                                 #numVarString
    | varNameString (LPAREN numExpr (COMMA numExpr)? RPAREN)*       #numVarStringArray
    | typeVar varNameString                                         #numVarStringField
    | typeVar LPAREN numExpr RPAREN varNameString                   #numVarStringFieldArray
    ;

justVar
    : varName
    | varNameInteger
    | varNameString
    ;

varName
    : VARIABLE_FLOAT
    ;

varNameInteger
    : VARIABLE_INTEGER
    ;

varNameString
    : VARIABLE_STRING
    ;

varNameType
    : VARIABLE_TYPE
    ;

varDecl
    : var                                               #varDeclInd
    | var (LPAREN numExpr (COMMA numExpr)? RPAREN)*     #varDeclArrayed
    | typeVar varName                                   #varDeclType
    | typeVar LPAREN numExpr RPAREN varName             #varDeclTypeArrayed
    ;
   
varDeclWithDimension
    : var LPAREN numExpr (COMMA numExpr)* RPAREN
    ;

// Lists
varList
    : varDecl (COMMA varDecl)*
    ;

functionVarList
    : RETURN? justVar (COMMA RETURN? justVar)*
    ;

functionParList
    : expr (COMMA expr)*
    ;

exprList
    : expr (COMMA expr)*
    ;

printListItem
    : TILDE? expr                   # printListExpr
    | SPC LPAREN numExpr RPAREN     # printListSPCP
    | SPC numExpr                   # printListSPC
    ;

printStartingTicks                  
    : (TICK)+                       # printListTick
    ;

printList
    : printStartingTicks? COMMA?  printListItem ((COMMA | SEMICOLON | TICK) printListItem?)*
    ;

// Expressions and such
expr
    : numExpr
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
    | numVar                                #numExprVar
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
BREAKPOINT      : 'BREAKPOINT' | 'Breakpoint' | 'breakpoint' ;
CASE            : 'CASE' | 'Case' | 'case' ;
CHAIN           : 'CHAIN' | 'Chain' | 'chain' ;
DATA            : 'DATA' | 'Data' | 'data' ;
DEF             : 'DEF' | 'Def' | 'def' ;
DIM             : 'DIM' | 'Dim' | 'dim' ;
ELSE            : 'ELSE' | 'Else' | 'else' ;
END             : 'END' | 'End' | 'end' ;
ENDCASE         : 'ENDCASE' | 'EndCase' | 'endcase' ;
ENDIF           : 'ENDIF' | 'EndIf' | 'endif' ;
ENDFN           : 'ENDFN' | 'EndFn' | 'endfn' ;
ENDPROC         : 'ENDPROC' | 'EndProc' | 'endproc' ;
ENDWHILE        : 'ENDWHILE' | 'EndWhile' | 'endwhile' ;
FN              : 'FN' | 'Fn' | 'fn' ;
IF              : 'IF' | 'If' | 'if' ;
INPUT           : 'INPUT' | 'Input' | 'input' ;
GLOBAL          : 'GLOBAL' | 'Global' | 'global' ;
LOCAL           : 'LOCAL' | 'Local' | 'local' ;
LET             : 'LET' | 'Let' | 'let' ;
THEN            : 'THEN' | 'Then' | 'then' ;
OF              : 'OF' | 'Of' | 'of' ;
OTHERWISE       : 'OTHERWISE' | 'Otherwise' | 'otherwise' ;
PRINT           : 'PRINT' | 'Print' | 'print' ;
PROC            : 'PROC' | 'Proc' | 'proc' ;
READ            : 'READ' | 'Read' | 'read' ;
REM             : 'REM' | 'Rem' | 'rem' ;
REPEAT          : 'REPEAT' | 'Repeat' | 'repeat' ;
RESTORE         : 'RESTORE' | 'Restore' | 'restore' ;
RETURN          : 'RETURN' | 'Return' | 'return' ;
SPC             : 'SPC' | 'Spc' | 'spc' ;
TRACEON         : 'TRACEON' | 'TraceOn' | 'traceon';
TRACEOFF        : 'TRACEOFF' | 'TraceOff' | 'traceoff';
TYPE            : 'TYPE' | 'Type' | 'type';
UNTIL           : 'UNTIL' | 'Until' | 'until' ;
WHEN            : 'WHEN' | 'When' | 'when' ;
WHILE           : 'WHILE' | 'While' | 'while' ;

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
PLUS_E          : '+=' ;
MINUS_E         : '-=' ;
MULTIPLY_E      : '*=' ;
DIVIDE_E        : '/=' ;
SHL_E           : '<<=' ;
SHR_E           : '>>=' ;

NEWLINE         : '\n'+ ;
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
PROC_NAME         : PROC NAME ;
FN_INTEGER        : FN NAME '%' ;
FN_FLOAT          : FN NAME ;
FN_STRING         : FN NAME '$' ;
VARIABLE_FLOAT    : NAME ;
VARIABLE_INTEGER  : NAME '%' ;
VARIABLE_STRING   : NAME '$' ;
VARIABLE_TYPE   : NAME '!' ;
NAME            : ALPHA  (ALPHA|DIGIT)* ;
HEXNUMBER       : '&' [0-9A-Fa-f]+ ;
BINARYNUMBER    : '%' [0|1]+ ;
NUMBER          : DIGIT+ ([e|E] NUMBER)* ;
FLOAT           : DIGIT* '.' DIGIT* ([e|E] [0-9]+ )* ;
ALPHA           : [a-zA-Z] ;
DIGIT           : [0-9] ;
WS              : [ \r\t] + -> channel (HIDDEN) ;