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

antlrcpp::Any Compiler::visitVarName(DARICParser::VarNameContext* context)
{
    set_pos(context->start);
    last_var.name = context->getText();
    return NULL;
}

antlrcpp::Any Compiler::visitVarNameInteger(DARICParser::VarNameIntegerContext* context)
{
    set_pos(context->start);
    last_var.name = context->getText();
    return NULL;
}

antlrcpp::Any Compiler::visitVarNameString(DARICParser::VarNameStringContext* context)
{
    set_pos(context->start);
    last_var.name = context->getText();
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
    last_var.type = Type::FLOAT;
    if (state == CompilerState::NOSTATE) {
        if (!find_variable()) {
            error("Variable '" + last_var.name + "' not found");
        }
        insert_instruction(Bytecodes::LOAD, Type::FLOAT, last_var.id);
        stack_push(Type::FLOAT);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarInteger(DARICParser::NumVarIntegerContext* context)
{
    set_pos(context->start);
    visit(context->varNameInteger());
    last_var.type = Type::INTEGER;
    if (state == CompilerState::NOSTATE) {
        if (!find_variable()) {
            error("Variable '" + last_var.name + "' not found");
        }
        insert_instruction(Bytecodes::LOAD, Type::INTEGER, last_var.id);
        stack_push(Type::INTEGER);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarString(DARICParser::NumVarStringContext* context)
{
    set_pos(context->start);
    visit(context->varNameString());
    last_var.type = Type::STRING;
    if (state == CompilerState::NOSTATE) {
        if (!find_variable()) {
            error("Variable '" + last_var.name + "' not found");
        }
        insert_instruction(Bytecodes::LOAD, Type::STRING, last_var.id);
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

bool Compiler::find_variable()
{
    // Search locals first (if valid), then globals
    if (locals.count(last_var.name) == 1 && inside_function) {
        auto g = locals.find(last_var.name);
        auto var_id = (*g).second.index;
        last_var.type = (*g).second.type;
        last_var.id = var_id | LocalVariableFlag;
        return true;
    } else if (globals.count(last_var.name) == 1) {
        auto g = globals.find(last_var.name);
        auto var_id = (*g).second.index;
        last_var.type = (*g).second.type;
        last_var.id = var_id;
        return true;
    } else {
        return false;
    }
}

void Compiler::find_or_create_variable(VariableScope scope)
{
    // Try and find first
    if (find_variable())
        return;
    last_var.id = 0;
    if (scope == VariableScope::GLOBAL) {
        Boxed var;
        var.constant = false;
        var.name = last_var.name;
        var.type = last_var.type;
        var.index = global_var_index++;
        var.value_string = last_var.custom_type_name;
        globals[var.name] = var;
        last_var.id = var.index;
    } else if (inside_function) {
        Boxed var;
        var.constant = false;
        var.name = last_var.name;
        var.type = last_var.type;
        var.index = local_var_index++;
        var.value_string = last_var.custom_type_name;
        locals[var.name] = var;
        last_var.id = var.index | LocalVariableFlag;
    } else {
        error("Variable '" + last_var.name + "' not found");
    }
}