
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    BREAKPOINT = 1, CASE = 2, CHAIN = 3, DATA = 4, DEF = 5, DIM = 6, ELSE = 7, 
    END = 8, ENDCASE = 9, ENDIF = 10, ENDFN = 11, ENDPROC = 12, ENDWHILE = 13, 
    FN = 14, IF = 15, INPUT = 16, GLOBAL = 17, LOCAL = 18, LET = 19, THEN = 20, 
    OF = 21, OTHERWISE = 22, PRINT = 23, PROC = 24, READ = 25, REM = 26, 
    REPEAT = 27, RESTORE = 28, RETURN = 29, SPC = 30, TRACEON = 31, TRACEOFF = 32, 
    TYPE = 33, UNTIL = 34, WHEN = 35, WHILE = 36, TIME = 37, PI = 38, SQR = 39, 
    LN = 40, LOG = 41, EXP = 42, ATN = 43, TAN = 44, COS = 45, SIN = 46, 
    ABS = 47, ACS = 48, ASN = 49, DEG = 50, RAD = 51, SGN = 52, ASC = 53, 
    LEN = 54, INSTR = 55, VAL = 56, TIMES = 57, STRS = 58, STRINGS = 59, 
    CHRS = 60, LEFTS = 61, MIDS = 62, RIGHTS = 63, RND = 64, RND0 = 65, 
    RND1 = 66, EQ = 67, NE = 68, GT = 69, GE = 70, LT = 71, LE = 72, NOT = 73, 
    AND = 74, OR = 75, EOR = 76, MOD = 77, DIV = 78, HAT = 79, PLUS = 80, 
    MINUS = 81, MULTIPLY = 82, DIVIDE = 83, SHL = 84, SHR = 85, PLUS_E = 86, 
    MINUS_E = 87, MULTIPLY_E = 88, DIVIDE_E = 89, SHL_E = 90, SHR_E = 91, 
    NEWLINE = 92, TICK = 93, TILDE = 94, COLON = 95, COMMA = 96, DOLLAR = 97, 
    LPAREN = 98, PERCENT = 99, RPAREN = 100, SEMICOLON = 101, UNDERSCORE = 102, 
    COMMENT = 103, STRINGLITERAL = 104, PROC_NAME = 105, FN_INTEGER = 106, 
    FN_FLOAT = 107, FN_STRING = 108, VARIABLE_FLOAT = 109, VARIABLE_INTEGER = 110, 
    VARIABLE_STRING = 111, VARIABLE_TYPE = 112, NAME = 113, HEXNUMBER = 114, 
    BINARYNUMBER = 115, NUMBER = 116, FLOAT = 117, ALPHA = 118, DIGIT = 119, 
    WS = 120
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

