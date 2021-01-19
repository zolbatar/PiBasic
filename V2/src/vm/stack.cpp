#include <stdlib.h>
#include "vm.h"

void VM::stack_check() {
    if (stack_pointer == 0) {
        std::cout << std::endl << "PANIC: Stack empty" << std::endl;
        exit(1);
    }
}

void VM::stack_drop() { --stack_pointer; }

void VM::stack_push_float(const VM_FLOAT v) {
    Boxed *b = &stack[stack_pointer++];
    b->value_float = v;
    if (CheckedTypes) {
        b->type = Type::Float;
    }
}

void VM::stack_push_int(const VM_INT v) {
    Boxed *b = &stack[stack_pointer++];
    b->value_int = v;
    if (CheckedTypes) {
        b->type = Type::Integer;
    }
}

void VM::stack_push_string(const VM_STRING &v) {
    Boxed *b = &stack[stack_pointer++];
    b->value_string = v;
    if (CheckedTypes) {
        b->type = Type::String;
    }
}

Boxed *VM::stack_pop_boxed() {
    if (CheckedStacks)
        stack_check();
    return &stack[--stack_pointer];
}

VM_FLOAT VM::stack_pop_float() {
    if (CheckedStacks)
        stack_check();
    Boxed *b = &stack[--stack_pointer];
    if (CheckedTypes && b->type != Type::Float) {
        std::cout << "Expected float on stack" << std::endl;
        exit(1);
    }
    if (CheckedTypes) {
        b->type = Type::None;
    }
    return b->value_float;
};

VM_INT VM::stack_pop_int() {
    if (CheckedStacks)
        stack_check();
    Boxed *b = &stack[--stack_pointer];
    if (CheckedTypes && b->type != Type::Integer) {
        std::cout << "Expected integer on stack" << std::endl;
        exit(1);
    }
    if (CheckedTypes) {
        b->type = Type::None;
    }
    return b->value_int;
};

VM_STRING VM::stack_pop_string() {
    if (CheckedStacks)
        stack_check();
    Boxed *b = &stack[--stack_pointer];
    if (CheckedTypes && b->type != Type::String) {
        std::cout << "Expected string on stack" << std::endl;
        exit(1);
    }
    b->type = Type::None;
    return b->value_string;
};
