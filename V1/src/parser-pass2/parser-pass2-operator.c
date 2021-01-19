#include <stdlib.h>
#include <string.h>

#include "parser.h"

enum EOperator parser_pass2_operator(struct StatementEntry **entry, enum EOperator operator[], int operator_count, bool delete, struct StatementEntry **previous) {
    // Do we have an entry?
    if ((*entry) == NULL) {
        printf("[E5] Syntax error at line %d (statement %d)\n", line_number, statement_index);
        exit(1);
    }

    // Do we have the operator
    if ((*entry)->entry_type != STATEMENT_OPERATOR) {
        printf("[E6] Syntax error at line %d (statement %d)\n", line_number, statement_index);
        exit(1);
    }

    // Check if matches one in the array
    int i;
    for (i = 0; i < operator_count; i++) {
        if ((*entry)->operator_type == operator[i]) break;
    }
    if (i == operator_count) {
        printf("[E16] Syntax error at line %d (statement %d)\n", line_number, statement_index);
        exit(1);
    }
    enum EOperator o = (*entry)->operator_type;

    // Do we drop it because it's implied?
    if (delete) {
        if (!(*entry)->next) {
            printf("[E14] Syntax error at line %d (statement %d)\n", line_number, statement_index);
            exit(1);
        }
        (*previous)->next = (*entry)->next;
        struct StatementEntry *saved = (*entry)->next;
        free_statement_entry(*entry);
        free(*entry);
        *entry = saved;
    }
    return o;
}
