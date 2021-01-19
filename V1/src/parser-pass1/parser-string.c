#include <stdlib.h>
#include <string.h>

#include "parser.h"

void statement_add_string() {
    struct StatementEntry *new_entry = statement_check_exists_create();
    new_entry->entry_type = STATEMENT_OPERAND;

    // Have we previous defined this?
    struct Variable *v = variables;
    struct Variable *found = NULL;
    while (v != NULL) {
        if (v->constant) {
            if (v->type == VAR_TYPE_STRING && strcmp((char *)&search_string, v->value_string.value) == 0) {
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
    struct Variable *new_variable = create_variable(VAR_TYPE_STRING, TRUE);
    new_entry->variable = new_variable;
    new_entry->variable->value_string.value = malloc(search_pos);
    memcpy(new_entry->variable->value_string.value, search_string, search_pos);
    new_entry->variable->value_string.length = search_pos - 1;
}

int process_string(BYTE *code, UINT32 length, UINT32 *pos, BYTE token) {
#ifdef PARSE_DEBUG_VERBOSE
    printf("STRING\n");
#endif
    if (token == '"' && search_pos == 0) {
        return STATE_STRING;
    } else if (token <= 0x7f) {
        if (token != '"') {
            search_string[search_pos++] = token;
            return STATE_STRING;
        } else {
            search_string[search_pos++] = 0;
            statement_add_string();
            return STATE_NONE;
        }
    } else {
        search_string[search_pos++] = 0;
        statement_add_string();
        return STATE_NONE;
    }
}
