#include "compiler.h"

UINT32 Compiler::constant_float_create(VM_FLOAT v)
{
    if (phase == CompilerPhase::COMPILE) {
        // Do we have a matching constant first?
        for (auto c : constants) {
            if (c.type == Type::REAL && c.value_float == v) {
                return c.index;
            }
        }
        Boxed _var;
        _var.constant = true;
        _var.value_int = (VM_INT)v;
        _var.value_float = v;
        _var.index = global_var_index++;
        _var.type = Type::REAL;
        constants.push_back(_var);
        var = &_var;
        return _var.index;
    } else {
        return 0;
    }
}

UINT32 Compiler::constant_string_create(std::string v)
{
    if (phase == CompilerPhase::COMPILE) {
        // Do we have a matching constant first?
        for (auto c : constants) {
            if (c.type == Type::STRING && c.value_string.compare(v) == 0) {
                return c.index;
            }
        }
        Boxed _var;
        _var.constant = true;
        _var.value_string = v;
        _var.index = global_var_index++;
        _var.type = Type::STRING;
        constants.push_back(_var);
        var = &_var;
        return _var.index;
    } else {
        return 0;
    }
}