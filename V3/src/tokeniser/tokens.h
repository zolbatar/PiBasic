#include "../variables.h"
#include <string>

enum class TokenType {
    EQUAL = '=',
    LESS = '<',
    GREATER = '>',
    ADD = '+',
    SUBTRACT = '-',
    MULTIPLY = '*',
    DIVIDE = '/',
    COMMA = ',',
    LPARENS = '(',
    RPARENS = ')',
    SEMICOLON = ';',
    TILDE = '~',
    BANG = '!',
    COLON = ':',
    HAT = '^',

    NONE = 256,
    TERMINATOR,
    SUB_EXPRESSION,
    LINE_NUMBER,
    IDENTIFIER,
    IDENTIFIER_INTEGER,
    IDENTIFIER_STRING,
    INTEGER,
    REAL,
    STRING,

    UNARYPLUS,
    UNARYMINUS,

    NOTEQUAL,
    LESSEQUAL,
    GREATEREQUAL,
    ADD_EQUAL,
    SUBTRACT_EQUAL,
    MULTIPLY_EQUAL,
    DIVIDE_EQUAL,
    DIVIDE_INTEGER,
    SHIFT_LEFT,
    SHIFT_RIGHT,

    // CORE
    CASE,
    DATA,
    DEF,
    DIM,
    ELSE,
    END,
    ENDCASE,
    ENDIF,
    ENDFN,
    ENDPROC,
    ENDTYPE,
    ENDWHILE,
    FALSE,
    FIELD,
    FN,
    FOR,
    GLOBAL,
    GOSUB,
    GOTO,
    INKEY,
    INKEYS,
    INPUT,
    IF,
    LET,
    LOCAL,
    NEXT,
    OF,
    OTHERWISE,
    PRINT,
    READ,
    REM,
    REPEAT,
    RESTORE,
    OSCLI,
    RETURN,
    SPC,
    STEP,
    TAB,
    THEN,
    TO,
    TIME,
    TIMES,
    TRACEON,
    TRACEOFF,
    TRUE,
    TYPE,
    UNTIL,
    WHEN,
    WHILE,

    // IO
    BGET,
    BPUT,
    CLOSE,
    EOFH,
    OPENIN,
    OPENOUT,
    OPENUP,

    // 2D
    CIRCLE,
    CLIPON,
    CLIPOFF,
    CLS,
    COLOUR,
    COLOURBG,
    CREATEFONT,
    ELLIPSE,
    FILL,
    FLIP,
    GRAPHICS,
    LINE,
    LOADTYPEFACE,
    PLOT,
    RECTANGLE,
    SCREENWIDTH,
    SCREENHEIGHT,
    SHADED,
    TEXT,
    TEXTRIGHT,
    TEXTCENTRE,
    TRIANGLE,

    // 3D
    VERTEX3D,
    TRIANGLE3D,
    SHAPE3D,
    OBJECT3D,
    SOLID,
    WIREFRAME,
    EDGEDWIREFRAME,
    TRANSLATE3D,
    ROTATE3D,
    SCALE3D,
    RENDER3D,

    // String
    ASC,
    CHRS,
    INSTR,
    LEFTS,
    MIDS,
    RIGHTS,
    LEN,
    STRS,
    STRINGS,

    // Boolean
    AND,
    EOR,
    OR,
    NOT,

    // Maths/types
    FLOAT,
    INT,
    ACS,
    DIV,
    MOD,
    SQR,
    LN,
    LOG,
    EXP,
    ATN,
    TAN,
    COS,
    SIN,
    ASN,
    ABS,
    DEG,
    RAD,
    RND,
    SGN,
    VAL,
    PI
};

struct TokenDef {
    std::string name;
    TokenType type;
};
