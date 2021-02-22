
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
    CYAN = 65, WHITE = 66, BLACK = 67, MONO15 = 68, MONO20 = 69, MONO25 = 70, 
    MONO30 = 71, MONO35 = 72, MONO40 = 73, MONO50 = 74, MONO75 = 75, MONO100 = 76, 
    PROP15 = 77, PROP20 = 78, PROP25 = 79, PROP30 = 80, PROP35 = 81, PROP40 = 82, 
    PROP50 = 83, PROP75 = 84, PROP100 = 85, SERIF15 = 86, SERIF20 = 87, 
    SERIF25 = 88, SERIF30 = 89, SERIF35 = 90, SERIF40 = 91, SERIF50 = 92, 
    SERIF75 = 93, SERIF100 = 94, RENDERFRAME = 95, CREATEVERTEX = 96, CREATETRIANGLE = 97, 
    TRANSLATE = 98, ROTATE = 99, SCALE = 100, DELETEOBJECT = 101, CREATESHAPE = 102, 
    CREATEOBJECT = 103, SOLID = 104, WIREFRAME = 105, SHADED = 106, FILLEDWIREFRAME = 107, 
    BGETH = 108, BPUTH = 109, CLOSEH = 110, EOFH = 111, GETSH = 112, LISTFILES = 113, 
    OPENIN = 114, OPENOUT = 115, OPENUP = 116, PTRH = 117, BANKED = 118, 
    CIRCLE = 119, CLS = 120, CLIPON = 121, CLIPOFF = 122, COLOUR = 123, 
    COLOURBG = 124, CREATEFONT = 125, CURSORON = 126, CURSOROFF = 127, FILL = 128, 
    FLIP = 129, SHOWFPS = 130, GRAPHICS = 131, LINE = 132, LOADTYPEFACE = 133, 
    RECTANGLE = 134, PLOT = 135, POINT = 136, SCREENWIDTH = 137, SCREENHEIGHT = 138, 
    TEXT = 139, TEXTRIGHT = 140, TEXTCENTRE = 141, TEXTCENTER = 142, TRIANGLE = 143, 
    LOADSPRITE = 144, DRAWSPRITE = 145, DELETESPRITE = 146, CREATESPRITE = 147, 
    DRAWTOSPRITE = 148, DRAWTOSCREEN = 149, TIME = 150, PI = 151, SQR = 152, 
    LN = 153, LOG = 154, EXP = 155, ATN = 156, TAN = 157, COS = 158, SIN = 159, 
    ABS = 160, ACS = 161, ASN = 162, DEG = 163, RAD = 164, SGN = 165, ASC = 166, 
    LEN = 167, INSTR = 168, VAL = 169, TIMES = 170, STRS = 171, STRINGS = 172, 
    CHRS = 173, LEFTS = 174, MIDS = 175, RIGHTS = 176, RND = 177, RND0 = 178, 
    RND1 = 179, EQ = 180, NE = 181, GT = 182, GE = 183, LT = 184, LE = 185, 
    NOT = 186, AND = 187, OR = 188, EOR = 189, MOD = 190, DIV = 191, HAT = 192, 
    PLUS = 193, MINUS = 194, MULTIPLY = 195, DIVIDE = 196, SHL = 197, SHR = 198, 
    PLUS_E = 199, MINUS_E = 200, MULTIPLY_E = 201, DIVIDE_E = 202, SHL_E = 203, 
    SHR_E = 204, NEWLINE = 205, TICK = 206, TILDE = 207, HASH = 208, COLON = 209, 
    COMMA = 210, DOLLAR = 211, LPAREN = 212, PERCENT = 213, RPAREN = 214, 
    SEMICOLON = 215, UNDERSCORE = 216, COMMENT = 217, STRINGLITERAL = 218, 
    PROC_NAME = 219, FN_INTEGER = 220, FN_FLOAT = 221, FN_STRING = 222, 
    VARIABLE_FLOAT = 223, VARIABLE_INTEGER = 224, VARIABLE_STRING = 225, 
    VARIABLE_TYPE = 226, HEXNUMBER = 227, BINARYNUMBER = 228, NUMBER = 229, 
    FLOAT = 230, WS = 231
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

