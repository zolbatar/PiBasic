#include "tokeniser.h"

void Tokeniser::handle_string(const char& c)
{
    if (c == '"') {
        // Check this a valid string
        if (search.length() > 0) {
            search.replace(0, 1, "");
            Token t;
            t.file_number = file_number;
            t.line_number = file_line_number;
            t.char_number = get_chars_current().length();
            t.type = TokenType::STRING;
            t.text = search;
            tokens.push_back(std::move(t));
            end_of_token();
        } else {
            search += c;
        }
    } else {
        search += c;
    }
}
