#pragma once
#include "boxed.h"
#include "bytecode.h"
#include "stack.h"
#include <memory>

class Variables {
public:
    Variables()
    {
        locals = std::vector<Boxed>(0);
    }

    void store_chained_variables(Stack& stack)
    {
        VM_INT count = stack.pop_int_checkless();
        for (int i = 0; i < count; i++) {
            auto v = stack.pop_int_checkless();
            chained_variables.push_back(std::move(get_variable_by_int(v)));
        }
    }
    std::vector<Boxed> get_chained_variables() { return chained_variables; }
    std::vector<Boxed>& get_variables() { return variables; }
    void set_variables_size(int size) { variables.resize(size); }
    void add_variable(Boxed b, int index) { variables.at(index) = std::move(b); }
    std::vector<Boxed> get_locals() { return locals; }

    void set_locals(std::vector<Boxed> v)
    {
        locals = v;
    }

    inline Boxed& get_variable(Bytecode& bc)
    {
        if (bc.is_local_variable()) {
            return locals[bc.local_index()];
        } else {
            return variables[bc.global_index()];
        }
    };

    inline Boxed& get_variable_by_int(int v)
    {
        if (v & LocalVariableFlag) {
            return locals[static_cast<size_t>(v ^ LocalVariableFlag)];
        } else {
            return variables[static_cast<size_t>(v)];
        }
    };

private:
    std::vector<Boxed> locals; // Local variables
    std::vector<Boxed> variables;
    std::vector<Boxed> chained_variables;
};