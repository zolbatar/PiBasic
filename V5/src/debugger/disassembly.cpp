#define _CRT_SECURE_NO_WARNINGS
#include "debugger.h"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string>

const char no_name[] = "No variable name";
const char local[] = "Local variable";

std::string Debugger::get_name_for_operand(Bytecode& bc, UINT32 i)
{
    if (bc.is_local_variable()) {
        // Find function id
        for (auto g = g_vm->functions.begin(); g != g_vm->functions.end(); ++g) {
            if (g->pc_start <= i && g->pc_end > i) {
                auto id = bc.data ^ LocalVariableFlag;
                return "Local variable: " + (*g).locals[id].get_name() + " (" + std::to_string(id) + ")";
            }
        }
    } else {
        auto variable = get_variable_bc(bc, i);
        if (variable->get_name().length() > 0) {
            return variable->get_name().c_str();
        } else {
            return "No variable name";
        }
    }
}

void Debugger::name_for_operand(Disassembly& ret, Bytecode& bcc, UINT32 i)
{
    std::stringstream ss;
    ss << "[" << get_name_for_operand(bcc, i) << "]";
    ret.operand = ss.str();
}

void Debugger::address_for_jump(Disassembly& ret, Bytecode& bcc)
{
    std::stringstream ss;
    ss << "0x" << std::hex << std::uppercase << bcc.data << std::dec << std::nouppercase;
    ret.operand = ss.str();
}

Disassembly Debugger::disassemble_instruction(Bytecode& bc, UINT32 i)
{
    Disassembly ret;

    // Line header
    std::stringstream ssh;
    ssh << std::uppercase << std::hex << std::setfill('0') << std::setw(8) << i << " : " << std::nouppercase << std::dec;
    ret.header = ssh.str();

    // Set type
    switch (bc.type) {
    case Type::NOTYPE:
        ret.type = "";
        break;
    case Type::INTEGER:
        ret.type = "INTEGER";
        break;
    case Type::FLOAT:
        ret.type = "REAL";
        break;
    case Type::STRING:
        ret.type = "STRING";
        break;
    case Type::TYPE:
        ret.type = "TYPE";
        break;
    case Type::INTEGER_ARRAY:
        ret.type = "INTEGER ARRAY";
        break;
    case Type::FLOAT_ARRAY:
        ret.type = "REAL ARRAY";
        break;
    case Type::STRING_ARRAY:
        ret.type = "STRING ARRAY";
        break;
    case Type::TYPE_ARRAY:
        ret.type = "TYPE ARRAY";
        break;
    }

    // Actual opcode and operands
    std::stringstream ss;
    switch (bc.opcode) {
    case Bytecodes::NOP:
        ret.opcode = "NOP";
        break;
    case Bytecodes::STACKCHECK:
        ret.opcode = "STACK CHECK";
        break;
    case Bytecodes::HALT:
        ret.opcode = "HALT";
        break;
    case Bytecodes::TRACEON:
        ret.opcode = "TRACE ON";
        break;
    case Bytecodes::TRACEOFF:
        ret.opcode = "TRACE OFF";
        break;
    case Bytecodes::BREAKPOINT:
        ret.opcode = "BREAKPOINT";
        break;

        // Load & store
    case Bytecodes::DROP:
        ret.opcode = "DROP";
        break;
    case Bytecodes::FASTCONST:
        ret.opcode = "CONST";
        ret.operand = std::to_string(bc.data);
        break;
    case Bytecodes::FASTCONST_AS_FLOAT:
        ret.opcode = "CONST AS REAL";
        ret.operand = std::to_string(bc.data);
        break;
    case Bytecodes::FASTCONST_VAR:
        ret.opcode = "VARIABLE";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::LOAD_AS_FLOAT:
        ret.opcode = "LOAD AS REAL";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::LOAD:
        if (get_variable_bc(bc, i)->is_constant()) {
            ret.opcode = "CONST";
            switch (bc.type) {
            case Type::INTEGER:
                ss << get_variable_bc(bc, i)->get_integer();
                break;
            case Type::FLOAT:
                ss << get_variable_bc(bc, i)->get_float();
                break;
            case Type::STRING:
                ss << get_variable_bc(bc, i)->get_string();
                break;
            }
            ret.operand = ss.str();
        } else {
            ret.opcode = "LOAD";
            name_for_operand(ret, bc, i);
        }
        break;
    case Bytecodes::STORE:
        ret.opcode = "STORE";
        name_for_operand(ret, bc, i);
        break;

        // Types
    case Bytecodes::NEW_TYPE:
        ret.opcode = "NEW TYPE";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::STORE_FIELD:
        ret.opcode = "STORE FIELD";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::STORE_FIELD_ARRAY:
        ret.opcode = "STORE FIELD ARRAY";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::LOAD_FIELD:
        ret.opcode = "LOAD FIELD";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::LOAD_FIELD_ARRAY:
        ret.opcode = "LOAD FIELD ARRAY";
        name_for_operand(ret, bc, i);
        break;

        // Arrays
    case Bytecodes::DIM:
        ret.opcode = "DIM";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::LOAD_ARRAY:
        ret.opcode = "LOAD ARRAY";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::STORE_ARRAY:
        ret.opcode = "STORE ARRAY";
        name_for_operand(ret, bc, i);
        break;

        // DATA statements
    case Bytecodes::READ:
        ret.opcode = "READ";
        break;
    case Bytecodes::RESTORE:
        ret.opcode = "RESTORE";
        name_for_operand(ret, bc, i);
        break;

        // Calling and return
    case Bytecodes::FORIN:
        ret.opcode = "FOR IN";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::NEXTIN:
        ret.opcode = "NEXT IN";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::FOR:
        ret.opcode = "FOR";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::NEXT:
        ret.opcode = "NEXT";
        name_for_operand(ret, bc, i);
        break;
    case Bytecodes::REPEAT:
        ret.opcode = "REPEAT";
        break;
    case Bytecodes::RETURN:
        ret.opcode = "RETURN";
        break;
    case Bytecodes::CALL:
        ret.opcode = "CALL";
        address_for_jump(ret, bc);
        break;
    case Bytecodes::JUMP:
        ret.opcode = "JUMP";
        address_for_jump(ret, bc);
        break;
    case Bytecodes::JNE:
        ret.opcode = "JNE";
        address_for_jump(ret, bc);
        break;
    case Bytecodes::JNEREP:
        ret.opcode = "JNE (REPEAT)";        
        break;
    case Bytecodes::CASE_C:
        ret.opcode = "CASE CLEAR";
        break;
    case Bytecodes::CASE_S:
        ret.opcode = "CASE SET";
        break;
    case Bytecodes::CJUMPT:
        ret.opcode = "CASE JUMP TEST";
        address_for_jump(ret, bc);
        break;
    case Bytecodes::CHAIN:
        ret.opcode = "CHAIN";
        break;
    case Bytecodes::GOTO:
        ret.opcode = "GOTO";
        address_for_jump(ret, bc);
        break;
    case Bytecodes::GOSUB:
        ret.opcode = "GOSUB";
        address_for_jump(ret, bc);
        break;

    case Bytecodes::TIME:
        break;
    case Bytecodes::TIMES:
        ret.opcode = "TIME$";
        break;
    case Bytecodes::RND:
        ret.opcode = "RND";
        break;
    case Bytecodes::RNDRANGE:
        ret.opcode = "RND RANGE";
        break;
    case Bytecodes::RNDREAL:
        ret.opcode = "RND REAL";
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
        break;
    case Bytecodes::PTRA:
        ret.opcode = "PTR# =";
        break;
    case Bytecodes::LISTFILES:
        ret.opcode = "LISTFILES";
        break;

    case Bytecodes::CONV_FLOAT:
        ret.opcode = "CONV REAL";
        ret.operand = std::to_string(bc.data);
        break;
    case Bytecodes::CONV_INT:
        ret.opcode = "CONV INT";
        ret.operand = std::to_string(bc.data);
        break;
    case Bytecodes::DUP:
        ret.opcode = "DUP";
        break;
    case Bytecodes::ROT:
        ret.opcode = "ROT";
        break;
    case Bytecodes::SHR:
        ret.opcode = "SHR";
        break;
    case Bytecodes::SHL:
        ret.opcode = "SHL";
        break;
    case Bytecodes::ADD:
        ret.opcode = "ADD";
        break;
    case Bytecodes::SUBTRACT:
        ret.opcode = "SUBTRACT";
        break;
    case Bytecodes::DIVIDE:
        ret.opcode = "DIVIDE";
        break;
    case Bytecodes::MULTIPLY:
        ret.opcode = "MULTIPLY";
        break;
    case Bytecodes::CMP_E:
        ret.opcode = "CMP EQ";
        break;
    case Bytecodes::CMP_NE:
        ret.opcode = "CMP NE";
        break;
    case Bytecodes::CMP_LE:
        ret.opcode = "CMP LE";
        break;
    case Bytecodes::CMP_GE:
        ret.opcode = "CMP GE";
        break;
    case Bytecodes::CMP_G:
        ret.opcode = "CMP GT";
        break;
    case Bytecodes::CMP_L:
        ret.opcode = "CMP LT";
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
    case Bytecodes::STORE_PARAMETER:
        ret.opcode = "STORE PARAMETER";
        name_for_operand(ret, bc, i);
        break;

    case Bytecodes::PRINT:
        ret.opcode = "PRINT";
        break;
    case Bytecodes::PRINT_NL:
        ret.opcode = "PRINT NL";
        break;
    case Bytecodes::PRINT_SPC:
        ret.opcode = "PRINT SPC";
        break;

    case Bytecodes::MOD:
        ret.opcode = "MOD";
        break;
    case Bytecodes::DIV:
        ret.opcode = "DIV";
        break;

    case Bytecodes::UNARY:
        ret.opcode = "UNARY";
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
    case Bytecodes::ABS:
        ret.opcode = "ABS";
        break;
    case Bytecodes::SGN:
        ret.opcode = "SGN";
        break;
    case Bytecodes::PI:
        ret.opcode = "PI";
        break;
    case Bytecodes::POWER:
        ret.opcode = "^ EXPONENTATION";
        break;
    case Bytecodes::SWAP:
        ret.opcode = "SWAP";
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

    case Bytecodes::INPUT:
        ret.opcode = "INPUT";
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
    case Bytecodes::CURSOROFF:
        ret.opcode = "CURSOR OFF";
        break;
    case Bytecodes::CURSORON:
        ret.opcode = "CURSOR ON";
        break;

    default:
        std::cout << "Unknown bytecode: " << (int)bc.opcode << std::endl;
        exit(1);
    }
    return ret;
}

std::vector<Disassembly> Debugger::disassemble_entire_file()
{
    std::vector<Disassembly> ret(g_vm->helper_bytecodes().get_size());
    for (UINT32 i = 0; i < g_vm->helper_bytecodes().get_size(); i++) {
        auto bc = g_vm->helper_bytecodes().get_bytecode(i);
        auto s = disassemble_instruction(bc, i);
        ret[i] = s;
    }
    return ret;
}
