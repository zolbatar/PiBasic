#pragma once
#include "../exception.h"
#include "../graphics/graphics.h"
#include "../types.h"
#include "boxed.h"
#include "bytecode.h"
#include "performance.h"
#include "stack.h"
#include "variables.h"
#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <stack>
#include <stdlib.h>
#include <string>
#include <vector>

const int GosubCallFlag = 1 << 31;

typedef struct
{
    int id;
    UINT32 pc_start;
    UINT32 pc_end;
    Type type;
} VMFunction;

class VM {
public:
    std::string run();
    bool compile_successful = false;
    void inject_variables(std::vector<Boxed> variables);
    void add_data(Boxed boxed) { data.push_back(std::move(boxed)); }
    void resize_function_locals(int c) { function_locals.resize(c); };
    std::vector<Boxed>& get_function_locals(int idx) { return function_locals[idx]; }
    UINT32 get_function_locals_count(int idx) { return static_cast<UINT32>(function_locals[idx].size()); }
    std::vector<VMFunction> functions;
    std::vector<Boxed> get_function_local(size_t id) { return function_locals[id]; }

    // Return the "helper" classes
    Variables& helper_variables() { return variables; }
    BytecodeContainer& helper_bytecodes() { return bc_container; }
    Stack& helper_stack() { return stack; }

    // Files
    std::vector<std::string> get_filenames() { return files; }
    void add_filename(std::string filename) { files.push_back(filename); }

private:
    Variables variables;
    Stack stack;
    Bytecode bc;
    BytecodeContainer bc_container;
    bool runtime_debug = false;

    // Files
    std::vector<std::string> files;

    // Error handling
    void error(std::string err)
    {
        throw DARICException(ErrorLocation::RUNTIME, bc.filename(), bc.line_number, bc.char_position, err);
    }
    void opcode_type_error()
    {
        throw DARICException(ErrorLocation::RUNTIME, bc.filename(), bc.line_number, bc.char_position, "Invalid type for opcode");
    }

    std::stack<UINT32> repeats; // Repeat addresses
    std::stack<UINT32> call_stack; // Call stack

    // Locals for a function, this is used for name lookup in disassembly
    std::vector<std::vector<Boxed>> function_locals;

    // Data statements
    std::vector<Boxed> data; // Data statements
    std::vector<Boxed>::iterator data_iterator;

    // Files
    int channel_index = 1;
    std::map<VM_INT, FILE*> channels;

    // Print stuff to emulate the BBC BASIC PRINT statement as much as possible
    int tab_spacing = 10;
    bool print_right_justify = false;
    bool print_hex = false;

    // Case statements
    bool case_flag = false;

    // The actual opcodes methods
    void opcode_HALT();
    void opcode_DROP();
    void opcode_FASTCONST();

    // Loading and storing
    void opcode_LOAD();
    void opcode_STORE();

    // Arrays
    void opcode_DIM();
    void opcode_ARRAYSIZE();
    void opcode_LOAD_ARRAY();
    void opcode_STORE_ARRAY();

    // Types and fields
    void opcode_STORE_FIELD();
    void opcode_LOAD_FIELD();
    void opcode_LOAD_FIELD_ARRAY();
    void opcode_STORE_FIELD_ARRAY();
    void opcode_NEW_TYPE();

    // Maths
    void opcode_ADD();
    void opcode_SUBTRACT();
    void opcode_MULTIPLY();
    void opcode_POWER();
    void opcode_DIVIDE();
    void opcode_SHL();
    void opcode_SHR();
    void opcode_DIV();
    void opcode_MOD();
    void opcode_SQR();
    void opcode_LN();
    void opcode_LOG();
    void opcode_EXP();
    void opcode_ATN();
    void opcode_TAN();
    void opcode_COS();
    void opcode_SIN();
    void opcode_ACS();
    void opcode_ASN();
    void opcode_DEG();
    void opcode_RAD();
    void opcode_ABS();
    void opcode_SGN();
    void opcode_PI();


    // Type conversion
    void opcode_I_TO_F();
    void opcode_I_TO_F2();
    void opcode_F_TO_I();
    void opcode_F_TO_I2();

    // Input and print
    void opcode_PRINT();
    void opcode_INPUT();
    void opcode_PRINT_NL();
    void opcode_PRINT_SPC();

    // Stack operations
    void opcode_DUP();
    void opcode_ROT();

    // Looping
    void opcode_FOR();
    void opcode_NEXT();
    void opcode_FORIN();
    void opcode_NEXTIN();
    void opcode_REPEAT();
    void opcode_JNEREP();
    void opcode_JUMP();
    void opcode_JNE();
    void opcode_JE();
    void opcode_CASE_C();
    void opcode_CASE_S();
    void opcode_CJUMPT();

    // Functions
    void opcode_CALL();
    void opcode_RETURN();
    void opcode_GOTO();
    void opcode_GOSUB();
    void opcode_UNPACK();

    // Data
    void opcode_READ();
    void opcode_READ_ARRAY();
    void opcode_RESTORE();

    // Swapping values
    void opcode_SWAP();

    /* Comparison and boolean */
    void opcode_CMP_E();
    void opcode_CMP_NE();
    void opcode_CMP_GE();
    void opcode_CMP_LE();
    void opcode_CMP_G();
    void opcode_CMP_L();
    void opcode_BOOL_OR();
    void opcode_BOOL_AND();
    void opcode_BOOL_EOR();
    void opcode_BOOL_NOT();

    // String functions
    void opcode_ASC();
    void opcode_CHRS();
    void opcode_INSTR();
    void opcode_LEFTS();
    void opcode_MIDS();
    void opcode_RIGHTS();
    void opcode_LEN();
    void opcode_VAL();
    void opcode_STRS();
    void opcode_STRS_H();
    void opcode_STRINGS();

    void opcode_TIME();
    void opcode_TIMES();
    void opcode_RND();
    void opcode_RNDREAL();
    void opcode_RNDRANGE();

    void opcode_CLOSE();
    void opcode_OPENIN();
    void opcode_OPENOUT();
    void opcode_OPENUP();
    void opcode_BGET();
    void opcode_BPUT();
    void opcode_EOFH();
    void opcode_PTR();
    void opcode_PTRA();
    void opcode_GETSH();
    void opcode_LISTFILES();

    void opcode_INKEY();
    void opcode_INKEYS();
    void opcode_GET();
    void opcode_GETS();
    void opcode_MOUSE();

    void opcode_CLS();
    void opcode_COLOURRGB();
    void opcode_COLOURHEX();
    void opcode_COLOURBGRGB();
    void opcode_COLOURBGHEX();
    void opcode_COLOUREXPRESSION();
    void opcode_FLIP();
    void opcode_LINE();
    void opcode_CIRCLE();
    void opcode_CIRCLEFILL();
    void opcode_RECTANGLE();
    void opcode_RECTANGLEFILL();
    void opcode_TRIANGLE();
    void opcode_TRIANGLEFILL();
    void opcode_TRIANGLESHADED();
    void opcode_GRAPHICS();
    void opcode_PLOT();
    void opcode_POINT();
    void opcode_CLIP();
    void opcode_CLIPOFF();
    void opcode_SHOWFPS();
    void opcode_SCREENWIDTH();
    void opcode_SCREENHEIGHT();
    void opcode_CREATEFONT();
    void opcode_LOADTYPEFACE();
    void opcode_TEXT();
    void opcode_TEXTRIGHT();
    void opcode_TEXTCENTRE();

    void opcode_CREATEVERTEX();
    void opcode_CREATETRIANGLE();
    void opcode_CREATESHAPE();
    void opcode_CREATEOBJECT();
    void opcode_OBJECTTRANSLATE();
    void opcode_OBJECTROTATE();
    void opcode_OBJECTSCALE();
    void opcode_RENDERFRAME();
    void opcode_DELETEOBJECT();
};
void create_empty_vm();