#include "vm.h"

#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "output.h"
#include "pibasic.h"

void (*OPCODES[LAST])();
struct Bytecode *bc;
typedef uintptr_t POINTER;
VM *run_vm;
UINT32 saved_sp;
UINT32 saved_fsp;
UINT32 saved_ssp;
bool quit = FALSE;

void *delete_VM(VM *vm) {
    // Free fixups
    struct VM_FixUp *fixup = vm->fixup_first;
    while (fixup != NULL) {
        if (fixup->variable_list) {
            free(fixup->variable_list);
        }
        if (fixup->variables_are_return) {
            free(fixup->variables_are_return);
        }
        struct VM_FixUp *next = fixup->next;
        free(fixup);
        fixup = next;
    }

    for (int i = 0; i < STACK_SIZE; i++) {
        if (vm->sstack[i].value != NULL)
            free(vm->sstack[i].value);
        struct Boxed *b = &vm->boxed[i];
        if (b->value_string.value != NULL)
            free(b->value_string.value);
        if (b->value_float_array != NULL)
            free(b->value_float_array);
        if (b->value_int_array != NULL)
            free(b->value_int_array);
        if (b->value_string_array != NULL) {
            // TODO remove all string entries
            free(b->value_string_array);
        }
    }

    if (vm->variable_list != NULL) {
        for (int i = 0; i < variable_index; i++) {
            struct Boxed *b = &vm->variable_list[i];
            if (b->value_string.value != NULL)
                free(b->value_string.value);
            if (b->value_float_array != NULL)
                free(b->value_float_array);
            if (b->value_int_array != NULL)
                free(b->value_int_array);
        }
        free(vm->variable_list);
    }
    if (vm->code) free(vm->code);
    free(vm);
    return NULL;
}

struct Boxed *get_variable() {
    return &run_vm->variable_list[bc->data];
}

// Push onto stacks
void stack_push_int(VM_INT v) {
#ifdef CHECKED_STACKS
    if (run_vm->sp >= STACK_SIZE) {
        printf("\nPANIC: Int stack exceeded\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    run_vm->stack[run_vm->sp++] = v;
}

void stack_push_float(VM_FLOAT v) {
#ifdef CHECKED_STACKS
    if (run_vm->fsp >= STACK_SIZE) {
        printf("\nPANIC: Float stack exceeded\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    run_vm->fstack[run_vm->fsp++] = v;
}

void stack_push_string(struct VariableString *v) {
#ifdef CHECKED_STACKS
    if (run_vm->ssp >= STACK_SIZE) {
        printf("\nPANIC: String stack exceeded\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    struct VariableString *s = &run_vm->sstack[run_vm->ssp++];
    if (s->value != NULL) {
        free(s->value);
    }
    s->value = malloc(v->length);
    memcpy(s->value, v->value, v->length);
    s->length = v->length;
}

void stack_push_call(UINT32 v) {
#ifdef CHECKED_STACKS
    if (run_vm->csp >= STACK_SIZE) {
        printf("\nPANIC: Call stack exceeded\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    run_vm->cstack[run_vm->csp++] = v;
}

// Pop off stacks
struct VariableString *stack_pop_string() {
#ifdef CHECKED_STACKS
    if (run_vm->ssp == 0) {
        printf("\nPANIC: String stack empty\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    return &(run_vm->sstack[--run_vm->ssp]);
}

UINT32 stack_pop_call() {
#ifdef CHECKED_STACKS
    if (run_vm->csp == 0) {
        printf("\nPANIC: Call stack empty\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    return run_vm->cstack[--run_vm->csp];
}

VM_INT stack_pop_int() {
#ifdef CHECKED_STACKS
    if (run_vm->sp == 0) {
        printf("\nPANIC: Int stack empty\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    return run_vm->stack[--run_vm->sp];
};

VM_FLOAT stack_pop_float() {
#ifdef CHECKED_STACKS
    if (run_vm->fsp == 0) {
        printf("\nPANIC: Float stack empty\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    return run_vm->fstack[--run_vm->fsp];
};

void opcode_HALT() {
#ifdef RUNTIME_DEBUG
    printf("End of program\n");
#endif
    quit = TRUE;
}

void opcode_STORE_I() {
    struct Boxed *variable = get_variable();
    VM_INT v = stack_pop_int();
    variable->value_int = v;
#ifdef RUNTIME_DEBUG
    printf("Store integer %d in %s (%p)\n", v, variable->name, variable);
#endif
}

void opcode_STORE_F() {
    struct Boxed *variable = get_variable();
    VM_FLOAT v = stack_pop_float();
    variable->value_float = v;
#ifdef RUNTIME_DEBUG
    printf("Store float %f in %s (%p)\n", v, variable->name, variable);
#endif
}

void opcode_STORE_S() {
    struct Boxed *variable = get_variable();
    struct VariableString *v = stack_pop_string();

    // Clear old value
    if (variable->value_string.value != NULL) {
        free(variable->value_string.value);
    }
    variable->value_string.value = malloc(v->length);
    memcpy(variable->value_string.value, v->value, v->length);
    variable->value_string.length = v->length;
#ifdef RUNTIME_DEBUG
    printf("Store string '");
    print_string(stdout, v);
    printf("' in %s (%p)\n", variable->name, variable);
#endif
}

void opcode_CONST_I() {
    int v = (int)bc->data;
    stack_push_int(v);
#ifdef RUNTIME_DEBUG
    printf("Push constant int %d onto the stack\n", v);
#endif
}

void opcode_LOAD_F() {
    struct Boxed *variable = get_variable();
    stack_push_float(variable->value_float);
#ifdef RUNTIME_DEBUG
    printf("Push variable %s, float %f onto the stack\n", variable->name, variable->value_float);
#endif
}

void opcode_LOAD_I() {
    struct Boxed *variable = get_variable();
    stack_push_int(variable->value_int);
#ifdef RUNTIME_DEBUG
    printf("Push variable %s, int %d onto the stack\n", variable->name, variable->value_int);
#endif
}

void opcode_LOAD_S() {
    struct Boxed *variable = get_variable();
    stack_push_string(&variable->value_string);
#ifdef RUNTIME_DEBUG
    printf("Push variable %s, string '", variable->name);
    print_string(stdout, &variable->value_string);
    printf("' onto the stack\n");
#endif
}

void opcode_LOAD_F_ARRAY() {
    VM_INT index = stack_pop_int();
    struct Boxed *variable = get_variable();
    if (variable->value_float_array == NULL) {
        printf("PANIC: %s is not a float array\n", variable->name);
        exit(1);
    }
    VM_FLOAT v = variable->value_float_array[index];
    stack_push_float(v);
#ifdef RUNTIME_DEBUG
    printf("Push variable %s, float %f (index %d) onto the stack\n", variable->name, v, index);
#endif
}

void opcode_LOAD_I_ARRAY() {
    VM_INT index = stack_pop_int();
    struct Boxed *variable = get_variable();
    if (variable->value_int_array == NULL) {
        printf("PANIC: %s is not an int array\n", variable->name);
        exit(1);
    }
    VM_INT v = variable->value_int_array[index];
    stack_push_int(v);
#ifdef RUNTIME_DEBUG
    printf("Push variable %s, int %d (index %d) onto the stack\n", variable->name, v, index);
#endif
}

void opcode_I_TO_F() {
    VM_INT v1 = stack_pop_int();
    VM_FLOAT v2 = v1;
    stack_push_float(v2);
#ifdef RUNTIME_DEBUG
    printf("Convert %d (int) -> %f (float)\n", v1, v2);
#endif
}

void opcode_F_TO_I() {
    VM_FLOAT v1 = stack_pop_float();
#ifdef DOUBLEMATH
    VM_INT v2 = (VM_INT)round(v1);
#else
    VM_INT v2 = (VM_INT)roundf(v1);
#endif
    stack_push_int(v2);
#ifdef RUNTIME_DEBUG
    printf("Convert %f (float) -> %d (int)\n", v1, v2);
#endif
}

void opcode_I_TO_S() {
#ifdef CHECKED_STACKS
    if (run_vm->ssp >= STACK_SIZE) {
        printf("\nPANIC: String stack exceeded\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    char temp[256];
    VM_INT v1 = stack_pop_int();
    struct VariableString *v2 = (struct VariableString *)&(run_vm->sstack[run_vm->ssp++]);
    sprintf(temp, "%d", v1);
    free(v2->value);
    v2->length = strlen(temp);
    v2->value = malloc(v2->length);
    memcpy(v2->value, temp, v2->length);
#ifdef RUNTIME_DEBUG
    printf("Convert %d (int) -> '", v1);
    print_string(stdout, v2);
    printf("'\n");
#endif
}

void opcode_DIM_F() {
    VM_INT v1 = stack_pop_int();
    struct Boxed *variable = get_variable();
    if (variable->value_float_array != NULL) {
        free(variable->value_float_array);
    }
    variable->value_float_array = malloc(sizeof(VM_FLOAT) * (v1 + 1));
#ifdef RUNTIME_DEBUG
    printf("Dimension float variable %s (%p) to %d\n", variable->name, variable, v1);
#endif
}

void opcode_DIM_I() {
    VM_INT v1 = stack_pop_int();
    struct Boxed *variable = get_variable();
    if (variable->value_int_array != NULL) {
        free(variable->value_int_array);
    }
    variable->value_int_array = malloc(sizeof(int) * (v1 + 1));
#ifdef RUNTIME_DEBUG
    printf("Dimension int variable %s (%p) to %d\n", variable->name, variable, v1);
#endif
}

void opcode_DIM_STORAGE() {
    VM_INT v1 = stack_pop_int();
    struct Boxed *variable = get_variable();
    if (variable->value_int_array != NULL) {
        free(variable->value_int_array);
    }
    int no_entries = (v1 + 3) >> 2;
    variable->value_int_array = malloc(sizeof(int) * no_entries);
    variable->value_int = variable->value_int_array;
#ifdef RUNTIME_DEBUG
    printf("Dimension int variable %s (%p) to %d\n", variable->name, variable, v1);
#endif
}

void fetch_data() {
    struct VM_FixUp *position = run_vm->data_position;
    if (position == NULL) {
        printf("\nPANIC: No DATA to READ\n");
        exit(1);
    }
#ifdef RUNTIME_DEBUG
    printf("Calling 0x%X to fetch data\n", position->bytecode_position);
#endif

    // We put the required data type on the stack
    stack_push_call(run_vm->pc);
    run_vm->pc = position->bytecode_position;

    // Move to next
    while (1) {
        run_vm->data_position = run_vm->data_position->next;
        if (run_vm->data_position == NULL || run_vm->data_position->type == FIXUP_DATA)
            break;
    }
}

void opcode_DATA() {
    fetch_data();
}

void opcode_CONV_I() {
    enum EVarType t = stack_pop_int();
    switch (t) {
        case VAR_TYPE_INT:
#ifdef RUNTIME_DEBUG
            printf("No converting int\n");
#endif
            break;
        case VAR_TYPE_FLOAT: {
            VM_FLOAT v = stack_pop_float();
            stack_push_int(v);
#ifdef RUNTIME_DEBUG
            printf("Converting float data %f to int %d\n", v, (int)v);
#endif
            break;
        }
        default:
            printf("PANIC: CONV_I %d\n", t);
            exit(1);
    }
}

void opcode_CONV_S() {
    enum EVarType t = stack_pop_int();
    switch (t) {
        case VAR_TYPE_STRING:
            break;
        default:
            printf("PANIC: CONV_S %d\n", t);
            exit(1);
    }
}

void opcode_CONV_F() {
    enum EVarType t = stack_pop_int();
    switch (t) {
        case VAR_TYPE_FLOAT:
#ifdef RUNTIME_DEBUG
            printf("No converting float\n");
#endif
            break;
        case VAR_TYPE_INT: {
            VM_INT v = stack_pop_int();
            stack_push_float(v);
#ifdef RUNTIME_DEBUG
            printf("Converting int data %d to int %f\n", v, (float)v);
#endif
            break;
        }
        default:
            printf("PANIC: CONV_F %d at 0x%x\n", t, run_vm->pc);
            exit(1);
    }
}

void opcode_PAR_I() {
#ifdef CHECKED_STACKS
    if (run_vm->bsp >= STACK_SIZE) {
        printf("\nPANIC: Parameter stack exceeded\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    VM_INT v = stack_pop_int();
    struct Boxed *b = &(run_vm->boxed[run_vm->bsp++]);
    b->value_int = v;
#ifdef RUNTIME_DEBUG
    printf("Read int %d, move to parameters\n", v);
#endif
}

void opcode_PAR_F() {
#ifdef CHECKED_STACKS
    if (run_vm->bsp >= STACK_SIZE) {
        printf("\nPANIC: Parameter stack exceeded\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    VM_FLOAT v = stack_pop_float();
    struct Boxed *b = &(run_vm->boxed[run_vm->bsp++]);
    b->value_float = v;
#ifdef RUNTIME_DEBUG
    printf("Read float %f, move to parameters\n", v);
#endif
}

void opcode_PAR_S() {
#ifdef CHECKED_STACKS
    if (run_vm->bsp >= STACK_SIZE) {
        printf("\nPANIC: Parameter stack exceeded\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    struct VariableString *v = stack_pop_string();
    struct Boxed *b = &(run_vm->boxed[run_vm->bsp++]);
    if (b->value_string.value != NULL) {
        free(b->value_string.value);
    }
    b->value_string.value = malloc(v->length);
    memcpy(b->value_string.value, v->value, v->length);
    b->value_string.length = v->length;
#ifdef RUNTIME_DEBUG
    printf("Read string %s, move to parameters\n", v->value);
#endif
}

void opcode_UNPACK_I() {
#ifdef CHECKED_STACKS
    if (run_vm->bsp == 0) {
        printf("\nPANIC: Boxed stack empty\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    struct Boxed *b = &(run_vm->boxed[--run_vm->bsp]);
    struct Boxed *variable = get_variable();
    VM_INT v = b->value_int;
    variable->value_int = v;
#ifdef RUNTIME_DEBUG
    printf("Parameter int %d moved to variable %s\n", v, variable->name);
#endif
}

void opcode_UNPACK_F() {
#ifdef CHECKED_STACKS
    if (run_vm->bsp == 0) {
        printf("\nPANIC: Boxed stack empty\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    struct Boxed *b = &(run_vm->boxed[--run_vm->bsp]);
    struct Boxed *variable = get_variable();
    VM_FLOAT v = b->value_float;
    variable->value_float = v;
#ifdef RUNTIME_DEBUG
    printf("Parameter float %f moved to variable %s\n", v, variable->name);
#endif
}

void opcode_UNPACK_S() {
#ifdef CHECKED_STACKS
    if (run_vm->bsp == 0) {
        printf("\nPANIC: Boxed stack empty\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    struct Boxed *b = &(run_vm->boxed[--run_vm->bsp]);
    struct Boxed *variable = get_variable();
    if (variable->value_string.value != NULL) {
        free(variable->value_string.value);
    }
    variable->value_string.value = malloc(b->value_string.length);
    memcpy(variable->value_string.value, b->value_string.value, b->value_string.length);
    variable->value_string.length = b->value_string.length;
#ifdef RUNTIME_DEBUG
//    printf("Parameter string %s moved to variable %s\n", variable->value_string->value, variable->name);
#endif
}

void opcode_STORE_F_ARRAY() {
    VM_INT index = stack_pop_int();
    VM_FLOAT v = stack_pop_float();
    struct Boxed *variable = get_variable();
    variable->value_float_array[index] = v;
#ifdef RUNTIME_DEBUG
    printf("Store float array variable %s (%p), index %d, value %f\n", variable->name, variable, index, v);
#endif
}

void opcode_STORE_STORAGE() {
    VM_INT index = stack_pop_int();
    VM_INT v = stack_pop_int();
    printf("%d %d\n", index, v);
    struct Boxed *variable = get_variable();
    if (variable->value_int_array == NULL) {
        printf("PANIC: Trying to store value in DIM storage that is not initialised\n");       
        exit(1); 
    }
    index >>= 2;
    printf("%d %d\n", index, v);
    printf("%p\n", variable->value_int_array);
    variable->value_int_array[index] = v;
    printf("....\n");
    printf("Store storage variable %s (%p), index %d, value %d\n", variable->name, variable, index, v);
    exit(0);
#ifdef RUNTIME_DEBUG
    printf("Store storage variable %s (%p), index %d, value %d\n", variable->name, variable, index, v);
#endif
}

void opcode_STORE_I_ARRAY() {
    VM_INT index = stack_pop_int();
    VM_INT v = stack_pop_int();
    struct Boxed *variable = get_variable();
    variable->value_int_array[index] = v;
#ifdef RUNTIME_DEBUG
    printf("Store int array variable %s (%p), index %d, value %d\n", variable->name, variable, index, v);
#endif
}

void opcode_RETURN() {
    run_vm->pc = stack_pop_call();
#ifdef RUNTIME_DEBUG
    printf("Returning to 0x%X\n", run_vm->pc);
#endif
#ifdef CHECKED_STACKS
    if (run_vm->sp != saved_sp) {
        printf("PANIC: Int stack not identical RETURN\n");
        exit(1);
    }
    if (run_vm->fsp != saved_fsp) {
        printf("PANIC: Float stack not identical RETURN\n");
        exit(1);
    }
    if (run_vm->ssp != saved_ssp) {
        printf("PANIC: String stack not identical RETURN\n");
        exit(1);
    }
#endif
}

void opcode_RETURN_FN() {
    run_vm->pc = stack_pop_call();
#ifdef RUNTIME_DEBUG
    printf("Returning to 0x%X\n", run_vm->pc);
#endif
#ifdef CHECKED_STACKS
    int diff = run_vm->sp + run_vm->fsp + run_vm->ssp - saved_sp - saved_fsp - saved_ssp;
    if (diff != 1) {
        printf("PANIC: Stacks not identical RETURN FN\n");
        exit(1);
    }
#endif
}

void opcode_RETURN_DATA() {
    run_vm->pc = stack_pop_call();
#ifdef RUNTIME_DEBUG
    printf("Returning to 0x%X\n", run_vm->pc);
#endif
}

void opcode_PUSH_PC() {
    int v = run_vm->pc + bc->data;
    stack_push_int(v);
#ifdef RUNTIME_DEBUG
    printf("Push PC, value is 0x%x\n", v);
#endif
}

void opcode_JUMP() {
    run_vm->pc = bc->data;
#ifdef RUNTIME_DEBUG
    printf("Jump, new PC is 0x%x\n", run_vm->pc);
#endif
}

void opcode_CALL() {
    stack_push_call(run_vm->pc);
    run_vm->pc = bc->data;
#ifdef RUNTIME_DEBUG
    printf("Call, new PC is 0x%x\n", run_vm->pc);
#endif
#ifdef CHECKED_STACKS
    saved_sp = run_vm->sp;
    saved_fsp = run_vm->fsp;
    saved_ssp = run_vm->ssp;
#endif
}

void opcode_NEXT_I() {
    struct Boxed *variable = get_variable();
    variable->value_int += variable->value_int_array[0];
    variable->value_int_array[1]--;
    if (variable->value_int_array[1] >= 0) {
        run_vm->pc = variable->value_int_array[2];
    }
#ifdef RUNTIME_DEBUG
    printf("Next integer variable %s (%p), step %d, iterations left %d, loop PC is 0x%X\n", variable->name, variable, variable->value_int_array[0], variable->value_int_array[1], variable->value_int_array[2]);
#endif
}

void opcode_NEXT_F() {
    struct Boxed *variable = get_variable();
    variable->value_float += variable->value_float_array[0];
    variable->value_int_array[0]--;
    if (variable->value_int_array[0] >= 0) {
        run_vm->pc = variable->value_int_array[1];
    }
#ifdef RUNTIME_DEBUG
    printf("Next float variable %s (%p), step %f, iterations left %d, loop PC is 0x%X\n", variable->name, variable, variable->value_float_array[0], variable->value_int_array[0], variable->value_int_array[1]);
#endif
}

void opcode_JNE() {
    VM_INT v1 = stack_pop_int();
    if (v1 == 0) {
        run_vm->pc = bc->data;
#ifdef RUNTIME_DEBUG
        printf("Jump test, TRUE, new PC is 0x%X\n", run_vm->pc);
#endif
    } else {
#ifdef RUNTIME_DEBUG
        printf("Jump test, FALSE\n");
#endif
    }
}

void opcode_ROT_F() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = stack_pop_float();
    stack_push_float(v1);
    stack_push_float(v2);
#ifdef RUNTIME_DEBUG
    printf("Rotate float %f/%f\n", v1, v2);
#endif
}

void opcode_ROT_I() {
    VM_INT v1 = stack_pop_int();
    VM_INT v2 = stack_pop_int();
    stack_push_int(v1);
    stack_push_int(v2);
#ifdef RUNTIME_DEBUG
    printf("Rotate int %d/%d\n", v1, v2);
#endif
}

void opcode_DUP_F() {
    VM_FLOAT v = stack_pop_float();
    stack_push_float(v);
    stack_push_float(v);
#ifdef RUNTIME_DEBUG
    printf("Duplicate float %f\n", v);
#endif
}

void opcode_DUP_I() {
    VM_INT v = stack_pop_int();
    stack_push_int(v);
    stack_push_int(v);
#ifdef RUNTIME_DEBUG
    printf("Duplicate int %d\n", v);
#endif
}

void opcode_ADD_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = v1 + v2;
    stack_push_float(v3);
#ifdef RUNTIME_DEBUG
    printf("Add float %f + %f = %f\n", v1, v2, v3);
#endif
}

void opcode_ADD_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 + v2;
    stack_push_int(v3);
#ifdef RUNTIME_DEBUG
    printf("Add int %d + %d = %d\n", v1, v2, v3);
#endif
}

void opcode_ADD_S() {
#ifdef CHECKED_STACKS
    if (run_vm->ssp >= STACK_SIZE) {
        printf("\nPANIC: String stack exceeded\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    struct VariableString *v2 = stack_pop_string();
    struct VariableString *v1 = (struct VariableString *)&(run_vm->sstack[run_vm->ssp - 1]);
#ifdef RUNTIME_DEBUG
    printf(" '");
    print_string(stdout, v1);
    printf("' +  '");
    print_string(stdout, v2);
    printf("' = '");
#endif
    char *old = v1->value;

    // Allocate new space
    int l = v1->length + v2->length;
    v1->value = malloc(l);
    memcpy(v1->value, old, v1->length);
    memcpy(&v1->value[v1->length], v2->value, v2->length);
    v1->length = l;

    // Free old space and set length
    free(old);
#ifdef RUNTIME_DEBUG
    print_string(stdout, v1);
    printf("'\n");
#endif
}

void opcode_SUBTRACT_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = v1 - v2;
    stack_push_float(v3);
#ifdef RUNTIME_DEBUG
    printf("Subtract float %f - %f = %f\n", v1, v2, v3);
#endif
}

void opcode_SUBTRACT_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 - v2;
    stack_push_int(v3);
#ifdef RUNTIME_DEBUG
    printf("Subtract int %d - %d = %d\n", v1, v2, v3);
#endif
}

void opcode_DIVIDE_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = v1 / v2;
    stack_push_float(v3);
#ifdef RUNTIME_DEBUG
    printf("Divide float %f / %f = %f\n", v1, v2, v3);
#endif
}

void opcode_DIVIDE_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 / v2;
    stack_push_int(v3);
#ifdef RUNTIME_DEBUG
    printf("Divide int %d / %d = %d\n", v1, v2, v3);
#endif
}

void opcode_DIV_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = (float)((int)v1 / (int)v2);
    stack_push_int(v3);
#ifdef RUNTIME_DEBUG
    printf("Quotient divide float %f / %f = %f\n", v1, v2, v3);
#endif
}

void opcode_DIV_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 / v2;
    stack_push_int(v3);
#ifdef RUNTIME_DEBUG
    printf("Quotient divide int %d / %d = %d\n", v1, v2, v3);
#endif
}

void opcode_MOD_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = (float)((int)v1 % (int)v2);
    stack_push_int(v3);
#ifdef RUNTIME_DEBUG
    printf("Quotient divide float %f / %f = %f\n", v1, v2, v3);
#endif
}

void opcode_MOD_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 % v2;
    stack_push_int(v3);
#ifdef RUNTIME_DEBUG
    printf("Quotient divide int %d / %d = %d\n", v1, v2, v3);
#endif
}

void opcode_MULTIPLY_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = v1 * v2;
    stack_push_float(v3);
#ifdef RUNTIME_DEBUG
    printf("Multiply float %f * %f = %f\n", v1, v2, v3);
#endif
}

void opcode_MULTIPLY_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 * v2;
    stack_push_int(v3);
#ifdef RUNTIME_DEBUG
    printf("Multiply int %d * %d = %d\n", v1, v2, v3);
#endif
}

void opcode_CMP_E_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_INT compare = v1 == v2;
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Compare floats are = %f == %f = %d\n", v1, v2, compare);
#endif
}

void opcode_CMP_E_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT compare = v1 == v2;
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Compare ints are = %d == %d = %d\n", v1, v2, compare);
#endif
}

void opcode_CMP_E_S() {
    struct VariableString *v2 = stack_pop_string();
    struct VariableString *v1 = stack_pop_string();
    VM_INT compare;
    if (v1->length != v2->length) {
        compare = 0;
    } else {
        compare = memcmp(v1->value, v2->value, v1->length) == 0;
    }
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Compare strings are = %s == %s = %d\n", v1->value, v2->value, compare);
#endif
}

void opcode_CMP_NE_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_INT compare = v1 != v2;
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Compare floats are = %f <> %f = %d\n", v1, v2, compare);
#endif
}

void opcode_CMP_NE_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT compare = v1 != v2;
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Compare ints are = %d <> %d = %d\n", v1, v2, compare);
#endif
}

void opcode_CMP_NE_S() {
    struct VariableString *v2 = stack_pop_string();
    struct VariableString *v1 = stack_pop_string();
    VM_INT compare;
    if (v1->length != v2->length) {
        compare = 1;
    } else {
        compare = memcmp(v1->value, v2->value, v1->length) != 0;
    }
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Compare strings are = %s <> %s = %d\n", v1->value, v2->value, compare);
#endif
}

void opcode_CMP_LE_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_INT compare = v1 <= v2;
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Compare floats are %f <= %f = %d\n", v1, v2, compare);
#endif
}

void opcode_CMP_LE_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT compare = v1 >= v2;
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Compare ints are %d <= %d = %d\n", v1, v2, compare);
#endif
}

void opcode_CMP_GE_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_INT compare = v1 >= v2;
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Compare floats are %f >= %f = %d\n", v1, v2, compare);
#endif
}

void opcode_CMP_GE_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT compare = v1 >= v2;
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Compare ints are %d >= %d = %d\n", v1, v2, compare);
#endif
}

void opcode_CMP_G_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_INT compare = v1 > v2;
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Compare floats are %f > %f = %d\n", v1, v2, compare);
#endif
}

void opcode_CMP_G_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT compare = v1 > v2;
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Compare ints are %d > %d = %d\n", v1, v2, compare);
#endif
}

void opcode_CMP_L_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_INT compare = v1 < v2;
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Compare floats are %f < %f = %d\n", v1, v2, compare);
#endif
}

void opcode_CMP_L_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT compare = v1 < v2;
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Compare ints are %d < %d = %d\n", v1, v2, compare);
#endif
}

void opcode_OR_F() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = stack_pop_float();
    VM_INT compare = v1 || v2;
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Logical OR floats %f %f = %d\n", v2, v1, compare);
#endif
}

void opcode_OR_I() {
    VM_INT v1 = stack_pop_int();
    VM_INT v2 = stack_pop_int();
    VM_INT compare = v1 || v2;
    stack_push_int(compare);
#ifdef RUNTIME_DEBUG
    printf("Logical OR ints %d %d = %d\n", v2, v1, compare);
#endif
}

void opcode_unsupported() {
    printf("Unsupported: %d\n", bc->opcode);
    exit(1);
}

bool print_next_as_hex = FALSE;
void opcode_PRINT_HEX() {
    print_next_as_hex = TRUE;
#ifdef RUNTIME_DEBUG
    printf("Printing next number as hex\n");
#endif
}

void opcode_PRINT_F() {
    VM_FLOAT v1 = stack_pop_float();
    if (print_next_as_hex) {
        print_next_as_hex = FALSE;
#ifdef RUNTIME_DEBUG
        printf("Print float as hex: ");
#endif
        printf("0x%X", (int)v1);
#ifdef RUNTIME_DEBUG
        printf("\n");
#endif
    } else {
#ifdef RUNTIME_DEBUG
        printf("Print float: ");
#endif
        printf("%f", v1);
#ifdef RUNTIME_DEBUG
        printf("\n");
#endif
    }
}

void opcode_PRINT_I() {
    VM_INT v1 = stack_pop_int();
    if (print_next_as_hex) {
        print_next_as_hex = FALSE;
#ifdef RUNTIME_DEBUG
        printf("Print int as hex: ");
#endif
        printf("0x%X", v1);
#ifdef RUNTIME_DEBUG
        printf("\n");
#endif
    } else {
#ifdef RUNTIME_DEBUG
        printf("Print int: ");
#endif
        printf("%d", v1);
#ifdef RUNTIME_DEBUG
        printf("\n");
#endif
    }
}

void opcode_PRINT_S() {
    struct VariableString *v = stack_pop_string();
#ifdef RUNTIME_DEBUG
    printf("Print string\n");
#endif
    for (int i = 0; i < v->length; i++) {
        printf("%c", v->value[i]);
    }
#ifdef RUNTIME_DEBUG
    printf("\n");
#endif
}

void opcode_PRINT_NL() {
#ifdef RUNTIME_DEBUG
    printf("Print newline: ");
#endif
    printf("\n");
}

void opcode_LEN() {
    struct VariableString *v = stack_pop_string();
    stack_push_int(v->length);
#ifdef RUNTIME_DEBUG
    printf("LEN '");
    print_string(stdout, v);
    printf("' = %d", v->length);
#endif
}

void opcode_STRINGS() {
#ifdef CHECKED_STACKS
    if (run_vm->ssp >= STACK_SIZE) {
        printf("\nPANIC: String stack exceeded\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    struct VariableString *v1 = &(run_vm->sstack[run_vm->ssp - 1]);
    VM_INT v2 = stack_pop_int();
#ifdef RUNTIME_DEBUG
    printf("STRING$ '");
    print_string(stdout, v1);
    printf("' * %d = '", v2);
#endif
    int l = v1->length;
    char *new = malloc(l * v2);
    for (int i = 0; i < v2; i++) {
        memcpy(new + (i * l), v1->value, l);
    }
    free(v1->value);
    v1->value = new;
    v1->length = l * v2;

#ifdef RUNTIME_DEBUG
    print_string(stdout, v1);
    printf("'\n");
#endif
}

void opcode_CHRS() {
#ifdef CHECKED_STACKS
    if (run_vm->ssp >= STACK_SIZE) {
        printf("\nPANIC: String stack exceeded\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    VM_INT v1 = stack_pop_int();
    struct VariableString *v2 = &(run_vm->sstack[run_vm->ssp++]);
    if (v2->value != NULL)
        free(v2->value);
    v2->value = malloc(1);
    v2->value[0] = v1;
    v2->length = 1;
#ifdef RUNTIME_DEBUG
    printf("CHR$ %d = '", v1);
    print_string(stdout, v2);
    printf("'\n");
#endif
}

void opcode_LEFTS() {
#ifdef CHECKED_STACKS
    if (run_vm->ssp >= STACK_SIZE) {
        printf("\nPANIC: String stack exceeded\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    VM_INT v1 = stack_pop_int();
    struct VariableString *v2 = &(run_vm->sstack[run_vm->ssp - 1]);
#ifdef RUNTIME_DEBUG
    printf("LEFT$ '");
    print_string(stdout, v2);
    printf("' (%d)", v1);
#endif
    if (v1 > 0 && v1 < v2->length) {
        // Allocate new space
        char *new = malloc(v1);
        memcpy(new, v2->value, v1);

        // Free old space and set length
        free(v2->value);
        v2->value = new;
        v2->length = v1;
    }
#ifdef RUNTIME_DEBUG
    printf(" - '");
    print_string(stdout, v2);
    printf("'\n");
#endif
}

void opcode_MIDS() {
#ifdef CHECKED_STACKS
    if (run_vm->ssp >= STACK_SIZE) {
        printf("\nPANIC: String stack exceeded\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    VM_INT v1 = stack_pop_int();
    VM_INT v2 = stack_pop_int();
    struct VariableString *v3 = &(run_vm->sstack[run_vm->ssp - 1]);
#ifdef RUNTIME_DEBUG
    printf("MID$ '");
    print_string(stdout, v3);
    printf("', %d, %d = ", v2, v1);
#endif
    v2--;
    if (v1 > 0 && v2 > 0 && v1 >= v2 && v2 < v3->length) {
        // Do we overrun?
        int diff = v3->length - v2 - v1;
        if (diff < 0)
            v1 += diff;

        // Allocate new space
        char *new = malloc(v1);
        memcpy(new, &v3->value[v2], v1);

        // Free old space and set length
        free(v3->value);
        v3->value = new;
        v3->length = v1;
    }
#ifdef RUNTIME_DEBUG
    printf(" - '");
    print_string(stdout, v3);
    printf("'\n");
#endif
}

void opcode_RIGHTS() {
#ifdef CHECKED_STACKS
    if (run_vm->ssp >= STACK_SIZE) {
        printf("\nPANIC: String stack exceeded\n");
        stack_bytedump(run_vm);
        exit(1);
    }
#endif
    VM_INT v1 = stack_pop_int();
    struct VariableString *v2 = &(run_vm->sstack[run_vm->ssp - 1]);
#ifdef RUNTIME_DEBUG
    printf("RIGHT$ '");
    print_string(stdout, v2);
    printf("' (%d)", v1);
#endif
    if (v2->length > v1) {
        // Allocate new space
        char *new = malloc(v1);
        memcpy(new, &v2->value[v2->length - v1], v1);

        // Free old space and set length
        free(v2->value);
        v2->value = new;
        v2->length = v1;
    }
#ifdef RUNTIME_DEBUG
    printf(" - '");
    print_string(stdout, v2);
    printf("'\n");
#endif
}

void opcode_COS() {
    VM_FLOAT v1 = stack_pop_float();
#ifdef DOUBLEMATH
    VM_FLOAT v2 = cos(v1);
#else
    VM_FLOAT v2 = cosf(v1);
#endif
    stack_push_float(v2);
#ifdef RUNTIME_DEBUG
    printf("COS %f = %f\n", v1, v2);
#endif
}

void opcode_SIN() {
    VM_FLOAT v1 = stack_pop_float();
#ifdef DOUBLEMATH
    VM_FLOAT v2 = sin(v1);
#else
    VM_FLOAT v2 = sinf(v1);
#endif
    stack_push_float(v2);
#ifdef RUNTIME_DEBUG
    printf("SIN %f = %f\n", v1, v2);
#endif
}

void opcode_ABS_F() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = fabs(v1);
    stack_push_float(v2);
#ifdef RUNTIME_DEBUG
    printf("ABS %f = %f\n", v1, v2);
#endif
}

void opcode_ABS_I() {
    VM_INT v1 = stack_pop_int();
    VM_INT v2 = abs(v1);
    stack_push_int(v2);
#ifdef RUNTIME_DEBUG
    printf("ABS %d = %d\n", v1, v2);
#endif
}

void opcode_RND() {
    int v = rand();
    stack_push_int(v);
#ifdef RUNTIME_DEBUG
    printf("RND = %d, maximum is %d\n", v, RAND_MAX);
#endif
}

void opcode_TAN() {
    VM_FLOAT v1 = stack_pop_float();
#ifdef DOUBLEMATH
    VM_FLOAT v2 = tan(v1);
#else
    VM_FLOAT v2 = tanf(v1);
#endif
    stack_push_float(v2);
#ifdef RUNTIME_DEBUG
    printf("TAN %f = %f\n", v1, v2);
#endif
}

void opcode_ATAN() {
    VM_FLOAT v1 = stack_pop_float();
#ifdef DOUBLEMATH
    VM_FLOAT v2 = atan(v1);
#else
    VM_FLOAT v2 = atanf(v1);
#endif
    stack_push_float(v2);
#ifdef RUNTIME_DEBUG
    printf("ATAN %f = %f\n", v1, v2);
#endif
}

void opcode_SQR() {
    VM_FLOAT v1 = stack_pop_float();
#ifdef DOUBLEMATH
    VM_FLOAT v2 = sqrt(v1);
#else
    VM_FLOAT v2 = sqrtf(v1);
#endif
    stack_push_float(v2);
#ifdef RUNTIME_DEBUG
    printf("SQR %f = %f\n", v1, v2);
#endif
}

void opcode_LN() {
    VM_FLOAT v1 = stack_pop_float();
#ifdef DOUBLEMATH
    VM_FLOAT v2 = log(v1);
#else
    VM_FLOAT v2 = logf(v1);
#endif
    stack_push_float(v2);
#ifdef RUNTIME_DEBUG
    printf("LN %f = %f\n", v1, v2);
#endif
}

void opcode_EXP() {
    VM_FLOAT v1 = stack_pop_float();
#ifdef DOUBLEMATH
    VM_FLOAT v2 = exp(v1);
#else
    VM_FLOAT v2 = expf(v1);
#endif
    stack_push_float(v2);
#ifdef RUNTIME_DEBUG
    printf("EXP %f = %f\n", v1, v2);
#endif
}

void run(VM *vm) {
    printf("\nRunning!\n");
    printf("--------\n\n");
    run_vm = vm;

    // Reset data position
    run_vm->pc = 0;
    run_vm->sp = 0;
    run_vm->fsp = 0;
    run_vm->csp = 0;
    run_vm->ssp = 0;
    run_vm->bsp = 0;
    run_vm->data_position = run_vm->fixup_first;
    while (1) {
        if (vm->data_position == NULL || run_vm->data_position->type == FIXUP_DATA)
            break;
        run_vm->data_position = run_vm->data_position->next;
    }

    // Setup jump table for opcodes
    for (int i = 0; i < LAST; i++) {
        OPCODES[i] = NULL;
    }
    OPCODES[HALT] = opcode_HALT;
    OPCODES[DATA] = opcode_DATA;
    OPCODES[RETURN] = opcode_RETURN;
    OPCODES[RETURN_FN] = opcode_RETURN_FN;
    OPCODES[RETURN_DATA] = opcode_RETURN_DATA;

    OPCODES[CONST_I] = opcode_CONST_I;
    OPCODES[LOAD_F] = opcode_LOAD_F;
    OPCODES[LOAD_I] = opcode_LOAD_I;
    OPCODES[LOAD_S] = opcode_LOAD_S;
    OPCODES[LOAD_F_ARRAY] = opcode_LOAD_F_ARRAY;
    OPCODES[LOAD_I_ARRAY] = opcode_LOAD_I_ARRAY;
    OPCODES[STORE_I] = opcode_STORE_I;
    OPCODES[STORE_F] = opcode_STORE_F;
    OPCODES[STORE_I_ARRAY] = opcode_STORE_I_ARRAY;
    OPCODES[STORE_F_ARRAY] = opcode_STORE_F_ARRAY;
    OPCODES[STORE_S_ARRAY] = opcode_unsupported;
    OPCODES[STORE_S] = opcode_STORE_S;
    OPCODES[STORE_I_STORAGE] = opcode_STORE_STORAGE;

    OPCODES[DIM_F] = opcode_DIM_F;
    OPCODES[DIM_I] = opcode_DIM_I;
    OPCODES[DIM_I_STORAGE] = opcode_DIM_STORAGE;

    OPCODES[I_TO_F] = opcode_I_TO_F;
    OPCODES[F_TO_I] = opcode_F_TO_I;
    OPCODES[I_TO_S] = opcode_I_TO_S;
    OPCODES[F_TO_S] = opcode_unsupported;
    OPCODES[CONV_F] = opcode_CONV_F;
    OPCODES[CONV_I] = opcode_CONV_I;
    OPCODES[CONV_S] = opcode_CONV_S;

    OPCODES[PAR_I] = opcode_PAR_I;
    OPCODES[PAR_F] = opcode_PAR_F;
    OPCODES[PAR_S] = opcode_PAR_S;
    OPCODES[UNPACK_I] = opcode_UNPACK_I;
    OPCODES[UNPACK_F] = opcode_UNPACK_F;
    OPCODES[UNPACK_S] = opcode_UNPACK_S;

    OPCODES[PUSH_PC] = opcode_PUSH_PC;
    OPCODES[JUMP] = opcode_JUMP;
    OPCODES[CALL] = opcode_CALL;
    OPCODES[JNE] = opcode_JNE;
    OPCODES[NEXT_I] = opcode_NEXT_I;
    OPCODES[NEXT_F] = opcode_NEXT_F;
    OPCODES[DUP_F] = opcode_DUP_F;
    OPCODES[DUP_I] = opcode_DUP_I;
    OPCODES[ROT_F] = opcode_ROT_F;
    OPCODES[ROT_I] = opcode_ROT_I;
    OPCODES[ADD_F] = opcode_ADD_F;
    OPCODES[ADD_I] = opcode_ADD_I;
    OPCODES[ADD_S] = opcode_ADD_S;
    OPCODES[SUBTRACT_F] = opcode_SUBTRACT_F;
    OPCODES[SUBTRACT_I] = opcode_SUBTRACT_I;
    OPCODES[DIVIDE_F] = opcode_DIVIDE_F;
    OPCODES[DIVIDE_I] = opcode_DIVIDE_I;
    OPCODES[MULTIPLY_F] = opcode_MULTIPLY_F;
    OPCODES[MULTIPLY_I] = opcode_MULTIPLY_I;
    OPCODES[DIV_F] = opcode_DIV_F;
    OPCODES[DIV_I] = opcode_DIV_I;
    OPCODES[MOD_F] = opcode_MOD_F;
    OPCODES[MOD_I] = opcode_MOD_I;

    OPCODES[CMP_E_F] = opcode_CMP_E_F;
    OPCODES[CMP_E_I] = opcode_CMP_E_I;
    OPCODES[CMP_E_S] = opcode_CMP_E_S;
    OPCODES[CMP_NE_F] = opcode_CMP_NE_F;
    OPCODES[CMP_NE_I] = opcode_CMP_NE_I;
    OPCODES[CMP_NE_S] = opcode_CMP_NE_S;
    OPCODES[CMP_G_F] = opcode_CMP_G_F;
    OPCODES[CMP_G_I] = opcode_CMP_G_I;
    OPCODES[CMP_L_F] = opcode_CMP_L_F;
    OPCODES[CMP_L_I] = opcode_CMP_L_I;
    OPCODES[CMP_GE_F] = opcode_CMP_GE_F;
    OPCODES[CMP_GE_I] = opcode_CMP_GE_I;
    OPCODES[CMP_LE_F] = opcode_CMP_LE_F;
    OPCODES[CMP_LE_I] = opcode_CMP_LE_I;

    OPCODES[OR_F] = opcode_OR_F;
    OPCODES[OR_I] = opcode_OR_I;
    OPCODES[PRINT_HEX] = opcode_PRINT_HEX;
    OPCODES[PRINT_F] = opcode_PRINT_F;
    OPCODES[PRINT_I] = opcode_PRINT_I;
    OPCODES[PRINT_S] = opcode_PRINT_S;
    OPCODES[PRINT_NL] = opcode_PRINT_NL;
    OPCODES[CHRS] = opcode_CHRS;
    OPCODES[SQR] = opcode_SQR;
    OPCODES[LN] = opcode_LN;
    OPCODES[EXP] = opcode_EXP;
    OPCODES[ATN] = opcode_ATAN;
    OPCODES[TAN] = opcode_TAN;
    OPCODES[COS] = opcode_COS;
    OPCODES[SIN] = opcode_SIN;
    OPCODES[RND] = opcode_RND;
    OPCODES[ABS_F] = opcode_ABS_F;
    OPCODES[ABS_I] = opcode_ABS_I;

    OPCODES[MIDS] = opcode_MIDS;
    OPCODES[RIGHTS] = opcode_RIGHTS;
    OPCODES[LEFTS] = opcode_LEFTS;
    OPCODES[LEN] = opcode_LEN;
    OPCODES[STRINGS] = opcode_STRINGS;

    // Basically BASIC calls
    OPCODES[SYS] = opcode_SYS;
    SYS_init();
    init_clock();

    // Loop through bytecodes until we find a HALT
    quit = FALSE;
    while (!quit) {
        bc = &run_vm->code[run_vm->pc++];
#ifdef RUNTIME_DEBUG
        printf("0x%08X [%4d] [%4d][%4d][%4d][%4d]: ", run_vm->pc - 1, bc->opcode, run_vm->sp, run_vm->fsp, run_vm->ssp, run_vm->csp);
#endif
        void (*func)(VM *) = (*OPCODES[bc->opcode]);
        func(vm);
    };
}
