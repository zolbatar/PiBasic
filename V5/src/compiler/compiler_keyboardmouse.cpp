#include "compiler.h"

antlrcpp::Any Compiler::visitStmtMOUSE(DARICParser::StmtMOUSEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->varNameInteger(0));
    find_variable(false, true);
    insert_instruction(Bytecodes::FASTCONST_VAR, Type::NOTYPE, current_var.id);
    visit(context->varNameInteger(1));
    find_variable(false, true);
    insert_instruction(Bytecodes::FASTCONST_VAR, Type::NOTYPE, current_var.id);
    visit(context->varNameInteger(2));
    find_variable(false, true);
    insert_instruction(Bytecodes::FASTCONST_VAR, Type::NOTYPE, current_var.id);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtINKEY(DARICParser::StmtINKEYContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    stack_pop();
    insert_bytecode(Bytecodes::INKEY, Type::NOTYPE);
    insert_bytecode(Bytecodes::DROP, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtINKEYS(DARICParser::StmtINKEYSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    stack_pop();
    insert_bytecode(Bytecodes::INKEYS, Type::NOTYPE);
    insert_bytecode(Bytecodes::DROP, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtGET(DARICParser::StmtGETContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_bytecode(Bytecodes::GET, Type::NOTYPE);
    insert_bytecode(Bytecodes::DROP, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtGETS(DARICParser::StmtGETSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_bytecode(Bytecodes::GETS, Type::NOTYPE);
    insert_bytecode(Bytecodes::DROP, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncGET(DARICParser::NumFuncGETContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_bytecode(Bytecodes::GET, Type::NOTYPE);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncINKEY(DARICParser::NumFuncINKEYContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    stack_pop();
    insert_bytecode(Bytecodes::INKEY, Type::NOTYPE);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncINKEYS(DARICParser::StrFuncINKEYSContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    stack_pop();
    insert_bytecode(Bytecodes::INKEYS, Type::NOTYPE);
    stack_push(Type::STRING);
}
