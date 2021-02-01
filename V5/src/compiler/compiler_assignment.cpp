#include "compiler.h"
#include <sstream>

antlrcpp::Any Compiler::visitStmtLET(DARICParser::StmtLETContext* context)
{
    set_pos(context->start);
    state = CompilerState::ASSIGNMENT;
    for (auto i = 0; i < context->varDecl().size(); i++) {

        // Get variable name and type
        visit(context->varDecl(i));
        find_or_create_variable(VariableScope::GLOBAL);
        auto saved = last_var;

        // Get value
        visit(context->expr(i));
        auto type = stack_pop();

        // Now do stuff based on the type on the stack and the variable type
        switch (saved.type) {
        case Type::INTEGER:
            switch (type) {
            case Type::FLOAT:
                insert_bytecode(Bytecodes::F_TO_I);
                insert_instruction(Bytecodes::STORE_I, saved.id);
                break;
            case Type::INTEGER:
                insert_instruction(Bytecodes::STORE_I, saved.id);
                break;
            default:
                std::stringstream s;
                s << "Variable '" << saved.name << "', assigned value is of the wrong type";
                error(s.str());
            }
            break;
        case Type::FLOAT:
            switch (type) {
            case Type::INTEGER:
                insert_bytecode(Bytecodes::I_TO_F);
                insert_instruction(Bytecodes::STORE_F, saved.id);
                break;
            case Type::FLOAT:
                insert_instruction(Bytecodes::STORE_F, saved.id);
                break;
            default:
                std::stringstream s;
                s << "Variable '" << saved.name << "', assigned value is of the wrong type";
                error(s.str());
            }
            break;
        case Type::STRING:
            switch (type) {
            case Type::STRING:
                insert_instruction(Bytecodes::STORE_S, saved.id);
                break;
            default:
                std::stringstream s;
                s << "Variable '" << saved.name << "', assigned value is of the wrong type";
                error(s.str());
            }
            break;
        case Type::INTEGER_ARRAY:
            switch (type) {
            case Type::FLOAT:
                insert_bytecode(Bytecodes::F_TO_I);
                break;
            case Type::INTEGER:
                break;
            default:
                std::stringstream s;
                s << "Variable '" << saved.name << "', assigned value is of the wrong type";
                error(s.str());
            }
            insert_instruction(Bytecodes::CONST_I, last_array_num_dimensions);
            insert_instruction(Bytecodes::STORE_I_ARRAY, saved.id);
            break;
        case Type::FLOAT_ARRAY:
            switch (type) {
            case Type::INTEGER:
                insert_bytecode(Bytecodes::I_TO_F);
                break;
            case Type::FLOAT:
                break;
            default:
                std::stringstream s;
                s << "Variable '" << saved.name << "', assigned value is of the wrong type";
                error(s.str());
            }
            insert_instruction(Bytecodes::CONST_I, last_array_num_dimensions);
            insert_instruction(Bytecodes::STORE_F_ARRAY, saved.id);
            break;
        case Type::STRING_ARRAY:
            switch (type) {
            case Type::STRING:
                break;
            default:
                std::stringstream s;
                s << "Variable '" << saved.name << "', assigned value is of the wrong type";
                error(s.str());
            }
            insert_instruction(Bytecodes::CONST_I, last_array_num_dimensions);
            insert_instruction(Bytecodes::STORE_S_ARRAY, saved.id);
            break;
        }
    }

    state = CompilerState::NOSTATE;
    return NULL;
}

antlrcpp::Any Compiler::visitStmtLOCAL(DARICParser::StmtLOCALContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}
