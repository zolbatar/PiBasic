
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICParser : public antlr4::Parser {
public:
  enum {
    LET = 1, MIDS = 2, PI = 3, PRINT = 4, REM = 5, EQ = 6, NE = 7, GT = 8, 
    GE = 9, LT = 10, LE = 11, NOT = 12, AND = 13, OR = 14, EOR = 15, MOD = 16, 
    DIV = 17, HAT = 18, PLUS = 19, MINUS = 20, MULTIPLY = 21, DIVIDE = 22, 
    SHL = 23, SHR = 24, COLON = 25, COMMA = 26, DOLLAR = 27, LPAREN = 28, 
    PERCENT = 29, RPAREN = 30, SEMICOLON = 31, UNDERSCORE = 32, COMMENT = 33, 
    STRINGLITERAL = 34, LETTERS = 35, HEXNUMBER = 36, BINARYNUMBER = 37, 
    NUMBER = 38, FLOAT = 39, WS = 40
  };

  enum {
    RuleProg = 0, RuleLine = 1, RuleLinenumber = 2, RuleStmt = 3, RuleVar = 4, 
    RuleNumVar = 5, RuleStrVar = 6, RuleVarName = 7, RuleVarDecl = 8, RuleVarAssign = 9, 
    RuleVarList = 10, RuleExprList = 11, RulePrintList = 12, RuleExpr = 13, 
    RuleNumber = 14, RuleNumberInteger = 15, RuleNumberHex = 16, RuleNumberBinary = 17, 
    RuleNumberFloat = 18, RuleStrFunc = 19, RuleString = 20, RuleStrExpr = 21, 
    RuleNumFunc = 22, RuleNumExpr = 23, RuleRelop = 24
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
  class LinenumberContext;
  class StmtContext;
  class VarContext;
  class NumVarContext;
  class StrVarContext;
  class VarNameContext;
  class VarDeclContext;
  class VarAssignContext;
  class VarListContext;
  class ExprListContext;
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
  class RelopContext; 

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
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *REM();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    LinenumberContext *linenumber();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineContext* line();

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
    VarAssignContext *varAssign();
    antlr4::tree::TerminalNode *LET();
    antlr4::tree::TerminalNode *PRINT();
    PrintListContext *printList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  VarContext : public antlr4::ParserRuleContext {
  public:
    VarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumVarContext *numVar();
    StrVarContext *strVar();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarContext* var();

  class  NumVarContext : public antlr4::ParserRuleContext {
  public:
    NumVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarNameContext *varName();
    antlr4::tree::TerminalNode *PERCENT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumVarContext* numVar();

  class  StrVarContext : public antlr4::ParserRuleContext {
  public:
    StrVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarNameContext *varName();
    antlr4::tree::TerminalNode *DOLLAR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StrVarContext* strVar();

  class  VarNameContext : public antlr4::ParserRuleContext {
  public:
    VarNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LETTERS();
    antlr4::tree::TerminalNode* LETTERS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarNameContext* varName();

  class  VarDeclContext : public antlr4::ParserRuleContext {
  public:
    VarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarContext *var();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<ExprListContext *> exprList();
    ExprListContext* exprList(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclContext* varDecl();

  class  VarAssignContext : public antlr4::ParserRuleContext {
  public:
    VarAssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
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

  VarAssignContext* varAssign();

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

  class  PrintListContext : public antlr4::ParserRuleContext {
  public:
    PrintListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
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
    NumVarContext *numVar();
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
    virtual size_t getRuleIndex() const override;
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
    StringContext *string();
    StrVarContext *strVar();
    StrFuncContext *strFunc();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StrExprContext* strExpr();

  class  NumFuncContext : public antlr4::ParserRuleContext {
  public:
    NumFuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumFuncContext* numFunc();

  class  NumExprContext : public antlr4::ParserRuleContext {
  public:
    NumExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    NumFuncContext *numFunc();
    antlr4::tree::TerminalNode *NOT();
    std::vector<NumExprContext *> numExpr();
    NumExprContext* numExpr(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<StrExprContext *> strExpr();
    StrExprContext* strExpr(size_t i);
    RelopContext *relop();
    antlr4::tree::TerminalNode *HAT();
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *SHL();
    antlr4::tree::TerminalNode *SHR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *EOR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumExprContext* numExpr();
  NumExprContext* numExpr(int precedence);
  class  RelopContext : public antlr4::ParserRuleContext {
  public:
    RelopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelopContext* relop();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
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

