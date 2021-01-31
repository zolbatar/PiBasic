
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    LET = 1, MIDS = 2, PRINT = 3, REM = 4, PI = 5, SQR = 6, LN = 7, LOG = 8, 
    EXP = 9, ATN = 10, TAN = 11, COS = 12, SIN = 13, ABS = 14, ACS = 15, 
    ASN = 16, DEG = 17, RAD = 18, SGN = 19, ASC = 20, LEN = 21, INSTR = 22, 
    VAL = 23, RND = 24, RND0 = 25, RND1 = 26, EQ = 27, NE = 28, GT = 29, 
    GE = 30, LT = 31, LE = 32, NOT = 33, AND = 34, OR = 35, EOR = 36, MOD = 37, 
    DIV = 38, HAT = 39, PLUS = 40, MINUS = 41, MULTIPLY = 42, DIVIDE = 43, 
    SHL = 44, SHR = 45, COLON = 46, COMMA = 47, DOLLAR = 48, LPAREN = 49, 
    PERCENT = 50, RPAREN = 51, SEMICOLON = 52, UNDERSCORE = 53, COMMENT = 54, 
    STRINGLITERAL = 55, LETTERS = 56, HEXNUMBER = 57, BINARYNUMBER = 58, 
    NUMBER = 59, FLOAT = 60, WS = 61
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

