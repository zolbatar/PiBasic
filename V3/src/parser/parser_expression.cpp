#include "parser.h"
#include <stack>

bool Parser::is_expression_terminator(bool assignment)
{
    auto t = (*tokens_it);
    if ((*tokens_it).type == TokenType::TERMINATOR) {
        // New line
        return true;
    } else if ((*tokens_it).type == TokenType::COLON) {
        // : end of statement
        return true;
    } else if ((*tokens_it).type == TokenType::COMMA) {
        // , is always expression separator
        return true;
    } else if ((*tokens_it).type == TokenType::THEN) {
        // , is always expression separator
        return true;
    } else if ((*tokens_it).type == TokenType::TO) {
        // , is always expression separator
        return true;
    } else if ((*tokens_it).type == TokenType::STEP) {
        // , is always expression separator
        return true;
    } else if ((*tokens_it).type == TokenType::EQUAL && assignment) {
        // , is always expression separator
        return true;
    }
    return false;
}

bool Parser::token_has_parameters(TokenType type)
{
    switch (type) {
    case TokenType::PI:
        return false;
    default:
        return true;
    }
}

int Parser::get_operator_precedence(TokenType type)
{
    switch (type) {
    case TokenType::FN:
    case TokenType::LPARENS:
    case TokenType::RPARENS:
    case TokenType::UNARYMINUS:
    case TokenType::UNARYPLUS:
    case TokenType::NOT:
    case TokenType::SUB_EXPRESSION:
        return 100 - 1;
    case TokenType::HAT:
        return 100 - 2;
    case TokenType::MOD:
    case TokenType::DIV:
    case TokenType::DIVIDE:
    case TokenType::MULTIPLY:
    case TokenType::DIVIDE_EQUAL:
    case TokenType::MULTIPLY_EQUAL:
        return 100 - 3;
    case TokenType::SHIFT_LEFT:
    case TokenType::SHIFT_RIGHT:
        return 100 - 4;
    case TokenType::ADD:
    case TokenType::SUBTRACT:
    case TokenType::ADD_EQUAL:
    case TokenType::SUBTRACT_EQUAL:
        return 100 - 5;
    case TokenType::NOTEQUAL:
    case TokenType::EQUAL:
    case TokenType::GREATEREQUAL:
    case TokenType::LESSEQUAL:
    case TokenType::GREATER:
    case TokenType::LESS:
        return 100 - 6;
    case TokenType::AND:
        return 100 - 7;
    case TokenType::EOR:
    case TokenType::OR:
        return 100 - 8;
    default:
        // We have to assume it's a inbuilt thing like ABS or ACS
        return 100 - 1;
    }
}

bool Parser::is_left_associative(TokenType type)
{
    if (type == TokenType::HAT || type == TokenType::UNARYMINUS || type == TokenType::UNARYPLUS)
        return true;
    return false;
}

ASTNode Parser::create_expression_node(bool assignment, bool subexpression)
{
    ASTNode e = create_node(NodeType::Expression);
    auto operator_stack = std::stack<ASTNode>();

    /*   
    I am using the shunting yard algorithm here rather than creating an AST. 
    Mainly because I'm familiar with it, and it created a nice stack of stuff to make compilation easier :-)
    */

    while (!is_expression_terminator(assignment)) {
        switch ((*tokens_it).type) {

        case TokenType::REAL: {
            // Push literals direct to output queue
            ASTNode nc = create_node(NodeType::Real);
            nc.v_real = (*tokens_it).real;
            add_child_node(e, nc);
            break;
        }
        case TokenType::INTEGER: {
            // Push literals direct to output queue
            ASTNode nc = create_node(NodeType::Integer);
            nc.v_integer = (*tokens_it).integer;
            add_child_node(e, nc);
            break;
        }
        case TokenType::STRING: {
            // Push literals direct to output queue
            ASTNode nc = create_node(NodeType::String);
            nc.v_string = (*tokens_it).text;
            add_child_node(e, nc);
            break;
        }

        case TokenType::LPARENS: {
            // We should create a sub-expression for this
            bool lparens_done = false;
            do {
                advance_token();
                ASTNode nc = create_expression_node(false, true);
                nc.type = NodeType::SubExpression;
                nc.token = TokenType::SUB_EXPRESSION;
                operator_stack.push(std::move(nc));

                // Do we have a comma?
                lparens_done = (*tokens_it).type != TokenType::COMMA;
            } while (!lparens_done);

            // Step back a token
            tokens_it--;

            break;
        }

        case TokenType::RPARENS: {
            if (subexpression) {
                advance_token();

                // Pop everything off operator stack to output
                while (!operator_stack.empty()) {
                    add_child_node(e, operator_stack.top());
                    operator_stack.pop();
                }
                return e;
            } else {
                error("Mismatched parentheses");
            }
            break;
        }

        case TokenType::IDENTIFIER:
        case TokenType::IDENTIFIER_INTEGER:
        case TokenType::IDENTIFIER_STRING: {
            // These are variables
            auto nv = create_variable_node(assignment, true, true);
            add_child_node(e, nv);

            // Step back a token
            tokens_it--;
            break;
        }

        default: {
            // Presumably an operator, or a function call, or a keyword
            int prec = get_operator_precedence((*tokens_it).type);
            while (!operator_stack.empty() && ((get_operator_precedence(operator_stack.top().token) > prec) || (get_operator_precedence(operator_stack.top().token) == prec && is_left_associative((*tokens_it).type)))) {
                add_child_node(e, operator_stack.top());
                operator_stack.pop();
            }
            ASTNode nc = create_node(NodeType::Token);
            nc.token = (*tokens_it).type;
            operator_stack.push(std::move(nc));
            break;
        }
        }

        // Next token
        advance_token();
    }

    // Pop everything off operator stack to output
    while (!operator_stack.empty()) {
        add_child_node(e, operator_stack.top());
        operator_stack.pop();
    }
    return e;
}