#include "parser.h"

#include <stdlib.h>
#include <string.h>

#define LINE_STRING_LENGTH 2048
char source[LINE_STRING_LENGTH];
int source_index = 0;

// States
int (*STATES[NUM_STATES])(BYTE *code, UINT32 length, UINT32 *pos, BYTE token);

// Current string for searching variables etc.
char search_string[MAX_VARIABLE_LENGTH];
int search_pos = 0;

// All the stuff to make a parsed IR
int remaining;
struct Variable *variables = NULL;
struct Line *first_line = NULL;
struct Line *lines = NULL;
int statement_index = 0;
int statement_entry_index = 0;
UINT32 line_number = 0;
UINT32 variable_index = 0;
UINT32 fn_proc_index = 1;
bool in_fn_or_proc = FALSE;

int process_none(BYTE *code, UINT32 length, UINT32 *pos, BYTE token) {
    if (token <= 0x7f) {
        // New line
        if (token == ':') {
            // End of statement
            additional_statement();
            return STATE_NONE;
        }
        // Minus symbol is a special case, as where it is changes what it means
        else if (token == '-') {
            //printf("%d - %d\n", line_number, lines->statements->entries->entry_type);
            if (statement_entry_index == 0) {
                search_pos = 0;
                return process_operand(code, length, pos, token);
            } else if (lines->statements->entries->entry_type == STATEMENT_OPEN_PARENS || lines->statements->entries->entry_type == STATEMENT_COMMA) {
                search_pos = 0;
                return process_operand(code, length, pos, token);
            } else if (lines->statements->entries->entry_type == STATEMENT_OPERATOR) {
                // If previous thing is a minus sign then this is operand, otherwise operator
                return process_operand(code, length, pos, token);
            } else {
                search_pos = 0;
                return process_operator(code, length, pos, token);
            }
        }
        // Number means it's an operand (or an & is a start of a hex one)
        else if (token == '&' || (token >= '0' && token <= '9')) {
            search_pos = 0;
            return process_operand(code, length, pos, token);
        }
        // Strings
        else if (token == '"') {
            search_pos = 0;
            return process_string(code, length, pos, token);
        }
        // parenthesis
        else if (token == '(') {
            struct StatementEntry *new_entry = statement_check_exists_create();
            new_entry->entry_type = STATEMENT_OPEN_PARENS;
        } else if (token == ')') {
            struct StatementEntry *new_entry = statement_check_exists_create();
            new_entry->entry_type = STATEMENT_CLOSE_PARENS;
        }
        // Space is to be ignored
        else if (token == ' ') {
        }
        // Comma is mainly for separating parameters for functions, but we need it for figuring out separators etc.
        else if (token == ',') {
            struct StatementEntry *new_entry = statement_check_exists_create();
            new_entry->entry_type = STATEMENT_COMMA;
        }
        // Semicolon is used in print formatting
        else if (token == ';') {
            struct StatementEntry *new_entry = statement_check_exists_create();
            new_entry->entry_type = STATEMENT_SEMICOLON;
        }
        // Tick is used in print formatting
        else if (token == '\'') {
            struct StatementEntry *new_entry = statement_check_exists_create();
            new_entry->entry_type = STATEMENT_TICK;
        }
        // * is for OS commands (or inside an expression)
        else if (token == '*' && statement_index == 0 && statement_entry_index == 0) {
            search_pos = 0;
            statement_check_exists();
            return process_starcommand(code, length, pos, token);
        } else if (token == '_' || (token >= 'a' && token <= 'z') ||
                   (token >= 'A' && token <= 'Z')) {
            search_pos = 0;
            return process_variable(code, length, pos, token);
        } else if (token == '=' || token == '-' || token == '*' ||
                   token == '+' || token == '/' || token == '>' ||
                   token == '<') {
            search_pos = 0;
            return process_operator(code, length, pos, token);
        } else if (token == '!') {
            struct StatementEntry *new_entry = statement_check_exists_create();
            new_entry->entry_type = STATEMENT_BANG;
        } else if (token == '~') {
            struct StatementEntry *new_entry = statement_check_exists_create();
            new_entry->entry_type = STATEMENT_TILDE;
        } else {
            printf("[E11] Unknown alphanumeric [%c] = %d, %d\n", token, token, *pos);
            exit(1);
        }
    } else {
        // This is special and signifies a line number for GOSUB etc
        if (token == 0x8d) {
            return process_linenumber(code, length, pos, token);
        } else {
            return process_token(code, pos, token);
        }
    }
    return STATE_NONE;
}

int process_ignore(BYTE *code, UINT32 length, UINT32 *pos, BYTE token) {
    return STATE_IGNORE;
}

int process_line(BYTE *code, UINT32 length, UINT32 *pos) {
    source_index = 0;
    const char line[10];
    sprintf((char *)&line, "%d", line_number);
    strcpy((char *)&source[source_index], line);
    source_index += strlen(line);

    // Process tokens for the line
    statement_index = 0;
    statement_entry_index = 0;
    enum EState state = STATE_NONE;
    remaining = length - 4;
    while (remaining > 0) {
        BYTE token = code[(*pos)++];
        if (token <= 0x7f) {
            source[source_index++] = token;
        } else if (token == (TOKEN_ESCSTMT + 0x80)) {
            BYTE token2 = code[*pos];
            const char *text = get_name_for_statementtoken(token2 - 0x80);
            strcpy((char *)&source[source_index], text);
            source_index += strlen(text);
        } else if (token != 0x8D) {
            const char *text = get_name_for_token(token - 0x80);
            strcpy((char *)&source[source_index], text);
            source_index += strlen(text);
        }
        remaining--;
#ifdef PARSE_DEBUG
        if (token >= 32) {
            printf("Token [%c] = %d 0x%X, %d, %d remaining\n", token, token, token, *pos, remaining);
        } else {
            printf("Token %d 0x%X, %d, %d remaining\n", token, token, *pos, remaining);
        }
#endif
        state = (*STATES[state])(code, length, pos, token);
        // Finish?
        if (state == STATE_STOP) {
            return 0;
        }
    }
    // Do any final end of line processing
    switch (state) {
        case STATE_VARIABLE:
            search_string[search_pos++] = 0;
            statement_add_variable(VAR_TYPE_FLOAT);
            break;
        case STATE_OPERAND:
            search_string[search_pos++] = 0;
            statement_add_operand();
            break;
        case STATE_STARCOMMAND:
            search_string[search_pos++] = 0;
            statement_add_starcommand();
            break;
        default:
            break;
    }
    source[source_index] = 0;
    return 1;
}

void free_statement_entry(struct StatementEntry *entry) {
    if (entry->procfn_name != NULL) free(entry->procfn_name);
}

void free_line(struct Line *line) {
    struct Statement *statement = line->first_statement;
    while (statement != NULL) {
        struct StatementEntry *entry = statement->first_entry;
        while (entry != NULL) {
            free_statement_entry(entry);
            struct StatementEntry *next_entry = entry->next;
            free(entry);
            entry = next_entry;
        }
        struct Statement *next_statement = statement->next;
        free(statement);
        statement = next_statement;
    }
    if (line->source) {
        free(line->source);
    }
}

void free_parser() {
    // Delete lines and statements
    struct Line *line = first_line;
    while (line != NULL) {
        free_line(line);
        struct Line *next_line = line->next;
        free(line);
        line = next_line;
    }

    // Delete variables
    struct Variable *variable = variables;
    while (variable != NULL) {
        if (variable->name != NULL) free(variable->name);
        if (variable->value_string.value != NULL)
            free(variable->value_string.value);
        if (variable->value_int_array != NULL)
            free(variable->value_int_array);
        if (variable->value_float_array != NULL)
            free(variable->value_float_array);

        struct Variable *next_variable = variable->next;
        free(variable);
        variable = next_variable;
    }
}

// We parse in two phases, first one simply tokenesis everything (BASIC tokens as themselves, and things like operators and operands)
void parser(BYTE *code, UINT32 length, UINT32 last_line) {
    printf("-> Phase 1 - BBC BASIC to IR\n");
    printf("   -> Pass 1 - Lexical analysis\n");

    // State functions
    STATES[STATE_NONE] = process_none;
    STATES[STATE_VARIABLE] = process_variable;
    STATES[STATE_OPERAND] = process_operand;
    STATES[STATE_OPERATOR] = process_operator;
    STATES[STATE_IGNORE] = process_ignore;
    STATES[STATE_STARCOMMAND] = process_starcommand;
    STATES[STATE_STRING] = process_string;
    STATES[STATE_LINENUMBER] = process_linenumber;

    UINT32 pos = 0;
    while (pos < length) {
        // Check valid start of line
        if (code[pos++] != 0x0D) {
            printf("[E12] Line start not found at %d\n", pos);
            exit(1);
        }

        // Get line number
        line_number = (code[pos] << 8) + code[pos + 1];
        pos += 2;
        if (line_number >= 0xFF00) {
            break;
        }
        if (last_line != 0 && line_number > last_line) {
            break;
        }

        // Get line length
        BYTE length = code[pos++];
#ifdef PARSE_DEBUG
        printf("\nLine %d, length: %d\n", line_number, length);
#endif

        // Create new line and attach to previous (if there is one)
        struct Line *new_line = (struct Line *)malloc(sizeof(struct Line));
        if (lines != NULL) {
            lines->next = new_line;
        } else {
            first_line = new_line;
        }
        lines = new_line;
        lines->number = line_number;
        lines->first_statement = NULL;
        lines->statements = NULL;
        lines->next = NULL;
        lines->bytecode_position = 0;

        // Now process it
        if (process_line(code, length, &pos) == 0) {
            break;
        }
        int l = strlen((const char *)&source);
        lines->source = malloc(l + 1);
        strncpy(lines->source, source, l + 1);
        lines->source[l] = 0;
    }
}