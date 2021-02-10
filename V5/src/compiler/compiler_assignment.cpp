#include "compiler.h"
#include <sstream>

antlrcpp::Any Compiler::visitStmtLET(DARICParser::StmtLETContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    set_pos(context->start);
    for (auto i = 0; i < context->varDecl().size(); i++) {

        // Get variable name and type
        current_var.field_index = -1;
        state = CompilerState::ASSIGNMENT;
        visit(context->varDecl(i));
        state = CompilerState::NOSTATE;

        // Is this a forced scope assignment?
        if (context->LOCAL() != NULL || context->GLOBAL() != NULL || context->LET() != NULL) {
            find_or_create_variable_in_scope(context->LOCAL() != NULL ? VariableScope::LOCAL : VariableScope::GLOBAL);
        } else {
            find_or_create_variable(context->LOCAL() != NULL ? VariableScope::LOCAL : VariableScope::GLOBAL);
        }
        auto saved = current_var;

        // Get value
        visit(context->expr(i));
        Type type;

        // Is this a type creation thing?
        if (current_var.type == Type::TYPE && saved.field_index == -1) {
            type = Type::TYPE;
            auto t = current_var.name;
            current_var = saved;
            set_custom_type(t);
        } else {
            type = stack_pop();
        }
        assert(stack_size() == 0);

        save_to_variable(type, saved);
    }

    state = CompilerState::NOSTATE;
    return NULL;
}

void Compiler::save_to_variable(Type type, VarReference saved)
{
    // Now do stuff based on the type on the stack and the variable type
    switch (saved.type) {
    case Type::INTEGER:
        switch (type) {
        case Type::FLOAT:
            insert_instruction(Bytecodes::CONV_INT, Type::FLOAT, 0);
            insert_instruction(Bytecodes::STORE, Type::INTEGER, saved.id);
            break;
        case Type::INTEGER:
            insert_instruction(Bytecodes::STORE, Type::INTEGER, saved.id);
            break;
        default:
            error("Variable '" + saved.name + "', assigned value is of the wrong type");
        }
        break;
    case Type::FLOAT:
        switch (type) {
        case Type::INTEGER:
            insert_instruction(Bytecodes::CONV_FLOAT, Type::INTEGER, 0);
            insert_instruction(Bytecodes::STORE, Type::FLOAT, saved.id);
            break;
        case Type::FLOAT:
            insert_instruction(Bytecodes::STORE, Type::FLOAT, saved.id);
            break;
        default:
            error("Variable '" + saved.name + "', assigned value is of the wrong type");
        }
        break;
    case Type::STRING:
        switch (type) {
        case Type::STRING:
            insert_instruction(Bytecodes::STORE, Type::STRING, saved.id);
            break;
        default:
            error("Variable '" + saved.name + "', assigned value is of the wrong type");
        }
        break;
    case Type::INTEGER_ARRAY:
        if (last_array_dimensions != last_array_num_dimensions) {
            error("Variable '" + saved.name + "', array dimension mismatch");
        }
        switch (type) {
        case Type::FLOAT:
            insert_bytecode(Bytecodes::CONV_INT, Type::NOTYPE);
            break;
        case Type::INTEGER:
            break;
        default:
            error("Variable '" + saved.name + "', assigned value is of the wrong type");
        }
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, last_array_num_dimensions);
        insert_instruction(Bytecodes::STORE_ARRAY, Type::INTEGER_ARRAY, saved.id);
        break;
    case Type::FLOAT_ARRAY:
        if (last_array_dimensions != last_array_num_dimensions) {
            error("Variable '" + saved.name + "', array dimension mismatch");
        }
        switch (type) {
        case Type::INTEGER:
            insert_bytecode(Bytecodes::CONV_FLOAT, Type::NOTYPE);
            break;
        case Type::FLOAT:
            break;
        default:
            error("Variable '" + saved.name + "', assigned value is of the wrong type");
        }
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, last_array_num_dimensions);
        insert_instruction(Bytecodes::STORE_ARRAY, Type::FLOAT_ARRAY, saved.id);
        break;
    case Type::STRING_ARRAY:
        if (last_array_dimensions != last_array_num_dimensions) {
            error("Variable '" + saved.name + "', array dimension mismatch");
        }
        switch (type) {
        case Type::STRING:
            break;
        default:
            error("Variable '" + saved.name + "', assigned value is of the wrong type");
        }
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, last_array_num_dimensions);
        insert_instruction(Bytecodes::STORE_ARRAY, Type::STRING_ARRAY, saved.id);
        break;
    case Type::TYPE:
        if (current_var.field_index == -1) {
            insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, static_cast<int>(last_type_num_dimensions));
            insert_instruction(Bytecodes::NEW_TYPE, Type::TYPE, saved.id);

            // Zero all fields
            if (!performance_build) {
                find_variable(false, true);
                auto t = (*custom_types.find(current_var.custom_type_name)).second;
                for (auto it = t.members.begin(); it != t.members.end(); ++it) {
                    auto m = (*it).second;
                    switch (m.get_type()) {
                    case Type::INTEGER:
                        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0);
                        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, m.index);
                        insert_instruction(Bytecodes::STORE_FIELD, Type::INTEGER, saved.id);
                        break;
                    case Type::FLOAT:
                        insert_instruction(Bytecodes::LOAD, Type::FLOAT, constant_float_create(0.0));
                        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, m.index);
                        insert_instruction(Bytecodes::STORE_FIELD, Type::FLOAT, saved.id);
                        break;
                    case Type::STRING:
                        insert_instruction(Bytecodes::LOAD, Type::STRING, constant_string_create(""));
                        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, m.index);
                        insert_instruction(Bytecodes::STORE_FIELD, Type::STRING, saved.id);
                        break;
                    default:
                        error("Unknown field type when initialising");
                    }
                }
            }
        } else {
            insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, current_var.field_index);
            switch (current_var.field_type) {
            case Type::INTEGER:
                switch (type) {
                case Type::FLOAT:
                    insert_bytecode(Bytecodes::CONV_INT, Type::NOTYPE);
                    insert_instruction(Bytecodes::STORE_FIELD, Type::INTEGER, saved.id);
                    break;
                case Type::INTEGER:
                    insert_instruction(Bytecodes::STORE_FIELD, Type::INTEGER, saved.id);
                    break;
                default:
                    error("Failed conversion for assignment");
                }
                break;
            case Type::FLOAT:
                switch (type) {
                case Type::INTEGER:
                    insert_bytecode(Bytecodes::CONV_FLOAT, Type::NOTYPE);
                    insert_instruction(Bytecodes::STORE_FIELD, Type::FLOAT, saved.id);
                    break;
                case Type::FLOAT:
                    insert_instruction(Bytecodes::STORE_FIELD, Type::FLOAT, saved.id);
                    break;
                default:
                    error("Failed conversion for assignment");
                    break;
                }
                break;
            case Type::STRING:
                switch (type) {
                case Type::STRING:
                    insert_instruction(Bytecodes::STORE_FIELD, Type::STRING, saved.id);
                    break;
                default:
                    error("Failed conversion for assignment");
                    break;
                }
                break;
            default:
                error("Unknown TYPE field variable type");
            }
        }
        break;
    case Type::TYPE_ARRAY: {
        switch (current_var.field_type) {
        case Type::INTEGER:
            switch (type) {
            case Type::FLOAT:
                insert_bytecode(Bytecodes::CONV_INT, Type::NOTYPE);
                insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, current_var.field_index);
                insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, static_cast<int>(last_type_num_dimensions));
                insert_instruction(Bytecodes::STORE_FIELD_ARRAY, Type::INTEGER, saved.id);
                break;
            case Type::INTEGER:
                insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, current_var.field_index);
                insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, static_cast<int>(last_type_num_dimensions));
                insert_instruction(Bytecodes::STORE_FIELD_ARRAY, Type::INTEGER, saved.id);
                break;
            default:
                error("Failed conversion for assignment");
            }
            break;
        case Type::FLOAT:
            switch (type) {
            case Type::INTEGER:
                insert_bytecode(Bytecodes::CONV_FLOAT, Type::NOTYPE);
                insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, current_var.field_index);
                insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, static_cast<int>(last_type_num_dimensions));
                insert_instruction(Bytecodes::STORE_FIELD_ARRAY, Type::FLOAT, saved.id);
                break;
            case Type::FLOAT:
                insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, current_var.field_index);
                insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, static_cast<int>(last_type_num_dimensions));
                insert_instruction(Bytecodes::STORE_FIELD_ARRAY, Type::FLOAT, saved.id);
                break;
            default:
                error("Failed conversion for assignment");
                break;
            }
            break;
        case Type::STRING:
            switch (type) {
            case Type::STRING:
                insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, current_var.field_index);
                insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, static_cast<int>(last_type_num_dimensions));
                insert_instruction(Bytecodes::STORE_FIELD_ARRAY, Type::STRING, saved.id);
                break;
            default:
                error("Failed conversion for assignment");
                break;
            }
            break;
        default:
            error("Unknown TYPE field variable type");
        }
        break;
    }
    }
}