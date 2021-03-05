
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    BREAKPOINT = 1, CASE = 2, CHAIN = 3, DATA = 4, DEF = 5, DIM = 6, ELSE = 7, 
    END = 8, ENDCASE = 9, ENDIF = 10, ENDFN = 11, ENDPROC = 12, ENDWHILE = 13, 
    FALSE = 14, FOR = 15, FLOAT_TOKEN = 16, FN = 17, IF = 18, IN = 19, INSTALL = 20, 
    INT = 21, INPUT = 22, GLOBAL = 23, GOTO = 24, GOSUB = 25, LOCAL = 26, 
    LET = 27, NEXT = 28, NEW = 29, OF = 30, OFF = 31, ON = 32, OSCLI = 33, 
    OTHERWISE = 34, PRINT = 35, PROC = 36, READ = 37, REM = 38, REPEAT = 39, 
    RESTORE = 40, RETURN = 41, SPC = 42, STEP = 43, SWAP = 44, THEN = 45, 
    TO = 46, TRACE = 47, TRACEON = 48, TRACEOFF = 49, TRUE = 50, TYPE = 51, 
    UNTIL = 52, WHEN = 53, WHILE = 54, MOUSE = 55, INKEY = 56, INKEYS = 57, 
    GET = 58, GETS = 59, RED = 60, GREEN = 61, YELLOW = 62, BLUE = 63, MAGENTA = 64, 
    CYAN = 65, WHITE = 66, BLACK = 67, MONO = 68, PROP = 69, SERIF = 70, 
    RENDERFRAME = 71, CREATEVERTEX = 72, CREATETRIANGLE = 73, TRANSLATE = 74, 
    ROTATE = 75, SCALE = 76, DELETEOBJECT = 77, CREATESHAPE = 78, CREATEOBJECT = 79, 
    SOLID = 80, WIREFRAME = 81, SHADED = 82, FILLEDWIREFRAME = 83, BGETH = 84, 
    BPUTH = 85, CLOSEH = 86, EOFH = 87, GETSH = 88, LISTFILES = 89, OPENIN = 90, 
    OPENOUT = 91, OPENUP = 92, PTRH = 93, BANKED = 94, CIRCLE = 95, CLS = 96, 
    CLIPON = 97, CLIPOFF = 98, COLOUR = 99, COLOURBG = 100, CURSORON = 101, 
    CURSOROFF = 102, FILL = 103, FLIP = 104, SHOWFPS = 105, GRAPHICS = 106, 
    LINE = 107, LOADTYPEFACE = 108, RECTANGLE = 109, PLOT = 110, POINT = 111, 
    SCREENWIDTH = 112, SCREENHEIGHT = 113, TEXT = 114, TEXTRIGHT = 115, 
    TEXTCENTRE = 116, TEXTCENTER = 117, TRIANGLE = 118, RASTERMODE = 119, 
    BLIT = 120, BLEND = 121, LOADSPRITE = 122, DRAWSPRITE = 123, DELETESPRITE = 124, 
    CREATESPRITE = 125, DRAWTOSPRITE = 126, DRAWTOSCREEN = 127, TIME = 128, 
    PI = 129, SQR = 130, LN = 131, LOG = 132, EXP = 133, ATN = 134, TAN = 135, 
    COS = 136, SIN = 137, ABS = 138, ACS = 139, ASN = 140, DEG = 141, RAD = 142, 
    SGN = 143, ASC = 144, LEN = 145, INSTR = 146, VAL = 147, TIMES = 148, 
    STRS = 149, STRINGS = 150, CHRS = 151, LEFTS = 152, MIDS = 153, RIGHTS = 154, 
    RND = 155, RND0 = 156, RND1 = 157, EQ = 158, NE = 159, GT = 160, GE = 161, 
    LT = 162, LE = 163, NOT = 164, AND = 165, OR = 166, EOR = 167, MOD = 168, 
    DIV = 169, HAT = 170, PLUS = 171, MINUS = 172, MULTIPLY = 173, DIVIDE = 174, 
    SHL = 175, SHR = 176, PLUS_E = 177, MINUS_E = 178, MULTIPLY_E = 179, 
    DIVIDE_E = 180, SHL_E = 181, SHR_E = 182, NEWLINE = 183, TICK = 184, 
    TILDE = 185, HASH = 186, COLON = 187, COMMA = 188, DOLLAR = 189, PERCENT = 190, 
    LPAREN = 191, RPAREN = 192, SEMICOLON = 193, UNDERSCORE = 194, COMMENT = 195, 
    STRINGLITERAL = 196, PROC_NAME = 197, FN_INTEGER = 198, FN_FLOAT = 199, 
    FN_STRING = 200, VARIABLE_FLOAT = 201, VARIABLE_INTEGER = 202, VARIABLE_STRING = 203, 
    VARIABLE_TYPE = 204, HEXNUMBER = 205, BINARYNUMBER = 206, NUMBER = 207, 
    FLOAT = 208, WS = 209
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

