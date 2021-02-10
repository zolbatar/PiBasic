#pragma once
#include "../environment.h"
#include "../types.h"
#include "boxed.h"
#include <map>
#include <sstream>

extern Environment g_env;
const int LocalVariableFlag = 1 << 31;

enum class Bytecodes {
    NOP,
    TRACEON, // Start debug tracing
    TRACEOFF, // Stop debug tracing
    BREAKPOINT, // Open up debugging
    HALT, // Stop program
    CHAIN, // Load next program

    // Stack manipulation
    DROP, // Drop top item
    DUP, // Duplicate
    ROT, // Rotate top two float

    // Load/store
    FASTCONST, // Fast constant push
    FASTCONST_VAR, // Fast int constant push (points to variable)
    LOAD, // Load variable
    STORE, // Store variable

    // Arrays
    DIM, // Dimension array
    STORE_ARRAY, // Store in array
    LOAD_ARRAY, // Load from array
    ARRAYSIZE, // Return array size

    // Types and fields
    NEW_TYPE, // Do any init needed on a type
    LOAD_FIELD, // Load from field
    LOAD_FIELD_ARRAY, // Load from field (array)
    STORE_FIELD, // Store in field
    STORE_FIELD_ARRAY, // Store in field array

    // Function parameter
    STORE_PARAMETER, // Store parameter stack in variable

    // Data
    READ, // Request DATA
    RESTORE, // Reset data pointer

    // Conversion
    CONV_FLOAT, // Convert to float
    CONV_INT, // Convert to int

    // Looping and flow control
    FOR, // For
    NEXT, // Next loop
    FORIN, // For In
    NEXTIN, // Next (in) loop
    REPEAT, // Store PC for repeat loop
    JNEREP, // Jump <>, repeat
    JUMP, // Jump
    JNE, // Jump <>
    JE, // Jump =
    CALL, // Call
    RETURN, // Return from PROC
    CASE_C, // Clear CASE flag
    CASE_S, // Clear CASE flag
    CJUMPT, // Jump on positive case
    GOTO, // Goto line number
    GOSUB, // Go subroutine

    // Maths
    UNARY, // Unary minus
    ADD, // Add
    DIVIDE, // Divide
    MULTIPLY, // Multiply
    SUBTRACT, // Subtract
    POWER, // To the power
    SHL, // Shift left
    SHR, // Shift right
    DIV, // Quotient
    MOD, // Modulo
    SQR, // Square root
    LN, // Natural log
    LOG, // Logarithm
    EXP, // Exponential
    ATN, // Arc tangent
    TAN, // Tangent
    COS, // Cosine
    SIN, // Sine
    ABS, // Absolute
    ACS, // Arc cosine
    ASN, // Arc sine
    DEG, // Radians to degrees
    RAD, // Degrees to radians
    SGN, // Get sign of number
    PI, // The constant PI

    // Swapping
    SWAP, // Swap

    // Printing and inputting
    PRINT, // Print variable
    PRINT_NL, // Print newline
    PRINT_SPC, // Print spaces
    INPUT, // Input variable

    // Boolean and comparison
    CMP_E, // Compare if =
    CMP_NE, // Compare if <>
    CMP_GE, // Compare if >=
    CMP_LE, // Compare if <=
    CMP_G, // Compare if >
    CMP_L, // Compare if <
    BOOL_OR, // Logical OR, int
    BOOL_AND, // Logical AND, int
    BOOL_EOR, // Logical EOR, int
    BOOL_NOT, // Logical NOT, int

    // System calls
    RND, // Random number
    RNDREAL, // Random number between 0.0 and 1.0
    RNDRANGE, // Random number in range
    OPENUP, // Open for update
    OPENIN, // Open for read
    OPENOUT, // Open for output
    CLOSE, // Close file
    BPUT, // Put byte
    BGET, // Read byte
    EOFH, // EOF
    PTR, // PTR#
    PTRA, // PTR# assignment
    GETSH, // Get$#
    LISTFILES, // List files in directory

    // Graphics calls
    CLS, // Clear screen
    COLOURRGB, // Change graphics plot colour (RGB)
    COLOURHEX, // Change graphics plot colour (HEX)
    COLOURBGRGB, // Change graphics plot colour (RGB) (background)
    COLOURBGHEX, // Change graphics plot colour (HEX) (background)
    COLOUREXPRESSION, // Change graphics plot colour (Expression takes RGB)
    FLIP, // Flip to view render surface
    GRAPHICS, // Change screen mode
    LINE, // Line
    RECTANGLE, // Rectangle
    RECTANGLEFILL, // Rectangle (filled)
    TRIANGLE, // Triangle
    TRIANGLEFILL, // Triangle (filled)
    TRIANGLESHADED, // Triangle (barycentric)
    CIRCLE, // Circle
    CIRCLEFILL, // Circle (filled)
    ELLIPSE, // Ellipse
    ELLIPSEFILL, // Ellipse (filled)
    PLOT, // Plot pixel
    POINT, // Get colour of pixel
    CLIP, // Clipping rectangle
    CLIPOFF, // Turn clipping off
    SHOWFPS, // Show FPS
    SCREENWIDTH, // Get screen width
    SCREENHEIGHT, // Get screen height
    LOADTYPEFACE, // Load typeface
    CREATEFONT, // Create font of specific size
    TEXT, // Render text
    TEXTRIGHT, // Render text (right aligned)
    TEXTCENTRE, // Render text (centred)

    // 3D Graphics
    CREATEVERTEX, // Create a vertex in the 3d engine
    CREATETRIANGLE, // Create a triangle in the 3d engine
    CREATESHAPE, // Send the shape to the 3D engine and return an integer handle
    CREATEOBJECT, // Create 3D object
    OBJECTTRANSLATE, // Move 3D object
    OBJECTROTATE, // Rotate 3D object
    OBJECTSCALE, // Scale 3D object
    RENDERFRAME, // Render the 3D frame
    DELETEOBJECT, // Delete object

    // String
    ASC, // Get ascii value for first character in string
    CHRS, // CHR$
    INSTR, // Search for occurence of string in string
    LEFTS, // Characters from left of string
    MIDS, // Characters from inside string
    RIGHTS, // Characters from right of string
    LEN, // Length of string
    VAL, // String to float
    STRS, // Number to string
    STRS_H, // Number to hex string
    STRINGS, // Repeat string x times

    // Keyboard/mouse
    INKEY, // Wait for character code, timeout
    INKEYS, // Wait for character, timeout
    GET, // Grab next character code, no timeout
    GETS, // Grab next character, no timeout
    MOUSE, // Get mouse x,y and button state

    // System
    TIME, // Clock in centi-seconds
    TIMES, // Return time in nice format

    LAST
};

class Bytecode {
public:
    Bytecodes opcode;
    Type type;
    int data;
    UINT32 line_number;
    short char_position;
    short file_number;

    inline bool is_local_variable() { return data & LocalVariableFlag; }
    inline UINT32 global_index() { return data; }
    inline UINT32 local_index() { return data ^ LocalVariableFlag; }

    std::string filename()
    {
        return g_env.get_filename_by_number(file_number);
    }
};

class BytecodeContainer {
public:
    UINT32 pc = 0; // Program counter

    std::vector<Bytecode>& get_code() { return code; }
    void set_code(std::vector<Bytecode>& new_code) { }
    Bytecode& get_bytecode(size_t i) { return code[i]; }
    Bytecode& get_current_bytecode() { return code[pc]; }
    Bytecode& get_previous_bytecode() { return code[pc - 1]; }
    void next() { pc++; }
    void clear() { code.clear(); }

    UINT32 get_size() { return static_cast<UINT32>(code.size()); }

    void build_bytecode()
    {
        pc = 0;
    }

    void insert_instruction(UINT32 line_number, short file_number, short char_position, bool write, Bytecodes bytecode, Type type, UINT32 operand)
    {
        if (write) {
            Bytecode b;
            b.opcode = bytecode;
            b.type = type;
            b.data = operand;
            b.line_number = line_number;
            b.file_number = file_number;
            b.char_position = char_position;
            code.push_back(std::move(b));
        }
        pc++;
    }

    void insert_bytecode(UINT32 line_number, short file_number, short char_position, bool write, Bytecodes bytecode, Type type)
    {
        if (write) {
            Bytecode b;
            b.opcode = bytecode;
            b.type = type;
            b.data = 0;
            b.line_number = line_number;
            b.file_number = file_number;
            b.char_position = char_position;
            code.push_back(std::move(b));
        }
        pc++;
    }

private:
    std::vector<Bytecode> code; // Instructions, which are opcode and optional data
};