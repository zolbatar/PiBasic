#pragma once
#include "../types.h"
#include "boxed.h"
#include "bytecode.h"
#include <iostream>
#include <sstream>

extern std::list<std::string> error_list;
extern bool interactive;
extern std::unique_ptr<Graphics> g_graphics;

class Stack {

public:
    Stack()
    {
        stack.resize(StackSize);
    }

    inline void check()
    {
        if (stack_pointer == 0) {
            if (!interactive) {
                std::cout << "PANIC: Stack empty" << std::endl;
            } else {
                g_graphics->print_console("PANIC: Stack empty. Press a key to quit.\r");
                g_graphics->get();
            }
            exit(1);
        }
        if (stack_pointer == StackSize - 1) {
            if (!interactive) {
                std::cout << "PANIC: Stack full" << std::endl;
            } else {
                g_graphics->print_console("PANIC: Stack full. Press a key to quit.\r");
                g_graphics->get();
            }
            exit(1);
        }
    }

    inline void drop() { --stack_pointer; }

    inline void push_float(const VM_FLOAT v)
    {
        Boxed* b = &stack[stack_pointer++];
        b->value_float = v;
        b->type = Type::REAL;
        if (CheckedStacks)
            check();
    }

    inline void push_int(const VM_INT v)
    {
        Boxed* b = &stack[stack_pointer++];
        b->value_int = v;
        b->type = Type::INTEGER;
        if (CheckedStacks)
            check();
    }

    inline void push_string(const VM_STRING& v)
    {
        Boxed* b = &stack[stack_pointer++];
        b->value_string = v;
        b->type = Type::STRING;
        if (CheckedStacks)
            check();
    }

    inline Boxed& pop_boxed()
    {
        if (CheckedStacks)
            check();
        return stack[--stack_pointer];
    }

    inline VM_FLOAT pop_float(Bytecode& bc)
    {
        if (CheckedStacks)
            check();
        Boxed* b = &stack[--stack_pointer];
        if (b->type != Type::REAL) {
            std::stringstream s;
            s << "Expected float on stack" << bc.location_string() << ". This is normally an internal DARIC error. ";
            if (!interactive) {
                std::cout << s.str() << std::endl;
            } else {
                g_graphics->print_console(s.str() + ". Press a key to quit.\r");
                g_graphics->get();
            }
            exit(1);
        }
        return b->value_float;
    }

    inline VM_INT pop_int(Bytecode& bc)
    {
        if (CheckedStacks)
            check();
        Boxed* b = &stack[--stack_pointer];
        if (b->type != Type::INTEGER) {
            std::stringstream s;
            s << "Expected integer on stack" << bc.location_string() << ". This is normally an internal DARIC error. ";
            if (!interactive) {
                std::cout << s.str() << std::endl;
            } else {
                g_graphics->print_console(s.str() + ". Press a key to quit.\r");
                g_graphics->get();
            }
            exit(1);
        }
        return b->value_int;
    }

    inline VM_INT pop_int_checkless()
    {
        if (CheckedStacks)
            check();
        Boxed* b = &stack[--stack_pointer];
        return b->value_int;
    }

    inline VM_STRING pop_string(Bytecode& bc)
    {
        if (CheckedStacks)
            check();
        Boxed* b = &stack[--stack_pointer];
        if (b->type != Type::STRING) {
            std::stringstream s;
            s << "Expected string on stack" << bc.location_string() << ". This is normally an internal DARIC error. ";
            if (!interactive) {
                std::cout << s.str() << std::endl;
            } else {
                g_graphics->print_console(s.str() + ". Press a key to quit.\r");
                g_graphics->get();
            }
            exit(1);
        }
        return b->value_string;
    }

private:
    static const int StackSize = 4096;
    static const bool CheckedStacks = false;

    size_t stack_pointer = 0; // Stack pointer
    std::vector<Boxed> stack; // Stack, stored as vectors for speed
};