#include <stdio.h>
#include <stdlib.h>

#include "output.h"

void stack_bytedump(VM *vm) {
    if (vm->sp < 0 || vm->fsp < 0) {
        printf("Stack is below zero\n");
        exit(1);
    }
    printf("\nInteger stack (%d):\n", vm->sp);
    for (int i = 0; i < vm->sp; i++) {
        printf("--%d: [%d:%08x]\n", i, vm->stack[i], vm->stack[i]);
    }
    printf("\nFloat stack: (%d):\n", vm->fsp);
    for (int i = 0; i < vm->fsp; i++) {
        printf("--%d: [%f]\n", i, vm->fstack[i]);
    }
    printf("\nString stack: (%d):\n", vm->ssp);
    for (int i = 0; i < vm->ssp; i++) {
        printf("--%d: [%s]\n", i, (char *)&vm->sstack[i].value);
    }
    printf("\nCall stack: (%d):\n", vm->csp);
    for (int i = 0; i < vm->csp; i++) {
        printf("--%d: [%d]\n", i, vm->cstack[i]);
    }
    printf("\n");
}

void print_string(FILE *fp, struct VariableString *v) {
    for (int i = 0; i < v->length; i++) {
        fprintf(fp, "%c", v->value[i]);
    }
}

struct Boxed *get_variable_bc(VM *vm, struct Bytecode *bc) {
    return &vm->variable_list[bc->data];
}

const char no_name[] = "No variable name";

char *get_name_for_operand(VM *vm, struct Bytecode *bc) {
    struct Boxed *variable = get_variable_bc(vm, bc);
    if (variable->name != NULL) {
        return variable->name;
    } else {
        return (char *)&no_name;
    }
}

void bytecode_output(FILE *fp, VM *vm, int start, int end) {
    for (int i = start; i < end;) {
        struct Bytecode *bc = &vm->code[i++];
        fprintf(fp, "[0x%08X] [0x%02X]/[0x%04X]: ", i - 1, bc->opcode, bc->data);
        switch (bc->opcode) {
            case NOP:
                fprintf(fp, "NOP\n");
                break;
            case HALT:
                fprintf(fp, "HALT\n");
                break;

            case CONST_I:
                fprintf(fp, "CONST.I  %d\n", bc->data);
                break;

                // Load & store
            case LOAD_I:
                if (get_variable_bc(vm, bc)->constant) {
                    fprintf(fp, "LOAD.I   %d\n", get_variable_bc(vm, bc)->value_int);
                } else {
                    fprintf(fp, "LOAD.I   [%s]\n", get_name_for_operand(vm, bc));
                }
                break;
            case LOAD_F:
                if (get_variable_bc(vm, bc)->constant) {
                    fprintf(fp, "LOAD.F   %f\n", get_variable_bc(vm, bc)->value_float);
                } else {
                    fprintf(fp, "LOAD.F   [%s]\n", get_name_for_operand(vm, bc));
                }
                break;
            case LOAD_S:
                if (get_variable_bc(vm, bc)->constant) {
                    fprintf(fp, "LOAD.S   '");
                    print_string(fp, &get_variable_bc(vm, bc)->value_string);
                    fprintf(fp, "'\n");
                } else {
                    fprintf(fp, "LOAD.S   [%s]\n", get_name_for_operand(vm, bc));
                }
                break;
            case STORE_I:
                fprintf(fp, "STORE.I  [%s]\n", get_name_for_operand(vm, bc));
                break;
            case STORE_F:
                fprintf(fp, "STORE.F  [%s]\n", get_name_for_operand(vm, bc));
                break;
            case STORE_S:
                if (get_variable_bc(vm, bc)->constant) {
                    fprintf(fp, "STORE.S  %s\n", get_variable_bc(vm, bc)->value_string.value);
                } else {
                    fprintf(fp, "STORE.S  [%s]\n", get_name_for_operand(vm, bc));
                }
                break;

                // Arrays
            case DIM_I_STORAGE:
                fprintf(fp, "DIM.IS   [%s]\n", get_name_for_operand(vm, bc));
                break;
            case DIM_I:
                fprintf(fp, "DIM.I    [%s]\n", get_name_for_operand(vm, bc));
                break;
            case DIM_F:
                fprintf(fp, "DIM.F    [%s]\n", get_name_for_operand(vm, bc));
                break;
            case LOAD_I_ARRAY:
                fprintf(fp, "LOAD.IA  [%s]\n", get_name_for_operand(vm, bc));
                break;
            case LOAD_F_ARRAY:
                fprintf(fp, "LOAD.FA  [%s]\n", get_name_for_operand(vm, bc));
                break;
            case STORE_I_ARRAY:
                fprintf(fp, "STORE.IA [%s]\n", get_name_for_operand(vm, bc));
                break;
            case STORE_F_ARRAY:
                fprintf(fp, "STORE.FA [%s]\n", get_name_for_operand(vm, bc));
                break;
            case STORE_S_ARRAY:
                fprintf(fp, "STORE.SA [%s]\n", get_name_for_operand(vm, bc));
                break;
            case STORE_I_STORAGE:
                fprintf(fp, "STORE.IS [%s]\n", get_name_for_operand(vm, bc));
                break;

                // DATA statements
            case DATA:
                fprintf(fp, "DATA\n");
                break;
            case CONV_I:
                fprintf(fp, "CONV.I\n");
                break;
            case CONV_F:
                fprintf(fp, "CONV.F\n");
                break;
            case CONV_S:
                fprintf(fp, "CONV.S\n");
                break;

                // Calling and return
            case NEXT_I:
                fprintf(fp, "NEXT.I   [%s]\n", get_name_for_operand(vm, bc));
                break;
            case NEXT_F:
                fprintf(fp, "NEXT.F   [%s]\n", get_name_for_operand(vm, bc));
                break;
            case RETURN:
                fprintf(fp, "RETURN\n");
                break;
            case RETURN_FN:
                fprintf(fp, "RETURN FN\n");
                break;
            case RETURN_DATA:
                fprintf(fp, "RETURN DATA\n");
                break;
            case CALL:
                fprintf(fp, "CALL     [%d/0x%X]\n", bc->data, bc->data);
                break;
            case PUSH_PC:
                fprintf(fp, "PUSH_PC  [%d/0x%X]\n", i + bc->data, i + bc->data);
                break;
            case JUMP:
                fprintf(fp, "JUMP     [%d/0x%X]\n", bc->data, bc->data);
                break;
            case JNE:
                fprintf(fp, "JMP.NE   [%d/0x%X]\n", bc->data, bc->data);
                break;
            case I_TO_F:
                fprintf(fp, "I.TO.F\n");
                break;
            case F_TO_I:
                fprintf(fp, "F.TO.I\n");
                break;
            case I_TO_S:
                fprintf(fp, "I.TO.S\n");
                break;
            case F_TO_S:
                fprintf(fp, "F.TO.S\n");
                break;
            case DUP_I:
                fprintf(fp, "DUP.I\n");
                break;
            case DUP_F:
                fprintf(fp, "DUP.F\n");
                break;
            case ROT_I:
                fprintf(fp, "ROT.I\n");
                break;
            case ROT_F:
                fprintf(fp, "ROT.F\n");
                break;
            case ADD_I:
                fprintf(fp, "ADD.I\n");
                break;
            case ADD_F:
                fprintf(fp, "ADD.F\n");
                break;
            case ADD_S:
                fprintf(fp, "ADD.S\n");
                break;
            case SUBTRACT_I:
                fprintf(fp, "SUB.I\n");
                break;
            case SUBTRACT_F:
                fprintf(fp, "SUB.F\n");
                break;
            case DIVIDE_I:
                fprintf(fp, "DIV.I\n");
                break;
            case DIVIDE_F:
                fprintf(fp, "DIV.F\n");
                break;
            case MULTIPLY_I:
                fprintf(fp, "MUL.I\n");
                break;
            case MULTIPLY_F:
                fprintf(fp, "MUL.F\n");
                break;
            case DIV_I:
                fprintf(fp, "QDIV.I\n");
                break;
            case DIV_F:
                fprintf(fp, "QDIV.F\n");
                break;
            case CMP_E_F:
                fprintf(fp, "CMP.E.F\n");
                break;
            case CMP_E_I:
                fprintf(fp, "CMP.E.I\n");
                break;
            case CMP_E_S:
                fprintf(fp, "CMP.E.S\n");
                break;
            case CMP_NE_F:
                fprintf(fp, "CMP.NE.F\n");
                break;
            case CMP_NE_S:
                fprintf(fp, "CMP.NE.S\n");
                break;
            case CMP_NE_I:
                fprintf(fp, "CMP.NE.I\n");
                break;
            case CMP_LE_F:
                fprintf(fp, "CMP.LE.F\n");
                break;
            case CMP_LE_I:
                fprintf(fp, "CMP.LE.I\n");
                break;
            case CMP_GE_F:
                fprintf(fp, "CMP.GE.F\n");
                break;
            case CMP_GE_I:
                fprintf(fp, "CMP.GE.I\n");
                break;
            case CMP_G_F:
                fprintf(fp, "CMP.G.F\n");
                break;
            case CMP_G_I:
                fprintf(fp, "CMP.G.I\n");
                break;
            case CMP_L_F:
                fprintf(fp, "CMP.L.F\n");
                break;
            case CMP_L_I:
                fprintf(fp, "CMP.L.I\n");
                break;
            case OR_F:
                fprintf(fp, "OR.F\n");
                break;
            case OR_I:
                fprintf(fp, "OR.I\n");
                break;

                // Parameters for FN/PROC
            case UNPACK_I:
                fprintf(fp, "UNPCK.I  [%s]\n", get_name_for_operand(vm, bc));
                break;
            case UNPACK_F:
                fprintf(fp, "UNPCK.F  [%s]\n", get_name_for_operand(vm, bc));
                break;
            case UNPACK_S:
                fprintf(fp, "UNPCK.S  [%s]\n", get_name_for_operand(vm, bc));
                break;
            case PAR_I:
                fprintf(fp, "PAR.I\n");
                break;
            case PAR_F:
                fprintf(fp, "PAR.F\n");
                break;
            case PAR_S:
                fprintf(fp, "PAR.S\n");
                break;

            case PRINT_I:
                fprintf(fp, "PRINT.I\n");
                break;
            case PRINT_F:
                fprintf(fp, "PRINT.F\n");
                break;
            case PRINT_S:
                fprintf(fp, "PRINT.S\n");
                break;
            case PRINT_NL:
                fprintf(fp, "PRINT.NL\n");
                break;
            case PRINT_HEX:
                fprintf(fp, "PRINT.HEX\n");
                break;

            case SQR:
                fprintf(fp, "SQRT\n");
                break;
            case LN:
                fprintf(fp, "NLOG\n");
                break;
            case EXP:
                fprintf(fp, "EXP\n");
                break;
            case ATN:
                fprintf(fp, "ATAN\n");
                break;
            case TAN:
                fprintf(fp, "TAN\n");
                break;
            case COS:
                fprintf(fp, "COS\n");
                break;
            case ABS_F:
                fprintf(fp, "ABS.F\n");
                break;
            case ABS_I:
                fprintf(fp, "ABS.I\n");
                break;

            case CHRS:
                fprintf(fp, "CHR$\n");
                break;
            case MIDS:
                fprintf(fp, "MID$\n");
                break;
            case RIGHTS:
                fprintf(fp, "RIGHT$\n");
                break;
            case LEFTS:
                fprintf(fp, "LEFT$\n");
                break;
            case LEN:
                fprintf(fp, "LEN\n");
                break;
            case STRINGS:
                fprintf(fp, "STRING$\n");
                break;

            case SYS:
                switch (bc->data) {
                    case SYS_TIME:
                        fprintf(fp, "SYS      TIME\n");
                        break;
                    case SYS_OSCLI:
                        fprintf(fp, "SYS      OSCLI: *%s\n", vm->variable_list[bc->data].value_string.value);
                        break;
                    case SYS_MODE:
                        fprintf(fp, "SYS      GRAPHICS-MODE\n");
                        break;
                    case SYS_MODE_STRING:
                        fprintf(fp, "SYS      GRAPHICS-MODE (STRING)\n");
                        break;
                    case SYS_VDU:
                        fprintf(fp, "SYS      GRAPHICS-VDU\n");
                        break;
                    case SYS_VDU_BYTE:
                        fprintf(fp, "SYS      GRAPHICS-VDU (BYTE)\n");
                        break;
                    case SYS_VDU_WORD:
                        fprintf(fp, "SYS      GRAPHICS-VDU (WORD)\n");
                        break;
                    case SYS_GCOL:
                        fprintf(fp, "SYS      GCOL\n");
                        break;
                    case SYS_PLOT:
                        fprintf(fp, "SYS      PLOT\n");
                        break;
                    case SYS_SPC:
                        fprintf(fp, "SYS      SPC\n");
                        break;
                    case SYS_SYS:
                        fprintf(fp, "SYS      SYS\n");
                        break;
                    default:
                        fprintf(fp, "Unknown SYS call %d\n", bc->data);
                        break;
                }
                break;
            default:
                fprintf(fp, "Unknown bytecode %d\n", bc->opcode);
                break;
        }
    }
}