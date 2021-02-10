
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
    CLS = 76, CLIPON = 77, CLIPOFF = 78, COLOUR = 79, COLOURBG = 80, CREATEFONT = 81, 
    FILL = 82, FLIP = 83, SHOWFPS = 84, GRAPHICS = 85, LINE = 86, LOADTYPEFACE = 87, 
    RECTANGLE = 88, PLOT = 89, POINT = 90, SCREENWIDTH = 91, SCREENHEIGHT = 92, 
    SHADED = 93, TEXT = 94, TEXTRIGHT = 95, TEXTCENTRE = 96, TEXTCENTER = 97, 
    TRIANGLE = 98, TIME = 99, PI = 100, SQR = 101, LN = 102, LOG = 103, 
    EXP = 104, ATN = 105, TAN = 106, COS = 107, SIN = 108, ABS = 109, ACS = 110, 
    ASN = 111, DEG = 112, RAD = 113, SGN = 114, ASC = 115, LEN = 116, INSTR = 117, 
    VAL = 118, TIMES = 119, STRS = 120, STRINGS = 121, CHRS = 122, LEFTS = 123, 
    MIDS = 124, RIGHTS = 125, RND = 126, RND0 = 127, RND1 = 128, EQ = 129, 
    NE = 130, GT = 131, GE = 132, LT = 133, LE = 134, NOT = 135, AND = 136, 
    OR = 137, EOR = 138, MOD = 139, DIV = 140, HAT = 141, PLUS = 142, MINUS = 143, 
    MULTIPLY = 144, DIVIDE = 145, SHL = 146, SHR = 147, PLUS_E = 148, MINUS_E = 149, 
    MULTIPLY_E = 150, DIVIDE_E = 151, SHL_E = 152, SHR_E = 153, NEWLINE = 154, 
    TICK = 155, TILDE = 156, HASH = 157, COLON = 158, COMMA = 159, DOLLAR = 160, 
    LPAREN = 161, PERCENT = 162, RPAREN = 163, SEMICOLON = 164, UNDERSCORE = 165, 
    COMMENT = 166, STRINGLITERAL = 167, PROC_NAME = 168, FN_INTEGER = 169, 
    FN_FLOAT = 170, FN_STRING = 171, VARIABLE_FLOAT = 172, VARIABLE_INTEGER = 173, 
    VARIABLE_STRING = 174, VARIABLE_TYPE = 175, NAME = 176, HEXNUMBER = 177, 
    BINARYNUMBER = 178, NUMBER = 179, FLOAT = 180, WS = 181
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

