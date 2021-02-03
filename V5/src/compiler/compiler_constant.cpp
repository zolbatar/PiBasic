#include "compiler.h"

UINT32 Compiler::constant_float_create(VM_FLOAT v)
{
    if (phase == CompilerPhase::COMPILE) {
        // Do we have a matching constant first?
        for (auto c : constants) {
            if (c.get_type() == Type::FLOAT && c.value_float == v) {
                return c.index;
            }
        }
        Boxed var;
        var.set_float(v);
        var.constant = true;
        var.index = global_var_index++;
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
            if (c.get_type() == Type::STRING && c.value_string.compare(v) == 0) {
                return c.index;
            }
        }
        Boxed var;
        var.set_string(v);
        var.constant = true;
        var.index = global_var_index++;
        constants.push_back(var);
        current_var.id = var.index;
        return var.index;
    } else {
        return 0;
    }
}