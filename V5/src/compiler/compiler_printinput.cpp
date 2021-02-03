#include "compiler.h"

antlrcpp::Any Compiler::visitStmtPRINT(DARICParser::StmtPRINTContext* context)
{
    set_pos(context->start);
    print_semicolon_active = false;
    print_hex = false;
    print_justify = false;
    visit(context->printList());
    if (!print_semicolon_active) {
        insert_bytecode(Bytecodes::PRINT_NL, Type::NOTYPE);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtINPUT(DARICParser::StmtINPUTContext* context)
{
    set_pos(context->start);
    return NULL;
}
antlrcpp::Any Compiler::visitPrintList(DARICParser::PrintListContext* context)
{
    set_pos(context->start);
    if (context->printStartingTicks() != NULL) {
        visit(context->printStartingTicks());
    }
    for (int i = 0; i < context->printListItem().size(); i++) {
        if (context->COMMA(i) != NULL) {
            print_justify = true;
            print_hex = false;
            print_semicolon_active = false;
        } else if (context->SEMICOLON(i) != NULL) {
            print_justify = false;
            print_hex = false;
            print_semicolon_active = true;
        }
        visit(context->printListItem(i));
    }
    return NULL;
}

antlrcpp::Any Compiler::visitPrintListItem(DARICParser::PrintListItemContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitPrintListExpr(DARICParser::PrintListExprContext* context)
{
    set_pos(context->start);
    visitChildren(context);
    if (context->TILDE() != NULL) {
        print_hex = true;
    }

    // Work through the stack and print anything off
    while (stack_size() >= 1) {
        insert_instruction(Bytecodes::PRINT, peek_type(), create_print_flag());
        stack_pop();
    }
    print_semicolon_active = false;

    return NULL;
}

antlrcpp::Any Compiler::visitPrintListTick(DARICParser::PrintListTickContext* context)
{
    set_pos(context->start);
    auto n = context->TICK().size();
    for (auto i = 0; i < n; i++) {
        insert_bytecode(Bytecodes::PRINT_NL, Type::NOTYPE);
    }
    print_semicolon_active = false;
    return NULL;
}

antlrcpp::Any Compiler::visitPrintListSPCP(DARICParser::PrintListSPCPContext* context)
{
    set_pos(context->start);
    print_semicolon_active = false;
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::PRINT_SPC, Type::NOTYPE);
    return NULL;
}

antlrcpp::Any Compiler::visitPrintListSPC(DARICParser::PrintListSPCContext* context)
{
    set_pos(context->start);
    print_semicolon_active = false;
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode(Bytecodes::PRINT_SPC, Type::NOTYPE);
    return NULL;
}
