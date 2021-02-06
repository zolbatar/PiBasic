#include "compiler.h"

antlrcpp::Any Compiler::visitStmtCHAIN(DARICParser::StmtCHAINContext* context) {
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    visit(context->strExpr());
    stack_pop();
    insert_bytecode(Bytecodes::CHAIN, Type::NOTYPE);
    return NULL;
}
