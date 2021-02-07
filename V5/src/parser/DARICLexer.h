
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    BREAKPOINT = 1, CASE = 2, CHAIN = 3, DATA = 4, DEF = 5, DIM = 6, ELSE = 7, 
    END = 8, ENDCASE = 9, ENDIF = 10, ENDFN = 11, ENDPROC = 12, ENDWHILE = 13, 
    FALSE = 14, FOR = 15, FN = 16, IF = 17, IN = 18, INPUT = 19, GLOBAL = 20, 
    LOCAL = 21, LET = 22, NEXT = 23, OF = 24, OTHERWISE = 25, PRINT = 26, 
    PROC = 27, READ = 28, REM = 29, REPEAT = 30, RESTORE = 31, RETURN = 32, 
    SPC = 33, STEP = 34, THEN = 35, TO = 36, TRACEON = 37, TRACEOFF = 38, 
    TRUE = 39, TYPE = 40, UNTIL = 41, WHEN = 42, WHILE = 43, TIME = 44, 
    PI = 45, SQR = 46, LN = 47, LOG = 48, EXP = 49, ATN = 50, TAN = 51, 
    COS = 52, SIN = 53, ABS = 54, ACS = 55, ASN = 56, DEG = 57, RAD = 58, 
    SGN = 59, ASC = 60, LEN = 61, INSTR = 62, VAL = 63, TIMES = 64, STRS = 65, 
    STRINGS = 66, CHRS = 67, LEFTS = 68, MIDS = 69, RIGHTS = 70, RND = 71, 
    RND0 = 72, RND1 = 73, EQ = 74, NE = 75, GT = 76, GE = 77, LT = 78, LE = 79, 
    NOT = 80, AND = 81, OR = 82, EOR = 83, MOD = 84, DIV = 85, HAT = 86, 
    PLUS = 87, MINUS = 88, MULTIPLY = 89, DIVIDE = 90, SHL = 91, SHR = 92, 
    PLUS_E = 93, MINUS_E = 94, MULTIPLY_E = 95, DIVIDE_E = 96, SHL_E = 97, 
    SHR_E = 98, NEWLINE = 99, TICK = 100, TILDE = 101, COLON = 102, COMMA = 103, 
    DOLLAR = 104, LPAREN = 105, PERCENT = 106, RPAREN = 107, SEMICOLON = 108, 
    UNDERSCORE = 109, COMMENT = 110, STRINGLITERAL = 111, PROC_NAME = 112, 
    FN_INTEGER = 113, FN_FLOAT = 114, FN_STRING = 115, VARIABLE_FLOAT = 116, 
    VARIABLE_INTEGER = 117, VARIABLE_STRING = 118, VARIABLE_TYPE = 119, 
    NAME = 120, HEXNUMBER = 121, BINARYNUMBER = 122, NUMBER = 123, FLOAT = 124, 
    ALPHA = 125, DIGIT = 126, WS = 127
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

