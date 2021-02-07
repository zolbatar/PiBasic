
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    BREAKPOINT = 1, CASE = 2, CHAIN = 3, DATA = 4, DEF = 5, DIM = 6, ELSE = 7, 
    END = 8, ENDCASE = 9, ENDIF = 10, ENDFN = 11, ENDPROC = 12, ENDWHILE = 13, 
    FOR = 14, FN = 15, IF = 16, INPUT = 17, GLOBAL = 18, LOCAL = 19, LET = 20, 
    NEXT = 21, OF = 22, OTHERWISE = 23, PRINT = 24, PROC = 25, READ = 26, 
    REM = 27, REPEAT = 28, RESTORE = 29, RETURN = 30, SPC = 31, STEP = 32, 
    THEN = 33, TO = 34, TRACEON = 35, TRACEOFF = 36, TYPE = 37, UNTIL = 38, 
    WHEN = 39, WHILE = 40, TIME = 41, PI = 42, SQR = 43, LN = 44, LOG = 45, 
    EXP = 46, ATN = 47, TAN = 48, COS = 49, SIN = 50, ABS = 51, ACS = 52, 
    ASN = 53, DEG = 54, RAD = 55, SGN = 56, ASC = 57, LEN = 58, INSTR = 59, 
    VAL = 60, TIMES = 61, STRS = 62, STRINGS = 63, CHRS = 64, LEFTS = 65, 
    MIDS = 66, RIGHTS = 67, RND = 68, RND0 = 69, RND1 = 70, EQ = 71, NE = 72, 
    GT = 73, GE = 74, LT = 75, LE = 76, NOT = 77, AND = 78, OR = 79, EOR = 80, 
    MOD = 81, DIV = 82, HAT = 83, PLUS = 84, MINUS = 85, MULTIPLY = 86, 
    DIVIDE = 87, SHL = 88, SHR = 89, PLUS_E = 90, MINUS_E = 91, MULTIPLY_E = 92, 
    DIVIDE_E = 93, SHL_E = 94, SHR_E = 95, NEWLINE = 96, TICK = 97, TILDE = 98, 
    COLON = 99, COMMA = 100, DOLLAR = 101, LPAREN = 102, PERCENT = 103, 
    RPAREN = 104, SEMICOLON = 105, UNDERSCORE = 106, COMMENT = 107, STRINGLITERAL = 108, 
    PROC_NAME = 109, FN_INTEGER = 110, FN_FLOAT = 111, FN_STRING = 112, 
    VARIABLE_FLOAT = 113, VARIABLE_INTEGER = 114, VARIABLE_STRING = 115, 
    VARIABLE_TYPE = 116, NAME = 117, HEXNUMBER = 118, BINARYNUMBER = 119, 
    NUMBER = 120, FLOAT = 121, ALPHA = 122, DIGIT = 123, WS = 124
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

