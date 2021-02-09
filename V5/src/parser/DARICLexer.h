
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    BREAKPOINT = 1, CASE = 2, CHAIN = 3, DATA = 4, DEF = 5, DIM = 6, ELSE = 7, 
    END = 8, ENDCASE = 9, ENDIF = 10, ENDFN = 11, ENDPROC = 12, ENDWHILE = 13, 
    FALSE = 14, FOR = 15, FLOAT_TOKEN = 16, FN = 17, IF = 18, IN = 19, INT = 20, 
    INPUT = 21, GLOBAL = 22, LOCAL = 23, LET = 24, NEXT = 25, OF = 26, OFF = 27, 
    ON = 28, OSCLI = 29, OTHERWISE = 30, PRINT = 31, PROC = 32, READ = 33, 
    REM = 34, REPEAT = 35, RESTORE = 36, RETURN = 37, SPC = 38, STEP = 39, 
    SWAP = 40, THEN = 41, TO = 42, TRACE = 43, TRACEON = 44, TRACEOFF = 45, 
    TRUE = 46, TYPE = 47, UNTIL = 48, WHEN = 49, WHILE = 50, MOUSE = 51, 
    INKEY = 52, INKEYS = 53, GET = 54, GETS = 55, RED = 56, GREEN = 57, 
    YELLOW = 58, BLUE = 59, MAGENTA = 60, CYAN = 61, WHITE = 62, BLACK = 63, 
    BGETH = 64, BPUTH = 65, CLOSEH = 66, EOFH = 67, GETSH = 68, LISTFILES = 69, 
    OPENIN = 70, OPENOUT = 71, OPENUP = 72, PTRH = 73, BANKED = 74, CIRCLE = 75, 
    CLS = 76, CLIPON = 77, CLIPOFF = 78, COLOUR = 79, COLOURBG = 80, FILL = 81, 
    FLIP = 82, SHOWFPS = 83, GRAPHICS = 84, LINE = 85, RECTANGLE = 86, PLOT = 87, 
    POINT = 88, SHADED = 89, TEXT = 90, TEXTRIGHT = 91, TEXTCENTRE = 92, 
    TEXTCENTER = 93, TRIANGLE = 94, LOADTYPEFACE = 95, CREATEFONT = 96, 
    TIME = 97, PI = 98, SQR = 99, LN = 100, LOG = 101, EXP = 102, ATN = 103, 
    TAN = 104, COS = 105, SIN = 106, ABS = 107, ACS = 108, ASN = 109, DEG = 110, 
    RAD = 111, SGN = 112, ASC = 113, LEN = 114, INSTR = 115, VAL = 116, 
    TIMES = 117, STRS = 118, STRINGS = 119, CHRS = 120, LEFTS = 121, MIDS = 122, 
    RIGHTS = 123, RND = 124, RND0 = 125, RND1 = 126, EQ = 127, NE = 128, 
    GT = 129, GE = 130, LT = 131, LE = 132, NOT = 133, AND = 134, OR = 135, 
    EOR = 136, MOD = 137, DIV = 138, HAT = 139, PLUS = 140, MINUS = 141, 
    MULTIPLY = 142, DIVIDE = 143, SHL = 144, SHR = 145, PLUS_E = 146, MINUS_E = 147, 
    MULTIPLY_E = 148, DIVIDE_E = 149, SHL_E = 150, SHR_E = 151, NEWLINE = 152, 
    TICK = 153, TILDE = 154, HASH = 155, COLON = 156, COMMA = 157, DOLLAR = 158, 
    LPAREN = 159, PERCENT = 160, RPAREN = 161, SEMICOLON = 162, UNDERSCORE = 163, 
    COMMENT = 164, STRINGLITERAL = 165, PROC_NAME = 166, FN_INTEGER = 167, 
    FN_FLOAT = 168, FN_STRING = 169, VARIABLE_FLOAT = 170, VARIABLE_INTEGER = 171, 
    VARIABLE_STRING = 172, VARIABLE_TYPE = 173, NAME = 174, HEXNUMBER = 175, 
    BINARYNUMBER = 176, NUMBER = 177, FLOAT = 178, WS = 179
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

