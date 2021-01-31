
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    LET = 1, MIDS = 2, PRINT = 3, REM = 4, PI = 5, SQR = 6, LN = 7, LOG = 8, 
    EXP = 9, ATN = 10, TAN = 11, COS = 12, SIN = 13, ABS = 14, ACS = 15, 
    ASN = 16, DEG = 17, RAD = 18, SGN = 19, EQ = 20, NE = 21, GT = 22, GE = 23, 
    LT = 24, LE = 25, NOT = 26, AND = 27, OR = 28, EOR = 29, MOD = 30, DIV = 31, 
    HAT = 32, PLUS = 33, MINUS = 34, MULTIPLY = 35, DIVIDE = 36, SHL = 37, 
    SHR = 38, COLON = 39, COMMA = 40, DOLLAR = 41, LPAREN = 42, PERCENT = 43, 
    RPAREN = 44, SEMICOLON = 45, UNDERSCORE = 46, COMMENT = 47, STRINGLITERAL = 48, 
    LETTERS = 49, HEXNUMBER = 50, BINARYNUMBER = 51, NUMBER = 52, FLOAT = 53, 
    WS = 54
  };

  explicit DARICLexer(antlr4::CharStream *input);
  ~DARICLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

