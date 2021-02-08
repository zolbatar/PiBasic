grammar DARIC;

prog
    : line* EOF
    ;

line
    : NEWLINE
    | linenumber
    | linenumber? COLON NEWLINE
    | linenumber? content NEWLINE
    ;

content
    : stmt (COLON stmt?)*
    ;

body
    : content
    | line
    ;

bodyStar
    : COLON? body*
    ;

linenumber
    : NUMBER
    ;

stmt
    : (COMMENT | REM)                                                                   #stmtREM
    | BREAKPOINT                                                                        #stmtBREAKPOINT
    | CASE expr OF NEWLINE when+ (OTHERWISE bodyStar)? ENDCASE                          #stmtCASE
    | CHAIN strExpr                                                                     #stmtCHAIN
    | DATA literal (COMMA literal)*                                                     #stmtDATA
    | DIM varDeclWithDimension (COMMA varDeclWithDimension)*                            #stmtDIM
    | END                                                                               #stmtEND
    | RETURN expr?                                                                      #stmtRETURN
    | DEF fnName LPAREN functionVarList? RPAREN bodyStar ENDFN                          #stmtDEFFN
    | DEF PROC_NAME LPAREN functionVarList? RPAREN bodyStar ENDPROC                     #stmtDEFPROC
    | FOR LOCAL? justNumberVar EQ numExpr TO numExpr (STEP numExpr)? bodyStar NEXT      #stmtFOR
    | FOR LOCAL? justVar IN justVar LPAREN RPAREN bodyStar NEXT                         #stmtFORIN
    | fnName LPAREN functionParList? RPAREN                                             #stmtCallFN
    | IF expr THEN? t=content (ELSE f=content)?                                         #stmtIF
    | IF expr THEN? NEWLINE t=bodyStar (ELSE f=bodyStar)? NEWLINE ENDIF                 #stmtIFMultiline
    | INPUT (strExpr COMMA)? varList                                                    #stmtINPUT
    | (LET? | GLOBAL?) varDecl EQ expr (COMMA varDecl EQ expr)*                         #stmtLET
    | LOCAL varDecl EQ expr (COMMA varDecl EQ expr)*                                    #stmtLOCAL
    | LOCAL DIM varDeclWithDimension (COMMA varDeclWithDimension)*                      #stmtLOCALDIM
    | OSCLI strExpr                                                                     #stmtOSCLI
    | PRINT printList?                                                                  #stmtPRINT
    | PROC_NAME LPAREN functionParList? RPAREN                                          #stmtCallPROC
    | READ varDecl (COMMA varDecl)*                                                     #stmtREAD
    | RESTORE                                                                           #stmtRESTORE
    | SWAP justVar COMMA justVar                                                        #stmtSWAP
    | TRACEON                                                                           #stmtTRACEON
    | TRACEOFF                                                                          #stmtTRACEOFF
    | TYPE varName LPAREN justVar (COMMA justVar)* RPAREN                               #stmtTYPE
    | REPEAT body* UNTIL expr                                                           #stmtREPEAT
    | WHILE expr body* ENDWHILE                                                         #stmtWHILE

    /* += and its ilk */
    | varDecl MULTIPLY_E numExpr                                                        #stmtOperatorEqual
    | varDecl DIVIDE_E numExpr                                                          #stmtOperatorEqual
    | varDecl PLUS_E numExpr                                                            #stmtOperatorEqual
    | varDecl MINUS_E numExpr                                                           #stmtOperatorEqual
    | varDecl SHL_E numExpr                                                             #stmtOperatorEqual
    | varDecl SHR_E numExpr                                                             #stmtOperatorEqual

    /* I/O */
    | BPUTH numExpr COMMA numExpr                                                       #stmtBPUTH
    | BGETH numExpr                                                                     #stmtBGETH
    | PTRH numExpr EQ numExpr                                                           #stmtPTRH
    | CLOSEH numExpr                                                                    #stmtCLOSEH
    | LOCAL? varNameString LPAREN RPAREN EQ LISTFILES LPAREN strExpr RPAREN             #stmtLISTFILES
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
    : varName LPAREN numExpr (COMMA numExpr)? RPAREN                #numVarFloatArray
    | varNameInteger LPAREN numExpr (COMMA numExpr)? RPAREN         #numVarIntegerArray
    | typeVar LPAREN numExpr RPAREN varName                         #numVarFloatFieldArray
    | FN_FLOAT LPAREN functionParList? RPAREN                       #numVarFloatFN
    | FN_INTEGER LPAREN functionParList? RPAREN                     #numVarIntegerFN
    | FN_STRING LPAREN functionParList? RPAREN                      #numVarStringFN
    | varName                                                       #numVarFloat
    | varNameInteger                                                #numVarInteger
    | typeVar varName                                               #numVarFloatField
    | typeVar varNameInteger                                        #numVarIntegerField
    | typeVar LPAREN numExpr RPAREN varNameInteger                  #numVarIntegerFieldArray
    ;

strVar
    : varNameString LPAREN numExpr (COMMA numExpr)? RPAREN          #numVarStringArray
    | typeVar LPAREN numExpr RPAREN varNameString                   #numVarStringFieldArray
    | varNameString                                                 #numVarString
    | typeVar varNameString                                         #numVarStringField
    ;

justVar
    : varName
    | varNameInteger
    | varNameString
    ;

justNumberVar
    : varName
    | varNameInteger
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
    : justVar                                               #varDeclInd
    | justVar (LPAREN numExpr (COMMA numExpr)? RPAREN)*     #varDeclArrayed
    | typeVar varName                                       #varDeclTypeVar
    | typeVar LPAREN numExpr RPAREN varName                 #varDeclTypeVarArrayed
    | typeVar                                               #varDeclType
    | typeVar LPAREN numExpr RPAREN                         #varDeclTypeArrayed

    ;
   
varDeclWithDimension
    : justVar LPAREN numExpr (COMMA numExpr)* RPAREN
    | typeVar LPAREN numExpr COMMA varName RPAREN
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

printListTick                  
    : TICK+
    ;

printListSeparator
    : COMMA
    | SEMICOLON
    | printListTick
    ;

printList
    : printListTick? s1=SEMICOLON? printListItem (printListSeparator printListItem)* s2=SEMICOLON?
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
    | numColours
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
    : strFunc
    | strExpr PLUS strExpr
    | string
    | strVar
    ;

numFunc
    : PI                                    #numFuncPI
    | FALSE                                 #numFuncFALSE
    | TRUE                                  #numFuncTRUE
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

    /* I/O */
    | BGETH numExpr                         #numFuncBGETH
    | EOFH numExpr                          #numFuncEOFH
    | OPENIN LPAREN strExpr RPAREN          #numFuncOPENIN
    | OPENOUT LPAREN strExpr RPAREN         #numFuncOPENOUT
    | OPENUP LPAREN strExpr RPAREN          #numFuncOPENUP
    | PTRH numExpr                          #numFuncPTR
    
    /* String to number */
    | ASC LPAREN strExpr RPAREN                                     #numFuncASC
    | LEN LPAREN strExpr RPAREN                                     #numFuncLEN
    | INSTR LPAREN strExpr COMMA strExpr RPAREN                     #numFuncINSTR2
    | INSTR LPAREN strExpr COMMA strExpr COMMA numExpr RPAREN       #numFuncINSTR3
    | VAL LPAREN strExpr RPAREN                                     #numFuncVAL
    ;

numExpr
    : numFunc                               #numExprFunc
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
    | number                                #numExprNumber
    | numVar                                #numExprVar
    ;

numColours
    : RED
    | GREEN
    | YELLOW
    | BLUE
    | MAGENTA
    | CYAN
    | WHITE
    | BLACK 
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
BREAKPOINT      : B R E A K P O I N T ;
CASE            : C A S E ;
CHAIN           : C H A I N ;
DATA            : D A T A ;
DEF             : D E F ;
DIM             : D I M ;
ELSE            : E L S E ;
END             : E N D ;
ENDCASE         : E N D C A S E ;
ENDIF           : E N D I F ;
ENDFN           : E N D F N ;
ENDPROC         : E N D P R O C ;
ENDWHILE        : E N D W H I L E ;
FALSE           : F A L S E ;
FOR             : F O R ;
FN              : F N ;
IF              : I F ;
IN              : I N ;
INPUT           : I N P U T ;
GLOBAL          : G L O B A L ;
LOCAL           : L O C A L ;
LET             : L E T ;
NEXT            : N E X T ;
OF              : O F ;
OSCLI           : O S C L I ;
OTHERWISE       : O T H E R W I S E ;
PRINT           : P R I N T ;
PROC            : P R O C ;
READ            : R E A D ;
REM             : R E M ;
REPEAT          : R E P E A T ;
RESTORE         : R E S T O R E ;
RETURN          : R E T U R N ;
SPC             : S P C  ;
STEP            : S T E P ;
SWAP            : S W A P ;
THEN            : T H E N ;
TO              : T O ;
TRACEON         : T R A C E O N ;
TRACEOFF        : T R A C E O F F ;
TRUE            : T R U E ;
TYPE            : T Y P E ;
UNTIL           : U N T I L ;
WHEN            : W H E N ;
WHILE           : W H I L E ;

RED             : R E D  ;
GREEN           : G R E E N  ;
YELLOW          : Y E L L O W  ;
BLUE            : B L U E ;
MAGENTA         : M A G E N T A ;
CYAN            : C Y A N ;
WHITE           : W H I T E ;
BLACK           : B L A C K ;

BGETH           : B G E T HASH ;
BPUTH           : B P U T HASH ;
CLOSEH          : C L O S E HASH ;
EOFH            : E O F HASH ;
GETSH           : G E T DOLLAR HASH ;
LISTFILES       : L I S T F I L E S ;
OPENIN          : O P E N I N ;
OPENOUT         : O P E N O U T ;
OPENUP          : O P E N U P ;
PTRH            : P T R HASH ;

CIRCLE          : C I R C L E ;
CLS             : C L S ;
CLIPON          : C L I P O N;
CLIPOFF         : C L I P O F F ;
COLOUR          : C O L O U R ;
COLOURBG        : C O L O U R B G ;
FILL            : F I L L ;
FLIP            : F L I P ;
SHOWFPS         : S H O W F P S ;
GRAPHICS        : G R A P H I C S ;
LINE            : L I N E ;
RECTANGLE       : R E C T A N G L E ;
PLOT            : P L O T ;
POINT           : P O I N T ;
SHADED          : S H A D E D ;
TEXT            : T E X T ;
TEXTRIGHT       : T E X T R I G H T ;
TEXTCENTRE      : T E X T C E N T R E ;
TEXTCENTER      : T E X T C E N T E R ;
LOADTYPEFACE    : L O A D T Y P E F A C E ;
CREATEFONT      : C R E A T E F O N T ;

TIME            : T I M E ;
PI              : P I ;
SQR             : S Q R ;
LN              : L N ;
LOG             : L O G ;
EXP             : E X P ;
ATN             : A T N ;
TAN             : T A N ;
COS             : C O S ;
SIN             : S I N ;
ABS             : A B S ;
ACS             : A C S ;
ASN             : A S N ;
DEG             : D E G ;
RAD             : R A D ;
SGN             : S G N ;

ASC             : A S C ;
LEN             : L E N ;
INSTR           : I N S T R ;
VAL             : V A L ;

TIMES           : T I M E DOLLAR ;
STRS            : S T R DOLLAR ;
STRINGS         : S T R I N G DOLLAR ;
CHRS            : C H R DOLLAR ;
LEFTS           : L E F T DOLLAR ;
MIDS            : M I D DOLLAR ;
RIGHTS          : R I G H T DOLLAR ;

RND             : R N D ;
RND0            : R N D LPAREN '0' RPAREN ;
RND1            : R N D LPAREN '1' RPAREN ;

EQ              : '=' ;
NE              : '<>' ;
GT              : '>' ;
GE              : '>=' ;
LT              : '<' ;
LE              : '<=' ;

NOT             : N O T ;
AND             : A N D ;
OR              : O R ;
EOR             : E O R ;

MOD             : M O D ;
DIV             : D I V | '//';
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
HASH            : '#' ;
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

fragment A: [Aa];
fragment B: [Bb];
fragment C: [Cc];
fragment D: [Dd];
fragment E: [Ee];
fragment F: [Ff];
fragment G: [Gg];
fragment H: [Hh];
fragment I: [Ii];
fragment J: [Jj];
fragment K: [Kk];
fragment L: [Ll];
fragment M: [Mm];
fragment N: [Nn];
fragment O: [Oo];
fragment P: [Pp];
fragment Q: [Qq];
fragment R: [Rr];
fragment S: [Ss];
fragment T: [Tt];
fragment U: [Uu];
fragment V: [Vv];
fragment W: [Ww];
fragment X: [Xx];
fragment Y: [Yy];
fragment Z: [Zz];

fragment ALPHA           : [a-zA-Z] ;
fragment DIGIT           : [0-9] ;

WS              : [ \r\t] + -> channel (HIDDEN) ;