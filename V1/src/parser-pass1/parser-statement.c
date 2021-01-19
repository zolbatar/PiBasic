#include <stdlib.h>
#include <string.h>

#include "parser.h"

void statement_check_exists() {
    if (lines->statements == NULL) {
        lines->statements = (struct Statement *)malloc(sizeof(struct Statement));
        lines->first_statement = lines->statements;
        (lines->statements)->first_entry = NULL;
        (lines->statements)->previous_entry = NULL;
        (lines->statements)->entries = NULL;
        (lines->statements)->next = NULL;
        (lines->statements)->bytecode_position = 0;
        (lines->statements)->bytecode_end = 0;
        statement_index = 0;
        statement_entry_index = 0;
    }
}

void additional_statement() {
    statement_check_exists();
    struct Statement *new_statement = (struct Statement *)malloc(sizeof(struct Statement));
    new_statement->first_entry = NULL;
    new_statement->previous_entry = NULL;
    new_statement->entries = NULL;
    new_statement->next = NULL;
    new_statement->bytecode_position = 0;
    new_statement->bytecode_end = 0;
    (lines->statements)->next = new_statement;
    statement_index++;
    statement_entry_index = 0;
    (lines->statements) = new_statement;
}

struct StatementEntry *empty_statement() {
    struct StatementEntry *new_entry = (struct StatementEntry *)malloc(sizeof(struct StatementEntry));
    new_entry->variable = NULL;
    new_entry->procfn_name = NULL;
    new_entry->next = NULL;
    return new_entry;
}

struct StatementEntry *statement_check_exists_create() {
#ifdef PARSE_DEBUG_VERBOSE
    printf("Statement index: %d\n", statement_index);
#endif
    statement_check_exists();
    struct StatementEntry *new_entry = (struct StatementEntry *)malloc(sizeof(struct StatementEntry));
    if (lines->statements->entries != NULL) {
        lines->statements->entries->next = new_entry;
    } else {
        lines->statements->first_entry = new_entry;
    }
    new_entry->variable = NULL;
    new_entry->procfn_name = NULL;
    new_entry->next = NULL;
    new_entry->fn_proc_index = 0;
    lines->statements->previous_entry = lines->statements->entries;
    lines->statements->entries = new_entry;
    lines->statements->entries->next = NULL;
    statement_entry_index++;
    return new_entry;
}
