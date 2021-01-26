#pragma once
#include "../types.h"
#include "boxed.h"
#include <map>
#include <sstream>

const int LocalVariableFlag = 1 << 31;
extern std::map<std::string, int> files_index;

enum class Bytecodes {
    NOP,
    TRACEON, // Start debug tracing
    TRACEOFF, // Stop debug tracing
    BREAKPOINT, // Open up debugging
    HALT, // Stop program
    CHAIN, // Load next program

    // Load/store
    DROP, // Drop top item
    CONST_I, // Fast int constant push
    CONST_I_VAR, // Fast int constant push (points to variable)
    LOAD_F, // Load float
    LOAD_I, // Load int
    LOAD_S, // Load string
    STORE_F, // Store float
    STORE_I, // Store int
    STORE_S, // Store string
    STORE_I_ARRAY, // Store int in array
    STORE_F_ARRAY, // Store float in array
    STORE_S_ARRAY, // Store string in array
    LOAD_I_ARRAY, // Load int from array
    LOAD_F_ARRAY, // Load float from array
    LOAD_S_ARRAY, // Load string from array
    ARRAYSIZE, // Return array size
    DIM_F, // Dimension real array
    DIM_I, // Dimension int array
    DIM_S, // Dimension string array
    NEW_TYPE, // Do any init needed on a type
    LOAD_I_FIELD, // Load int from field
    LOAD_F_FIELD, // Load float from field
    LOAD_S_FIELD, // Load string from field
    LOAD_I_FIELD_ARRAY, // Load int from field (array)
    LOAD_F_FIELD_ARRAY, // Load float from field (array)
    LOAD_S_FIELD_ARRAY, // Load string from field (array)
    STORE_I_FIELD, // Store int in field
    STORE_F_FIELD, // Store float in field
    STORE_S_FIELD, // Store string in field
    STORE_I_FIELD_ARRAY, // Store int in field array
    STORE_F_FIELD_ARRAY, // Store float in field array
    STORE_S_FIELD_ARRAY, // Store string in field array

    // Function parameter
    UNPACK_F, // Store parameter stack float in variable
    UNPACK_I, // Store parameter stack int in variable
    UNPACK_S, // Store parameter stack string in variable

    // Data
    READ_I, // Request int DATA
    READ_F, // Request float DATA
    READ_S, // Request string DATA
    READ_I_ARRAY, // Request int array DATA
    READ_F_ARRAY, // Request float array DATA
    READ_S_ARRAY, // Request string array DATA
    RESTORE, // Reset data pointer

    // Conversion
    I_TO_F, // Int -> float
    I_TO_F2, // Int -> float (2nd below top)
    F_TO_I, // Float -> int
    F_TO_I2, // Float -> int (2nd below top)
    I_TO_S, // Int -> string
    F_TO_S, // Float -> string

    // Looping and flow control
    FOR_I, // For (int)
    FOR_F, // For (float)
    NEXT_I, // Next loop int
    NEXT_F, // Next loop float
    FORIN_I, // For In (int)
    FORIN_F, // For In (float)
    FORIN_S, // For In (string)
    NEXTIN_I, // Next (int) loop int
    NEXTIN_F, // Next (float) loop int
    NEXTIN_S, // Next (string) loop int
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
    DUP_F, // Duplicate float
    DUP_I, // Duplicate int
    ROT_F, // Rotate top two float
    ROT_I, // Rotate top two int
    ADD_F, // Add floats
    ADD_I, // Add ints
    ADD_S, // Add strings
    DIVIDE_F, // Divide floats
    DIVIDE_I, // Divide ints
    MULTIPLY_F, // Multiply floats
    MULTIPLY_I, // Multiply ints
    SUBTRACT_F, // Subtract floats
    SUBTRACT_I, // Subtract ints

    // Swapping
    SWAP_I, // Swap integer
    SWAP_F, // Swap float
    SWAP_S, // Swap string

    // Printing and inputting
    PRINT_I, // Print int
    PRINT_F, // Print float
    PRINT_S, // Print string
    PRINT_NL, // Print newline
    PRINT_SPC, // Print spaces
    INPUT_I, // Input int
    INPUT_F, // Input float
    INPUT_S, // Input string

    // Boolean and comparison
    CMP_E_F, // Compare if =, float
    CMP_E_I, // Compare if =, int
    CMP_E_S, // Compare if =, string
    CMP_NE_F, // Compare if <>, float
    CMP_NE_I, // Compare if <>, int
    CMP_NE_S, // Compare if <>, string
    CMP_GE_I, // Compare if >=, int
    CMP_GE_F, // Compare if >=, float
    CMP_GE_S, // Compare if >=, string
    CMP_LE_F, // Compare if <=, float
    CMP_LE_I, // Compare if <=, int
    CMP_LE_S, // Compare if <=, string
    CMP_G_F, // Compare if >, float
    CMP_G_I, // Compare if >, int
    CMP_G_S, // Compare if >, string
    CMP_L_F, // Compare if <, float
    CMP_L_I, // Compare if <, int
    CMP_L_S, // Compare if <, string
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

    DIV_I, // Quotient ints
    DIV_F, // Quotient floats
    SHL, // Shift left
    SHR, // Shift right
    MOD_I, // Modulo ints
    MOD_F, // Modulo floats
    SQR, // Square root
    LN, // Natural log
    LOG, // Logarithm
    EXP, // Exponential
    ATN, // Arc tangent
    TAN, // Tangent
    COS, // Cosine
    SIN, // Sine
    ABS_I, // Absolute int
    ABS_F, // Absolute float
    ACS, // Arc cosine
    ASN, // Arc sine
    DEG, // Radians to degrees
    RAD, // Degrees to radians
    SGN, // Get sign of number
    PI, // The constant PI

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
    UINT32 data;
    UINT32 line_number;
    short file_number;

    inline bool is_local_variable() { return data & LocalVariableFlag; }
    inline UINT32 global_index() { return data; }
    inline UINT32 local_index() { return data ^ LocalVariableFlag; }

    std::string filename()
    {
        std::vector<std::string> file_names;
        for (auto it = files_index.begin(); it != files_index.end(); ++it) {
            file_names.push_back((*it).first);
        }
        return file_names[file_number];
    }

    std::string location_string()
    {
        std::stringstream s;
        s << " at line " << line_number << ", file '" << filename() + "'";
        return s.str();
    }
};

class BytecodeContainer {
public:
    UINT32 pc = 0; // Program counter
    UINT32 size = 0; // Size of bytecode

    Bytecode& get_bytecode(size_t i) { return code[i]; }
    Bytecode& get_current_bytecode() { return code[pc++]; }

    void build_bytecode()
    {
        size = pc;
        pc = 0;
    }

    void insert_instruction(UINT32 line_number, short file_number, bool write, Bytecodes bytecode, UINT32 operand)
    {
        if (write) {
            Bytecode b;
            b.opcode = bytecode;
            b.data = operand;
            b.line_number = line_number;
            b.file_number = file_number;
            code.push_back(std::move(b));
        }
        pc++;
    }

    void insert_bytecode(UINT32 line_number, short file_number, bool write, Bytecodes bytecode)
    {
        if (write) {
            Bytecode b;
            b.opcode = bytecode;
            b.data = 0;
            b.line_number = line_number;
            b.file_number = file_number;
            code.push_back(std::move(b));
        }
        pc++;
    }

private:
    std::vector<Bytecode> code; // Instructions, which are opcode and optional data
};