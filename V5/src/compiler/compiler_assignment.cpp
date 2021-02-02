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
        Type type;
        if (last_var.type == Type::TYPE) {
            type = Type::TYPE;
        } else {
            type = stack_pop();
        }

        // Now do stuff based on the type on the stack and the variable type
        switch (saved.type) {
        case Type::INTEGER:
            switch (type) {
            case Type::FLOAT:
                insert_bytecode(Bytecodes::F_TO_I, Type::NOTYPE);
                insert_instruction(Bytecodes::STORE, Type::INTEGER, saved.id);
                break;
            case Type::INTEGER:
                insert_instruction(Bytecodes::STORE, Type::INTEGER, saved.id);
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
                insert_bytecode(Bytecodes::I_TO_F, Type::NOTYPE);
                insert_instruction(Bytecodes::STORE, Type::FLOAT, saved.id);
                break;
            case Type::FLOAT:
                insert_instruction(Bytecodes::STORE, Type::FLOAT, saved.id);
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
                insert_instruction(Bytecodes::STORE, Type::STRING, saved.id);
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
                insert_bytecode(Bytecodes::F_TO_I, Type::NOTYPE);
                break;
            case Type::INTEGER:
                break;
            default:
                std::stringstream s;
                s << "Variable '" << saved.name << "', assigned value is of the wrong type";
                error(s.str());
            }
            insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, last_array_num_dimensions);
            insert_instruction(Bytecodes::STORE_ARRAY, Type::INTEGER_ARRAY, saved.id);
            break;
        case Type::FLOAT_ARRAY:
            switch (type) {
            case Type::INTEGER:
                insert_bytecode(Bytecodes::I_TO_F, Type::NOTYPE);
                break;
            case Type::FLOAT:
                break;
            default:
                std::stringstream s;
                s << "Variable '" << saved.name << "', assigned value is of the wrong type";
                error(s.str());
            }
            insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, last_array_num_dimensions);
            insert_instruction(Bytecodes::STORE_ARRAY, Type::FLOAT_ARRAY, saved.id);
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
            insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, last_array_num_dimensions);
            insert_instruction(Bytecodes::STORE_ARRAY, Type::STRING_ARRAY, saved.id);
            break;
        case Type::TYPE:
            insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, static_cast<int>(last_type_num_dimensions));
            insert_instruction(Bytecodes::NEW_TYPE, Type::TYPE, saved.id);
            break;
        default:
            error("Unknown type in assignment");
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
