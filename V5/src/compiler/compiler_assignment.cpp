#include "compiler.h"
#include <sstream>

antlrcpp::Any Compiler::visitStmtLET(DARICParser::StmtLETContext* context)
{
    set_pos(context->start);
    state = CompilerState::ASSIGNMENT;
    for (auto i = 0; i < context->varDecl().size(); i++) {

        // Get variable name and type
        visit(context->varDecl(i));

        // Now get value
        visit(context->expr(i));

        auto type = stack_pop();

        // Now do the assign
        find_or_create_variable(VariableScope::GLOBAL);

        // Now do stuff based on the type on the stack and the variable type
        switch (last_var.type) {
        case Type::INTEGER:
            switch (type) {
            case Type::REAL:
                insert_bytecode(Bytecodes::F_TO_I);
                insert_instruction(Bytecodes::STORE_I, last_var.id);
                break;
            case Type::INTEGER:
                insert_instruction(Bytecodes::STORE_I, last_var.id);
                break;
            default:
                std::stringstream s;
                s << "Variable '" << last_var.name << "', assigned value is of the wrong type";
                error(s.str());
            }
            break;
        case Type::REAL:
            switch (type) {
            case Type::INTEGER:
                insert_bytecode(Bytecodes::I_TO_F);
                insert_instruction(Bytecodes::STORE_F, last_var.id);
                break;
            case Type::REAL:
                insert_instruction(Bytecodes::STORE_F, last_var.id);
                break;
            default:
                std::stringstream s;
                s << "Variable '" << last_var.name << "', assigned value is of the wrong type";
                error(s.str());
            }
            break;
        case Type::STRING:
            switch (type) {
            case Type::STRING:
                insert_instruction(Bytecodes::STORE_S, last_var.id);
                break;
            default:
                std::stringstream s;
                s << "Variable '" << last_var.name << "', assigned value is of the wrong type";
                error(s.str());
            }
            break;
        }
    }

    state = CompilerState::NOSTATE;
    return NULL;
}

antlrcpp::Any Compiler::visitStmtLOCAL(DARICParser::StmtLOCALContext* context)
{
    set_pos(context->start);
    state = CompilerState::ASSIGNMENT_LOCAL;
    for (auto i = 0; i < context->varDecl().size(); i++) {

        // Get variable name and type
        visit(context->varDecl(i));

        // Now get value
        visit(context->expr(i));

        // Check types are the same
        auto type = stack_pop();
        if (last_var.type != type) {
            std::stringstream s;
            s << "Variable '" << last_var.name << "', assigned value is of the wrong type";
            error(s.str());
        }
    }
    state = CompilerState::NOSTATE;
    return NULL;
}
