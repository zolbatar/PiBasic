#pragma once
#include "../types.h"
#include "../vm/type.h"
#include <vector>

class Boxed {
public:
    Boxed() { }
    Boxed(std::string name, Type type, int index)
    {
        this->name = name;
        this->type = type;
        this->index = index;
    }
    Type type = Type::NOTYPE;
    UINT32 index;
    bool constant = false;
    std::string name;
    VM_INT value_int;
    VM_FLOAT value_float;
    VM_STRING value_string;
    std::vector<Boxed> fields;
    std::vector<UINT32> array_definition;
    std::vector<VM_INT> value_int_array;
    std::vector<VM_FLOAT> value_float_array;
    std::vector<VM_STRING> value_string_array;
};
