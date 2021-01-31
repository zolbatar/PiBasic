
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    LET = 1, MIDS = 2, PRINT = 3, REM = 4, PI = 5, SQR = 6, LN = 7, LOG = 8, 
    EXP = 9, ATN = 10, TAN = 11, COS = 12, SIN = 13, ABS = 14, ACS = 15, 
    ASN = 16, DEG = 17, RAD = 18, SGN = 19, RND = 20, RND0 = 21, RND1 = 22, 
    EQ = 23, NE = 24, GT = 25, GE = 26, LT = 27, LE = 28, NOT = 29, AND = 30, 
    OR = 31, EOR = 32, MOD = 33, DIV = 34, HAT = 35, PLUS = 36, MINUS = 37, 
    MULTIPLY = 38, DIVIDE = 39, SHL = 40, SHR = 41, COLON = 42, COMMA = 43, 
    DOLLAR = 44, LPAREN = 45, PERCENT = 46, RPAREN = 47, SEMICOLON = 48, 
    UNDERSCORE = 49, COMMENT = 50, STRINGLITERAL = 51, LETTERS = 52, HEXNUMBER = 53, 
    BINARYNUMBER = 54, NUMBER = 55, FLOAT = 56, WS = 57
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

