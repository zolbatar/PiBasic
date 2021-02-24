#include "../debugger.h"
#include "manual.h"

extern std::vector<ManualKeyword> keywords;

void create_manual_io()
{
    keywords.push_back(ManualKeyword(
        "BGET#",
        "BGET#",
        KeywordCategory::FILE_IO,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "BPUT#",
        "BPUT#",
        KeywordCategory::FILE_IO,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "CLOSE#",
        "CLOSE#",
        KeywordCategory::FILE_IO,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "EOF#",
        "EOF#",
        KeywordCategory::FILE_IO,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "GET$#",
        "GET$#",
        KeywordCategory::FILE_IO,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "LISTFILES",
        "LISTFILES",
        KeywordCategory::FILE_IO,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "OPENIN",
        "OPENIN",
        KeywordCategory::FILE_IO,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "OPENOUT",
        "OPENOUT",
        KeywordCategory::FILE_IO,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "OPENUP",
        "OPENUP",
        KeywordCategory::FILE_IO,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "PTR#",
        "PTR#",
        KeywordCategory::FILE_IO,
        "",
        {},
        "",
        "",
        ""));
}
