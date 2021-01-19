#include <stdlib.h>
#include <string.h>

#include "output.h"
#include "parser.h"

void parser_pass2_starcommand(struct Statement *statement) {
}

void parser_pass2() {
    printf("   -> Pass 2 - Parsing and validation\n");

    // Go through each line and statement
    struct Line *line = first_line;
    while (line != NULL) {
#ifdef PARSE_DEBUG
        printf("Line: %d\n", line->number);
#endif
        statement_index = 0;
        line_number = line->number;
        struct Statement *statement = line->first_statement;
        while (statement != NULL) {
#ifdef PARSE_DEBUG
            printf("--Statement: %d\n", statement_index);
#endif
            // Whatever the first thing is will decide what we do with the rest
            if (statement->first_entry != NULL) {
#ifdef PARSE_DEBUG
                debug_statement_entries(stdout, statement->first_entry);
#endif
                switch (statement->first_entry->entry_type) {
                    case STATEMENT_TOKEN:
                        parser_pass2_token(statement);
                        break;
                    case STATEMENT_TOKENSTMT:
                        parser_pass2_stmttoken(statement);
                        break;
                    case STATEMENT_STARCOMMAND:
                        parser_pass2_starcommand(statement);
                        break;
                    case STATEMENT_OPERATOR: {
                        struct StatementEntry *entry = statement->first_entry;
                        if (entry->operator_type == OPERATOR_EQUAL) {
                            struct StatementEntry *previous = entry;
                            entry = entry->next;
                            parser_pass2_expression(&entry, &previous, NO_TOKEN, FALSE);
                        }
                        break;
                    }
                    default:
                        printf("[E8] Syntax error at line %d, expected token or implicit LET\n", line->number);
                        exit(1);
                }
            }
            statement = statement->next;
            statement_index++;
        }
        line = line->next;
    }
}