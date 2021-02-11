#include "compiler.h"

antlrcpp::Any Compiler::visitLinenumber(DARICParser::LinenumberContext* context)
{
    set_pos(context->start);
    line_number = std::stoi(context->NUMBER()->getText());
    if (phase == CompilerPhase::SIZE) {
        line_no_to_bytecode.insert(std::pair<UINT32, UINT32>(line_number, vm->helper_bytecodes().pc));
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtGOTO(DARICParser::StmtGOTOContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    line_number = std::stoi(context->NUMBER()->getText());
    if (phase == CompilerPhase::SIZE) {
        insert_instruction_notype(Bytecodes::GOTO, 0);
    } else {
        // Find PC for this
        auto pc = (*line_no_to_bytecode.find(line_number)).second;
        insert_instruction_notype(Bytecodes::GOTO, pc);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtGOSUB(DARICParser::StmtGOSUBContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    line_number = std::stoi(context->NUMBER()->getText());
    if (phase == CompilerPhase::SIZE) {
        insert_instruction_notype(Bytecodes::GOSUB, 0);
    } else {
        // Find PC for this
        auto pc = (*line_no_to_bytecode.find(line_number)).second;
        insert_instruction_notype(Bytecodes::GOSUB, pc);
    }
    return NULL;
}
