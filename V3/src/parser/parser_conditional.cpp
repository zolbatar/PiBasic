#include "parser.h"

void Parser::parse_token_IF()
{
    advance_token();
    auto n = create_node(NodeType::Token);
    n.token = TokenType::IF;

    // Parse expression
    ASTNode ne = create_expression_node(false, false);
    add_child_node(n, ne);

    // Do we have a real THEN? If so skip
    if ((*tokens_it).type == TokenType::THEN) {
        advance_token();
    }

    // Now we need to parse the TRUE part first, until either end of line or an ELSE

    add_node(n);
}
