
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    DEF = 1, DIM = 2, END = 3, ENDFN = 4, ENDPROC = 5, FN = 6, INPUT = 7, 
    GLOBAL = 8, LOCAL = 9, LET = 10, PRINT = 11, PROC = 12, REM = 13, RETURN = 14, 
    SPC = 15, TYPE = 16, TIME = 17, PI = 18, SQR = 19, LN = 20, LOG = 21, 
    EXP = 22, ATN = 23, TAN = 24, COS = 25, SIN = 26, ABS = 27, ACS = 28, 
    ASN = 29, DEG = 30, RAD = 31, SGN = 32, ASC = 33, LEN = 34, INSTR = 35, 
    VAL = 36, TIMES = 37, STRS = 38, STRINGS = 39, CHRS = 40, LEFTS = 41, 
    MIDS = 42, RIGHTS = 43, RND = 44, RND0 = 45, RND1 = 46, EQ = 47, NE = 48, 
    GT = 49, GE = 50, LT = 51, LE = 52, NOT = 53, AND = 54, OR = 55, EOR = 56, 
    MOD = 57, DIV = 58, HAT = 59, PLUS = 60, MINUS = 61, MULTIPLY = 62, 
    DIVIDE = 63, SHL = 64, SHR = 65, NEWLINE = 66, TICK = 67, TILDE = 68, 
    COLON = 69, COMMA = 70, DOLLAR = 71, LPAREN = 72, PERCENT = 73, RPAREN = 74, 
    SEMICOLON = 75, UNDERSCORE = 76, COMMENT = 77, STRINGLITERAL = 78, PROC_NAME = 79, 
    FN_INTEGER = 80, FN_FLOAT = 81, FN_STRING = 82, VARIABLE_FLOAT = 83, 
    VARIABLE_INTEGER = 84, VARIABLE_STRING = 85, VARIABLE_TYPE = 86, NAME = 87, 
    ALPHA = 88, DIGIT = 89, HEXNUMBER = 90, BINARYNUMBER = 91, NUMBER = 92, 
    FLOAT = 93, WS = 94
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

