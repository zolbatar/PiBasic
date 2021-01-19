#pragma once
#include "../types.h"
#include "tokens.h"
#include <list>
#include <map>
#include <string>
#include <vector>

enum class TokeniserState {
    NONE,
    NUMBER,
    TEXT,
    STRING,
    SYMBOL,
    REM
};

struct Token {
    TokenType type;
    std::string text;
    VM_INT integer;
    VM_FLOAT real;
    int line_number;
    int file_number;
    int char_number;
};

class Tokeniser {
public:
    Tokeniser(std::string filename);
    void parse();
    std::list<Token>* get_tokens();
    std::string get_filename(int file_number);
    std::string get_chars(int file_number, int line_number);
    std::string get_chars_current();

private:
    void add_keyword(TokenDef def);
    void handle_character(const char& c);
    void handle_none(const char& c);
    void end_of_token();
    void create_token(TokenType type);
    void error(std::string error);
    void new_line();

    // Symbol/operator
    void handle_symbol(const char& c);

    // Number
    void handle_number(const char& c);

    // Text
    void handle_text(const char& c);
    void handle_string(const char& c);
    bool keyword_check(bool complete);

    static int file_number;
    int file_line_number = 1;
    int line_number = 1;
    std::string search;
    std::string filename;
    TokeniserState state = TokeniserState::NONE;
    std::list<Token> tokens;
    std::list<TokenDef> current_match_list;
    static std::vector<std::string> filenames;

    // File->Line->Characters
    static std::map<int, std::map<int, std::list<char>>> file_content_cache;

    static std::map<char, std::list<TokenDef>> keywords;
    static std::map<std::string, TokenType> symbols;
    static std::map<std::string, TokenType> symbols_single;
};