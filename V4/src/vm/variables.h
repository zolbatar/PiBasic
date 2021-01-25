#pragma once
#include "boxed.h"
#include "bytecode.h"
#include "stack.h"
#include <memory>

class Variables {
public:
    Variables()
    {
        locals = std::make_shared<std::vector<Boxed>>(0);
    }

    void store_chained_variables(Stack& stack)
    {
        VM_INT count = stack.pop_int_checkless();
        for (int i = 0; i < count; i++) {
            auto v = stack.pop_int_checkless();
            auto variable = get_variable_by_int(v);
            chained_variables.push_back(std::move(*variable));
        }
    }
    std::vector<Boxed> get_chained_variables() { return chained_variables; }

    std::vector<Boxed>* get_variables() { return &variables; }

    std::shared_ptr<std::vector<Boxed>> get_locals() { return locals; }

    void set_locals(std::vector<Boxed> v)
    {
        locals = std::make_shared<std::vector<Boxed>>(v);
    }

    Boxed* get_variable(Bytecode* bc)
    {
        if (bc->is_local_variable()) {
            return &((*locals)[bc->get_local()]);
        } else {
            return &variables[bc->get_global()];
        }
    };

    Boxed* get_variable_by_int(int v)
    {
        if (v & LocalVariableFlag) {
            return &((*locals)[static_cast<size_t>(v ^ LocalVariableFlag)]);
        } else {
            return &variables[static_cast<size_t>(v)];
        }
    };

private:
    std::shared_ptr<std::vector<Boxed>> locals; // Local variables
    std::vector<Boxed> variables;
    std::vector<Boxed> chained_variables;
};