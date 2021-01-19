#include "parser.h"

void Parser::parse_token_graphics()
{
    switch ((*tokens_it).type) {
    case TokenType::CLS:
        advance_token();
        break;
    case TokenType::COLOURBG: {
        auto n = create_node(NodeType::Token);
        n.token = (*tokens_it).type;
        advance_token();
        ASTNode n1 = create_expression_node(false, false);

        // If comma then we have the 3 parameter version
        if ((*tokens_it).type == TokenType::COMMA) {
            ensure_node_is_token(TokenType::COMMA);
            ASTNode n2 = create_expression_node(false, false);
            ensure_node_is_token(TokenType::COMMA);
            ASTNode n3 = create_expression_node(false, false);
            add_child_node(n, n1);
            add_child_node(n, n2);
            add_child_node(n, n3);
            add_node(n);
        } else {
            add_child_node(n, n1);
            add_node(n);
        }
        break;
    }
    case TokenType::GRAPHICS: {
        auto n = create_node(NodeType::Token);
        n.token = (*tokens_it).type;
        advance_token();
        ASTNode n1 = create_expression_node(false, false);
        ensure_node_is_token(TokenType::COMMA);
        ASTNode n2 = create_expression_node(false, false);
        ensure_node_is_token(TokenType::COMMA);
        ASTNode n3 = create_expression_node(false, false);
        add_child_node(n, n1);
        add_child_node(n, n2);
        add_child_node(n, n3);
        add_node(n);
        break;
    }
    default:
        error("Fatal parser error");
    }
}
