#define _GLIBCXX_USE_C99 1
#include "../debugger.h"
#include "manual.h"

extern std::vector<ManualKeyword> keywords;

void create_manual_fn_proc()
{
    keywords.push_back(ManualKeyword(
        "DEFFN ENDFN",
        "DEFFN ENDFN",
        KeywordCategory::FN_AND_PROC,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "DEFPROC ENDPROC",
        "DEFPROC ENDPROC",
        KeywordCategory::FN_AND_PROC,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "FN (CALL)",
        "FN (CALL)",
        KeywordCategory::FN_AND_PROC,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "GOTO",
        "GOTO",
        KeywordCategory::FN_AND_PROC,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "GOSUB",
        "GOSUB",
        KeywordCategory::FN_AND_PROC,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "PROC (CALL)",
        "PROC (CALL)",
        KeywordCategory::FN_AND_PROC,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "RETURN",
        "RETURN",
        KeywordCategory::FN_AND_PROC,
        "",
        {},
        "",
        "",
        ""));
}
