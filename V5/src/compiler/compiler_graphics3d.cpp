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
    visit(context->varNameType());
    find_variable(false, true);
    if (current_var.type != Type::TYPE_ARRAY && current_var.custom_type_name != "Vertex3D") {
        error("The first parameter to VERTEX should be a type array of Vertex3D");
    }
    visit(context->numExpr(0));
    ensure_stack_is_integer();
    stack_pop();
    for (auto i = 1; i < 3; i++) {
        visit(context->numExpr(i));
        ensure_stack_is_float();
        stack_pop();
    }
    visit(context->numExpr(3));
    ensure_stack_is_integer();
    stack_pop();
    insert_instruction(Bytecodes::CREATEVERTEX, Type::TYPE_ARRAY, current_var.id);
    assert(stack_size() == 0);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtCREATETRIANGLE(DARICParser::StmtCREATETRIANGLEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->varNameType());
    find_variable(false, true);
    if (current_var.type != Type::TYPE_ARRAY && current_var.custom_type_name != "Triangle3D") {
        error("The first parameter to VERTEX should be a type array of Triangle3D");
    }
    for (auto i = 0; i < context->numExpr().size(); i++) {
        visit(context->numExpr(i));
        ensure_stack_is_integer();
        stack_pop();
    }
    insert_instruction(Bytecodes::CREATETRIANGLE, Type::TYPE_ARRAY, current_var.id);
    assert(stack_size() == 0);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTRANSLATE(DARICParser::StmtTRANSLATEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    ensure_stack_is_integer();
    stack_pop();
    for (auto i = 1; i < 4; i++) {
        visit(context->numExpr(i));
        ensure_stack_is_float();
        stack_pop();
    }
    insert_instruction(Bytecodes::OBJECTTRANSLATE, Type::TYPE_ARRAY, current_var.id);
    assert(stack_size() == 0);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtROTATE(DARICParser::StmtROTATEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    ensure_stack_is_integer();
    stack_pop();
    for (auto i = 1; i < 4; i++) {
        visit(context->numExpr(i));
        ensure_stack_is_float();
        stack_pop();
    }
    insert_instruction(Bytecodes::OBJECTROTATE, Type::TYPE_ARRAY, current_var.id);
    assert(stack_size() == 0);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtSCALE(DARICParser::StmtSCALEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    ensure_stack_is_integer();
    stack_pop();
    visit(context->numExpr(1));
    ensure_stack_is_float();
    stack_pop();
    insert_instruction(Bytecodes::OBJECTROTATE, Type::TYPE_ARRAY, current_var.id);
    assert(stack_size() == 0);
    return NULL;
}

antlrcpp::Any Compiler::visitStmtDELETEOBJECT(DARICParser::StmtDELETEOBJECTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_instruction(Bytecodes::DELETEOBJECT, Type::TYPE_ARRAY, current_var.id);
    assert(stack_size() == 0);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncSHAPE(DARICParser::NumFuncSHAPEContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->varNameType(0));
    find_variable(false, true);
    if (current_var.type != Type::TYPE_ARRAY && current_var.custom_type_name != "Vertex3D") {
        error("The first parameter to SHAPE should be a type array of Vertex3D");
    }
    insert_instruction(Bytecodes::FASTCONST_VAR, Type::TYPE, current_var.id);
    visit(context->varNameType(1));
    find_variable(false, true);
    if (current_var.type != Type::TYPE_ARRAY && current_var.custom_type_name != "Triangle3D") {
        error("The second parameter to SHAPE should be a type array of Triangle3D");
    }
    insert_instruction(Bytecodes::CREATESHAPE, Type::TYPE, current_var.id);
    stack_push(Type::INTEGER);
    return NULL;
}

antlrcpp::Any Compiler::visitNumFuncOBJECT(DARICParser::NumFuncOBJECTContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr(0));
    ensure_stack_is_integer();
    stack_pop();
    for (auto i = 1; i < 8; i++) {
        visit(context->numExpr(i));
        ensure_stack_is_float();
        stack_pop();
    }

    // Figure out type
    int type = 0;
    if (context->SOLID() != NULL) {
    } else if (context->WIREFRAME() != NULL) {
        type = 1;
    } else if (context->SHADED() != NULL) {
        type = 2;
    } else if (context->FILLEDWIREFRAME() != NULL) {
        type = 3;
    }
    insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, type);
    insert_bytecode(Bytecodes::CREATEOBJECT, Type::TYPE);
    stack_push(Type::INTEGER);
    return NULL;
}
