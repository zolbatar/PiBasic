grammar DARIC;

prog
    : line* EOF
    ;

line
    : NEWLINE
    | linenumber? (COMMENT | REM)? NEWLINE
    | linenumber? stmt+ (COMMENT | REM)? NEWLINE
    ;

content
    : stmt*
    ;

body
    : stmt* | line*
    ;

linenumber
    : NUMBER
    ;

stmtIF

stmt
    : COLON                                                                             #stmtCOLON
    | BREAKPOINT                                                                        #stmtBREAKPOINT
    | CASE expr OF NEWLINE when+ (OTHERWISE body)? ENDCASE                              #stmtCASE
    | CHAIN strExpr                                                                     #stmtCHAIN
    | DATA literal (COMMA literal)*                                                     #stmtDATA
    | DIM varDeclWithDimension (COMMA varDeclWithDimension)*                            #stmtDIM
    | END                                                                               #stmtEND
    | RETURN expr?                                                                      #stmtRETURN
    | DEF fnName LPAREN functionVarList? RPAREN body ENDFN                              #stmtDEFFN
    | DEF PROC_NAME LPAREN functionVarList? RPAREN body ENDPROC                         #stmtDEFPROC
    | FOR LOCAL? justNumberVar EQ numExpr TO numExpr (STEP numExpr)? body NEXT          #stmtFOR
    | FOR LOCAL? justVar IN justVar LPAREN RPAREN body NEXT                             #stmtFORIN
    | fnName LPAREN functionParList? RPAREN                                             #stmtCallFN
    | IF expr THEN? t=content (ELSE f=content)?                                         #stmtIF
    | IF expr THEN? NEWLINE t=line+ (ELSE NEWLINE f=line+)? ENDIF                       #stmtIFMultiline
    | LET? varDecl EQ expr (COMMA varDecl EQ expr)*                                     #stmtLET
    | GLOBAL? varDecl EQ expr (COMMA varDecl EQ expr)*                                  #stmtLET
    | LOCAL varDecl EQ expr (COMMA varDecl EQ expr)*                                    #stmtLOCAL
    | LOCAL DIM varDeclWithDimension (COMMA varDeclWithDimension)*                      #stmtLOCALDIM
    | OSCLI strExpr                                                                     #stmtOSCLI
    | PROC_NAME LPAREN functionParList? RPAREN                                          #stmtCallPROC
    | READ varDecl (COMMA varDecl)*                                                     #stmtREAD
    | RESTORE                                                                           #stmtRESTORE
    | SWAP justVar COMMA justVar                                                        #stmtSWAP
    | TRACEON                                                                           #stmtTRACEON
    | TRACEOFF                                                                          #stmtTRACEOFF
    | TYPE varName LPAREN justVar (COMMA justVar)* RPAREN                               #stmtTYPE
    | REPEAT body UNTIL expr                                                            #stmtREPEAT
    | WHILE expr body ENDWHILE                                                          #stmtWHILE

    /* Keyboard, mouse and INPUT/PRINT */
    | INPUT (strExpr COMMA)? varList                                                    #stmtINPUT
    | PRINT printList?                                                                  #stmtPRINT
    | MOUSE varNameInteger COMMA varNameInteger COMMA varNameInteger                    #stmtMOUSE
    | INKEY numExpr                                                                     #stmtINKEY
    | INKEYS numExpr                                                                    #stmtINKEYS
    | GET                                                                               #stmtGET
    | GETS                                                                              #stmtGETS

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

    /* Graphics */
    | CLS                                                                               #stmtCLS
    | COLOUR numExpr                                                                    #stmtCOLOUR
    | COLOUR numExpr COMMA numExpr COMMA numExpr                                        #stmtCOLOUR 
    | COLOURBG numExpr                                                                  #stmtCOLOURBG 
    | COLOURBG numExpr COMMA numExpr COMMA numExpr                                      #stmtCOLOURBG
    | GRAPHICS                                                                          #stmtGRAPHICS
    | GRAPHICS numExpr COMMA numExpr                                                    #stmtGRAPHICS
    | GRAPHICS BANKED                                                                   #stmtGRAPHICS
    | GRAPHICS BANKED numExpr COMMA numExpr                                             #stmtGRAPHICS
    | FLIP                                                                              #stmtFLIP    
    | CIRCLE numExpr COMMA numExpr COMMA numExpr                                        #stmtCIRCLE
    | CIRCLE FILL numExpr COMMA numExpr COMMA numExpr                                   #stmtCIRCLE
    | LINE numExpr COMMA numExpr COMMA numExpr COMMA numExpr                            #stmtLINE
    | RECTANGLE numExpr COMMA numExpr COMMA numExpr COMMA numExpr                       #stmtRECTANGLE
    | RECTANGLE FILL numExpr COMMA numExpr COMMA numExpr COMMA numExpr                  #stmtRECTANGLE
    | TRIANGLE      numExpr COMMA numExpr COMMA numExpr COMMA 
                    numExpr COMMA numExpr COMMA numExpr                                 #stmtTRIANGLE
    | TRIANGLE FILL     numExpr COMMA numExpr COMMA numExpr 
                        COMMA numExpr COMMA numExpr COMMA numExpr                       #stmtTRIANGLE
    | TRIANGLE SHADED   numExpr COMMA numExpr COMMA numExpr COMMA 
                        numExpr COMMA numExpr COMMA numExpr COMMA 
                        numExpr COMMA numExpr COMMA numExpr                             #stmtTRIANGLE
    | PLOT numExpr COMMA numExpr                                                        #stmtPLOT
    | CLIPON numExpr COMMA numExpr COMMA numExpr COMMA numExpr                          #stmtCLIPON
    | CLIPOFF                                                                           #stmtCLIPOFF
    | TEXT numExpr COMMA numExpr COMMA numExpr COMMA numExpr                            #stmtTEXT
    | TEXTRIGHT numExpr COMMA numExpr COMMA numExpr COMMA strExpr                       #stmtTEXTRIGHT
    | (TEXTCENTRE|TEXTCENTER) numExpr COMMA numExpr COMMA numExpr COMMA strExpr         #stmtTEXTCENTRE
    | SHOWFPS                                                                           #stmtSHOWFPS
    ;

when
    : WHEN expr (COMMA expr)* COLON body
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
    | typeVar LPAREN numExpr RPAREN varNameInteger                  #numVarIntegerFieldArray
    | typeVar LPAREN numExpr RPAREN varName                         #numVarFloatFieldArray
    | FN_FLOAT LPAREN functionParList? RPAREN                       #numVarFloatFN
    | FN_INTEGER LPAREN functionParList? RPAREN                     #numVarIntegerFN
    | FN_STRING LPAREN functionParList? RPAREN                      #numVarStringFN
    | varName                                                       #numVarFloat
    | varNameInteger                                                #numVarInteger
    | typeVar varName                                               #numVarFloatField
    | typeVar varNameInteger                                        #numVarIntegerField
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
    | typeVar varNameInteger                                #varDeclTypeVar
    | typeVar LPAREN numExpr RPAREN varName                 #varDeclTypeVarArrayed
    | typeVar LPAREN numExpr RPAREN varNameInteger          #varDeclTypeVarArrayed
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
    :  NUMBER
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
    | CHRS numExpr                                              #strFuncCHRS
    | LEFTS LPAREN strExpr COMMA numExpr RPAREN                 #strFuncLEFTS
    | MIDS LPAREN strExpr COMMA numExpr COMMA numExpr RPAREN    #strFuncMIDS3
    | MIDS LPAREN strExpr COMMA numExpr RPAREN                  #strFuncMIDS2
    | RIGHTS LPAREN strExpr COMMA numExpr RPAREN                #strFuncRIGHTS
    | STRS numExpr                                              #strFuncSTRS
    | STRS TILDE numExpr                                        #strFuncSTRSHEX
    | STRINGS LPAREN numExpr COMMA strExpr RPAREN               #strFuncSTRINGS
    ;

string
    : STRINGLITERAL
    ;

strExpr
    : LPAREN strExpr RPAREN
    | strFunc
    | strExpr PLUS strExpr
    | strVar
    | string
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
    | LN numExpr                            #numFuncLN
    | LOG numExpr                           #numFuncLOG
    | EXP numExpr                           #numFuncEXP
    | ATN numExpr                           #numFuncATN
    | TAN numExpr                           #numFuncTAN
    | COS numExpr                           #numFuncCOS
    | SIN numExpr                           #numFuncSIN
    | ABS numExpr                           #numFuncABS
    | ACS numExpr                           #numFuncACS
    | ASN numExpr                           #numFuncASN
    | DEG numExpr                           #numFuncDEG
    | RAD numExpr                           #numFuncRAD
    | SQR numExpr                           #numFuncSQR
    | SGN numExpr                           #numFuncSGN

    /* Conversion */
    | INT numExpr                           #numFuncINT
    | FLOAT_TOKEN numExpr                   #numFuncFLOAT

    /* Graphics */
    | POINT LPAREN numExpr COMMA numExpr RPAREN         #numFuncPOINT

    /* I/O */
    | BGETH numExpr                         #numFuncBGETH
    | EOFH numExpr                          #numFuncEOFH
    | OPENIN LPAREN strExpr RPAREN          #numFuncOPENIN
    | OPENOUT LPAREN strExpr RPAREN         #numFuncOPENOUT
    | OPENUP LPAREN strExpr RPAREN          #numFuncOPENUP
    | PTRH numExpr                          #numFuncPTR
    
    /* String to number */
    | ASC strExpr                           #numFuncASC
    | LEN strExpr                           #numFuncLEN
    | INSTR LPAREN strExpr COMMA strExpr RPAREN                     #numFuncINSTR2
    | INSTR LPAREN strExpr COMMA strExpr COMMA numExpr RPAREN       #numFuncINSTR3
    | VAL strExpr                           #numFuncVAL
    ;

numExpr
    : MINUS numExpr                         #numExprUnary
    | notExpr                               #numExprNOT
    | numFunc                               #numExprFunc
    | nestedExpr                            #numExprNested
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
    | numVar                                #numExprVar
    | number                                #numExprNumber
    ;

nestedExpr
    : LPAREN numExpr RPAREN                 
    ;

notExpr
    : NOT numExpr
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
BREAKPOINT      : 'BREAKPOINT' | 'breakpoint' | 'Breakpoint';
CASE            : 'CASE' | 'case' ' | 'Case' ;
CHAIN           : 'CHAIN' | 'chain' | 'Chain' ;
DATA            : 'DATA' | 'data' | 'Data' ;
DEF             : 'DEF' | 'def' | 'Def' ;
DIM             : 'DIM' | 'dim' | 'Dim' ;
ELSE            : 'ELSE' | 'else' | 'Else' ;
END             : 'END' | 'end' | 'End' ;
ENDCASE         : 'ENDCASE' | 'endcase' | 'EndCase' ;
ENDIF           : 'ENDIF' | 'endif' | 'EndIf' ;
ENDFN           : 'ENDFN' | 'endfn' | 'EndFn' ;
ENDPROC         : 'ENDPROC' | 'endproc' | 'EndProc' ;
ENDWHILE        : 'ENDWHILE' | 'endwhile' | 'EndWhile' ;
FALSE           : 'FALSE' | 'false' | 'False' ;
FOR             : 'FOR' | 'for' | 'For' ;
FLOAT_TOKEN     : 'FLOAT' | 'float' | 'Float' ;
FN              : 'FN' | 'fn' | 'Fn' ;
IF              : 'IF' | 'if' | 'If' ;
IN              : 'IN' | 'in' | 'In' ;
INT             : 'INT' | 'int' | 'Int' ;
INPUT           : 'INPUT' | 'input' | 'Input ;
GLOBAL          : 'GLOBAL' | 'global' | 'Global' ;
LOCAL           : 'LOCAL' | 'local' | 'Local' ;
LET             : 'LET' | 'let' | 'Let' ;
NEXT            : 'NEXT' | 'next' | 'Next' ;
OF              : 'OF' | 'of' | 'Of' ;
OFF             : 'OFF' | 'off' | 'Off' ;
ON              : 'ON' | 'on' | 'On' ;
OSCLI           : 'OSCLI' | 'oscli' | 'Oscli' ;
OTHERWISE       : 'OTHERWISE' | 'otherwise' | 'Otherwise' ;
PRINT           : 'PRINT' | 'print' | 'Print' ;
PROC            : 'PROC' | 'proc' | 'Proc' ;
READ            : 'READ' | 'read' | 'Read' ;
REM             : 'REM' | 'rem' | 'Rem' ;
REPEAT          : 'REPEAT' | 'repeat' | 'Repeat' ;
RESTORE         : 'RESTORE' | 'restore' | 'Restore' ;
RETURN          : 'RETURN' | 'return' | 'return' ;
SPC             : 'SPC' | 'spc' | 'Spc'  ;
STEP            : 'STEP' | 'step' | 'Step' ;
SWAP            : 'SWAP' | 'swap' | 'Swap' ;
THEN            : 'THEN' | 'then' | 'Then' ;
TO              : 'TO' | 'to' | 'To' ;
TRACE           : 'TRACE' | 'trace' | 'Trace' ;
TRACEON         : TRACE ON ;
TRACEOFF        : TRACE OFF;
TRUE            : 'TRUE' | 'true' | 'True'  ;
TYPE            : 'TYPE' | 'type' | 'Type' ;
UNTIL           : 'UNTIL' | 'until' | 'Until' ;
WHEN            : 'WHEN' | 'when' | 'When' ;
WHILE           : 'WHILE' | 'while' | 'While' ;

MOUSE           : 'MOUSE' | 'mouse' | 'Mouse' ;
INKEY           : 'INKEY' | 'inkey' | 'Inkey' ;
INKEYS          : INKEY DOLLAR ;
GET             : 'GET' | 'get' | 'Get' ;
GETS            : GET DOLLAR ;

RED             : 'RED' | 'red' | 'Red'  ;
GREEN           : 'GREEN' | 'green' | 'Green'  ;
YELLOW          : 'YELLOW' | 'yellow' | 'Yellow'  ;
BLUE            : 'BLUE' | 'blue' | 'Blue' ;
MAGENTA         : 'MAGENTA' | 'magenta' | 'Magenta' ;
CYAN            : 'CYAN' | 'cyan' | 'Cyan' ;
WHITE           : 'WHITE' | 'white' | 'White' ;
BLACK           : 'BLACK' | 'black' | 'Black' ;

BGETH           : ('BGET' | 'bget' | 'BGet') HASH ;
BPUTH           : ('BPUT' | 'bput' | 'BPut') HASH ;
CLOSEH          : ('CLOSE' | 'close' | 'Close') HASH ;
EOFH            : ('EOF' | 'eof' | 'Eof') HASH ;
GETSH           : GET DOLLAR HASH ;
LISTFILES       : 'LISTFILES' | 'listfiles' | 'ListFiles' ;
OPENIN          : 'OPENIN' | 'openin' | 'OpenIn' ;
OPENOUT         : 'OPENOUT' | 'openout' | 'openout' ;
OPENUP          : 'OPENUP' | 'openup' | 'OpenUp' ;
PTRH            : ('PTR' | 'ptr' | 'Ptr' ) HASH ;

BANKED          : 'BANKED' | 'banked' | 'Banked' ;
CIRCLE          : 'CIRCLE' | 'circle' | 'Circle' ;
CLS             : 'CLS' | 'cls' | 'Cls' ;
CLIPON          : 'CLIPON' | 'clipon' | 'ClipOn ' ;
CLIPOFF         : 'CLIPOFF' | 'clipoff' | 'ClipOff' ;
COLOUR          : 'COLOUR' | 'colour' | 'Colour' ;
COLOURBG        : 'COLOURBG' | 'colourbg' | 'ColourBg' ;
FILL            : 'FILL' | 'fill' | 'Fill' ;
FLIP            : 'FLIP' | 'flip' | 'Flip' ;
SHOWFPS         : 'SHOWFPS' | 'showfps' | 'ShowFPS' ;
GRAPHICS        : 'GRAPHICS' | 'graphics' | 'Graphics' ;
LINE            : 'LINE' | 'line' | 'Line' ;
RECTANGLE       : 'RECTANGLE' | 'rectangle' | 'Rectangle' ;
PLOT            : 'PLOT' | 'plot' | 'Plot' ;
POINT           : 'POINT' | 'point' | 'Point' ;
SHADED          : 'SHADED' | 'shaded' | 'Shaded' ;
TEXT            : 'TEXT' | 'text' | 'Text' ;
TEXTRIGHT       : 'TEXTRIGHT' | 'textright' | 'TextRight' ;
TEXTCENTRE      : 'TEXTCENTRE' | 'textcentre' | 'TextCentre' ;
TEXTCENTER      : 'TEXTCENTER' | 'textcenter' | 'TextCenter' ;
TRIANGLE        : 'TRIANGLE' | 'triangle' | 'Triangle' ;
LOADTYPEFACE    : 'LOADTYPEFACE' | 'loadtypeface' | 'LoadTypeface' ;
CREATEFONT      : 'CREATEFONT' | 'createfont' | 'CreateFont' ;

TIME            : 'TIME' | 'time' | 'Time' ;
PI              : 'PI' | 'pi' | 'Pi' ;
SQR             : 'SQR' | 'sqr' | 'Sqr' ;
LN              : 'LN' | 'ln' | 'Ln' ;
LOG             : 'LOG' | 'log' | 'Log' ;
EXP             : 'EXP' | 'exp' | 'Exp' ;
ATN             : 'ATN' | 'atn' | 'Atn' ;
TAN             : 'TAN' | 'tan' | 'Tan' ;
COS             : 'COS' | 'cos' | 'Cos' ;
SIN             : 'SIN' | 'sin' | 'Sin' ;
ABS             : 'ABS' | 'abs' | 'Abs' ;
ACS             : 'ACS' | 'acs' | 'Acs' ;
ASN             : 'ASN' | 'asn' | 'Asn' ;
DEG             : 'DEG' | 'deg' | 'Deg' ;
RAD             : 'RAD' | 'rad' | 'Rad' ;
SGN             : 'SGN' | 'sgn' | 'Sgn' ;

ASC             : 'ASC' | 'asc' | 'Asc' ;
LEN             : 'LEN' | 'len' | 'Len' ;
INSTR           : 'INSTR' | 'instr' | 'Instr' ;
VAL             : 'VAL' | 'val' | 'Val' ;

TIMES           : 'TIME' | 'time' | 'Time' DOLLAR ;
STRS            : 'STR' | 'str' | 'Str' DOLLAR ;
STRINGS         : 'STRING' | 'string' | 'String' DOLLAR ;
CHRS            : 'CHR' | 'chr' | 'Chr' DOLLAR ;
LEFTS           : 'LEFT' | 'left' | 'Left' DOLLAR ;
MIDS            : 'MID' | 'mid' | 'Mid' DOLLAR ;
RIGHTS          : 'RIGHT' | 'right' | 'Right' DOLLAR ;

RND             : 'RND' | 'rnd' | 'Rnd' ;
RND0            : ('RND' | 'rnd' | 'Rnd') LPAREN '0' RPAREN ;
RND1            : ('RND' | 'rnd' | 'Rnd') LPAREN '1' RPAREN ;

EQ              : '=' ;
NE              : '<>' ;
GT              : '>' ;
GE              : '>=' ;
LT              : '<' ;
LE              : '<=' ;

NOT             : 'NOT' | 'not' | 'Not' ;
AND             : 'AND' | 'and' | 'And' ;
OR              : 'OR' | 'or' | 'Or' ;
EOR             : 'EOR' | 'eor' | 'Eor' ;

MOD             : 'MOD' | 'mod' | 'Mod' ;
DIV             : 'DIV' | 'div' | 'Div' | '//';
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

fragment ALPHA  : [a-zA-Z] ;
fragment DIGIT  : [0-9] ;

WS              : [ \r\t] + -> channel (HIDDEN) ;
