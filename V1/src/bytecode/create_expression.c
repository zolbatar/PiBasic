#include <stdlib.h>
#include <string.h>

#include "create.h"
#include "output.h"

#define EXPRESSION_TYPE_STACK 128
enum EVarType expression_stack[EXPRESSION_TYPE_STACK];
int expression_index = 0;

void dump_expression_stack(int expression_index) {
    printf("\n\nExpression stack\n");
    printf("----------------\n");
    for (int i = expression_index - 1; i >= 0; i--) {
        switch (expression_stack[i]) {
            case VAR_TYPE_INT:
                printf("Index: %d, INT\n", i);
                break;
            case VAR_TYPE_FLOAT:
                printf("Index: %d, FLOAT\n", i);
                break;
            case VAR_TYPE_STRING:
                printf("Index: %d, STRING\n", i);
                break;
        }
    }
}

void setup_fn_proc(VM *vm, int write, const char *name, enum EFixUpType ft) {
    // We need to find the fixup for this
    struct VM_FixUp *fixup = vm->fixup_first;
    struct VM_FixUp *found = NULL;
    while (fixup != NULL) {
        if (fixup->type == ft) {
            if (strcmp(name, fixup->proc_or_fn) == 0) {
                found = fixup;
                break;
            }
        }
        fixup = fixup->next;
    }
    if (found == NULL) {
        printf("\nPANIC: Can't find FN%s or PROC%s at line number %d (statement %d)\n", name, name, line_number, statement_index);
        exit(1);
    }

    // Check parameters, and create boxed types
    if (found->variable_count > 0) {
        for (int i = 0; i < found->variable_count; i++) {
            // Does the expression stack match this?
            enum EVarType est = expression_stack[expression_index - 1];
            struct Variable *var = found->variable_list[i];
            if (var->type != est) {
                type_conversion(vm, write, expression_stack[expression_index - 1], var->type);
            }
            switch (var->type) {
                case VAR_TYPE_INT:
                    insert_bytecode(vm, write, PAR_I);
                    break;
                case VAR_TYPE_FLOAT:
                    insert_bytecode(vm, write, PAR_F);
                    break;
                case VAR_TYPE_STRING:
                    insert_bytecode(vm, write, PAR_S);
                    break;
                default:
                    printf("\nPANIC at line number %d (statement %d)\n", line_number, statement_index);
            }
            expression_index--;
        }
    }
    insert_instruction(vm, write, CALL, found->bytecode_position);
}

struct Variable *search_int_constant(VM_INT vi) {
    struct Variable *v = variables;
    while (v != NULL) {
        if (v->constant) {
            if (v->type == VAR_TYPE_INT && v->value_int == vi) {
                return v;
            }
        }
        v = v->next;
    }
    printf("\nPANIC searching for constant %d at line number %d (statement %d)\n", vi, line_number, statement_index);
    exit(1);
}

struct Variable *search_float_constant(VM_FLOAT vf) {
    struct Variable *v = variables;
    while (v != NULL) {
        if (v->constant) {
            if (v->type == VAR_TYPE_FLOAT && v->value_float == vf) {
                return v;
            }
        }
        v = v->next;
    }
    printf("\nPANIC searching for constant %f at line number %d (statement %d)\n", vf, line_number, statement_index);
    exit(1);
}

void push_type_onto_stack(VM *vm, int write, enum EVarType t) {
    insert_instruction(vm, write, CONST_I, t);
}

enum EVarType change_to_floats(VM *vm, int write) {
    if (expression_index < 2) {
        printf("\nPANIC: Expression stack needs >=2 values for operators at line number %d (statement %d)\n", line_number, statement_index);
        exit(1);
    }

    // Check highest level required
    enum EVarType t1 = expression_stack[expression_index - 1];
    enum EVarType t2 = expression_stack[expression_index - 2];

    // Do we need to change types?
    if ((t1 == t2) && t1 == VAR_TYPE_FLOAT) {
    } else if (t1 == VAR_TYPE_INT && t2 == VAR_TYPE_FLOAT) {
        insert_bytecode(vm, write, I_TO_F);
    } else if (t1 == VAR_TYPE_FLOAT && t2 == VAR_TYPE_INT) {
        insert_bytecode(vm, write, I_TO_F);
        insert_bytecode(vm, write, ROT_F);
    } else {
        insert_bytecode(vm, write, I_TO_F);
        insert_bytecode(vm, write, I_TO_F);
        insert_bytecode(vm, write, ROT_F);
    }

    expression_stack[expression_index - 1] = VAR_TYPE_FLOAT;
    expression_stack[expression_index - 1] = VAR_TYPE_FLOAT;
    return VAR_TYPE_FLOAT;
}

enum EVarType change_to_ints(VM *vm, int write) {
    if (expression_index < 2) {
        printf("\nPANIC: Expression stack needs >=2 values for operators at line number %d (statement %d)\n", line_number, statement_index);
        exit(1);
    }

    // Check highest level required
    enum EVarType t1 = expression_stack[expression_index - 1];
    enum EVarType t2 = expression_stack[expression_index - 2];

    // Do we need to change types?
    if ((t1 == t2) && t1 == VAR_TYPE_INT) {
    } else if (t1 == VAR_TYPE_FLOAT && t2 == VAR_TYPE_INT) {
        insert_bytecode(vm, write, F_TO_I);
    } else if (t1 == VAR_TYPE_INT && t2 == VAR_TYPE_FLOAT) {
        insert_bytecode(vm, write, F_TO_I);
        insert_bytecode(vm, write, ROT_I);
    } else {
        insert_bytecode(vm, write, F_TO_I);
        insert_bytecode(vm, write, F_TO_I);
        insert_bytecode(vm, write, ROT_I);
    }

    expression_stack[expression_index - 1] = VAR_TYPE_INT;
    expression_stack[expression_index - 1] = VAR_TYPE_INT;
    return VAR_TYPE_INT;
}

enum EVarType match_types(VM *vm, int write) {
    if (expression_index < 2) {
        printf("\nPANIC: Expression stack needs >=2 values for operators at line number %d (statement %d)\n", line_number, statement_index);
        exit(1);
    }

    // Check highest level required
    enum EVarType t1 = expression_stack[expression_index - 1];
    enum EVarType t2 = expression_stack[expression_index - 2];
    enum EVarType t = t1;

    if (t2 > t) t = t2;

    // Do we need to change types?
    if (t1 == t2) {
        return t;
    } else if (t1 != t && t1 == VAR_TYPE_INT && t == VAR_TYPE_FLOAT) {
        insert_bytecode(vm, write, I_TO_F);
        expression_stack[expression_index - 1] = t;
        return t;
    } else if (t2 != t && t2 == VAR_TYPE_INT && t == VAR_TYPE_FLOAT) {
        insert_bytecode(vm, write, I_TO_F);
        insert_bytecode(vm, write, ROT_F);
        expression_stack[expression_index - 2] = t;
        return t;
    } else {
        dump_expression_stack(expression_index);
        printf("PANIC: Unsupported type matching, types %d and %d\n", t1, t2);
        exit(1);
    }
}

enum EVarType build_expression_bytecode(VM *vm, int write, enum EVarType out, struct StatementEntry **entry) {
    // Skip over expression start marker
    (*entry) = (*entry)->next;

    // Stack for types, so we can do conversion
    expression_index = 0;

    // Now loop until we hit the end marker
    struct Variable *variable_saved = NULL;
    int depth = 1;
    bool done = FALSE;
    while (!done) {
        struct StatementEntry *e = *entry;
        if (e == NULL) {
            printf("\nPANIC: Unexpected empty expression at line number %d (statement %d)\n", line_number, statement_index);
            exit(1);
        }
        struct Variable *variable = e->variable;
        switch (e->entry_type) {
            case STATEMENT_OPERAND: {
                switch (e->variable->type) {
                    case VAR_TYPE_INT:
                        insert_instruction(vm, write, LOAD_I, variable->index);
                        expression_stack[expression_index++] = VAR_TYPE_INT;
                        break;
                    case VAR_TYPE_FLOAT:
                        insert_instruction(vm, write, LOAD_F, variable->index);
                        expression_stack[expression_index++] = VAR_TYPE_FLOAT;
                        break;
                    case VAR_TYPE_STRING:
                        insert_instruction(vm, write, LOAD_S, variable->index);
                        expression_stack[expression_index++] = VAR_TYPE_STRING;
                        break;
                }
                break;
            }
            case STATEMENT_VARIABLE: {
                switch (variable->type) {
                    case VAR_TYPE_INT:
                        insert_instruction(vm, write, LOAD_I, variable->index);
                        expression_stack[expression_index++] = VAR_TYPE_INT;
                        break;
                    case VAR_TYPE_FLOAT:
                        insert_instruction(vm, write, LOAD_F, variable->index);
                        expression_stack[expression_index++] = VAR_TYPE_FLOAT;
                        break;
                    case VAR_TYPE_STRING:
                        insert_instruction(vm, write, LOAD_S, variable->index);
                        expression_stack[expression_index++] = VAR_TYPE_STRING;
                        break;
                }
                break;
            }
            case STATEMENT_VARIABLE_WITH_INDEX: {
                struct Variable *variable = e->variable;
                variable_saved = variable;
                break;
            }
            case STATEMENT_TICK:
                insert_bytecode(vm, write, PRINT_NL);
                break;
            case STATEMENT_TILDE:
                insert_bytecode(vm, write, PRINT_HEX);
                break;
            case STATEMENT_TOKEN:
                switch (e->token) {
                    case TOKEN_TIME:
                        insert_instruction(vm, write, SYS, SYS_TIME);
                        expression_stack[expression_index++] = VAR_TYPE_INT;
                        break;
                    case TOKEN_INT: {
                        type_conversion(vm, write, expression_stack[expression_index - 1], VAR_TYPE_INT);
                        expression_index--;
                        expression_stack[expression_index++] = VAR_TYPE_INT;
                        break;
                    }
                    case TOKEN_MOD: {
                        enum EVarType t = match_types(vm, write);
                        switch (t) {
                            case VAR_TYPE_FLOAT:
                                insert_bytecode(vm, write, MOD_F);
                                break;
                            case VAR_TYPE_INT:
                                insert_bytecode(vm, write, MOD_I);
                                break;
                            case VAR_TYPE_STRING:
                                printf("\nPANIC: MOD needs a number at line number %d (statement %d)\n", line_number, statement_index);
                                exit(1);
                        }
                        expression_index -= 2;
                        expression_stack[expression_index++] = VAR_TYPE_INT;
                        break;
                    }
                    case TOKEN_DIV: {
                        enum EVarType t = match_types(vm, write);
                        switch (t) {
                            case VAR_TYPE_FLOAT:
                                insert_bytecode(vm, write, DIV_F);
                                break;
                            case VAR_TYPE_INT:
                                insert_bytecode(vm, write, DIV_I);
                                break;
                            case VAR_TYPE_STRING:
                                printf("\nPANIC: DIV needs a number at line number %d (statement %d)\n", line_number, statement_index);
                                exit(1);
                        }
                        expression_index -= 2;
                        expression_stack[expression_index++] = VAR_TYPE_INT;
                        break;
                    }
                    case TOKEN_SQR: {
                        type_conversion(vm, write, expression_stack[expression_index - 1], VAR_TYPE_FLOAT);
                        insert_bytecode(vm, write, SQR);
                        break;
                    }
                    case TOKEN_STR: {
                        switch (expression_stack[expression_index - 1]) {
                            case VAR_TYPE_INT:
                                insert_bytecode(vm, write, I_TO_S);
                                break;
                            case VAR_TYPE_FLOAT:
                                insert_bytecode(vm, write, F_TO_S);
                                break;
                            case VAR_TYPE_STRING:
                                break;
                        }
                        expression_index--;
                        expression_stack[expression_index++] = VAR_TYPE_STRING;
                        break;
                    }
                    case TOKEN_CHR: {
                        switch (expression_stack[expression_index - 1]) {
                            case VAR_TYPE_FLOAT:
                                insert_bytecode(vm, write, F_TO_I);
                                break;
                            case VAR_TYPE_INT:
                                break;
                            case VAR_TYPE_STRING:
                                printf("\nPANIC: CHR$ needs a number at line number %d (statement %d)\n", line_number, statement_index);
                                exit(1);
                        }
                        expression_index--;
                        insert_bytecode(vm, write, CHRS);
                        expression_stack[expression_index++] = VAR_TYPE_STRING;
                        break;
                    }
                    case TOKEN_LN: {
                        type_conversion(vm, write, expression_stack[expression_index - 1], VAR_TYPE_FLOAT);
                        insert_bytecode(vm, write, LN);
                        expression_index--;
                        expression_stack[expression_index++] = VAR_TYPE_FLOAT;
                        break;
                    }
                    case TOKEN_EXP: {
                        type_conversion(vm, write, expression_stack[expression_index - 1], VAR_TYPE_FLOAT);
                        insert_bytecode(vm, write, EXP);
                        expression_index--;
                        expression_stack[expression_index++] = VAR_TYPE_FLOAT;
                        break;
                    }
                    case TOKEN_TAN: {
                        type_conversion(vm, write, expression_stack[expression_index - 1], VAR_TYPE_FLOAT);
                        insert_bytecode(vm, write, TAN);
                        expression_index--;
                        expression_stack[expression_index++] = VAR_TYPE_FLOAT;
                        break;
                    }
                    case TOKEN_COS: {
                        type_conversion(vm, write, expression_stack[expression_index - 1], VAR_TYPE_FLOAT);
                        insert_bytecode(vm, write, COS);
                        expression_index--;
                        expression_stack[expression_index++] = VAR_TYPE_FLOAT;
                        break;
                    }
                    case TOKEN_ATN: {
                        type_conversion(vm, write, expression_stack[expression_index - 1], VAR_TYPE_FLOAT);
                        insert_bytecode(vm, write, ATN);
                        expression_index--;
                        expression_stack[expression_index++] = VAR_TYPE_FLOAT;
                        break;
                    }
                    case TOKEN_ABS: {
                        switch (expression_stack[expression_index - 1]) {
                            case VAR_TYPE_INT:
                                insert_bytecode(vm, write, ABS_I);
                                break;
                            case VAR_TYPE_FLOAT:
                                insert_bytecode(vm, write, ABS_F);
                                break;
                            case VAR_TYPE_STRING:
                                printf("PANIC: Can't do ABS on a string\n");
                                break;
                        }
                        break;
                    }
                    case TOKEN_RND: {
                        insert_bytecode(vm, write, RND);
                        expression_stack[expression_index++] = VAR_TYPE_INT;
                        break;
                    }
                    case TOKEN_FN: {
                        (*entry) = (*entry)->next;
                        const char *name = (*entry)->procfn_name;
                        setup_fn_proc(vm, write, name, FIXUP_FN);

                        // Now to convert return type
                        if (strstr(name, "%") != NULL) {
                            expression_stack[expression_index++] = VAR_TYPE_INT;
                        } else if (strstr(name, "$") != NULL) {
                            expression_stack[expression_index++] = VAR_TYPE_STRING;
                        } else {
                            expression_stack[expression_index++] = VAR_TYPE_FLOAT;
                        }
                        break;
                    }
                    case TOKEN_LEN:
                        if (expression_stack[expression_index - 1] != VAR_TYPE_STRING) {
                            dump_expression_stack(expression_index);
                            printf("\nPANIC: LEN needs a string at line number %d (statement %d)\n", line_number, statement_index);
                            exit(1);
                        }
                        expression_index--;
                        expression_stack[expression_index++] = VAR_TYPE_INT;
                        insert_bytecode(vm, write, LEN);
                        break;
                    case TOKEN_MID_S_P:
                        if (expression_index < 3 || !(expression_stack[expression_index - 1] != VAR_TYPE_STRING && expression_stack[expression_index - 2] != VAR_TYPE_STRING && expression_stack[expression_index - 3] == VAR_TYPE_STRING)) {
                            dump_expression_stack(expression_index);
                            printf("\nPANIC: MID$ needs a (STRING,NUMBER,NUMBER) at line number %d (statement %d)\n", line_number, statement_index);
                            exit(1);
                        }
                        change_to_ints(vm, write);
                        expression_index -= 2;
                        insert_bytecode(vm, write, MIDS);
                        break;
                    case TOKEN_LEFT_S_P:
                        if (expression_index < 2 || !(expression_stack[expression_index - 1] != VAR_TYPE_STRING && expression_stack[expression_index - 2] == VAR_TYPE_STRING)) {
                            dump_expression_stack(expression_index);
                            printf("\nPANIC: LEFT$ needs a (STRING,NUMBER) at line number %d (statement %d)\n", line_number, statement_index);
                            exit(1);
                        }
                        type_conversion(vm, write, expression_stack[expression_index - 1], VAR_TYPE_INT);
                        expression_index--;
                        insert_bytecode(vm, write, LEFTS);
                        break;
                    case TOKEN_RIGHT_S_P:
                        if (expression_index < 2 || !(expression_stack[expression_index - 1] != VAR_TYPE_STRING && expression_stack[expression_index - 2] == VAR_TYPE_STRING)) {
                            dump_expression_stack(expression_index);
                            printf("\nPANIC: RIGHT$ needs a (STRING,NUMBER) at line number %d (statement %d)\n", line_number, statement_index);
                            exit(1);
                        }
                        type_conversion(vm, write, expression_stack[expression_index - 1], VAR_TYPE_INT);
                        expression_index--;
                        insert_bytecode(vm, write, RIGHTS);
                        break;
                    case TOKEN_STRINGS:
                        if (expression_index < 2 || !(expression_stack[expression_index - 1] == VAR_TYPE_STRING && expression_stack[expression_index - 2] != VAR_TYPE_STRING)) {
                            dump_expression_stack(expression_index);
                            printf("\nPANIC: STRING$ needs a (NUMBER,STRING) at line number %d (statement %d)\n", line_number, statement_index);
                            exit(1);
                        }
                        type_conversion(vm, write, expression_stack[expression_index - 2], VAR_TYPE_INT);
                        expression_index -= 2;
                        expression_stack[expression_index++] = VAR_TYPE_STRING;
                        insert_bytecode(vm, write, STRINGS);
                        break;
                    default:
                        printf("\nPANIC: Unsupported token %d in expression at line number %d (statement %d)\n", e->token, line_number, statement_index);
                        exit(1);
                }
                break;
            case STATEMENT_OPERATOR: {
                enum EVarType t = match_types(vm, write);
                switch (e->operator_type) {
                    case OPERATOR_DIVIDE: {
                        if (expression_index < 2 || expression_stack[expression_index - 1] == VAR_TYPE_STRING || expression_stack[expression_index - 2] == VAR_TYPE_STRING) {
                            printf("PANIC: Unsupported operator divide on string at line number %d (statement %d)\n", line_number, statement_index);
                            exit(1);
                        }

                        // This is a special case, we want to make sure both operands are floats
                        t = change_to_floats(vm, write);
                        insert_bytecode(vm, write, DIVIDE_F);
                        break;
                    }
                    case OPERATOR_MULTIPLY: {
                        switch (t) {
                            case VAR_TYPE_FLOAT:
                                insert_bytecode(vm, write, MULTIPLY_F);
                                break;
                            case VAR_TYPE_INT:
                                insert_bytecode(vm, write, MULTIPLY_I);
                                break;
                            default:
                                dump_expression_stack(expression_index);
                                printf("PANIC: Unsupported OPERATOR_MULTIPLY at line number %d (statement %d)\n", line_number, statement_index);
                                exit(1);
                        }
                        break;
                    }
                    case OPERATOR_ADD: {
                        switch (t) {
                            case VAR_TYPE_FLOAT:
                                insert_bytecode(vm, write, ADD_F);
                                break;
                            case VAR_TYPE_INT:
                                insert_bytecode(vm, write, ADD_I);
                                break;
                            case VAR_TYPE_STRING:
                                insert_bytecode(vm, write, ADD_S);
                                break;
                            default:
                                dump_expression_stack(expression_index);
                                printf("PANIC: Unsupported OPERATOR_ADD at line number %d (statement %d)\n", line_number, statement_index);
                                exit(1);
                        }
                        break;
                    }
                    case OPERATOR_SUBTRACT: {
                        switch (t) {
                            case VAR_TYPE_FLOAT:
                                insert_bytecode(vm, write, SUBTRACT_F);
                                break;
                            case VAR_TYPE_INT:
                                insert_bytecode(vm, write, SUBTRACT_I);
                                break;
                            default:
                                dump_expression_stack(expression_index);
                                printf("PANIC: Unsupported OPERATOR_SUBTRACT at line number %d (statement %d)\n", line_number, statement_index);
                                exit(1);
                        }
                        break;
                    }
                    case OPERATOR_EQUAL: {
                        switch (t) {
                            case VAR_TYPE_FLOAT:
                                insert_bytecode(vm, write, CMP_E_F);
                                break;
                            case VAR_TYPE_INT:
                                insert_bytecode(vm, write, CMP_E_I);
                                break;
                            case VAR_TYPE_STRING:
                                insert_bytecode(vm, write, CMP_E_S);
                                break;
                        }
                        break;
                    }
                    case OPERATOR_NOTEQUAL: {
                        switch (t) {
                            case VAR_TYPE_FLOAT:
                                insert_bytecode(vm, write, CMP_NE_F);
                                break;
                            case VAR_TYPE_INT:
                                insert_bytecode(vm, write, CMP_NE_I);
                                break;
                            case VAR_TYPE_STRING:
                                insert_bytecode(vm, write, CMP_NE_S);
                                break;
                        }
                        break;
                    }
                    case OPERATOR_GREATER: {
                        switch (t) {
                            case VAR_TYPE_FLOAT:
                                insert_bytecode(vm, write, CMP_G_F);
                                break;
                            case VAR_TYPE_INT:
                                insert_bytecode(vm, write, CMP_G_I);
                                break;
                            default:
                                dump_expression_stack(expression_index);
                                printf("PANIC: Unsupported OPERATOR_GREATER at line number %d (statement %d)\n", line_number, statement_index);
                                exit(1);
                        }
                        break;
                    }
                    case OPERATOR_LESS: {
                        switch (t) {
                            case VAR_TYPE_FLOAT:
                                insert_bytecode(vm, write, CMP_L_F);
                                break;
                            case VAR_TYPE_INT:
                                insert_bytecode(vm, write, CMP_L_I);
                                break;
                            default:
                                dump_expression_stack(expression_index);
                                printf("PANIC: Unsupported OPERATOR_LESS at line number %d (statement %d)\n", line_number, statement_index);
                                exit(1);
                        }
                        break;
                    }
                    case OPERATOR_GEQUAL: {
                        switch (t) {
                            case VAR_TYPE_FLOAT:
                                insert_bytecode(vm, write, CMP_GE_F);
                                break;
                            case VAR_TYPE_INT:
                                insert_bytecode(vm, write, CMP_GE_I);
                                break;
                            default:
                                dump_expression_stack(expression_index);
                                printf("PANIC: Unsupported OPERATOR_GEQUAL at line number %d (statement %d)\n", line_number, statement_index);
                                exit(1);
                        }
                        break;
                    }
                    case OPERATOR_OR: {
                        switch (t) {
                            case VAR_TYPE_FLOAT:
                                insert_bytecode(vm, write, OR_F);
                                break;
                            case VAR_TYPE_INT:
                                insert_bytecode(vm, write, OR_I);
                                break;
                            default:
                                dump_expression_stack(expression_index);
                                printf("PANIC: Unsupported OPERATOR_OR at line number %d (statement %d)\n", line_number, statement_index);
                                exit(1);
                        }
                        break;
                    }
                    default:
                        printf("\nPANIC: Unsupported operator %d in expression at line number %d (statement %d)\n", e->operator_type, line_number, statement_index);
                        exit(1);
                }

                // Now set the expression stack
                switch (e->operator_type) {
                    default:
                        switch (t) {
                            case VAR_TYPE_FLOAT:
                                expression_index -= 2;
                                expression_stack[expression_index++] = VAR_TYPE_FLOAT;
                                break;
                            case VAR_TYPE_INT:
                                expression_index -= 2;
                                expression_stack[expression_index++] = VAR_TYPE_INT;
                                break;
                            case VAR_TYPE_STRING:
                                expression_index -= 2;
                                expression_stack[expression_index++] = VAR_TYPE_STRING;
                                break;
                            default:
                                dump_expression_stack(expression_index);
                                printf("PANIC: Unsupported operator type %d at line number %d (statement %d)\n", t, line_number, statement_index);
                                exit(1);
                        }
                        break;
                    case OPERATOR_LESS:
                    case OPERATOR_GREATER:
                    case OPERATOR_EQUAL:
                    case OPERATOR_NOTEQUAL:
                    case OPERATOR_GEQUAL:
                    case OPERATOR_OR:
                        expression_index -= 2;
                        expression_stack[expression_index++] = VAR_TYPE_INT;
                        break;
                }
                break;
            }
            case STATEMENT_EXPRESSION_START:
                // Implicit, ignore
                depth++;
                break;
            case STATEMENT_EXPRESSION_END: {
                depth--;
                if (variable_saved != NULL && depth > 0) {
                    // Index needs to be an int
                    type_conversion(vm, write, expression_stack[expression_index - 1], VAR_TYPE_INT);
                    switch (variable_saved->type) {
                        case VAR_TYPE_INT:
                            insert_instruction(vm, write, LOAD_I_ARRAY, variable_saved->index);
                            expression_index--;
                            expression_stack[expression_index++] = VAR_TYPE_INT;
                            break;
                        case VAR_TYPE_FLOAT:
                            insert_instruction(vm, write, LOAD_F_ARRAY, variable_saved->index);
                            expression_index--;
                            expression_stack[expression_index++] = VAR_TYPE_FLOAT;
                            break;
                        default:
                            break;
                    }
                }
                if (depth == 0)
                    done = TRUE;
                break;
            }
            case STATEMENT_COMMA:
                done = TRUE;
                break;
            default:
                printf("\nPANIC: Unsupported entry type %d in expression at line number %d (statement %d)\n", e->entry_type, line_number, statement_index);
                exit(1);
        }
        if (!done)
            (*entry) = (*entry)->next;
    }

    // Skip over expression end marker
    (*entry) = (*entry)->next;

    // We should have a single thing on the stack, the final value
/*    if (write && expression_index != 1) {
        printf("\nPANIC: Expression stack has %d values at line number %d (statement %d)\n", expression_index, line_number, statement_index);
        exit(1);
    }*/

    // Type conversion
    if (out != VAR_TYPE_NONE) {
        type_conversion(vm, write, expression_stack[0], out);
    }
    return expression_stack[0];
}

enum EVarType type_conversion(VM *vm, int write, enum EVarType in, enum EVarType out) {
    if (expression_index == 0)
        return out;

    // Do we need to convert?
    switch (out) {
        case VAR_TYPE_INT: {
            switch (in) {
                case VAR_TYPE_INT:
                    return in;
                case VAR_TYPE_FLOAT:
                    insert_bytecode(vm, write, F_TO_I);
                    return out;
                case VAR_TYPE_STRING:
                    dump_expression_stack(expression_index);
                    printf("\nPANIC: Can't convert things to STRING from INT yet at line number %d (statement %d)\n", line_number, statement_index);
                    exit(1);
            }
            break;
        }
        case VAR_TYPE_FLOAT: {
            switch (in) {
                case VAR_TYPE_INT:
                    insert_bytecode(vm, write, I_TO_F);
                    return out;
                case VAR_TYPE_FLOAT:
                    return in;
                case VAR_TYPE_STRING:
                    dump_expression_stack(expression_index);
                    printf("\nPANIC: Can't convert things to STRING from FLOAT yet at line number %d (statement %d)n", line_number, statement_index);
                    exit(1);
            }
            break;
        }
        case VAR_TYPE_STRING:
            switch (in) {
                case VAR_TYPE_INT:
                case VAR_TYPE_FLOAT:
                    dump_expression_stack(expression_index);
                    printf("\nTYPE MISMATCH: Can't convert INT/FLOAT to STRING at line number %d (statement %d)n", line_number, statement_index);
                    exit(1);
                case VAR_TYPE_STRING:
                    return in;
            }
            break;
    }
    return in;
}

void build_fixup_FNPROC(VM *vm, enum EFixUpType type, struct StatementEntry *entry, struct Variable **variable_list, bool *variables_are_return, UINT32 variable_count, char *name) {
    struct VM_FixUp *fixup = malloc(sizeof(struct VM_FixUp));
    fixup->next = NULL;
    fixup->variable_list = variable_list;
    fixup->variable_count = variable_count;
    fixup->variables_are_return = variables_are_return;
    fixup->type = type;
    fixup->bytecode_position = vm->pc;
    fixup->entry = entry;
    fixup->line_number = line_number;
    fixup->proc_or_fn = name;
    if (vm->fixup_first == NULL) {
        vm->fixup_first = fixup;
    } else {
        // Let's find the last one in the chain
        struct VM_FixUp *last = vm->fixup_first;
        while (last->next != NULL) last = last->next;
        last->next = fixup;
    }
}

void build_fixup(VM *vm, enum EFixUpType type, struct StatementEntry *entry, struct Variable *variable) {
    struct VM_FixUp *fixup = malloc(sizeof(struct VM_FixUp));
    fixup->next = NULL;
    fixup->type = type;
    fixup->variable_list = NULL;
    fixup->bytecode_position = vm->pc;
    fixup->entry = entry;
    fixup->variable = variable;
    fixup->line_number = line_number;
    fixup->proc_or_fn = NULL;
    fixup->variables_are_return = FALSE;
    if (vm->fixup_first == NULL) {
        vm->fixup_first = fixup;
    } else {
        // Let's find the last one in the chain
        struct VM_FixUp *last = vm->fixup_first;
        while (last->next != NULL) last = last->next;
        last->next = fixup;
    }
}

void build_data(VM *vm, UINT32 pc, struct StatementEntry *entry) {
    struct VM_FixUp *fixup = malloc(sizeof(struct VM_FixUp));
    fixup->proc_or_fn = NULL;
    fixup->variable = NULL;
    fixup->variable_list = NULL;
    fixup->next = NULL;
    fixup->type = FIXUP_DATA;
    fixup->bytecode_position = pc;
    fixup->entry = entry;
    fixup->proc_or_fn = NULL;
    fixup->variables_are_return = FALSE;
    if (vm->fixup_first == NULL) {
        vm->fixup_first = fixup;
    } else {
        // Let's find the last one in the chain
        struct VM_FixUp *last = vm->fixup_first;
        while (last->next != NULL) last = last->next;
        last->next = fixup;
    }
}