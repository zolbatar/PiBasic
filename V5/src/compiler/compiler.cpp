#include "compiler.h"
#include <cassert>

void Compiler::reset()
{
    globals.clear();
    global_var_index = 0;
    locals.clear();
    local_var_index = 0;
}

void Compiler::inject_variables(std::vector<Boxed>& variables)
{
    global_var_index = static_cast<int>(variables.size());
    for (auto it = variables.begin(); it != variables.end(); ++it) {
        auto v = (*it);
        globals.insert(std::make_pair(v.name, v));
    }
}

Compiler::Compiler(VM* vm, DARICParser::ProgContext* tree, std::string filename, std::vector<Boxed>& variables)
{
    this->vm = vm;
    this->filename = filename;

    // Lookahead, figure out function definitions and types
    phase = CompilerPhase::LOOKAHEAD;
    inject_variables(variables);
    auto daric = visitProg(tree);
    assert(vm->helper_bytecodes().size == 0);
    assert(stack_size() == 0);
    reset();

    // Size, figure out sizing for jumps etc.
    vm->helper_bytecodes().pc = 0;
    phase = CompilerPhase::SIZE;
    inject_variables(variables);
    daric = visitProg(tree);
    vm->helper_bytecodes().size = vm->helper_bytecodes().pc;
    assert(stack_size() == 0);
    reset();

    // Compile! Build the VM
    vm->helper_bytecodes().pc = 0;
    phase = CompilerPhase::COMPILE;
    inject_variables(variables);
    daric = visitProg(tree);
    assert(stack_size() == 0);

    insert_bytecode(Bytecodes::HALT);

    // Now we MOVE the variables into the VM class
    vm->helper_variables().set_variables_size(global_var_index);
    for (auto g = globals.begin(); g != globals.end(); ++g) {
        auto glob = (*g).second;
        vm->helper_variables().add_variable((*g).second, glob.index);
    }
    for (auto g = constants.begin(); g != constants.end(); ++g) {
        auto glob = (*g);
        vm->helper_variables().add_variable(glob, glob.index);
    }

    // Size to number of functions
    //    g_vm->resize_function_locals(static_cast<int>(functions.size()));

    // Setup each function locals now
    /*   for (auto g = compiler.functions.begin(); g != compiler.functions.end(); ++g) {
        auto func = (*g).second;

        VMFunction b;
        b.id = func.id;
        b.pc_start = func.pc_start;
        b.pc_end = func.pc_end;
        g_vm->functions.push_back(std::move(b));

        for (auto l = func.local_names.begin(); l != func.local_names.end(); ++l) {
            Boxed b;
            b.name = (*l).name;
            b.type = (*l).type;
            g_vm->get_function_locals(func.id).push_back(std::move(b));
        }
    }*/
}