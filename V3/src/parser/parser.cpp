#include "parser.h"
#include <iostream>

Parser::Parser(Tokeniser* tokeniser)
{
    this->tokeniser = tokeniser;
}

void Parser::parse()
{
    auto tokens = tokeniser->get_tokens();
    tokens_it = tokens->begin();
    tokens_end = tokens->end();
    while (tokens_it != tokens_end) {
        start_of_statement();
    }
}

void Parser::start_of_statement()
{
    if ((*tokens_it).line_number != last_line_number) {
        nodes.insert(std::make_pair((*tokens_it).line_number, std::list<ASTNode>()));
        last_line_number = (*tokens_it).line_number;
    }
    while (true) {
        switch ((*tokens_it).type) {
        case TokenType::LINE_NUMBER:
            // Ignore these, because they are already encoded in the line number of the tokens
            advance_token();
            break;
        case TokenType::TERMINATOR:
            // End of line/statement
            advance_token();
            return;
        case TokenType::INTEGER:
        case TokenType::REAL:
        case TokenType::STRING:
            // We shouldn't start a line with a literal
            error("Syntax error");
        case TokenType::IDENTIFIER:
        case TokenType::IDENTIFIER_INTEGER:
        case TokenType::IDENTIFIER_STRING:
            // At the start of the line must be an assignment
            parse_assignment();
            break;
        default:
            // It must be a token
            parse_token();
            break;
        }
    }
}

void Parser::parse_token()
{
    switch ((*tokens_it).type) {
    case TokenType::REM:
        advance_token();
        // Ignore and move on
        return;
    case TokenType::GLOBAL:
    case TokenType::LET:
    case TokenType::LOCAL:
        return parse_assignment();

    case TokenType::DIM:
        return parse_token_DIM();
    case TokenType::IF:
        return parse_token_IF();
    case TokenType::PRINT:
        return parse_token_PRINT();

    case TokenType::CLS:
    case TokenType::COLOURBG:
    case TokenType::GRAPHICS:
        return parse_token_graphics();
    default:
        error("Syntax error");
    }
}

void Parser::advance_token()
{
    if (tokens_it == tokens_end) {
        error("End of file reached");
    }
    tokens_it++;
}

void Parser::ensure_node_is_token(TokenType oper)
{
    if ((*tokens_it).type != oper) {
        error("No operator or invalid operator");
    }
    advance_token();
}

void Parser::error(std::string error)
{
    auto t = (*tokens_it);

    // Arrow pos
    auto arrow = t.char_number - 1;
    if (arrow < 0) {
        arrow = 0;
    }

    std::cout << error << " at line " << t.line_number << " in file " << tokeniser->get_filename(t.file_number) << std::endl
              << std::endl;
    auto line = tokeniser->get_chars(t.file_number, t.line_number);
    std::cout << line;
    for (auto i = 0; i < arrow; i++) {
        std::cout << " ";
    }
    std::cout << "^" << std::endl;
    std::cout << std::endl;
    exit(1);
}
