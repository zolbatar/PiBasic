#include "compiler.h"

antlrcpp::Any Compiler::visitStmtPRINT(DARICParser::StmtPRINTContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    print_semicolon_active = false;
    print_hex = false;
    print_justify = true;
    if (context->printList() != NULL) {
        visit(context->printList());
    } else {
        insert_bytecode_notype(Bytecodes::PRINT_NL);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitStmtINPUT(DARICParser::StmtINPUTContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;

    // Do we have some text to display?
    if (context->strExpr() != NULL) {
        visit(context->strExpr());
        stack_pop();
        insert_bytecode(Bytecodes::PRINT, Type::STRING);

    }

    // Question mark?
    bool q_mark = true;
    if (context->COMMA().size() < context->justVar().size()) {
        q_mark = false;
    }

    // Process all vars
    for (auto i = 0; i < context->justVar().size(); i++) {
        visit(context->justVar(i));
        find_or_create_variable(context->LOCAL() != NULL ? VariableScope::LOCAL : VariableScope::GLOBAL);
        insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, q_mark);
        insert_instruction(Bytecodes::INPUT, current_var.type, current_var.id);
    }

    return NULL;
}

antlrcpp::Any Compiler::visitPrintList(DARICParser::PrintListContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    if (context->printListTick() != NULL) {
        visit(context->printListTick());
    }
    if (context->s1 != nullptr) {
        print_justify = false;
        print_hex = false;
        print_semicolon_active = true;
    }
    for (int i = 0; i < context->printListItem().size(); i++) {
        visit(context->printListItem(i));
        if (i != context->printListItem().size() - 1) {
            visit(context->printListSeparator(i));
        }
    }
    if (context->s2 == nullptr) {
        insert_bytecode_notype(Bytecodes::PRINT_NL);
    }
    return NULL;
}

antlrcpp::Any Compiler::visitPrintListSeparator(DARICParser::PrintListSeparatorContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    if (context->COMMA() != NULL) {
        print_justify = true;
        print_hex = false;
        print_semicolon_active = false;
    } else if (context->SEMICOLON() != NULL) {
        print_justify = false;
        print_hex = false;
        print_semicolon_active = true;
    } else if (context->printListTick() != NULL) {
        visit(context->printListTick());
    }
    return NULL;
}

antlrcpp::Any Compiler::visitPrintListItem(DARICParser::PrintListItemContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitPrintListExpr(DARICParser::PrintListExprContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
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
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    auto n = context->TICK().size();
    for (auto i = 0; i < n; i++) {
        insert_bytecode_notype(Bytecodes::PRINT_NL);
    }
    print_semicolon_active = false;
    return NULL;
}

antlrcpp::Any Compiler::visitPrintListSPCP(DARICParser::PrintListSPCPContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    print_semicolon_active = false;
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode_notype(Bytecodes::PRINT_SPC);
    return NULL;
}

antlrcpp::Any Compiler::visitPrintListSPC(DARICParser::PrintListSPCContext* context)
{
    set_pos(context->start);
    if (phase == CompilerPhase::LOOKAHEAD)
        return NULL;
    print_semicolon_active = false;
    visit(context->numExpr());
    ensure_stack_is_integer();
    stack_pop();
    insert_bytecode_notype(Bytecodes::PRINT_SPC);
    return NULL;
}
