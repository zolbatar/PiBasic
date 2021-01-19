#include "compile.h"

void Compiler::optimise() {
    return;
    auto bc = vm->get_bytecode();

    // Do peephole optimisations
    int adjust = 0;
    for (auto it = bc->begin(); it != bc->end(); ++it) {
        auto b = (*it).opcode;
        switch (b) {
        case NOP:
            it = bc->erase(it);
            adjust++;
            break;
        case JNEREP:
        case JUMP:
        case JNE:
        case JE:
        case CALL:
            (*it).data -= adjust;
            break;
        case FOR_I:
        case FOR_F:
            (*(it - 1)).data -= adjust;
            break;
        default:
            // No optimisations
            break;
        }
    }
}