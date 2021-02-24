
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
    TEXTCENTRE = 116, TEXTCENTER = 117, TRIANGLE = 118, LOADSPRITE = 119, 
    DRAWSPRITE = 120, DELETESPRITE = 121, CREATESPRITE = 122, DRAWTOSPRITE = 123, 
    DRAWTOSCREEN = 124, TIME = 125, PI = 126, SQR = 127, LN = 128, LOG = 129, 
    EXP = 130, ATN = 131, TAN = 132, COS = 133, SIN = 134, ABS = 135, ACS = 136, 
    ASN = 137, DEG = 138, RAD = 139, SGN = 140, ASC = 141, LEN = 142, INSTR = 143, 
    VAL = 144, TIMES = 145, STRS = 146, STRINGS = 147, CHRS = 148, LEFTS = 149, 
    MIDS = 150, RIGHTS = 151, RND = 152, RND0 = 153, RND1 = 154, EQ = 155, 
    NE = 156, GT = 157, GE = 158, LT = 159, LE = 160, NOT = 161, AND = 162, 
    OR = 163, EOR = 164, MOD = 165, DIV = 166, HAT = 167, PLUS = 168, MINUS = 169, 
    MULTIPLY = 170, DIVIDE = 171, SHL = 172, SHR = 173, PLUS_E = 174, MINUS_E = 175, 
    MULTIPLY_E = 176, DIVIDE_E = 177, SHL_E = 178, SHR_E = 179, NEWLINE = 180, 
    TICK = 181, TILDE = 182, HASH = 183, COLON = 184, COMMA = 185, DOLLAR = 186, 
    LPAREN = 187, PERCENT = 188, RPAREN = 189, SEMICOLON = 190, UNDERSCORE = 191, 
    COMMENT = 192, STRINGLITERAL = 193, PROC_NAME = 194, FN_INTEGER = 195, 
    FN_FLOAT = 196, FN_STRING = 197, VARIABLE_FLOAT = 198, VARIABLE_INTEGER = 199, 
    VARIABLE_STRING = 200, VARIABLE_TYPE = 201, HEXNUMBER = 202, BINARYNUMBER = 203, 
    NUMBER = 204, FLOAT = 205, WS = 206
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

