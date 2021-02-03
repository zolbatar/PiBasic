#include "compiler.h"

antlrcpp::Any Compiler::visitTypeVarType(DARICParser::TypeVarTypeContext* context)
{
    set_pos(context->start);
    visit(context->varNameType());
    current_var.type = Type::TYPE;
    if (state == CompilerState::NOSTATE) {
        if (!find_variable()) {
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
        if (custom_types.count(name) > 0) {
            std::stringstream ss;
            ss << "Type '" << name << "' already exists";
            error(ss.str());
        }

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
    if (state == CompilerState::NOSTATE) {
        if (!find_variable()) {
            error("Variable '" + current_var.name + "' not found");
        }
        //        insert_instruction(Bytecodes::LOAD, Type::FLOAT, current_var.id);
        stack_push(Type::FLOAT);
    } else if (state == CompilerState::ASSIGNMENT) {
        find_variable();
        auto f = custom_types.find(current_var.custom_type_name);
        auto field = (*f).second.members.find(current_var.field_name);
        current_var.field_type = (*field).second.type;
        current_var.field_index = (*field).second.index;
    }
    auto b = context->varName()->getText();
    return NULL;
}
