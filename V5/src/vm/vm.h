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
    void opcode_CONST_I();
    void opcode_LOAD_F();
    void opcode_LOAD_I();
    void opcode_LOAD_S();
    void opcode_ADD_F();
    void opcode_ADD_I();
    void opcode_ADD_S();
    void opcode_SUBTRACT_F();
    void opcode_SUBTRACT_I();
    void opcode_MULTIPLY_F();
    void opcode_MULTIPLY_I();
    void opcode_POWER_I();
    void opcode_POWER_F();
    void opcode_DIVIDE_F();
    void opcode_DIVIDE_I();
    void opcode_SHL();
    void opcode_SHR();
    void opcode_I_TO_F();
    void opcode_I_TO_F2();
    void opcode_F_TO_I();
    void opcode_F_TO_I2();
    void opcode_STORE_I();
    void opcode_STORE_F();
    void opcode_STORE_S();
    void opcode_PRINT_F();
    void opcode_PRINT_I();
    void opcode_PRINT_S();
    void opcode_INPUT_F();
    void opcode_INPUT_I();
    void opcode_INPUT_S();
    void opcode_PRINT_NL();
    void opcode_PRINT_SPC();
    void opcode_LOAD_F_ARRAY();
    void opcode_LOAD_I_ARRAY();
    void opcode_LOAD_S_ARRAY();
    void opcode_STORE_F_ARRAY();
    void opcode_STORE_I_ARRAY();
    void opcode_STORE_S_ARRAY();
    void opcode_STORE_I_FIELD();
    void opcode_STORE_F_FIELD();
    void opcode_STORE_S_FIELD();
    void opcode_LOAD_I_FIELD();
    void opcode_LOAD_F_FIELD();
    void opcode_LOAD_S_FIELD();
    void opcode_LOAD_I_FIELD_ARRAY();
    void opcode_LOAD_F_FIELD_ARRAY();
    void opcode_LOAD_S_FIELD_ARRAY();
    void opcode_STORE_I_FIELD_ARRAY();
    void opcode_STORE_F_FIELD_ARRAY();
    void opcode_STORE_S_FIELD_ARRAY();
    void opcode_NEW_TYPE();
    void opcode_ARRAYSIZE();
    void opcode_DIM_F();
    void opcode_DIM_I();
    void opcode_DIM_S();
    void opcode_DUP_I();
    void opcode_DUP_F();
    void opcode_ROT_I();
    void opcode_ROT_F();
    void opcode_FOR_I();
    void opcode_FOR_F();
    void opcode_NEXT_I();
    void opcode_NEXT_F();
    void opcode_FORIN_I();
    void opcode_FORIN_F();
    void opcode_FORIN_S();
    void opcode_NEXTIN_I();
    void opcode_NEXTIN_F();
    void opcode_NEXTIN_S();

    void opcode_READ_I();
    void opcode_REPEAT();
    void opcode_READ_F();
    void opcode_READ_S();
    void opcode_READ_I_ARRAY();
    void opcode_READ_F_ARRAY();
    void opcode_READ_S_ARRAY();
    void opcode_RESTORE();

    void opcode_SWAP_I();
    void opcode_SWAP_F();
    void opcode_SWAP_S();

    void opcode_CMP_E_F();
    void opcode_CMP_E_I();
    void opcode_CMP_E_S();
    void opcode_CMP_NE_F();
    void opcode_CMP_NE_I();
    void opcode_CMP_NE_S();
    void opcode_CMP_GE_F();
    void opcode_CMP_GE_I();
    void opcode_CMP_GE_S();
    void opcode_CMP_LE_F();
    void opcode_CMP_LE_I();
    void opcode_CMP_LE_S();
    void opcode_CMP_G_F();
    void opcode_CMP_G_I();
    void opcode_CMP_G_S();
    void opcode_CMP_L_F();
    void opcode_CMP_L_I();
    void opcode_CMP_L_S();
    void opcode_BOOL_OR();
    void opcode_BOOL_AND();
    void opcode_BOOL_EOR();
    void opcode_BOOL_NOT();
    void opcode_JNEREP();
    void opcode_JUMP();
    void opcode_JNE();
    void opcode_JE();
    void opcode_CALL();
    void opcode_RETURN();
    void opcode_GOTO();
    void opcode_GOSUB();
    void opcode_UNPACK_F();
    void opcode_UNPACK_I();
    void opcode_UNPACK_S();
    void opcode_CASE_C();
    void opcode_CASE_S();
    void opcode_CJUMPT();
    void opcode_DIV_I();
    void opcode_DIV_F();
    void opcode_MOD_I();
    void opcode_MOD_F();
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
    void opcode_ABS_I();
    void opcode_ABS_F();
    void opcode_SGN();
    void opcode_PI();

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