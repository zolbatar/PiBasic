#include <stdlib.h>
#include <string.h>

#include "output.h"
#include "parser.h"

// https://en.wikipedia.org/wiki/Shunting-yard_algorithm

#define SHUNT_STACK 256
struct StatementEntry *output[SHUNT_STACK];
struct StatementEntry *clear[SHUNT_STACK];

enum EPrecedence {
    PRECEDENCE_HIGHER,
    PRECEDENCE_EQUAL,
    PRECEDENCE_LOWER
};

int precedence_level(struct StatementEntry *e) {
    switch (e->entry_type) {
        case STATEMENT_OPEN_PARENS:
            return 0;
        case STATEMENT_OPERATOR:
            switch (e->operator_type) {
                case OPERATOR_HAT:
                    return 2;
                case OPERATOR_DIVIDE:
                case OPERATOR_MULTIPLY:
                case OPERATOR_DIVIDE_EQUAL:
                case OPERATOR_MULTIPLY_EQUAL:
                    return 3;
                case OPERATOR_ADD:
                case OPERATOR_SUBTRACT:
                case OPERATOR_ADD_EQUAL:
                case OPERATOR_SUBTRACT_EQUAL:
                    return 4;
                case OPERATOR_NOTEQUAL:
                case OPERATOR_EQUAL:
                case OPERATOR_GEQUAL:
                case OPERATOR_LEQUAL:
                case OPERATOR_GREATER:
                case OPERATOR_LESS:
                    return 5;
                case OPERATOR_AND:
                    return 6;
                case OPERATOR_EOR:
                case OPERATOR_OR:
                    return 7;
                case OPERATOR_NONE:
                    return 99;
            }
            break;
        case STATEMENT_TOKEN:
            switch (e->token) {
                case TOKEN_MOD:
                case TOKEN_DIV:
                    return 3;
                case TOKEN_ABS:
                case TOKEN_ATN:
                case TOKEN_CHR:
                case TOKEN_COS:
                case TOKEN_EXP:
                case TOKEN_INT:
                case TOKEN_LEN:
                case TOKEN_LN:
                case TOKEN_RND:
                case TOKEN_TAN:
                case TOKEN_TIME:
                case TOKEN_STR:
                case TOKEN_SQR:
                    return 1;
            };

            return 3;
        case STATEMENT_PROC_OR_FN:
            return 1;
        default:
            printf("Unknown type %d in precedence\n", e->entry_type);
            return 99;
    }
    printf("Error in precedence\n");
    return 99;
}

enum EPrecedence precedence(struct StatementEntry *e1, struct StatementEntry *e2) {
    int p1 = precedence_level(e1);
    int p2 = precedence_level(e2);
    if (p1 > p2)
        return PRECEDENCE_LOWER;
    else if (p1 < p2)
        return PRECEDENCE_HIGHER;
    else
        return PRECEDENCE_EQUAL;
}

bool is_left_associative(struct StatementEntry *e) {
    if (e->entry_type == STATEMENT_OPERATOR && e->operator_type == OPERATOR_HAT)
        return FALSE;
    return TRUE;
}

struct StatementEntry *parser_pass2_expression_shunting(struct StatementEntry *entry, BYTE terminating_token, struct StatementEntry *saved_previous, struct StatementEntry *start, bool assignment) {
    int output_index = 0;
    int clear_index = 0;
    struct StatementEntry *last = NULL;

    // Now we put these statement entries back in a RPN way
    struct StatementEntry *operator_stack[SHUNT_STACK];
    int operator_index = 0;
    int depth = 0;
    bool done = FALSE;
    int index = 0;

    while (entry != NULL && !done) {
#ifdef PARSE_DEBUG
        printf("Address: %p, Type: %d, index: %d, output: %d, depth: %d\n", entry, entry->entry_type, index, output_index, depth);
#endif
        switch (entry->entry_type) {
            case STATEMENT_OPERAND:
                output[output_index++] = entry;
                break;
            case STATEMENT_VARIABLE:
                output[output_index++] = entry;
                if (entry->next != NULL && entry->next->entry_type == STATEMENT_OPEN_PARENS) {
                    entry->entry_type = STATEMENT_VARIABLE_WITH_INDEX;

                    // And start expression
                    struct StatementEntry *new_entry = empty_statement();
                    new_entry->entry_type = STATEMENT_EXPRESSION_START;
                    output[output_index++] = new_entry;

                    // Add end expression to stack
                    new_entry = empty_statement();
                    new_entry->entry_type = STATEMENT_EXPRESSION_END;
                    operator_stack[operator_index++] = new_entry;
                }
                break;
            case STATEMENT_TICK:
            case STATEMENT_TILDE:
                output[output_index++] = entry;
                break;
            case STATEMENT_TOKEN:
                if (entry->token == terminating_token) {
                    last = entry;
                    done = TRUE;
                } else {
                    switch (entry->token) {
                        case TOKEN_RND:
                            output[output_index++] = entry;
                            break;
                        case TOKEN_ABS:
                        case TOKEN_ATN:
                        case TOKEN_CHR:
                        case TOKEN_COS:
                        case TOKEN_DIV:
                        case TOKEN_EXP:
                        case TOKEN_INT:
                        case TOKEN_LEN:
                        case TOKEN_LN:
                        case TOKEN_MOD:
                        case TOKEN_TAN:
                        case TOKEN_TIME:
                        case TOKEN_STR:
                        case TOKEN_SQR:
                            operator_stack[operator_index++] = entry;
                            break;
                        case TOKEN_FN: {
                            struct StatementEntry *t = entry;
                            entry = entry->next;
                            operator_stack[operator_index++] = entry;
                            operator_stack[operator_index++] = t;
                            break;
                        }
                        case TOKEN_LEFT_S_P:
                        case TOKEN_RIGHT_S_P:
                        case TOKEN_MID_S_P:
                        case TOKEN_STRINGS: {
                            // These ones need a ( adding
                            operator_stack[operator_index++] = entry;
                            struct StatementEntry *new_entry = empty_statement();
                            new_entry->entry_type = STATEMENT_OPEN_PARENS;
                            operator_stack[operator_index++] = new_entry;
                            depth++;
                            break;
                        }
                        default:
                            printf("\nPANIC: Unknown token %d in expression at line %d (statement %d)\n", entry->token, line_number, statement_index);
                            exit(1);
                    }
                }
                break;
            case STATEMENT_OPERATOR:
                // Equals means end of assignment
                if (assignment && entry->operator_type == OPERATOR_EQUAL) {
                    last = entry;
                    done = true;
                } else {
                    while (operator_index > 0 &&
                           ((precedence(operator_stack[operator_index - 1], entry) == PRECEDENCE_HIGHER) ||
                            (precedence(operator_stack[operator_index - 1], entry) == PRECEDENCE_EQUAL && is_left_associative(entry))) &&
                           (operator_stack[operator_index - 1]->entry_type != STATEMENT_OPEN_PARENS)) {
                        output[output_index++] = operator_stack[--operator_index];
                    }
                    operator_stack[operator_index++] = entry;
                }
                break;
            case STATEMENT_OPEN_PARENS:
                if (saved_previous->entry_type == STATEMENT_VARIABLE && index == 0)
                    saved_previous->entry_type = STATEMENT_VARIABLE_WITH_INDEX;
                operator_stack[operator_index++] = entry;
                depth++;
                break;
            case STATEMENT_CLOSE_PARENS: {
                depth--;
                while (operator_index > 0) {
                    if (operator_stack[operator_index - 1]->entry_type != STATEMENT_OPEN_PARENS) {
                        // Pop operator off stack into output for each close parens
                        output[output_index++] = operator_stack[--operator_index];
                    } else {
                        break;
                    }
                }
                if (operator_index > 0 && operator_stack[operator_index - 1]->entry_type == STATEMENT_OPEN_PARENS) {
                    clear[clear_index++] = operator_stack[--operator_index];
                }
                clear[clear_index++] = entry;
                break;
            }
            case STATEMENT_COMMA:
                last = entry->next;
                clear[clear_index++] = entry;
                done = depth == 0;

                // Clear any operators
                while (operator_index > 0) {
                    if (operator_stack[operator_index - 1]->entry_type != STATEMENT_OPEN_PARENS) {
                        // Pop operator off stack into output for each close parens
                        output[output_index++] = operator_stack[--operator_index];
                    } else {
                        break;
                    }
                }

                break;
            case STATEMENT_SEMICOLON:
                last = entry;
                done = depth == 0;
                break;
            default: {
                printf("\nPANIC: Unknown type %d in precedence at line %d (statement %d)\n", entry->entry_type, line_number, statement_index);
                phase1_output(first_line, 2);
                for (int i = 0; i < output_index; i++) {
                    output[i]->next = output[i + 1];
                }
                output[output_index - 1]->next = last;
                debug_statement_entries(stdout, output[0]);
                exit(1);
            }
        }
        if (!done) {
            entry = entry->next;
        }
        index++;

        // Have we ran out of shunt stack
        if (output_index > SHUNT_STACK) {
            printf("[E21] Shunt stack exceeded at line %d\n", line_number);
            exit(1);
        }
    }
    if (!done)
        last = entry;
    if (depth != 0) {
        printf("[E20] Syntax error at line %d, final depth in expression is not 0\n", line_number);
        exit(1);
    }

    // Remove dead stuff
    for (int i = 0; i < clear_index; i++) {
        clear[i]->next = NULL;
        free_statement_entry(clear[i]);
        free(clear[i]);
    }

    // Pop remaining operators and check for unmatched parens
    while (operator_index > 0) {
        struct StatementEntry *e = operator_stack[--operator_index];
        if (e->entry_type == STATEMENT_CLOSE_PARENS || e->entry_type == STATEMENT_OPEN_PARENS) {
            printf("[E17] Syntax error at line %d, mismatched parenthesis\n", line_number);
            exit(1);
        }
        output[output_index++] = e;
    }

    // Sort out next references on output
    for (int i = 0; i < output_index; i++) {
        output[i]->next = output[i + 1];
    }
    output[output_index - 1]->next = last;

    start->next = output[0];

#ifdef PARSE_DEBUG_VERBOSE
    printf("\nReturn:\n");
    debug_statement_entries(stdout, output[0]);
    printf("\n\n");
#endif

    return output[output_index - 1];
}
