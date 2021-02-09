#include "compiler.h"

antlrcpp::Any Compiler::visitTypeVarType(DARICParser::TypeVarTypeContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->varNameType());
    current_var.type = Type::TYPE;
    if (state == CompilerState::NOSTATE) {
        if (!find_variable(false, true)) {
            error("Variable '" + current_var.name + "' not found");
        }
        insert_instruction(Bytecodes::LOAD, Type::TYPE, current_var.id);
        stack_push(Type::FLOAT);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtTYPE(DARICParser::StmtTYPEContext* context)
{
    set_pos(context->start);

    // We only gather type information in the lookahead phase
    if (phase == CompilerPhase::LOOKAHEAD) {
        auto name = context->varName()->getText();

        CustomType custom_type;
        custom_type.id = custom_type_index++;

        // Add fields
        for (auto i = 0; i < context->justVar().size(); i++) {
            visit(context->justVar(i));
            custom_type.members.insert(std::pair<std::string, Boxed>(current_var.name, std::move(Boxed(current_var.name, current_var.type, i))));
        }

        custom_types.insert(std::pair<std::string, CustomType>(name, std::move(custom_type)));
        return NULL;
    }
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitVarDeclTypeVar(DARICParser::VarDeclTypeVarContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->typeVar());
    if (context->varName() != NULL) {
        current_var.field_name = context->varName()->getText();
    } else if (context->varNameInteger() != NULL) {
        current_var.field_name = context->varNameInteger()->getText();
    }
    current_var.type = Type::TYPE;
    find_variable(true, true);
    last_array_dimensions = 0;
    return NULL;
}

antlrcpp::Any Compiler::visitVarDeclTypeVarArrayed(DARICParser::VarDeclTypeVarArrayedContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    last_array_dimensions = 1;
    last_array_num_dimensions = 1;

    // Get field type
    visit(context->typeVar());
    auto saved = current_var;
    if (context->varName() != NULL) {
        current_var.field_name = context->varName()->getText();
    } else if (context->varNameInteger() != NULL) {
        current_var.field_name = context->varNameInteger()->getText();
    }
    current_var.name = saved.name;
    current_var.type = Type::TYPE_ARRAY;
    find_variable(true, true);
    return NULL;
}

antlrcpp::Any Compiler::visitVarDeclType(DARICParser::VarDeclTypeContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->typeVar());
    current_var.type = Type::TYPE;
    if (state == CompilerState::NOSTATE) {
        find_variable(false, true);
        last_array_dimensions = 0;
    }
    return NULL;
}

antlrcpp::Any Compiler::visitVarDeclTypeArrayed(DARICParser::VarDeclTypeArrayedContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    last_array_dimensions = 1;
    last_array_num_dimensions = 1;

    // Get field type
    auto saved = current_var;
    visit(context->typeVar());
    current_var.field_name = current_var.name;
    current_var.name = saved.name;
    current_var.type = Type::TYPE_ARRAY;
    find_variable(true, true);
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarFloatField(DARICParser::NumVarFloatFieldContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    current_var.name = context->typeVar()->getText();
    current_var.field_name = context->varName()->getText();
    find_variable(true, true);
    if (state == CompilerState::NOSTATE) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, current_var.field_index);
        insert_instruction(Bytecodes::LOAD_FIELD, current_var.field_type, current_var.id);
        stack_push(current_var.field_type);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarIntegerField(DARICParser::NumVarIntegerFieldContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    current_var.name = context->typeVar()->getText();
    current_var.field_name = context->varNameInteger()->getText();
    find_variable(true, true);
    if (state == CompilerState::NOSTATE) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, current_var.field_index);
        insert_instruction(Bytecodes::LOAD_FIELD_ARRAY, current_var.field_type, current_var.id);
        stack_push(current_var.field_type);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarStringField(DARICParser::NumVarStringFieldContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    current_var.name = context->typeVar()->getText();
    current_var.field_name = context->varNameString()->getText();
    find_variable(true, true);
    if (state == CompilerState::NOSTATE) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, current_var.field_index);
        insert_instruction(Bytecodes::LOAD_FIELD_ARRAY, current_var.field_type, current_var.id);
        stack_push(current_var.field_type);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarFloatFieldArray(DARICParser::NumVarFloatFieldArrayContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);

    // Array index
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();

    current_var.name = context->typeVar()->getText();
    current_var.field_name = context->varName()->getText();
    find_variable(true, true);
    if (state == CompilerState::NOSTATE) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, current_var.field_index);
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, static_cast<int>(last_type_num_dimensions));
        insert_instruction(Bytecodes::LOAD_FIELD_ARRAY, current_var.field_type, current_var.id);
        stack_push(current_var.field_type);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarIntegerFieldArray(DARICParser::NumVarIntegerFieldArrayContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);

    // Array index
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();

    current_var.name = context->typeVar()->getText();
    current_var.field_name = context->varNameInteger()->getText();
    find_variable(true, true);
    if (state == CompilerState::NOSTATE) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, current_var.field_index);
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, static_cast<int>(last_type_num_dimensions));
        insert_instruction(Bytecodes::LOAD_FIELD_ARRAY, current_var.field_type, current_var.id);
        stack_push(current_var.field_type);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarStringFieldArray(DARICParser::NumVarStringFieldArrayContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);

    // Array index
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();

    current_var.name = context->typeVar()->getText();
    current_var.field_name = context->varNameString()->getText();
    find_variable(true, true);
    if (state == CompilerState::NOSTATE) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, current_var.field_index);
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, static_cast<int>(last_type_num_dimensions));
        insert_instruction(Bytecodes::LOAD_FIELD_ARRAY, current_var.field_type, current_var.id);
        stack_push(current_var.field_type);
    }
    return NULL;
}
