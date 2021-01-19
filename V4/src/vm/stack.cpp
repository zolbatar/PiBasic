#include "vm.h"
#include <stdlib.h>

void VM::stack_check()
{
    if (stack_pointer == 0) {
        std::cout << std::endl
                  << "PANIC: Stack empty" << std::endl;
        exit(1);
    }
    if (stack_pointer == StackSize - 1) {
        std::cout << std::endl
                  << "PANIC: Stack full" << std::endl;
        exit(1);
    }
}

void VM::stack_drop() { --stack_pointer; }

void VM::stack_push_float(const VM_FLOAT v)
{
    Boxed* b = &stack[stack_pointer++];
    b->value_float = v;
    b->type = Type::REAL;
    if (CheckedStacks)
        stack_check();
}

void VM::stack_push_int(const VM_INT v)
{
    Boxed* b = &stack[stack_pointer++];
    b->value_int = v;
    b->type = Type::INTEGER;
    if (CheckedStacks)
        stack_check();
}

void VM::stack_push_string(const VM_STRING& v)
{
    Boxed* b = &stack[stack_pointer++];
    b->value_string = v;
    b->type = Type::STRING;
    if (CheckedStacks)
        stack_check();
}

Boxed* VM::stack_pop_boxed()
{
    if (CheckedStacks)
        stack_check();
    return &stack[--stack_pointer];
}

VM_FLOAT VM::stack_pop_float()
{
    if (CheckedStacks)
        stack_check();
    Boxed* b = &stack[--stack_pointer];
    if (b->type != Type::REAL) {
        std::cout << "Expected float on stack at line " << bc.line_number << ", file index " << bc.file_number << ". This is normally an internal DARIC error" << std::endl;
        exit(1);
    }
    return b->value_float;
}

VM_INT VM::stack_pop_int()
{
    if (CheckedStacks)
        stack_check();
    Boxed* b = &stack[--stack_pointer];
    if (b->type != Type::INTEGER) {
        std::cout << "Expected integer on stack at line " << bc.line_number << ", file index " << bc.file_number << ". This is normally an internal DARIC error" << std::endl;
        exit(1);
    }
    return b->value_int;
}

VM_STRING VM::stack_pop_string()
{
    if (CheckedStacks)
        stack_check();
    Boxed* b = &stack[--stack_pointer];
    if (b->type != Type::STRING) {
        std::cout << "Expected string on stack at line " << bc.line_number << ", file index " << bc.file_number << ". This is normally an internal DARIC error" << std::endl;
        exit(1);
    }
    return b->value_string;
}
