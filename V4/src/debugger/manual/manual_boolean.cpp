#define _GLIBCXX_USE_C99 1
#include "../debugger.h"
#include "manual.h"

extern std::vector<ManualKeyword> keywords;

void create_manual_boolean()
{
    keywords.push_back(ManualKeyword(
        "AND",
        "AND",
        KeywordCategory::BOOLEAN,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "EOR",
        "EOR",
        KeywordCategory::BOOLEAN,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "NOT",
        "NOT",
        KeywordCategory::BOOLEAN,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "OR",
        "OR",
        KeywordCategory::BOOLEAN,
        "",
        {},
        "",
        "",
        ""));
}