#include "compiler.h"

antlrcpp::Any Compiler::visitVar(DARICParser::VarContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumVar(DARICParser::NumVarContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitStrVar(DARICParser::StrVarContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitJustVar(DARICParser::JustVarContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitJustVarName(DARICParser::JustVarNameContext* context)
{
    set_pos(context->start);
    current_var.type = Type::FLOAT;
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitJustVarNameInteger(DARICParser::JustVarNameIntegerContext* context)
{
    set_pos(context->start);
    current_var.type = Type::INTEGER;
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitJustVarNameString(DARICParser::JustVarNameStringContext* context)
{
    set_pos(context->start);
    current_var.type = Type::STRING;
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitVarName(DARICParser::VarNameContext* context)
{
    set_pos(context->start);
    current_var.name = context->getText();
    return NULL;
}

antlrcpp::Any Compiler::visitVarNameInteger(DARICParser::VarNameIntegerContext* context)
{
    set_pos(context->start);
    current_var.name = context->getText();
    return NULL;
}

antlrcpp::Any Compiler::visitVarNameString(DARICParser::VarNameStringContext* context)
{
    set_pos(context->start);
    current_var.name = context->getText();
    return NULL;
}

antlrcpp::Any Compiler::visitVarNameType(DARICParser::VarNameTypeContext* context)
{
    set_pos(context->start);
    current_var.name = context->getText();
    return NULL;
}

antlrcpp::Any Compiler::visitVarDecl(DARICParser::VarDeclContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumVarFloat(DARICParser::NumVarFloatContext* context)
{
    set_pos(context->start);
    visit(context->varName());
    current_var.type = Type::FLOAT;
    if (state == CompilerState::NOSTATE) {

        // Is this a type?
        if (custom_types.count(current_var.name) == 1) {
            current_var.type = Type::TYPE;
            auto f = custom_types.find(current_var.name);
            last_type_num_dimensions = static_cast<UINT32>((*f).second.members.size());
            return NULL;
        }

        find_variable(false, true);
        insert_instruction(Bytecodes::LOAD, Type::FLOAT, current_var.id);
        stack_push(Type::FLOAT);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarInteger(DARICParser::NumVarIntegerContext* context)
{
    set_pos(context->start);
    visit(context->varNameInteger());
    current_var.type = Type::INTEGER;
    if (state == CompilerState::NOSTATE) {
        find_variable(false, true);
        insert_instruction(Bytecodes::LOAD, Type::INTEGER, current_var.id);
        stack_push(Type::INTEGER);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarString(DARICParser::NumVarStringContext* context)
{
    set_pos(context->start);
    visit(context->varNameString());
    current_var.type = Type::STRING;
    if (state == CompilerState::NOSTATE) {
        find_variable(false, true);
        insert_instruction(Bytecodes::LOAD, Type::STRING, current_var.id);
        stack_push(Type::STRING);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitVarDeclInd(DARICParser::VarDeclIndContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitVarList(DARICParser::VarListContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

bool Compiler::find_variable(bool field, bool fire_error)
{
    // Search locals first (if valid), then globals
    if (locals.count(current_var.name) == 1 && inside_function) {
        auto g = locals.find(current_var.name);
        auto var_id = (*g).second.index;
        current_var.id = var_id | LocalVariableFlag;
        current_var.custom_type_name = (*g).second.custom_type_name;
        current_var.type = (*g).second.get_type();

        if (field) {
            auto f = custom_types.find(current_var.custom_type_name);
            if ((*f).second.members.count(current_var.field_name) == 0) {
                error("Field '" + current_var.field_name + "' for variable '" + current_var.name + "' not found");
            }
            auto field = (*f).second.members.find(current_var.field_name);
            current_var.field_type = (*field).second.get_type();
            current_var.field_index = (*field).second.index;
        }

        return true;
    } else if (globals.count(current_var.name) == 1) {
        auto g = globals.find(current_var.name);
        auto var_id = (*g).second.index;
        current_var.id = var_id;
        current_var.custom_type_name = (*g).second.custom_type_name;
        current_var.type = (*g).second.get_type();

        if (field) {
            auto f = custom_types.find(current_var.custom_type_name);
            if ((*f).second.members.count(current_var.field_name) == 0) {
                error("Field '" + current_var.field_name + "' for variable '" + current_var.name + "' not found");
            }
            auto field = (*f).second.members.find(current_var.field_name);
            current_var.field_type = (*field).second.get_type();
            current_var.field_index = (*field).second.index;
        }

        return true;
    } else {
        if (fire_error) {
            error("Variable (or type) '" + current_var.name + "' not found");
        }
        return false;
    }
}

void Compiler::find_or_create_variable(VariableScope scope)
{
    // Try and find first
    if (find_variable(false, false))
        return;
    current_var.id = 0;
    if (scope == VariableScope::GLOBAL) {
        Boxed var;
        var.set_type_default(current_var.type);
        var.constant = false;
        var.name = current_var.name;
        var.index = global_var_index++;
        globals[var.name] = var;
        current_var.id = var.index;
    } else if (inside_function) {
        Boxed var;
        var.set_type_default(current_var.type);
        var.constant = false;
        var.name = current_var.name;
        var.index = local_var_index++;
        locals[var.name] = var;
        current_var.id = var.index | LocalVariableFlag;
    } else {
        error("Variable '" + current_var.name + "' not found");
    }
}

void Compiler::set_custom_type(std::string type)
{
    // At this point, we KNOW the variable exists
    if (locals.count(current_var.name) == 1 && inside_function) {
        auto g = locals.find(current_var.name);
        g->second.custom_type_name = type;
    } else if (globals.count(current_var.name) == 1) {
        auto g = globals.find(current_var.name);
        g->second.custom_type_name = type;
    }
}