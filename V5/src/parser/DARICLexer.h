
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
    COLOURBG = 123, CREATEFONT = 124, FILL = 125, FLIP = 126, SHOWFPS = 127, 
    GRAPHICS = 128, LINE = 129, LOADTYPEFACE = 130, RECTANGLE = 131, PLOT = 132, 
    POINT = 133, SCREENWIDTH = 134, SCREENHEIGHT = 135, TEXT = 136, TEXTRIGHT = 137, 
    TEXTCENTRE = 138, TEXTCENTER = 139, TRIANGLE = 140, TIME = 141, PI = 142, 
    SQR = 143, LN = 144, LOG = 145, EXP = 146, ATN = 147, TAN = 148, COS = 149, 
    SIN = 150, ABS = 151, ACS = 152, ASN = 153, DEG = 154, RAD = 155, SGN = 156, 
    ASC = 157, LEN = 158, INSTR = 159, VAL = 160, TIMES = 161, STRS = 162, 
    STRINGS = 163, CHRS = 164, LEFTS = 165, MIDS = 166, RIGHTS = 167, RND = 168, 
    RND0 = 169, RND1 = 170, EQ = 171, NE = 172, GT = 173, GE = 174, LT = 175, 
    LE = 176, NOT = 177, AND = 178, OR = 179, EOR = 180, MOD = 181, DIV = 182, 
    HAT = 183, PLUS = 184, MINUS = 185, MULTIPLY = 186, DIVIDE = 187, SHL = 188, 
    SHR = 189, PLUS_E = 190, MINUS_E = 191, MULTIPLY_E = 192, DIVIDE_E = 193, 
    SHL_E = 194, SHR_E = 195, NEWLINE = 196, TICK = 197, TILDE = 198, HASH = 199, 
    COLON = 200, COMMA = 201, DOLLAR = 202, LPAREN = 203, PERCENT = 204, 
    RPAREN = 205, SEMICOLON = 206, UNDERSCORE = 207, COMMENT = 208, STRINGLITERAL = 209, 
    PROC_NAME = 210, FN_INTEGER = 211, FN_FLOAT = 212, FN_STRING = 213, 
    VARIABLE_FLOAT = 214, VARIABLE_INTEGER = 215, VARIABLE_STRING = 216, 
    VARIABLE_TYPE = 217, HEXNUMBER = 218, BINARYNUMBER = 219, NUMBER = 220, 
    FLOAT = 221, WS = 222
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

