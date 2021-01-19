#include <stdlib.h>
#include <string.h>

#include "parser.h"

void drop_statement(struct StatementEntry **entry, struct StatementEntry **previous) {
    struct StatementEntry *next = (*entry)->next;
    (*previous)->next = next;
    free_statement_entry(*entry);
    free(*entry);
    *entry = next;
}

void parser_pass2_wrap(struct StatementEntry **entry, struct StatementEntry **previous) {
    // Do we have an entry?
    if (*entry == NULL)
        return;
    if ((*entry) == NULL) {
        printf("[E15] Syntax error at line %d (statement %d)\n", line_number, statement_index);
        exit(1);
    }

    // Mark start of expression
    struct StatementEntry *new_entry = (struct StatementEntry *)malloc(sizeof(struct StatementEntry));
    new_entry->entry_type = STATEMENT_EXPRESSION_START;
    new_entry->variable = NULL;
    new_entry->procfn_name = NULL;
    (*previous)->next = new_entry;
    *previous = new_entry;

    new_entry->next = *entry;

    // Mark end of expression
    new_entry = (struct StatementEntry *)malloc(sizeof(struct StatementEntry));
    new_entry->entry_type = STATEMENT_EXPRESSION_END;
    new_entry->variable = NULL;
    new_entry->procfn_name = NULL;
    new_entry->next = (*entry)->next;
    (*entry)->next = new_entry;
    *previous = *entry;
    *entry = new_entry;
}

void parser_pass2_stmttoken(struct Statement *statement) {
    struct StatementEntry *entry = statement->first_entry;
    BYTE token = entry->token;
    struct StatementEntry *previous = entry;
    entry = entry->next;
    switch (token) {
        case TOKEN_STMT_SYS: {
            struct StatementEntry *start = entry;
            parser_pass2_all_expressions(&entry, &previous, TOKEN_TO);
            if (entry != NULL && entry->next != NULL && entry->entry_type == STATEMENT_TOKEN && entry->token == TOKEN_TO) {
                previous = entry;
                entry = entry->next;
                parser_pass2_all_variables(&entry, &previous);
            }

            // Do we have a string?
            if (start->entry_type == STATEMENT_OPERAND && start->variable->type == VAR_TYPE_STRING) {
                char *swi_name = malloc(start->variable->value_string.length + 1);
                memcpy(swi_name, start->variable->value_string.value, start->variable->value_string.length);
                swi_name[start->variable->value_string.length] = 0;

                // We need to replace the SWI name with the number
                int SWI = -1;

                // Is this one of our magic inbuilt ones?
                if (strcmp(swi_name, "Engine3D_Init") == 0) {
                    SWI = 0;
                } else if (strcmp(swi_name, "Engine3D_Shutdown") == 0) {
                    SWI = 1;
                } else if (strcmp(swi_name, "Engine3D_SetClip") == 0) {
                    SWI = 2;
                } else if (strcmp(swi_name, "Engine3D_ClearScreen") == 0) {
                    SWI = 3;
                } else if (strcmp(swi_name, "Engine3D_FlipBanks") == 0) {
                    SWI = 4;
                } else if (strcmp(swi_name, "Engine3D_DrawPoint") == 0) {
                    SWI = 5;
                } else if (strcmp(swi_name, "Engine3D_DrawLine") == 0) {
                    SWI = 6;
                } else if (strcmp(swi_name, "Engine3D_DrawTriangle") == 0) {
                    SWI = 7;
                } else if (strcmp(swi_name, "Engine3D_DrawGouraudTriangle") == 0) {
                    SWI = 8;
                } else if (strcmp(swi_name, "Engine3D_PerformanceTest2D") == 0) {
                    SWI = 9;
                } else if (strcmp(swi_name, "Engine3D_SetRenderType") == 0) {
                    SWI = 10;
                } else if (strcmp(swi_name, "Engine3D_ObjectSize") == 0) {
                    SWI = 11;
                } else if (strcmp(swi_name, "Engine3D_ShapeSize") == 0) {
                    SWI = 12;
                } else if (strcmp(swi_name, "Engine3D_VertexSize") == 0) {
                    SWI = 13;
                } else if (strcmp(swi_name, "Engine3D_FaceSize") == 0) {
                    SWI = 14;
                } else if (strcmp(swi_name, "Engine3D_InitialiseObject") == 0) {
                    SWI = 15;
                } else if (strcmp(swi_name, "Engine3D_RenderObject") == 0) {
                    SWI = 16;
                } else if (strcmp(swi_name, "Engine3D_TransformObject") == 0) {
                    SWI = 17;
                } else if (strcmp(swi_name, "Engine3D_SetAmbientLight") == 0) {
                    SWI = 18;
                } else if (strcmp(swi_name, "Engine3D_SetDirectionalLight") == 0) {
                    SWI = 19;
                } else if (strcmp(swi_name, "Engine3D_SetNormalsVisibility") == 0) {
                    SWI = 20;
                } else if (strcmp(swi_name, "Engine3D_RenderFrame") == 0) {
                    SWI = 21;
                }
                if (SWI != -1)
                    SWI += 0x81400;
#ifdef RISCOS
                // We need to get the SWI number
                if (SWI == -1) {
                    _kernel_swi_regs regs;
                    regs.r[0] = (int)swi_name;
                    _kernel_swi(OS_SWINumberFromString, &regs, &regs);
                    SWI = regs.r[0];
                }
#endif
                free(swi_name);
                free(start->variable->value_string.value);
                start->variable->value_string.value = NULL;
                start->variable->type = VAR_TYPE_INT;
                start->variable->value_int = SWI;
            }
            break;
        }
        default:
            printf("[E25] Unknown or unsupported token %d on line %d (statement %d)\n", token, line_number, statement_index);
            exit(1);
    }
}

void parser_pass2_token(struct Statement *statement) {
    struct StatementEntry *entry = statement->first_entry;
    BYTE token = entry->token;
    struct StatementEntry *previous = entry;
    entry = entry->next;
    switch (token) {
        case TOKEN_END:
        case TOKEN_ELSE:
        case TOKEN_ENDPROC:
        case TOKEN_RETURN:
            break;

        case TOKEN_REPEAT:
            if (entry != NULL) {
                parser_pass2_variable(&entry, &previous);
                parser_pass2_operator(&entry, (enum EOperator[]){OPERATOR_EQUAL}, 1, TRUE, &previous);
                parser_pass2_expression(&entry, &previous, NO_TOKEN, FALSE);
            }
            break;

        // These are all comma separated values
        case TOKEN_GCOL:
        case TOKEN_DATA:
        case TOKEN_PLOT:
        case TOKEN_VDU:
            parser_pass2_all_expressions(&entry, &previous, NO_TOKEN);
            break;

        // List of variables
        case TOKEN_DIM:
        case TOKEN_READ:
        case TOKEN_LOCAL:
            parser_pass2_all_variables(&entry, &previous);
            break;

        // Single expression
        case TOKEN_IF:
        case TOKEN_MODE:
        case TOKEN_UNTIL:
            parser_pass2_expression(&entry, &previous, TOKEN_THEN, FALSE);
            break;

        // Others
        case TOKEN_FOR:
            parser_pass2_variable(&entry, &previous);
            parser_pass2_operator(&entry, (enum EOperator[]){OPERATOR_EQUAL}, 1, TRUE, &previous);
            parser_pass2_expression(&entry, &previous, TOKEN_TO, FALSE);

            // Skip over to
            if (entry != NULL && entry->entry_type == STATEMENT_TOKEN && entry->token == TOKEN_TO) {
                previous = entry;
                entry = entry->next;

                // TO expression
                parser_pass2_expression(&entry, &previous, TOKEN_STEP, FALSE);

                if (entry != NULL) {
                    previous = entry;
                    entry = entry->next;
                    parser_pass2_expression(&entry, &previous, NO_TOKEN, FALSE);
                }
            }
            break;
        case TOKEN_LET: {
            struct StatementEntry *saved = entry;
            parser_pass2_variable(&entry, &previous);
            enum EOperator o = parser_pass2_operator(&entry, (enum EOperator[]){OPERATOR_EQUAL, OPERATOR_ADD_EQUAL, OPERATOR_SUBTRACT_EQUAL, OPERATOR_MULTIPLY_EQUAL, OPERATOR_DIVIDE_EQUAL}, 5, TRUE, &previous);
            switch (o) {
                case OPERATOR_EQUAL:
                    break;
                case OPERATOR_ADD_EQUAL:
                    parser_pass2_expression_repeat_with_operator(&entry, &previous, saved, OPERATOR_ADD);
                    break;
                case OPERATOR_SUBTRACT_EQUAL:
                    parser_pass2_expression_repeat_with_operator(&entry, &previous, saved, OPERATOR_SUBTRACT);
                    break;
                case OPERATOR_DIVIDE_EQUAL:
                    parser_pass2_expression_repeat_with_operator(&entry, &previous, saved, OPERATOR_DIVIDE);
                    break;
                case OPERATOR_MULTIPLY_EQUAL:
                    parser_pass2_expression_repeat_with_operator(&entry, &previous, saved, OPERATOR_MULTIPLY);
                    break;
                default:
                    break;
            }
            parser_pass2_expression(&entry, &previous, NO_TOKEN, FALSE);
            break;
        }
        case TOKEN_NEXT:
            if (entry != NULL) {
                parser_pass2_variable(&entry, &previous);
            }
            break;
        case TOKEN_DEF: {
            // Is this a FN or PROC?
            BYTE token = entry->token;
            switch (token) {
                case TOKEN_FN:
                case TOKEN_PROC:
                    break;
                default: {
                    printf("[E22] DEF requires either a PROC or FN at line %d (statement %d), found %d\n", line_number, statement_index, entry->token);
                    exit(1);
                }
            }
            previous = entry;
            entry = entry->next;
            if (entry->entry_type != STATEMENT_PROC_OR_FN) {
                printf("[E23] DEF needs a name line %d (statement %d)\n", line_number, statement_index);
                exit(1);
            }

            // Do we have an open parens?
            if (entry != NULL) {
                previous = entry;
                entry = entry->next;
                if (entry != NULL && entry->entry_type == STATEMENT_OPEN_PARENS) {
                    drop_statement(&entry, &previous);

                    // Loop through all variables
                    while (entry != NULL && (entry->entry_type == STATEMENT_VARIABLE || (entry->entry_type == STATEMENT_TOKEN && entry->token == TOKEN_RETURN))) {
                        previous = entry;
                        entry = entry->next;

                        // Do we have a comma or ) ?
                        if (entry != NULL && (entry->entry_type == STATEMENT_COMMA || entry->entry_type == STATEMENT_CLOSE_PARENS)) {
                            drop_statement(&entry, &previous);
                        }
                    }
                }
            }
            break;
        }
        case TOKEN_PROC: {
            // Skip over PROC
            previous = entry;
            entry = entry->next;

            // Do we have any parameters?
            if (entry != NULL) {
                parser_pass2_expression(&entry, &previous, NO_TOKEN, FALSE);
                if (entry != NULL) {
                    previous = entry;
                    entry = entry->next;
                }
            }
            break;
        }
        case TOKEN_GOSUB: {
            // Line number
            if (entry->entry_type != STATEMENT_LINENUMBER) {
                printf("[E3] GOSUB requires a line number at line %d (statement %d)\n", line_number, statement_index);
            }

            previous = entry;
            entry = entry->next;
            break;
        }
        case TOKEN_PRINT: {
            // Do we have a SPC after this?
            if (entry != NULL && entry->entry_type == STATEMENT_TOKEN && entry->token == TOKEN_SPC) {
                previous = entry;
                entry = entry->next;
                // Do we have a parens? if so do it as a full expression
                if (entry != NULL && entry->entry_type == STATEMENT_OPEN_PARENS) {
                    parser_pass2_expression(&entry, &previous, NO_TOKEN, FALSE);
                    previous = entry;
                    entry = entry->next;
                } else if (entry != NULL && entry->entry_type == STATEMENT_OPERAND) {
                    parser_pass2_wrap(&entry, &previous);
                    previous = entry;
                    entry = entry->next;
                } else {
                    printf("[E19] Unable to work out PRINT at line %d (statement %d)\n", line_number, statement_index);
                    exit(1);
                }
            }
            parser_pass2_all_expressions(&entry, &previous, NO_TOKEN);
            break;
        }
        default:
            printf("[E7] Unknown or unsupported token %d on line %d (statement %d)\n", token, line_number, statement_index);
            exit(1);
    }
}
