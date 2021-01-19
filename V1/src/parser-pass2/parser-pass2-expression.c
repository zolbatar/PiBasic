#include <stdlib.h>
#include <string.h>

#include "parser.h"

void parser_pass2_expression_repeat_with_operator(struct StatementEntry **entry, struct StatementEntry **previous, struct StatementEntry *repeat, enum EOperator operator) {
    // We need to inject all the stuff on the LHS of the LET statement into the expression, followed by the required operator
    struct StatementEntry *saved_start = repeat;
    struct StatementEntry *end = *entry;
    bool first = TRUE;
    while (repeat != end) {

        // Duplicate
        struct StatementEntry *new_entry = (struct StatementEntry *)malloc(sizeof(struct StatementEntry));
        memcpy(new_entry, repeat, sizeof(struct StatementEntry));
        (*previous)->next = new_entry;
        new_entry->next = *entry;
        *previous = new_entry;
        if (first) {
            end = new_entry;
            first = FALSE;
        }

        // Next to repeat
        repeat = repeat->next;
    }

    // Add operator
    struct StatementEntry *new_operator = (struct StatementEntry *)malloc(sizeof(struct StatementEntry));
    new_operator->entry_type = STATEMENT_OPERATOR;
    new_operator->operator_type = operator;
    new_operator->procfn_name = NULL;
    (*previous)->next = new_operator;
    new_operator->next = *entry;
    *previous = new_operator;

    *previous = saved_start;
    *entry = saved_start->next;
}

void parser_pass2_expression(struct StatementEntry **entry, struct StatementEntry **previous, BYTE terminating_token, bool assignment) {
    struct StatementEntry *saved_previous = *previous;

    // Do we have an entry?
    if (*entry == NULL)
        return;
    if ((*entry) == NULL) {
        printf("[E15] Syntax error at line %d (statement %d)\n", line_number, statement_index);
        exit(1);
    }

    // Mark start of expression
    struct StatementEntry *new_entry = *entry;
    new_entry = (struct StatementEntry *)malloc(sizeof(struct StatementEntry));
    new_entry->entry_type = STATEMENT_EXPRESSION_START;
    new_entry->variable = NULL;
    new_entry->procfn_name = NULL;
    (*previous)->next = new_entry;
    *previous = new_entry;

    // This is the "shunting-yard algorithm" to do operator precedence
    *entry = parser_pass2_expression_shunting(*entry, terminating_token, saved_previous, *previous, assignment);

    // Mark end of expression
    new_entry = (struct StatementEntry *)malloc(sizeof(struct StatementEntry));
    new_entry->entry_type = STATEMENT_EXPRESSION_END;
    new_entry->variable = NULL;
    new_entry->procfn_name = NULL;
    new_entry->next = (*entry)->next;
    (*entry)->next = new_entry;
    *previous = *entry;

    // Move past end of expression marker
    *previous = *entry;
    *entry = (*entry)->next;
    *previous = *entry;
    *entry = (*entry)->next;
}

void parser_pass2_all_expressions(struct StatementEntry **entry, struct StatementEntry **previous, BYTE terminating_token) {
    while (*entry != NULL) {
        parser_pass2_expression(entry, previous, terminating_token, FALSE);
        if (*entry != NULL && (*entry)->entry_type == STATEMENT_TOKEN && (*entry)->token == terminating_token)
            return;
        if (*entry != NULL && (*entry)->entry_type == STATEMENT_SEMICOLON) {
            *previous = *entry;
            *entry = (*entry)->next;
        }
    }
}
