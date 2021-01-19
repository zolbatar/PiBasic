#ifndef __BYTECODE_VM_H
#define __BYTECODE_VM_H

#include "parser.h"

//#define RUNTIME_DEBUG
//#define CHECKED_STACKS
#define STACK_SIZE 64

enum EFixUpType {
    FIXUP_FOR,
    FIXUP_DATA,
    FIXUP_REPEAT,
    FIXUP_FN,
    FIXUP_PROC
};

struct VM_FixUp {
    enum EFixUpType type;
    char *proc_or_fn;
    struct Variable *variable;
    struct Variable **variable_list;
    bool *variables_are_return;
    UINT32 variable_count;
    UINT32 bytecode_position;
    struct StatementEntry *entry;
    struct VM_FixUp *next;
    UINT32 line_number;
};

struct Boxed {
    bool constant;
    char *name;
    VM_INT value_int;
    VM_FLOAT value_float;
    struct VariableString value_string;
    VM_INT *value_int_array;
    VM_FLOAT *value_float_array;
    struct VariableString *value_string_array;
};

struct Bytecode {
    BYTE opcode;
    UINT32 data;
};

typedef struct
{
    struct Bytecode *code;  // Instruction, which is opcode and optional data
    UINT32 size;            // Size in bytecodes
    UINT32 pc;              // Program counter

    VM_INT stack[STACK_SIZE];  // Virtual stack (int)
    UINT32 sp;                 // Stack pointer (int)

    VM_FLOAT fstack[STACK_SIZE];  // Virtual stack (float)
    UINT32 fsp;                   // Stack pointer (float)

    UINT32 cstack[STACK_SIZE];  // Virtual stack (call)
    UINT32 csp;                 // Stack pointer (call)

    struct VariableString sstack[STACK_SIZE];  // Virtual stack (strings)
    UINT32 ssp;                                // Stack pointer (strings)

    struct Boxed boxed[STACK_SIZE];  // Virtual stack (boxed)
    UINT32 bsp;                      // Stack pointer (boxed)

    // Fixup stuff
    struct VM_FixUp *fixup_first;
    struct VM_FixUp *data_position;

    // Variables
    struct Boxed *variable_list;
} VM;

enum {
    NOP,
    HALT,  // Stop program

    // Load/store
    CONST_I,          // Constant int
    LOAD_F,           // Load float
    LOAD_I,           // Load int
    LOAD_S,           // Load string
    STORE_F,          // Store float
    STORE_I,          // Store int
    STORE_S,          // Store string
    STORE_I_STORAGE,  // Storage for ints
    STORE_I_ARRAY,    // Store int in array
    STORE_F_ARRAY,    // Store float in array
    STORE_S_ARRAY,    // Store string in array
    LOAD_I_ARRAY,     // Load int from array
    LOAD_F_ARRAY,     // Load float from array
    LOAD_S_ARRAY,     // Load string from array

    // Data
    DIM_F,          // Dimension real array
    DIM_I,          // Dimension int array
    DIM_I_STORAGE,  // Dimension storage
    DATA,           // Request DATA

    // Conversion
    I_TO_F,  // Int -> float
    F_TO_I,  // Float -> int
    I_TO_S,  // Int -> string
    F_TO_S,  // Float -> string
    CONV_I,  // Data int
    CONV_F,  // Data float
    CONV_S,  // Data string

    // Moving to type stack
    UNPACK_F,  // Store parameter stack float in variable
    UNPACK_I,  // Store parameter stack int in variable
    UNPACK_S,  // Store parameter stack string in variable
    PAR_I,     // Int -> parameter stack
    PAR_F,     // Float -> parameter stack
    PAR_S,     // String -> parameter stack

    // Flow control
    PUSH_PC,      // Push current PC
    JUMP,         // Jump
    CALL,         // Call
    RETURN,       // Return from PROC
    RETURN_FN,    // Return from FN
    RETURN_DATA,  // Return from DATA
    NEXT_I,       // Next loop int
    NEXT_F,       // Next loop float
    JNE,          // Jump <>
    CMP_E_F,      // Compare if =, float
    CMP_E_I,      // Compare if =, int
    CMP_E_S,      // Compare if =, string
    CMP_NE_F,     // Compare if <>, float
    CMP_NE_I,     // Compare if <>, int
    CMP_NE_S,     // Compare if <>, string
    CMP_GE_F,     // Compare if >=, float
    CMP_GE_I,     // Compare if >=, int
    CMP_LE_F,     // Compare if <=, float
    CMP_LE_I,     // Compare if <=, int
    CMP_G_F,      // Compare if >, float
    CMP_G_I,      // Compare if >, int
    CMP_L_F,      // Compare if <, float
    CMP_L_I,      // Compare if <, int
    OR_F,         // Logical OR, float
    OR_I,         // Logical OR, int

    // Maths
    DUP_F,       // Duplicate float
    DUP_I,       // Duplicate int
    ROT_F,       // Rotate top two float
    ROT_I,       // Rotate top two int
    ADD_F,       // Add floats
    ADD_I,       // Add ints
    ADD_S,       // Add strings
    DIVIDE_F,    // Divide floats
    DIVIDE_I,    // Divide ints
    MULTIPLY_F,  // Multiply floats
    MULTIPLY_I,  // Multiply ints
    SUBTRACT_F,  // Subtract floats
    SUBTRACT_I,  // Subtract ints
    DIV_I,       // Quotient ints
    DIV_F,       // Quotient floats
    MOD_I,       // Modulo ints
    MOD_F,       // Modulo floats
    SQR,         // Square root
    LN,          // Natural log
    EXP,         // Exponential
    ATN,         // Arc tangent
    TAN,         // Tangent
    COS,         // Cosine
    SIN,         // Sine
    RND,         // Random number
    ABS_I,       // Absolute int
    ABS_F,       // Absolute float

    // String
    CHRS,     // CHR$
    MIDS,     // MID$
    RIGHTS,   // RIGHT$
    LEFTS,    // LEFT$
    LEN,      // Length of string
    STRINGS,  // STRING$

    // Printing
    PRINT_I,    // Print int
    PRINT_F,    // Print float
    PRINT_S,    // Print float
    PRINT_NL,   // Print newline
    PRINT_HEX,  // Print next number as hex

    // System calls
    SYS,
    LAST,
};

enum {
    SYS_TIME,
    SYS_OSCLI,
    SYS_MODE,
    SYS_MODE_STRING,
    SYS_VDU,
    SYS_VDU_WORD,
    SYS_VDU_BYTE,
    SYS_GCOL,
    SYS_PLOT,
    SYS_SPC,
    SYS_SYS,
    SYS_LAST,
};

extern VM *run_vm;
struct Bytecode *bc;
struct Boxed *get_variable();
struct VariableString *stack_pop_string();
void stack_push_int(VM_INT v);
void stack_push_float(VM_FLOAT v);
void stack_push_string(struct VariableString *v);
void stack_push_call(UINT32 v);
UINT32 stack_pop_call();
VM_INT stack_pop_int();
VM_FLOAT stack_pop_float();
void *delete_VM(VM *vm);
void run(VM *vm);
void stack_bytedump(VM *vm);
void opcode_SYS();
unsigned long long get_clock();
void graphics_update();
void init_clock();

extern bool graphics_initialised;

// graphics calls
void SYS_init();
void opcode_SYS_Time();
void opcode_SYS_OSCLI();
void opcode_SYS_GraphicsMode();
void opcode_SYS_GraphicsMode_STRING();
void opcode_SYS_GraphicsVDU();
void opcode_SYS_GraphicsVDUByte();
void opcode_SYS_GraphicsVDUWord();
void opcode_SYS_GraphicsPlot();
void opcode_SYS_GCOL();
void opcode_SYS_SPC();

#endif