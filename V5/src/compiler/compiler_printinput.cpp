#include "compiler.h"

antlrcpp::Any Compiler::Compile_PRINT(DARICParser::StmtContext* context)
{
    print_semicolon_active = false;
    state = CompilerState::PRINT;
    print_hex = false;
    print_justify = false;
    auto r = visit(context->printList());
    state = CompilerState::NOSTATE;
    if (!print_semicolon_active) {
        //g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::PRINT_NL);
    }
    return true;
}