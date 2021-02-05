
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    DEF = 1, DIM = 2, ELSE = 3, END = 4, ENDFN = 5, ENDPROC = 6, FN = 7, 
    IF = 8, INPUT = 9, GLOBAL = 10, LOCAL = 11, LET = 12, THEN = 13, PRINT = 14, 
    PROC = 15, REM = 16, RETURN = 17, SPC = 18, TRACEON = 19, TRACEOFF = 20, 
    TYPE = 21, TIME = 22, PI = 23, SQR = 24, LN = 25, LOG = 26, EXP = 27, 
    ATN = 28, TAN = 29, COS = 30, SIN = 31, ABS = 32, ACS = 33, ASN = 34, 
    DEG = 35, RAD = 36, SGN = 37, ASC = 38, LEN = 39, INSTR = 40, VAL = 41, 
    TIMES = 42, STRS = 43, STRINGS = 44, CHRS = 45, LEFTS = 46, MIDS = 47, 
    RIGHTS = 48, RND = 49, RND0 = 50, RND1 = 51, EQ = 52, NE = 53, GT = 54, 
    GE = 55, LT = 56, LE = 57, NOT = 58, AND = 59, OR = 60, EOR = 61, MOD = 62, 
    DIV = 63, HAT = 64, PLUS = 65, MINUS = 66, MULTIPLY = 67, DIVIDE = 68, 
    SHL = 69, SHR = 70, PLUS_E = 71, MINUS_E = 72, MULTIPLY_E = 73, DIVIDE_E = 74, 
    SHL_E = 75, SHR_E = 76, NEWLINE = 77, TICK = 78, TILDE = 79, COLON = 80, 
    COMMA = 81, DOLLAR = 82, LPAREN = 83, PERCENT = 84, RPAREN = 85, SEMICOLON = 86, 
    UNDERSCORE = 87, COMMENT = 88, STRINGLITERAL = 89, PROC_NAME = 90, FN_INTEGER = 91, 
    FN_FLOAT = 92, FN_STRING = 93, VARIABLE_FLOAT = 94, VARIABLE_INTEGER = 95, 
    VARIABLE_STRING = 96, VARIABLE_TYPE = 97, NAME = 98, ALPHA = 99, DIGIT = 100, 
    HEXNUMBER = 101, BINARYNUMBER = 102, NUMBER = 103, FLOAT = 104, WS = 105
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

