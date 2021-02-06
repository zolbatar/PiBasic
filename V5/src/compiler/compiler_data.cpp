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
        switch (saved.type) {
        case Type::INTEGER:
        case Type::FLOAT:
        case Type::STRING:
            break;
        default:
            error("Unknown type in READ");
        }
        insert_instruction(Bytecodes::READ, saved.type, saved.id);
        assert(stack_size() == 0);
        save_to_variable(saved.type, saved);
    }

    return NULL;
}

antlrcpp::Any Compiler::visitStmtRESTORE(DARICParser::StmtRESTOREContext* context)
{
    if (phase == CompilerPhase::LOOKAHEAD) {
        return NULL;
    }
    set_pos(context->start);
    insert_bytecode(Bytecodes::RESTORE, Type::NOTYPE);
    return NULL;
}
