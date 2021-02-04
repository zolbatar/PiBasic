#include "compiler.h"

antlrcpp::Any Compiler::visitStmtDEF(DARICParser::StmtDEFContext* context)
{
    set_pos(context->start);

    bool is_procedure = context->PROC() != NULL;

    // Figure out name (and type)
    visit(context->justVar());

    // If proc, no return type
    if (is_procedure) {
        current_var.type = Type::NOTYPE;
    }

    // Create a function object to stuff with things
    if (phase == CompilerPhase::LOOKAHEAD) {
        Function f;
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
            current_function->pc_start = vm->helper_bytecodes().pc;
            insert_instruction(Bytecodes::JUMP, Type::NOTYPE, 0);
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
            insert_instruction(Bytecodes::UNPACK, a.type, a.index | LocalVariableFlag);
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

        // Set end PC for jumping/calling purposes
        if (phase != CompilerPhase::COMPILE) {
            current_function->pc_end = vm->helper_bytecodes().pc;
        }
    }

    // Clear so we know when we are In and OUT of a function
    current_function = nullptr;

    return NULL;
}

antlrcpp::Any Compiler::visitStmtRETURN(DARICParser::StmtRETURNContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    if (context->expr() != NULL) {
        visit(context->expr());
        stack_pop();
    }
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

    return visitChildren(context);
}
