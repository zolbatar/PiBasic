
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICParser : public antlr4::Parser {
public:
  enum {
    BREAKPOINT = 1, CASE = 2, CHAIN = 3, DATA = 4, DEF = 5, DIM = 6, ELSE = 7, 
    END = 8, ENDCASE = 9, ENDIF = 10, ENDFN = 11, ENDPROC = 12, ENDWHILE = 13, 
    FALSE = 14, FOR = 15, FLOAT_TOKEN = 16, FN = 17, IF = 18, IN = 19, INT = 20, 
    INPUT = 21, GLOBAL = 22, LOCAL = 23, LET = 24, NEXT = 25, OF = 26, OSCLI = 27, 
    OTHERWISE = 28, PRINT = 29, PROC = 30, READ = 31, REM = 32, REPEAT = 33, 
    RESTORE = 34, RETURN = 35, SPC = 36, STEP = 37, SWAP = 38, THEN = 39, 
    TO = 40, TRACEON = 41, TRACEOFF = 42, TRUE = 43, TYPE = 44, UNTIL = 45, 
    WHEN = 46, WHILE = 47, MOUSE = 48, INKEY = 49, INKEYS = 50, GET = 51, 
    GETS = 52, RED = 53, GREEN = 54, YELLOW = 55, BLUE = 56, MAGENTA = 57, 
    CYAN = 58, WHITE = 59, BLACK = 60, BGETH = 61, BPUTH = 62, CLOSEH = 63, 
    EOFH = 64, GETSH = 65, LISTFILES = 66, OPENIN = 67, OPENOUT = 68, OPENUP = 69, 
    PTRH = 70, BANKED = 71, CIRCLE = 72, CLS = 73, CLIPON = 74, CLIPOFF = 75, 
    COLOUR = 76, COLOURBG = 77, FILL = 78, FLIP = 79, SHOWFPS = 80, GRAPHICS = 81, 
    LINE = 82, RECTANGLE = 83, PLOT = 84, POINT = 85, SHADED = 86, TEXT = 87, 
    TEXTRIGHT = 88, TEXTCENTRE = 89, TEXTCENTER = 90, TRIANGLE = 91, LOADTYPEFACE = 92, 
    CREATEFONT = 93, TIME = 94, PI = 95, SQR = 96, LN = 97, LOG = 98, EXP = 99, 
    ATN = 100, TAN = 101, COS = 102, SIN = 103, ABS = 104, ACS = 105, ASN = 106, 
    DEG = 107, RAD = 108, SGN = 109, ASC = 110, LEN = 111, INSTR = 112, 
    VAL = 113, TIMES = 114, STRS = 115, STRINGS = 116, CHRS = 117, LEFTS = 118, 
    MIDS = 119, RIGHTS = 120, RND = 121, RND0 = 122, RND1 = 123, EQ = 124, 
    NE = 125, GT = 126, GE = 127, LT = 128, LE = 129, NOT = 130, AND = 131, 
    OR = 132, EOR = 133, MOD = 134, DIV = 135, HAT = 136, PLUS = 137, MINUS = 138, 
    MULTIPLY = 139, DIVIDE = 140, SHL = 141, SHR = 142, PLUS_E = 143, MINUS_E = 144, 
    MULTIPLY_E = 145, DIVIDE_E = 146, SHL_E = 147, SHR_E = 148, NEWLINE = 149, 
    TICK = 150, TILDE = 151, HASH = 152, COLON = 153, COMMA = 154, DOLLAR = 155, 
    LPAREN = 156, PERCENT = 157, RPAREN = 158, SEMICOLON = 159, UNDERSCORE = 160, 
    COMMENT = 161, STRINGLITERAL = 162, PROC_NAME = 163, FN_INTEGER = 164, 
    FN_FLOAT = 165, FN_STRING = 166, VARIABLE_FLOAT = 167, VARIABLE_INTEGER = 168, 
    VARIABLE_STRING = 169, VARIABLE_TYPE = 170, NAME = 171, HEXNUMBER = 172, 
    BINARYNUMBER = 173, NUMBER = 174, FLOAT = 175, WS = 176
  };

  enum {
    RuleProg = 0, RuleLine = 1, RuleContent = 2, RuleBody = 3, RuleLinenumber = 4, 
    RuleStmt = 5, RuleWhen = 6, RuleFnName = 7, RuleLiteral = 8, RuleVar = 9, 
    RuleTypeVar = 10, RuleNumVar = 11, RuleStrVar = 12, RuleJustVar = 13, 
    RuleJustNumberVar = 14, RuleVarName = 15, RuleVarNameInteger = 16, RuleVarNameString = 17, 
    RuleVarNameType = 18, RuleVarDecl = 19, RuleVarDeclWithDimension = 20, 
    RuleVarList = 21, RuleFunctionVarList = 22, RuleFunctionParList = 23, 
    RuleExprList = 24, RulePrintListItem = 25, RulePrintListTick = 26, RulePrintListSeparator = 27, 
    RulePrintList = 28, RuleExpr = 29, RuleNumber = 30, RuleNumberInteger = 31, 
    RuleNumberHex = 32, RuleNumberBinary = 33, RuleNumberFloat = 34, RuleStrFunc = 35, 
    RuleString = 36, RuleStrExpr = 37, RuleNumFunc = 38, RuleNumExpr = 39, 
    RuleNestedExpr = 40, RuleNotExpr = 41, RuleNumColours = 42, RuleCompare = 43
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
  class ContentContext;
  class BodyContext;
  class LinenumberContext;
  class StmtContext;
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
  class NestedExprContext;
  class NotExprContext;
  class NumColoursContext;
  class CompareContext; 

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
   
    StmtContext() = default;
    void copyFrom(StmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StmtPTRHContext : public StmtContext {
  public:
    StmtPTRHContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *PTRH();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *EQ();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtCASEContext : public StmtContext {
  public:
    StmtCASEContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *CASE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *NEWLINE();
    antlr4::tree::TerminalNode *ENDCASE();
    std::vector<WhenContext *> when();
    WhenContext* when(size_t i);
    antlr4::tree::TerminalNode *OTHERWISE();
    BodyContext *body();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtTYPEContext : public StmtContext {
  public:
    StmtTYPEContext(StmtContext *ctx);

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

  class  StmtPRINTContext : public StmtContext {
  public:
    StmtPRINTContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *PRINT();
    PrintListContext *printList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtINPUTContext : public StmtContext {
  public:
    StmtINPUTContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *INPUT();
    VarListContext *varList();
    StrExprContext *strExpr();
    antlr4::tree::TerminalNode *COMMA();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtDATAContext : public StmtContext {
  public:
    StmtDATAContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *DATA();
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtGRAPHICSContext : public StmtContext {
  public:
    StmtGRAPHICSContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *GRAPHICS();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *BANKED();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtLOCALContext : public StmtContext {
  public:
    StmtLOCALContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *LOCAL();
    std::vector<VarDeclContext *> varDecl();
    VarDeclContext* varDecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtCOLOURContext : public StmtContext {
  public:
    StmtCOLOURContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *COLOUR();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtTEXTCENTREContext : public StmtContext {
  public:
    StmtTEXTCENTREContext(StmtContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    StrExprContext *strExpr();
    antlr4::tree::TerminalNode *TEXTCENTRE();
    antlr4::tree::TerminalNode *TEXTCENTER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtMOUSEContext : public StmtContext {
  public:
    StmtMOUSEContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *MOUSE();
    std::vector<VarNameIntegerContext *> varNameInteger();
    VarNameIntegerContext* varNameInteger(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtCallFNContext : public StmtContext {
  public:
    StmtCallFNContext(StmtContext *ctx);

    FnNameContext *fnName();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FunctionParListContext *functionParList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtLOCALDIMContext : public StmtContext {
  public:
    StmtLOCALDIMContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *DIM();
    std::vector<VarDeclWithDimensionContext *> varDeclWithDimension();
    VarDeclWithDimensionContext* varDeclWithDimension(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtLETContext : public StmtContext {
  public:
    StmtLETContext(StmtContext *ctx);

    std::vector<VarDeclContext *> varDecl();
    VarDeclContext* varDecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *LET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *GLOBAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtTRACEONContext : public StmtContext {
  public:
    StmtTRACEONContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *TRACEON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtCIRCLEContext : public StmtContext {
  public:
    StmtCIRCLEContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *CIRCLE();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *FILL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtPLOTContext : public StmtContext {
  public:
    StmtPLOTContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *PLOT();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtCLIPONContext : public StmtContext {
  public:
    StmtCLIPONContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *CLIPON();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtLISTFILESContext : public StmtContext {
  public:
    StmtLISTFILESContext(StmtContext *ctx);

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

  class  StmtDIMContext : public StmtContext {
  public:
    StmtDIMContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *DIM();
    std::vector<VarDeclWithDimensionContext *> varDeclWithDimension();
    VarDeclWithDimensionContext* varDeclWithDimension(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtBPUTHContext : public StmtContext {
  public:
    StmtBPUTHContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *BPUTH();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtOperatorEqualContext : public StmtContext {
  public:
    StmtOperatorEqualContext(StmtContext *ctx);

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

  class  StmtIFContext : public StmtContext {
  public:
    StmtIFContext(StmtContext *ctx);

    DARICParser::ContentContext *t = nullptr;
    DARICParser::ContentContext *f = nullptr;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    std::vector<ContentContext *> content();
    ContentContext* content(size_t i);
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *ELSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtDEFFNContext : public StmtContext {
  public:
    StmtDEFFNContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *DEF();
    FnNameContext *fnName();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    BodyContext *body();
    antlr4::tree::TerminalNode *ENDFN();
    FunctionVarListContext *functionVarList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtCOLOURBGContext : public StmtContext {
  public:
    StmtCOLOURBGContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *COLOURBG();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtLINEContext : public StmtContext {
  public:
    StmtLINEContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *LINE();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtTRACEOFFContext : public StmtContext {
  public:
    StmtTRACEOFFContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *TRACEOFF();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtRESTOREContext : public StmtContext {
  public:
    StmtRESTOREContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *RESTORE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtCHAINContext : public StmtContext {
  public:
    StmtCHAINContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *CHAIN();
    StrExprContext *strExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtFLIPContext : public StmtContext {
  public:
    StmtFLIPContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *FLIP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtBGETHContext : public StmtContext {
  public:
    StmtBGETHContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *BGETH();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtINKEYSContext : public StmtContext {
  public:
    StmtINKEYSContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *INKEYS();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtCLSContext : public StmtContext {
  public:
    StmtCLSContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *CLS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtSHOWFPSContext : public StmtContext {
  public:
    StmtSHOWFPSContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *SHOWFPS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtSWAPContext : public StmtContext {
  public:
    StmtSWAPContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *SWAP();
    std::vector<JustVarContext *> justVar();
    JustVarContext* justVar(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtINKEYContext : public StmtContext {
  public:
    StmtINKEYContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *INKEY();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtGETSContext : public StmtContext {
  public:
    StmtGETSContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *GETS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtREADContext : public StmtContext {
  public:
    StmtREADContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *READ();
    std::vector<VarDeclContext *> varDecl();
    VarDeclContext* varDecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtCallPROCContext : public StmtContext {
  public:
    StmtCallPROCContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *PROC_NAME();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FunctionParListContext *functionParList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtWHILEContext : public StmtContext {
  public:
    StmtWHILEContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *WHILE();
    ExprContext *expr();
    BodyContext *body();
    antlr4::tree::TerminalNode *ENDWHILE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtCOLONContext : public StmtContext {
  public:
    StmtCOLONContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *COLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtCLOSEHContext : public StmtContext {
  public:
    StmtCLOSEHContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *CLOSEH();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtDEFPROCContext : public StmtContext {
  public:
    StmtDEFPROCContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *DEF();
    antlr4::tree::TerminalNode *PROC_NAME();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    BodyContext *body();
    antlr4::tree::TerminalNode *ENDPROC();
    FunctionVarListContext *functionVarList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtENDContext : public StmtContext {
  public:
    StmtENDContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *END();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtRECTANGLEContext : public StmtContext {
  public:
    StmtRECTANGLEContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *RECTANGLE();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *FILL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtOSCLIContext : public StmtContext {
  public:
    StmtOSCLIContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *OSCLI();
    StrExprContext *strExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtRETURNContext : public StmtContext {
  public:
    StmtRETURNContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtTEXTRIGHTContext : public StmtContext {
  public:
    StmtTEXTRIGHTContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *TEXTRIGHT();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    StrExprContext *strExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtREPEATContext : public StmtContext {
  public:
    StmtREPEATContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *REPEAT();
    BodyContext *body();
    antlr4::tree::TerminalNode *UNTIL();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtTRIANGLEContext : public StmtContext {
  public:
    StmtTRIANGLEContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *TRIANGLE();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *FILL();
    antlr4::tree::TerminalNode *SHADED();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtTEXTContext : public StmtContext {
  public:
    StmtTEXTContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *TEXT();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtBREAKPOINTContext : public StmtContext {
  public:
    StmtBREAKPOINTContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *BREAKPOINT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtFORContext : public StmtContext {
  public:
    StmtFORContext(StmtContext *ctx);

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

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtFORINContext : public StmtContext {
  public:
    StmtFORINContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *FOR();
    std::vector<JustVarContext *> justVar();
    JustVarContext* justVar(size_t i);
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    BodyContext *body();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *LOCAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtIFMultilineContext : public StmtContext {
  public:
    StmtIFMultilineContext(StmtContext *ctx);

    DARICParser::LineContext *t = nullptr;
    DARICParser::LineContext *f = nullptr;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    antlr4::tree::TerminalNode *ENDIF();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *ELSE();
    std::vector<LineContext *> line();
    LineContext* line(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtGETContext : public StmtContext {
  public:
    StmtGETContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *GET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtCLIPOFFContext : public StmtContext {
  public:
    StmtCLIPOFFContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *CLIPOFF();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StmtContext* stmt();

  class  WhenContext : public antlr4::ParserRuleContext {
  public:
    WhenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *COLON();
    BodyContext *body();
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

  class  NumVarStringFNContext : public NumVarContext {
  public:
    NumVarStringFNContext(NumVarContext *ctx);

    antlr4::tree::TerminalNode *FN_STRING();
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

  class  FunctionVarListContext : public antlr4::ParserRuleContext {
  public:
    FunctionVarListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<JustVarContext *> justVar();
    JustVarContext* justVar(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RETURN();
    antlr4::tree::TerminalNode* RETURN(size_t i);
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


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  NumberIntegerContext : public antlr4::ParserRuleContext {
  public:
    NumberIntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();


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
    NumExprContext *numExpr();

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
    NumExprContext *numExpr();

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

  class  NumFuncRND0Context : public NumFuncContext {
  public:
    NumFuncRND0Context(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *RND0();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
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
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncSINContext : public NumFuncContext {
  public:
    NumFuncSINContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *SIN();
    NumExprContext *numExpr();

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

  class  NumFuncRADContext : public NumFuncContext {
  public:
    NumFuncRADContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *RAD();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncSQRContext : public NumFuncContext {
  public:
    NumFuncSQRContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *SQR();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncLENContext : public NumFuncContext {
  public:
    NumFuncLENContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *LEN();
    StrExprContext *strExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncFLOATContext : public NumFuncContext {
  public:
    NumFuncFLOATContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *FLOAT_TOKEN();
    NumExprContext *numExpr();

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
    NumExprContext *numExpr();

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
    NumExprContext *numExpr();

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

  class  NumFuncATNContext : public NumFuncContext {
  public:
    NumFuncATNContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *ATN();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncSGNContext : public NumFuncContext {
  public:
    NumFuncSGNContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *SGN();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncEXPContext : public NumFuncContext {
  public:
    NumFuncEXPContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *EXP();
    NumExprContext *numExpr();

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
    NumExprContext *numExpr();

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
    NumExprContext *numExpr();

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
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncCOSContext : public NumFuncContext {
  public:
    NumFuncCOSContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *COS();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncLOGContext : public NumFuncContext {
  public:
    NumFuncLOGContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *LOG();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumFuncASNContext : public NumFuncContext {
  public:
    NumFuncASNContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *ASN();
    NumExprContext *numExpr();

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

  class  NumExprFuncContext : public NumExprContext {
  public:
    NumExprFuncContext(NumExprContext *ctx);

    NumFuncContext *numFunc();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprSubtractContext : public NumExprContext {
  public:
    NumExprSubtractContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprVarContext : public NumExprContext {
  public:
    NumExprVarContext(NumExprContext *ctx);

    NumVarContext *numVar();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprEORContext : public NumExprContext {
  public:
    NumExprEORContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *EOR();

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
    CompareContext *compare();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprStrRelopContext : public NumExprContext {
  public:
    NumExprStrRelopContext(NumExprContext *ctx);

    std::vector<StrExprContext *> strExpr();
    StrExprContext* strExpr(size_t i);
    CompareContext *compare();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprSHRContext : public NumExprContext {
  public:
    NumExprSHRContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *SHR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprMultiplyContext : public NumExprContext {
  public:
    NumExprMultiplyContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *MULTIPLY();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprMODContext : public NumExprContext {
  public:
    NumExprMODContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *MOD();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprNOTContext : public NumExprContext {
  public:
    NumExprNOTContext(NumExprContext *ctx);

    NotExprContext *notExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprNestedContext : public NumExprContext {
  public:
    NumExprNestedContext(NumExprContext *ctx);

    NestedExprContext *nestedExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprSHLContext : public NumExprContext {
  public:
    NumExprSHLContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *SHL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprANDContext : public NumExprContext {
  public:
    NumExprANDContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *AND();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprPlusContext : public NumExprContext {
  public:
    NumExprPlusContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *PLUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprUnaryContext : public NumExprContext {
  public:
    NumExprUnaryContext(NumExprContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprORContext : public NumExprContext {
  public:
    NumExprORContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *OR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprDivideContext : public NumExprContext {
  public:
    NumExprDivideContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *DIVIDE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumExprDIVContext : public NumExprContext {
  public:
    NumExprDIVContext(NumExprContext *ctx);

    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *DIV();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumExprContext* numExpr();
  NumExprContext* numExpr(int precedence);
  class  NestedExprContext : public antlr4::ParserRuleContext {
  public:
    NestedExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestedExprContext* nestedExpr();

  class  NotExprContext : public antlr4::ParserRuleContext {
  public:
    NotExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    NumExprContext *numExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NotExprContext* notExpr();

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

  class  CompareContext : public antlr4::ParserRuleContext {
  public:
    CompareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CompareContext() = default;
    void copyFrom(CompareContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CompareLEContext : public CompareContext {
  public:
    CompareLEContext(CompareContext *ctx);

    antlr4::tree::TerminalNode *LE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompareLTContext : public CompareContext {
  public:
    CompareLTContext(CompareContext *ctx);

    antlr4::tree::TerminalNode *LT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompareNEContext : public CompareContext {
  public:
    CompareNEContext(CompareContext *ctx);

    antlr4::tree::TerminalNode *NE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompareGEContext : public CompareContext {
  public:
    CompareGEContext(CompareContext *ctx);

    antlr4::tree::TerminalNode *GE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompareGTContext : public CompareContext {
  public:
    CompareGTContext(CompareContext *ctx);

    antlr4::tree::TerminalNode *GT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompareEQContext : public CompareContext {
  public:
    CompareEQContext(CompareContext *ctx);

    antlr4::tree::TerminalNode *EQ();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CompareContext* compare();


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

