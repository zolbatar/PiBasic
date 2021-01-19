#include "tokeniser.h"

void Tokeniser::handle_symbol(const char& c)
{
    if (
        (c == '-' && search.length() == 1 && search[0] == '-') || (c == '-' && search.length() == 1 && search[0] == '+') || (c == '+' && search.length() == 1 && search[0] == '-') || (c == '+' && search.length() == 1 && search[0] == '+')) {
        // Binary followed by unary minus
        auto found = symbols.find(search);
        create_token((*found).second);
        handle_character(c);
    } else if (std::isalnum(c) || c == ' ' || c == '\n' || c == ':') {
        // If this is alphanumeric it's probably end of token
        auto found = symbols.find(search);
        if (found != symbols.end()) {
            create_token((*found).second);
            handle_character(c);
            return;
        }
        error("Syntax error");
    } else {
        search += c;

        // Single character symbols
        if (search.length() == 1) {
            auto found = symbols_single.find(search);
            if (found != symbols_single.end()) {
                create_token((*found).second);
                return;
            }
        }

        // Two character symbols
        if (search.length() == 2) {
            auto found = symbols.find(search);
            if (found != symbols.end()) {
                create_token((*found).second);
                return;
            } else {
                // We have a problem, try dropping the last character off, searching and error if we don't find
                char cb = search.back();
                search.pop_back();
                auto found = symbols.find(search);
                if (found != symbols.end()) {
                    create_token((*found).second);
                    handle_character(cb);
                    return;
                }
                error("Syntax error");
            }
        }

        // If length > 2 then we have a problem
        if (search.length() > 2) {
            error("Syntax error");
        }
    }
}
