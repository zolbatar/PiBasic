#include <stdlib.h>
#include <string.h>

#include "parser.h"

bool is_search_string_float() {
    for (int i = 0; i < search_pos; i++) {
        if (search_string[i] == '.')  // decimal point is present
        {
            return TRUE;
        }
    }
    return FALSE;
}

bool is_search_string_hex() {
    return search_string[0] == '&';
}

void statement_add_operand() {
    struct StatementEntry *new_entry = statement_check_exists_create();
    new_entry->entry_type = STATEMENT_OPERAND;

    // Is this a number or variable?
    char c = search_string[0];
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        struct Variable *v = variable_search(in_fn_or_proc, FALSE);
        if (v == NULL) {
            printf("[E9] Variable %s not found at line %d\n", search_string, line_number);
            exit(1);
        }
        new_entry->entry_type = STATEMENT_VARIABLE;
        new_entry->variable = v;
        return;
    }

    // Have we previous defined this?
    bool is_float = is_search_string_float();
    bool is_hex = is_search_string_hex();
    VM_FLOAT vf = atof(search_string);
    VM_INT vi = atoi(search_string);
    if (is_hex) {
        search_string[0] = ' ';
        vi = strtol(search_string, NULL, 16);
    }
    struct Variable *v = variables;
    struct Variable *found = NULL;
    while (v != NULL) {
        if (v->constant) {
            if (is_float && v->type == VAR_TYPE_FLOAT && v->value_float == vf) {
                found = v;
                break;
            }
            if (!is_float && v->type == VAR_TYPE_INT && v->value_int == vi) {
                found = v;
                break;
            }
        }
        v = v->next;
    }
    if (found != NULL) {
        new_entry->variable = found;
        return;
    }

    // Create if not found
    struct Variable *new_variable = create_variable(VAR_TYPE_NONE, TRUE);
    new_entry->variable = new_variable;
    if (is_float) {
        new_entry->variable->type = VAR_TYPE_FLOAT;
        new_entry->variable->value_float = vf;
    } else {
        new_entry->variable->type = VAR_TYPE_INT;
        new_entry->variable->value_int = vi;
    }
}

int process_operand(BYTE *code, UINT32 length, UINT32 *pos, BYTE token) {
#ifdef PARSE_DEBUG_VERBOSE
    printf("OPERAND\n");
#endif

    if (token <= 0x7f) {
        if (token == '&' || token == '.' || (token >= '0' && token <= '9') || (token >= 'a' && token <= 'z') || (token >= 'A' && token <= 'Z')) {
            search_string[search_pos++] = token;
            return STATE_OPERAND;
        } else if (token == '-') {
            if (search_pos > 0) {
                search_string[search_pos++] = 0;
                statement_add_operand();
                search_pos = 0;
                return process_operator(code, length, pos, token);
            } else {
                search_string[search_pos++] = token;
                return STATE_OPERAND;
            }
        } else {
            if (search_pos > 0) {
                search_string[search_pos++] = 0;
                statement_add_operand();
            }
            return process_none(code, length, pos, token);
        }
    } else {
        search_string[search_pos++] = 0;
        statement_add_operand();
        return process_none(code, length, pos, token);
    }
}