#include <stdlib.h>
#include <string.h>

#include "parser.h"

void statement_add_operator(int operator) {
    struct StatementEntry *new_entry = statement_check_exists_create();
    new_entry->entry_type = STATEMENT_OPERATOR;
    new_entry->operator_type = operator;
    search_pos = 0;
}

void check_and_process_operator() {
    if (strncmp("+=", search_string, 2) == 0) {
        statement_add_operator(OPERATOR_ADD_EQUAL);
    } else if (strncmp("-=", search_string, 2) == 0) {
        statement_add_operator(OPERATOR_SUBTRACT_EQUAL);
    } else if (strncmp("/=", search_string, 2) == 0) {
        statement_add_operator(OPERATOR_DIVIDE_EQUAL);
    } else if (strncmp("*=", search_string, 2) == 0) {
        statement_add_operator(OPERATOR_MULTIPLY_EQUAL);
    } else if (strncmp("=", search_string, 1) == 0) {
        statement_add_operator(OPERATOR_EQUAL);
    } else if (strncmp("-", search_string, 1) == 0) {
        statement_add_operator(OPERATOR_SUBTRACT);
    } else if (strncmp("+", search_string, 1) == 0) {
        statement_add_operator(OPERATOR_ADD);
    } else if (strncmp("/", search_string, 1) == 0) {
        statement_add_operator(OPERATOR_DIVIDE);
    } else if (strncmp("*", search_string, 1) == 0) {
        statement_add_operator(OPERATOR_MULTIPLY);
    } else if (strncmp("<>", search_string, 2) == 0) {
        statement_add_operator(OPERATOR_NOTEQUAL);
    } else if (strncmp(">=", search_string, 2) == 0) {
        statement_add_operator(OPERATOR_GEQUAL);
    } else if (strncmp("<=", search_string, 2) == 0) {
        statement_add_operator(OPERATOR_LEQUAL);
    } else if (strncmp(">", search_string, 1) == 0) {
        statement_add_operator(OPERATOR_GREATER);
    } else if (strncmp("<", search_string, 1) == 0) {
        statement_add_operator(OPERATOR_LESS);
    } else {
        printf("[E10] Unknown operator %s\n", search_string);
        exit(1);
    }
}

int process_operator(BYTE *code, UINT32 length, UINT32 *pos, BYTE token) {
#ifdef PARSE_DEBUG_VERBOSE
    printf("OPERATOR\n");
#endif

    if (token <= 0x7f) {
        switch (token) {
            case '/':
            case '*':
            case '-':
            case '+':
                if (search_pos == 0) {
                    search_string[search_pos++] = token;
                    return STATE_OPERATOR;
                } else {
                    search_string[search_pos++] = 0;
                    check_and_process_operator();
                    return process_none(code, length, pos, token);
                }
                break;
            case '=':
            case '>':
            case '<':
                search_string[search_pos++] = token;
                return STATE_OPERATOR;
            default:
                search_string[search_pos++] = 0;
                check_and_process_operator();
                return process_none(code, length, pos, token);
        }
    } else {
        search_string[search_pos++] = 0;
        check_and_process_operator();
        return process_none(code, length, pos, token);
    }
}
