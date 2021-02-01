#pragma once
#include "../types.h"
#include "boxed.h"
#include "bytecode.h"
#include <iostream>
#include <sstream>
#include "performance.h"

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
            std::stringstream s;
            s << "Stack empty" << bc.location_string() << ". This is normally an internal DARIC error. ";
            throw std::runtime_error(s.str());
        }
        if (stack_pointer == StackSize - 1) {
            std::stringstream s;
            s << "Stack full" << bc.location_string() << ". This is either a recursion problem in your program or an internal DARIC error. ";
            throw std::runtime_error(s.str());
        }
    }

    inline void drop() { --stack_pointer; }

    inline void push_float(Bytecode& bc, const VM_FLOAT v)
    {
        Boxed* b = &stack[stack_pointer++];
        b->value_float = v;
        b->type = Type::REAL;
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
        if (b->type != Type::REAL) {
            std::stringstream s;
            s << "Expected float on stack" << bc.location_string() << ". This is normally an internal DARIC error. ";
            throw std::runtime_error(s.str());
        }
        return b->value_float;
    }

    inline VM_INT pop_int(Bytecode& bc)
    {
        if (!performance_build)
            check(bc);
        Boxed* b = &stack[--stack_pointer];
        if (b->type != Type::INTEGER) {
            std::stringstream s;
            s << "Expected integer on stack" << bc.location_string() << ". This is normally an internal DARIC error. ";
            throw std::runtime_error(s.str());
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
            std::stringstream s;
            s << "Expected string on stack" << bc.location_string() << ". This is normally an internal DARIC error. ";
            throw std::runtime_error(s.str());
        }
        return b->value_string;
    }

private:
    static const int StackSize = 4096;

    size_t stack_pointer = 0; // Stack pointer
    std::vector<Boxed> stack; // Stack, stored as vectors for speed
};