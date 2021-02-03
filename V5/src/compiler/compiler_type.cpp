#include "compiler.h"

antlrcpp::Any Compiler::visitTypeVarType(DARICParser::TypeVarTypeContext* context)
{
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

        // Do we have it?
/*        if (custom_types.count(name) > 0) {
            std::stringstream ss;
            ss << "Type '" << name << "' already exists";
            error(ss.str());
        }*/

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

antlrcpp::Any Compiler::visitVarDeclType(DARICParser::VarDeclTypeContext* context)
{
    set_pos(context->start);
    current_var.name = context->typeVar()->getText();
    current_var.field_name = context->varName()->getText();
    current_var.type = Type::TYPE;
    find_variable(true, true);
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarFloatField(DARICParser::NumVarFloatFieldContext* context)
{
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
    set_pos(context->start);
    current_var.name = context->typeVar()->getText();
    current_var.field_name = context->varNameInteger()->getText();
    find_variable(true, true);
    if (state == CompilerState::NOSTATE) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, current_var.field_index);
        insert_instruction(Bytecodes::LOAD_FIELD, current_var.field_type, current_var.id);
        stack_push(current_var.field_type);
    }
    return NULL;
}