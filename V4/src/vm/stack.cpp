#include "stack.h"
#include "vm.h"
#include <stdlib.h>

extern std::list<std::string> error_list;

void Stack::check()
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

void Stack::drop() { --stack_pointer; }

void Stack::push_float(const VM_FLOAT v)
{
    Boxed* b = &stack[stack_pointer++];
    b->value_float = v;
    b->type = Type::REAL;
    if (CheckedStacks)
        check();
}

void Stack::push_int(const VM_INT v)
{
    Boxed* b = &stack[stack_pointer++];
    b->value_int = v;
    b->type = Type::INTEGER;
    if (CheckedStacks)
        check();
}

void Stack::push_string(const VM_STRING& v)
{
    Boxed* b = &stack[stack_pointer++];
    b->value_string = v;
    b->type = Type::STRING;
    if (CheckedStacks)
        check();
}

Boxed* Stack::pop_boxed()
{
    if (CheckedStacks)
        check();
    return &stack[--stack_pointer];
}

VM_FLOAT Stack::pop_float(Bytecode& bc)
{
    if (CheckedStacks)
        check();
    Boxed* b = &stack[--stack_pointer];
    if (b->type != Type::REAL) {
        std::cout << "Expected float on stack at line " << bc.get_line_number() << ", file index " << bc.get_file_number() << ". This is normally an internal DARIC error" << std::endl;
        exit(1);
    }
    return b->value_float;
}

VM_INT Stack::pop_int(Bytecode& bc)
{
    if (CheckedStacks)
        check();
    Boxed* b = &stack[--stack_pointer];
    if (b->type != Type::INTEGER) {
        std::cout << "Expected integer on stack at line " << bc.get_line_number() << ", file index " << bc.get_file_number() << ". This is normally an internal DARIC error" << std::endl;
        exit(1);
    }
    return b->value_int;
}

VM_INT Stack::pop_int_checkless()
{
    if (CheckedStacks)
        check();
    Boxed* b = &stack[--stack_pointer];
    return b->value_int;
}

VM_STRING Stack::pop_string(Bytecode& bc)
{
    if (CheckedStacks)
        check();
    Boxed* b = &stack[--stack_pointer];
    if (b->type != Type::STRING) {
        std::cout << "Expected string on stack at line " << bc.get_line_number() << ", file index " << bc.get_file_number() << ". This is normally an internal DARIC error" << std::endl;
        exit(1);
    }
    return b->value_string;
}
