#include <stdlib.h>
#include <string.h>

#include "create.h"
#include "output.h"

#ifdef RISCOS
#include "kernel.h"
#include "swis.h"
#endif

bool process_statement_DATA(VM *vm, int write, struct StatementEntry *entry) {
    while (entry != NULL) {
        insert_instruction(vm, write, JUMP, 0);
        UINT32 saved_pc = vm->pc - 1;
        struct StatementEntry *start = entry;
        UINT32 pc = vm->pc;
        enum EVarType t = build_expression_bytecode(vm, write, VAR_TYPE_NONE, &entry);
        push_type_onto_stack(vm, write, t);
        insert_bytecode(vm, write, RETURN_DATA);
        if (!write)
            build_data(vm, pc, start);
        if (write) {
            vm->code[saved_pc].opcode = JUMP;
            vm->code[saved_pc].data = vm->pc;
        }
    }
    return TRUE;
}

bool process_statement_DEF(VM *vm, int write, struct StatementEntry *entry, bool PRE) {
    if (entry->entry_type != STATEMENT_TOKEN) {
        printf("PANIC: DEF needs to be followed by FN or PROC\n");
        exit(1);
    }

    // Save type
    int type = entry->token;
    entry = entry->next;

    // Get name
    if (entry->entry_type != STATEMENT_PROC_OR_FN) {
        printf("PANIC: DEF needs a FN or PROC name\n");
        exit(1);
    }
    char *name = entry->procfn_name;
    entry = entry->next;

    if (PRE) {
        // Count variables first
        struct StatementEntry *start = entry;
        int count = 0;
        while (start != NULL) {
            if (start->entry_type == STATEMENT_TOKEN && entry->token == TOKEN_RETURN) {
                start = start->next;
            }
            count++;
            start = start->next;
        }

        // Now add to an array
        struct Variable **variable_list = malloc(count * sizeof(struct Variable *));
        bool *variables_are_return = malloc(count * sizeof(bool));
        start = entry;
        count = 0;
        while (start != NULL) {
            if (start->entry_type == STATEMENT_TOKEN && entry->token == TOKEN_RETURN) {
                variables_are_return[count] = TRUE;
                start = start->next;
            } else {
                variables_are_return[count] = FALSE;
            }
            variable_list[count++] = start->variable;
            start = start->next;
        }

        switch (type) {
            case TOKEN_FN:
                build_fixup_FNPROC(vm, FIXUP_FN, entry, variable_list, variables_are_return, count, name);
                break;
            case TOKEN_PROC:
                build_fixup_FNPROC(vm, FIXUP_PROC, entry, variable_list, variables_are_return, count, name);
                break;
            default:
                printf("PANIC: DEF needs to be followed by FN or PROC\n");
                exit(1);
        }
    } else if (!write) {
        // Find and update the existing fixup with the bytecode position
        struct VM_FixUp *fixup = vm->fixup_first;
        struct VM_FixUp *found = NULL;
        while (fixup != NULL) {
            switch (fixup->type) {
                case FIXUP_FN:
                    if (type == TOKEN_FN) {
                        if (strcmp(name, fixup->proc_or_fn) == 0) {
                            found = fixup;
                            break;
                        }
                    }
                    break;
                case FIXUP_PROC:
                    if (type == TOKEN_PROC) {
                        if (strcmp(name, fixup->proc_or_fn) == 0) {
                            found = fixup;
                            break;
                        }
                    }
                    break;
                default:
                    break;
            }
            fixup = fixup->next;
        }
        if (found == NULL) {
            printf("\nPANIC: Can't find FN%s at line number %d (statement %d)\n", name, line_number, statement_index);
            exit(1);
        }
        found->bytecode_position = vm->pc;
    }

    if (!PRE) {
        // Find and update the existing fixup with the bytecode position
        struct VM_FixUp *fixup = vm->fixup_first;
        struct VM_FixUp *found = NULL;
        while (fixup != NULL) {
            switch (fixup->type) {
                case FIXUP_FN:
                    if (type == TOKEN_FN) {
                        if (strcmp(name, fixup->proc_or_fn) == 0) {
                            found = fixup;
                            break;
                        }
                    }
                    break;
                case FIXUP_PROC:
                    if (type == TOKEN_PROC) {
                        if (strcmp(name, fixup->proc_or_fn) == 0) {
                            found = fixup;
                            break;
                        }
                    }
                    break;
                default:
                    break;
            }
            fixup = fixup->next;
        }
        if (found == NULL) {
            printf("\nPANIC: Can't find FN%s at line number %d (statement %d)\n", name, line_number, statement_index);
            exit(1);
        }

        // Unpack in reverse order
        if (found->variable_count > 0) {
            for (int i = found->variable_count - 1; i >= 0; i--) {
                struct Variable *var = found->variable_list[i];
                switch (var->type) {
                    case VAR_TYPE_INT:
                        insert_instruction(vm, write, UNPACK_I, var->index);
                        break;
                    case VAR_TYPE_FLOAT:
                        insert_instruction(vm, write, UNPACK_F, var->index);
                        break;
                    case VAR_TYPE_STRING:
                        insert_instruction(vm, write, UNPACK_S, var->index);
                        break;
                    default:
                        printf("PANIC at line number %d (statement %d)\n", line_number, statement_index);
                }
            }
        }
    }
    return TRUE;
}

bool process_statement_DIM(VM *vm, int write, struct StatementEntry *entry) {
    while (entry != NULL) {
        struct StatementEntry *variable = entry;
        entry = entry->next;

        // Is this a storage definition?
        bool storage = FALSE;
        if (variable != NULL && variable->entry_type == STATEMENT_VARIABLE_WITH_STORAGE) {
            storage = TRUE;
        }
        build_expression_bytecode(vm, write, VAR_TYPE_INT, &entry);
        switch (variable->variable->type) {
            case VAR_TYPE_INT:
                if (storage) {
                    insert_instruction(vm, write, DIM_I_STORAGE, variable->variable->index);
                } else {
                    insert_instruction(vm, write, DIM_I, variable->variable->index);
                }
                break;
            case VAR_TYPE_FLOAT:
                if (storage) {
                    error("\nPANIC: Float variables not supported for DIM storage");
                    exit(1);
                }
                insert_instruction(vm, write, DIM_F, variable->variable->index);
                break;
            case VAR_TYPE_STRING:
                if (storage) {
                    error("\nPANIC: String variables not supported for DIM storage");
                    exit(1);
                }
                error("\nPANIC: Arrays of strings not supported yet");
                exit(1);
        }
    }
    return TRUE;
}

bool process_statement_END(VM *vm, int write, struct StatementEntry *entry) {
    insert_bytecode(vm, write, HALT);
    return TRUE;
}

bool process_statement_ENDPROC(VM *vm, int write, struct StatementEntry *entry) {
    insert_bytecode(vm, write, RETURN);
    return TRUE;
}

bool process_statement_ELSE(VM *vm, int write, struct StatementEntry *entry) {
    struct Line *l = first_line;
    while (l != NULL && l->number < line_number + 1) {
        l = l->next;
    }
    if (write && l != NULL) {
        insert_instruction(vm, write, JUMP, l->bytecode_position);
    } else {
        insert_instruction(vm, write, JUMP, 0);
    }
    return TRUE;
}

bool process_statement_FOR(VM *vm, int write, struct StatementEntry *entry) {
    struct StatementEntry *variable = entry;

    // This skips to the TO part
    entry = entry->next;

    // This will change as NEXT will do less
    if (!write)
        build_fixup(vm, FIXUP_FOR, entry, variable->variable);

    // Do we have a step?
    struct StatementEntry *entry_step = entry;
    while (entry_step != NULL) {
        if (entry_step->entry_type == STATEMENT_TOKEN && entry_step->token == TOKEN_STEP) {
            // Move over STEP
            entry_step = entry_step->next;
            break;
        }
        entry_step = entry_step->next;
    }

    build_expression_bytecode(vm, write, variable->variable->type, &entry);
    entry = entry->next;
    switch (variable->variable->type) {
        case VAR_TYPE_INT:
            // Starting index
            insert_instruction(vm, write, STORE_I, variable->variable->index);

            // We use the int array for the step amount, and number of iterations
            insert_instruction(vm, write, CONST_I, 3);
            insert_instruction(vm, write, DIM_I, variable->variable->index);

            // Step
            if (entry_step == NULL) {
                insert_instruction(vm, write, CONST_I, 1);
            } else {
                build_expression_bytecode(vm, write, variable->variable->type, &entry_step);
            }
            insert_bytecode(vm, write, DUP_I);
            insert_instruction(vm, write, CONST_I, 0);  // index
            insert_instruction(vm, write, STORE_I_ARRAY, variable->variable->index);

            // Iterations
            build_expression_bytecode(vm, write, variable->variable->type, &entry);
            insert_bytecode(vm, write, ROT_I);
            insert_instruction(vm, write, LOAD_I, variable->variable->index);
            insert_bytecode(vm, write, SUBTRACT_I);
            insert_bytecode(vm, write, DIVIDE_I);
            insert_instruction(vm, write, CONST_I, 1);  // index
            insert_instruction(vm, write, STORE_I_ARRAY, variable->variable->index);

            // Push PC
            insert_instruction(vm, write, PUSH_PC, 2);
            insert_instruction(vm, write, CONST_I, 2);  // index
            insert_instruction(vm, write, STORE_I_ARRAY, variable->variable->index);
            break;
        case VAR_TYPE_FLOAT:
            // Starting index
            insert_instruction(vm, write, STORE_F, variable->variable->index);

            // We use the int array for the step amount, and number of iterations
            insert_instruction(vm, write, CONST_I, 1);
            insert_instruction(vm, write, DIM_F, variable->variable->index);
            insert_instruction(vm, write, CONST_I, 2);
            insert_instruction(vm, write, DIM_I, variable->variable->index);

            // Step
            if (entry_step == NULL) {
                insert_instruction(vm, write, LOAD_F, search_float_constant(1.0)->index);
            } else {
                build_expression_bytecode(vm, write, variable->variable->type, &entry_step);
            }
            insert_bytecode(vm, write, DUP_F);
            insert_instruction(vm, write, CONST_I, 0);
            insert_instruction(vm, write, STORE_F_ARRAY, variable->variable->index);

            // Iterations
            build_expression_bytecode(vm, write, variable->variable->type, &entry);
            insert_bytecode(vm, write, ROT_F);
            insert_instruction(vm, write, LOAD_F, variable->variable->index);
            insert_bytecode(vm, write, SUBTRACT_F);
            insert_bytecode(vm, write, DIVIDE_F);
            insert_bytecode(vm, write, F_TO_I);
            insert_instruction(vm, write, CONST_I, 0);
            insert_instruction(vm, write, STORE_I_ARRAY, variable->variable->index);

            // Push PC
            insert_instruction(vm, write, PUSH_PC, 2);
            insert_instruction(vm, write, CONST_I, 1);  // index
            insert_instruction(vm, write, STORE_I_ARRAY, variable->variable->index);
            break;
        case VAR_TYPE_STRING:
            error("\nPANIC: String variables not supported yet IN FOR");
            exit(1);
    }

    return TRUE;
}

bool process_statement_FN(VM *vm, int write, struct StatementEntry *entry) {
    // Get the name
    const char *name = entry->procfn_name;

    // Any parameters
    entry = entry->next;
    while (entry != NULL) {
        build_expression_bytecode(vm, write, VAR_TYPE_NONE, &entry);
    }

    setup_fn_proc(vm, write, name, FIXUP_PROC);
    return TRUE;
}

bool process_statement_GCOL(VM *vm, int write, struct StatementEntry *entry) {
    build_expression_bytecode(vm, write, VAR_TYPE_INT, &entry);
    build_expression_bytecode(vm, write, VAR_TYPE_INT, &entry);
    insert_instruction(vm, write, SYS, SYS_GCOL);
    return TRUE;
}

bool process_statement_GOSUB(VM *vm, int write, struct StatementEntry *entry) {
    UINT32 line = entry->line_number;

    // Search for this line, if not exact match take previous
    struct Line *l = first_line;
    while (l != NULL && l->number < line) {
        l = l->next;
    }
    if (write && l != NULL) {
        insert_instruction(vm, write, CALL, l->bytecode_position);
    } else {
        insert_instruction(vm, write, CALL, 0);
    }
    return TRUE;
}

bool process_statement_IF(VM *vm, int write, struct StatementEntry *entry, struct Statement *statement) {
    build_expression_bytecode(vm, write, VAR_TYPE_INT, &entry);

    // Do we have an ELSE?
    statement = statement->next;
    while (statement != NULL) {
        if (statement->first_entry != NULL && statement->first_entry->entry_type == STATEMENT_TOKEN && statement->first_entry->token == TOKEN_ELSE) {
            break;
        }
        statement = statement->next;
    }

    // Goto next line (or ELSE) if not true
    if (statement != NULL) {
        if (write) {
            insert_instruction(vm, write, JNE, statement->bytecode_position + 1);
        } else {
            insert_instruction(vm, write, JNE, 0);
        }
    } else {
        struct Line *l = first_line;
        while (l != NULL && l->number <= line_number) {
            l = l->next;
        }
        if (write && l != NULL) {
            insert_instruction(vm, write, JNE, l->bytecode_position);
        } else {
            insert_instruction(vm, write, JNE, 0);
        }
    }

    return TRUE;
}

bool process_statement_LET(VM *vm, int write, struct StatementEntry *entry) {
    struct StatementEntry *variable = entry;
    entry = entry->next;

    // ! bang
    bool storage = FALSE;
    if (entry->entry_type == STATEMENT_BANG) {
        entry = entry->next;
        build_expression_bytecode(vm, write, variable->variable->type, &entry);
        storage = TRUE;
    }
    build_expression_bytecode(vm, write, variable->variable->type, &entry);
    switch (variable->variable->type) {
        case VAR_TYPE_INT:
            if (!storage) {
                insert_instruction(vm, write, STORE_I, variable->variable->index);
            } else {
                insert_instruction(vm, write, STORE_I_STORAGE, variable->variable->index);
            }
            break;
        case VAR_TYPE_FLOAT:
            if (storage) {
                error("\nPANIC: Float variables not supported for DIM storage");
                exit(1);
            }
            insert_instruction(vm, write, STORE_F, variable->variable->index);
            break;
        case VAR_TYPE_STRING:
            if (storage) {
                error("\nPANIC: String variables not supported for DIM storage");
                exit(1);
            }
            insert_instruction(vm, write, STORE_S, variable->variable->index);
            break;
    }
    return TRUE;
}

bool process_statement_MODE(VM *vm, int write, struct StatementEntry *entry) {
    enum EVarType t = build_expression_bytecode(vm, write, VAR_TYPE_NONE, &entry);
    switch (t) {
        case VAR_TYPE_INT:
            insert_instruction(vm, write, SYS, SYS_MODE);
            break;
        case VAR_TYPE_FLOAT:
            insert_bytecode(vm, write, F_TO_I);
            insert_instruction(vm, write, SYS, SYS_MODE);
            break;
        case VAR_TYPE_STRING:
            insert_instruction(vm, write, SYS, SYS_MODE_STRING);
            break;
    }
    return TRUE;
}

bool process_statement_NEXT(VM *vm, int write, struct StatementEntry *entry) {
    struct Variable *variable;
    struct VM_FixUp *fixup_found = NULL;
    if (entry == NULL) {
        // Assume last variable for a FOR
        struct VM_FixUp *fixup = vm->fixup_first;
        while (fixup != NULL) {
            if (fixup->type == FIXUP_FOR && fixup->line_number <= line_number) {
                fixup_found = fixup;
            }
            fixup = fixup->next;
        }

        // Do we have one
        if (fixup_found == NULL) {
            error("\nPANIC: No variable specified for NEXT and can't find one");
            exit(1);
        } else {
            variable = fixup_found->variable;
        }
    } else {
        variable = entry->variable;
        entry = entry->next;

        // Validate we actually have a FOR loop for this variable
        struct VM_FixUp *fixup = vm->fixup_first;
        while (fixup != NULL) {
            if (fixup->variable == variable && fixup->line_number < line_number)
                fixup_found = fixup;
            fixup = fixup->next;
        }

        // Found?
        if (fixup_found == NULL || fixup_found->variable != variable) {
            error("\nPANIC: Variable specified or assumed for NEXT isn't valid");
            exit(1);
        }
    }

    switch (variable->type) {
        case VAR_TYPE_INT: {
            insert_instruction(vm, write, NEXT_I, variable->index);
            break;
        }
        case VAR_TYPE_FLOAT: {
            insert_instruction(vm, write, NEXT_F, variable->index);
            break;
        }
        case VAR_TYPE_STRING:
            error("\nPANIC: String types in NEXT not allowed currently");
            exit(1);
    };

    return TRUE;
}

bool process_statement_PLOT(VM *vm, int write, struct StatementEntry *entry) {
    build_expression_bytecode(vm, write, VAR_TYPE_INT, &entry);
    build_expression_bytecode(vm, write, VAR_TYPE_INT, &entry);
    build_expression_bytecode(vm, write, VAR_TYPE_INT, &entry);
    insert_instruction(vm, write, SYS, SYS_PLOT);
    return TRUE;
}

bool process_statement_PRINT(VM *vm, int write, struct StatementEntry *entry) {
    bool need_new_line = TRUE;
    while (entry != NULL) {
        // Do we have a SPC after this?
        if (entry->entry_type == STATEMENT_TOKEN && entry->token == TOKEN_SPC) {
            entry = entry->next;
            build_expression_bytecode(vm, write, VAR_TYPE_INT, &entry);
            insert_instruction(vm, write, SYS, SYS_SPC);
        }

        // Semi-colon?
        if (entry->entry_type == STATEMENT_SEMICOLON) {
            if (entry->next != NULL) {
            } else {
                need_new_line = FALSE;
            }
            entry = entry->next;
        }
        if (entry != NULL) {
            enum EVarType t = build_expression_bytecode(vm, write, VAR_TYPE_NONE, &entry);
            switch (t) {
                case VAR_TYPE_INT:
                    insert_bytecode(vm, write, PRINT_I);
                    break;
                case VAR_TYPE_FLOAT:
                    insert_bytecode(vm, write, PRINT_F);
                    break;
                case VAR_TYPE_STRING:
                    insert_bytecode(vm, write, PRINT_S);
                    break;
            }
        }
    }
    if (need_new_line) {
        insert_bytecode(vm, write, PRINT_NL);
    }
    return TRUE;
}

bool process_statement_PROC(VM *vm, int write, struct StatementEntry *entry) {
    // Get the name
    const char *name = entry->procfn_name;

    // Any parameters
    entry = entry->next;
    while (entry != NULL) {
        build_expression_bytecode(vm, write, VAR_TYPE_NONE, &entry);
    }

    setup_fn_proc(vm, write, name, FIXUP_PROC);
    return TRUE;
}

bool process_statement_READ(VM *vm, int write, struct StatementEntry *entry) {
    while (entry != NULL) {
        struct StatementEntry *variable = entry;
        entry = entry->next;

        // Comma?
        if (entry != NULL && entry->entry_type == STATEMENT_COMMA) {
            entry = entry->next;
        } else {
            // Expression?
            if (entry != NULL) {
                // Comma?
                build_expression_bytecode(vm, write, VAR_TYPE_INT, &entry);
            }
        }

        // Now read and save value
        bool variable_is_array = variable->entry_type == STATEMENT_VARIABLE_WITH_INDEX;
        insert_bytecode(vm, write, DATA);
        switch (variable->variable->type) {
            case VAR_TYPE_INT:
                insert_bytecode(vm, write, CONV_I);
                if (!variable_is_array) {
                    insert_instruction(vm, write, STORE_I, variable->variable->index);
                } else {
                    insert_instruction(vm, write, STORE_I_ARRAY, variable->variable->index);
                }
                break;
            case VAR_TYPE_FLOAT:
                insert_bytecode(vm, write, CONV_F);
                if (!variable_is_array) {
                    insert_instruction(vm, write, STORE_F, variable->variable->index);
                } else {
                    insert_instruction(vm, write, STORE_F_ARRAY, variable->variable->index);
                }
                break;
            case VAR_TYPE_STRING:
                insert_bytecode(vm, write, CONV_S);
                if (!variable_is_array) {
                    insert_instruction(vm, write, STORE_S, variable->variable->index);
                } else {
                    insert_instruction(vm, write, STORE_S_ARRAY, variable->variable->index);
                }
                break;
        }
    }
    return TRUE;
}

bool process_statement_REPEAT(VM *vm, int write, struct StatementEntry *entry) {
    if (!write)
        build_fixup(vm, FIXUP_REPEAT, entry, NULL);
    //entry = entry->next;
    if (entry != NULL) {
        struct StatementEntry *variable = entry;
        entry = entry->next;
        build_expression_bytecode(vm, write, variable->variable->type, &entry);
        switch (variable->variable->type) {
            case VAR_TYPE_INT:
                insert_instruction(vm, write, STORE_I, variable->variable->index);
                break;
            case VAR_TYPE_FLOAT:
                insert_instruction(vm, write, STORE_F, variable->variable->index);
                break;
            case VAR_TYPE_STRING:
                error("\nPANIC: String variables not supported yet in REPEAT");
                exit(1);
        }
    }
    return TRUE;
}

bool process_statement_RETURN(VM *vm, int write, struct StatementEntry *entry) {
    insert_bytecode(vm, write, RETURN);
    return TRUE;
}

bool process_statement_SYS(VM *vm, int write, struct StatementEntry *entry) {
    // Write SWI string and bytecode
    enum EVarType t = build_expression_bytecode(vm, write, VAR_TYPE_NONE, &entry);

    // Any parameters
    int count = 0;
    while (entry != NULL) {
        if (entry != NULL && entry->entry_type == STATEMENT_TOKEN) {
            break;
        }
        build_expression_bytecode(vm, write, VAR_TYPE_INT, &entry);
        count++;
    }

    // Parameter count
    insert_instruction(vm, write, CONST_I, count);

    // Outputs?
    int output = 0;
    if (entry != NULL && entry->entry_type == STATEMENT_TOKEN) {
        entry = entry->next;
        // These need to be variables
        if (entry->entry_type != STATEMENT_VARIABLE) {
            error("\nPANIC: SYS needs variables for TO parameters");
            exit(1);
        }
        printf("FOUND OUTPUT\n");

        // Another?
        entry = entry->next;

        output++;
    }

    // Output count
    insert_instruction(vm, write, CONST_I, output);

    // And finally the SYS call
    switch (t) {
        case VAR_TYPE_INT:
            insert_instruction(vm, write, SYS, SYS_SYS);
            break;
        case VAR_TYPE_FLOAT:
            insert_bytecode(vm, write, F_TO_I);
            insert_instruction(vm, write, SYS, SYS_SYS);
            break;
        case VAR_TYPE_STRING:
            insert_instruction(vm, write, SYS, SYS_SYS);
            break;
    }
    return TRUE;
}

bool process_statement_UNTIL(VM *vm, int write, struct StatementEntry *entry) {
    // Find the last repeat loop
    struct VM_FixUp *fixup = vm->fixup_first;
    struct VM_FixUp *fixup_found = NULL;
    while (fixup != NULL) {
        if (fixup->type == FIXUP_REPEAT && fixup->line_number <= line_number) {
            fixup_found = fixup;
        }
        fixup = fixup->next;
    }

    // Found?
    if (fixup_found == NULL) {
        error("\nPANIC: No REPEAT found for UNTIL");
        exit(1);
    }

    // Check the result of the expression
    build_expression_bytecode(vm, write, VAR_TYPE_INT, &entry);
    insert_instruction(vm, write, JNE, fixup_found->bytecode_position);
    return TRUE;
}

bool process_statement_VDU(VM *vm, int write, struct StatementEntry *entry) {
    insert_instruction(vm, write, SYS, SYS_VDU);
    while (entry != NULL) {
        build_expression_bytecode(vm, write, VAR_TYPE_INT, &entry);

        // Do we have a semicolon here?
        if (entry->entry_type == STATEMENT_SEMICOLON) {
            insert_instruction(vm, write, SYS, SYS_VDU_WORD);
            entry = entry->next;
        } else {
            insert_instruction(vm, write, SYS, SYS_VDU_BYTE);
        }
    }
    return TRUE;
}