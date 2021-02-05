
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    BREAKPOINT = 1, DEF = 2, DIM = 3, ELSE = 4, END = 5, ENDIF = 6, ENDFN = 7, 
    ENDPROC = 8, FN = 9, IF = 10, INPUT = 11, GLOBAL = 12, LOCAL = 13, LET = 14, 
    THEN = 15, PRINT = 16, PROC = 17, REM = 18, REPEAT = 19, RETURN = 20, 
    SPC = 21, TRACEON = 22, TRACEOFF = 23, TYPE = 24, UNTIL = 25, TIME = 26, 
    PI = 27, SQR = 28, LN = 29, LOG = 30, EXP = 31, ATN = 32, TAN = 33, 
    COS = 34, SIN = 35, ABS = 36, ACS = 37, ASN = 38, DEG = 39, RAD = 40, 
    SGN = 41, ASC = 42, LEN = 43, INSTR = 44, VAL = 45, TIMES = 46, STRS = 47, 
    STRINGS = 48, CHRS = 49, LEFTS = 50, MIDS = 51, RIGHTS = 52, RND = 53, 
    RND0 = 54, RND1 = 55, EQ = 56, NE = 57, GT = 58, GE = 59, LT = 60, LE = 61, 
    NOT = 62, AND = 63, OR = 64, EOR = 65, MOD = 66, DIV = 67, HAT = 68, 
    PLUS = 69, MINUS = 70, MULTIPLY = 71, DIVIDE = 72, SHL = 73, SHR = 74, 
    PLUS_E = 75, MINUS_E = 76, MULTIPLY_E = 77, DIVIDE_E = 78, SHL_E = 79, 
    SHR_E = 80, NEWLINE = 81, TICK = 82, TILDE = 83, COLON = 84, COMMA = 85, 
    DOLLAR = 86, LPAREN = 87, PERCENT = 88, RPAREN = 89, SEMICOLON = 90, 
    UNDERSCORE = 91, COMMENT = 92, STRINGLITERAL = 93, PROC_NAME = 94, FN_INTEGER = 95, 
    FN_FLOAT = 96, FN_STRING = 97, VARIABLE_FLOAT = 98, VARIABLE_INTEGER = 99, 
    VARIABLE_STRING = 100, VARIABLE_TYPE = 101, NAME = 102, HEXNUMBER = 103, 
    BINARYNUMBER = 104, NUMBER = 105, FLOAT = 106, ALPHA = 107, DIGIT = 108, 
    WS = 109
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

