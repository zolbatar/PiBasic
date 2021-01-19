#pragma once

#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <stack>
#include <string>
#include <vector>

#include "../ast/ast.h"
#include "../graphics/graphics.h"
#include "../types.h"

const int LocalVariableFlag = 1 << 31;
const int GosubCallFlag = 1 << 31;

typedef struct {
    BYTE opcode;
    UINT32 data;
    UINT32 line_number;
    short file_number;
} Bytecode;

class Boxed {
  public:
    Boxed() {}
    Boxed(std::string name, Type type, int index) {
        this->name = name;
        this->type = type;
        this->index = index;
    }
    Type type = Type::None;
    int index;
    bool constant = false;
    bool return_to = false;
    std::string name;
    VM_INT value_int;
    VM_FLOAT value_float;
    VM_STRING value_string;
    std::vector<Boxed> fields;
    std::vector<VM_INT> value_int_array;
    std::vector<VM_FLOAT> value_float_array;
    std::vector<VM_STRING> value_string_array;
};

typedef struct {
    int id;
    UINT32 pc_start;
    UINT32 pc_end;
    Type type;
} VMFunction;

class VM {

  public:
    VM(Graphics *graphics);
    UINT32 get_pc() { return pc; }
    UINT32 get_size() { return size; }
    std::vector<Boxed> *get_variables() { return &variables; }
    void add_data(Boxed boxed) { data.push_back(std::move(boxed)); }
    void build_bytecode() {
        size = pc;
        pc = 0;
    }
    void run();
    void insert_instruction(UINT32 line_number, short file_number, bool write, BYTE bytecode, UINT32 operand);
    void insert_bytecode(UINT32 line_number, short file_number, bool write, BYTE bytecode);
    void bytecode_output(std::ostream *file);
    std::vector<Bytecode> *get_bytecode() { return &code; }
    void resize_function_locals(int c) { function_locals.resize(c); };
    std::vector<Boxed> *get_function_locals(int idx) { return &function_locals[idx]; }
    std::vector<VMFunction> functions;

    Boxed *get_variable_ext(Bytecode bc) {
        if (bc.data & LocalVariableFlag) {
            int index = bc.data ^ LocalVariableFlag;
            return &((*locals)[index]);
        } else {
            return &variables[bc.data];
        }
    };

  private:
    Graphics *graphics;
    Bytecode bc;
    bool runtime_debug;
    static const bool CheckedStacks = true;
    static const bool CheckedTypes = true;
    static const int StackSize = 64;

    std::vector<Bytecode> code; // Instruction, which is opcode and optional data
    UINT32 pc = 0;              // Program counter
    UINT32 size = 0;            // Size of bytecode
    size_t stack_pointer = 0;   // Stack pointer

    std::vector<Boxed> variables;                  // Variables
    std::stack<std::vector<Boxed> *> locals_stack; // Locals stack
    std::vector<Boxed> *locals;                    // Local variables
    std::vector<Boxed> stack;                      // Stack, stored as vectors for speed
    std::stack<UINT32> repeats;                    // Repeat addresses
    std::stack<UINT32> call_stack;                 // Call stack

    // Locals for a function, this is more performant than recreating every time
    std::vector<std::vector<Boxed>> function_locals;

    // Data statements
    std::vector<Boxed> data; // Data statements
    std::vector<Boxed>::iterator data_iterator;

    // Files
    int channel_index = 0;
    std::map<VM_INT, FILE *> channels;

    // Variables
    Boxed *get_variable_bc(Bytecode bc);
    std::string get_name_for_operand(Bytecode bc);

    // Various things called from the VM runtime
    Boxed *get_variable() {
        if (bc.data & LocalVariableFlag) {
            int index = bc.data ^ LocalVariableFlag;
            return &((*locals)[index]);
        } else {
            return &variables[bc.data];
        }
    };
    Boxed *get_variable_by_int(int v) {
        if (v & LocalVariableFlag) {
            int index = v ^ LocalVariableFlag;
            return &((*locals)[index]);
        } else {
            return &variables[v];
        }
    };
    void stack_check();
    void stack_push_float(const VM_FLOAT v);
    void stack_push_int(const VM_INT v);
    void stack_push_string(const VM_STRING &v);
    void stack_drop();
    Boxed *stack_pop_boxed();
    VM_FLOAT stack_pop_float();
    VM_INT stack_pop_int();
    VM_STRING stack_pop_string();

    // Print stuff to emulate the BBC BASIC PRINT statement as much as possible
    int tab_spacing = 10;
    bool print_right_justify = false;
    bool print_hex = false;

    // Case statements
    bool case_flag = false;

    // Randoms
    double last_random = 0.0;

    // The actual opcodes methods
    bool opcode_HALT();
    bool opcode_DROP();
    bool opcode_CONST_I();
    bool opcode_LOAD_F();
    bool opcode_LOAD_I();
    bool opcode_LOAD_S();
    bool opcode_ADD_F();
    bool opcode_ADD_I();
    bool opcode_ADD_S();
    bool opcode_SUBTRACT_F();
    bool opcode_SUBTRACT_I();
    bool opcode_MULTIPLY_F();
    bool opcode_MULTIPLY_I();
    bool opcode_DIVIDE_F();
    bool opcode_DIVIDE_I();
    bool opcode_SHL();
    bool opcode_SHR();
    bool opcode_I_TO_F();
    bool opcode_I_TO_F2();
    bool opcode_F_TO_I();
    bool opcode_F_TO_I2();
    bool opcode_STORE_I();
    bool opcode_STORE_F();
    bool opcode_STORE_S();
    bool opcode_PRINT_F();
    bool opcode_PRINT_I();
    bool opcode_PRINT_S();
    bool opcode_INPUT_F();
    bool opcode_INPUT_I();
    bool opcode_INPUT_S();
    bool opcode_PRINT_NL();
    bool opcode_PRINT_SPC();
    bool opcode_LOAD_F_ARRAY();
    bool opcode_LOAD_I_ARRAY();
    bool opcode_LOAD_S_ARRAY();
    bool opcode_STORE_F_ARRAY();
    bool opcode_STORE_I_ARRAY();
    bool opcode_STORE_S_ARRAY();
    bool opcode_STORE_I_FIELD();
    bool opcode_STORE_F_FIELD();
    bool opcode_STORE_S_FIELD();
    bool opcode_LOAD_I_FIELD();
    bool opcode_LOAD_F_FIELD();
    bool opcode_LOAD_S_FIELD();
    bool opcode_LOAD_I_FIELD_ARRAY();
    bool opcode_LOAD_F_FIELD_ARRAY();
    bool opcode_LOAD_S_FIELD_ARRAY();
    bool opcode_STORE_I_FIELD_ARRAY();
    bool opcode_STORE_F_FIELD_ARRAY();
    bool opcode_STORE_S_FIELD_ARRAY();
    bool opcode_STORE_F_ARRAY_FLIP();
    bool opcode_STORE_I_ARRAY_FLIP();
    bool opcode_STORE_S_ARRAY_FLIP();
    bool opcode_NEW_TYPE();
    bool opcode_DIM_F();
    bool opcode_DIM_I();
    bool opcode_DIM_S();
    bool opcode_DUP_I();
    bool opcode_DUP_F();
    bool opcode_ROT_I();
    bool opcode_ROT_F();
    bool opcode_FOR_I();
    bool opcode_FOR_F();
    bool opcode_NEXT_I();
    bool opcode_NEXT_F();
    bool opcode_READ_I();
    bool opcode_REPEAT();
    bool opcode_READ_F();
    bool opcode_READ_S();
    bool opcode_READ_I_ARRAY();
    bool opcode_READ_F_ARRAY();
    bool opcode_READ_S_ARRAY();
    bool opcode_RESTORE();
    bool opcode_CMP_E_F();
    bool opcode_CMP_E_I();
    bool opcode_CMP_E_S();
    bool opcode_CMP_NE_F();
    bool opcode_CMP_NE_I();
    bool opcode_CMP_NE_S();
    bool opcode_CMP_GE_F();
    bool opcode_CMP_GE_I();
    bool opcode_CMP_GE_S();
    bool opcode_CMP_LE_F();
    bool opcode_CMP_LE_I();
    bool opcode_CMP_LE_S();
    bool opcode_CMP_G_F();
    bool opcode_CMP_G_I();
    bool opcode_CMP_G_S();
    bool opcode_CMP_L_F();
    bool opcode_CMP_L_I();
    bool opcode_CMP_L_S();
    bool opcode_BOOL_OR();
    bool opcode_BOOL_AND();
    bool opcode_BOOL_EOR();
    bool opcode_BOOL_NOT();
    bool opcode_JNEREP();
    bool opcode_JUMP();
    bool opcode_JNE();
    bool opcode_JE();
    bool opcode_CALL();
    bool opcode_RETURN();
    bool opcode_GOTO();
    bool opcode_GOSUB();
    bool opcode_UNPACK_F();
    bool opcode_UNPACK_I();
    bool opcode_UNPACK_S();
    bool opcode_CASE_C();
    bool opcode_CASE_S();
    bool opcode_JPOSC();
    bool opcode_DIV_I();
    bool opcode_DIV_F();
    bool opcode_MOD_I();
    bool opcode_MOD_F();
    bool opcode_SQR();
    bool opcode_LN();
    bool opcode_LOG();
    bool opcode_EXP();
    bool opcode_ATN();
    bool opcode_TAN();
    bool opcode_COS();
    bool opcode_SIN();
    bool opcode_ACS();
    bool opcode_ASN();
    bool opcode_DEG();
    bool opcode_RAD();
    bool opcode_ABS_I();
    bool opcode_ABS_F();
    bool opcode_SGN();
    bool opcode_PI();

    bool opcode_ASC();
    bool opcode_CHRS();
    bool opcode_INSTR();
    bool opcode_LEFTS();
    bool opcode_MIDS();
    bool opcode_RIGHTS();
    bool opcode_LEN();
    bool opcode_VAL();
    bool opcode_STRS();
    bool opcode_STRS_H();
    bool opcode_STRINGS();

    bool opcode_TIME();
    bool opcode_TIMES();
    bool opcode_RND();
    bool opcode_RNDRANGE();

    bool opcode_CLOSE();
    bool opcode_OPENIN();
    bool opcode_OPENOUT();
    bool opcode_OPENUP();
    bool opcode_BGET();
    bool opcode_BPUT();
    bool opcode_EOFH();

    bool opcode_INKEY();
    bool opcode_INKEYS();

    bool opcode_CLS();
    bool opcode_COLOURRGB();
    bool opcode_COLOURHEX();
    bool opcode_COLOURBGRGB();
    bool opcode_COLOURBGHEX();
    bool opcode_COLOUREXPRESSION();
    bool opcode_FLIP();
    bool opcode_LINE();
    bool opcode_CIRCLE();
    bool opcode_CIRCLEFILL();
    bool opcode_RECTANGLE();
    bool opcode_RECTANGLEFILL();
    bool opcode_TRIANGLE();
    bool opcode_TRIANGLEFILL();
    bool opcode_TRIANGLESHADED();
    bool opcode_GRAPHICS();
    bool opcode_PLOT();
    bool opcode_CLIP();
    bool opcode_CLIPOFF();
    bool opcode_SCREENWIDTH();
    bool opcode_SCREENHEIGHT();
    bool opcode_CREATEFONT();
    bool opcode_LOADTYPEFACE();
    bool opcode_TEXT();
    bool opcode_TEXTRIGHT();
    bool opcode_TEXTCENTRE();

    bool opcode_CREATEVERTEX();
    bool opcode_CREATETRIANGLE();
    bool opcode_CREATESHAPE();
    bool opcode_CREATEOBJECT();
    bool opcode_OBJECTTRANSLATE();
    bool opcode_OBJECTROTATE();
    bool opcode_OBJECTSCALE();
    bool opcode_RENDERFRAME();
};

enum Tokens {
    NOP,
    TRACEON,  // Start debug tracing
    TRACEOFF, // Stop debug tracing
    HALT,     // Stop program

    // Load/store
    DROP,                // Drop top item
    CONST_I,             // Fast int constant push
    LOAD_F,              // Load float
    LOAD_I,              // Load int
    LOAD_S,              // Load string
    STORE_F,             // Store float
    STORE_I,             // Store int
    STORE_S,             // Store string
    STORE_I_ARRAY,       // Store int in array
    STORE_F_ARRAY,       // Store float in array
    STORE_S_ARRAY,       // Store string in array
    STORE_I_ARRAY_FLIP,  // Store int in array
    STORE_F_ARRAY_FLIP,  // Store float in array
    STORE_S_ARRAY_FLIP,  // Store string in array
    LOAD_I_ARRAY,        // Load int from array
    LOAD_F_ARRAY,        // Load float from array
    LOAD_S_ARRAY,        // Load string from array
    DIM_F,               // Dimension real array
    DIM_I,               // Dimension int array
    DIM_S,               // Dimension string array
    NEW_TYPE,            // Do any init needed on a type
    LOAD_I_FIELD,        // Load int from field
    LOAD_F_FIELD,        // Load float from field
    LOAD_S_FIELD,        // Load string from field
    LOAD_I_FIELD_ARRAY,  // Load int from field (array)
    LOAD_F_FIELD_ARRAY,  // Load float from field (array)
    LOAD_S_FIELD_ARRAY,  // Load string from field (array)
    STORE_I_FIELD,       // Store int in field
    STORE_F_FIELD,       // Store float in field
    STORE_S_FIELD,       // Store string in field
    STORE_I_FIELD_ARRAY, // Store int in field array
    STORE_F_FIELD_ARRAY, // Store float in field array
    STORE_S_FIELD_ARRAY, // Store string in field array

    // Function parameter
    UNPACK_F, // Store parameter stack float in variable
    UNPACK_I, // Store parameter stack int in variable
    UNPACK_S, // Store parameter stack string in variable

    // Data
    READ_I,       // Request int DATA
    READ_F,       // Request float DATA
    READ_S,       // Request string DATA
    READ_I_ARRAY, // Request int array DATA
    READ_F_ARRAY, // Request float array DATA
    READ_S_ARRAY, // Request string array DATA
    RESTORE,      // Reset data pointer

    // Conversion
    I_TO_F,  // Int -> float
    I_TO_F2, // Int -> float (2nd below top)
    F_TO_I,  // Float -> int
    F_TO_I2, // Float -> int (2nd below top)
    I_TO_S,  // Int -> string
    F_TO_S,  // Float -> string

    // Looping and flow control
    FOR_I,  // For (int)
    FOR_F,  // For (float)
    NEXT_I, // Next loop int
    NEXT_F, // Next loop float
    REPEAT, // Store PC for repeat loop
    JNEREP, // Jump <>, repeat
    JUMP,   // Jump
    JNE,    // Jump <>
    JE,     // Jump =
    CALL,   // Call
    RETURN, // Return from PROC
    CASE_C, // Clear CASE flag
    CASE_S, // Clear CASE flag
    JPOSC,  // Jump on positive case
    GOTO,   // Goto line number
    GOSUB,  // Go subroutine

    // Maths
    DUP_F,      // Duplicate float
    DUP_I,      // Duplicate int
    ROT_F,      // Rotate top two float
    ROT_I,      // Rotate top two int
    ADD_F,      // Add floats
    ADD_I,      // Add ints
    ADD_S,      // Add strings
    DIVIDE_F,   // Divide floats
    DIVIDE_I,   // Divide ints
    MULTIPLY_F, // Multiply floats
    MULTIPLY_I, // Multiply ints
    SUBTRACT_F, // Subtract floats
    SUBTRACT_I, // Subtract ints

    // Printing and inputting
    PRINT_I,   // Print int
    PRINT_F,   // Print float
    PRINT_S,   // Print string
    PRINT_NL,  // Print newline
    PRINT_SPC, // Print spaces
    INPUT_I,   // Input int
    INPUT_F,   // Input float
    INPUT_S,   // Input string

    // Boolean and comparison
    CMP_E_F,  // Compare if =, float
    CMP_E_I,  // Compare if =, int
    CMP_E_S,  // Compare if =, string
    CMP_NE_F, // Compare if <>, float
    CMP_NE_I, // Compare if <>, int
    CMP_NE_S, // Compare if <>, string
    CMP_GE_I, // Compare if >=, int
    CMP_GE_F, // Compare if >=, float
    CMP_GE_S, // Compare if >=, string
    CMP_LE_F, // Compare if <=, float
    CMP_LE_I, // Compare if <=, int
    CMP_LE_S, // Compare if <=, string
    CMP_G_F,  // Compare if >, float
    CMP_G_I,  // Compare if >, int
    CMP_G_S,  // Compare if >, string
    CMP_L_F,  // Compare if <, float
    CMP_L_I,  // Compare if <, int
    CMP_L_S,  // Compare if <, string
    BOOL_OR,  // Logical OR, int
    BOOL_AND, // Logical AND, int
    BOOL_EOR, // Logical EOR, int
    BOOL_NOT, // Logical NOT, int

    // System calls
    RND,      // Random number
    RNDRANGE, // Random number in range
    OPENUP,   // Open for update
    OPENIN,   // Open for read
    OPENOUT,  // Open for output
    CLOSE,    // Close file
    BPUT,     // Put byte
    BGET,     // Read byte
    EOFH,     // EOF

    // Graphics calls
    CLS,              // Clear screen
    COLOURRGB,        // Change graphics plot colour (RGB)
    COLOURHEX,        // Change graphics plot colour (HEX)
    COLOURBGRGB,      // Change graphics plot colour (RGB) (background)
    COLOURBGHEX,      // Change graphics plot colour (HEX) (background)
    COLOUREXPRESSION, // Change graphics plot colour (Expression takes RGB)
    FLIP,             // Flip to view render surface
    GRAPHICS,         // Change screen mode
    LINE,             // Line
    RECTANGLE,        // Rectangle
    RECTANGLEFILL,    // Rectangle (filled)
    TRIANGLE,         // Triangle
    TRIANGLEFILL,     // Triangle (filled)
    TRIANGLESHADED,   // Triangle (barycentric)
    CIRCLE,           // Circle
    CIRCLEFILL,       // Circle (filled)
    ELLIPSE,          // Ellipse
    ELLIPSEFILL,      // Ellipse (filled)
    PLOT,             // Plot pixel
    CLIP,             // Clipping rectangle
    CLIPOFF,          // Turn clipping off
    SCREENWIDTH,      // Get screen width
    SCREENHEIGHT,     // Get screen height
    LOADTYPEFACE,     // Load typeface
    CREATEFONT,       // Create font of specific size
    TEXT,             // Render text
    TEXTRIGHT,        // Render text (right aligned)
    TEXTCENTRE,       // Render text (centred)

    // 3D Graphics
    CREATEVERTEX,    // Create a vertex in the 3d engine
    CREATETRIANGLE,  // Create a triangle in the 3d engine
    CREATESHAPE,     // Send the shape to the 3D engine and return an integer handle
    CREATEOBJECT,    // Create 3D object
    OBJECTTRANSLATE, // Move 3D object
    OBJECTROTATE,    // Rotate 3D object
    OBJECTSCALE,     // Scale 3D object
    RENDERFRAME,     // Render the 3D frame

    DIV_I, // Quotient ints
    DIV_F, // Quotient floats
    SHL,   // Shift left
    SHR,   // Shift right
    MOD_I, // Modulo ints
    MOD_F, // Modulo floats
    SQR,   // Square root
    LN,    // Natural log
    LOG,   // Logarithm
    EXP,   // Exponential
    ATN,   // Arc tangent
    TAN,   // Tangent
    COS,   // Cosine
    SIN,   // Sine
    ABS_I, // Absolute int
    ABS_F, // Absolute float
    ACS,   // Arc cosine
    ASN,   // Arc sine
    DEG,   // Radians to degrees
    RAD,   // Degrees to radians
    SGN,   // Get sign of number
    PI,    // The constant PI

    // String
    ASC,     // Get ascii value for first character in string
    CHRS,    // CHR$
    INSTR,   // Search for occurence of string in string
    LEFTS,   // Characters from left of string
    MIDS,    // Characters from inside string
    RIGHTS,  // Characters from right of string
    LEN,     // Length of string
    VAL,     // String to float
    STRS,    // Number to string
    STRS_H,  // Number to hex string
    STRINGS, // Repeat string x times

    // Keyboard/mouse
    INKEY,  // Wait for character code
    INKEYS, // Wait for character

    // System
    TIME,  // Clock in centi-seconds
    TIMES, // Return time in nice format
};