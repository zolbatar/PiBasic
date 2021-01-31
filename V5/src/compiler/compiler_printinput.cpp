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

antlrcpp::Any Compiler::visitPrintList(DARICParser::PrintListContext* context)
{
    visitChildren(context);

    // Work through the stack and print anything off
    while (stack_size() >= 1) {
        insert_instruction_based_on_type(
            {
                { Type::INTEGER, Bytecodes::PRINT_I },
                { Type::REAL, Bytecodes::PRINT_F },
                { Type::STRING, Bytecodes::PRINT_S },
            },
            peek_type(), create_print_flag());
        stack_pop();
    }

    return NULL;
}
