#include "create.h"

#include <stdlib.h>
#include <string.h>

#include "parser-structs.h"

void error(const char *error) {
    printf("Syntax error at line %d: %s\n", line_number, error);
}

void error_token(const char *token, const char *error) {
    printf("Syntax error at line %d: %s %s\n", line_number, token, error);
}

VM *build_bytecode() {
    printf("-> Phase 2 - Converting IR to bytecode\n");

    // Start at the beginning, i.e. the first line!
    VM *vm;
    UINT32 bytecode_length = 0;
    vm = (VM *)malloc(sizeof(VM));
    vm->sp = 0;
    vm->fsp = 0;
    vm->csp = 0;
    vm->ssp = 0;
    vm->bsp = 0;
    vm->fixup_first = NULL;
    vm->data_position = NULL;

    // Clear variables
    for (int i = 0; i < STACK_SIZE; i++) {
        vm->sstack[i].value = NULL;
        vm->boxed[i].value_string.value = NULL;
        vm->boxed[i].value_float_array = NULL;
        vm->boxed[i].value_int_array = NULL;
        vm->boxed[i].value_string_array = NULL;
    }

    // Add some constants to the list for 0/1/2 and float 1.0
    struct Variable *new_variable = create_variable(VAR_TYPE_FLOAT, TRUE);
    new_variable->value_float = 1.0;

    // Variable list
    printf("   -> Number of variables and/or constants: %d\n", variable_index);
    vm->variable_list = malloc(variable_index * sizeof(struct Boxed));
    struct Variable *var = variables;
    int index = 0;
    while (var != NULL) {
        struct Boxed *b = &(vm->variable_list[variable_index - index - 1]);
        b->constant = var->constant;
        b->name = var->name;
        b->value_string.value = NULL;
        b->value_float = 0.0;
        b->value_int = 0.0;
        switch (var->type) {
            case VAR_TYPE_INT:
                b->value_int = var->value_int;
                break;
            case VAR_TYPE_FLOAT:
                b->value_float = var->value_float;
                break;
            case VAR_TYPE_STRING:
                b->value_string.value = malloc(var->value_string.length);
                memcpy(b->value_string.value, var->value_string.value, var->value_string.length);
                b->value_string.length = var->value_string.length;
                break;
        }

        // Set all arrays to NULL so we know whether to free memory later
        b->value_int_array = NULL;
        b->value_float_array = NULL;
        b->value_string_array = NULL;

        // NEXT!
        var = var->next;
        index++;
    }

    // We need to do a sub-pass to get all the FN and DEF stuff
    printf("   -> Pass 1 - Collate FN and PROC parameters\n");
    struct Line *line = first_line;
    while (line != NULL) {
        // Now loop through each statement in turn
        struct Statement *statement = line->first_statement;
        line->bytecode_position = vm->pc;
        while (statement != NULL) {
            struct StatementEntry *entry = statement->first_entry;
            if (entry) {
                switch (entry->entry_type) {
                    case STATEMENT_TOKEN: {
                        BYTE token = entry->token;
                        entry = entry->next;
                        switch (token) {
                            case TOKEN_DEF:
                                if (!process_statement_DEF(vm, FALSE, entry, TRUE)) return delete_VM(vm);
                                break;
                        }
                        break;
                    }
                    default:
                        break;
                }
            }
            statement = statement->next;
            statement_index++;
        }
        line = line->next;
    }

    vm->code = 0;
    for (int pass = 0; pass < 2; pass++) {
        // Create a new VM struct to contain our tasty bytecodes
        if (pass == 0)
            vm->code = NULL;
        else
            vm->code = malloc(bytecode_length * sizeof(struct Bytecode));
        vm->pc = 0;
        vm->size = bytecode_length;

        if (pass == 0) {
            printf("   -> Pass 2 - Estimate bytecode size and calculate offsets");
        } else {
            printf("   -> Pass 3 - Create bytecode");
        }
        struct Line *line = first_line;
        while (line != NULL) {
#ifdef BYTECODE_DEBUG
            printf("      -> Line %d\n", line->number);
#endif
            line_number = line->number;
            statement_index = 0;

            // Now loop through each statement in turn
            struct Statement *statement = line->first_statement;
            line->bytecode_position = vm->pc;
            while (statement != NULL) {
#ifdef BYTECODE_DEBUG
                printf("        -> Statement: %d\n", statement_index);
#endif
                // Save bytecode position for subsequent GOTO/GOSUB etc.
                statement->bytecode_position = vm->pc;

                // The first statement entry should tell us what kind of
                // statement this is
                struct StatementEntry *entry = statement->first_entry;
                if (entry) {
                    switch (entry->entry_type) {
                        case STATEMENT_STARCOMMAND:
                            if (!process_statement_starcommand(vm, pass == 1, entry)) return delete_VM(vm);
                            break;
                        case STATEMENT_TOKENSTMT: {
                            BYTE token = entry->token;
                            entry = entry->next;
                            switch (token) {
                                case TOKEN_STMT_SYS:
                                    if (!process_statement_SYS(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                default:
                                    printf("\nUnsupported statement token type: %d\n", token);
                                    return delete_VM(vm);
                            }
                            break;
                        }
                        case STATEMENT_TOKEN: {
                            BYTE token = entry->token;
                            entry = entry->next;
                            switch (token) {
                                // Ignore, no need to process
                                case TOKEN_LOCAL:
                                    break;
                                case TOKEN_DATA:
                                    if (!process_statement_DATA(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_DEF:
                                    if (!process_statement_DEF(vm, pass == 1, entry, FALSE)) return delete_VM(vm);
                                    break;
                                case TOKEN_DIM:
                                    if (!process_statement_DIM(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_END:
                                    if (!process_statement_END(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_ENDPROC:
                                    if (!process_statement_ENDPROC(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_ELSE:
                                    if (!process_statement_ELSE(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_FN:
                                    if (!process_statement_FN(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_FOR:
                                    if (!process_statement_FOR(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_GCOL:
                                    if (!process_statement_GCOL(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_GOSUB:
                                    if (!process_statement_GOSUB(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_IF:
                                    if (!process_statement_IF(vm, pass == 1, entry, statement)) return delete_VM(vm);
                                    break;
                                case TOKEN_LET:
                                    if (!process_statement_LET(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_NEXT:
                                    if (!process_statement_NEXT(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_READ:
                                    if (!process_statement_READ(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_MODE:
                                    if (!process_statement_MODE(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_PLOT:
                                    if (!process_statement_PLOT(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_VDU:
                                    if (!process_statement_VDU(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_PRINT:
                                    if (!process_statement_PRINT(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_PROC:
                                    if (!process_statement_PROC(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_REPEAT:
                                    if (!process_statement_REPEAT(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_RETURN:
                                    if (!process_statement_RETURN(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                case TOKEN_UNTIL:
                                    if (!process_statement_UNTIL(vm, pass == 1, entry)) return delete_VM(vm);
                                    break;
                                default:
                                    printf("\nUnsupported statement token type: %d\n", token);
                                    return delete_VM(vm);
                            }
                            break;
                        }
                        case STATEMENT_OPERATOR: {
                            if (entry->operator_type == OPERATOR_EQUAL) {
                                entry = entry->next;
                                build_expression_bytecode(vm, pass == 1, VAR_TYPE_NONE, &entry);
                                insert_bytecode(vm, pass == 1, RETURN_FN);
                            }
                            break;
                        }
                        default:
                            printf("\nUnsupported statement entry type: %d\n", entry->entry_type);
                            return delete_VM(vm);
                    }
                }
                statement->bytecode_end = vm->pc;
                statement = statement->next;
                statement_index++;
            }

// Next line
#ifdef BYTECODE_DEBUG
            printf("Line %d end, bytecode size: %d\n", line->number, vm->pc);
#endif
            line = line->next;
        }

        // Add an implicit HALT
        insert_bytecode(vm, pass == 1, HALT);
        printf(", length: %d instructions\n", vm->pc);

        bytecode_length = vm->pc;
    }
    // Move back to start ready to execute
    vm->pc = 0;
    return vm;
}