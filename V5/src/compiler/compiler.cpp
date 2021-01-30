#include "compiler.h"

Compiler::Compiler(VM* vm, DARICParser::ProgContext* tree)
{
    this->vm = vm;

    // Lookahead, figure out function definitions and types
    phase = CompilerPhase::LOOKAHEAD;
    auto daric = visitProg(tree);

    // Size, figure out sizing for jumps etc.
    vm->helper_bytecodes().pc = 0;
    phase = CompilerPhase::SIZE;
    daric = visitProg(tree);
    vm->helper_bytecodes().size = vm->helper_bytecodes().pc;

    // Compile! Build the VM
    vm->helper_bytecodes().pc = 0;
    phase = CompilerPhase::COMPILE;
    daric = visitProg(tree);

    insert_bytecode(Bytecodes::HALT);
}