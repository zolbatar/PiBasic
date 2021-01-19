#include "tokeniser.h"
#include <algorithm>
#include <iostream>

void Tokeniser::handle_text(const char& c)
{
    if (std::isalnum(c) || c == '_') {
        search += c;
        if (keyword_check(false))
            return;
    } else if (c == '%') {
        search += c;
        Token t;
        t.file_number = file_number;
        t.line_number = file_line_number;
        t.char_number = get_chars_current().length();
        t.type = TokenType::IDENTIFIER_INTEGER;
        t.text = search;
        tokens.push_back(std::move(t));
        end_of_token();
    } else if (c == '$') {
        search += c;

        // This might be a keyword ending in $ so check that first
        if (keyword_check(true))
            return;

        Token t;
        t.file_number = file_number;
        t.line_number = file_line_number;
        t.char_number = get_chars_current().length();
        t.type = TokenType::IDENTIFIER_STRING;
        t.text = search;
        tokens.push_back(std::move(t));
        end_of_token();
    } else if (c == '#') {
        search += c;

        // This might be a keyword ending in # so check that first
        if (keyword_check(true))
            return;

        error("Syntax error");
    } else {
        if (c == '\n')
            new_line();
        if (keyword_check(true))
            return;
        Token t;
        t.type = TokenType::IDENTIFIER;
        t.file_number = file_number;
        t.line_number = file_line_number;
        t.char_number = get_chars_current().length();
        t.text = search;
        tokens.push_back(std::move(t));
        end_of_token();
        if (c != '\n')
            handle_character(c);
    }
}

bool Tokeniser::keyword_check(bool complete)
{
    // Create upper case version
    std::string upper_search = search;
    char c = upper_search[0];
    std::transform(upper_search.begin(), upper_search.end(), upper_search.begin(), ::toupper);

    // If fresh search, clean the match list
    if (search.length() == 1) {
        current_match_list.clear();
        for (auto it = keywords[c].begin(); it != keywords[c].end(); ++it) {
            current_match_list.push_back(*it);
        }
    }

    // If this is completed, do exact match
    if (complete) {
        for (auto it = current_match_list.begin(); it != current_match_list.end(); ++it) {
            if (upper_search.compare((*it).name) == 0) {
                create_token((*it).type);
                return true;
            }
        }
    } else {
        if (upper_search.length() > 1) {
            current_match_list.remove_if([&](const TokenDef& x) -> bool {
                return x.name.substr(0, upper_search.length()).compare(upper_search);
            });
        }

        // Do we have one match, if so, check it's an exact match
        if (current_match_list.size() == 1 && current_match_list.front().name.compare(upper_search) == 0) {
            create_token(current_match_list.front().type);
            return true;
        }
    }

    return false;
}
