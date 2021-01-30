#include "compiler.h"
#include <cassert>

Compiler::Compiler(VM* vm, DARICParser::ProgContext* tree)
{
    this->vm = vm;

    // Lookahead, figure out function definitions and types
    phase = CompilerPhase::LOOKAHEAD;
    auto daric = visitProg(tree);
    assert(vm->helper_bytecodes().size == 0);
    assert(stack_size() == 0);

    // Size, figure out sizing for jumps etc.
    vm->helper_bytecodes().pc = 0;
    phase = CompilerPhase::SIZE;
    daric = visitProg(tree);
    vm->helper_bytecodes().size = vm->helper_bytecodes().pc;
    assert(stack_size() == 0);

    // Compile! Build the VM
    vm->helper_bytecodes().pc = 0;
    phase = CompilerPhase::COMPILE;
    daric = visitProg(tree);
    assert(stack_size() == 0);

    insert_bytecode(Bytecodes::HALT);
}