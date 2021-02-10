grammar DARIC;

prog
    : line* EOF
    ;

line
    : NEWLINE
    | linenumber? (COMMENT | REM)? NEWLINE
    | linenumber? stmt+ (COMMENT | REM)? NEWLINE
    ;

content:            stmt* ;
body:               stmt* | line* ;
linenumber:         NUMBER ;

stmt
    : COLON
    | coreStmt
    | keyMouseStmt
    | stmtOperatorEqual
    | ioStmt
    | graphicsStmt
    ;

coreStmt
    : stmtBREAKPOINT
    | stmtCASE
    | stmtCHAIN
    | stmtDATA
    | stmtDIM
    | stmtEND
    | stmtRETURN
    | stmtDEFFN
    | stmtDEFPROC
    | stmtFOR
    | stmtFORIN
    | stmtCallFN
    | stmtIF
    | stmtIFMultiline
    | stmtLET
    | stmtOSCLI
    | stmtCallPROC
    | stmtREAD
    | stmtRESTORE
    | stmtSWAP
    | stmtTRACEON
    | stmtTRACEOFF
    | stmtTYPE
    | stmtREPEAT
    | stmtWHILE
    ;

stmtBREAKPOINT:     BREAKPOINT ;
stmtCASE:           CASE expr OF NEWLINE when+ (OTHERWISE body)? ENDCASE ; 
stmtCHAIN:          CHAIN strExpr ;
stmtDATA:           DATA literal (COMMA literal)* ;
stmtDIM:            LOCAL? DIM varDeclWithDimension (COMMA varDeclWithDimension)* ;
stmtEND:            END ;
stmtRETURN:         RETURN expr? ;
stmtDEFFN:          DEF fnName LPAREN functionVarList? RPAREN body ENDFN ;
stmtDEFPROC:        DEF PROC_NAME LPAREN functionVarList? RPAREN body ENDPROC ;
stmtFOR:            FOR LOCAL? justNumberVar EQ numExpr TO numExpr (STEP numExpr)? body NEXT ;
stmtFORIN:          FOR LOCAL? justVar IN justVar LPAREN RPAREN body NEXT ;
stmtCallFN:         fnName LPAREN functionParList? RPAREN ;
stmtIF:             IF expr t=content (ELSE f=content)? ;
stmtIFMultiline:    IF expr THEN NEWLINE t=line+ (ELSE NEWLINE f=line+)? ENDIF ;
stmtLET:            ((LET | GLOBAL)? | LOCAL) varDecl EQ expr (COMMA varDecl EQ expr)* ;
stmtOSCLI:          OSCLI strExpr ;
stmtCallPROC:       PROC_NAME LPAREN functionParList? RPAREN ;
stmtREAD:           READ varDecl (COMMA varDecl)* ;
stmtRESTORE:        RESTORE ;
stmtSWAP:           SWAP justVar COMMA justVar ;
stmtTRACEON:        TRACEON ;
stmtTRACEOFF:       TRACEOFF ;
stmtTYPE:           TYPE varName LPAREN justVar (COMMA justVar)* RPAREN ;
stmtREPEAT:         REPEAT body UNTIL expr ;
stmtWHILE:          WHILE expr body ENDWHILE ;

keyMouseStmt
    : stmtINPUT
    | stmtPRINT
    | stmtMOUSE
    | stmtINKEY
    | stmtINKEYS
    | stmtGET
    | stmtGETS
    ;
    
stmtINPUT:      INPUT (strExpr COMMA)? varList ;
stmtPRINT:      PRINT printList? ;
stmtMOUSE:      MOUSE varNameInteger COMMA varNameInteger COMMA varNameInteger ;
stmtINKEY:      INKEY numExpr ;
stmtINKEYS:     INKEYS numExpr ;
stmtGET:        GET ;
stmtGETS:       GETS ;

stmtOperatorEqual
    : varDecl MULTIPLY_E numExpr
    | varDecl DIVIDE_E numExpr       
    | varDecl PLUS_E numExpr     
    | varDecl MINUS_E numExpr
    | varDecl SHL_E numExpr
    | varDecl SHR_E numExpr
    ;

ioStmt
    : stmtBPUTH
    | stmtBGETH
    | stmtPTRH
    | stmtCLOSEH
    | stmtLISTFILES
    ;

stmtBPUTH:      BPUTH numExpr COMMA numExpr ;
stmtBGETH:      BGETH numExpr ;
stmtPTRH:       PTRH numExpr EQ numExpr ;
stmtCLOSEH:     CLOSEH numExpr ;
stmtLISTFILES:  LOCAL? varNameString LPAREN RPAREN EQ LISTFILES LPAREN strExpr RPAREN ;

graphicsStmt
    : stmtCLS
    | stmtCOLOUR
    | stmtCOLOURBG 
    | stmtGRAPHICS
    | stmtFLIP    
    | stmtCIRCLE
    | stmtLINE
    | stmtRECTANGLE
    | stmtTRIANGLE
    | stmtPLOT
    | stmtCLIPON
    | stmtCLIPOFF
    | stmtTEXT
    | stmtTEXTRIGHT
    | stmtTEXTCENTRE
    | stmtSHOWFPS
    ;
    
stmtCLS:            CLS ;
stmtCOLOUR:         COLOUR numExpr
                  | COLOUR numExpr COMMA numExpr COMMA numExpr ;
stmtCOLOURBG:       COLOURBG numExpr
                  | COLOURBG numExpr COMMA numExpr COMMA numExpr ; 
stmtGRAPHICS:       GRAPHICS
                  | GRAPHICS numExpr COMMA numExpr
                  | GRAPHICS BANKED
                  | GRAPHICS BANKED numExpr COMMA numExpr ;
stmtFLIP:           FLIP ;
stmtCIRCLE:         CIRCLE      numExpr COMMA numExpr COMMA numExpr
                  | CIRCLE FILL numExpr COMMA numExpr COMMA numExpr ;
stmtLINE:           LINE numExpr COMMA numExpr COMMA numExpr COMMA numExpr ;
stmtRECTANGLE:      RECTANGLE      numExpr COMMA numExpr COMMA numExpr COMMA numExpr
                  | RECTANGLE FILL numExpr COMMA numExpr COMMA numExpr COMMA numExpr ;
stmtTRIANGLE:       TRIANGLE        numExpr COMMA numExpr COMMA numExpr COMMA numExpr COMMA numExpr COMMA numExpr
                  | TRIANGLE FILL   numExpr COMMA numExpr COMMA numExpr COMMA numExpr COMMA numExpr COMMA numExpr
                  | TRIANGLE SHADED numExpr COMMA numExpr COMMA numExpr COMMA numExpr COMMA numExpr COMMA numExpr COMMA numExpr COMMA numExpr COMMA numExpr ;
stmtPLOT:           PLOT numExpr COMMA numExpr ;
stmtCLIPON:         CLIPON numExpr COMMA numExpr COMMA numExpr COMMA numExpr ;
stmtCLIPOFF:        CLIPOFF ;
stmtTEXT:           TEXT numExpr COMMA numExpr COMMA numExpr COMMA numExpr ;
stmtTEXTRIGHT:      TEXTRIGHT numExpr COMMA numExpr COMMA numExpr COMMA strExpr ;
stmtTEXTCENTRE:     (TEXTCENTRE|TEXTCENTER) numExpr COMMA numExpr COMMA numExpr COMMA strExpr ;
stmtSHOWFPS:        SHOWFPS ;

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

varName:            VARIABLE_FLOAT ;
varNameInteger:     VARIABLE_INTEGER ;
varNameString:      VARIABLE_STRING ;
varNameType:        VARIABLE_TYPE ;

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

functionVarList:        RETURN? justVar (COMMA RETURN? justVar)* ;
functionParList:        expr (COMMA expr)* ;

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

numberInteger:      (PLUS | MINUS)? NUMBER ;
numberHex:          HEXNUMBER ;
numberBinary:       BINARYNUMBER ;
numberFloat:        (PLUS | MINUS)? FLOAT ;

strFunc
    : TIMES                                                     #strFuncTIMES   
    | CHRS numExpr                                              #strFuncCHRS
    | CHRS LPAREN numExpr RPAREN                                #strFuncCHRS
    | LEFTS LPAREN strExpr COMMA numExpr RPAREN                 #strFuncLEFTS
    | MIDS LPAREN strExpr COMMA numExpr COMMA numExpr RPAREN    #strFuncMIDS3
    | MIDS LPAREN strExpr COMMA numExpr RPAREN                  #strFuncMIDS2
    | RIGHTS LPAREN strExpr COMMA numExpr RPAREN                #strFuncRIGHTS
    | STRS numExpr                                              #strFuncSTRS
    | STRS TILDE numExpr                                        #strFuncSTRSHEX
    | STRINGS LPAREN numExpr COMMA strExpr RPAREN               #strFuncSTRINGS
    | INKEYS numExpr                                            #strFuncINKEYS
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

    /* Keyboard */
    | GET                                   #numFuncGET
    | INKEY numExpr                         #numFuncINKEY

    /* Conversion */
    | INT LPAREN numExpr RPAREN             #numFuncINT
    | FLOAT_TOKEN LPAREN numExpr RPAREN     #numFuncFLOAT

    /* Graphics */
    | SCREENWIDTH                                                   #numFuncSCREENWIDTH
    | SCREENHEIGHT                                                  #numFuncSCREENHEIGHT
    | POINT LPAREN numExpr COMMA numExpr RPAREN                     #numFuncPOINT
    | COLOUR LPAREN numExpr COMMA numExpr COMMA numExpr LPAREN      #numFuncCOLOUR

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
    : numVar                                #numExprVar
    | number                                #numExprNumber
    | LPAREN numExpr RPAREN                 #numExprNested
    | NOT numExpr                           #numExprNOT
    | numFunc                               #numExprFunc
    | <assoc=right> numExpr HAT numExpr     #numExprHat 
    | numExpr (MULTIPLY|DIVIDE) numExpr     #numExprMultiplyDivide
    | numExpr (DIV|MOD) numExpr             #numExprDIVMOD
    | numExpr (PLUS|MINUS) numExpr          #numExprAddSubtract
    | numExpr (SHL|SHR) numExpr             #numExprSHLSHR
    | numExpr (EQ|NE|GT|GE|LT|LE) numExpr   #numExprNumRelop
    | strExpr (EQ|NE|GT|GE|LT|LE) strExpr   #numExprStrRelop
    | numExpr (AND|OR|EOR) numExpr          #numExprANDOREOR
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

// Lexer stuff
BREAKPOINT      : 'BREAKPOINT' | 'breakpoint' | 'Breakpoint';
CASE            : 'CASE' | 'case' | 'Case' ;
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
INPUT           : 'INPUT' | 'input' | 'Input' ;
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
RETURN          : 'RETURN' | 'return' | 'Return' ;
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
OPENOUT         : 'OPENOUT' | 'openout' | 'Openout' ;
OPENUP          : 'OPENUP' | 'openup' | 'OpenUp' ;
PTRH            : ('PTR' | 'ptr' | 'Ptr' ) HASH ;

BANKED          : 'BANKED' | 'banked' | 'Banked' ;
CIRCLE          : 'CIRCLE' | 'circle' | 'Circle' ;
CLS             : 'CLS' | 'cls' | 'Cls' ;
CLIPON          : 'CLIPON' | 'clipon' | 'ClipOn ' ;
CLIPOFF         : 'CLIPOFF' | 'clipoff' | 'ClipOff' ;
COLOUR          : 'COLOUR' | 'colour' | 'Colour' ;
COLOURBG        : 'COLOURBG' | 'colourbg' | 'ColourBg' ;
CREATEFONT      : 'CREATEFONT' | 'createfont' | 'CreateFont' ;
FILL            : 'FILL' | 'fill' | 'Fill' ;
FLIP            : 'FLIP' | 'flip' | 'Flip' ;
SHOWFPS         : 'SHOWFPS' | 'showfps' | 'ShowFPS' ;
GRAPHICS        : 'GRAPHICS' | 'graphics' | 'Graphics' ;
LINE            : 'LINE' | 'line' | 'Line' ;
LOADTYPEFACE    : 'LOADTYPEFACE' | 'loadtypeface' | 'LoadTypeface' ;
RECTANGLE       : 'RECTANGLE' | 'rectangle' | 'Rectangle' ;
PLOT            : 'PLOT' | 'plot' | 'Plot' ;
POINT           : 'POINT' | 'point' | 'Point' ;
SCREENWIDTH     : 'SCREENWIDTH' | 'screenwidth' | 'ScreenWidth' ;
SCREENHEIGHT    : 'SCREENHEIGHT' | 'screenheight' | 'ScreenHeight' ;
SHADED          : 'SHADED' | 'shaded' | 'Shaded' ;
TEXT            : 'TEXT' | 'text' | 'Text' ;
TEXTRIGHT       : 'TEXTRIGHT' | 'textright' | 'TextRight' ;
TEXTCENTRE      : 'TEXTCENTRE' | 'textcentre' | 'TextCentre' ;
TEXTCENTER      : 'TEXTCENTER' | 'textcenter' | 'TextCenter' ;
TRIANGLE        : 'TRIANGLE' | 'triangle' | 'Triangle' ;

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

TIMES           : ('TIME' | 'time' | 'Time') DOLLAR ;
STRS            : ('STR' | 'str' | 'Str') DOLLAR ;
STRINGS         : ('STRING' | 'string' | 'String') DOLLAR ;
CHRS            : ('CHR' | 'chr' | 'Chr') DOLLAR ;
LEFTS           : ('LEFT' | 'left' | 'Left') DOLLAR ;
MIDS            : ('MID' | 'mid' | 'Mid') DOLLAR ;
RIGHTS          : ('RIGHT' | 'right' | 'Right') DOLLAR ;

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
