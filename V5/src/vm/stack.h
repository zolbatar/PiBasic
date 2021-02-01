#pragma once
#include "../exception.h"
#include "../types.h"
#include "boxed.h"
#include "bytecode.h"
#include "performance.h"
#include <iostream>
#include <sstream>

extern Environment g_env;

class Stack {

public:
    Stack()
    {
        stack.resize(StackSize);
    }

    inline void check(Bytecode& bc)
    {
        if (stack_pointer == 0) {
            throw DARICException(ErrorLocation::RUNTIME, bc.filename(), bc.line_number, bc.char_position, "Empty stack (This is normally an internal DARIC error)");
        }
        if (stack_pointer == StackSize - 1) {
            throw DARICException(ErrorLocation::RUNTIME, bc.filename(), bc.line_number, bc.char_position, "Full stack (This may be a recursion issue, or an internal DARIC error)");
        }
    }

    inline void drop() { --stack_pointer; }

    inline void push_float(Bytecode& bc, const VM_FLOAT v)
    {
        Boxed* b = &stack[stack_pointer++];
        b->value_float = v;
        b->type = Type::FLOAT;
        if (!performance_build)
            check(bc);
    }

    inline void push_int(Bytecode& bc, const VM_INT v)
    {
        Boxed* b = &stack[stack_pointer++];
        b->value_int = v;
        b->type = Type::INTEGER;
        if (!performance_build)
            check(bc);
    }

    inline void push_string(Bytecode& bc, const VM_STRING& v)
    {
        Boxed* b = &stack[stack_pointer++];
        b->value_string = v;
        b->type = Type::STRING;
        if (!performance_build)
            check(bc);
    }

    inline Boxed& pop_boxed(Bytecode& bc)
    {
        if (!performance_build)
            check(bc);
        return stack[--stack_pointer];
    }

    inline VM_FLOAT pop_float(Bytecode& bc)
    {
        if (!performance_build)
            check(bc);
        Boxed* b = &stack[--stack_pointer];
        if (b->type != Type::FLOAT) {
            throw DARICException(ErrorLocation::RUNTIME, bc.filename(), bc.line_number, bc.char_position, "Expected float on stack (This may be a recursion issue, or an internal DARIC error)");
        }
        return b->value_float;
    }

    inline VM_INT pop_int(Bytecode& bc)
    {
        if (!performance_build)
            check(bc);
        Boxed* b = &stack[--stack_pointer];
        if (b->type != Type::INTEGER) {
            throw DARICException(ErrorLocation::RUNTIME, bc.filename(), bc.line_number, bc.char_position, "Expected integer on stack (This may be a recursion issue, or an internal DARIC error)");
        }
        return b->value_int;
    }

    inline VM_INT pop_int_checkless()
    {
        Boxed* b = &stack[--stack_pointer];
        return b->value_int;
    }

    inline VM_STRING pop_string(Bytecode& bc)
    {
        if (!performance_build)
            check(bc);
        Boxed* b = &stack[--stack_pointer];
        if (b->type != Type::STRING) {
            throw DARICException(ErrorLocation::RUNTIME, bc.filename(), bc.line_number, bc.char_position, "Expected string on stack (This may be a recursion issue, or an internal DARIC error)");
        }
        return b->value_string;
    }

private:
    static const int StackSize = 4096;

    size_t stack_pointer = 0; // Stack pointer
    std::vector<Boxed> stack; // Stack, stored as vectors for speed
};