#include "parser.h"

void Parser::parse_assignment()
{
    // Do we have a LET? If so, skip over
    auto nt = create_node(NodeType::Token);
    nt.token = TokenType::NONE;
    if ((*tokens_it).type == TokenType::LET) {
        // Leave as is, we don't know scope at this time
        advance_token();
    } else if ((*tokens_it).type == TokenType::GLOBAL) {
        nt.token = TokenType::GLOBAL;
        advance_token();
    } else if ((*tokens_it).type == TokenType::LOCAL) {
        nt.token = TokenType::LOCAL;
        advance_token();
    }

    // Create nodes
    auto n = create_node(NodeType::Assignment);
    auto nl = create_variable_node(true, true, true);
    ensure_node_is_token(TokenType::EQUAL);
    ASTNode ne = create_expression_node(true, false);

    add_child_node(n, nt);
    add_child_node(n, nl);
    add_child_node(n, ne);
    add_node(n);
}