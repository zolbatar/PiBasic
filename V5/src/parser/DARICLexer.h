
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
    TIME = 143, PI = 144, SQR = 145, LN = 146, LOG = 147, EXP = 148, ATN = 149, 
    TAN = 150, COS = 151, SIN = 152, ABS = 153, ACS = 154, ASN = 155, DEG = 156, 
    RAD = 157, SGN = 158, ASC = 159, LEN = 160, INSTR = 161, VAL = 162, 
    TIMES = 163, STRS = 164, STRINGS = 165, CHRS = 166, LEFTS = 167, MIDS = 168, 
    RIGHTS = 169, RND = 170, RND0 = 171, RND1 = 172, EQ = 173, NE = 174, 
    GT = 175, GE = 176, LT = 177, LE = 178, NOT = 179, AND = 180, OR = 181, 
    EOR = 182, MOD = 183, DIV = 184, HAT = 185, PLUS = 186, MINUS = 187, 
    MULTIPLY = 188, DIVIDE = 189, SHL = 190, SHR = 191, PLUS_E = 192, MINUS_E = 193, 
    MULTIPLY_E = 194, DIVIDE_E = 195, SHL_E = 196, SHR_E = 197, NEWLINE = 198, 
    TICK = 199, TILDE = 200, HASH = 201, COLON = 202, COMMA = 203, DOLLAR = 204, 
    LPAREN = 205, PERCENT = 206, RPAREN = 207, SEMICOLON = 208, UNDERSCORE = 209, 
    COMMENT = 210, STRINGLITERAL = 211, PROC_NAME = 212, FN_INTEGER = 213, 
    FN_FLOAT = 214, FN_STRING = 215, VARIABLE_FLOAT = 216, VARIABLE_INTEGER = 217, 
    VARIABLE_STRING = 218, VARIABLE_TYPE = 219, HEXNUMBER = 220, BINARYNUMBER = 221, 
    NUMBER = 222, FLOAT = 223, WS = 224
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

