
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    DIM = 1, END = 2, FIELD = 3, INPUT = 4, GLOBAL = 5, LOCAL = 6, LET = 7, 
    PRINT = 8, REM = 9, SPC = 10, TYPE = 11, TIME = 12, PI = 13, SQR = 14, 
    LN = 15, LOG = 16, EXP = 17, ATN = 18, TAN = 19, COS = 20, SIN = 21, 
    ABS = 22, ACS = 23, ASN = 24, DEG = 25, RAD = 26, SGN = 27, ASC = 28, 
    LEN = 29, INSTR = 30, VAL = 31, TIMES = 32, STRS = 33, STRINGS = 34, 
    CHRS = 35, LEFTS = 36, MIDS = 37, RIGHTS = 38, RND = 39, RND0 = 40, 
    RND1 = 41, EQ = 42, NE = 43, GT = 44, GE = 45, LT = 46, LE = 47, NOT = 48, 
    AND = 49, OR = 50, EOR = 51, MOD = 52, DIV = 53, HAT = 54, PLUS = 55, 
    MINUS = 56, MULTIPLY = 57, DIVIDE = 58, SHL = 59, SHR = 60, TICK = 61, 
    TILDE = 62, COLON = 63, COMMA = 64, DOLLAR = 65, LPAREN = 66, PERCENT = 67, 
    RPAREN = 68, SEMICOLON = 69, UNDERSCORE = 70, COMMENT = 71, STRINGLITERAL = 72, 
    VARIABLE_FLOAT = 73, VARIABLE_INTEGER = 74, VARIABLE_STRING = 75, VARIABLE_TYPE = 76, 
    LETTERS = 77, HEXNUMBER = 78, BINARYNUMBER = 79, NUMBER = 80, FLOAT = 81, 
    WS = 82
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

