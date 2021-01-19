#include "tokeniser.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>

int Tokeniser::file_number = 0;
std::vector<std::string> Tokeniser::filenames;
std::map<int, std::map<int, std::list<char>>> Tokeniser::file_content_cache;
std::map<char, std::list<TokenDef>> Tokeniser::keywords;
std::map<std::string, TokenType> Tokeniser::symbols_single {
    { "=", TokenType::EQUAL },
    { "~", TokenType::TILDE },
    { ",", TokenType::COMMA },
    { "(", TokenType::LPARENS },
    { ")", TokenType::RPARENS },
    { ";", TokenType::SEMICOLON },
    { "!", TokenType::BANG },
    { ":", TokenType::COLON },
    { "^", TokenType::HAT }
};
std::map<std::string, TokenType> Tokeniser::symbols {
    { "=", TokenType::EQUAL },
    { "~", TokenType::TILDE },
    { ",", TokenType::COMMA },
    { "(", TokenType::LPARENS },
    { ")", TokenType::RPARENS },
    { ";", TokenType::SEMICOLON },
    { "!", TokenType::BANG },
    { "<", TokenType::LESS },
    { ">", TokenType::GREATER },
    { "<=", TokenType::LESSEQUAL },
    { ">=", TokenType::GREATEREQUAL },
    { "<>", TokenType::NOTEQUAL },
    { "+", TokenType::ADD },
    { "+=", TokenType::ADD_EQUAL },
    { "-", TokenType::SUBTRACT },
    { "UNARY-", TokenType::UNARYMINUS },
    { "UNARY+", TokenType::UNARYPLUS },
    { "-=", TokenType::SUBTRACT_EQUAL },
    { "*", TokenType::MULTIPLY },
    { "*=", TokenType::MULTIPLY_EQUAL },
    { "/", TokenType::DIVIDE },
    { "/=", TokenType::DIVIDE_EQUAL },
    { "//", TokenType::DIVIDE_INTEGER },
    { "<<", TokenType::SHIFT_LEFT },
    { ">>", TokenType::SHIFT_RIGHT },
};

Tokeniser::Tokeniser(std::string filename)
{
    this->filename = filename;
    this->filenames.push_back(filename);
    file_number++;
    file_line_number = 1;
    line_number = 1;

    // Create top level cache map for this file
    file_content_cache.insert(make_pair(file_number - 1, std::map<int, std::list<char>>()));
    file_content_cache[file_number - 1].insert(make_pair(file_line_number, std::list<char>()));

    // Only add static keyword list one time
    if (keywords.size() > 0)
        return;

    // Add for each letter
    for (char c = 'A'; c <= 'Z'; c++) {
        keywords.insert(std::make_pair(c, std::list<TokenDef>()));
    }

    // Standard
    add_keyword(TokenDef { "CASE", TokenType::CASE });
    add_keyword(TokenDef { "DATA", TokenType::DATA });
    add_keyword(TokenDef { "DEF", TokenType::DEF });
    add_keyword(TokenDef { "DIM", TokenType::DIM });
    add_keyword(TokenDef { "ELSE", TokenType::ELSE });
    add_keyword(TokenDef { "END", TokenType::END });
    add_keyword(TokenDef { "ENDCASE", TokenType::ENDCASE });
    add_keyword(TokenDef { "ENDIF", TokenType::ENDIF });
    add_keyword(TokenDef { "ENDFN", TokenType::ENDFN });
    add_keyword(TokenDef { "ENDPROC", TokenType::ENDPROC });
    add_keyword(TokenDef { "ENDTYPE", TokenType::ENDTYPE });
    add_keyword(TokenDef { "ENDWHILE", TokenType::ENDWHILE });
    add_keyword(TokenDef { "FIELD", TokenType::FIELD });
    add_keyword(TokenDef { "FN", TokenType::FN });
    add_keyword(TokenDef { "FOR", TokenType::FN });
    add_keyword(TokenDef { "GLOBAL", TokenType::GLOBAL });
    add_keyword(TokenDef { "GOSUB", TokenType::GOSUB });
    add_keyword(TokenDef { "GOTO", TokenType::GOTO });
    add_keyword(TokenDef { "INKEY", TokenType::INKEY });
    add_keyword(TokenDef { "INKEY$", TokenType::INKEYS });
    add_keyword(TokenDef { "INPUT", TokenType::INPUT });
    add_keyword(TokenDef { "IF", TokenType::IF });
    add_keyword(TokenDef { "LET", TokenType::LET });
    add_keyword(TokenDef { "LOCAL", TokenType::LOCAL });
    add_keyword(TokenDef { "NEXT", TokenType::NEXT });
    add_keyword(TokenDef { "OF", TokenType::OF });
    add_keyword(TokenDef { "OTHERWISE", TokenType::OTHERWISE });
    add_keyword(TokenDef { "PRINT", TokenType::PRINT });
    add_keyword(TokenDef { "READ", TokenType::READ });
    add_keyword(TokenDef { "REM", TokenType::REM });
    add_keyword(TokenDef { "REPEAT", TokenType::REPEAT });
    add_keyword(TokenDef { "RESTORE", TokenType::RESTORE });
    add_keyword(TokenDef { "RND", TokenType::RND });
    add_keyword(TokenDef { "OSCLI", TokenType::OSCLI });
    add_keyword(TokenDef { "RETURN", TokenType::RETURN });
    add_keyword(TokenDef { "SPC", TokenType::SPC });
    add_keyword(TokenDef { "STEP", TokenType::STEP });
    add_keyword(TokenDef { "TAB", TokenType::TAB });
    add_keyword(TokenDef { "THEN", TokenType::THEN });
    add_keyword(TokenDef { "TO", TokenType::TO });
    add_keyword(TokenDef { "TIME", TokenType::RND });
    add_keyword(TokenDef { "TIME$", TokenType::TIMES });
    add_keyword(TokenDef { "TRACEON", TokenType::TRACEON });
    add_keyword(TokenDef { "TRACEOFF", TokenType::TRACEOFF });
    add_keyword(TokenDef { "TYPE", TokenType::TYPE });
    add_keyword(TokenDef { "UNTIL", TokenType::UNTIL });
    add_keyword(TokenDef { "WHEN", TokenType::WHEN });
    add_keyword(TokenDef { "WHILE", TokenType::WHILE });

    // File
    add_keyword(TokenDef { "BGET#", TokenType::BGET });
    add_keyword(TokenDef { "BPUT#", TokenType::BPUT });
    add_keyword(TokenDef { "CLOSE#", TokenType::CLOSE });
    add_keyword(TokenDef { "EOF#", TokenType::EOFH });
    add_keyword(TokenDef { "OPENIN", TokenType::OPENIN });
    add_keyword(TokenDef { "OPENOUT", TokenType::OPENOUT });
    add_keyword(TokenDef { "OPENUP", TokenType::OPENUP });

    // String
    add_keyword(TokenDef { "ASC", TokenType::ASC });
    add_keyword(TokenDef { "CHR$", TokenType::CHRS });
    add_keyword(TokenDef { "INSTR", TokenType::INSTR });
    add_keyword(TokenDef { "LEFT$", TokenType::LEFTS });
    add_keyword(TokenDef { "MID$", TokenType::MIDS });
    add_keyword(TokenDef { "RIGHT$", TokenType::RIGHTS });
    add_keyword(TokenDef { "LEN", TokenType::LEN });
    add_keyword(TokenDef { "STR$", TokenType::STRS });
    add_keyword(TokenDef { "STRING$", TokenType::STRINGS });

    // Maths
    add_keyword(TokenDef { "ABS", TokenType::ABS });
    add_keyword(TokenDef { "FALSE", TokenType::FALSE });
    add_keyword(TokenDef { "TRUE", TokenType::TRUE });
    add_keyword(TokenDef { "FLOAT", TokenType::FLOAT });
    add_keyword(TokenDef { "DIV", TokenType::DIV });
    add_keyword(TokenDef { "MOD", TokenType::MOD });
    add_keyword(TokenDef { "SQR", TokenType::SQR });
    add_keyword(TokenDef { "LN", TokenType::LN });
    add_keyword(TokenDef { "LOG", TokenType::LOG });
    add_keyword(TokenDef { "EXP", TokenType::EXP });
    add_keyword(TokenDef { "ATN", TokenType::ATN });
    add_keyword(TokenDef { "TAN", TokenType::TAN });
    add_keyword(TokenDef { "COS", TokenType::COS });
    add_keyword(TokenDef { "SIN", TokenType::SIN });
    add_keyword(TokenDef { "ASN", TokenType::ASN });
    add_keyword(TokenDef { "DEG", TokenType::DEG });
    add_keyword(TokenDef { "RAD", TokenType::RAD });
    add_keyword(TokenDef { "SGN", TokenType::SGN });
    add_keyword(TokenDef { "VAL", TokenType::VAL });
    add_keyword(TokenDef { "PI", TokenType::PI });

    // 2d Graphics
    add_keyword(TokenDef { "CIRCLE", TokenType::CIRCLE });
    add_keyword(TokenDef { "CLIPON", TokenType::CLIPON });
    add_keyword(TokenDef { "CLIPOFF", TokenType::CLIPOFF });
    add_keyword(TokenDef { "CLS", TokenType::CLS });
    add_keyword(TokenDef { "COLOUR", TokenType::COLOUR });
    add_keyword(TokenDef { "COLOURBG", TokenType::COLOURBG });
    add_keyword(TokenDef { "CREATEFONT", TokenType::CREATEFONT });
    add_keyword(TokenDef { "ELLIPSE", TokenType::ELLIPSE });
    add_keyword(TokenDef { "FILL", TokenType::FILL });
    add_keyword(TokenDef { "FLIP", TokenType::FLIP });
    add_keyword(TokenDef { "GRAPHICS", TokenType::GRAPHICS });
    add_keyword(TokenDef { "LINE", TokenType::LINE });
    add_keyword(TokenDef { "LOADTYPEFACE", TokenType::LOADTYPEFACE });
    add_keyword(TokenDef { "PLOT", TokenType::PLOT });
    add_keyword(TokenDef { "RECTANGLE", TokenType::RECTANGLE });
    add_keyword(TokenDef { "SCREENWIDTH", TokenType::SCREENWIDTH });
    add_keyword(TokenDef { "SCREENHEIGHT", TokenType::SCREENHEIGHT });
    add_keyword(TokenDef { "SHADED", TokenType::SHADED });
    add_keyword(TokenDef { "TEXT", TokenType::TEXT });
    add_keyword(TokenDef { "TEXTCENTRE", TokenType::TEXTCENTRE });
    add_keyword(TokenDef { "TEXTCENTER", TokenType::TEXTCENTRE });
    add_keyword(TokenDef { "TEXTRIGHT", TokenType::TEXTRIGHT });
    add_keyword(TokenDef { "SHADED", TokenType::SHADED });
    add_keyword(TokenDef { "TRIANGLE", TokenType::TRIANGLE });

    // 3d Graphics
    add_keyword(TokenDef { "VERTEX3D", TokenType::VERTEX3D });
    add_keyword(TokenDef { "TRIANGLE3D", TokenType::TRIANGLE3D });
    add_keyword(TokenDef { "SHAPE3D", TokenType::SHAPE3D });
    add_keyword(TokenDef { "OBJECT3D", TokenType::OBJECT3D });
    add_keyword(TokenDef { "SOLID", TokenType::SOLID });
    add_keyword(TokenDef { "WIREFRAME", TokenType::WIREFRAME });
    add_keyword(TokenDef { "EDGEDWIREFRAME", TokenType::EDGEDWIREFRAME });
    add_keyword(TokenDef { "TRANSLATE3D", TokenType::TRANSLATE3D });
    add_keyword(TokenDef { "ROTATE3D", TokenType::ROTATE3D });
    add_keyword(TokenDef { "SCALE3D", TokenType::SCALE3D });
    add_keyword(TokenDef { "RENDER3D", TokenType::RENDER3D });

    // Boolean
    add_keyword(TokenDef { "AND", TokenType::AND });
    add_keyword(TokenDef { "OR", TokenType::OR });
    add_keyword(TokenDef { "EOR", TokenType::EOR });
    add_keyword(TokenDef { "NOT", TokenType::NOT });
}

void Tokeniser::add_keyword(TokenDef def)
{
    char c = def.name[0];
    keywords[c].push_back(std::move(def));
}

std::string Tokeniser::get_filename(int file_number)
{
    return filenames[file_number - 1];
}

std::string Tokeniser::get_chars(int file_number, int line_number)
{
    auto line = file_content_cache[file_number - 1][line_number - 1];
    std::string ret = "";
    for (auto it = line.begin(); it != line.end(); ++it) {
        ret += (*it);
    }
    return ret;
}

std::string Tokeniser::get_chars_current()
{
    auto line = file_content_cache[file_number - 1][line_number - 1];
    std::string ret = "";
    for (auto it = line.begin(); it != line.end(); ++it) {
        ret += (*it);
    }
    return ret;
}

void Tokeniser::parse()
{
    std::ifstream infile(filename, std::ios::in);

    // So, we simply keep reading characters and let the tokeniser convert these into tokens
    char c;
    while (infile.get(c)) {
        file_content_cache[file_number - 1][file_line_number - 1].push_back(c);
        handle_character(c);
    }

    // This forces any remaining search to be processed
    handle_character('\n');
}

void Tokeniser::handle_character(const char& c)
{
    switch (state) {
    case TokeniserState::NONE:
        handle_none(c);
        break;
    case TokeniserState::TEXT:
        handle_text(c);
        break;
    case TokeniserState::STRING:
        handle_string(c);
        break;
    case TokeniserState::NUMBER:
        handle_number(c);
        break;
    case TokeniserState::SYMBOL:
        handle_symbol(c);
        break;
    case TokeniserState::REM:
        if (c == '\n') {
            state = TokeniserState::NONE;
            new_line();
        }
        break;
    default:
        break;
    }
}

void Tokeniser::handle_none(const char& c)
{
    if (std::isdigit(c) || c == '&' || c == '-' || c == '+') {

        // Is this unary or not?
        if (c == '-' || c == '+') {
            if (tokens.size() > 0) {
                auto prev = tokens.back();
                if (prev.type == TokenType::RPARENS || prev.type == TokenType::INTEGER || prev.type == TokenType::REAL) {
                    state = TokeniserState::SYMBOL;
                    handle_symbol(c);
                    return;
                }
            }
        }

        state = TokeniserState::NUMBER;
        handle_number(c);
    } else if (std::isalpha(c)) {
        state = TokeniserState::TEXT;
        handle_text(c);
    } else if (c == '"') {
        state = TokeniserState::STRING;
        handle_string(c);
    } else if (c == ' ' || c == '\t') {
        // Swallow
    } else if (c == '\n' || c == ':') {
        if (!tokens.empty() && tokens.back().type == TokenType::TERMINATOR) {
            // If the last one is a terminator don't add another
        } else {
            Token t;
            t.file_number = file_number;
            t.line_number = file_line_number;
            t.char_number = get_chars_current().length();
            t.type = TokenType::TERMINATOR;
            t.text = c;
            tokens.push_back(std::move(t));
        }
        if (c == '\n')
            new_line();
    } else {
        // This must be a symbol of some kind, we'll error if we don't match later
        state = TokeniserState::SYMBOL;
        handle_symbol(c);
    }
}

void Tokeniser::end_of_token()
{
    state = TokeniserState::NONE;
    search = "";
}

void Tokeniser::create_token(TokenType type)
{
    Token t;
    t.file_number = file_number;
    t.line_number = file_line_number;
    t.char_number = get_chars_current().length();
    t.type = type;
    tokens.push_back(std::move(t));
    end_of_token();
    if (type == TokenType::REM) {
        state = TokeniserState::REM;
    }
}

void Tokeniser::new_line()
{
    file_line_number++;
    line_number = file_line_number;
}

void Tokeniser::error(std::string error)
{
    auto line = get_chars_current();

    // Arrow pos
    auto arrow = line.length() - 1;
    if (arrow < 0) {
        arrow = 0;
    }
    std::cout << error << " at line " << line_number << " in file " << filename << std::endl
              << std::endl;
    std::cout << line << std::endl;
    for (auto i = 0; i < arrow; i++) {
        std::cout << " ";
    }
    std::cout << "^" << std::endl;
    std::cout << std::endl;
    exit(1);
}

std::list<Token>* Tokeniser::get_tokens()
{
    return &tokens;
}
