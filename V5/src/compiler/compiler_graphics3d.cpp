#include "compiler.h"

antlrcpp::Any Compiler::visitStmtRENDERFRAME(DARICParser::StmtRENDERFRAMEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    insert_bytecode(Bytecodes::RENDERFRAME, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCREATEVERTEX(DARICParser::StmtCREATEVERTEXContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->typeVar());
    find_variable(false, true);
    if (current_var.type != Type::TYPE_ARRAY && current_var.custom_type_name != "Vertex3D") {
        error("The first parameter to VERTEX should be a type array of Vertex3D");
    }
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_instruction(Bytecodes::CREATEVERTEX, Type::TYPE_ARRAY, current_var.id);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCREATETRIANGLE(DARICParser::StmtCREATETRIANGLEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->typeVar());
    find_variable(false, true);
    if (current_var.type != Type::TYPE_ARRAY && current_var.custom_type_name != "Triangle3D") {
        error("The first parameter to VERTEX should be a type array of Vertex3D");
    }
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_instruction(Bytecodes::CREATETRIANGLE, Type::TYPE_ARRAY, current_var.id);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTRANSLATE(DARICParser::StmtTRANSLATEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtROTATE(DARICParser::StmtROTATEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtSCALE(DARICParser::StmtSCALEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtDELETEOBJECT(DARICParser::StmtDELETEOBJECTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncSHAPE(DARICParser::NumFuncSHAPEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncOBJECT(DARICParser::NumFuncOBJECTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    return NULL;
}
