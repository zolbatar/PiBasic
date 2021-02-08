
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    BREAKPOINT = 1, CASE = 2, CHAIN = 3, DATA = 4, DEF = 5, DIM = 6, ELSE = 7, 
    END = 8, ENDCASE = 9, ENDIF = 10, ENDFN = 11, ENDPROC = 12, ENDWHILE = 13, 
    FALSE = 14, FOR = 15, FN = 16, IF = 17, IN = 18, INPUT = 19, GLOBAL = 20, 
    LOCAL = 21, LET = 22, NEXT = 23, OF = 24, OSCLI = 25, OTHERWISE = 26, 
    PRINT = 27, PROC = 28, READ = 29, REM = 30, REPEAT = 31, RESTORE = 32, 
    RETURN = 33, SPC = 34, STEP = 35, SWAP = 36, THEN = 37, TO = 38, TRACEON = 39, 
    TRACEOFF = 40, TRUE = 41, TYPE = 42, UNTIL = 43, WHEN = 44, WHILE = 45, 
    RED = 46, GREEN = 47, YELLOW = 48, BLUE = 49, MAGENTA = 50, CYAN = 51, 
    WHITE = 52, BLACK = 53, BGETH = 54, BPUTH = 55, CLOSEH = 56, EOFH = 57, 
    GETSH = 58, LISTFILES = 59, OPENIN = 60, OPENOUT = 61, OPENUP = 62, 
    PTRH = 63, TIME = 64, PI = 65, SQR = 66, LN = 67, LOG = 68, EXP = 69, 
    ATN = 70, TAN = 71, COS = 72, SIN = 73, ABS = 74, ACS = 75, ASN = 76, 
    DEG = 77, RAD = 78, SGN = 79, ASC = 80, LEN = 81, INSTR = 82, VAL = 83, 
    TIMES = 84, STRS = 85, STRINGS = 86, CHRS = 87, LEFTS = 88, MIDS = 89, 
    RIGHTS = 90, RND = 91, RND0 = 92, RND1 = 93, EQ = 94, NE = 95, GT = 96, 
    GE = 97, LT = 98, LE = 99, NOT = 100, AND = 101, OR = 102, EOR = 103, 
    MOD = 104, DIV = 105, HAT = 106, PLUS = 107, MINUS = 108, MULTIPLY = 109, 
    DIVIDE = 110, SHL = 111, SHR = 112, PLUS_E = 113, MINUS_E = 114, MULTIPLY_E = 115, 
    DIVIDE_E = 116, SHL_E = 117, SHR_E = 118, NEWLINE = 119, TICK = 120, 
    TILDE = 121, HASH = 122, COLON = 123, COMMA = 124, DOLLAR = 125, LPAREN = 126, 
    PERCENT = 127, RPAREN = 128, SEMICOLON = 129, UNDERSCORE = 130, COMMENT = 131, 
    STRINGLITERAL = 132, PROC_NAME = 133, FN_INTEGER = 134, FN_FLOAT = 135, 
    FN_STRING = 136, VARIABLE_FLOAT = 137, VARIABLE_INTEGER = 138, VARIABLE_STRING = 139, 
    VARIABLE_TYPE = 140, NAME = 141, HEXNUMBER = 142, BINARYNUMBER = 143, 
    NUMBER = 144, FLOAT = 145, WS = 146
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

