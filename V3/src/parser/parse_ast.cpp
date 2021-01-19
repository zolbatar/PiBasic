#include "parser.h"

ASTNode Parser::create_node(NodeType type)
{
    ASTNode n;
    n.type = type;
    n.file_number = (*tokens_it).file_number;
    n.line_number = (*tokens_it).line_number;
    n.char_number = (*tokens_it).char_number;
    n.var_type = Type::None;
    n.v_integer = 0;
    n.v_real = 0.0;
    n.v_string = "";
    n.token = TokenType::NONE;
    n.children = std::list<ASTNode>();
    return n;
}

void Parser::add_node(ASTNode node)
{
    nodes[(*tokens_it).line_number].push_back(std::move(node));
}

void Parser::add_child_node(ASTNode& parent, ASTNode node)
{
    parent.children.push_back(std::move(node));
}
