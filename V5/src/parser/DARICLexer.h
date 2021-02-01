
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    INPUT = 1, LET = 2, PRINT = 3, REM = 4, SPC = 5, TIME = 6, PI = 7, SQR = 8, 
    LN = 9, LOG = 10, EXP = 11, ATN = 12, TAN = 13, COS = 14, SIN = 15, 
    ABS = 16, ACS = 17, ASN = 18, DEG = 19, RAD = 20, SGN = 21, ASC = 22, 
    LEN = 23, INSTR = 24, VAL = 25, TIMES = 26, STRS = 27, STRINGS = 28, 
    CHRS = 29, LEFTS = 30, MIDS = 31, RIGHTS = 32, RND = 33, RND0 = 34, 
    RND1 = 35, EQ = 36, NE = 37, GT = 38, GE = 39, LT = 40, LE = 41, NOT = 42, 
    AND = 43, OR = 44, EOR = 45, MOD = 46, DIV = 47, HAT = 48, PLUS = 49, 
    MINUS = 50, MULTIPLY = 51, DIVIDE = 52, SHL = 53, SHR = 54, TICK = 55, 
    TILDE = 56, COLON = 57, COMMA = 58, DOLLAR = 59, LPAREN = 60, PERCENT = 61, 
    RPAREN = 62, SEMICOLON = 63, UNDERSCORE = 64, COMMENT = 65, STRINGLITERAL = 66, 
    LETTERS = 67, HEXNUMBER = 68, BINARYNUMBER = 69, NUMBER = 70, FLOAT = 71, 
    WS = 72
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

