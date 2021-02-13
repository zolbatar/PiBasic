#include "compiler.h"

antlrcpp::Any Compiler::visitProg(DARICParser::ProgContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitLine(DARICParser::LineContext* context)
{
    g_env.graphics.poll();
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitLinePlus(DARICParser::LinePlusContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitBody(DARICParser::BodyContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitContent(DARICParser::ContentContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitStmt(DARICParser::StmtContext* context)
{
#ifdef _DEBUG
    bool do_check = stack_check_applied == false;
    if (do_check) {
        insert_bytecode_notype(Bytecodes::STACKCHECK);
        stack_check_applied = true;
    }
#endif
    set_pos(context->start);
    visitChildren(context);
#ifdef _DEBUG
    if (do_check) {
        stack_check_applied = false;
    }
#endif
    return NULL;
}

antlrcpp::Any Compiler::visitExprList(DARICParser::ExprListContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitExpr(DARICParser::ExprContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitNumber(DARICParser::NumberContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitLiteral(DARICParser::LiteralContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitCoreStmt(DARICParser::CoreStmtContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitKeyMouseStmt(DARICParser::KeyMouseStmtContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitIoStmt(DARICParser::IoStmtContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitGraphicsStmt(DARICParser::GraphicsStmtContext* context)
{
    set_pos(context->start);
    return visitChildren(context);
}
