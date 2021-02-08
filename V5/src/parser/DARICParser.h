
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICParser : public antlr4::Parser {
public:
  enum {
    BREAKPOINT = 1, CASE = 2, CHAIN = 3, DATA = 4, DEF = 5, DIM = 6, ELSE = 7, 
    END = 8, ENDCASE = 9, ENDIF = 10, ENDFN = 11, ENDPROC = 12, ENDWHILE = 13, 
    FALSE = 14, FOR = 15, FN = 16, IF = 17, IN = 18, INPUT = 19, GLOBAL = 20, 
    LOCAL = 21, LET = 22, NEXT = 23, OF = 24, OSCLI = 25, OTHERWISE = 26, 
    PRINT = 27, PROC = 28, READ = 29, REM = 30, REPEAT = 31, RESTORE = 32, 
    RETURN = 33, SPC = 34, STEP = 35, SWAP = 36, THEN = 37, TO = 38, TRACEON = 39, 
    TRACEOFF = 40, TRUE = 41, TYPE = 42, UNTIL = 43, WHEN = 44, WHILE = 45, 
    RED = 46, GREEN = 47, YELLOW = 48, BLUE = 49, MAGENTA = 50, CYAN = 51, 
    WHITE = 52, BLACK = 53, BGETH = 54, BPUTH = 55, CLOSEH = 56, EOFH = 57, 
    GETSH = 58, LISTFILES = 59, OPENIN = 60, OPENOUT = 61, OPENUP = 62, 
    PTRH = 63, CIRCLE = 64, CLS = 65, CLIPON = 66, CLIPOFF = 67, COLOUR = 68, 
    COLOURBG = 69, FILL = 70, FLIP = 71, SHOWFPS = 72, GRAPHICS = 73, LINE = 74, 
    RECTANGLE = 75, PLOT = 76, POINT = 77, SHADED = 78, TEXT = 79, TEXTRIGHT = 80, 
    TEXTCENTRE = 81, TEXTCENTER = 82, LOADTYPEFACE = 83, CREATEFONT = 84, 
    TIME = 85, PI = 86, SQR = 87, LN = 88, LOG = 89, EXP = 90, ATN = 91, 
    TAN = 92, COS = 93, SIN = 94, ABS = 95, ACS = 96, ASN = 97, DEG = 98, 
    RAD = 99, SGN = 100, ASC = 101, LEN = 102, INSTR = 103, VAL = 104, TIMES = 105, 
    STRS = 106, STRINGS = 107, CHRS = 108, LEFTS = 109, MIDS = 110, RIGHTS = 111, 
    RND = 112, RND0 = 113, RND1 = 114, EQ = 115, NE = 116, GT = 117, GE = 118, 
    LT = 119, LE = 120, NOT = 121, AND = 122, OR = 123, EOR = 124, MOD = 125, 
    DIV = 126, HAT = 127, PLUS = 128, MINUS = 129, MULTIPLY = 130, DIVIDE = 131, 
    SHL = 132, SHR = 133, PLUS_E = 134, MINUS_E = 135, MULTIPLY_E = 136, 
    DIVIDE_E = 137, SHL_E = 138, SHR_E = 139, NEWLINE = 140, TICK = 141, 
    TILDE = 142, HASH = 143, COLON = 144, COMMA = 145, DOLLAR = 146, LPAREN = 147, 
    PERCENT = 148, RPAREN = 149, SEMICOLON = 150, UNDERSCORE = 151, COMMENT = 152, 
    STRINGLITERAL = 153, PROC_NAME = 154, FN_INTEGER = 155, FN_FLOAT = 156, 
    FN_STRING = 157, VARIABLE_FLOAT = 158, VARIABLE_INTEGER = 159, VARIABLE_STRING = 160, 
    VARIABLE_TYPE = 161, NAME = 162, HEXNUMBER = 163, BINARYNUMBER = 164, 
    NUMBER = 165, FLOAT = 166, WS = 167
  };

  enum {
    RuleProg = 0, RuleLine = 1, RuleContent = 2, RuleBody = 3, RuleBodyStar = 4, 
    RuleLinenumber = 5, RuleStmt = 6, RuleWhen = 7, RuleFnName = 8, RuleLiteral = 9, 
    RuleVar = 10, RuleTypeVar = 11, RuleNumVar = 12, RuleStrVar = 13, RuleJustVar = 14, 
    RuleJustNumberVar = 15, RuleVarName = 16, RuleVarNameInteger = 17, RuleVarNameString = 18, 
    RuleVarNameType = 19, RuleVarDecl = 20, RuleVarDeclWithDimension = 21, 
    RuleVarList = 22, RuleFunctionVarList = 23, RuleFunctionParList = 24, 
    RuleExprList = 25, RulePrintListItem = 26, RulePrintListTick = 27, RulePrintListSeparator = 28, 
    RulePrintList = 29, RuleExpr = 30, RuleNumber = 31, RuleNumberInteger = 32, 
    RuleNumberHex = 33, RuleNumberBinary = 34, RuleNumberFloat = 35, RuleStrFunc = 36, 
    RuleString = 37, RuleStrExpr = 38, RuleNumFunc = 39, RuleNumExpr = 40, 
    RuleNumColours = 41, RuleCompare = 42
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
  class BodyStarContext;
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
    antlr4::tree::TerminalNode *COLON();
    ContentContext *content();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineContext* line();

  class  ContentContext : public antlr4::ParserRuleContext {
  public:
    ContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContentContext* content();

  class  BodyContext : public antlr4::ParserRuleContext {
  public:
    BodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ContentContext *content();
    LineContext *line();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BodyContext* body();

  class  BodyStarContext : public antlr4::ParserRuleContext {
  public:
    BodyStarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<BodyContext *> body();
    BodyContext* body(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BodyStarContext* bodyStar();

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
    BodyStarContext *bodyStar();

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

  class  StmtCHAINContext : public StmtContext {
  public:
    StmtCHAINContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *CHAIN();
    StrExprContext *strExpr();

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

  class  StmtBGETHContext : public StmtContext {
  public:
    StmtBGETHContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *BGETH();
    NumExprContext *numExpr();

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

  class  StmtSWAPContext : public StmtContext {
  public:
    StmtSWAPContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *SWAP();
    std::vector<JustVarContext *> justVar();
    JustVarContext* justVar(size_t i);
    antlr4::tree::TerminalNode *COMMA();

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

  class  StmtCallFNContext : public StmtContext {
  public:
    StmtCallFNContext(StmtContext *ctx);

    FnNameContext *fnName();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FunctionParListContext *functionParList();

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

  class  StmtWHILEContext : public StmtContext {
  public:
    StmtWHILEContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *WHILE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *ENDWHILE();
    std::vector<BodyContext *> body();
    BodyContext* body(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtCLOSEHContext : public StmtContext {
  public:
    StmtCLOSEHContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *CLOSEH();
    NumExprContext *numExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtREMContext : public StmtContext {
  public:
    StmtREMContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *REM();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtDEFPROCContext : public StmtContext {
  public:
    StmtDEFPROCContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *DEF();
    antlr4::tree::TerminalNode *PROC_NAME();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    BodyStarContext *bodyStar();
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

  class  StmtLETContext : public StmtContext {
  public:
    StmtLETContext(StmtContext *ctx);

    std::vector<VarDeclContext *> varDecl();
    VarDeclContext* varDecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *LET();
    antlr4::tree::TerminalNode *GLOBAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtTRACEONContext : public StmtContext {
  public:
    StmtTRACEONContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *TRACEON();

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

  class  StmtREPEATContext : public StmtContext {
  public:
    StmtREPEATContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *UNTIL();
    ExprContext *expr();
    std::vector<BodyContext *> body();
    BodyContext* body(size_t i);

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

  class  StmtBREAKPOINTContext : public StmtContext {
  public:
    StmtBREAKPOINTContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *BREAKPOINT();

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

  class  StmtFORContext : public StmtContext {
  public:
    StmtFORContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *FOR();
    JustNumberVarContext *justNumberVar();
    antlr4::tree::TerminalNode *EQ();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *TO();
    BodyStarContext *bodyStar();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *STEP();

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

  class  StmtFORINContext : public StmtContext {
  public:
    StmtFORINContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *FOR();
    std::vector<JustVarContext *> justVar();
    JustVarContext* justVar(size_t i);
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    BodyStarContext *bodyStar();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *LOCAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtIFMultilineContext : public StmtContext {
  public:
    StmtIFMultilineContext(StmtContext *ctx);

    DARICParser::BodyStarContext *t = nullptr;
    DARICParser::BodyStarContext *f = nullptr;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    antlr4::tree::TerminalNode *ENDIF();
    std::vector<BodyStarContext *> bodyStar();
    BodyStarContext* bodyStar(size_t i);
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
    BodyStarContext *bodyStar();
    antlr4::tree::TerminalNode *ENDFN();
    FunctionVarListContext *functionVarList();

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
    BodyStarContext *bodyStar();
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

  class  StrFuncCHRSPContext : public StrFuncContext {
  public:
    StrFuncCHRSPContext(StrFuncContext *ctx);

    antlr4::tree::TerminalNode *CHRS();
    antlr4::tree::TerminalNode *LPAREN();
    NumExprContext *numExpr();
    antlr4::tree::TerminalNode *RPAREN();

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
    StrFuncContext *strFunc();
    StringContext *string();
    StrVarContext *strVar();
    std::vector<StrExprContext *> strExpr();
    StrExprContext* strExpr(size_t i);
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

  class  NumFuncLENContext : public NumFuncContext {
  public:
    NumFuncLENContext(NumFuncContext *ctx);

    antlr4::tree::TerminalNode *LEN();
    antlr4::tree::TerminalNode *LPAREN();
    StrExprContext *strExpr();
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
    antlr4::tree::TerminalNode *LPAREN();
    StrExprContext *strExpr();
    antlr4::tree::TerminalNode *RPAREN();

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
    antlr4::tree::TerminalNode *LPAREN();
    StrExprContext *strExpr();
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

    antlr4::tree::TerminalNode *NOT();
    NumExprContext *numExpr();

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

