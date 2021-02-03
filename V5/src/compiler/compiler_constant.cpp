#include "compiler.h"

UINT32 Compiler::constant_float_create(VM_FLOAT v)
{
    if (phase == CompilerPhase::COMPILE) {
        // Do we have a matching constant first?
        for (auto c : constants) {
            if (c.type == Type::FLOAT && c.value_float == v) {
                return c.index;
            }
        }
        Boxed var;
        var.constant = true;
        var.value_int = (VM_INT)v;
        var.value_float = v;
        var.index = global_var_index++;
        var.type = Type::FLOAT;
        constants.push_back(var);
        current_var.id = var.index;
        return var.index;
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
        Boxed var;
        var.constant = true;
        var.value_string = v;
        var.index = global_var_index++;
        var.type = Type::STRING;
        constants.push_back(var);
        current_var.id = var.index;
        return var.index;
    } else {
        return 0;
    }
}