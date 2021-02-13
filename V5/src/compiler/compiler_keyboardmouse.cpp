#include "compiler.h"

antlrcpp::Any Compiler::visitStmtMOUSE(DARICParser::StmtMOUSEContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->varNameInteger(0));
    find_variable(false, true);
    insert_instruction_notype(Bytecodes::FASTCONST_VAR, current_var.id);
    visit(context->varNameInteger(1));
    find_variable(false, true);
    insert_instruction_notype(Bytecodes::FASTCONST_VAR, current_var.id);
    visit(context->varNameInteger(2));
    find_variable(false, true);
    insert_instruction_notype(Bytecodes::FASTCONST_VAR, current_var.id);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtINKEY(DARICParser::StmtINKEYContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    stack_pop();
    insert_bytecode_notype(Bytecodes::INKEY);
    insert_bytecode_notype(Bytecodes::DROP);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtINKEYS(DARICParser::StmtINKEYSContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    stack_pop();
    insert_bytecode_notype(Bytecodes::INKEYS);
    insert_bytecode_notype(Bytecodes::DROP);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtGET(DARICParser::StmtGETContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    insert_bytecode_notype(Bytecodes::GET);
    insert_bytecode_notype(Bytecodes::DROP);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtGETS(DARICParser::StmtGETSContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    insert_bytecode_notype(Bytecodes::GETS);
    insert_bytecode_notype(Bytecodes::DROP);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncGETS(DARICParser::StrFuncGETSContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    insert_bytecode_notype(Bytecodes::GETS);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncGET(DARICParser::NumFuncGETContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    insert_bytecode_notype(Bytecodes::GET);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncINKEY(DARICParser::NumFuncINKEYContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    stack_pop();
    insert_bytecode_notype(Bytecodes::INKEY);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncINKEYS(DARICParser::StrFuncINKEYSContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    stack_pop();
    insert_bytecode_notype(Bytecodes::INKEYS);
    stack_push(Type::STRING);
    return NULL;
}
