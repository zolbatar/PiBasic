#include "compiler.h"

antlrcpp::Any Compiler::visitStmtDEFFN(DARICParser::StmtDEFFNContext* context)
{
    set_pos(context->start);
    visit(context->fnName());

    // Create a function object to stuff with things
    if (phase == CompilerPhase::LOOKAHEAD) {
        Function f;
        f.index = static_cast<UINT32>(functions.size());
        f.name = current_var.name;
        f.type = current_var.type;

        // Add to map, and create reference
        functions.insert(std::make_pair(f.name, std::move(f)));
    }
    current_function = &(*functions.find(current_var.name)).second;

    // Parameters
    if (phase == CompilerPhase::LOOKAHEAD) {
        visit(context->functionVarList());
    }

    // If not lookahead phase, do codey stuff
    if (phase != CompilerPhase::LOOKAHEAD) {

        // Jump around function
        if (phase != CompilerPhase::COMPILE) {
            insert_instruction(Bytecodes::JUMP, Type::NOTYPE, 0);
            current_function->pc_start = vm->helper_bytecodes().pc;
        } else {
            insert_instruction(Bytecodes::JUMP, Type::NOTYPE, current_function->pc_end);
        }

        // Make parameters locals (and do unpack stuff)
        for (auto it = current_function->parameters.cbegin(); it != current_function->parameters.cend(); ++it) {
            auto a = *it;
            Boxed b;
            b.index = a.index;
            b.name = a.name;
            b.set_type_nodefault(a.type);
            current_function->locals.insert(std::pair<std::string, Boxed>(a.name, std::move(b)));
            current_function->local_var_index++;
            insert_instruction(Bytecodes::STORE_PARAMETER, a.type, a.index | LocalVariableFlag);
        }

        for (int i = 0; i < context->body().size(); i++) {
            visit(context->body(i));
        }

        // Do we have any RETURNs? If so, push the values onto the stack
        for (auto it = current_function->parameters.cbegin(); it != current_function->parameters.cend(); ++it) {
            auto a = *it;
            if (a.return_parameter) {
                insert_instruction(Bytecodes::LOAD, a.type, a.index | LocalVariableFlag);
            }
        }

        // Do we have a return type? If we get to the end of the function we probably should return something to keep the stack happy
        switch (current_function->type) {
        case Type::NOTYPE:
            break;
        case Type::INTEGER:
            insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 1);
            break;
        case Type::FLOAT:
            insert_instruction(Bytecodes::LOAD, Type::FLOAT, constant_float_create(0.0));
            break;
        case Type::STRING:
            insert_instruction(Bytecodes::LOAD, Type::STRING, constant_string_create(""));
            break;
        }

        insert_bytecode(Bytecodes::RETURN, Type::NOTYPE);

        // Set end PC for jumping/calling purposes
        if (phase != CompilerPhase::COMPILE) {
            current_function->pc_end = vm->helper_bytecodes().pc;
        }
    }

    // Clear so we know when we are In and OUT of a function
    current_function = nullptr;

    return NULL;
}

antlrcpp::Any Compiler::visitStmtDEFPROC(DARICParser::StmtDEFPROCContext* context)
{
    set_pos(context->start);
    current_var.name = context->PROC_NAME()->getText();
    current_var.type = Type::NOTYPE;

    // Create a function object to stuff with things
    if (phase == CompilerPhase::LOOKAHEAD) {
        Function f;
        f.index = static_cast<UINT32>(functions.size());
        f.name = current_var.name;
        f.type = current_var.type;

        // Add to map, and create reference
        functions.insert(std::make_pair(f.name, std::move(f)));
    }
    current_function = &(*functions.find(current_var.name)).second;

    // Parameters
    if (phase == CompilerPhase::LOOKAHEAD) {
        visit(context->functionVarList());
    }

    // If not lookahead phase, do codey stuff
    if (phase != CompilerPhase::LOOKAHEAD) {

        // Jump around function
        if (phase != CompilerPhase::COMPILE) {
            insert_instruction(Bytecodes::JUMP, Type::NOTYPE, 0);
            current_function->pc_start = vm->helper_bytecodes().pc;
        } else {
            insert_instruction(Bytecodes::JUMP, Type::NOTYPE, current_function->pc_end);
        }

        // Make parameters locals (and do unpack stuff)
        for (auto it = current_function->parameters.cbegin(); it != current_function->parameters.cend(); ++it) {
            auto a = *it;
            Boxed b;
            b.index = a.index;
            b.name = a.name;
            b.set_type_nodefault(a.type);
            current_function->locals.insert(std::pair<std::string, Boxed>(a.name, std::move(b)));
            current_function->local_var_index++;
            insert_instruction(Bytecodes::STORE_PARAMETER, a.type, a.index | LocalVariableFlag);
        }

        for (int i = 0; i < context->body().size(); i++) {
            visit(context->body(i));
        }

        // Do we have any RETURNs? If so, push the values onto the stack
        for (auto it = current_function->parameters.cbegin(); it != current_function->parameters.cend(); ++it) {
            auto a = *it;
            if (a.return_parameter) {
                insert_instruction(Bytecodes::LOAD, a.type, a.index | LocalVariableFlag);
            }
        }

        insert_bytecode(Bytecodes::RETURN, Type::NOTYPE);

        // Set end PC for jumping/calling purposes
        if (phase != CompilerPhase::COMPILE) {
            current_function->pc_end = vm->helper_bytecodes().pc;
        }
    }

    // Clear so we know when we are In and OUT of a function
    current_function = nullptr;

    return NULL;
}

antlrcpp::Any Compiler::visitFnName(DARICParser::FnNameContext* context)
{
    set_pos(context->start);
    if (context->FN_FLOAT() != NULL) {
        current_var.name = context->FN_FLOAT()->getText();
        current_var.type = Type::FLOAT;
    } else if (context->FN_INTEGER() != NULL) {
        current_var.name = context->FN_INTEGER()->getText();
        current_var.type = Type::INTEGER;
    } else if (context->FN_STRING() != NULL) {
        current_var.name = context->FN_STRING()->getText();
        current_var.type = Type::STRING;
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtRETURN(DARICParser::StmtRETURNContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    if (context->expr() != NULL) {
        visit(context->expr());
        auto type = stack_pop();
        if (type != current_function->type) {
            error("Function '" + current_function->name + "' invalid return value");
        }
    }

    // Do we have any return variables?
    for (auto it = current_function->parameters.begin(); it != current_function->parameters.end(); ++it) {
        if ((*it).return_parameter) {
            insert_instruction(Bytecodes::LOAD, (*it).type, (*it).index | LocalVariableFlag);
        }
    }

    insert_bytecode(Bytecodes::RETURN, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitFunctionVarList(DARICParser::FunctionVarListContext* context)
{
    set_pos(context->start);

    // Process parameters
    for (int i = 0; i < context->justVar().size(); i++) {
        visit(context->justVar(i));
        FunctionParameter b;
        b.index = i;
        b.name = current_var.name;
        b.type = current_var.type;
        b.return_parameter = context->RETURN(i) != NULL;
        current_function->parameters.push_back(std::move(b));
    }

    return NULL;
}

antlrcpp::Any Compiler::visitFunctionParList(DARICParser::FunctionParListContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;

    // Find function
    auto func = &(*functions.find(called_fnproc)).second;

    // Process parameters, go backwards so on the stack in the correct order
    for (int i = 0; i < context->expr().size(); i++) {
        auto index = context->expr().size() - 1 - i;
        auto fp = &func->parameters[index];

        // Is it a return type? If so, it needs to be a variable
        if (fp->return_parameter) {
            current_var.name = context->expr(index)->getText();
            auto f= find_variable(false, false);
            if (!f) {
                error("Variable '" + current_var.name + "' not found or a valid RETURN");
            }
            fp->current_return_variable = current_var.name;
        }

        visit(context->expr(index));

        // Matching?
        auto type = stack_pop();
        if (type != fp->type) {
            // Can we convert?
            switch (fp->type) {
            case Type::INTEGER:
                switch (type) {
                case Type::INTEGER:
                    break;
                case Type::FLOAT:
                    insert_bytecode(Bytecodes::CONV_INT, Type::NOTYPE);
                    break;
                case Type::STRING:
                    error("Parameter '" + fp->name + "' for call to '" + called_fnproc + "' is the wrong type");
                }
                break;
            case Type::FLOAT:
                switch (type) {
                case Type::INTEGER:
                    insert_bytecode(Bytecodes::CONV_FLOAT, Type::NOTYPE);
                    break;
                case Type::FLOAT:
                    break;
                case Type::STRING:
                    error("Parameter '" + fp->name + "' for call to '" + called_fnproc + "' is the wrong type");
                }
                break;
            case Type::STRING:
                switch (type) {
                case Type::INTEGER:
                    error("Parameter '" + fp->name + "' for call to '" + called_fnproc + "' is the wrong type");
                case Type::FLOAT:
                    error("Parameter '" + fp->name + "' for call to '" + called_fnproc + "' is the wrong type");
                case Type::STRING:
                    break;
                }
                break;
            }
        }
    }
    return NULL;
}
antlrcpp::Any Compiler::visitStmtCallPROC(DARICParser::StmtCallPROCContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    called_fnproc = context->PROC_NAME()->getText();
    if (functions.count(called_fnproc) == 0) {
        error("Function or procedure '" + called_fnproc + "' does not exist");
    }

    // Parameters
    visit(context->functionParList());

    // Find function
    auto func = &(*functions.find(called_fnproc)).second;

    // Call
    if (phase != CompilerPhase::COMPILE) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0);
        insert_instruction(Bytecodes::CALL, Type::NOTYPE, 0);
    } else {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, func->index);
        insert_instruction(Bytecodes::CALL, Type::NOTYPE, func->pc_start);
    }

    // Do we have any return parameters? If so, grab from stack and store
    for (auto it = func->parameters.cbegin(); it != func->parameters.cend(); ++it) {
        auto a = *it;
        if (a.return_parameter) {
            current_var.name = a.current_return_variable;
            find_variable(false, true);
            insert_instruction(Bytecodes::STORE, current_var.type, current_var.id);
        }
    }

    return NULL;
}

antlrcpp::Any Compiler::visitStmtCallFN(DARICParser::StmtCallFNContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    called_fnproc = context->fnName()->getText();
    if (functions.count(called_fnproc) == 0) {
        error("Function or procedure '" + called_fnproc + "' does not exist");
    }

    // Parameters
    visit(context->functionParList());

    // Find function
    auto func = &(*functions.find(called_fnproc)).second;

    // Call
    if (phase != CompilerPhase::COMPILE) {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0);
        insert_instruction(Bytecodes::CALL, Type::NOTYPE, 0);
    } else {
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, func->index);
        insert_instruction(Bytecodes::CALL, Type::NOTYPE, func->pc_start);
    }

    // Do we have any return parameters? If so, grab from stack and store
    for (auto it = func->parameters.cbegin(); it != func->parameters.cend(); ++it) {
        auto a = *it;
        if (a.return_parameter) {
            current_var.name = a.current_return_variable;
            find_variable(false, true);
            insert_instruction(Bytecodes::STORE, current_var.type, current_var.id);
        }
    }

    // We are going to DROP the return in this case as it's called as a statement
    insert_bytecode(Bytecodes::DROP, Type::NOTYPE);

    return NULL;
}