
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
    LET = 27, NEXT = 28, OF = 29, OFF = 30, ON = 31, OSCLI = 32, OTHERWISE = 33, 
    PRINT = 34, PROC = 35, READ = 36, REM = 37, REPEAT = 38, RESTORE = 39, 
    RETURN = 40, SPC = 41, STEP = 42, SWAP = 43, THEN = 44, TO = 45, TRACE = 46, 
    TRACEON = 47, TRACEOFF = 48, TRUE = 49, TYPE = 50, UNTIL = 51, WHEN = 52, 
    WHILE = 53, MOUSE = 54, INKEY = 55, INKEYS = 56, GET = 57, GETS = 58, 
    RED = 59, GREEN = 60, YELLOW = 61, BLUE = 62, MAGENTA = 63, CYAN = 64, 
    WHITE = 65, BLACK = 66, MONO15 = 67, MONO20 = 68, MONO25 = 69, MONO30 = 70, 
    MONO35 = 71, MONO40 = 72, MONO50 = 73, MONO75 = 74, MONO100 = 75, PROP15 = 76, 
    PROP20 = 77, PROP25 = 78, PROP30 = 79, PROP35 = 80, PROP40 = 81, PROP50 = 82, 
    PROP75 = 83, PROP100 = 84, SERIF15 = 85, SERIF20 = 86, SERIF25 = 87, 
    SERIF30 = 88, SERIF35 = 89, SERIF40 = 90, SERIF50 = 91, SERIF75 = 92, 
    SERIF100 = 93, RENDERFRAME = 94, CREATEVERTEX = 95, CREATETRIANGLE = 96, 
    TRANSLATE = 97, ROTATE = 98, SCALE = 99, DELETEOBJECT = 100, CREATESHAPE = 101, 
    CREATEOBJECT = 102, SOLID = 103, WIREFRAME = 104, SHADED = 105, FILLEDWIREFRAME = 106, 
    BGETH = 107, BPUTH = 108, CLOSEH = 109, EOFH = 110, GETSH = 111, LISTFILES = 112, 
    OPENIN = 113, OPENOUT = 114, OPENUP = 115, PTRH = 116, BANKED = 117, 
    CIRCLE = 118, CLS = 119, CLIPON = 120, CLIPOFF = 121, COLOUR = 122, 
    COLOURBG = 123, CREATEFONT = 124, FILL = 125, FLIP = 126, SHOWFPS = 127, 
    GRAPHICS = 128, LINE = 129, LOADTYPEFACE = 130, RECTANGLE = 131, PLOT = 132, 
    POINT = 133, SCREENWIDTH = 134, SCREENHEIGHT = 135, TEXT = 136, TEXTRIGHT = 137, 
    TEXTCENTRE = 138, TEXTCENTER = 139, TRIANGLE = 140, TIME = 141, PI = 142, 
    SQR = 143, LN = 144, LOG = 145, EXP = 146, ATN = 147, TAN = 148, COS = 149, 
    SIN = 150, ABS = 151, ACS = 152, ASN = 153, DEG = 154, RAD = 155, SGN = 156, 
    ASC = 157, LEN = 158, INSTR = 159, VAL = 160, TIMES = 161, STRS = 162, 
    STRINGS = 163, CHRS = 164, LEFTS = 165, MIDS = 166, RIGHTS = 167, RND = 168, 
    RND0 = 169, RND1 = 170, EQ = 171, NE = 172, GT = 173, GE = 174, LT = 175, 
    LE = 176, NOT = 177, AND = 178, OR = 179, EOR = 180, MOD = 181, DIV = 182, 
    HAT = 183, PLUS = 184, MINUS = 185, MULTIPLY = 186, DIVIDE = 187, SHL = 188, 
    SHR = 189, PLUS_E = 190, MINUS_E = 191, MULTIPLY_E = 192, DIVIDE_E = 193, 
    SHL_E = 194, SHR_E = 195, NEWLINE = 196, TICK = 197, TILDE = 198, HASH = 199, 
    COLON = 200, COMMA = 201, DOLLAR = 202, LPAREN = 203, PERCENT = 204, 
    RPAREN = 205, SEMICOLON = 206, UNDERSCORE = 207, COMMENT = 208, STRINGLITERAL = 209, 
    PROC_NAME = 210, FN_INTEGER = 211, FN_FLOAT = 212, FN_STRING = 213, 
    VARIABLE_FLOAT = 214, VARIABLE_INTEGER = 215, VARIABLE_STRING = 216, 
    VARIABLE_TYPE = 217, HEXNUMBER = 218, BINARYNUMBER = 219, NUMBER = 220, 
    FLOAT = 221, WS = 222
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
    RuleStmtCLS = 52, RuleStmtCOLOUR = 53, RuleStmtCOLOURBG = 54, RuleStmtGRAPHICS = 55, 
    RuleStmtFLIP = 56, RuleStmtCIRCLE = 57, RuleStmtLINE = 58, RuleStmtRECTANGLE = 59, 
    RuleStmtTRIANGLE = 60, RuleStmtPLOT = 61, RuleStmtCLIPON = 62, RuleStmtCLIPOFF = 63, 
    RuleStmtTEXT = 64, RuleStmtTEXTRIGHT = 65, RuleStmtTEXTCENTRE = 66, 
    RuleStmtSHOWFPS = 67, RuleStmtRENDERFRAME = 68, RuleStmtCREATEVERTEX = 69, 
    RuleStmtCREATETRIANGLE = 70, RuleStmtTRANSLATE = 71, RuleStmtROTATE = 72, 
    RuleStmtSCALE = 73, RuleStmtDELETEOBJECT = 74, RuleWhen = 75, RuleFnName = 76, 
    RuleLiteral = 77, RuleVar = 78, RuleTypeVar = 79, RuleNumVar = 80, RuleStrVar = 81, 
    RuleJustVar = 82, RuleJustNumberVar = 83, RuleVarName = 84, RuleVarNameInteger = 85, 
    RuleVarNameString = 86, RuleVarNameType = 87, RuleVarDecl = 88, RuleVarDeclWithDimension = 89, 
    RuleVarList = 90, RuleFunctionVar = 91, RuleFunctionVarList = 92, RuleFunctionParList = 93, 
    RuleExprList = 94, RulePrintListItem = 95, RulePrintListTick = 96, RulePrintListSeparator = 97, 
    RulePrintList = 98, RuleExpr = 99, RuleNumber = 100, RuleNumberInteger = 101, 
    RuleNumberHex = 102, RuleNumberBinary = 103, RuleNumberFloat = 104, 
    RuleStrFunc = 105, RuleString = 106, RuleStrExpr = 107, RuleNumFunc = 108, 
    RuleNumExpr = 109, RuleNumColours = 110, RuleDefaultFonts = 111
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
    VarListContext *varList();
    StrExprContext *strExpr();
    antlr4::tree::TerminalNode *COMMA();


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

  class  NumFuncCREATEFONTContext : public NumFuncContext {
  public:
    NumFuncCREATEFONTContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *CREATEFONT();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *COMMA();

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
    StrExprContext *strExpr();

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
    antlr4::tree::TerminalNode *MONO15();
    antlr4::tree::TerminalNode *MONO20();
    antlr4::tree::TerminalNode *MONO25();
    antlr4::tree::TerminalNode *MONO30();
    antlr4::tree::TerminalNode *MONO35();
    antlr4::tree::TerminalNode *MONO40();
    antlr4::tree::TerminalNode *MONO50();
    antlr4::tree::TerminalNode *MONO75();
    antlr4::tree::TerminalNode *MONO100();
    antlr4::tree::TerminalNode *PROP15();
    antlr4::tree::TerminalNode *PROP20();
    antlr4::tree::TerminalNode *PROP25();
    antlr4::tree::TerminalNode *PROP30();
    antlr4::tree::TerminalNode *PROP35();
    antlr4::tree::TerminalNode *PROP40();
    antlr4::tree::TerminalNode *PROP50();
    antlr4::tree::TerminalNode *PROP75();
    antlr4::tree::TerminalNode *PROP100();
    antlr4::tree::TerminalNode *SERIF15();
    antlr4::tree::TerminalNode *SERIF20();
    antlr4::tree::TerminalNode *SERIF25();
    antlr4::tree::TerminalNode *SERIF30();
    antlr4::tree::TerminalNode *SERIF35();
    antlr4::tree::TerminalNode *SERIF40();
    antlr4::tree::TerminalNode *SERIF50();
    antlr4::tree::TerminalNode *SERIF75();
    antlr4::tree::TerminalNode *SERIF100();


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

