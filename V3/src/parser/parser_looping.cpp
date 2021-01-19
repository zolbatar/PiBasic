#include "parser.h"

void Parser::parse_token_FOR()
{
    advance_token();
    auto n = create_node(NodeType::Token);
    n.token = TokenType::FOR;

    // The loop variable, need to NOT allow indexed variables
    auto nl = create_variable_node(false, true, false);
    add_child_node(n, nl);

    add_node(n);
}
