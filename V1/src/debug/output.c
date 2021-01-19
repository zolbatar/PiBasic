#include "output.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "parser.h"

char *type_for_variable(enum EVarType type) {
    switch (type) {
        case VAR_TYPE_INT:
            return "INTEGER";
        case VAR_TYPE_FLOAT:
            return "FLOAT";
        case VAR_TYPE_STRING:
            return "STRING";
    }
    return "UNKNOWN";
}

void debug_statement_entries(FILE *fp, struct StatementEntry *entry) {
    int i = 0;
    while (entry != NULL) {
        char spaces[] = "";
        switch (entry->entry_type) {
            case STATEMENT_VARIABLE:
                fprintf(fp, "[%2d]         Variable                  %s%s (%p) (%s)\n", i, spaces, entry->variable->name, entry->variable, type_for_variable(entry->variable->type));
                break;
            case STATEMENT_VARIABLE_WITH_INDEX:
                fprintf(fp, "[%2d]         Variable (with index)     %s%s (%p) (%s)\n", i, spaces, entry->variable->name, entry->variable, type_for_variable(entry->variable->type));
                break;
            case STATEMENT_VARIABLE_WITH_STORAGE:
                fprintf(fp, "[%2d]         Variable (storage)        %s%s (%p) (%s)\n", i, spaces, entry->variable->name, entry->variable, type_for_variable(entry->variable->type));
                break;
            case STATEMENT_OPERAND:
                switch (entry->variable->type) {
                    case VAR_TYPE_INT:
                        fprintf(fp, "[%2d]         Integer operand           %s%d\n", i, spaces, entry->variable->value_int);
                        break;
                    case VAR_TYPE_FLOAT:
                        fprintf(fp, "[%2d]         Real operand              %s%f\n", i, spaces, entry->variable->value_float);
                        break;
                    case VAR_TYPE_STRING:
                        fprintf(fp, "[%2d]         String operand            %s'%s'\n", i, spaces, entry->variable->value_string.value);
                        break;
                    default:
                        fprintf(fp, "[%2d]         Unknown operand            %s%d\n", i, spaces, entry->variable->type);
                        exit(1);
                        break;
                }
                break;
            case STATEMENT_OPERATOR:
                switch (entry->operator_type) {
                    case OPERATOR_ADD:
                        fprintf(fp, "[%2d]         Operator                  %s+\n", i, spaces);
                        break;
                    case OPERATOR_SUBTRACT:
                        fprintf(fp, "[%2d]         Operator                  %s-\n", i, spaces);
                        break;
                    case OPERATOR_MULTIPLY:
                        fprintf(fp, "[%2d]         Operator                  %s*\n", i, spaces);
                        break;
                    case OPERATOR_DIVIDE:
                        fprintf(fp, "[%2d]         Operator                  %s/\n", i, spaces);
                        break;
                    case OPERATOR_EQUAL:
                        fprintf(fp, "[%2d]         Operator                  %s=\n", i, spaces);
                        break;
                    case OPERATOR_GEQUAL:
                        fprintf(fp, "[%2d]         Operator                  %s>=\n", i, spaces);
                        break;
                    case OPERATOR_LEQUAL:
                        fprintf(fp, "[%2d]         Operator                  %s<=\n", i, spaces);
                        break;
                    case OPERATOR_GREATER:
                        fprintf(fp, "[%2d]         Operator                  %s>\n", i, spaces);
                        break;
                    case OPERATOR_LESS:
                        fprintf(fp, "[%2d]         Operator                  %s<\n", i, spaces);
                        break;
                    case OPERATOR_AND:
                        fprintf(fp, "[%2d]         Operator                  %s+\n", i, spaces);
                        break;
                    case OPERATOR_OR:
                        fprintf(fp, "[%2d]         Operator                  %sOR\n", i, spaces);
                        break;
                    case OPERATOR_EOR:
                        fprintf(fp, "[%2d]         Operator                  %sEOR\n", i, spaces);
                        break;
                    case OPERATOR_NOTEQUAL:
                        fprintf(fp, "[%2d]         Operator                  %s<>\n", i, spaces);
                        break;
                    case OPERATOR_ADD_EQUAL:
                        fprintf(fp, "[%2d]         Operator                  %s+=\n", i, spaces);
                        break;
                    case OPERATOR_SUBTRACT_EQUAL:
                        fprintf(fp, "[%2d]         Operator                  %s-=\n", i, spaces);
                        break;
                    case OPERATOR_DIVIDE_EQUAL:
                        fprintf(fp, "[%2d]         Operator                  %s/=\n", i, spaces);
                        break;
                    case OPERATOR_MULTIPLY_EQUAL:
                        fprintf(fp, "[%2d]         Operator                  %s*=\n", i, spaces);
                        break;
                    default:
                        fprintf(fp, "[%2d]         Uknown operator           %s%d\n", i, spaces, entry->operator_type);
                        printf("Error creating debug output\n");
                        exit(1);
                        break;
                }
                break;
            case STATEMENT_TOKEN:
                fprintf(fp, "[%2d]         Token 0x%02X                %s%s\n", i, entry->token, spaces, get_name_for_token(entry->token));
                break;
            case STATEMENT_TOKENSTMT: {
                fprintf(fp, "[%2d]         Token (statement) 0x%02X    %s%s\n", i, entry->token, spaces, get_name_for_statementtoken(entry->token));
                break;
            }
            case STATEMENT_STARCOMMAND:
                fprintf(fp, "[%2d]         *                         %s%s\n", i, spaces, entry->variable->value_string.value);
                break;
            case STATEMENT_PROC_OR_FN:
                if (entry->fn_proc_index > 0) {
                    fprintf(fp, "[%2d]         Proc or FN Call (%03d)     %s%s\n", i, entry->fn_proc_index, spaces, entry->procfn_name);
                } else {
                    fprintf(fp, "[%2d]         Proc or FN Call           %s%s\n", i, spaces, entry->procfn_name);
                }
                break;
            case STATEMENT_SEMICOLON:
                fprintf(fp, "[%2d]         Semi-colon                %s;\n", i, spaces);
                break;
            case STATEMENT_TICK:
                fprintf(fp, "[%2d]         Tick                      %s'\n", i, spaces);
                break;
            case STATEMENT_BANG:
                fprintf(fp, "[%2d]         Bang                      %s!\n", i, spaces);
                break;
            case STATEMENT_TILDE:
                fprintf(fp, "[%2d]         Tilde                     %s~\n", i, spaces);
                break;
            case STATEMENT_LINENUMBER:
                fprintf(fp, "[%2d]         Line Number               %s%d\n", i, spaces, entry->line_number);
                break;
            case STATEMENT_OPEN_PARENS:
                fprintf(fp, "[%2d]         Open Parens               %s(\n", i, spaces);
                break;
            case STATEMENT_CLOSE_PARENS:
                fprintf(fp, "[%2d]         Close Parens              %s)\n", i, spaces);
                break;
            case STATEMENT_COMMA:
                fprintf(fp, "[%2d]         Comma                     %s,\n", i, spaces);
                break;
            case STATEMENT_EXPRESSION_START:
                fprintf(fp, "[%2d]         Expression Start          %s\n", i, spaces);
                break;
            case STATEMENT_EXPRESSION_END:
                fprintf(fp, "[%2d]         Expression End            %s\n", i, spaces);
                break;
            case STATEMENT_NONE:
                fprintf(fp, "[%2d]         None                      %s\n", i, spaces);
                break;
            default:
                fprintf(fp, "[%2d]                                   Unknown type %d\n", i, entry->entry_type);
                exit(1);
                break;
        }
        entry = entry->next;
        i++;
    }
}

void debug_statement(FILE *fp, struct Statement *statement, int index, int line_number, char *source) {
    if (index == 0) {
        fprintf(fp, "Line: %d Statement: %d\n-> %s\n", line_number, index, source);
    } else {
        fprintf(fp, "Line: %d Statement: %d\n", line_number, index);
    }

    // Now print out all entries
    struct StatementEntry *entry = statement->first_entry;
    debug_statement_entries(fp, entry);
}

void debug_line(FILE *fp, struct Line *line, VM *vm) {
    if (line->statements == NULL) {
        fprintf(fp, "Line: %d Empty/REM\n-> %s\n\n", line->number, line->source);
    } else {
        struct Statement *statement = line->first_statement;
        int index = 0;
        while (statement != NULL) {
            debug_statement(fp, statement, index, line->number, line->source);

            // Do we have bytecode?
            if (vm != NULL && statement->bytecode_end != 0) {
                bytecode_output(fp, vm, statement->bytecode_position, statement->bytecode_end);
            }

            statement = statement->next;
            index++;
            fprintf(fp, "\n");
        }
    }
}

void phase1_output(struct Line *lines, int pass) {
    FILE *fp;
    if (pass == 1)
        fp = fopen("phase1-pass1.txt", "w");
    else
        fp = fopen("phase1-pass2.txt", "w");
    while (lines != NULL) {
        debug_line(fp, lines, NULL);
        lines = lines->next;
    }
    fprintf(fp, "\n");
    fclose(fp);
}

void phase2_output(struct Line *lines, VM *vm) {
    FILE *fp = fopen("output.txt", "w");
    while (lines != NULL) {
        debug_line(fp, lines, vm);
        lines = lines->next;
    }
    fclose(fp);
}