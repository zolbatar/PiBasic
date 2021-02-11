#pragma once
#include "../types.h"
#include "../vm/type.h"
#include <vector>

class Boxed {
public:
    Boxed() {};
    Boxed(std::string name, Type type, int index)
    {
        this->name = name;
        this->index = index;
        set_type_default(type);
    }

    void set_integer(VM_INT value)
    {
        type = Type::INTEGER;
        value_int = value;
    }

    void set_float(VM_FLOAT value)
    {
        type = Type::FLOAT;
        value_float = value;
    }

    void set_string(VM_STRING value)
    {
        type = Type::STRING;
        value_string = value;
    }

    void set_integer_array(VM_INT size)
    {
        type = Type::INTEGER_ARRAY;
        value_int_array.resize(size);
    }

    void set_float_array(VM_INT size)
    {
        type = Type::FLOAT_ARRAY;
        value_float_array.resize(size);
    }

    void set_string_array(VM_INT size)
    {
        type = Type::STRING_ARRAY;
        value_string_array.resize(size);
    }

    void set_type_nodefault(Type t)
    {
        type = t;
    }

    void set_type_default(Type t)
    {
        type = t;
        switch (t) {
        case Type::INTEGER:
            value_int = 0;
            break;
        case Type::FLOAT:
            value_float = 0;
            break;
        case Type::STRING:
            value_string = "";
            break;
        case Type::INTEGER_ARRAY:
            value_int_array.clear();
            break;
        case Type::FLOAT_ARRAY:
            value_float_array.clear();
            break;
        case Type::STRING_ARRAY:
            value_string_array.clear();
            break;
        case Type::TYPE:
        case Type::TYPE_ARRAY:
            break;
        }
    }
    Type get_type() { return type; }

    UINT32 index;
    bool constant = false;
    std::string name;
    std::string custom_type_name;
    VM_INT value_int;
    VM_FLOAT value_float;
    VM_STRING value_string;
    std::vector<Boxed> fields;
    std::vector<UINT32> array_definition;
    std::vector<VM_INT> value_int_array;
    std::vector<VM_FLOAT> value_float_array;
    std::vector<VM_STRING> value_string_array;

private:
    Type type = Type::NOTYPE;
};
