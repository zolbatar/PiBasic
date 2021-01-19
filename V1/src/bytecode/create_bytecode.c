#include <stdlib.h>

#include "create.h"

void insert_instruction(VM *vm, int write, BYTE bytecode, UINT32 operand) {
    //printf("Bytecode at 0x%X: %d, operand %d\n", vm->pc, bytecode, operand);
    if (write) {
        vm->code[vm->pc].opcode = bytecode;
        vm->code[vm->pc].data = operand;
    }
    vm->pc++;
}

void insert_bytecode(VM *vm, int write, BYTE bytecode) {
    if (write) {
        vm->code[vm->pc].opcode = bytecode;
        vm->code[vm->pc].data = 0;
    }
    vm->pc++;
}