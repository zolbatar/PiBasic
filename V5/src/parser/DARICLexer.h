
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    BREAKPOINT = 1, CASE = 2, CHAIN = 3, DATA = 4, DEF = 5, DIM = 6, ELSE = 7, 
    END = 8, ENDCASE = 9, ENDIF = 10, ENDFN = 11, ENDPROC = 12, ENDWHILE = 13, 
    FOR = 14, FN = 15, IF = 16, IN = 17, INPUT = 18, GLOBAL = 19, LOCAL = 20, 
    LET = 21, NEXT = 22, OF = 23, OTHERWISE = 24, PRINT = 25, PROC = 26, 
    READ = 27, REM = 28, REPEAT = 29, RESTORE = 30, RETURN = 31, SPC = 32, 
    STEP = 33, THEN = 34, TO = 35, TRACEON = 36, TRACEOFF = 37, TYPE = 38, 
    UNTIL = 39, WHEN = 40, WHILE = 41, TIME = 42, PI = 43, SQR = 44, LN = 45, 
    LOG = 46, EXP = 47, ATN = 48, TAN = 49, COS = 50, SIN = 51, ABS = 52, 
    ACS = 53, ASN = 54, DEG = 55, RAD = 56, SGN = 57, ASC = 58, LEN = 59, 
    INSTR = 60, VAL = 61, TIMES = 62, STRS = 63, STRINGS = 64, CHRS = 65, 
    LEFTS = 66, MIDS = 67, RIGHTS = 68, RND = 69, RND0 = 70, RND1 = 71, 
    EQ = 72, NE = 73, GT = 74, GE = 75, LT = 76, LE = 77, NOT = 78, AND = 79, 
    OR = 80, EOR = 81, MOD = 82, DIV = 83, HAT = 84, PLUS = 85, MINUS = 86, 
    MULTIPLY = 87, DIVIDE = 88, SHL = 89, SHR = 90, PLUS_E = 91, MINUS_E = 92, 
    MULTIPLY_E = 93, DIVIDE_E = 94, SHL_E = 95, SHR_E = 96, NEWLINE = 97, 
    TICK = 98, TILDE = 99, COLON = 100, COMMA = 101, DOLLAR = 102, LPAREN = 103, 
    PERCENT = 104, RPAREN = 105, SEMICOLON = 106, UNDERSCORE = 107, COMMENT = 108, 
    STRINGLITERAL = 109, PROC_NAME = 110, FN_INTEGER = 111, FN_FLOAT = 112, 
    FN_STRING = 113, VARIABLE_FLOAT = 114, VARIABLE_INTEGER = 115, VARIABLE_STRING = 116, 
    VARIABLE_TYPE = 117, NAME = 118, HEXNUMBER = 119, BINARYNUMBER = 120, 
    NUMBER = 121, FLOAT = 122, ALPHA = 123, DIGIT = 124, WS = 125
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

