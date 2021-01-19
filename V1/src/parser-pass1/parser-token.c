#include <stdlib.h>
#include <string.h>

#include "parser.h"

void statement_add_token(BYTE token) {
    struct StatementEntry *new_entry = statement_check_exists_create();
    new_entry->entry_type = STATEMENT_TOKEN;
    new_entry->token = token - 128;
}

void statement_add_stmttoken(BYTE token) {
    struct StatementEntry *new_entry = statement_check_exists_create();
    new_entry->entry_type = STATEMENT_TOKENSTMT;
    new_entry->token = token - 128;
}

int process_token(BYTE *code, UINT32 *pos, BYTE token) {
#ifdef PARSE_DEBUG_VERBOSE
    printf("TOKEN\n");
#endif
    switch (token - 0x80) {
        case TOKEN_ESCSTMT: {
            BYTE token2 = code[(*pos)++];
            remaining--;
            switch (token2 - 0x80) {
                case TOKEN_STMT_SYS:
                    statement_add_stmttoken(token2);
                    return STATE_NONE;
                default:
                    printf("[E23] Unknown ESCSTMT token %d 0x%X, %d\n", token2 - 0x80, token - 0x80, *pos);
                    exit(1);
            };
            break;
        }
        case TOKEN_AND:
            statement_add_operator(OPERATOR_AND);
            return STATE_NONE;
        case TOKEN_EOR:
            statement_add_operator(OPERATOR_EOR);
            return STATE_NONE;
        case TOKEN_OR:
            statement_add_operator(OPERATOR_OR);
            return STATE_NONE;
        case TOKEN_THEN:
            additional_statement();
            return STATE_NONE;
        case TOKEN_ELSE:
            additional_statement();
            statement_add_token(token);
            additional_statement();
            return STATE_NONE;
        case TOKEN_ABS:
        case TOKEN_ATN:
        case TOKEN_CHR:
        case TOKEN_COS:
        case TOKEN_DATA:
        case TOKEN_DIM:
        case TOKEN_DIV:
        case TOKEN_END:
        case TOKEN_EXP:
        case TOKEN_FOR:
        case TOKEN_GCOL:
        case TOKEN_GOSUB:
        case TOKEN_IF:
        case TOKEN_INT:
        case TOKEN_LEFT_S_P:
        case TOKEN_LEN:
        case TOKEN_LOCAL:
        case TOKEN_LN:
        case TOKEN_MID_S_P:
        case TOKEN_MOD:
        case TOKEN_MODE:
        case TOKEN_NEXT:
        case TOKEN_PLOT:
        case TOKEN_PRINT:
        case TOKEN_READ:
        case TOKEN_REPEAT:
        case TOKEN_RETURN:
        case TOKEN_RIGHT_S_P:
        case TOKEN_RND:
        case TOKEN_SPC:
        case TOKEN_SQR:
        case TOKEN_STR:
        case TOKEN_STRINGS:
        case TOKEN_STEP:
        case TOKEN_UNTIL:
        case TOKEN_TAN:
        case TOKEN_TO:
        case TOKEN_VDU:
            statement_add_token(token);
            return STATE_NONE;
        case TOKEN_TIME:
            statement_add_token(token);
            return STATE_NONE;
        case TOKEN_DEF:
            in_fn_or_proc = FALSE;
            statement_add_token(token);
            return STATE_NONE;
        case TOKEN_FN:
        case TOKEN_PROC:
            in_fn_or_proc = TRUE;
            statement_add_token(token);
            return STATE_NONE;
        case TOKEN_ENDPROC:
            in_fn_or_proc = FALSE;
            statement_add_token(token);
            return STATE_NONE;
        case TOKEN_REM:
#ifdef PARSE_DEBUG
            printf("REM statement, ignoring rest of line\n");
#endif
            return STATE_IGNORE;
    }
    printf("[E13] Unknown token %d 0x%X, %d\n", token - 128, token - 128, *pos);
    exit(1);
}