#include "compiler.h"

std::map<UINT32, UINT32> line_number_mapping;
extern int file_count;

antlrcpp::Any Compiler::visitLinenumber(DARICParser::LinenumberContext* context)
{
    set_pos(context->start);
    if (file_count > 1) {
        error("Line numbers not supported with INSTALL");
    }
    auto line = std::stoi(context->NUMBER()->getText());
    line_number_mapping.insert(std::make_pair(line_number, line));
    if (phase == CompilerPhase::SIZE) {
        line_no_to_bytecode.insert(std::make_pair(line_number, vm->helper_bytecodes().pc));
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtGOTO(DARICParser::StmtGOTOContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    if (file_count > 1) {
        error("GOTO not supported with INSTALL");
    }
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
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    if (file_count > 1) {
        error("GOSUB not supported with INSTALL");
    }
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
