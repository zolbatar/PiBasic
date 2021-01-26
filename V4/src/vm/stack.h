#pragma once
#include "../types.h"
#include "boxed.h"
#include "bytecode.h"

class Stack {

public:
    Stack()
    {
        stack.resize(StackSize);
    }
    void check();
    void push_float(const VM_FLOAT v);
    void push_int(const VM_INT v);
    void push_string(const VM_STRING& v);
    void drop();
    Boxed& pop_boxed();
    VM_FLOAT pop_float(Bytecode& bc);
    VM_INT pop_int(Bytecode& bc);
    VM_STRING pop_string(Bytecode& bc);
    VM_INT pop_int_checkless();

private:
    static const int StackSize = 256;
    static const bool CheckedStacks = false;

    size_t stack_pointer = 0; // Stack pointer
    std::vector<Boxed> stack; // Stack, stored as vectors for speed
};