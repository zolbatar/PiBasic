
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
    LET = 27, NEXT = 28, OF = 29, OFF = 30, ON = 31, OSCLI = 32, OTHERWISE = 33, 
    PRINT = 34, PROC = 35, READ = 36, REM = 37, REPEAT = 38, RESTORE = 39, 
    RETURN = 40, SPC = 41, STEP = 42, SWAP = 43, THEN = 44, TO = 45, TRACE = 46, 
    TRACEON = 47, TRACEOFF = 48, TRUE = 49, TYPE = 50, UNTIL = 51, WHEN = 52, 
    WHILE = 53, MOUSE = 54, INKEY = 55, INKEYS = 56, GET = 57, GETS = 58, 
    RED = 59, GREEN = 60, YELLOW = 61, BLUE = 62, MAGENTA = 63, CYAN = 64, 
    WHITE = 65, BLACK = 66, MONO15 = 67, MONO20 = 68, MONO25 = 69, MONO30 = 70, 
    MONO35 = 71, MONO40 = 72, MONO50 = 73, MONO75 = 74, MONO100 = 75, PROP15 = 76, 
    PROP20 = 77, PROP25 = 78, PROP30 = 79, PROP35 = 80, PROP40 = 81, PROP50 = 82, 
    PROP75 = 83, PROP100 = 84, SERIF15 = 85, SERIF20 = 86, SERIF25 = 87, 
    SERIF30 = 88, SERIF35 = 89, SERIF40 = 90, SERIF50 = 91, SERIF75 = 92, 
    SERIF100 = 93, RENDERFRAME = 94, CREATEVERTEX = 95, CREATETRIANGLE = 96, 
    TRANSLATE = 97, ROTATE = 98, SCALE = 99, DELETEOBJECT = 100, CREATESHAPE = 101, 
    CREATEOBJECT = 102, SOLID = 103, WIREFRAME = 104, SHADED = 105, FILLEDWIREFRAME = 106, 
    BGETH = 107, BPUTH = 108, CLOSEH = 109, EOFH = 110, GETSH = 111, LISTFILES = 112, 
    OPENIN = 113, OPENOUT = 114, OPENUP = 115, PTRH = 116, BANKED = 117, 
    CIRCLE = 118, CLS = 119, CLIPON = 120, CLIPOFF = 121, COLOUR = 122, 
    COLOURBG = 123, CREATEFONT = 124, CURSORON = 125, CURSOROFF = 126, FILL = 127, 
    FLIP = 128, SHOWFPS = 129, GRAPHICS = 130, LINE = 131, LOADTYPEFACE = 132, 
    RECTANGLE = 133, PLOT = 134, POINT = 135, SCREENWIDTH = 136, SCREENHEIGHT = 137, 
    TEXT = 138, TEXTRIGHT = 139, TEXTCENTRE = 140, TEXTCENTER = 141, TRIANGLE = 142, 
    DRAWSPRITE = 143, DELETESPRITE = 144, CREATESPRITE = 145, DRAWTOSPRITE = 146, 
    DRAWTOSCREEN = 147, TIME = 148, PI = 149, SQR = 150, LN = 151, LOG = 152, 
    EXP = 153, ATN = 154, TAN = 155, COS = 156, SIN = 157, ABS = 158, ACS = 159, 
    ASN = 160, DEG = 161, RAD = 162, SGN = 163, ASC = 164, LEN = 165, INSTR = 166, 
    VAL = 167, TIMES = 168, STRS = 169, STRINGS = 170, CHRS = 171, LEFTS = 172, 
    MIDS = 173, RIGHTS = 174, RND = 175, RND0 = 176, RND1 = 177, EQ = 178, 
    NE = 179, GT = 180, GE = 181, LT = 182, LE = 183, NOT = 184, AND = 185, 
    OR = 186, EOR = 187, MOD = 188, DIV = 189, HAT = 190, PLUS = 191, MINUS = 192, 
    MULTIPLY = 193, DIVIDE = 194, SHL = 195, SHR = 196, PLUS_E = 197, MINUS_E = 198, 
    MULTIPLY_E = 199, DIVIDE_E = 200, SHL_E = 201, SHR_E = 202, NEWLINE = 203, 
    TICK = 204, TILDE = 205, HASH = 206, COLON = 207, COMMA = 208, DOLLAR = 209, 
    LPAREN = 210, PERCENT = 211, RPAREN = 212, SEMICOLON = 213, UNDERSCORE = 214, 
    COMMENT = 215, STRINGLITERAL = 216, PROC_NAME = 217, FN_INTEGER = 218, 
    FN_FLOAT = 219, FN_STRING = 220, VARIABLE_FLOAT = 221, VARIABLE_INTEGER = 222, 
    VARIABLE_STRING = 223, VARIABLE_TYPE = 224, HEXNUMBER = 225, BINARYNUMBER = 226, 
    NUMBER = 227, FLOAT = 228, WS = 229
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

