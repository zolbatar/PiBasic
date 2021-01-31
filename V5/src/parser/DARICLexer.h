
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    LET = 1, PRINT = 2, REM = 3, TIME = 4, PI = 5, SQR = 6, LN = 7, LOG = 8, 
    EXP = 9, ATN = 10, TAN = 11, COS = 12, SIN = 13, ABS = 14, ACS = 15, 
    ASN = 16, DEG = 17, RAD = 18, SGN = 19, ASC = 20, LEN = 21, INSTR = 22, 
    VAL = 23, TIMES = 24, STRS = 25, STRINGS = 26, CHRS = 27, LEFTS = 28, 
    MIDS = 29, RIGHTS = 30, RND = 31, RND0 = 32, RND1 = 33, EQ = 34, NE = 35, 
    GT = 36, GE = 37, LT = 38, LE = 39, NOT = 40, AND = 41, OR = 42, EOR = 43, 
    MOD = 44, DIV = 45, HAT = 46, PLUS = 47, MINUS = 48, MULTIPLY = 49, 
    DIVIDE = 50, SHL = 51, SHR = 52, COLON = 53, COMMA = 54, DOLLAR = 55, 
    LPAREN = 56, PERCENT = 57, RPAREN = 58, SEMICOLON = 59, UNDERSCORE = 60, 
    COMMENT = 61, STRINGLITERAL = 62, LETTERS = 63, HEXNUMBER = 64, BINARYNUMBER = 65, 
    NUMBER = 66, FLOAT = 67, WS = 68
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

