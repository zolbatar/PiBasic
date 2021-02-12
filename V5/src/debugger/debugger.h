#pragma once
#include "../graphics/graphics.h"
#include "../types.h"
#include "../vm/bytecode.h"
#include "../vm/vm.h"
#include <exception>
#include <memory>
#include <string>
#include <vector>
#include <list>

extern Environment g_env;
extern VM* g_vm;
const int debugger_height = 30;
const int open_height = 300;
const int debugger_lines = 11;
const int log_lines = 14;
const int disassembly_font = 1;
const int prop_font = 10;
const int menu_font = 11;

enum class KeywordCategory {
    OPERATORS,
    KEYBOARD_AND_MOUSE,
    MATHS_AND_NUMBERS,
    GRAPHICS_2D,
    GRAPHICS_3D,
    FILE_IO,
    CONDITIONAL_LOOPING,
    FN_AND_PROC,
    VARIABLES_TYPES,
    STRING,
    DEBUGGING,
    BOOLEAN,
};

struct Disassembly {
    std::string header;
    std::string opcode;
    std::string type;
    std::string operand;
};

class Debugger {
public:
    Debugger();

private:
    void debugger_prompt(std::string key, std::string function, bool active);
    void debugger_manual();
    void debugger_manual_keyword(std::string keyword);
    void debugger_disassembly();
    void debugger_log();
    void debugger_variables();
    int debugger_manual_keyword_section(KeywordCategory category, int* index, int selected, std::string* selected_keyword);
    Disassembly disassemble_instruction(Bytecode& bc, UINT32 i);
    void name_for_operand(Disassembly& ret, Bytecode& bcc, UINT32 i);
    void address_for_jump(Disassembly& ret, Bytecode& bcc);
    std::string get_name_for_operand(Bytecode& bc, UINT32 i);
    std::vector<Disassembly> disassemble_entire_file();
    void debugger_options(int selected, int open_mode);

    Boxed* get_variable_bc(Bytecode& bc, UINT32 pc)
    {
        if (bc.is_local_variable()) {
            // Find the function we are in
            for (auto it = g_vm->functions.begin(); it != g_vm->functions.end(); ++it) {
                if (pc >= (*it).pc_start && pc <= (*it).pc_end) {
                    return &it->locals[bc.data ^ LocalVariableFlag];
                }
            }
        } else {
            return g_vm->helper_variables().get_variable(bc);
        }
        throw std::runtime_error("Unable to find variable");
    }
};