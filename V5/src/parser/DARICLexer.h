
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
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

