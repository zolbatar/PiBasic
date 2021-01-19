#include "vm.h"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string>

template <typename T> std::string ToString(T val) {
    std::stringstream stream;
    stream << val;
    return stream.str();
}

Boxed *VM::get_variable_bc(Bytecode bc) {
    if (bc.data & LocalVariableFlag) {
        int index = bc.data ^ LocalVariableFlag;
        if (index >= locals->size()) {
            locals->resize(static_cast<size_t>(index) + 1);
        }
        return &((*locals)[index]);
    } else {
        return &variables[bc.data];
    }
}

const char no_name[] = "No variable name";
const char local[] = "Local variable";

std::string VM::get_name_for_operand(Bytecode bc) {
    if (bc.data & LocalVariableFlag) {

        // Find function id
        int func_id = -1;
        for (auto g = functions.begin(); g != functions.end(); ++g) {
            if (g->pc_start <= this->pc && g->pc_end > this->pc) {
                func_id = g->id;
            }
        }
        if (func_id == -1) {
            std::cout << "Panic: unknown function id" << std::endl;
            exit(1);
        }

        int id = bc.data ^ LocalVariableFlag;
        auto a = (*get_function_locals(func_id))[id];
        return "Local variable: " + a.name + " (" + ToString(id) + ")";
    } else {
        Boxed *variable = get_variable_bc(bc);
        if (variable->name.length() > 0) {
            return variable->name.c_str();
        } else {
            return "No variable name";
        }
    }
}

void VM::bytecode_output(std::ostream *file) {
    *file << std::endl << "Bytecode Output" << std::endl;
    *file << "---------------" << std::endl;
    for (int i = 0; i < code.size();) {
        Bytecode bc = code[i++];
        this->pc = i;
        *file << "[" << std::setw(4) << bc.file_number << " : " << std::setw(8) << bc.line_number << " : " << std::uppercase << std::hex << std::setw(8)
              << i - 1 << " : " << std::setw(2) << (int)bc.opcode << "]  " << std::nouppercase << std::dec;
        switch (bc.opcode) {
        case NOP:
            *file << "NOP\n";
            break;
        case HALT:
            *file << "HALT\n";
            break;
        case TRACEON:
            *file << "TRACE ON\n";
            break;
        case TRACEOFF:
            *file << "TRACE OFF\n";
            break;

            // Load & store
        case DROP:
            *file << "DROP\n";
            break;
        case CONST_I:
            *file << "CONST.I  " << bc.data << std::endl;
            break;
        case LOAD_I:
            if (get_variable_bc(bc)->constant) {
                *file << "LOAD.I   " << get_variable_bc(bc)->value_int << std::endl;
            } else {
                *file << "LOAD.I   [" << get_name_for_operand(bc) << "]" << std::endl;
            }
            break;
        case LOAD_F:
            if (get_variable_bc(bc)->constant) {
                *file << "LOAD.F   " << get_variable_bc(bc)->value_float << std::endl;
            } else {
                *file << "LOAD.F   [" << get_name_for_operand(bc) << "]" << std::endl;
            }
            break;
        case LOAD_S:
            if (get_variable_bc(bc)->constant) {
                *file << "LOAD.S   '" << get_variable_bc(bc)->value_string.c_str() << "'" << std::endl;
            } else {
                *file << "LOAD.S   [" << get_name_for_operand(bc) << "]" << std::endl;
            }
            break;
        case STORE_I:
            *file << "STORE.I  [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case STORE_F:
            *file << "STORE.F  [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case STORE_S:
            if (get_variable_bc(bc)->constant) {
                *file << "STORE.S  " << get_variable_bc(bc)->value_string.c_str() << std::endl;
            } else {
                *file << "STORE.S  [" << get_name_for_operand(bc) << "]" << std::endl;
            }
            break;

            // Types
        case NEW_TYPE:
            *file << "NEW.TYPE [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case STORE_I_FIELD:
            *file << "STORE.IF [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case STORE_F_FIELD:
            *file << "STORE.FF [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case STORE_S_FIELD:
            *file << "STORE.SF [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case STORE_I_FIELD_ARRAY:
            *file << "STOR.IFA [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case STORE_F_FIELD_ARRAY:
            *file << "STOR.FFA [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case STORE_S_FIELD_ARRAY:
            *file << "STOR.SFA [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case LOAD_I_FIELD:
            *file << "LOAD.IF  [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case LOAD_F_FIELD:
            *file << "LOAD.FF  [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case LOAD_S_FIELD:
            *file << "LOAD.SF  [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case LOAD_I_FIELD_ARRAY:
            *file << "LOAD.IFA [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case LOAD_F_FIELD_ARRAY:
            *file << "LOAD.FFA [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case LOAD_S_FIELD_ARRAY:
            *file << "LOAD.SFA [" << get_name_for_operand(bc) << "]" << std::endl;
            break;

            // Arrays
        case DIM_I:
            *file << "DIM.I    [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case DIM_F:
            *file << "DIM.F    [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case DIM_S:
            *file << "DIM.S    [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case LOAD_I_ARRAY:
            *file << "LOAD.IA  [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case LOAD_F_ARRAY:
            *file << "LOAD.FA  [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case LOAD_S_ARRAY:
            *file << "LOAD.SA  [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case STORE_I_ARRAY:
            *file << "STORE.IA [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case STORE_F_ARRAY:
            *file << "STORE.FA [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case STORE_S_ARRAY:
            *file << "STORE.SA [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case STORE_I_ARRAY_FLIP:
            *file << "STOR.IAF [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case STORE_F_ARRAY_FLIP:
            *file << "STOR.FAF [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case STORE_S_ARRAY_FLIP:
            *file << "STOR.SAF [" << get_name_for_operand(bc) << "]" << std::endl;
            break;

            // DATA statements
        case READ_I:
            *file << "READ.I   [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case READ_F:
            *file << "READ.F   [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case READ_S:
            *file << "READ.S   [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case READ_I_ARRAY:
            *file << "READ.IA  [" << get_name_for_operand(bc) << "]" << std::endl;
            ;
            break;
        case READ_F_ARRAY:
            *file << "READ.FA  [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case READ_S_ARRAY:
            *file << "READ.SA  [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case RESTORE:
            *file << "RESTORE" << std::endl;
            break;

            // Calling and return
        case FOR_I:
            *file << "FOR.I    [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case FOR_F:
            *file << "FOR.F    [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case NEXT_I:
            *file << "NEXT.I   [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case NEXT_F:
            *file << "NEXT.F   [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case REPEAT:
            *file << "REPEAT" << std::endl;
            break;
        case RETURN:
            *file << "RETURN\n";
            break;
        case CALL:
            *file << "CALL     0x" << std::hex << std::uppercase << bc.data << std::dec << std::nouppercase << std::endl;
            break;
        case JUMP:
            *file << "JUMP     0x" << std::hex << std::uppercase << bc.data << std::dec << std::nouppercase << std::endl;
            break;
        case JNE:
            *file << "JMP.NE   0x" << std::hex << std::uppercase << bc.data << std::dec << std::nouppercase << std::endl;
            break;
        case JNEREP:
            *file << "UNTIL" << std::endl;
            break;
        case CASE_C:
            *file << "CASE.C" << std::endl;
            break;
        case CASE_S:
            *file << "CASE.S" << std::endl;
            break;
        case JPOSC:
            *file << "JPOS.C" << std::endl;
            break;

        case TIME:
            *file << "TIME\n";
            break;
        case TIMES:
            *file << "TIME$\n";
            break;
        case RND:
            *file << "RND\n";
            break;
        case RNDRANGE:
            *file << "RND.RANGE\n";
            break;
        case CLOSE:
            *file << "CLOSE#\n";
            break;
        case OPENIN:
            *file << "OPENIN#\n";
            break;
        case OPENOUT:
            *file << "OPENOUT#\n";
            break;
        case OPENUP:
            *file << "OPENUP#\n";
            break;
        case BGET:
            *file << "BGET#\n";
            break;
        case BPUT:
            *file << "BPUT#\n";
            break;
        case EOFH:
            *file << "EOF#\n";
            break;

        case I_TO_F:
            *file << "I.TO.F\n";
            break;
        case I_TO_F2:
            *file << "I.TO.F2\n";
            break;
        case F_TO_I:
            *file << "F.TO.I\n";
            break;
        case F_TO_I2:
            *file << "F.TO.I2\n";
            break;
        case I_TO_S:
            *file << "I.TO.S\n";
            break;
        case F_TO_S:
            *file << "F.TO.S\n";
            break;
        case DUP_I:
            *file << "DUP.I\n";
            break;
        case DUP_F:
            *file << "DUP.F\n";
            break;
        case ROT_I:
            *file << "ROT.I\n";
            break;
        case ROT_F:
            *file << "ROT.F\n";
            break;
        case ADD_I:
            *file << "ADD.I\n";
            break;
        case ADD_F:
            *file << "ADD.F\n";
            break;
        case ADD_S:
            *file << "ADD.S\n";
            break;
        case SUBTRACT_I:
            *file << "SUB.I\n";
            break;
        case SHR:
            *file << "SHR\n";
            break;
        case SHL:
            *file << "SHL\n";
            break;
        case SUBTRACT_F:
            *file << "SUB.F\n";
            break;
        case DIVIDE_I:
            *file << "DIV.I\n";
            break;
        case DIVIDE_F:
            *file << "DIV.F\n";
            break;
        case MULTIPLY_I:
            *file << "MUL.I\n";
            break;
        case MULTIPLY_F:
            *file << "MUL.F\n";
            break;
        case CMP_E_F:
            *file << "CMP.E.F\n";
            break;
        case CMP_E_I:
            *file << "CMP.E.I\n";
            break;
        case CMP_E_S:
            *file << "CMP.E.S\n";
            break;
        case CMP_NE_F:
            *file << "CMP.NE.F\n";
            break;
        case CMP_NE_S:
            *file << "CMP.NE.S\n";
            break;
        case CMP_NE_I:
            *file << "CMP.NE.I\n";
            break;
        case CMP_LE_F:
            *file << "CMP.LE.F\n";
            break;
        case CMP_LE_I:
            *file << "CMP.LE.I\n";
            break;
        case CMP_LE_S:
            *file << "CMP.LE.S\n";
            break;
        case CMP_GE_F:
            *file << "CMP.GE.F\n";
            break;
        case CMP_GE_I:
            *file << "CMP.GE.I\n";
            break;
        case CMP_GE_S:
            *file << "CMP.GE.S\n";
            break;
        case CMP_G_F:
            *file << "CMP.G.F\n";
            break;
        case CMP_G_I:
            *file << "CMP.G.I\n";
            break;
        case CMP_G_S:
            *file << "CMP.G.S\n";
            break;
        case CMP_L_F:
            *file << "CMP.L.F\n";
            break;
        case CMP_L_I:
            *file << "CMP.L.I\n";
            break;
        case CMP_L_S:
            *file << "CMP.L.S\n";
            break;

        case BOOL_OR:
            *file << "OR\n";
            break;
        case BOOL_EOR:
            *file << "EOR\n";
            break;
        case BOOL_AND:
            *file << "AND\n";
            break;
        case BOOL_NOT:
            *file << "NOT\n";
            break;

            // Parameters for FN/PROC
        case UNPACK_I:
            *file << "UNPCK.I  [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case UNPACK_F:
            *file << "UNPCK.F  [" << get_name_for_operand(bc) << "]" << std::endl;
            break;
        case UNPACK_S:
            *file << "UNPCK.S  [" << get_name_for_operand(bc) << "]" << std::endl;
            break;

        case PRINT_I:
            *file << "PRINT.I\n";
            break;
        case PRINT_F:
            *file << "PRINT.F\n";
            break;
        case PRINT_S:
            *file << "PRINT.S\n";
            break;
        case PRINT_NL:
            *file << "PRINT.NL\n";
            break;
        case PRINT_SPC:
            *file << "PRINT.SPC\n";
            break;

        case MOD_I:
            *file << "MOD.I\n";
            break;
        case MOD_F:
            *file << "MOD.F\n";
            break;
        case DIV_F:
            *file << "DIV.F\n";
            break;
        case DIV_I:
            *file << "DIV.I\n";
            break;

        case SQR:
            *file << "SQRT\n";
            break;
        case LN:
            *file << "LN\n";
            break;
        case LOG:
            *file << "LOG\n";
            break;
        case EXP:
            *file << "EXP\n";
            break;
        case ATN:
            *file << "ATAN\n";
            break;
        case TAN:
            *file << "TAN\n";
            break;
        case COS:
            *file << "COS\n";
            break;
        case SIN:
            *file << "SIN\n";
            break;
        case ACS:
            *file << "ACS\n";
            break;
        case ASN:
            *file << "ASN\n";
            break;
        case DEG:
            *file << "DEG\n";
            break;
        case RAD:
            *file << "RAD\n";
            break;
        case ABS_F:
            *file << "ABS.F\n";
            break;
        case ABS_I:
            *file << "ABS.I\n";
            break;
        case SGN:
            *file << "SGN\n";
            break;
        case PI:
            *file << "PI\n";
            break;

        case ASC:
            *file << "ASC\n";
            break;
        case CHRS:
            *file << "CHR$\n";
            break;
        case INSTR:
            *file << "INSTR\n";
            break;
        case MIDS:
            *file << "MID$\n";
            break;
        case RIGHTS:
            *file << "RIGHT$\n";
            break;
        case LEFTS:
            *file << "LEFT$\n";
            break;
        case LEN:
            *file << "LEN\n";
            break;
        case STRINGS:
            *file << "STRING$\n";
            break;
        case VAL:
            *file << "VAL\n";
            break;
        case STRS:
            *file << "STRS\n";
            break;
        case STRS_H:
            *file << "STRS.H\n";
            break;

        case CLS:
            *file << "CLS\n";
            break;
        case COLOURRGB:
            *file << "COLOUR RGB\n";
            break;
        case COLOURHEX:
            *file << "COLOUR HEX\n";
            break;
        case COLOURBGRGB:
            *file << "COLOURB RGB\n";
            break;
        case COLOURBGHEX:
            *file << "COLOURB HEX\n";
            break;
        case COLOUREXPRESSION:
            *file << "COLOUR EXPRESSION\n";
            break;
        case FLIP:
            *file << "FLIP\n";
            break;
        case RECTANGLE:
            *file << "RECTANGLE\n";
            break;
        case RECTANGLEFILL:
            *file << "RECTANGLE.FILL\n";
            break;
        case TRIANGLE:
            *file << "TRIANGLE\n";
            break;
        case TRIANGLEFILL:
            *file << "TRIANGLE.FILL\n";
            break;
        case TRIANGLESHADED:
            *file << "TRIANGLE.SHADED\n";
            break;
        case LINE:
            *file << "LINE\n";
            break;
        case GRAPHICS:
            *file << "GRAPHICS\n";
            break;
        case PLOT:
            *file << "PLOT\n";
            break;
        case CLIP:
            *file << "CLIP\n";
            break;
        case CLIPOFF:
            *file << "CLIP.OFF\n";
            break;

        case CREATEVERTEX:
            *file << "CREATE.VERTEX\n";
            break;
        case CREATETRIANGLE:
            *file << "CREATE.TRIANGLE\n";
            break;
        case CREATESHAPE:
            *file << "CREATE.SHAPE\n";
            break;
        case CREATEOBJECT:
            *file << "CREATE.OBJECT\n";
            break;
        case OBJECTTRANSLATE:
            *file << "OBJECT.TRANSLATE\n";
            break;
        case OBJECTROTATE:
            *file << "OBJECT.ROTATE\n";
            break;
        case OBJECTSCALE:
            *file << "OBJECT.SCALE\n";
            break;
        case RENDERFRAME:
            *file << "RENDER.FRAME\n";
            break;

        default:
            *file << "Unknown bytecode " << (int)bc.opcode << std::endl;
            break;
        }
    }
}