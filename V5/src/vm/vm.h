#pragma once
#include "../graphics/graphics.h"
#include "../types.h"
#include "boxed.h"
#include "bytecode.h"
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
        std::cout << err << bc.location_string() << std::endl;
        exit(1);
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
    bool opcode_NEW_TYPE();
    bool opcode_ARRAYSIZE();
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
    bool opcode_FORIN_I();
    bool opcode_FORIN_F();
    bool opcode_FORIN_S();
    bool opcode_NEXTIN_I();
    bool opcode_NEXTIN_F();
    bool opcode_NEXTIN_S();

    bool opcode_READ_I();
    bool opcode_REPEAT();
    bool opcode_READ_F();
    bool opcode_READ_S();
    bool opcode_READ_I_ARRAY();
    bool opcode_READ_F_ARRAY();
    bool opcode_READ_S_ARRAY();
    bool opcode_RESTORE();

    bool opcode_SWAP_I();
    bool opcode_SWAP_F();
    bool opcode_SWAP_S();

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
    bool opcode_CJUMPT();
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
    bool opcode_RNDREAL();
    bool opcode_RNDRANGE();

    bool opcode_CLOSE();
    bool opcode_OPENIN();
    bool opcode_OPENOUT();
    bool opcode_OPENUP();
    bool opcode_BGET();
    bool opcode_BPUT();
    bool opcode_EOFH();
    bool opcode_PTR();
    bool opcode_PTRA();
    bool opcode_GETSH();
    bool opcode_LISTFILES();

    bool opcode_INKEY();
    bool opcode_INKEYS();
    bool opcode_GET();
    bool opcode_GETS();
    bool opcode_MOUSE();

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
    bool opcode_POINT();
    bool opcode_CLIP();
    bool opcode_CLIPOFF();
    bool opcode_SHOWFPS();
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
    bool opcode_DELETEOBJECT();
};
void create_empty_vm();