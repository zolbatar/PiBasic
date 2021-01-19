#ifndef __VARIABLE_H
#define __VARIABLE_H
#include "pibasic.h"

struct VariableString {
    char *value;
    UINT32 length;
};

struct Variable {
    char *name;
    enum EVarType type;
    struct Variable *next;
    bool constant;

    // The following is used by the bytecode engine
    VM_INT value_int;
    VM_FLOAT value_float;
    struct VariableString value_string;

    // These are used for arrays
    VM_INT *value_int_array;
    VM_FLOAT *value_float_array;

    // For local variables
    UINT32 index;
    bool local;
    int fn_proc_index;
};
#endif