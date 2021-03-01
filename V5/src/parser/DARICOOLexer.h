
// Generated from DARICOO.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICOOLexer : public antlr4::Lexer {
public:
  enum {
    BREAKPOINT = 1, CASE = 2, CHAIN = 3, DATA = 4, DEF = 5, DIM = 6, ELSE = 7, 
    END = 8, ENDCASE = 9, ENDIF = 10, ENDFN = 11, ENDPROC = 12, ENDWHILE = 13, 
    FOR = 14, FN = 15, IF = 16, IN = 17, INSTALL = 18, INPUT = 19, GLOBAL = 20, 
    LOCAL = 21, NEXT = 22, NEW = 23, OF = 24, OFF = 25, ON = 26, OSCLI = 27, 
    OTHERWISE = 28, PRINT = 29, PROC = 30, READ = 31, REM = 32, REPEAT = 33, 
    RESTORE = 34, RETURN = 35, SPC = 36, STEP = 37, SWAP = 38, THEN = 39, 
    TO = 40, TRACE = 41, TRACEON = 42, TRACEOFF = 43, TYPE = 44, UNTIL = 45, 
    WHEN = 46, WHILE = 47, FALSE = 48, TRUE = 49, INT = 50, FLOAT_TOKEN = 51, 
    STRING = 52, MOUSE = 53, INKEY = 54, INKEYS = 55, GET = 56, GETS = 57, 
    RED = 58, GREEN = 59, YELLOW = 60, BLUE = 61, MAGENTA = 62, CYAN = 63, 
    WHITE = 64, BLACK = 65, MONO = 66, PROP = 67, SERIF = 68, RENDERFRAME = 69, 
    CREATEVERTEX = 70, CREATETRIANGLE = 71, TRANSLATE = 72, ROTATE = 73, 
    SCALE = 74, DELETEOBJECT = 75, CREATESHAPE = 76, CREATEOBJECT = 77, 
    SOLID = 78, WIREFRAME = 79, SHADED = 80, FILLEDWIREFRAME = 81, BGETH = 82, 
    BPUTH = 83, CLOSEH = 84, EOFH = 85, GETSH = 86, LISTFILES = 87, OPENIN = 88, 
    OPENOUT = 89, OPENUP = 90, PTRH = 91, BANKED = 92, CIRCLE = 93, CLS = 94, 
    CLIPON = 95, CLIPOFF = 96, COLOUR = 97, COLOURBG = 98, CURSORON = 99, 
    CURSOROFF = 100, FILL = 101, FLIP = 102, SHOWFPS = 103, GRAPHICS = 104, 
    LINE = 105, LOADTYPEFACE = 106, RECTANGLE = 107, PLOT = 108, POINT = 109, 
    SCREENWIDTH = 110, SCREENHEIGHT = 111, TEXT = 112, TEXTRIGHT = 113, 
    TEXTCENTRE = 114, TEXTCENTER = 115, TRIANGLE = 116, LOADSPRITE = 117, 
    DRAWSPRITE = 118, DELETESPRITE = 119, CREATESPRITE = 120, DRAWTOSPRITE = 121, 
    DRAWTOSCREEN = 122, TIME = 123, PI = 124, SQR = 125, LN = 126, LOG = 127, 
    EXP = 128, ATN = 129, TAN = 130, COS = 131, SIN = 132, ABS = 133, ACS = 134, 
    ASN = 135, DEG = 136, RAD = 137, SGN = 138, ASC = 139, LEN = 140, INSTR = 141, 
    TIMES = 142, STRS = 143, STRINGS = 144, CHRS = 145, LEFTS = 146, MIDS = 147, 
    RIGHTS = 148, RND = 149, RND0 = 150, RND1 = 151, NOT = 152, AND = 153, 
    OR = 154, EOR = 155, MOD = 156, DIV = 157, HAT = 158, PLUS = 159, MINUS = 160, 
    MULTIPLY = 161, DIVIDE = 162, SHL = 163, SHR = 164, PLUS_E = 165, MINUS_E = 166, 
    MULTIPLY_E = 167, DIVIDE_E = 168, SHL_E = 169, SHR_E = 170, EQ = 171, 
    NE = 172, GT = 173, GE = 174, LT = 175, LE = 176, IDENTIFIER = 177, 
    PROC_NAME = 178, FN_NAME = 179, VAR_INT = 180, VAR_FLOAT = 181, VAR_STRING = 182, 
    VARTYPE = 183, TICK = 184, TILDE = 185, HASH = 186, DOLLAR = 187, PERCENT = 188, 
    COLON = 189, LPAREN = 190, RPAREN = 191, COMMA = 192, STRINGLITERAL = 193, 
    HEXNUMBER = 194, BINARYNUMBER = 195, NUMBER = 196, FLOAT = 197, WS = 198
  };

  explicit DARICOOLexer(antlr4::CharStream *input);
  ~DARICOOLexer();

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

