#include <stdlib.h>
#include <string.h>

#include "parser.h"

void parser_pass2_variable(struct StatementEntry **entry, struct StatementEntry **previous) {
    // Do we have an entry?
    if ((*entry) == NULL) {
        printf("[E1] Syntax error at line %d (statement %d)\n", line_number, statement_index);
        exit(1);
    }

    // Do we have a variable?
    if ((*entry)->entry_type != STATEMENT_VARIABLE) {
        printf("[E2] Syntax error at line %d (statement %d), variable expected\n", line_number, statement_index);
        exit(1);
    }
    struct StatementEntry *saved = *entry;

    // Move after variable
    *previous = *entry;
    *entry = (*entry)->next;

    // Comma?
    if ((*entry) != NULL && (*entry)->entry_type == STATEMENT_COMMA) {
        *previous = *entry;
        *entry = (*entry)->next;
        return;
    }

    // Bang?
    if ((*entry) != NULL && (*entry)->entry_type == STATEMENT_BANG) {
        *previous = *entry;
        *entry = (*entry)->next;
    }

    // A variable has either an index or not
    if ((*entry) != NULL && (*entry)->entry_type == STATEMENT_OPEN_PARENS) {
        parser_pass2_expression(entry, previous, NO_TOKEN, TRUE);
    } else if ((*entry) != NULL && (*entry)->entry_type != STATEMENT_OPERATOR) {
        // This MUST be a storagr DIM
        saved->entry_type = STATEMENT_VARIABLE_WITH_STORAGE;
        parser_pass2_expression(entry, previous, NO_TOKEN, TRUE);
    }
}

void parser_pass2_all_variables(struct StatementEntry **entry, struct StatementEntry **previous) {
    while (*entry != NULL) {
        parser_pass2_variable(entry, previous);
    }
}
