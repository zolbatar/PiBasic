
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    BREAKPOINT = 1, DEF = 2, DIM = 3, ELSE = 4, END = 5, ENDFN = 6, ENDPROC = 7, 
    FN = 8, IF = 9, INPUT = 10, GLOBAL = 11, LOCAL = 12, LET = 13, THEN = 14, 
    PRINT = 15, PROC = 16, REM = 17, RETURN = 18, SPC = 19, TRACEON = 20, 
    TRACEOFF = 21, TYPE = 22, TIME = 23, PI = 24, SQR = 25, LN = 26, LOG = 27, 
    EXP = 28, ATN = 29, TAN = 30, COS = 31, SIN = 32, ABS = 33, ACS = 34, 
    ASN = 35, DEG = 36, RAD = 37, SGN = 38, ASC = 39, LEN = 40, INSTR = 41, 
    VAL = 42, TIMES = 43, STRS = 44, STRINGS = 45, CHRS = 46, LEFTS = 47, 
    MIDS = 48, RIGHTS = 49, RND = 50, RND0 = 51, RND1 = 52, EQ = 53, NE = 54, 
    GT = 55, GE = 56, LT = 57, LE = 58, NOT = 59, AND = 60, OR = 61, EOR = 62, 
    MOD = 63, DIV = 64, HAT = 65, PLUS = 66, MINUS = 67, MULTIPLY = 68, 
    DIVIDE = 69, SHL = 70, SHR = 71, PLUS_E = 72, MINUS_E = 73, MULTIPLY_E = 74, 
    DIVIDE_E = 75, SHL_E = 76, SHR_E = 77, NEWLINE = 78, TICK = 79, TILDE = 80, 
    COLON = 81, COMMA = 82, DOLLAR = 83, LPAREN = 84, PERCENT = 85, RPAREN = 86, 
    SEMICOLON = 87, UNDERSCORE = 88, COMMENT = 89, STRINGLITERAL = 90, PROC_NAME = 91, 
    FN_INTEGER = 92, FN_FLOAT = 93, FN_STRING = 94, VARIABLE_FLOAT = 95, 
    VARIABLE_INTEGER = 96, VARIABLE_STRING = 97, VARIABLE_TYPE = 98, NAME = 99, 
    ALPHA = 100, DIGIT = 101, HEXNUMBER = 102, BINARYNUMBER = 103, NUMBER = 104, 
    FLOAT = 105, WS = 106
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

