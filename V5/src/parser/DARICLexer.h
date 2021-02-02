
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    DIM = 1, FIELD = 2, INPUT = 3, GLOBAL = 4, LOCAL = 5, LET = 6, PRINT = 7, 
    REM = 8, SPC = 9, TYPE = 10, TIME = 11, PI = 12, SQR = 13, LN = 14, 
    LOG = 15, EXP = 16, ATN = 17, TAN = 18, COS = 19, SIN = 20, ABS = 21, 
    ACS = 22, ASN = 23, DEG = 24, RAD = 25, SGN = 26, ASC = 27, LEN = 28, 
    INSTR = 29, VAL = 30, TIMES = 31, STRS = 32, STRINGS = 33, CHRS = 34, 
    LEFTS = 35, MIDS = 36, RIGHTS = 37, RND = 38, RND0 = 39, RND1 = 40, 
    EQ = 41, NE = 42, GT = 43, GE = 44, LT = 45, LE = 46, NOT = 47, AND = 48, 
    OR = 49, EOR = 50, MOD = 51, DIV = 52, HAT = 53, PLUS = 54, MINUS = 55, 
    MULTIPLY = 56, DIVIDE = 57, SHL = 58, SHR = 59, TICK = 60, TILDE = 61, 
    COLON = 62, COMMA = 63, DOLLAR = 64, LPAREN = 65, PERCENT = 66, RPAREN = 67, 
    SEMICOLON = 68, UNDERSCORE = 69, COMMENT = 70, STRINGLITERAL = 71, VARIABLE_FLOAT = 72, 
    VARIABLE_INTEGER = 73, VARIABLE_STRING = 74, VARIABLE_TYPE = 75, LETTERS = 76, 
    HEXNUMBER = 77, BINARYNUMBER = 78, NUMBER = 79, FLOAT = 80, WS = 81
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

