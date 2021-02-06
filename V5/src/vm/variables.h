#pragma once
#include "boxed.h"
#include "bytecode.h"
#include "stack.h"
#include "vm_function.h"
#include <cassert>
#include <memory>
#include <stack>

class Variables {
public:
    Variables()
    {
        locals = std::vector<Boxed>(0);
    }

/*    void store_chained_variables(Stack& stack)
    {
        VM_INT count = stack.pop_int_checkless();
        for (int i = 0; i < count; i++) {
            auto v = stack.pop_int_checkless();
            chained_variables.push_back(std::move(get_variable_by_int(bc, v, false)));
        }
    }*/
    std::vector<Boxed> get_chained_variables() { return chained_variables; }
    std::vector<Boxed>& get_variables() { return variables; }
    void set_variables_size(int size) { variables.resize(size); }
    void add_variable(Boxed b, int index) { variables.at(index) = std::move(b); }
    std::vector<Boxed>& get_locals() { return locals; }

    inline Boxed* get_variable(Bytecode& bc, bool init_check)
    {
        if (bc.is_local_variable()) {
            assert(bc.local_index() <= locals.size());
            if (init_check && locals[bc.local_index()].get_type() == Type::NOTYPE) {
                throw DARICException(ErrorLocation::RUNTIME, bc.filename(), bc.line_number, bc.char_position, "Use of uninitialised variable, is it a LOCAL being used before being defined?");
            }
            return &locals[bc.local_index()];
        } else {
            assert(bc.global_index() <= variables.size());
            return &variables[bc.global_index()];
        }
    };

    inline Boxed* get_variable_by_int(Bytecode& bc, int v, bool init_check)
    {
        if (v & LocalVariableFlag) {
            auto l = locals[static_cast<size_t>(v ^ LocalVariableFlag)];
            if (init_check && l.get_type() == Type::NOTYPE) {
                throw DARICException(ErrorLocation::RUNTIME, bc.filename(), bc.line_number, bc.char_position, "Use of uninitialised variable, is it a LOCAL being used before being defined?");
            }
            return &l;
        } else {
            return &variables[static_cast<size_t>(v)];
        }
    };

    inline Boxed* get_variable_by_int_checkless(int v)
    {
        if (v & LocalVariableFlag) {
            return &locals[static_cast<size_t>(v ^ LocalVariableFlag)];
        } else {
            return &variables[static_cast<size_t>(v)];
        }
    };

    inline void revert_locals_on_return()
    {
        auto locals = locals_stack.top();
        locals_stack.pop();
    }

    inline void create_locals_on_call(VMFunction& function, bool debug)
    {
        locals_stack.push(std::move(locals));
        assert(locals.size() == 0);
        if (debug) {
            for (UINT32 i = 0; i < function.locals_count; i++) {
                // Move names for runtime log purposes
                Boxed b;
                b.name = function.locals[i].name;
                b.set_type_nodefault(function.locals[i].get_type());
                locals.push_back(std::move(b));
            }
        } else {
            locals = std::vector<Boxed>(function.locals_count);
        }
    }

private:
    std::vector<Boxed> locals; // Local variables
    std::stack<std::vector<Boxed>> locals_stack; // Stored locals, for use on RETURN
    std::vector<Boxed> variables;
    std::vector<Boxed> chained_variables; // These are for CHAIN/EXPECT
};