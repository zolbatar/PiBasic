
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    DEF = 1, DIM = 2, END = 3, ENDFN = 4, ENDPROC = 5, FN = 6, INPUT = 7, 
    GLOBAL = 8, LOCAL = 9, LET = 10, PRINT = 11, PROC = 12, REM = 13, RETURN = 14, 
    SPC = 15, TRACEON = 16, TRACEOFF = 17, TYPE = 18, TIME = 19, PI = 20, 
    SQR = 21, LN = 22, LOG = 23, EXP = 24, ATN = 25, TAN = 26, COS = 27, 
    SIN = 28, ABS = 29, ACS = 30, ASN = 31, DEG = 32, RAD = 33, SGN = 34, 
    ASC = 35, LEN = 36, INSTR = 37, VAL = 38, TIMES = 39, STRS = 40, STRINGS = 41, 
    CHRS = 42, LEFTS = 43, MIDS = 44, RIGHTS = 45, RND = 46, RND0 = 47, 
    RND1 = 48, EQ = 49, NE = 50, GT = 51, GE = 52, LT = 53, LE = 54, NOT = 55, 
    AND = 56, OR = 57, EOR = 58, MOD = 59, DIV = 60, HAT = 61, PLUS = 62, 
    MINUS = 63, MULTIPLY = 64, DIVIDE = 65, SHL = 66, SHR = 67, PLUS_E = 68, 
    MINUS_E = 69, MULTIPLY_E = 70, DIVIDE_E = 71, SHL_E = 72, SHR_E = 73, 
    NEWLINE = 74, TICK = 75, TILDE = 76, COLON = 77, COMMA = 78, DOLLAR = 79, 
    LPAREN = 80, PERCENT = 81, RPAREN = 82, SEMICOLON = 83, UNDERSCORE = 84, 
    COMMENT = 85, STRINGLITERAL = 86, PROC_NAME = 87, FN_INTEGER = 88, FN_FLOAT = 89, 
    FN_STRING = 90, VARIABLE_FLOAT = 91, VARIABLE_INTEGER = 92, VARIABLE_STRING = 93, 
    VARIABLE_TYPE = 94, NAME = 95, ALPHA = 96, DIGIT = 97, HEXNUMBER = 98, 
    BINARYNUMBER = 99, NUMBER = 100, FLOAT = 101, WS = 102
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

