
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICParser : public antlr4::Parser {
public:
  enum {
    BREAKPOINT = 1, CASE = 2, CHAIN = 3, DATA = 4, DEF = 5, DIM = 6, ELSE = 7, 
    END = 8, ENDCASE = 9, ENDIF = 10, ENDFN = 11, ENDPROC = 12, ENDWHILE = 13, 
    FALSE = 14, FOR = 15, FLOAT_TOKEN = 16, FN = 17, IF = 18, IN = 19, INSTALL = 20, 
    INT = 21, INPUT = 22, GLOBAL = 23, GOTO = 24, GOSUB = 25, LOCAL = 26, 
    LET = 27, NEXT = 28, NEW = 29, OF = 30, OFF = 31, ON = 32, OSCLI = 33, 
    OTHERWISE = 34, PRINT = 35, PROC = 36, READ = 37, REM = 38, REPEAT = 39, 
    RESTORE = 40, RETURN = 41, SPC = 42, STEP = 43, SWAP = 44, THEN = 45, 
    TO = 46, TRACE = 47, TRACEON = 48, TRACEOFF = 49, TRUE = 50, TYPE = 51, 
    UNTIL = 52, WHEN = 53, WHILE = 54, MOUSE = 55, INKEY = 56, INKEYS = 57, 
    GET = 58, GETS = 59, RED = 60, GREEN = 61, YELLOW = 62, BLUE = 63, MAGENTA = 64, 
    CYAN = 65, WHITE = 66, BLACK = 67, MONO = 68, PROP = 69, SERIF = 70, 
    RENDERFRAME = 71, CREATEVERTEX = 72, CREATETRIANGLE = 73, TRANSLATE = 74, 
    ROTATE = 75, SCALE = 76, DELETEOBJECT = 77, CREATESHAPE = 78, CREATEOBJECT = 79, 
    SOLID = 80, WIREFRAME = 81, SHADED = 82, FILLEDWIREFRAME = 83, BGETH = 84, 
    BPUTH = 85, CLOSEH = 86, EOFH = 87, GETSH = 88, LISTFILES = 89, OPENIN = 90, 
    OPENOUT = 91, OPENUP = 92, PTRH = 93, BANKED = 94, CIRCLE = 95, CLS = 96, 
    CLIPON = 97, CLIPOFF = 98, COLOUR = 99, COLOURBG = 100, CURSORON = 101, 
    CURSOROFF = 102, FILL = 103, FLIP = 104, SHOWFPS = 105, GRAPHICS = 106, 
    LINE = 107, LOADTYPEFACE = 108, RECTANGLE = 109, PLOT = 110, POINT = 111, 
    SCREENWIDTH = 112, SCREENHEIGHT = 113, TEXT = 114, TEXTRIGHT = 115, 
    TEXTCENTRE = 116, TEXTCENTER = 117, TRIANGLE = 118, LOADSPRITE = 119, 
    DRAWSPRITE = 120, DELETESPRITE = 121, CREATESPRITE = 122, DRAWTOSPRITE = 123, 
    DRAWTOSCREEN = 124, TIME = 125, PI = 126, SQR = 127, LN = 128, LOG = 129, 
    EXP = 130, ATN = 131, TAN = 132, COS = 133, SIN = 134, ABS = 135, ACS = 136, 
    ASN = 137, DEG = 138, RAD = 139, SGN = 140, ASC = 141, LEN = 142, INSTR = 143, 
    VAL = 144, TIMES = 145, STRS = 146, STRINGS = 147, CHRS = 148, LEFTS = 149, 
    MIDS = 150, RIGHTS = 151, RND = 152, RND0 = 153, RND1 = 154, EQ = 155, 
    NE = 156, GT = 157, GE = 158, LT = 159, LE = 160, NOT = 161, AND = 162, 
    OR = 163, EOR = 164, MOD = 165, DIV = 166, HAT = 167, PLUS = 168, MINUS = 169, 
    MULTIPLY = 170, DIVIDE = 171, SHL = 172, SHR = 173, PLUS_E = 174, MINUS_E = 175, 
    MULTIPLY_E = 176, DIVIDE_E = 177, SHL_E = 178, SHR_E = 179, NEWLINE = 180, 
    TICK = 181, TILDE = 182, HASH = 183, COLON = 184, COMMA = 185, DOLLAR = 186, 
    LPAREN = 187, PERCENT = 188, RPAREN = 189, SEMICOLON = 190, UNDERSCORE = 191, 
    COMMENT = 192, STRINGLITERAL = 193, PROC_NAME = 194, FN_INTEGER = 195, 
    FN_FLOAT = 196, FN_STRING = 197, VARIABLE_FLOAT = 198, VARIABLE_INTEGER = 199, 
    VARIABLE_STRING = 200, VARIABLE_TYPE = 201, HEXNUMBER = 202, BINARYNUMBER = 203, 
    NUMBER = 204, FLOAT = 205, WS = 206
  };

  enum {
    RuleProg = 0, RuleLine = 1, RuleLinePlus = 2, RuleContent = 3, RuleBody = 4, 
    RuleLinenumber = 5, RuleStmt = 6, RuleCoreStmt = 7, RuleStmtBREAKPOINT = 8, 
    RuleStmtCASE = 9, RuleStmtCHAIN = 10, RuleStmtDATA = 11, RuleStmtDIM = 12, 
    RuleStmtEND = 13, RuleStmtRETURN = 14, RuleStmtDEFFN = 15, RuleStmtDEFPROC = 16, 
    RuleStmtFOR = 17, RuleStmtFORIN = 18, RuleStmtCallFN = 19, RuleStmtIF = 20, 
    RuleStmtIFMultiline = 21, RuleStmtINSTALL = 22, RuleStmtGOTO = 23, RuleStmtGOSUB = 24, 
    RuleStmtLET = 25, RuleStmtOSCLI = 26, RuleStmtCallPROC = 27, RuleStmtREAD = 28, 
    RuleStmtRESTORE = 29, RuleStmtSWAP = 30, RuleStmtTRACEON = 31, RuleStmtTRACEOFF = 32, 
    RuleStmtTYPE = 33, RuleStmtREPEAT = 34, RuleStmtWHILE = 35, RuleKeyMouseStmt = 36, 
    RuleStmtINPUT = 37, RuleStmtPRINT = 38, RuleStmtMOUSE = 39, RuleStmtINKEY = 40, 
    RuleStmtINKEYS = 41, RuleStmtGET = 42, RuleStmtGETS = 43, RuleStmtOperatorEqual = 44, 
    RuleIoStmt = 45, RuleStmtBPUTH = 46, RuleStmtBGETH = 47, RuleStmtPTRH = 48, 
    RuleStmtCLOSEH = 49, RuleStmtLISTFILES = 50, RuleGraphicsStmt = 51, 
    RuleStmtCLS = 52, RuleStmtCOLOUR = 53, RuleStmtCOLOURBG = 54, RuleStmtCURSORON = 55, 
    RuleStmtCURSOROFF = 56, RuleStmtGRAPHICS = 57, RuleStmtFLIP = 58, RuleStmtCIRCLE = 59, 
    RuleStmtLINE = 60, RuleStmtRECTANGLE = 61, RuleStmtTRIANGLE = 62, RuleStmtPLOT = 63, 
    RuleStmtCLIPON = 64, RuleStmtCLIPOFF = 65, RuleStmtTEXT = 66, RuleStmtTEXTRIGHT = 67, 
    RuleStmtTEXTCENTRE = 68, RuleStmtSHOWFPS = 69, RuleStmtRENDERTOSPRITE = 70, 
    RuleStmtRENDERTOSCREEN = 71, RuleStmtDRAWSPRITE = 72, RuleStmtDELETESPRITE = 73, 
    RuleStmtRENDERFRAME = 74, RuleStmtCREATEVERTEX = 75, RuleStmtCREATETRIANGLE = 76, 
    RuleStmtTRANSLATE = 77, RuleStmtROTATE = 78, RuleStmtSCALE = 79, RuleStmtDELETEOBJECT = 80, 
    RuleWhen = 81, RuleFnName = 82, RuleLiteral = 83, RuleVar = 84, RuleTypeVar = 85, 
    RuleNumVar = 86, RuleStrVar = 87, RuleJustVar = 88, RuleJustNumberVar = 89, 
    RuleVarName = 90, RuleVarNameInteger = 91, RuleVarNameString = 92, RuleVarNameType = 93, 
    RuleVarDecl = 94, RuleVarDeclWithDimension = 95, RuleVarList = 96, RuleFunctionVar = 97, 
    RuleFunctionVarList = 98, RuleFunctionParList = 99, RuleExprList = 100, 
    RulePrintListItem = 101, RulePrintListTick = 102, RulePrintListSeparator = 103, 
    RulePrintList = 104, RuleExpr = 105, RuleNumber = 106, RuleNumberInteger = 107, 
    RuleNumberHex = 108, RuleNumberBinary = 109, RuleNumberFloat = 110, 
    RuleStrFunc = 111, RuleString = 112, RuleStrExpr = 113, RuleNumFunc = 114, 
    RuleNumExpr = 115, RuleNumColours = 116, RuleDefaultFonts = 117
  };

  explicit DARICParser(antlr4::TokenStream *input);
  ~DARICParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class LineContext;
  class LinePlusContext;
  class ContentContext;
  class BodyContext;
  class LinenumberContext;
  class StmtContext;
  class CoreStmtContext;
  class StmtBREAKPOINTContext;
  class StmtCASEContext;
  class StmtCHAINContext;
  class StmtDATAContext;
  class StmtDIMContext;
  class StmtENDContext;
  class StmtRETURNContext;
  class StmtDEFFNContext;
  class StmtDEFPROCContext;
  class StmtFORContext;
  class StmtFORINContext;
  class StmtCallFNContext;
  class StmtIFContext;
  class StmtIFMultilineContext;
  class StmtINSTALLContext;
  class StmtGOTOContext;
  class StmtGOSUBContext;
  class StmtLETContext;
  class StmtOSCLIContext;
  class StmtCallPROCContext;
  class StmtREADContext;
  class StmtRESTOREContext;
  class StmtSWAPContext;
  class StmtTRACEONContext;
  class StmtTRACEOFFContext;
  class StmtTYPEContext;
  class StmtREPEATContext;
  class StmtWHILEContext;
  class KeyMouseStmtContext;
  class StmtINPUTContext;
  class StmtPRINTContext;
  class StmtMOUSEContext;
  class StmtINKEYContext;
  class StmtINKEYSContext;
  class StmtGETContext;
  class StmtGETSContext;
  class StmtOperatorEqualContext;
  class IoStmtContext;
  class StmtBPUTHContext;
  class StmtBGETHContext;
  class StmtPTRHContext;
  class StmtCLOSEHContext;
  class StmtLISTFILESContext;
  class GraphicsStmtContext;
  class StmtCLSContext;
  class StmtCOLOURContext;
  class StmtCOLOURBGContext;
  class StmtCURSORONContext;
  class StmtCURSOROFFContext;
  class StmtGRAPHICSContext;
  class StmtFLIPContext;
  class StmtCIRCLEContext;
  class StmtLINEContext;
  class StmtRECTANGLEContext;
  class StmtTRIANGLEContext;
  class StmtPLOTContext;
  class StmtCLIPONContext;
  class StmtCLIPOFFContext;
  class StmtTEXTContext;
  class StmtTEXTRIGHTContext;
  class StmtTEXTCENTREContext;
  class StmtSHOWFPSContext;
  class StmtRENDERTOSPRITEContext;
  class StmtRENDERTOSCREENContext;
  class StmtDRAWSPRITEContext;
  class StmtDELETESPRITEContext;
  class StmtRENDERFRAMEContext;
  class StmtCREATEVERTEXContext;
  class StmtCREATETRIANGLEContext;
  class StmtTRANSLATEContext;
  class StmtROTATEContext;
  class StmtSCALEContext;
  class StmtDELETEOBJECTContext;
  class WhenContext;
  class FnNameContext;
  class LiteralContext;
  class VarContext;
  class TypeVarContext;
  class NumVarContext;
  class StrVarContext;
  class JustVarContext;
  class JustNumberVarContext;
  class VarNameContext;
  class VarNameIntegerContext;
  class VarNameStringContext;
  class VarNameTypeContext;
  class VarDeclContext;
  class VarDeclWithDimensionContext;
  class VarListContext;
  class FunctionVarContext;
  class FunctionVarListContext;
  class FunctionParListContext;
  class ExprListContext;
  class PrintListItemContext;
  class PrintListTickContext;
  class PrintListSeparatorContext;
  class PrintListContext;
  class ExprContext;
  class NumberContext;
  class NumberIntegerContext;
  class NumberHexContext;
  class NumberBinaryContext;
  class NumberFloatContext;
  class StrFuncContext;
  class StringContext;
  class StrExprContext;
  class NumFuncContext;
  class NumExprContext;
  class NumColoursContext;
  class DefaultFontsContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<LineContext *> line();
    LineContext* line(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEWLINE();
    LinenumberContext *linenumber();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *REM();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineContext* line();

  class  LinePlusContext : public antlr4::ParserRuleContext {
  public:
    LinePlusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LineContext *> line();
    LineContext* line(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LinePlusContext* linePlus();

  class  ContentContext : public antlr4::ParserRuleContext {
  public:
    ContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContentContext* content();

  class  BodyContext : public antlr4::ParserRuleContext {
  public:
    BodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    std::vector<LineContext *> line();
    LineContext* line(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BodyContext* body();

  class  LinenumberContext : public antlr4::ParserRuleContext {
  public:
    LinenumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LinenumberContext* linenumber();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    CoreStmtContext *coreStmt();
    KeyMouseStmtContext *keyMouseStmt();
    StmtOperatorEqualContext *stmtOperatorEqual();
    IoStmtContext *ioStmt();
    GraphicsStmtContext *graphicsStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  CoreStmtContext : public antlr4::ParserRuleContext {
  public:
    CoreStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtBREAKPOINTContext *stmtBREAKPOINT();
    StmtCASEContext *stmtCASE();
    StmtCHAINContext *stmtCHAIN();
    StmtDATAContext *stmtDATA();
    StmtDIMContext *stmtDIM();
    StmtENDContext *stmtEND();
    StmtRETURNContext *stmtRETURN();
    StmtDEFFNContext *stmtDEFFN();
    StmtDEFPROCContext *stmtDEFPROC();
    StmtFORContext *stmtFOR();
    StmtFORINContext *stmtFORIN();
    StmtGOTOContext *stmtGOTO();
    StmtGOSUBContext *stmtGOSUB();
    StmtIFContext *stmtIF();
    StmtIFMultilineContext *stmtIFMultiline();
    StmtINSTALLContext *stmtINSTALL();
    StmtLETContext *stmtLET();
    StmtOSCLIContext *stmtOSCLI();
    StmtCallFNContext *stmtCallFN();
    StmtCallPROCContext *stmtCallPROC();
    StmtREADContext *stmtREAD();
    StmtRESTOREContext *stmtRESTORE();
    StmtSWAPContext *stmtSWAP();
    StmtTRACEONContext *stmtTRACEON();
    StmtTRACEOFFContext *stmtTRACEOFF();
    StmtTYPEContext *stmtTYPE();
    StmtREPEATContext *stmtREPEAT();
    StmtWHILEContext *stmtWHILE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CoreStmtContext* coreStmt();

  class  StmtBREAKPOINTContext : public antlr4::ParserRuleContext {
  public:
    StmtBREAKPOINTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAKPOINT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtBREAKPOINTContext* stmtBREAKPOINT();

  class  StmtCASEContext : public antlr4::ParserRuleContext {
  public:
    StmtCASEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *NEWLINE();
    antlr4::tree::TerminalNode *ENDCASE();
    std::vector<WhenContext *> when();
    WhenContext* when(size_t i);
    antlr4::tree::TerminalNode *OTHERWISE();
    BodyContext *body();
    std::vector<LinenumberContext *> linenumber();
    LinenumberContext* linenumber(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCASEContext* stmtCASE();

  class  StmtCHAINContext : public antlr4::ParserRuleContext {
  public:
    StmtCHAINContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAIN();
    StrExprContext *strExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCHAINContext* stmtCHAIN();

  class  StmtDATAContext : public antlr4::ParserRuleContext {
  public:
    StmtDATAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA();
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtDATAContext* stmtDATA();

  class  StmtDIMContext : public antlr4::ParserRuleContext {
  public:
    StmtDIMContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIM();
    std::vector<VarDeclWithDimensionContext *> varDeclWithDimension();
    VarDeclWithDimensionContext* varDeclWithDimension(size_t i);
    antlr4::tree::TerminalNode *LOCAL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtDIMContext* stmtDIM();

  class  StmtENDContext : public antlr4::ParserRuleContext {
  public:
    StmtENDContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtENDContext* stmtEND();

  class  StmtRETURNContext : public antlr4::ParserRuleContext {
  public:
    StmtRETURNContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtRETURNContext* stmtRETURN();

  class  StmtDEFFNContext : public antlr4::ParserRuleContext {
  public:
    StmtDEFFNContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEF();
    FnNameContext *fnName();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    BodyContext *body();
    antlr4::tree::TerminalNode *ENDFN();
    FunctionVarListContext *functionVarList();
    LinenumberContext *linenumber();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtDEFFNContext* stmtDEFFN();

  class  StmtDEFPROCContext : public antlr4::ParserRuleContext {
  public:
    StmtDEFPROCContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEF();
    antlr4::tree::TerminalNode *PROC_NAME();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    BodyContext *body();
    antlr4::tree::TerminalNode *ENDPROC();
    FunctionVarListContext *functionVarList();
    LinenumberContext *linenumber();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtDEFPROCContext* stmtDEFPROC();

  class  StmtFORContext : public antlr4::ParserRuleContext {
  public:
    StmtFORContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    JustNumberVarContext *justNumberVar();
    antlr4::tree::TerminalNode *EQ();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *TO();
    BodyContext *body();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *STEP();
    LinenumberContext *linenumber();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtFORContext* stmtFOR();

  class  StmtFORINContext : public antlr4::ParserRuleContext {
  public:
    StmtFORINContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    std::vector<JustVarContext *> justVar();
    JustVarContext* justVar(size_t i);
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    BodyContext *body();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *LOCAL();
    LinenumberContext *linenumber();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtFORINContext* stmtFORIN();

  class  StmtCallFNContext : public antlr4::ParserRuleContext {
  public:
    StmtCallFNContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FnNameContext *fnName();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FunctionParListContext *functionParList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCallFNContext* stmtCallFN();

  class  StmtIFContext : public antlr4::ParserRuleContext {
  public:
    StmtIFContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    std::vector<ContentContext *> content();
    ContentContext* content(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtIFContext* stmtIF();

  class  StmtIFMultilineContext : public antlr4::ParserRuleContext {
  public:
    StmtIFMultilineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    antlr4::tree::TerminalNode *THEN();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<LinePlusContext *> linePlus();
    LinePlusContext* linePlus(size_t i);
    antlr4::tree::TerminalNode *ENDIF();
    antlr4::tree::TerminalNode *ELSE();
    std::vector<LinenumberContext *> linenumber();
    LinenumberContext* linenumber(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtIFMultilineContext* stmtIFMultiline();

  class  StmtINSTALLContext : public antlr4::ParserRuleContext {
  public:
    StmtINSTALLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTALL();
    StrExprContext *strExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtINSTALLContext* stmtINSTALL();

  class  StmtGOTOContext : public antlr4::ParserRuleContext {
  public:
    StmtGOTOContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *NUMBER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtGOTOContext* stmtGOTO();

  class  StmtGOSUBContext : public antlr4::ParserRuleContext {
  public:
    StmtGOSUBContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOSUB();
    antlr4::tree::TerminalNode *NUMBER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtGOSUBContext* stmtGOSUB();

  class  StmtLETContext : public antlr4::ParserRuleContext {
  public:
    StmtLETContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VarDeclContext *> varDecl();
    VarDeclContext* varDecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *LOCAL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *LET();
    antlr4::tree::TerminalNode *GLOBAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtLETContext* stmtLET();

  class  StmtOSCLIContext : public antlr4::ParserRuleContext {
  public:
    StmtOSCLIContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OSCLI();
    StrExprContext *strExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtOSCLIContext* stmtOSCLI();

  class  StmtCallPROCContext : public antlr4::ParserRuleContext {
  public:
    StmtCallPROCContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROC_NAME();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FunctionParListContext *functionParList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCallPROCContext* stmtCallPROC();

  class  StmtREADContext : public antlr4::ParserRuleContext {
  public:
    StmtREADContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ();
    std::vector<VarDeclContext *> varDecl();
    VarDeclContext* varDecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtREADContext* stmtREAD();

  class  StmtRESTOREContext : public antlr4::ParserRuleContext {
  public:
    StmtRESTOREContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTORE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtRESTOREContext* stmtRESTORE();

  class  StmtSWAPContext : public antlr4::ParserRuleContext {
  public:
    StmtSWAPContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWAP();
    std::vector<JustVarContext *> justVar();
    JustVarContext* justVar(size_t i);
    antlr4::tree::TerminalNode *COMMA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtSWAPContext* stmtSWAP();

  class  StmtTRACEONContext : public antlr4::ParserRuleContext {
  public:
    StmtTRACEONContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRACEON();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtTRACEONContext* stmtTRACEON();

  class  StmtTRACEOFFContext : public antlr4::ParserRuleContext {
  public:
    StmtTRACEOFFContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRACEOFF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtTRACEOFFContext* stmtTRACEOFF();

  class  StmtTYPEContext : public antlr4::ParserRuleContext {
  public:
    StmtTYPEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    VarNameContext *varName();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<JustVarContext *> justVar();
    JustVarContext* justVar(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtTYPEContext* stmtTYPE();

  class  StmtREPEATContext : public antlr4::ParserRuleContext {
  public:
    StmtREPEATContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    BodyContext *body();
    antlr4::tree::TerminalNode *UNTIL();
    ExprContext *expr();
    LinenumberContext *linenumber();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtREPEATContext* stmtREPEAT();

  class  StmtWHILEContext : public antlr4::ParserRuleContext {
  public:
    StmtWHILEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExprContext *expr();
    BodyContext *body();
    antlr4::tree::TerminalNode *ENDWHILE();
    LinenumberContext *linenumber();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtWHILEContext* stmtWHILE();

  class  KeyMouseStmtContext : public antlr4::ParserRuleContext {
  public:
    KeyMouseStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtINPUTContext *stmtINPUT();
    StmtPRINTContext *stmtPRINT();
    StmtMOUSEContext *stmtMOUSE();
    StmtINKEYContext *stmtINKEY();
    StmtINKEYSContext *stmtINKEYS();
    StmtGETContext *stmtGET();
    StmtGETSContext *stmtGETS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyMouseStmtContext* keyMouseStmt();

  class  StmtINPUTContext : public antlr4::ParserRuleContext {
  public:
    StmtINPUTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    std::vector<JustVarContext *> justVar();
    JustVarContext* justVar(size_t i);
    antlr4::tree::TerminalNode *LOCAL();
    StrExprContext *strExpr();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtINPUTContext* stmtINPUT();

  class  StmtPRINTContext : public antlr4::ParserRuleContext {
  public:
    StmtPRINTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    PrintListContext *printList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtPRINTContext* stmtPRINT();

  class  StmtMOUSEContext : public antlr4::ParserRuleContext {
  public:
    StmtMOUSEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOUSE();
    std::vector<VarNameIntegerContext *> varNameInteger();
    VarNameIntegerContext* varNameInteger(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtMOUSEContext* stmtMOUSE();

  class  StmtINKEYContext : public antlr4::ParserRuleContext {
  public:
    StmtINKEYContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INKEY();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtINKEYContext* stmtINKEY();

  class  StmtINKEYSContext : public antlr4::ParserRuleContext {
  public:
    StmtINKEYSContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INKEYS();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtINKEYSContext* stmtINKEYS();

  class  StmtGETContext : public antlr4::ParserRuleContext {
  public:
    StmtGETContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtGETContext* stmtGET();

  class  StmtGETSContext : public antlr4::ParserRuleContext {
  public:
    StmtGETSContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GETS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtGETSContext* stmtGETS();

  class  StmtOperatorEqualContext : public antlr4::ParserRuleContext {
  public:
    StmtOperatorEqualContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarDeclContext *varDecl();
    antlr4::tree::TerminalNode *MULTIPLY_E();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *DIVIDE_E();
    antlr4::tree::TerminalNode *PLUS_E();
    antlr4::tree::TerminalNode *MINUS_E();
    antlr4::tree::TerminalNode *SHL_E();
    antlr4::tree::TerminalNode *SHR_E();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtOperatorEqualContext* stmtOperatorEqual();

  class  IoStmtContext : public antlr4::ParserRuleContext {
  public:
    IoStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtBPUTHContext *stmtBPUTH();
    StmtBGETHContext *stmtBGETH();
    StmtPTRHContext *stmtPTRH();
    StmtCLOSEHContext *stmtCLOSEH();
    StmtLISTFILESContext *stmtLISTFILES();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IoStmtContext* ioStmt();

  class  StmtBPUTHContext : public antlr4::ParserRuleContext {
  public:
    StmtBPUTHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BPUTH();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *COMMA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtBPUTHContext* stmtBPUTH();

  class  StmtBGETHContext : public antlr4::ParserRuleContext {
  public:
    StmtBGETHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BGETH();
    NumExprContext *numExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtBGETHContext* stmtBGETH();

  class  StmtPTRHContext : public antlr4::ParserRuleContext {
  public:
    StmtPTRHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PTRH();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *EQ();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtPTRHContext* stmtPTRH();

  class  StmtCLOSEHContext : public antlr4::ParserRuleContext {
  public:
    StmtCLOSEHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSEH();
    NumExprContext *numExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCLOSEHContext* stmtCLOSEH();

  class  StmtLISTFILESContext : public antlr4::ParserRuleContext {
  public:
    StmtLISTFILESContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarNameStringContext *varNameString();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *LISTFILES();
    StrExprContext *strExpr();
    antlr4::tree::TerminalNode *LOCAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtLISTFILESContext* stmtLISTFILES();

  class  GraphicsStmtContext : public antlr4::ParserRuleContext {
  public:
    GraphicsStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtCLSContext *stmtCLS();
    StmtCOLOURContext *stmtCOLOUR();
    StmtCOLOURBGContext *stmtCOLOURBG();
    StmtCURSORONContext *stmtCURSORON();
    StmtCURSOROFFContext *stmtCURSOROFF();
    StmtGRAPHICSContext *stmtGRAPHICS();
    StmtFLIPContext *stmtFLIP();
    StmtCIRCLEContext *stmtCIRCLE();
    StmtLINEContext *stmtLINE();
    StmtRECTANGLEContext *stmtRECTANGLE();
    StmtTRIANGLEContext *stmtTRIANGLE();
    StmtPLOTContext *stmtPLOT();
    StmtCLIPONContext *stmtCLIPON();
    StmtCLIPOFFContext *stmtCLIPOFF();
    StmtTEXTContext *stmtTEXT();
    StmtTEXTRIGHTContext *stmtTEXTRIGHT();
    StmtTEXTCENTREContext *stmtTEXTCENTRE();
    StmtSHOWFPSContext *stmtSHOWFPS();
    StmtRENDERTOSPRITEContext *stmtRENDERTOSPRITE();
    StmtRENDERTOSCREENContext *stmtRENDERTOSCREEN();
    StmtDRAWSPRITEContext *stmtDRAWSPRITE();
    StmtDELETESPRITEContext *stmtDELETESPRITE();
    StmtRENDERFRAMEContext *stmtRENDERFRAME();
    StmtCREATEVERTEXContext *stmtCREATEVERTEX();
    StmtCREATETRIANGLEContext *stmtCREATETRIANGLE();
    StmtTRANSLATEContext *stmtTRANSLATE();
    StmtROTATEContext *stmtROTATE();
    StmtSCALEContext *stmtSCALE();
    StmtDELETEOBJECTContext *stmtDELETEOBJECT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GraphicsStmtContext* graphicsStmt();

  class  StmtCLSContext : public antlr4::ParserRuleContext {
  public:
    StmtCLSContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCLSContext* stmtCLS();

  class  StmtCOLOURContext : public antlr4::ParserRuleContext {
  public:
    StmtCOLOURContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLOUR();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCOLOURContext* stmtCOLOUR();

  class  StmtCOLOURBGContext : public antlr4::ParserRuleContext {
  public:
    StmtCOLOURBGContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLOURBG();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCOLOURBGContext* stmtCOLOURBG();

  class  StmtCURSORONContext : public antlr4::ParserRuleContext {
  public:
    StmtCURSORONContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURSORON();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCURSORONContext* stmtCURSORON();

  class  StmtCURSOROFFContext : public antlr4::ParserRuleContext {
  public:
    StmtCURSOROFFContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURSOROFF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCURSOROFFContext* stmtCURSOROFF();

  class  StmtGRAPHICSContext : public antlr4::ParserRuleContext {
  public:
    StmtGRAPHICSContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRAPHICS();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *BANKED();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtGRAPHICSContext* stmtGRAPHICS();

  class  StmtFLIPContext : public antlr4::ParserRuleContext {
  public:
    StmtFLIPContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLIP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtFLIPContext* stmtFLIP();

  class  StmtCIRCLEContext : public antlr4::ParserRuleContext {
  public:
    StmtCIRCLEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CIRCLE();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *FILL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCIRCLEContext* stmtCIRCLE();

  class  StmtLINEContext : public antlr4::ParserRuleContext {
  public:
    StmtLINEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINE();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtLINEContext* stmtLINE();

  class  StmtRECTANGLEContext : public antlr4::ParserRuleContext {
  public:
    StmtRECTANGLEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RECTANGLE();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *FILL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtRECTANGLEContext* stmtRECTANGLE();

  class  StmtTRIANGLEContext : public antlr4::ParserRuleContext {
  public:
    StmtTRIANGLEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRIANGLE();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *FILL();
    antlr4::tree::TerminalNode *SHADED();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtTRIANGLEContext* stmtTRIANGLE();

  class  StmtPLOTContext : public antlr4::ParserRuleContext {
  public:
    StmtPLOTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLOT();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *COMMA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtPLOTContext* stmtPLOT();

  class  StmtCLIPONContext : public antlr4::ParserRuleContext {
  public:
    StmtCLIPONContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLIPON();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCLIPONContext* stmtCLIPON();

  class  StmtCLIPOFFContext : public antlr4::ParserRuleContext {
  public:
    StmtCLIPOFFContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLIPOFF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCLIPOFFContext* stmtCLIPOFF();

  class  StmtTEXTContext : public antlr4::ParserRuleContext {
  public:
    StmtTEXTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXT();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    StrExprContext *strExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtTEXTContext* stmtTEXT();

  class  StmtTEXTRIGHTContext : public antlr4::ParserRuleContext {
  public:
    StmtTEXTRIGHTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXTRIGHT();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    StrExprContext *strExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtTEXTRIGHTContext* stmtTEXTRIGHT();

  class  StmtTEXTCENTREContext : public antlr4::ParserRuleContext {
  public:
    StmtTEXTCENTREContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    StrExprContext *strExpr();
    antlr4::tree::TerminalNode *TEXTCENTRE();
    antlr4::tree::TerminalNode *TEXTCENTER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtTEXTCENTREContext* stmtTEXTCENTRE();

  class  StmtSHOWFPSContext : public antlr4::ParserRuleContext {
  public:
    StmtSHOWFPSContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOWFPS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtSHOWFPSContext* stmtSHOWFPS();

  class  StmtRENDERTOSPRITEContext : public antlr4::ParserRuleContext {
  public:
    StmtRENDERTOSPRITEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DRAWTOSPRITE();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtRENDERTOSPRITEContext* stmtRENDERTOSPRITE();

  class  StmtRENDERTOSCREENContext : public antlr4::ParserRuleContext {
  public:
    StmtRENDERTOSCREENContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DRAWTOSCREEN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtRENDERTOSCREENContext* stmtRENDERTOSCREEN();

  class  StmtDRAWSPRITEContext : public antlr4::ParserRuleContext {
  public:
    StmtDRAWSPRITEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DRAWSPRITE();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtDRAWSPRITEContext* stmtDRAWSPRITE();

  class  StmtDELETESPRITEContext : public antlr4::ParserRuleContext {
  public:
    StmtDELETESPRITEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETESPRITE();
    NumExprContext *numExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtDELETESPRITEContext* stmtDELETESPRITE();

  class  StmtRENDERFRAMEContext : public antlr4::ParserRuleContext {
  public:
    StmtRENDERFRAMEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENDERFRAME();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtRENDERFRAMEContext* stmtRENDERFRAME();

  class  StmtCREATEVERTEXContext : public antlr4::ParserRuleContext {
  public:
    StmtCREATEVERTEXContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATEVERTEX();
    VarNameTypeContext *varNameType();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCREATEVERTEXContext* stmtCREATEVERTEX();

  class  StmtCREATETRIANGLEContext : public antlr4::ParserRuleContext {
  public:
    StmtCREATETRIANGLEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATETRIANGLE();
    VarNameTypeContext *varNameType();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtCREATETRIANGLEContext* stmtCREATETRIANGLE();

  class  StmtTRANSLATEContext : public antlr4::ParserRuleContext {
  public:
    StmtTRANSLATEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRANSLATE();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtTRANSLATEContext* stmtTRANSLATE();

  class  StmtROTATEContext : public antlr4::ParserRuleContext {
  public:
    StmtROTATEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROTATE();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtROTATEContext* stmtROTATE();

  class  StmtSCALEContext : public antlr4::ParserRuleContext {
  public:
    StmtSCALEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCALE();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *COMMA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtSCALEContext* stmtSCALE();

  class  StmtDELETEOBJECTContext : public antlr4::ParserRuleContext {
  public:
    StmtDELETEOBJECTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETEOBJECT();
    NumExprContext *numExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtDELETEOBJECTContext* stmtDELETEOBJECT();

  class  WhenContext : public antlr4::ParserRuleContext {
  public:
    WhenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *COLON();
    BodyContext *body();
    LinenumberContext *linenumber();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenContext* when();

  class  FnNameContext : public antlr4::ParserRuleContext {
  public:
    FnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FN_FLOAT();
    antlr4::tree::TerminalNode *FN_INTEGER();
    antlr4::tree::TerminalNode *FN_STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FnNameContext* fnName();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    StringContext *string();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  VarContext : public antlr4::ParserRuleContext {
  public:
    VarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumVarContext *numVar();
    StrVarContext *strVar();
    TypeVarContext *typeVar();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarContext* var();

  class  TypeVarContext : public antlr4::ParserRuleContext {
  public:
    TypeVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TypeVarContext() = default;
    void copyFrom(TypeVarContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TypeVarTypeContext : public TypeVarContext {
  public:
    TypeVarTypeContext(TypeVarContext *ctx);

    VarNameTypeContext *varNameType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TypeVarContext* typeVar();

  class  NumVarContext : public antlr4::ParserRuleContext {
  public:
    NumVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumVarContext() = default;
    void copyFrom(NumVarContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NumVarFloatFieldContext : public NumVarContext {
  public:
    NumVarFloatFieldContext(NumVarContext *ctx);

    TypeVarContext *typeVar();
    VarNameContext *varName();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumVarIntegerFNContext : public NumVarContext {
  public:
    NumVarIntegerFNContext(NumVarContext *ctx);

    antlr4::tree::TerminalNode *FN_INTEGER();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FunctionParListContext *functionParList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumVarIntegerFieldArrayContext : public NumVarContext {
  public:
    NumVarIntegerFieldArrayContext(NumVarContext *ctx);

    TypeVarContext *typeVar();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();
    VarNameIntegerContext *varNameInteger();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumVarFloatArrayContext : public NumVarContext {
  public:
    NumVarFloatArrayContext(NumVarContext *ctx);

    VarNameContext *varName();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COMMA();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumVarFloatFNContext : public NumVarContext {
  public:
    NumVarFloatFNContext(NumVarContext *ctx);

    antlr4::tree::TerminalNode *FN_FLOAT();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FunctionParListContext *functionParList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumVarFloatContext : public NumVarContext {
  public:
    NumVarFloatContext(NumVarContext *ctx);

    VarNameContext *varName();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumVarIntegerArrayContext : public NumVarContext {
  public:
    NumVarIntegerArrayContext(NumVarContext *ctx);

    VarNameIntegerContext *varNameInteger();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COMMA();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumVarFloatFieldArrayContext : public NumVarContext {
  public:
    NumVarFloatFieldArrayContext(NumVarContext *ctx);

    TypeVarContext *typeVar();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();
    VarNameContext *varName();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumVarIntegerContext : public NumVarContext {
  public:
    NumVarIntegerContext(NumVarContext *ctx);

    VarNameIntegerContext *varNameInteger();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumVarIntegerFieldContext : public NumVarContext {
  public:
    NumVarIntegerFieldContext(NumVarContext *ctx);

    TypeVarContext *typeVar();
    VarNameIntegerContext *varNameInteger();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumVarContext* numVar();

  class  StrVarContext : public antlr4::ParserRuleContext {
  public:
    StrVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StrVarContext() = default;
    void copyFrom(StrVarContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NumVarStringFNContext : public StrVarContext {
  public:
    NumVarStringFNContext(StrVarContext *ctx);

    antlr4::tree::TerminalNode *FN_STRING();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FunctionParListContext *functionParList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumVarStringArrayContext : public StrVarContext {
  public:
    NumVarStringArrayContext(StrVarContext *ctx);

    VarNameStringContext *varNameString();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COMMA();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumVarStringFieldArrayContext : public StrVarContext {
  public:
    NumVarStringFieldArrayContext(StrVarContext *ctx);

    TypeVarContext *typeVar();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();
    VarNameStringContext *varNameString();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumVarStringContext : public StrVarContext {
  public:
    NumVarStringContext(StrVarContext *ctx);

    VarNameStringContext *varNameString();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumVarStringFieldContext : public StrVarContext {
  public:
    NumVarStringFieldContext(StrVarContext *ctx);

    TypeVarContext *typeVar();
    VarNameStringContext *varNameString();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StrVarContext* strVar();

  class  JustVarContext : public antlr4::ParserRuleContext {
  public:
    JustVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarNameContext *varName();
    VarNameIntegerContext *varNameInteger();
    VarNameStringContext *varNameString();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JustVarContext* justVar();

  class  JustNumberVarContext : public antlr4::ParserRuleContext {
  public:
    JustNumberVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarNameContext *varName();
    VarNameIntegerContext *varNameInteger();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JustNumberVarContext* justNumberVar();

  class  VarNameContext : public antlr4::ParserRuleContext {
  public:
    VarNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE_FLOAT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarNameContext* varName();

  class  VarNameIntegerContext : public antlr4::ParserRuleContext {
  public:
    VarNameIntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE_INTEGER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarNameIntegerContext* varNameInteger();

  class  VarNameStringContext : public antlr4::ParserRuleContext {
  public:
    VarNameStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE_STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarNameStringContext* varNameString();

  class  VarNameTypeContext : public antlr4::ParserRuleContext {
  public:
    VarNameTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE_TYPE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarNameTypeContext* varNameType();

  class  VarDeclContext : public antlr4::ParserRuleContext {
  public:
    VarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VarDeclContext() = default;
    void copyFrom(VarDeclContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VarDeclTypeVarContext : public VarDeclContext {
  public:
    VarDeclTypeVarContext(VarDeclContext *ctx);

    TypeVarContext *typeVar();
    VarNameContext *varName();
    VarNameIntegerContext *varNameInteger();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarDeclTypeVarArrayedContext : public VarDeclContext {
  public:
    VarDeclTypeVarArrayedContext(VarDeclContext *ctx);

    TypeVarContext *typeVar();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();
    VarNameContext *varName();
    VarNameIntegerContext *varNameInteger();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarDeclIndContext : public VarDeclContext {
  public:
    VarDeclIndContext(VarDeclContext *ctx);

    JustVarContext *justVar();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarDeclArrayedContext : public VarDeclContext {
  public:
    VarDeclArrayedContext(VarDeclContext *ctx);

    JustVarContext *justVar();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarDeclTypeContext : public VarDeclContext {
  public:
    VarDeclTypeContext(VarDeclContext *ctx);

    TypeVarContext *typeVar();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarDeclTypeArrayedContext : public VarDeclContext {
  public:
    VarDeclTypeArrayedContext(VarDeclContext *ctx);

    TypeVarContext *typeVar();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VarDeclContext* varDecl();

  class  VarDeclWithDimensionContext : public antlr4::ParserRuleContext {
  public:
    VarDeclWithDimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JustVarContext *justVar();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    TypeVarContext *typeVar();
    VarNameContext *varName();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclWithDimensionContext* varDeclWithDimension();

  class  VarListContext : public antlr4::ParserRuleContext {
  public:
    VarListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VarDeclContext *> varDecl();
    VarDeclContext* varDecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarListContext* varList();

  class  FunctionVarContext : public antlr4::ParserRuleContext {
  public:
    FunctionVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JustVarContext *justVar();
    antlr4::tree::TerminalNode *RETURN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionVarContext* functionVar();

  class  FunctionVarListContext : public antlr4::ParserRuleContext {
  public:
    FunctionVarListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctionVarContext *> functionVar();
    FunctionVarContext* functionVar(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionVarListContext* functionVarList();

  class  FunctionParListContext : public antlr4::ParserRuleContext {
  public:
    FunctionParListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionParListContext* functionParList();

  class  ExprListContext : public antlr4::ParserRuleContext {
  public:
    ExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprListContext* exprList();

  class  PrintListItemContext : public antlr4::ParserRuleContext {
  public:
    PrintListItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrintListItemContext() = default;
    void copyFrom(PrintListItemContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrintListExprContext : public PrintListItemContext {
  public:
    PrintListExprContext(PrintListItemContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *TILDE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrintListSPCContext : public PrintListItemContext {
  public:
    PrintListSPCContext(PrintListItemContext *ctx);

    antlr4::tree::TerminalNode *SPC();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrintListSPCPContext : public PrintListItemContext {
  public:
    PrintListSPCPContext(PrintListItemContext *ctx);

    antlr4::tree::TerminalNode *SPC();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PrintListItemContext* printListItem();

  class  PrintListTickContext : public antlr4::ParserRuleContext {
  public:
    PrintListTickContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> TICK();
    antlr4::tree::TerminalNode* TICK(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintListTickContext* printListTick();

  class  PrintListSeparatorContext : public antlr4::ParserRuleContext {
  public:
    PrintListSeparatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *SEMICOLON();
    PrintListTickContext *printListTick();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintListSeparatorContext* printListSeparator();

  class  PrintListContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *s1 = nullptr;
    antlr4::Token *s2 = nullptr;
    PrintListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrintListItemContext *> printListItem();
    PrintListItemContext* printListItem(size_t i);
    PrintListTickContext *printListTick();
    std::vector<PrintListSeparatorContext *> printListSeparator();
    PrintListSeparatorContext* printListSeparator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintListContext* printList();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumExprContext *numExpr();
    StrExprContext *strExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberIntegerContext *numberInteger();
    NumberFloatContext *numberFloat();
    NumberHexContext *numberHex();
    NumberBinaryContext *numberBinary();
    NumColoursContext *numColours();
    DefaultFontsContext *defaultFonts();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  NumberIntegerContext : public antlr4::ParserRuleContext {
  public:
    NumberIntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberIntegerContext* numberInteger();

  class  NumberHexContext : public antlr4::ParserRuleContext {
  public:
    NumberHexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEXNUMBER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberHexContext* numberHex();

  class  NumberBinaryContext : public antlr4::ParserRuleContext {
  public:
    NumberBinaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARYNUMBER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberBinaryContext* numberBinary();

  class  NumberFloatContext : public antlr4::ParserRuleContext {
  public:
    NumberFloatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberFloatContext* numberFloat();

  class  StrFuncContext : public antlr4::ParserRuleContext {
  public:
    StrFuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StrFuncContext() = default;
    void copyFrom(StrFuncContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StrFuncTIMESContext : public StrFuncContext {
  public:
    StrFuncTIMESContext(StrFuncContext *ctx);

    antlr4::tree::TerminalNode *TIMES();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StrFuncSTRSContext : public StrFuncContext {
  public:
    StrFuncSTRSContext(StrFuncContext *ctx);

    antlr4::tree::TerminalNode *STRS();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StrFuncGETSContext : public StrFuncContext {
  public:
    StrFuncGETSContext(StrFuncContext *ctx);

    antlr4::tree::TerminalNode *GETS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StrFuncINKEYSContext : public StrFuncContext {
  public:
    StrFuncINKEYSContext(StrFuncContext *ctx);

    antlr4::tree::TerminalNode *INKEYS();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StrFuncRIGHTSContext : public StrFuncContext {
  public:
    StrFuncRIGHTSContext(StrFuncContext *ctx);

    antlr4::tree::TerminalNode *RIGHTS();
    antlr4::tree::TerminalNode *LPAREN();
    StrExprContext *strExpr();
    antlr4::tree::TerminalNode *COMMA();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StrFuncLEFTSContext : public StrFuncContext {
  public:
    StrFuncLEFTSContext(StrFuncContext *ctx);

    antlr4::tree::TerminalNode *LEFTS();
    antlr4::tree::TerminalNode *LPAREN();
    StrExprContext *strExpr();
    antlr4::tree::TerminalNode *COMMA();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StrFuncCHRSContext : public StrFuncContext {
  public:
    StrFuncCHRSContext(StrFuncContext *ctx);

    antlr4::tree::TerminalNode *CHRS();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StrFuncMIDS3Context : public StrFuncContext {
  public:
    StrFuncMIDS3Context(StrFuncContext *ctx);

    antlr4::tree::TerminalNode *MIDS();
    antlr4::tree::TerminalNode *LPAREN();
    StrExprContext *strExpr();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StrFuncSTRSHEXContext : public StrFuncContext {
  public:
    StrFuncSTRSHEXContext(StrFuncContext *ctx);

    antlr4::tree::TerminalNode *STRS();
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StrFuncMIDS2Context : public StrFuncContext {
  public:
    StrFuncMIDS2Context(StrFuncContext *ctx);

    antlr4::tree::TerminalNode *MIDS();
    antlr4::tree::TerminalNode *LPAREN();
    StrExprContext *strExpr();
    antlr4::tree::TerminalNode *COMMA();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StrFuncSTRINGSContext : public StrFuncContext {
  public:
    StrFuncSTRINGSContext(StrFuncContext *ctx);

    antlr4::tree::TerminalNode *STRINGS();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *COMMA();
    StrExprContext *strExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StrFuncGETSHContext : public StrFuncContext {
  public:
    StrFuncGETSHContext(StrFuncContext *ctx);

    antlr4::tree::TerminalNode *GETSH();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StrFuncContext* strFunc();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRINGLITERAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  StrExprContext : public antlr4::ParserRuleContext {
  public:
    StrExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<StrExprContext *> strExpr();
    StrExprContext* strExpr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    StrFuncContext *strFunc();
    StrVarContext *strVar();
    StringContext *string();
    antlr4::tree::TerminalNode *PLUS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StrExprContext* strExpr();
  StrExprContext* strExpr(int precedence);
  class  NumFuncContext : public antlr4::ParserRuleContext {
  public:
    NumFuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumFuncContext() = default;
    void copyFrom(NumFuncContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NumFuncRNDRANGEContext : public NumFuncContext {
  public:
    NumFuncRNDRANGEContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *RND();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncRND0Context : public NumFuncContext {
  public:
    NumFuncRND0Context(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *RND0();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncGETContext : public NumFuncContext {
  public:
    NumFuncGETContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *GET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncRND1Context : public NumFuncContext {
  public:
    NumFuncRND1Context(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *RND1();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncLNContext : public NumFuncContext {
  public:
    NumFuncLNContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *LN();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncSINContext : public NumFuncContext {
  public:
    NumFuncSINContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncOPENINContext : public NumFuncContext {
  public:
    NumFuncOPENINContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *OPENIN();
    antlr4::tree::TerminalNode *LPAREN();
    StrExprContext *strExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncLOADSPRITEContext : public NumFuncContext {
  public:
    NumFuncLOADSPRITEContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *LOADSPRITE();
    antlr4::tree::TerminalNode *LPAREN();
    StrExprContext *strExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncRADContext : public NumFuncContext {
  public:
    NumFuncRADContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *RAD();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncSQRContext : public NumFuncContext {
  public:
    NumFuncSQRContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *SQR();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncSHAPEContext : public NumFuncContext {
  public:
    NumFuncSHAPEContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *CREATESHAPE();
    std::vector<VarNameTypeContext *> varNameType();
    VarNameTypeContext* varNameType(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncLENContext : public NumFuncContext {
  public:
    NumFuncLENContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *LEN();
    StrExprContext *strExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncSCREENWIDTHContext : public NumFuncContext {
  public:
    NumFuncSCREENWIDTHContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *SCREENWIDTH();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncFLOATContext : public NumFuncContext {
  public:
    NumFuncFLOATContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *FLOAT_TOKEN();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncBGETHContext : public NumFuncContext {
  public:
    NumFuncBGETHContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *BGETH();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncACSContext : public NumFuncContext {
  public:
    NumFuncACSContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *ACS();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncPIContext : public NumFuncContext {
  public:
    NumFuncPIContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *PI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncFALSEContext : public NumFuncContext {
  public:
    NumFuncFALSEContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *FALSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncCREATESPRITEContext : public NumFuncContext {
  public:
    NumFuncCREATESPRITEContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *CREATESPRITE();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncRNDContext : public NumFuncContext {
  public:
    NumFuncRNDContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *RND();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncOPENOUTContext : public NumFuncContext {
  public:
    NumFuncOPENOUTContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *OPENOUT();
    antlr4::tree::TerminalNode *LPAREN();
    StrExprContext *strExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncOPENUPContext : public NumFuncContext {
  public:
    NumFuncOPENUPContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *OPENUP();
    antlr4::tree::TerminalNode *LPAREN();
    StrExprContext *strExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncINKEYContext : public NumFuncContext {
  public:
    NumFuncINKEYContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *INKEY();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncINSTR3Context : public NumFuncContext {
  public:
    NumFuncINSTR3Context(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *INSTR();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<StrExprContext *> strExpr();
    StrExprContext* strExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncINSTR2Context : public NumFuncContext {
  public:
    NumFuncINSTR2Context(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *INSTR();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<StrExprContext *> strExpr();
    StrExprContext* strExpr(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncTANContext : public NumFuncContext {
  public:
    NumFuncTANContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncEOFHContext : public NumFuncContext {
  public:
    NumFuncEOFHContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *EOFH();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncVALContext : public NumFuncContext {
  public:
    NumFuncVALContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *VAL();
    StrExprContext *strExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncSCREENHEIGHTContext : public NumFuncContext {
  public:
    NumFuncSCREENHEIGHTContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *SCREENHEIGHT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncATNContext : public NumFuncContext {
  public:
    NumFuncATNContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *ATN();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncSGNContext : public NumFuncContext {
  public:
    NumFuncSGNContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *SGN();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncEXPContext : public NumFuncContext {
  public:
    NumFuncEXPContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncCOLOURContext : public NumFuncContext {
  public:
    NumFuncCOLOURContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *COLOUR();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncTIMEContext : public NumFuncContext {
  public:
    NumFuncTIMEContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *TIME();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncABSContext : public NumFuncContext {
  public:
    NumFuncABSContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncPTRContext : public NumFuncContext {
  public:
    NumFuncPTRContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *PTRH();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncINTContext : public NumFuncContext {
  public:
    NumFuncINTContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncTRUEContext : public NumFuncContext {
  public:
    NumFuncTRUEContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *TRUE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncASCContext : public NumFuncContext {
  public:
    NumFuncASCContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *ASC();
    StrExprContext *strExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncPOINTContext : public NumFuncContext {
  public:
    NumFuncPOINTContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *POINT();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncDEGContext : public NumFuncContext {
  public:
    NumFuncDEGContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *DEG();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncCOSContext : public NumFuncContext {
  public:
    NumFuncCOSContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncLOGContext : public NumFuncContext {
  public:
    NumFuncLOGContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncASNContext : public NumFuncContext {
  public:
    NumFuncASNContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *ASN();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncLOADTYPEFACEContext : public NumFuncContext {
  public:
    NumFuncLOADTYPEFACEContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *LOADTYPEFACE();
    antlr4::tree::TerminalNode *LPAREN();
    StrExprContext *strExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncOBJECTContext : public NumFuncContext {
  public:
    NumFuncOBJECTContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *CREATEOBJECT();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *SOLID();
    antlr4::tree::TerminalNode *WIREFRAME();
    antlr4::tree::TerminalNode *SHADED();
    antlr4::tree::TerminalNode *FILLEDWIREFRAME();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumFuncContext* numFunc();

  class  NumExprContext : public antlr4::ParserRuleContext {
  public:
    NumExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumExprContext() = default;
    void copyFrom(NumExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NumExprNumberContext : public NumExprContext {
  public:
    NumExprNumberContext(NumExprContext *ctx);

    NumberContext *number();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprSHLSHRContext : public NumExprContext {
  public:
    NumExprSHLSHRContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *SHL();
    antlr4::tree::TerminalNode *SHR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprFuncContext : public NumExprContext {
  public:
    NumExprFuncContext(NumExprContext *ctx);

    NumFuncContext *numFunc();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprVarContext : public NumExprContext {
  public:
    NumExprVarContext(NumExprContext *ctx);

    NumVarContext *numVar();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncArraySizeContext : public NumExprContext {
  public:
    NumFuncArraySizeContext(NumExprContext *ctx);

    antlr4::tree::TerminalNode *LEN();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    JustVarContext *justVar();
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprHatContext : public NumExprContext {
  public:
    NumExprHatContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *HAT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprNumRelopContext : public NumExprContext {
  public:
    NumExprNumRelopContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprStrRelopContext : public NumExprContext {
  public:
    NumExprStrRelopContext(NumExprContext *ctx);

    std::vector<StrExprContext *> strExpr();
    StrExprContext* strExpr(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprNOTContext : public NumExprContext {
  public:
    NumExprNOTContext(NumExprContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprMultiplyDivideContext : public NumExprContext {
  public:
    NumExprMultiplyDivideContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *DIVIDE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprDIVMODContext : public NumExprContext {
  public:
    NumExprDIVMODContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprANDOREORContext : public NumExprContext {
  public:
    NumExprANDOREORContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *EOR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprNestedContext : public NumExprContext {
  public:
    NumExprNestedContext(NumExprContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprUnaryContext : public NumExprContext {
  public:
    NumExprUnaryContext(NumExprContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprAddSubtractContext : public NumExprContext {
  public:
    NumExprAddSubtractContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumExprContext* numExpr();
  NumExprContext* numExpr(int precedence);
  class  NumColoursContext : public antlr4::ParserRuleContext {
  public:
    NumColoursContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RED();
    antlr4::tree::TerminalNode *GREEN();
    antlr4::tree::TerminalNode *YELLOW();
    antlr4::tree::TerminalNode *BLUE();
    antlr4::tree::TerminalNode *MAGENTA();
    antlr4::tree::TerminalNode *CYAN();
    antlr4::tree::TerminalNode *WHITE();
    antlr4::tree::TerminalNode *BLACK();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumColoursContext* numColours();

  class  DefaultFontsContext : public antlr4::ParserRuleContext {
  public:
    DefaultFontsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MONO();
    antlr4::tree::TerminalNode *PROP();
    antlr4::tree::TerminalNode *SERIF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultFontsContext* defaultFonts();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool strExprSempred(StrExprContext *_localctx, size_t predicateIndex);
  bool numExprSempred(NumExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

