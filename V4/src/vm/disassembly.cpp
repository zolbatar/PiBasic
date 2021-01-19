#define _CRT_SECURE_NO_WARNINGS
#include "vm.h"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string>

template <typename T>
std::string ToString(T val)
{
    std::stringstream stream;
    stream << val;
    return stream.str();
}

Boxed* VM::get_variable_bc(Bytecode bc, UINT32 i)
{
    if (bc.data & LocalVariableFlag) {

        // Find the function we are in
        for (auto it = functions.begin(); it != functions.end(); ++it) {
            if (i >= (*it).pc_start && i <= (*it).pc_end) {
                auto fl = function_locals[(*it).id];
                int index = bc.data ^ LocalVariableFlag;
                auto v = fl[index];
                return &v;
            }
        }
    } else {
        return &variables[bc.data];
    }
}

const char no_name[] = "No variable name";
const char local[] = "Local variable";

std::string VM::get_name_for_operand(Bytecode bc, UINT32 i)
{
    if (bc.data & LocalVariableFlag) {

        // Find function id
        int func_id = -1;
        for (auto g = functions.begin(); g != functions.end(); ++g) {
            if (g->pc_start <= i && g->pc_end > i) {
                func_id = g->id;
            }
        }
        if (func_id == -1) {
            std::cout << "Panic: unknown function id\n";
            exit(1);
        }

        int id = bc.data ^ LocalVariableFlag;
        auto a = (*get_function_locals(func_id))[id];
        return "Local variable: " + a.name + " (" + ToString(id) + ")";
    } else {
        Boxed* variable = get_variable_bc(bc, i);
        if (variable->name.length() > 0) {
            return variable->name.c_str();
        } else {
            return "No variable name";
        }
    }
}

void VM::name_for_operand(Disassembly& ret, Bytecode bcc, UINT32 i)
{
    std::stringstream ss;
    ss << "[" << get_name_for_operand(bcc, i) << "]";
    ret.operand = ss.str();
}

void VM::address_for_jump(Disassembly& ret, Bytecode bcc)
{
    std::stringstream ss;
    ss << "0x" << std::hex << std::uppercase << bcc.data << std::dec << std::nouppercase;
    ret.operand = ss.str();
}

Disassembly VM::disassemble_instruction(Bytecode bc, UINT32 i)
{
    Disassembly ret;

    // Line header
    std::stringstream ssh;
    ssh << std::uppercase << std::hex << std::setfill('0') << std::setw(8) << i - 1 << " : " << std::nouppercase << std::dec;
    /*    ss << "[" << std::setw(4) << bc.file_number << " : " << std::setw(6) << bc.line_number << " : " << std::uppercase << std::hex << std::setw(8)
       << i - 1 << " : " << std::setw(2) << (int)bc.opcode << "]  " << std::nouppercase << std::dec;*/
    ret.header = ssh.str();

    // Actual opcode and operands
    std::stringstream ss;
    switch (bc.opcode) {
    case Bytecodes::NOP:
        ret.opcode = "NOP";
        ret.description = "No operation";
        break;
    case Bytecodes::HALT:
        ret.opcode = "HALT";
        ret.description = "Stop program";
        break;
    case Bytecodes::TRACEON:
        ret.opcode = "TRACE ON";
        ret.description = "Start tracing";
        break;
    case Bytecodes::TRACEOFF:
        ret.opcode = "TRACE OFF";
        ret.description = "Stop tracing";
        break;
    case Bytecodes::BREAKPOINT:
        ret.opcode = "BREAKPOINT";
        ret.description = "Pause execution and open debugger";
        break;

        // Load & store
    case Bytecodes::DROP:
        ret.opcode = "DROP";
        ret.description = "Drop top value off stack";
        break;
    case Bytecodes::CONST_I:
        ret.opcode = "CONST_I";
        ret.description = "Push constant integer onto stack";
        ss << bc.data;
        ret.operand = ss.str();
        break;
    case Bytecodes::CONST_I_VAR:
        ret.opcode = "CONST_I_VAR";
        ret.description = "Push variable pointer onto stack";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::LOAD_I:
        ret.opcode = "LOAD_I";
        if (get_variable_bc(bc, i)->constant) {
            ret.description = "Push constant integer onto stack";
            ss << get_variable_bc(bc, i)->value_int;
            ret.operand = ss.str();
        } else {
            ret.description = "Push variable integer onto stack";
            name_for_operand(ret, bc, i);
        }
        break;
    case Bytecodes::LOAD_F:
        ret.opcode = "LOAD_F";
        if (get_variable_bc(bc, i)->constant) {
            ret.description = "Push constant float onto stack";
            ss << get_variable_bc(bc, i)->value_float;
            ret.operand = ss.str();
        } else {
            ret.description = "Push variable float onto stack";
            name_for_operand(ret, bc, i);
        }
        break;
    case Bytecodes::LOAD_S:
        ret.opcode = "LOAD_S";
        if (get_variable_bc(bc, i)->constant) {
            ret.description = "Push constant string onto stack";
            ss << "'" << get_variable_bc(bc, i)->value_string << "'";
            ret.operand = ss.str();
        } else {
            ret.description = "Push variable string onto stack";
            name_for_operand(ret, bc, i);
        }
        break;
    case Bytecodes::STORE_I:
        ret.opcode = "STORE_I";
        ret.description = "Store integer value in variable from stack";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::STORE_F:
        ret.opcode = "STORE_F";
        ret.description = "Store float value in variable from stack";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::STORE_S:
        ret.opcode = "STORE_S";
        ret.description = "Store string value in variable from stack";
        name_for_operand(ret, bc, i);
        break;

        // Types
    case Bytecodes::NEW_TYPE:
        ret.opcode = "NEW_TYPE";
        ret.description = "Create variable as TYPEd";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::STORE_I_FIELD:
        ret.opcode = "STORE_I_FIELD";
        ret.description = "Store integer value from stack in TYPE FIELD";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::STORE_F_FIELD:
        ret.opcode = "STORE_F_FIELD";
        ret.description = "Store float value from stack in TYPE FIELD";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::STORE_S_FIELD:
        ret.opcode = "STORE_S_FIELD";
        ret.description = "Store string value from stack in TYPE FIELD";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::STORE_I_FIELD_ARRAY:
        ret.opcode = "STORE_I_FIELD_ARRAY";
        ret.description = "Store integer value from stack in TYPE FIELD";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::STORE_F_FIELD_ARRAY:
        ret.opcode = "STORE_F_FIELD_ARRAY";
        ret.description = "Store float value from stack in TYPE FIELD";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::STORE_S_FIELD_ARRAY:
        ret.opcode = "STORE_S_FIELD_ARRAY";
        ret.description = "Store string value from stack in TYPE FIELD";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::LOAD_I_FIELD:
        ret.opcode = "LOAD_I_FIELD";
        ret.description = "Push integer value from TYPE FIELD onto stack";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::LOAD_F_FIELD:
        ret.opcode = "LOAD_F_FIELD";
        ret.description = "Push float value from TYPE FIELD onto stack";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::LOAD_S_FIELD:
        ret.opcode = "LOAD_S_FIELD";
        ret.description = "Push string value from TYPE FIELD onto stack";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::LOAD_I_FIELD_ARRAY:
        ret.opcode = "LOAD_I_FIELD_ARRAY";
        ret.description = "Push integer value from arrayed TYPE FIELD onto stack";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::LOAD_F_FIELD_ARRAY:
        ret.opcode = "LOAD_F_FIELD_ARRAY";
        ret.description = "Push float value from arrayed TYPE FIELD onto stack";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::LOAD_S_FIELD_ARRAY:
        ret.opcode = "LOAD_S_FIELD_ARRAY";
        ret.description = "Push string value from arrayed TYPE FIELD onto stack";
        name_for_operand(ret, bc, i);
        break;

        // Arrays
    case Bytecodes::DIM_I:
        ret.opcode = "DIM_I";
        ret.description = "DIMension integer array";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::DIM_F:
        ret.opcode = "DIM_F";
        ret.description = "DIMension float array";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::DIM_S:
        ret.opcode = "DIM_S";
        ret.description = "DIMension string array";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::LOAD_I_ARRAY:
        ret.opcode = "LOAD_I_ARRAY";
        ret.description = "Push integer from array onto stack";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::LOAD_F_ARRAY:
        ret.opcode = "LOAD_F_ARRAY";
        ret.description = "Push float from array onto stack";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::LOAD_S_ARRAY:
        ret.opcode = "LOAD_S_ARRAY";
        ret.description = "Push string from array onto stack";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::STORE_I_ARRAY:
        ret.opcode = "STORE_I_ARRAY";
        ret.description = "Store integer from stack in array";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::STORE_F_ARRAY:
        ret.opcode = "STORE_F_ARRAY";
        ret.description = "Store float from stack in array";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::STORE_S_ARRAY:
        ret.opcode = "STORE_S_ARRAY";
        ret.description = "Store string from stack in array";
        name_for_operand(ret, bc, i);
        break;

        // DATA statements
    case Bytecodes::READ_I:
        ret.opcode = "READ_I";
        ret.description = "READ integer from DATA and store in variable";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::READ_F:
        ret.opcode = "READ_F";
        ret.description = "READ float from DATA and store in variable";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::READ_S:
        ret.opcode = "READ_F";
        ret.description = "READ string from DATA and store in variable";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::READ_I_ARRAY:
        ret.opcode = "READ_I_ARRAY";
        ret.description = "READ integer from DATA and store in variable array";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::READ_F_ARRAY:
        ret.opcode = "READ_F_ARRAY";
        ret.description = "READ float from DATA and store in variable array";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::READ_S_ARRAY:
        ret.opcode = "READ_S_ARRAY";
        ret.description = "READ string from DATA and store in variable array";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::RESTORE:
        ret.opcode = "RESTORE";
        ret.description = "RESTORE DATA pointer to start";
        name_for_operand(ret, bc, i);
        break;

        // Calling and return
    case Bytecodes::FORIN_I:
        ret.opcode = "FORIN_I";
        ret.description = "FOR IN, initialise for integer variable array";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::FORIN_F:
        ret.opcode = "FORIN_I";
        ret.description = "FOR IN, initialise for float variable array";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::FORIN_S:
        ret.opcode = "FORIN_S";
        ret.description = "FOR IN, initialise for string variable array";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::NEXTIN_I:
        ret.opcode = "NEXTIN_I";
        ret.description = "NEXT for integer variable array";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::NEXTIN_F:
        ret.opcode = "NEXTIN_F";
        ret.description = "NEXT for float variable array";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::NEXTIN_S:
        ret.opcode = "NEXTIN_S";
        ret.description = "NEXT for string variable array";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::FOR_I:
        ret.opcode = "FOR_I";
        ret.description = "FOR for integer variable";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::FOR_F:
        ret.opcode = "FOR_F";
        ret.description = "FOR for float variable";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::NEXT_I:
        ret.opcode = "NEXT_I";
        ret.description = "NEXT for integer variable";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::NEXT_F:
        ret.opcode = "NEXT_F";
        ret.description = "NEXT for float variable";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::REPEAT:
        ret.opcode = "REPEAT";
        ret.description = "Start of REPEAT loop";
        break;
    case Bytecodes::RETURN:
        ret.opcode = "RETURN";
        ret.description = "RETURN from GOSUB";
        break;
    case Bytecodes::CALL:
        ret.opcode = "CALL";
        ret.description = "Call FN or PROC at address";
        address_for_jump(ret, bc);
        break;
    case Bytecodes::JUMP:
        ret.opcode = "JUMP";
        ret.description = "Jump to address";
        address_for_jump(ret, bc);
        break;
    case Bytecodes::JNE:
        ret.opcode = "JNE";
        ret.description = "Jump to address if integer on stack = 0";
        address_for_jump(ret, bc);
        break;
    case Bytecodes::JNEREP:
        ret.opcode = "JNEREP";
        ret.description = "Jump to REPEAT if integer on stack = 0";
        break;
    case Bytecodes::CASE_C:
        ret.opcode = "CASE_C";
        ret.description = "Clear CASE flag";
        break;
    case Bytecodes::CASE_S:
        ret.opcode = "CASE_S";
        ret.description = "Set CASE flag";
        break;
    case Bytecodes::CJUMPT:
        ret.opcode = "CJUMPT";
        ret.description = "Test for CASE statement, jump to address if integer on stack = 0";
        address_for_jump(ret, bc);
        break;
    case Bytecodes::CHAIN:
        ret.opcode = "CHAIN";
        ret.description = "Chain source file using string value on top of stack";
        break;
    case Bytecodes::GOTO:
        ret.opcode = "GOTO";
        ret.description = "GOTO address for line number";
        address_for_jump(ret, bc);
        break;
    case Bytecodes::GOSUB:
        ret.opcode = "GOTO";
        ret.description = "GOSUB address for line number, storing program counter for RETURN";
        address_for_jump(ret, bc);
        break;

    case Bytecodes::TIME:
        ret.opcode = "TIME";
        break;
    case Bytecodes::TIMES:
        ret.opcode = "TIME$";
        break;
    case Bytecodes::RND:
        ret.opcode = "RND";
        ret.description = "Push float RND (between 0 and 1) onto stack";
        break;
    case Bytecodes::RNDRANGE:
        ret.opcode = "RND_RANGE";
        ret.description = "Pull range from stack, push random integer in range onto stack";
        break;
    case Bytecodes::CLOSE:
        ret.opcode = "CLOSE#";
        break;
    case Bytecodes::OPENIN:
        ret.opcode = "OPENIN#";
        break;
    case Bytecodes::OPENOUT:
        ret.opcode = "OPENOUT#";
        break;
    case Bytecodes::OPENUP:
        ret.opcode = "OPENUP#";
        break;
    case Bytecodes::BGET:
        ret.opcode = "BGET#";
        break;
    case Bytecodes::BPUT:
        ret.opcode = "BPUT#";
        break;
    case Bytecodes::EOFH:
        ret.opcode = "EOF#";
        break;
    case Bytecodes::GETSH:
        ret.opcode = "GET$#";
        break;
    case Bytecodes::PTR:
        ret.opcode = "PTR#";
        ret.description = "Push PTR# integer value onto stack";
        break;
    case Bytecodes::PTRA:
        ret.opcode = "PTR#=";
        ret.description = "Assign PTR# from integer value on stack";
        break;
    case Bytecodes::LISTFILES:
        ret.opcode = "LISTFILES";
        break;

    case Bytecodes::I_TO_F:
        ret.opcode = "I_TO_F";
        ret.description = "Convert integer on stack to float";
        break;
    case Bytecodes::I_TO_F2:
        ret.opcode = "I_TO_F2";
        ret.description = "Convert integer on stack (2nd down) to float";
        break;
    case Bytecodes::F_TO_I:
        ret.opcode = "F_TO_I";
        ret.description = "Convert float on stack to integer";
        break;
    case Bytecodes::F_TO_I2:
        ret.opcode = "F_TO_I2";
        ret.description = "Convert float on stack (2nd down) to integer";
        break;
    case Bytecodes::I_TO_S:
        ret.opcode = "I_TO_S";
        ret.description = "Convert integer on stack to string";
        break;
    case Bytecodes::F_TO_S:
        ret.opcode = "F_TO_S";
        ret.description = "Convert float on stack to string";
        break;
    case Bytecodes::DUP_I:
        ret.opcode = "DUP_I";
        ret.description = "Duplicate integer value on stack";
        break;
    case Bytecodes::DUP_F:
        ret.opcode = "DUP_F";
        ret.description = "Duplicate float value on stack";
        break;
    case Bytecodes::ROT_I:
        ret.opcode = "ROT_I";
        ret.description = "Rotate integer values on stack";
        break;
    case Bytecodes::ROT_F:
        ret.opcode = "ROT_F";
        ret.description = "Rotate float values on stack";
        break;
    case Bytecodes::SHR:
        ret.opcode = "SHR";
        ret.description = "Shift right integer value on stack";
        break;
    case Bytecodes::SHL:
        ret.opcode = "SHL";
        ret.description = "Shift left integer value on stack";
        break;
    case Bytecodes::ADD_I:
        ret.opcode = "ADD_I";
        ret.description = "Add integer values on stack, pushing result";
        break;
    case Bytecodes::ADD_F:
        ret.opcode = "ADD_I";
        ret.description = "Add float values on stack, pushing result";
        break;
    case Bytecodes::ADD_S:
        ret.opcode = "ADD_I";
        ret.description = "Add string values on stack, pushing result";
        break;
    case Bytecodes::SUBTRACT_I:
        ret.opcode = "SUBTRACT_I";
        ret.description = "Substract integer values on stack, pushing result";
        break;
    case Bytecodes::SUBTRACT_F:
        ret.opcode = "SUBTRACT_F";
        ret.description = "Substract float values on stack, pushing result";
        break;
    case Bytecodes::DIVIDE_I:
        ret.opcode = "DIVIDE_I";
        ret.description = "Divide integer values on stack, pushing result";
        break;
    case Bytecodes::DIVIDE_F:
        ret.opcode = "DIVIDE_F";
        ret.description = "Divide float values on stack, pushing result";
        break;
    case Bytecodes::MULTIPLY_I:
        ret.opcode = "MULTIPLY_I";
        ret.description = "Multiply integer values on stack, pushing result";
        break;
    case Bytecodes::MULTIPLY_F:
        ret.opcode = "MULTIPLY_F";
        ret.description = "Multiply float values on stack, pushing result";
        break;
    case Bytecodes::CMP_E_F:
        ret.opcode = "CMP_E_F";
        ret.description = "Compare float values on stack for =";
        break;
    case Bytecodes::CMP_E_I:
        ret.opcode = "CMP_E_I";
        ret.description = "Compare integer values on stack for =";
        break;
    case Bytecodes::CMP_E_S:
        ret.opcode = "CMP_E_S";
        ret.description = "Compare string values on stack for =";
        break;
    case Bytecodes::CMP_NE_F:
        ret.opcode = "CMP_NE_F";
        ret.description = "Compare float values on stack for <>";
        break;
    case Bytecodes::CMP_NE_S:
        ret.opcode = "CMP_NE_S";
        ret.description = "Compare string values on stack for <>";
        break;
    case Bytecodes::CMP_NE_I:
        ret.opcode = "CMP_NE_I";
        ret.description = "Compare integer values on stack for <>";
        break;
    case Bytecodes::CMP_LE_F:
        ret.opcode = "CMP_LE_F";
        ret.description = "Compare integer values on stack for <=";
        break;
    case Bytecodes::CMP_LE_I:
        ret.opcode = "CMP_LE_I";
        ret.description = "Compare float values on stack for <=";
        break;
    case Bytecodes::CMP_LE_S:
        ret.opcode = "CMP_LE_S";
        ret.description = "Compare string values on stack for <=";
        break;
    case Bytecodes::CMP_GE_F:
        ret.opcode = "CMP_GE_F";
        ret.description = "Compare float values on stack for >=";
        break;
    case Bytecodes::CMP_GE_I:
        ret.opcode = "CMP_GE_I";
        ret.description = "Compare integer values on stack for >=";
        break;
    case Bytecodes::CMP_GE_S:
        ret.opcode = "CMP_GE_S";
        ret.description = "Compare string values on stack for >=";
        break;
    case Bytecodes::CMP_G_F:
        ret.opcode = "CMP_G_F";
        ret.description = "Compare float values on stack for >";
        break;
    case Bytecodes::CMP_G_I:
        ret.opcode = "CMP_G_I";
        ret.description = "Compare integer values on stack for >";
        break;
    case Bytecodes::CMP_G_S:
        ret.opcode = "CMP_G_S";
        ret.description = "Compare string values on stack for >";
        break;
    case Bytecodes::CMP_L_F:
        ret.opcode = "CMP_L_F";
        ret.description = "Compare float values on stack for <";
        break;
    case Bytecodes::CMP_L_I:
        ret.opcode = "CMP_L_I";
        ret.description = "Compare integer values on stack for <";
        break;
    case Bytecodes::CMP_L_S:
        ret.opcode = "CMP_L_S";
        ret.description = "Compare string values on stack for <";
        break;

    case Bytecodes::BOOL_OR:
        ret.opcode = "OR";
        break;
    case Bytecodes::BOOL_EOR:
        ret.opcode = "EOR";
        break;
    case Bytecodes::BOOL_AND:
        ret.opcode = "AND";
        break;
    case Bytecodes::BOOL_NOT:
        ret.opcode = "NOT";
        break;

        // Parameters for FN/PROC
    case Bytecodes::UNPACK_I:
        ret.opcode = "UNPACK_I";
        ret.description = "Unpack integer variable from stack into FN/PROC parameter";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::UNPACK_F:
        ret.opcode = "UNPACK_F";
        ret.description = "Unpack float variable from stack into FN/PROC parameter";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::UNPACK_S:
        ret.opcode = "UNPACK_S";
        ret.description = "Unpack string variable from stack into FN/PROC parameter";
        name_for_operand(ret, bc, i);
        break;

    case Bytecodes::PRINT_I:
        ret.opcode = "PRINT_I";
        ret.description = "PRINT integer variable from stack";
        break;
    case Bytecodes::PRINT_F:
        ret.opcode = "PRINT_F";
        ret.description = "PRINT float variable from stack";
        break;
    case Bytecodes::PRINT_S:
        ret.opcode = "PRINT_S";
        ret.description = "PRINT string variable from stack";
        break;
    case Bytecodes::PRINT_NL:
        ret.opcode = "PRINT_NL";
        ret.description = "PRINT new line";
        break;
    case Bytecodes::PRINT_SPC:
        ret.opcode = "PRINT_SPC";
        ret.description = "PRINT SPC spaces";
        break;

    case Bytecodes::MOD_I:
        ret.opcode = "MOD_I";
        ret.description = "MOD integer value from stack";
        break;
    case Bytecodes::MOD_F:
        ret.opcode = "MOD_F";
        ret.description = "MOD float value from stack";
        break;
    case Bytecodes::DIV_F:
        ret.opcode = "DIV_F";
        ret.description = "DIV float value from stack";
        break;
    case Bytecodes::DIV_I:
        ret.opcode = "DIV_I";
        ret.description = "DIV integer value from stack";
        break;

    case Bytecodes::SQR:
        ret.opcode = "SQR";
        break;
    case Bytecodes::LN:
        ret.opcode = "LN";
        break;
    case Bytecodes::LOG:
        ret.opcode = "LOG";
        break;
    case Bytecodes::EXP:
        ret.opcode = "EXP";
        break;
    case Bytecodes::ATN:
        ret.opcode = "ATN";
        break;
    case Bytecodes::TAN:
        ret.opcode = "TAN";
        break;
    case Bytecodes::COS:
        ret.opcode = "COS";
        break;
    case Bytecodes::SIN:
        ret.opcode = "SIN";
        break;
    case Bytecodes::ACS:
        ret.opcode = "ACS";
        break;
    case Bytecodes::ASN:
        ret.opcode = "ASN";
        break;
    case Bytecodes::DEG:
        ret.opcode = "DEG";
        break;
    case Bytecodes::RAD:
        ret.opcode = "RAD";
        break;
    case Bytecodes::ABS_F:
        ret.opcode = "ABS_F";
        ret.description = "ABS for float value on stack";
        break;
    case Bytecodes::ABS_I:
        ret.opcode = "ABS_I";
        ret.description = "ABS for integer value on stack";
        break;
    case Bytecodes::SGN:
        ret.opcode = "SGN";
        break;
    case Bytecodes::PI:
        ret.opcode = "PI";
        break;
    case Bytecodes::SWAP_I:
        ret.opcode = "SWAP_I";
        ret.description = "SWAP for integer variables";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::SWAP_F:
        ret.opcode = "SWAP_F";
        ret.description = "SWAP for float variables";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::SWAP_S:
        ret.opcode = "SWAP_S";
        ret.description = "SWAP for string variables";
        name_for_operand(ret, bc, i);
        break;

    case Bytecodes::ASC:
        ret.opcode = "ASC";
        break;
    case Bytecodes::CHRS:
        ret.opcode = "CHR$";
        break;
    case Bytecodes::INSTR:
        ret.opcode = "INSTR";
        break;
    case Bytecodes::MIDS:
        ret.opcode = "MID$";
        break;
    case Bytecodes::RIGHTS:
        ret.opcode = "RIGHT$";
        break;
    case Bytecodes::LEFTS:
        ret.opcode = "LEFT$";
        break;
    case Bytecodes::LEN:
        ret.opcode = "LEN";
        break;
    case Bytecodes::STRINGS:
        ret.opcode = "STRING$";
        break;
    case Bytecodes::VAL:
        ret.opcode = "VAL";
        break;
    case Bytecodes::STRS:
        ret.opcode = "STR$";
        break;
    case Bytecodes::STRS_H:
        ret.opcode = "STR$_HEX";
        break;

    case Bytecodes::CLS:
        ret.opcode = "2D";
        ret.operand = "CLS";
        break;
    case Bytecodes::COLOURRGB:
        ret.opcode = "2D/3D";
        ret.operand = "COLOUR RGB";
        break;
    case Bytecodes::COLOURHEX:
        ret.opcode = "2D/3D";
        ret.operand = "COLOUR HEX";
        break;
    case Bytecodes::COLOURBGRGB:
        ret.opcode = "2D/3D";
        ret.operand = "COLOUR BACKGROUND RGB";
        break;
    case Bytecodes::COLOURBGHEX:
        ret.opcode = "2D/3D";
        ret.operand = "COLOUR BACKGROUND HEX";
        break;
    case Bytecodes::COLOUREXPRESSION:
        ret.opcode = "2D/3D";
        ret.operand = "COLOUR EXPRESSION";
        break;
    case Bytecodes::FLIP:
        ret.opcode = "2D/3D";
        ret.operand = "FLIP";
        break;
    case Bytecodes::CIRCLE:
        ret.opcode = "2D";
        ret.operand = "CIRCLE";
        break;
    case Bytecodes::CIRCLEFILL:
        ret.opcode = "2D";
        ret.operand = "CIRCLE FILLED";
        break;
    case Bytecodes::RECTANGLE:
        ret.opcode = "2D";
        ret.operand = "RECTANGLE";
        break;
    case Bytecodes::RECTANGLEFILL:
        ret.opcode = "2D";
        ret.operand = "RECTANGLE FILLED";
        break;
    case Bytecodes::TRIANGLE:
        ret.opcode = "2D";
        ret.operand = "TRIANGLE";
        break;
    case Bytecodes::TRIANGLEFILL:
        ret.opcode = "2D";
        ret.operand = "TRIANGLE FILLED";
        break;
    case Bytecodes::TRIANGLESHADED:
        ret.opcode = "2D";
        ret.operand = "TRIANGLE SHADED";
        break;
    case Bytecodes::LINE:
        ret.opcode = "2D";
        ret.operand = "LINE";
        break;
    case Bytecodes::GRAPHICS:
        ret.opcode = "2D/3D";
        ret.operand = "GRAPHICS";
        break;
    case Bytecodes::PLOT:
        ret.opcode = "2D";
        ret.operand = "PLOT";
        break;
    case Bytecodes::POINT:
        ret.opcode = "2D";
        ret.operand = "POINT";
        break;
    case Bytecodes::CLIP:
        ret.opcode = "2D/3D";
        ret.operand = "CLIP ON";
        break;
    case Bytecodes::CLIPOFF:
        ret.opcode = "2D/3D";
        ret.operand = "CLIP OFF";
        break;
    case Bytecodes::SCREENWIDTH:
        ret.opcode = "2D/3D";
        ret.operand = "SCREEN WIDTH";
        break;
    case Bytecodes::SCREENHEIGHT:
        ret.opcode = "2D/3D";
        ret.operand = "SCREEN HEIGHT";
        break;
    case Bytecodes::TEXT:
        ret.opcode = "2D";
        ret.operand = "TEXT";
        break;
    case Bytecodes::TEXTRIGHT:
        ret.opcode = "2D";
        ret.operand = "TEXT RIGHT";
        break;
    case Bytecodes::TEXTCENTRE:
        ret.opcode = "2D";
        ret.operand = "TEXT CENTRE";
        break;
    case Bytecodes::CREATEFONT:
        ret.opcode = "2D";
        ret.operand = "CREATE FONT";
        break;
    case Bytecodes::LOADTYPEFACE:
        ret.opcode = "2D";
        ret.operand = "LOAD TYPEFACE";
        break;

    case Bytecodes::CREATEVERTEX:
        ret.opcode = "3D";
        ret.operand = "CREATE VERTEX";
        break;
    case Bytecodes::CREATETRIANGLE:
        ret.opcode = "3D";
        ret.operand = "CREATE TRIANGLE";
        break;
    case Bytecodes::CREATESHAPE:
        ret.opcode = "3D";
        ret.operand = "CREATE SHAPE";
        break;
    case Bytecodes::CREATEOBJECT:
        ret.opcode = "3D";
        ret.operand = "CREATE OBJECT";
        break;
    case Bytecodes::DELETEOBJECT:
        ret.opcode = "3D";
        ret.operand = "DELETE OBJECT";
        break;
    case Bytecodes::OBJECTTRANSLATE:
        ret.opcode = "3D";
        ret.operand = "OBJECT TRANSLATE";
        break;
    case Bytecodes::OBJECTROTATE:
        ret.opcode = "3D";
        ret.operand = "OBJECT ROTATE";
        break;
    case Bytecodes::OBJECTSCALE:
        ret.opcode = "3D";
        ret.operand = "OBJECT SCALE";
        break;
    case Bytecodes::RENDERFRAME:
        ret.opcode = "3D";
        ret.operand = "RENDER FRAME";
        break;
    case Bytecodes::SHOWFPS:
        ret.opcode = "2D";
        ret.operand = "SHOW FPS";
        break;

    case Bytecodes::INPUT_I:
        ret.opcode = "INPUT_I";
        ret.description = "INPUT for integer variable";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::INPUT_F:
        ret.opcode = "INPUT_F";
        ret.description = "INPUT for float variable";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::INPUT_S:
        ret.opcode = "INPUT_S";
        ret.description = "INPUT for string variable";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::INKEY:
        ret.opcode = "INKEY";
        break;
    case Bytecodes::INKEYS:
        ret.opcode = "INKEY$";
        break;
    case Bytecodes::GET:
        ret.opcode = "GET";
        break;
    case Bytecodes::GETS:
        ret.opcode = "GET$";
        break;
    case Bytecodes::MOUSE:
        ret.opcode = "MOUSE";
        break;

    default:
        std::cout << "Unknown bytecode: " << (int)bc.data << std::endl;
        exit(1);
    }
    return ret;
}

std::vector<Disassembly> VM::disassemble_entire_file()
{
    std::vector<Disassembly> ret(this->size);
    for (UINT32 i = 0; i < this->size; i++) {
        Bytecode bc = code[i];
        auto s = disassemble_instruction(bc, i);
        ret[i] = s;
    }
    return ret;
}
