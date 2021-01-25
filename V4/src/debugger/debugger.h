#pragma once
#include "../graphics/graphics.h"
#include "../types.h"
#include "../vm/bytecode.h"
#include "../vm/vm.h"
#include <memory>
#include <string>
#include <vector>

extern std::unique_ptr<VM> g_vm;
extern std::unique_ptr<Graphics> g_graphics;
extern std::unique_ptr<std::stringstream> g_logfile;
extern bool interactive;

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
    std::string operand;
    std::string description;
};

class Debugger {
public:
    Debugger();

private:
    void debugger_prompt(std::string key, std::string function, bool active);
    void debugger_manual();
    void debugger_manual_keyword(std::string keyword);
    void debugger_disassembly();
    void debugger_variables();
    int debugger_manual_keyword_section(KeywordCategory category, int* index, int selected, std::string* selected_keyword);
    Disassembly disassemble_instruction(Bytecode* bc, UINT32 i);
    void name_for_operand(Disassembly& ret, Bytecode* bcc, UINT32 i);
    void address_for_jump(Disassembly& ret, Bytecode* bcc);
    std::string get_name_for_operand(Bytecode *bc, UINT32 i);
    std::vector<Disassembly> disassemble_entire_file();
    void debugger_options(int selected, int open_mode);

    Boxed* get_variable_bc(Bytecode *bc, UINT32 pc)
    {
        if (bc->is_local_variable()) {
            // Find the function we are in
            for (auto it = g_vm->functions.begin(); it != g_vm->functions.end(); ++it) {
                if (pc >= (*it).pc_start && pc <= (*it).pc_end) {
                    auto fl = g_vm->get_function_local((*it).id);
                    int index = bc->data ^ LocalVariableFlag;
                    auto v = fl[index];
                    return &v;
                }
            }
        } else {
            auto a1 = g_vm->get_variables();
            auto a2 = a1->get_variable(bc);
            return a2;
        }
    }
};