
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    DEF = 1, DIM = 2, END = 3, ENDFN = 4, ENDPROC = 5, FIELD = 6, FN = 7, 
    INPUT = 8, GLOBAL = 9, LOCAL = 10, LET = 11, PRINT = 12, PROC = 13, 
    REM = 14, RETURN = 15, SPC = 16, TYPE = 17, TIME = 18, PI = 19, SQR = 20, 
    LN = 21, LOG = 22, EXP = 23, ATN = 24, TAN = 25, COS = 26, SIN = 27, 
    ABS = 28, ACS = 29, ASN = 30, DEG = 31, RAD = 32, SGN = 33, ASC = 34, 
    LEN = 35, INSTR = 36, VAL = 37, TIMES = 38, STRS = 39, STRINGS = 40, 
    CHRS = 41, LEFTS = 42, MIDS = 43, RIGHTS = 44, RND = 45, RND0 = 46, 
    RND1 = 47, EQ = 48, NE = 49, GT = 50, GE = 51, LT = 52, LE = 53, NOT = 54, 
    AND = 55, OR = 56, EOR = 57, MOD = 58, DIV = 59, HAT = 60, PLUS = 61, 
    MINUS = 62, MULTIPLY = 63, DIVIDE = 64, SHL = 65, SHR = 66, NEWLINE = 67, 
    TICK = 68, TILDE = 69, COLON = 70, COMMA = 71, DOLLAR = 72, LPAREN = 73, 
    PERCENT = 74, RPAREN = 75, SEMICOLON = 76, UNDERSCORE = 77, COMMENT = 78, 
    STRINGLITERAL = 79, VARIABLE_FLOAT = 80, VARIABLE_INTEGER = 81, VARIABLE_STRING = 82, 
    VARIABLE_TYPE = 83, LETTERS = 84, HEXNUMBER = 85, BINARYNUMBER = 86, 
    NUMBER = 87, FLOAT = 88, WS = 89
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

