#include <stdlib.h>
#include <string.h>

#include "parser.h"

int process_starcommand(BYTE *code, UINT32 length, UINT32 *pos, BYTE token) {
#ifdef PARSE_DEBUG_VERBOSE
    printf("STAR COMMAND\n");
#endif
    if (token <= 0x7f) {
        if (token == '*') {
            return STATE_STARCOMMAND;
        } else if (token == ' ' || token == ',' || (token >= 'a' && token <= 'z') || (token >= 'A' && token <= 'Z') || (token >= '0' && token <= '9')) {
            search_string[search_pos++] = token;
            return STATE_STARCOMMAND;
        } else {
            search_string[search_pos++] = 0;
            statement_add_starcommand();
            return process_none(code, length, pos, token);
        }
    } else {
        search_string[search_pos++] = 0;
        statement_add_starcommand();
        return STATE_NONE;
    }
}

void statement_add_starcommand() {
    struct StatementEntry *new_entry = statement_check_exists_create();
    new_entry->entry_type = STATEMENT_STARCOMMAND;
    struct Variable *new_variable = create_variable(VAR_TYPE_STRING, TRUE);
    new_entry->variable = new_variable;
    new_variable->value_string.value = malloc(search_pos);
    memcpy(new_variable->value_string.value, search_string, search_pos);
}
