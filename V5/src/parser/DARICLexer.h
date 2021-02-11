
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  DARICLexer : public antlr4::Lexer {
public:
  enum {
    BREAKPOINT = 1, CASE = 2, CHAIN = 3, DATA = 4, DEF = 5, DIM = 6, ELSE = 7, 
    END = 8, ENDCASE = 9, ENDIF = 10, ENDFN = 11, ENDPROC = 12, ENDWHILE = 13, 
    FALSE = 14, FOR = 15, FLOAT_TOKEN = 16, FN = 17, IF = 18, IN = 19, INSTALL = 20, 
    INT = 21, INPUT = 22, GLOBAL = 23, LOCAL = 24, LET = 25, NEXT = 26, 
    OF = 27, OFF = 28, ON = 29, OSCLI = 30, OTHERWISE = 31, PRINT = 32, 
    PROC = 33, READ = 34, REM = 35, REPEAT = 36, RESTORE = 37, RETURN = 38, 
    SPC = 39, STEP = 40, SWAP = 41, THEN = 42, TO = 43, TRACE = 44, TRACEON = 45, 
    TRACEOFF = 46, TRUE = 47, TYPE = 48, UNTIL = 49, WHEN = 50, WHILE = 51, 
    MOUSE = 52, INKEY = 53, INKEYS = 54, GET = 55, GETS = 56, RED = 57, 
    GREEN = 58, YELLOW = 59, BLUE = 60, MAGENTA = 61, CYAN = 62, WHITE = 63, 
    BLACK = 64, MONO15 = 65, MONO20 = 66, MONO25 = 67, MONO30 = 68, MONO35 = 69, 
    MONO40 = 70, MONO50 = 71, MONO75 = 72, MONO100 = 73, PROP15 = 74, PROP20 = 75, 
    PROP25 = 76, PROP30 = 77, PROP35 = 78, PROP40 = 79, PROP50 = 80, PROP75 = 81, 
    PROP100 = 82, SERIF15 = 83, SERIF20 = 84, SERIF25 = 85, SERIF30 = 86, 
    SERIF35 = 87, SERIF40 = 88, SERIF50 = 89, SERIF75 = 90, SERIF100 = 91, 
    RENDERFRAME = 92, CREATEVERTEX = 93, CREATETRIANGLE = 94, TRANSLATE = 95, 
    ROTATE = 96, SCALE = 97, DELETEOBJECT = 98, CREATESHAPE = 99, CREATEOBJECT = 100, 
    SOLID = 101, WIREFRAME = 102, SHADED = 103, FILLEDWIREFRAME = 104, BGETH = 105, 
    BPUTH = 106, CLOSEH = 107, EOFH = 108, GETSH = 109, LISTFILES = 110, 
    OPENIN = 111, OPENOUT = 112, OPENUP = 113, PTRH = 114, BANKED = 115, 
    CIRCLE = 116, CLS = 117, CLIPON = 118, CLIPOFF = 119, COLOUR = 120, 
    COLOURBG = 121, CREATEFONT = 122, FILL = 123, FLIP = 124, SHOWFPS = 125, 
    GRAPHICS = 126, LINE = 127, LOADTYPEFACE = 128, RECTANGLE = 129, PLOT = 130, 
    POINT = 131, SCREENWIDTH = 132, SCREENHEIGHT = 133, TEXT = 134, TEXTRIGHT = 135, 
    TEXTCENTRE = 136, TEXTCENTER = 137, TRIANGLE = 138, TIME = 139, PI = 140, 
    SQR = 141, LN = 142, LOG = 143, EXP = 144, ATN = 145, TAN = 146, COS = 147, 
    SIN = 148, ABS = 149, ACS = 150, ASN = 151, DEG = 152, RAD = 153, SGN = 154, 
    ASC = 155, LEN = 156, INSTR = 157, VAL = 158, TIMES = 159, STRS = 160, 
    STRINGS = 161, CHRS = 162, LEFTS = 163, MIDS = 164, RIGHTS = 165, RND = 166, 
    RND0 = 167, RND1 = 168, EQ = 169, NE = 170, GT = 171, GE = 172, LT = 173, 
    LE = 174, NOT = 175, AND = 176, OR = 177, EOR = 178, MOD = 179, DIV = 180, 
    HAT = 181, PLUS = 182, MINUS = 183, MULTIPLY = 184, DIVIDE = 185, SHL = 186, 
    SHR = 187, PLUS_E = 188, MINUS_E = 189, MULTIPLY_E = 190, DIVIDE_E = 191, 
    SHL_E = 192, SHR_E = 193, NEWLINE = 194, TICK = 195, TILDE = 196, HASH = 197, 
    COLON = 198, COMMA = 199, DOLLAR = 200, LPAREN = 201, PERCENT = 202, 
    RPAREN = 203, SEMICOLON = 204, UNDERSCORE = 205, COMMENT = 206, STRINGLITERAL = 207, 
    PROC_NAME = 208, FN_INTEGER = 209, FN_FLOAT = 210, FN_STRING = 211, 
    VARIABLE_FLOAT = 212, VARIABLE_INTEGER = 213, VARIABLE_STRING = 214, 
    VARIABLE_TYPE = 215, HEXNUMBER = 216, BINARYNUMBER = 217, NUMBER = 218, 
    FLOAT = 219, WS = 220
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

