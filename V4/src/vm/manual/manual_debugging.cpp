#define _GLIBCXX_USE_C99 1
#include "../vm.h"
#include "manual.h"

extern std::vector<ManualKeyword> keywords;

void create_manual_debugging()
{
    keywords.push_back(ManualKeyword(
        "BREAKPOINT",
        "BREAKPOINT",
        KeywordCategory::DEBUGGING,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "CHAIN",
        "CHAIN",
        KeywordCategory::DEBUGGING,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "END",
        "END",
        KeywordCategory::DEBUGGING,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "EXPECT",
        "EXPECT",
        KeywordCategory::DEBUGGING,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "INSTALL",
        "INSTALL",
        KeywordCategory::DEBUGGING,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "TRACEON",
        "TRACEON",
        KeywordCategory::DEBUGGING,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "TRACEOFF",
        "TRACEOFF",
        KeywordCategory::DEBUGGING,
        "",
        {},
        "",
        "",
        ""));
}