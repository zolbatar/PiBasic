#define _GLIBCXX_USE_C99 1
#include "../debugger.h"
#include "manual.h"

extern std::vector<ManualKeyword> keywords;

void create_manual_looping()
{
    keywords.push_back(ManualKeyword(
        "CASE OF WHEN OTHERWISE ENDCASE",
        "CASE OF WHEN OTHERWISE ENDCASE",
        KeywordCategory::CONDITIONAL_LOOPING,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "IF THEN ELSE ENDIF",
        "IF THEN ELSE ENDIF",
        KeywordCategory::CONDITIONAL_LOOPING,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "FOR NEXT STEP",
        "FOR NEXT STEP",
        KeywordCategory::CONDITIONAL_LOOPING,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "FOR IN NEXT",
        "FOR IN NEXT",
        KeywordCategory::CONDITIONAL_LOOPING,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "REPEAT UNTIL",
        "REPEAT UNTIL",
        KeywordCategory::CONDITIONAL_LOOPING,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "WHILE ENDWHILE",
        "WHILE ENDWHILE",
        KeywordCategory::CONDITIONAL_LOOPING,
        "",
        {},
        "",
        "",
        ""));
}