
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
    SERIF40 = 87, SERIF50 = 88, SERIF75 = 89, SERIF100 = 90, RENDERFRAME = 91, 
    CREATEVERTEX = 92, CREATETRIANGLE = 93, TRANSLATE = 94, ROTATE = 95, 
    SCALE = 96, DELETEOBJECT = 97, CREATESHAPE = 98, CREATEOBJECT = 99, 
    SOLID = 100, WIREFRAME = 101, SHADED = 102, FILLEDWIREFRAME = 103, BGETH = 104, 
    BPUTH = 105, CLOSEH = 106, EOFH = 107, GETSH = 108, LISTFILES = 109, 
    OPENIN = 110, OPENOUT = 111, OPENUP = 112, PTRH = 113, BANKED = 114, 
    CIRCLE = 115, CLS = 116, CLIPON = 117, CLIPOFF = 118, COLOUR = 119, 
    COLOURBG = 120, CREATEFONT = 121, FILL = 122, FLIP = 123, SHOWFPS = 124, 
    GRAPHICS = 125, LINE = 126, LOADTYPEFACE = 127, RECTANGLE = 128, PLOT = 129, 
    POINT = 130, SCREENWIDTH = 131, SCREENHEIGHT = 132, TEXT = 133, TEXTRIGHT = 134, 
    TEXTCENTRE = 135, TEXTCENTER = 136, TRIANGLE = 137, TIME = 138, PI = 139, 
    SQR = 140, LN = 141, LOG = 142, EXP = 143, ATN = 144, TAN = 145, COS = 146, 
    SIN = 147, ABS = 148, ACS = 149, ASN = 150, DEG = 151, RAD = 152, SGN = 153, 
    ASC = 154, LEN = 155, INSTR = 156, VAL = 157, TIMES = 158, STRS = 159, 
    STRINGS = 160, CHRS = 161, LEFTS = 162, MIDS = 163, RIGHTS = 164, RND = 165, 
    RND0 = 166, RND1 = 167, EQ = 168, NE = 169, GT = 170, GE = 171, LT = 172, 
    LE = 173, NOT = 174, AND = 175, OR = 176, EOR = 177, MOD = 178, DIV = 179, 
    HAT = 180, PLUS = 181, MINUS = 182, MULTIPLY = 183, DIVIDE = 184, SHL = 185, 
    SHR = 186, PLUS_E = 187, MINUS_E = 188, MULTIPLY_E = 189, DIVIDE_E = 190, 
    SHL_E = 191, SHR_E = 192, NEWLINE = 193, TICK = 194, TILDE = 195, HASH = 196, 
    COLON = 197, COMMA = 198, DOLLAR = 199, LPAREN = 200, PERCENT = 201, 
    RPAREN = 202, SEMICOLON = 203, UNDERSCORE = 204, COMMENT = 205, STRINGLITERAL = 206, 
    PROC_NAME = 207, FN_INTEGER = 208, FN_FLOAT = 209, FN_STRING = 210, 
    VARIABLE_FLOAT = 211, VARIABLE_INTEGER = 212, VARIABLE_STRING = 213, 
    VARIABLE_TYPE = 214, HEXNUMBER = 215, BINARYNUMBER = 216, NUMBER = 217, 
    FLOAT = 218, WS = 219
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

