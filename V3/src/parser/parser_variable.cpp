#include "parser.h"

ASTNode Parser::create_variable_node(bool assignment, bool allow_indexed, bool allow_fields)
{
    auto v = (*tokens_it);
    ASTNode n = create_node(NodeType::None);
    n.v_string = (*tokens_it).text;
    advance_token();
    if ((*tokens_it).type == TokenType::BANG) {
        if (!allow_fields)
            error("Field variables not allowed");
        // Field specifier
        error("Fields not supported");
    } else if ((*tokens_it).type == TokenType::LPARENS) {
        if (!allow_indexed)
            error("Indexed variables not allowed");
        // Array index
        advance_token();
        ASTNode ne = create_expression_node(assignment, true);
        n.type = NodeType::VariableTypeWithIndex;
        add_child_node(n, ne);
    } else {
        // Regular variable
        n.type = NodeType::Variable;
    }
    return n;
}

void Parser::parse_token_DIM()
{
    advance_token();

    auto n = create_node(NodeType::Token);
    n.token = TokenType::DIM;

    // Decode variable
    auto nl = create_variable_node(true, true, false);

    add_child_node(n, nl);
    add_node(n);
}