
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    BREAKPOINT = 1, CASE = 2, CHAIN = 3, DATA = 4, DEF = 5, DIM = 6, ELSE = 7, 
    END = 8, ENDCASE = 9, ENDIF = 10, ENDFN = 11, ENDPROC = 12, ENDWHILE = 13, 
    FALSE = 14, FOR = 15, FLOAT_TOKEN = 16, FN = 17, IF = 18, IN = 19, INT = 20, 
    INPUT = 21, GLOBAL = 22, LOCAL = 23, LET = 24, NEXT = 25, OF = 26, OSCLI = 27, 
    OTHERWISE = 28, PRINT = 29, PROC = 30, READ = 31, REM = 32, REPEAT = 33, 
    RESTORE = 34, RETURN = 35, SPC = 36, STEP = 37, SWAP = 38, THEN = 39, 
    TO = 40, TRACEON = 41, TRACEOFF = 42, TRUE = 43, TYPE = 44, UNTIL = 45, 
    WHEN = 46, WHILE = 47, MOUSE = 48, INKEY = 49, INKEYS = 50, GET = 51, 
    GETS = 52, RED = 53, GREEN = 54, YELLOW = 55, BLUE = 56, MAGENTA = 57, 
    CYAN = 58, WHITE = 59, BLACK = 60, BGETH = 61, BPUTH = 62, CLOSEH = 63, 
    EOFH = 64, GETSH = 65, LISTFILES = 66, OPENIN = 67, OPENOUT = 68, OPENUP = 69, 
    PTRH = 70, BANKED = 71, CIRCLE = 72, CLS = 73, CLIPON = 74, CLIPOFF = 75, 
    COLOUR = 76, COLOURBG = 77, FILL = 78, FLIP = 79, SHOWFPS = 80, GRAPHICS = 81, 
    LINE = 82, RECTANGLE = 83, PLOT = 84, POINT = 85, SHADED = 86, TEXT = 87, 
    TEXTRIGHT = 88, TEXTCENTRE = 89, TEXTCENTER = 90, TRIANGLE = 91, LOADTYPEFACE = 92, 
    CREATEFONT = 93, TIME = 94, PI = 95, SQR = 96, LN = 97, LOG = 98, EXP = 99, 
    ATN = 100, TAN = 101, COS = 102, SIN = 103, ABS = 104, ACS = 105, ASN = 106, 
    DEG = 107, RAD = 108, SGN = 109, ASC = 110, LEN = 111, INSTR = 112, 
    VAL = 113, TIMES = 114, STRS = 115, STRINGS = 116, CHRS = 117, LEFTS = 118, 
    MIDS = 119, RIGHTS = 120, RND = 121, RND0 = 122, RND1 = 123, EQ = 124, 
    NE = 125, GT = 126, GE = 127, LT = 128, LE = 129, NOT = 130, AND = 131, 
    OR = 132, EOR = 133, MOD = 134, DIV = 135, HAT = 136, PLUS = 137, MINUS = 138, 
    MULTIPLY = 139, DIVIDE = 140, SHL = 141, SHR = 142, PLUS_E = 143, MINUS_E = 144, 
    MULTIPLY_E = 145, DIVIDE_E = 146, SHL_E = 147, SHR_E = 148, NEWLINE = 149, 
    TICK = 150, TILDE = 151, HASH = 152, COLON = 153, COMMA = 154, DOLLAR = 155, 
    LPAREN = 156, PERCENT = 157, RPAREN = 158, SEMICOLON = 159, UNDERSCORE = 160, 
    COMMENT = 161, STRINGLITERAL = 162, PROC_NAME = 163, FN_INTEGER = 164, 
    FN_FLOAT = 165, FN_STRING = 166, VARIABLE_FLOAT = 167, VARIABLE_INTEGER = 168, 
    VARIABLE_STRING = 169, VARIABLE_TYPE = 170, NAME = 171, HEXNUMBER = 172, 
    BINARYNUMBER = 173, NUMBER = 174, FLOAT = 175, WS = 176
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

