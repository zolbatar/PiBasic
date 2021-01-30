#include "compiler.h"

antlrcpp::Any Compiler::Compile_PRINT(DARICParser::StmtContext* context)
{
    print_semicolon_active = false;
    state = CompilerState::PRINT;
    print_hex = false;
    print_justify = false;
    visit(context->printList());
    state = CompilerState::NOSTATE;
    if (!print_semicolon_active) {
        insert_bytecode(Bytecodes::PRINT_NL);
    }
    return NULL;
}