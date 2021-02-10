
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
    MONO15 = 64, MONO20 = 65, MONO25 = 66, MONO30 = 67, MONO35 = 68, MONO40 = 69, 
    MONO50 = 70, MONO75 = 71, MONO100 = 72, PROP15 = 73, PROP20 = 74, PROP25 = 75, 
    PROP30 = 76, PROP35 = 77, PROP40 = 78, PROP50 = 79, PROP75 = 80, PROP100 = 81, 
    SERIF15 = 82, SERIF20 = 83, SERIF25 = 84, SERIF30 = 85, SERIF35 = 86, 
    SERIF40 = 87, SERIF50 = 88, SERIF75 = 89, SERIF100 = 90, BGETH = 91, 
    BPUTH = 92, CLOSEH = 93, EOFH = 94, GETSH = 95, LISTFILES = 96, OPENIN = 97, 
    OPENOUT = 98, OPENUP = 99, PTRH = 100, BANKED = 101, CIRCLE = 102, CLS = 103, 
    CLIPON = 104, CLIPOFF = 105, COLOUR = 106, COLOURBG = 107, CREATEFONT = 108, 
    FILL = 109, FLIP = 110, SHOWFPS = 111, GRAPHICS = 112, LINE = 113, LOADTYPEFACE = 114, 
    RECTANGLE = 115, PLOT = 116, POINT = 117, SCREENWIDTH = 118, SCREENHEIGHT = 119, 
    SHADED = 120, TEXT = 121, TEXTRIGHT = 122, TEXTCENTRE = 123, TEXTCENTER = 124, 
    TRIANGLE = 125, TIME = 126, PI = 127, SQR = 128, LN = 129, LOG = 130, 
    EXP = 131, ATN = 132, TAN = 133, COS = 134, SIN = 135, ABS = 136, ACS = 137, 
    ASN = 138, DEG = 139, RAD = 140, SGN = 141, ASC = 142, LEN = 143, INSTR = 144, 
    VAL = 145, TIMES = 146, STRS = 147, STRINGS = 148, CHRS = 149, LEFTS = 150, 
    MIDS = 151, RIGHTS = 152, RND = 153, RND0 = 154, RND1 = 155, EQ = 156, 
    NE = 157, GT = 158, GE = 159, LT = 160, LE = 161, NOT = 162, AND = 163, 
    OR = 164, EOR = 165, MOD = 166, DIV = 167, HAT = 168, PLUS = 169, MINUS = 170, 
    MULTIPLY = 171, DIVIDE = 172, SHL = 173, SHR = 174, PLUS_E = 175, MINUS_E = 176, 
    MULTIPLY_E = 177, DIVIDE_E = 178, SHL_E = 179, SHR_E = 180, NEWLINE = 181, 
    TICK = 182, TILDE = 183, HASH = 184, COLON = 185, COMMA = 186, DOLLAR = 187, 
    LPAREN = 188, PERCENT = 189, RPAREN = 190, SEMICOLON = 191, UNDERSCORE = 192, 
    COMMENT = 193, STRINGLITERAL = 194, PROC_NAME = 195, FN_INTEGER = 196, 
    FN_FLOAT = 197, FN_STRING = 198, VARIABLE_FLOAT = 199, VARIABLE_INTEGER = 200, 
    VARIABLE_STRING = 201, VARIABLE_TYPE = 202, NAME = 203, HEXNUMBER = 204, 
    BINARYNUMBER = 205, NUMBER = 206, FLOAT = 207, WS = 208
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

