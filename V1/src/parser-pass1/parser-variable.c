#include <stdlib.h>
#include <string.h>

#include "parser.h"

struct Variable *create_variable(enum EVarType type, bool constant) {
    struct Variable *new_variable = (struct Variable *)malloc(sizeof(struct Variable));
    if (variables != NULL) {
        new_variable->next = variables;
    } else {
        new_variable->next = NULL;
    }
    variables = new_variable;

    // Copy name over and type
    variables->name = malloc(search_pos);
    memcpy(variables->name, search_string, search_pos);
    variables->type = type;
    variables->value_int_array = NULL;
    variables->value_float_array = NULL;
    variables->value_string.value = NULL;
    variables->value_string.length = 0;
    variables->index = variable_index++;
    variables->local = FALSE;
    variables->fn_proc_index = 0;
    variables->constant = constant;
#ifdef PARSE_DEBUG_VERBOSE
    if (!constant) {
        printf("1:Create variable %s with index %d\n", variables->name, variables->index);
    } else {
        printf("1:Create constant %s with index %d\n", variables->name, variables->index);
    }
#endif

    return new_variable;
}

int process_variable(BYTE *code, UINT32 length, UINT32 *pos, BYTE token) {
#ifdef PARSE_DEBUG_VERBOSE
    printf("VARIABLE\n");
#endif
    if (token <= 0x7f) {
        if (token == '_' || (token >= 'a' && token <= 'z') || (token >= 'A' && token <= 'Z') || (token >= '0' && token <= '9')) {
            search_string[search_pos++] = token;
            return STATE_VARIABLE;
        } else if (token == '%') {
            search_string[search_pos++] = token;
            search_string[search_pos++] = 0;
            statement_add_variable(VAR_TYPE_INT);
            return STATE_NONE;
        } else if (token == '$') {
            search_string[search_pos++] = token;
            search_string[search_pos++] = 0;
            statement_add_variable(VAR_TYPE_STRING);
            return STATE_NONE;
        } else {
            search_string[search_pos++] = 0;
            statement_add_variable(VAR_TYPE_FLOAT);
            return process_none(code, length, pos, token);
        }
    } else {
        search_string[search_pos++] = 0;
        statement_add_variable(VAR_TYPE_FLOAT);
        return process_none(code, length, pos, token);
    }
}

void statement_add_variable(enum EVarType type) {
    // We add in an explicit LET if we need to
    if (statement_entry_index == 0) {
        statement_add_token(TOKEN_LET + 128);
    }

    struct StatementEntry *new_entry = statement_check_exists_create();

    // Is the previous thing an FN or PROC reference?
    if (lines->statements != NULL && lines->statements->previous_entry && lines->statements->previous_entry->entry_type == STATEMENT_TOKEN &&
        (lines->statements->previous_entry->token == TOKEN_PROC || lines->statements->previous_entry->token == TOKEN_FN)) {
        new_entry->entry_type = STATEMENT_PROC_OR_FN;
        new_entry->procfn_name = malloc(search_pos);
        memcpy(new_entry->procfn_name, search_string, search_pos);

        // Is it a DEF PROC or FN?
        if (lines->statements->first_entry != NULL && lines->statements->first_entry->entry_type == STATEMENT_TOKEN && lines->statements->first_entry->token == TOKEN_DEF) {
            new_entry->fn_proc_index = fn_proc_index;
            fn_proc_index++;
        }
        return;
    }

    // Is this a local declaration?
    bool local = FALSE;
    if (lines->statements && lines->statements->first_entry && lines->statements->first_entry->entry_type == STATEMENT_TOKEN &&
        (lines->statements->first_entry->token == TOKEN_LOCAL || lines->statements->first_entry->token == TOKEN_DEF)) {
        local = TRUE;
    }

    // Do we have it already?
    struct Variable *v = variable_search(local, TRUE);
    if (v == NULL) {
        // Create var
        struct Variable *new_variable = (struct Variable *)malloc(sizeof(struct Variable));
        if (variables != NULL) {
            new_variable->next = variables;
        } else {
            new_variable->next = NULL;
        }

        variables = new_variable;

        // Copy name over and type
        variables->name = malloc(search_pos);
        variables->local = local;
        variables->fn_proc_index = fn_proc_index;
        memcpy(variables->name, search_string, search_pos);
        variables->type = type;
        variables->value_int = 0;
        variables->value_float = 0.0;
        variables->value_int_array = NULL;
        variables->value_float_array = NULL;
        variables->value_string.value = NULL;
        variables->value_string.length = 0;
        variables->index = variable_index++;
        variables->constant = FALSE;

#ifdef PARSE_DEBUG_VERBOSE
        printf("2:Create variable %s with index %d\n", variables->name, variables->index);
#endif

        // Setup statement
        new_entry->entry_type = STATEMENT_VARIABLE;
        new_entry->variable = new_variable;
    } else {
        new_entry->entry_type = STATEMENT_VARIABLE;
        new_entry->variable = v;
    }
}

struct Variable *variable_search(bool local, bool create) {
#ifdef PARSE_DEBUG
    printf("Search: %s\n", search_string);
#endif

    // Loop through each var until we find a match
    struct Variable *v = variables;
    while (v != NULL) {
#ifdef PARSE_DEBUG_VERBOSE
        printf("Check: %s(%d)=%s(%d), pos = %d\n", v->name, (int)strlen(v->name), search_string, (int)strlen(search_string), search_pos);
#endif

        // Searching for a local variable to create?
        if (create && local) {
            if (!v->local || v->fn_proc_index != fn_proc_index) {
                v = v->next;
                continue;
            }
        }

        if (strlen(v->name) == search_pos - 1) {
            int c = strncmp(v->name, search_string, search_pos);
#ifdef PARSE_DEBUG_VERBOSE
            printf("Confirm check: %s=%d\n", v->name, c);
#endif
            if (c == 0) {
                return v;
                // Found
            }
        }
        v = v->next;
    }
#ifdef PARSE_DEBUG
    printf("Variable %s not found at line %d\n", search_string, line_number);
#endif
    return NULL;
}
