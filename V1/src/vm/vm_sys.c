#include <stdint.h>
#include <stdlib.h>
#include <sys/time.h>  // this is for TIME

#include "engine.h"
#include "output.h"
#include "pibasic.h"
#include "vm.h"

void (*SYS_OPCODES[SYS_LAST])();
unsigned long long centisecondsSinceEpoch = 0;

void init_clock() {
    centisecondsSinceEpoch = get_clock();
}

unsigned long long get_clock() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return ((unsigned long long)(tv.tv_sec) * 1000 + (unsigned long long)(tv.tv_usec) / 1000) / 10;
}

void opcode_SYS_Time() {
#if defined(RISCOS) || defined(LINUX)
    int centiseconds = get_clock() - centisecondsSinceEpoch;
#endif
#ifdef RUNTIME_DEBUG
    printf("Pushing TIME value of %d\n", centiseconds);
#endif
    stack_push_int(centiseconds);
}

void opcode_SYS_OSCLI() {
    struct Boxed *variable = get_variable();
#ifdef RUNTIME_DEBUG
    printf("OSCLI command '\n");
    print_string(stdout, &variable->value_string);
    printf("'\n");
#endif
#if defined(RISCOS) || defined(BBC)
    _kernel_oscli(variable->value_string.value);
#else
    printf("IGNORING OSCLI command '\n");
    print_string(stdout, &variable->value_string);
    printf("'\n");
#endif
}

void opcode_SYS_SPC() {
    int v = stack_pop_int();
#ifdef RUNTIME_DEBUG
    printf("SPC command %d\n", v);
#endif
    for (int i = 0; i < v; i++) {
        printf(" ");
    }
}

void opcode_SYS_SYS_INT() {
    // Outputs
    VM_INT output_count = stack_pop_int();
    VM_INT y[output_count];
    for (int i = 0; i < output_count; i++) {
        y[i] = stack_pop_int();
    }

    // Inputs
    VM_INT parameter_count = stack_pop_int();
    VM_INT x[parameter_count];
    for (int i = 0; i < parameter_count; i++) {
        x[i] = stack_pop_int();
    }

    // SWI
    int swi = stack_pop_int();

    // Create SWI parameters
    _kernel_swi_regs regs;
    for (int i = 0; i < parameter_count; i++) {
        regs.r[i] = x[parameter_count - 1];
    }

    // Is it an Engine3D call?
    if (swi >= 0x81400 && swi < 0x81400 + 64) {
        swi -= 0x81400;
        module_service(swi, &regs);
    } else {
#ifdef RISCOS
        _kernel_swi(swi, &regs, &regs);
#endif
    }
}

void SYS_init() {
    SYS_OPCODES[SYS_TIME] = opcode_SYS_Time;
    SYS_OPCODES[SYS_OSCLI] = opcode_SYS_OSCLI;
    SYS_OPCODES[SYS_MODE] = opcode_SYS_GraphicsMode;
    SYS_OPCODES[SYS_MODE_STRING] = opcode_SYS_GraphicsMode_STRING;
    SYS_OPCODES[SYS_VDU] = opcode_SYS_GraphicsVDU;
    SYS_OPCODES[SYS_VDU_BYTE] = opcode_SYS_GraphicsVDUByte;
    SYS_OPCODES[SYS_VDU_WORD] = opcode_SYS_GraphicsVDUWord;
    SYS_OPCODES[SYS_GCOL] = opcode_SYS_GCOL;
    SYS_OPCODES[SYS_PLOT] = opcode_SYS_GraphicsPlot;
    SYS_OPCODES[SYS_SPC] = opcode_SYS_SPC;
    SYS_OPCODES[SYS_SYS] = opcode_SYS_SYS_INT;
}

void opcode_SYS(VM *vm) {
    void (*func)(VM *) = (*SYS_OPCODES[bc->data]);
    func(vm);
}
