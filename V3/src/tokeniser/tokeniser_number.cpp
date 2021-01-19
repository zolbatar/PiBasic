#include "tokeniser.h"

void Tokeniser::handle_number(const char& c)
{
    if (std::isdigit(c) || c == '.' || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F')) {
        search += c;
    } else if (c == '-' && search.length() == 0) {
        search += c;
    } else if (c == '+' && search.length() == 0) {
        search += c;
    } else if (search.length() == 0 && c == '&') {
        search += c;
    } else {
        if (search.length() == 1 && search[0] == '-') {
            // This is unary minus
            auto found = symbols.find("UNARY-");
            create_token((*found).second);
            handle_character(c);
            return;
        } else if (search.length() == 1 && search[0] == '+') {
            // This is unary plus
            auto found = symbols.find("UNARY+");
            create_token((*found).second);
            handle_character(c);
            return;
        }
        // Figure out what type of number this is
        else if (search[0] == '&') {
            search.replace(0, 1, "");
            VM_INT i = std::stoi(search, 0, 16);
            Token t;
            t.file_number = file_number;
            t.line_number = file_line_number;
            t.char_number = get_chars_current().length();
            t.type = TokenType::INTEGER;
            t.integer = i;
            tokens.push_back(std::move(t));
        } else if (search.find('.') != std::string::npos) {
            VM_FLOAT f = std::stod(search);
            Token t;
            t.file_number = file_number;
            t.line_number = file_line_number;
            t.char_number = get_chars_current().length();
            t.type = TokenType::REAL;
            t.real = f;
            tokens.push_back(std::move(t));
        } else {
            VM_INT i = std::stoi(search);

            // Could this be a line number?
            if (tokens.size() == 0 || tokens.back().type == TokenType::TERMINATOR) {
                line_number = i;
                Token t;
                t.file_number = file_number;
                t.line_number = file_line_number;
                t.char_number = get_chars_current().length();
                t.type = TokenType::LINE_NUMBER;
                t.integer = i;
                tokens.push_back(std::move(t));
            } else {
                Token t;
                t.file_number = file_number;
                t.line_number = file_line_number;
                t.char_number = get_chars_current().length();
                t.type = TokenType::INTEGER;
                t.integer = i;
                tokens.push_back(std::move(t));
            }
        }
        end_of_token();
        handle_character(c);
    }
}
