
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    DIM = 1, INPUT = 2, GLOBAL = 3, LOCAL = 4, LET = 5, PRINT = 6, REM = 7, 
    SPC = 8, TIME = 9, PI = 10, SQR = 11, LN = 12, LOG = 13, EXP = 14, ATN = 15, 
    TAN = 16, COS = 17, SIN = 18, ABS = 19, ACS = 20, ASN = 21, DEG = 22, 
    RAD = 23, SGN = 24, ASC = 25, LEN = 26, INSTR = 27, VAL = 28, TIMES = 29, 
    STRS = 30, STRINGS = 31, CHRS = 32, LEFTS = 33, MIDS = 34, RIGHTS = 35, 
    RND = 36, RND0 = 37, RND1 = 38, EQ = 39, NE = 40, GT = 41, GE = 42, 
    LT = 43, LE = 44, NOT = 45, AND = 46, OR = 47, EOR = 48, MOD = 49, DIV = 50, 
    HAT = 51, PLUS = 52, MINUS = 53, MULTIPLY = 54, DIVIDE = 55, SHL = 56, 
    SHR = 57, TICK = 58, TILDE = 59, COLON = 60, COMMA = 61, DOLLAR = 62, 
    LPAREN = 63, PERCENT = 64, RPAREN = 65, SEMICOLON = 66, UNDERSCORE = 67, 
    COMMENT = 68, STRINGLITERAL = 69, VARIABLE = 70, LETTERS = 71, HEXNUMBER = 72, 
    BINARYNUMBER = 73, NUMBER = 74, FLOAT = 75, WS = 76
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

