
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    BREAKPOINT = 1, DEF = 2, DIM = 3, ELSE = 4, END = 5, ENDIF = 6, ENDFN = 7, 
    ENDPROC = 8, ENDWHILE = 9, FN = 10, IF = 11, INPUT = 12, GLOBAL = 13, 
    LOCAL = 14, LET = 15, THEN = 16, PRINT = 17, PROC = 18, REM = 19, REPEAT = 20, 
    RETURN = 21, SPC = 22, TRACEON = 23, TRACEOFF = 24, TYPE = 25, UNTIL = 26, 
    WHILE = 27, TIME = 28, PI = 29, SQR = 30, LN = 31, LOG = 32, EXP = 33, 
    ATN = 34, TAN = 35, COS = 36, SIN = 37, ABS = 38, ACS = 39, ASN = 40, 
    DEG = 41, RAD = 42, SGN = 43, ASC = 44, LEN = 45, INSTR = 46, VAL = 47, 
    TIMES = 48, STRS = 49, STRINGS = 50, CHRS = 51, LEFTS = 52, MIDS = 53, 
    RIGHTS = 54, RND = 55, RND0 = 56, RND1 = 57, EQ = 58, NE = 59, GT = 60, 
    GE = 61, LT = 62, LE = 63, NOT = 64, AND = 65, OR = 66, EOR = 67, MOD = 68, 
    DIV = 69, HAT = 70, PLUS = 71, MINUS = 72, MULTIPLY = 73, DIVIDE = 74, 
    SHL = 75, SHR = 76, PLUS_E = 77, MINUS_E = 78, MULTIPLY_E = 79, DIVIDE_E = 80, 
    SHL_E = 81, SHR_E = 82, NEWLINE = 83, TICK = 84, TILDE = 85, COLON = 86, 
    COMMA = 87, DOLLAR = 88, LPAREN = 89, PERCENT = 90, RPAREN = 91, SEMICOLON = 92, 
    UNDERSCORE = 93, COMMENT = 94, STRINGLITERAL = 95, PROC_NAME = 96, FN_INTEGER = 97, 
    FN_FLOAT = 98, FN_STRING = 99, VARIABLE_FLOAT = 100, VARIABLE_INTEGER = 101, 
    VARIABLE_STRING = 102, VARIABLE_TYPE = 103, NAME = 104, HEXNUMBER = 105, 
    BINARYNUMBER = 106, NUMBER = 107, FLOAT = 108, ALPHA = 109, DIGIT = 110, 
    WS = 111
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

