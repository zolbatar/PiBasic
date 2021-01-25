#define _GLIBCXX_USE_C99 1
#include "../debugger.h"
#include "manual.h"

extern std::vector<ManualKeyword> keywords;

void create_manual_operators() {
    keywords.push_back(ManualKeyword(
        "+ +=",
        "+ +=",
        KeywordCategory::OPERATORS,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "- -=",
        "- -=",
        KeywordCategory::OPERATORS,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "* *=",
        "* *=",
        KeywordCategory::OPERATORS,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "/ /=",
        "/ /=",
        KeywordCategory::OPERATORS,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "// //=",
        "// //= (FLOOR DIVIDE)",
        KeywordCategory::OPERATORS,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "<< <<=",
        "<< <<=",
        KeywordCategory::OPERATORS,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        ">> >>=",
        ">> >>=",
        KeywordCategory::OPERATORS,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "DIV",
        "DIV",
        KeywordCategory::OPERATORS,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "MOD",
        "MOD",
        KeywordCategory::OPERATORS,
        "",
        {},
        "",
        "",
        ""));
}
