#define _GLIBCXX_USE_C99 1
#include "../vm.h"
#include "manual.h"

extern std::vector<ManualKeyword> keywords;

void create_manual_variables_types()
{
    keywords.push_back(ManualKeyword(
        "DATA",
        "DATA",
        KeywordCategory::VARIABLES_TYPES,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "DIM",
        "DIM",
        KeywordCategory::VARIABLES_TYPES,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "LET/GLOBAL",
        "LET/GLOBAL",
        KeywordCategory::VARIABLES_TYPES,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "LOCAL",
        "LOCAL",
        KeywordCategory::VARIABLES_TYPES,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "READ",
        "READ",
        KeywordCategory::VARIABLES_TYPES,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "RESTORE",
        "RESTORE",
        KeywordCategory::VARIABLES_TYPES,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "SWAP",
        "SWAP",
        KeywordCategory::VARIABLES_TYPES,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "TYPE FIELD ENDTYPE",
        "TYPE FIELD ENDTYPE",
        KeywordCategory::VARIABLES_TYPES,
        "",
        {},
        "",
        "",
        ""));
}