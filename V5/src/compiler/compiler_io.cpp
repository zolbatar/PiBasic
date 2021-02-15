#include "compiler.h"

antlrcpp::Any Compiler::visitStmtBPUTH(DARICParser::StmtBPUTHContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr(0));
    ensure_stack_is_integer();
    stack_pop();
    visit(context->numExpr(1));
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode_notype(Bytecodes::BPUT);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtBGETH(DARICParser::StmtBGETHContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode_notype(Bytecodes::BGET);
    insert_bytecode_notype(Bytecodes::DROP);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtPTRH(DARICParser::StmtPTRHContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr(0));
    ensure_stack_is_integer();
    stack_pop();
    visit(context->numExpr(1));
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode_notype(Bytecodes::PTRA);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCLOSEH(DARICParser::StmtCLOSEHContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode_notype(Bytecodes::CLOSE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtLISTFILES(DARICParser::StmtLISTFILESContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->varNameString());
    current_var.type = Type::STRING_ARRAY;
    if (context->LOCAL() == NULL) {
        find_or_create_variable(VariableScope::GLOBAL);
    } else {
        find_or_create_variable(VariableScope::LOCAL);
    }
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    insert_instruction_notype(Bytecodes::LISTFILES, current_var.id);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncBGETH(DARICParser::NumFuncBGETHContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode_notype(Bytecodes::BGET);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitStrFuncGETSH(DARICParser::StrFuncGETSHContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode_notype(Bytecodes::GETSH);
    stack_push(Type::STRING);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncEOFH(DARICParser::NumFuncEOFHContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode_notype(Bytecodes::EOFH);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncOPENIN(DARICParser::NumFuncOPENINContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    insert_bytecode_notype(Bytecodes::OPENIN);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncOPENOUT(DARICParser::NumFuncOPENOUTContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    insert_bytecode_notype(Bytecodes::OPENOUT);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncOPENUP(DARICParser::NumFuncOPENUPContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    insert_bytecode_notype(Bytecodes::OPENUP);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncPTR(DARICParser::NumFuncPTRContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode_notype(Bytecodes::PTR);
    stack_push(Type::INTEGER);
    return NULL;
}
