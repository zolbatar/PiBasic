
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
    PTRH = 63, CIRCLE = 64, CLS = 65, CLIPON = 66, CLIPOFF = 67, COLOUR = 68, 
    COLOURBG = 69, FILL = 70, FLIP = 71, SHOWFPS = 72, GRAPHICS = 73, LINE = 74, 
    RECTANGLE = 75, PLOT = 76, POINT = 77, SHADED = 78, TEXT = 79, TEXTRIGHT = 80, 
    TEXTCENTRE = 81, TEXTCENTER = 82, LOADTYPEFACE = 83, CREATEFONT = 84, 
    TIME = 85, PI = 86, SQR = 87, LN = 88, LOG = 89, EXP = 90, ATN = 91, 
    TAN = 92, COS = 93, SIN = 94, ABS = 95, ACS = 96, ASN = 97, DEG = 98, 
    RAD = 99, SGN = 100, ASC = 101, LEN = 102, INSTR = 103, VAL = 104, TIMES = 105, 
    STRS = 106, STRINGS = 107, CHRS = 108, LEFTS = 109, MIDS = 110, RIGHTS = 111, 
    RND = 112, RND0 = 113, RND1 = 114, EQ = 115, NE = 116, GT = 117, GE = 118, 
    LT = 119, LE = 120, NOT = 121, AND = 122, OR = 123, EOR = 124, MOD = 125, 
    DIV = 126, HAT = 127, PLUS = 128, MINUS = 129, MULTIPLY = 130, DIVIDE = 131, 
    SHL = 132, SHR = 133, PLUS_E = 134, MINUS_E = 135, MULTIPLY_E = 136, 
    DIVIDE_E = 137, SHL_E = 138, SHR_E = 139, NEWLINE = 140, TICK = 141, 
    TILDE = 142, HASH = 143, COLON = 144, COMMA = 145, DOLLAR = 146, LPAREN = 147, 
    PERCENT = 148, RPAREN = 149, SEMICOLON = 150, UNDERSCORE = 151, COMMENT = 152, 
    STRINGLITERAL = 153, PROC_NAME = 154, FN_INTEGER = 155, FN_FLOAT = 156, 
    FN_STRING = 157, VARIABLE_FLOAT = 158, VARIABLE_INTEGER = 159, VARIABLE_STRING = 160, 
    VARIABLE_TYPE = 161, NAME = 162, HEXNUMBER = 163, BINARYNUMBER = 164, 
    NUMBER = 165, FLOAT = 166, WS = 167
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

