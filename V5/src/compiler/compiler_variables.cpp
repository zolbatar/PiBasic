#include "compiler.h"

antlrcpp::Any Compiler::visitStmtSWAP(DARICParser::StmtSWAPContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;

    // First var
    visit(context->justVar(0));
    find_variable(false, true);
    auto saved = current_var;

    // Second var
    visit(context->justVar(1));
    find_variable(false, true);

    // Check they are same type
    if (saved.type != current_var.type) {
        error("SWAP needs two variables of the same type");
    }

    insert_instruction_notype(Bytecodes::FASTCONST_VAR, current_var.id);
    insert_instruction(Bytecodes::SWAP, saved.type, saved.id);
    return NULL;
}

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
    if (context->varName() != NULL) {
        current_var.type = Type::FLOAT;
        return visit(context->varName());
    } else if (context->varNameInteger() != NULL) {
        current_var.type = Type::INTEGER;
        return visit(context->varNameInteger());
    } else if (context->varNameString() != NULL) {
        current_var.type = Type::STRING;
        return visit(context->varNameString());
    }
    return NULL;
}

antlrcpp::Any Compiler::visitJustNumberVar(DARICParser::JustNumberVarContext* context)
{
    set_pos(context->start);
    if (context->varName() != NULL) {
        current_var.type = Type::FLOAT;
        return visit(context->varName());
    } else if (context->varNameInteger() != NULL) {
        current_var.type = Type::INTEGER;
        return visit(context->varNameInteger());
    }
    return NULL;
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
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->varName());
    current_var.type = Type::FLOAT;

    // Is this a type?
    if (custom_types.count(current_var.name) == 1) {
        current_var.type = Type::TYPE;
        auto f = custom_types.find(current_var.name);
        last_type_num_dimensions = static_cast<UINT32>((*f).second.members.size());
        return NULL;
    }

    if (state == CompilerState::NOSTATE) {

        find_variable(false, true);
        insert_instruction(Bytecodes::LOAD, Type::FLOAT, current_var.id);
        stack_push(Type::FLOAT);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitNumVarInteger(DARICParser::NumVarIntegerContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
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
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->varNameString());
    current_var.type = Type::STRING;
    if (state != CompilerState::ASSIGNMENT) {
        find_variable(false, true);
        insert_instruction(Bytecodes::LOAD, Type::STRING, current_var.id);
        stack_push(Type::STRING);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitVarDeclInd(DARICParser::VarDeclIndContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    last_array_dimensions = 0;
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
    if (inside_function() && current_function->locals.count(current_var.name) == 1) {
        auto g = current_function->locals.find(current_var.name);
        auto var_id = (*g).second.get_index();
        current_var.id = var_id | LocalVariableFlag;
        current_var.custom_type_name = (*g).second.get_custom_type_name();
        current_var.type = (*g).second.get_type();

        if (field) {
            if (custom_types.count(current_var.custom_type_name) == 0) {
                error("Type '" + current_var.custom_type_name + "' for variable '" + current_var.name + "' not found");
            }
            auto f = custom_types.find(current_var.custom_type_name);
            if ((*f).second.members.count(current_var.field_name) == 0) {
                error("Field '" + current_var.field_name + "' for variable '" + current_var.name + "' not found");
            }
            auto field = (*f).second.members.find(current_var.field_name);
            current_var.field_type = (*field).second.get_type();
            current_var.field_index = (*field).second.get_index();
        }
        //std::cout << current_var.name << " 3- " << current_var.id << std::endl;
        return true;
    } else if (globals.count(current_var.name) == 1) {
        auto g = globals.find(current_var.name);
        auto var_id = (*g).second.get_index();
        current_var.id = var_id;
        current_var.custom_type_name = (*g).second.get_custom_type_name();
        current_var.type = (*g).second.get_type();

        if (field) {
            if (custom_types.count(current_var.custom_type_name) == 0) {
                error("Type '" + current_var.custom_type_name + "' for variable '" + current_var.name + "' not found");
            }
            auto f = custom_types.find(current_var.custom_type_name);
            if ((*f).second.members.count(current_var.field_name) == 0) {
                error("Field '" + current_var.field_name + "' for variable '" + current_var.name + "' not found");
            }
            auto field = (*f).second.members.find(current_var.field_name);
            current_var.field_type = (*field).second.get_type();
            current_var.field_index = (*field).second.get_index();
        }

        return true;
    } else {
        if (fire_error) {
            error("Variable (or type) '" + current_var.name + "' not found");
        }
        return false;
    }
}

void Compiler::find_or_create_variable_in_scope(VariableScope scope)
{
    if (scope == VariableScope::GLOBAL) {
        if (globals.count(current_var.name) == 1) {
            auto g = globals.find(current_var.name);
            auto var_id = (*g).second.get_index();
            current_var.id = var_id;
            current_var.custom_type_name = (*g).second.get_custom_type_name();
            current_var.type = (*g).second.get_type();
        } else {
            Boxed var;
            var.set_type_default(current_var.type);
            var.set_name(current_var.name);
            var.set_index(global_var_index++);
            globals[var.get_name()] = var;
            current_var.id = var.get_index();
        }
    } else if (inside_function()) {
        if (current_function->locals.count(current_var.name) == 1) {
            auto g = current_function->locals.find(current_var.name);
            auto var_id = (*g).second.get_index();
            current_var.id = var_id | LocalVariableFlag;
            current_var.custom_type_name = (*g).second.get_custom_type_name();
            current_var.type = (*g).second.get_type();
            //std::cout << current_var.name << " 1- " << current_var.id << std::endl;
        } else {
            Boxed var;
            var.set_type_default(current_var.type);
            var.set_name(current_var.name);
            var.set_index(current_function->local_var_index++);
            current_function->locals[var.get_name()] = var;
            current_var.id = var.get_index() | LocalVariableFlag;
            //std::cout << current_var.name << " 1- " << current_var.id << std::endl;
        }
    } else {
        error("Variable '" + current_var.name + "' not found");
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
        var.set_name(current_var.name);
        var.set_index(global_var_index++);
        globals[var.get_name()] = var;
        current_var.id = var.get_index();
        //std::cout << current_var.name << " 2- " << current_var.id << std::endl;
    } else if (inside_function()) {
        Boxed var;
        var.set_type_default(current_var.type);
        var.set_name(current_var.name);
        var.set_index(current_function->local_var_index++);
        current_function->locals[var.get_name()] = var;
        current_var.id = var.get_index() | LocalVariableFlag;
        //::cout << current_var.name << " 2- " << current_var.id << std::endl;
    } else {
        error("Variable '" + current_var.name + "' not found");
    }
}

void Compiler::set_custom_type(std::string type)
{
    // At this point, we KNOW the variable exists
    if (inside_function() && current_function->locals.count(current_var.name) == 1) {
        auto g = current_function->locals.find(current_var.name);
        g->second.set_custom_type_name(type);
    } else if (globals.count(current_var.name) == 1) {
        auto g = globals.find(current_var.name);
        g->second.set_custom_type_name(type);
    }
}
