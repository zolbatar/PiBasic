#include "parser.h"

void Parser::parse_token_PRINT()
{
    auto n = create_node(NodeType::Token);
    n.token = (*tokens_it).type;

    // We loop until we find a terminator
    advance_token();
    while ((*tokens_it).type != TokenType::TERMINATOR) {
        switch ((*tokens_it).type) {
        case TokenType::STRING: {
            auto n1 = create_node(NodeType::String);
            n1.v_string = (*tokens_it).text;
            add_child_node(n, n1);
            advance_token();
            break;
        }
        case TokenType::SEMICOLON: {
            auto n1 = create_node(NodeType::Token);
            n1.token = (*tokens_it).type;
            add_child_node(n, n1);
            advance_token();
            break;
        }
        default:
            error("Unknown PRINT parameter");
        }
    }
    add_node(n);
}
