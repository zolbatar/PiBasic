
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    BREAKPOINT = 1, CHAIN = 2, DATA = 3, DEF = 4, DIM = 5, ELSE = 6, END = 7, 
    ENDIF = 8, ENDFN = 9, ENDPROC = 10, ENDWHILE = 11, FN = 12, IF = 13, 
    INPUT = 14, GLOBAL = 15, LOCAL = 16, LET = 17, THEN = 18, PRINT = 19, 
    PROC = 20, READ = 21, REM = 22, REPEAT = 23, RESTORE = 24, RETURN = 25, 
    SPC = 26, TRACEON = 27, TRACEOFF = 28, TYPE = 29, UNTIL = 30, WHILE = 31, 
    TIME = 32, PI = 33, SQR = 34, LN = 35, LOG = 36, EXP = 37, ATN = 38, 
    TAN = 39, COS = 40, SIN = 41, ABS = 42, ACS = 43, ASN = 44, DEG = 45, 
    RAD = 46, SGN = 47, ASC = 48, LEN = 49, INSTR = 50, VAL = 51, TIMES = 52, 
    STRS = 53, STRINGS = 54, CHRS = 55, LEFTS = 56, MIDS = 57, RIGHTS = 58, 
    RND = 59, RND0 = 60, RND1 = 61, EQ = 62, NE = 63, GT = 64, GE = 65, 
    LT = 66, LE = 67, NOT = 68, AND = 69, OR = 70, EOR = 71, MOD = 72, DIV = 73, 
    HAT = 74, PLUS = 75, MINUS = 76, MULTIPLY = 77, DIVIDE = 78, SHL = 79, 
    SHR = 80, PLUS_E = 81, MINUS_E = 82, MULTIPLY_E = 83, DIVIDE_E = 84, 
    SHL_E = 85, SHR_E = 86, NEWLINE = 87, TICK = 88, TILDE = 89, COLON = 90, 
    COMMA = 91, DOLLAR = 92, LPAREN = 93, PERCENT = 94, RPAREN = 95, SEMICOLON = 96, 
    UNDERSCORE = 97, COMMENT = 98, STRINGLITERAL = 99, PROC_NAME = 100, 
    FN_INTEGER = 101, FN_FLOAT = 102, FN_STRING = 103, VARIABLE_FLOAT = 104, 
    VARIABLE_INTEGER = 105, VARIABLE_STRING = 106, VARIABLE_TYPE = 107, 
    NAME = 108, HEXNUMBER = 109, BINARYNUMBER = 110, NUMBER = 111, FLOAT = 112, 
    ALPHA = 113, DIGIT = 114, WS = 115
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

