#include "compiler.h"

antlrcpp::Any Compiler::visitStmtBPUTH(DARICParser::StmtBPUTHContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    ensure_stack_is_integer();
    stack_pop();
    visit(context->numExpr(1));
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::BPUT, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtBGETH(DARICParser::StmtBGETHContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::BGET, Type::NOTYPE);
    insert_bytecode(Bytecodes::DROP, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtPTRH(DARICParser::StmtPTRHContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    ensure_stack_is_integer();
    stack_pop();
    visit(context->numExpr(1));
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::PTRA, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCLOSEH(DARICParser::StmtCLOSEHContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::CLOSE, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtLISTFILES(DARICParser::StmtLISTFILESContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->varNameString());
    if (context->LOCAL() == NULL) {
        find_or_create_variable(VariableScope::GLOBAL);
    } else {
        find_or_create_variable(VariableScope::LOCAL);
    }
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    insert_instruction(Bytecodes::LISTFILES, Type::NOTYPE, current_var.id);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncBGETH(DARICParser::NumFuncBGETHContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::BGET, Type::NOTYPE);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncEOFH(DARICParser::NumFuncEOFHContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::EOFH, Type::NOTYPE);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncOPENIN(DARICParser::NumFuncOPENINContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    insert_bytecode(Bytecodes::OPENIN, Type::NOTYPE);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncOPENOUT(DARICParser::NumFuncOPENOUTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    insert_bytecode(Bytecodes::OPENOUT, Type::NOTYPE);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncOPENUP(DARICParser::NumFuncOPENUPContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->strExpr());
    ensure_stack_is_string();
    stack_pop();
    insert_bytecode(Bytecodes::OPENUP, Type::NOTYPE);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncPTR(DARICParser::NumFuncPTRContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::PTR, Type::NOTYPE);
    stack_push(Type::INTEGER);
    return NULL;
}
