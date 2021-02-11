#include "compiler.h"

antlrcpp::Any Compiler::visitStmtDATA(DARICParser::StmtDATAContext* context)
{
    set_pos(context->start);
    state = CompilerState::DATA;
    for (int i = 0; i < context->literal().size(); i++) {
        visit(context->literal(i));
    }
    state = CompilerState::NOSTATE;
    return NULL;
}

antlrcpp::Any Compiler::visitStmtREAD(DARICParser::StmtREADContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD) {
        return NULL;
    }
    set_pos(context->start);

    for (auto i = 0; i < context->varDecl().size(); i++) {

        // Get variable name and type
        state = CompilerState::ASSIGNMENT;
        visit(context->varDecl(i));
        state = CompilerState::NOSTATE;
        find_or_create_variable(VariableScope::GLOBAL);
        auto saved = current_var;

        // Get value
        auto type = saved.type;
        switch (saved.type) {
        case Type::INTEGER:
        case Type::FLOAT:
        case Type::STRING:
            break;
        case Type::INTEGER_ARRAY:
            type = Type::INTEGER;
            break;
        case Type::FLOAT_ARRAY:
            type = Type::FLOAT;
            break;
        case Type::STRING_ARRAY:
            type = Type::STRING;
            break;
        default:
            error("Unknown type in READ");
        }
        insert_bytecode(Bytecodes::READ, type);
        assert(stack_size() == 0);
        save_to_variable(type, saved);
    }

    return NULL;
}

antlrcpp::Any Compiler::visitStmtRESTORE(DARICParser::StmtRESTOREContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD) {
        return NULL;
    }
    set_pos(context->start);
    insert_bytecode_notype(Bytecodes::RESTORE);
    return NULL;
}
