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

    void push_float(const VM_FLOAT v)
    {
        Boxed b;
        b.set_float(v);
        stack.push(std::move(b));
        //std::cout << "float: " << v << "\n";
    }

    void push_int(const VM_INT v)
    {
        Boxed b;
        b.set_integer(v);
        stack.push(std::move(b));
        //std::cout << "int: " << v << "\n";
    }

    void push_string(const VM_STRING& v)
    {
        Boxed b;
        b.set_string(v);
        stack.push(std::move(b));
    }

    void push_boxed(Boxed b)
    {
        stack.push(b);
    }

    Boxed pop_boxed()
    {
        auto a = stack.top();
        stack.pop();
        return a;
    }

    VM_FLOAT pop_float(Bytecode& bc)
    {
        if (!performance_build && stack.empty()) {
            auto flp = file_and_line_lookup(bc.line_number);
            throw DARICException(ErrorLocation::RUNTIME, flp.filename, flp.line, bc.char_position, "Empty stack and expected float on stack - this is normally an internal DARIC error");
        }
        auto b = stack.top();
        stack.pop();
        if (b.get_type() != Type::FLOAT) {
            auto flp = file_and_line_lookup(bc.line_number);
            throw DARICException(ErrorLocation::RUNTIME, flp.filename, flp.line, bc.char_position, "Expected float on stack - this is normally an internal DARIC error");
        }
        return b.get_float();
    }

    VM_INT pop_int(Bytecode& bc)
    {
        if (!performance_build && stack.empty()) {
            auto flp = file_and_line_lookup(bc.line_number);
            throw DARICException(ErrorLocation::RUNTIME, flp.filename, flp.line, bc.char_position, "Empty stack and expected integer on stack - this is normally an internal DARIC error");
        }
        auto b = stack.top();
        stack.pop();
        if (b.get_type() != Type::INTEGER) {
            auto flp = file_and_line_lookup(bc.line_number);
            throw DARICException(ErrorLocation::RUNTIME, flp.filename, flp.line, bc.char_position, "Expected integer on stack - this is normally an internal DARIC error");
        }
        return b.get_integer();
    }

    VM_INT pop_int_checkless()
    {
        auto b = stack.top();
        stack.pop();
        return b.get_integer();
    }

    VM_STRING pop_string(Bytecode& bc)
    {
        if (!performance_build && stack.empty()) {
            auto flp = file_and_line_lookup(bc.line_number);
            throw DARICException(ErrorLocation::RUNTIME, flp.filename, flp.line, bc.char_position, "Empty stack and expected string on stack - this is normally an internal DARIC error");
        }
        auto b = stack.top();
        stack.pop();
        if (b.get_type() != Type::STRING) {
            auto flp = file_and_line_lookup(bc.line_number);
            throw DARICException(ErrorLocation::RUNTIME, flp.filename, flp.line, bc.char_position, "Expected string on stack - this is normally an internal DARIC error");
        }
        return b.get_string();
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