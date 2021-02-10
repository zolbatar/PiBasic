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
    assert(stack_size() == 0);
    return visitChildren(context);
}

antlrcpp::Any Compiler::visitLinenumber(DARICParser::LinenumberContext* context)
{
    set_pos(context->start);
    line_number = std::stoi(context->NUMBER()->getText());
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
    set_pos(context->start);
    return visitChildren(context);
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
