#include "compiler.h"

Compiler::Compiler(VM* vm, DARICParser::ProgContext* tree)
{
    this->vm = vm;

    // Lookahead, figure out function definitions and types
    phase = CompilerPhase::LOOKAHEAD;
    auto daric = visitProg(tree);

    // Size, figure out sizing for jumps etc.
    phase = CompilerPhase::SIZE;
    daric = visitProg(tree);

    // Compile! Build the VM
    phase = CompilerPhase::COMPILE;
    daric = visitProg(tree);
}