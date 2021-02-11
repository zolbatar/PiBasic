#pragma once
#include "../exception.h"
#include "../types.h"
#include "boxed.h"
#include "bytecode.h"
#include "performance.h"
#include <iostream>
#include <sstream>
#include <stack>

extern Environment g_env;

class Stack {

public:
    void drop() { stack.pop(); }

    void push_float(Bytecode& bc, const VM_FLOAT v)
    {
        Boxed b;
        b.set_float(v);
        stack.push(std::move(b));
    }

    void push_int(Bytecode& bc, const VM_INT v)
    {
        Boxed b;
        b.set_integer(v);
        stack.push(std::move(b));
    }

    void push_string(Bytecode& bc, const VM_STRING& v)
    {
        Boxed b;
        b.set_string(v);
        stack.push(std::move(b));
    }

    void push_boxed(Bytecode& bc, Boxed b)
    {
        stack.push(b);
    }

    Boxed pop_boxed(Bytecode& bc)
    {
        auto a = stack.top();
        stack.pop();
        return a;
    }

    VM_FLOAT pop_float(Bytecode& bc)
    {
        auto b = stack.top();
        stack.pop();
        if (b.get_type() != Type::FLOAT) {
            throw DARICException(ErrorLocation::RUNTIME, bc.filename(), bc.line_number, bc.char_position, "Expected float on stack - this is normally an internal DARIC error");
        }
        return b.value_float;
    }

    VM_INT pop_int(Bytecode& bc)
    {
        auto b = stack.top();
        stack.pop();
        if (b.get_type() != Type::INTEGER) {
            throw DARICException(ErrorLocation::RUNTIME, bc.filename(), bc.line_number, bc.char_position, "Expected integer on stack - this is normally an internal DARIC error");
        }
        return b.value_int;
    }

    VM_INT pop_int_checkless()
    {
        auto b = stack.top();
        stack.pop();
        return b.value_int;
    }

    VM_STRING pop_string(Bytecode& bc)
    {
        auto b = stack.top();
        stack.pop();
        if (b.get_type() != Type::STRING) {
            throw DARICException(ErrorLocation::RUNTIME, bc.filename(), bc.line_number, bc.char_position, "Expected string on stack - this is normally an internal DARIC error");
        }
        return b.value_string;
    }

    void clear_stack(Bytecode& bc)
    {
        while (!stack.empty()) { 
            stack.pop();
        }
    }

    inline size_t get_stack_size()
    {
        return stack.size();
    }

private:
    std::stack<Boxed> stack;
};