#ifndef __PARSER_STRUCTS_H
#define __PARSER_STRUCTS_H
#include "parser.h"
#include "variable.h"

struct StatementEntry {
    enum EStatement entry_type;
    struct Variable *variable;
    char *procfn_name;
    UINT32 fn_proc_index;
    UINT32 line_number;
    BYTE token;
    struct StatementEntry *next;
    enum EOperator operator_type;
};

struct Statement {
    struct StatementEntry *first_entry;
    struct StatementEntry *previous_entry;
    struct StatementEntry *entries;
    struct Statement *next;
    UINT32 bytecode_position;
    UINT32 bytecode_end;
};

struct Line {
    char *source;
    UINT32 number;
    struct Statement *first_statement;
    struct Statement *statements;
    struct Line *next;
    UINT32 bytecode_position;
};

#endif