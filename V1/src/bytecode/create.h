#ifndef __BYTECODE_CREATE_H
#define __BYTECODE_CREATE_H

#include "parser.h"
#include "vm.h"

//#define BYTECODE_DEBUG

#define VARIABLE_NONE 0
#define VARIABLE_LOAD 1
#define VARIABLE_STORE 2

extern int statement_index;
extern UINT32 line_number;

void error(const char *error);
void error_token(const char *token, const char *error);
VM *build_bytecode();
enum EVarType build_expression_bytecode(VM *vm, int write, enum EVarType out, struct StatementEntry **entry);
enum EVarType type_conversion(VM *vm, int write, enum EVarType in, enum EVarType out);
void build_fixup_FNPROC(VM *vm, enum EFixUpType type, struct StatementEntry *entry, struct Variable **variable_list, bool *variables_are_return, UINT32 variable_count, char *name);
void build_fixup(VM *vm, enum EFixUpType type, struct StatementEntry *entry, struct Variable *variable);
void build_data(VM *vm, UINT32 pc, struct StatementEntry *entry);
void push_type_onto_stack(VM *vm, int write, enum EVarType t);
void setup_fn_proc(VM *vm, int write, const char *name, enum EFixUpType ft);
struct Variable *search_int_constant(VM_INT vi);
struct Variable *search_float_constant(VM_FLOAT vf);

// Tokens
bool process_statement_starcommand(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_DATA(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_DEF(VM *vm, int write, struct StatementEntry *entry, bool PRE);
bool process_statement_DIM(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_ELSE(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_END(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_ENDPROC(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_FOR(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_FN(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_GCOL(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_GOSUB(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_IF(VM *vm, int write, struct StatementEntry *entry, struct Statement *statement);
bool process_statement_READ(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_LET(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_MODE(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_NEXT(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_PLOT(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_PRINT(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_PROC(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_REPEAT(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_RETURN(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_SYS(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_UNTIL(VM *vm, int write, struct StatementEntry *entry);
bool process_statement_VDU(VM *vm, int write, struct StatementEntry *entry);

// create_bytecode
void insert_instruction(VM *vm, int write, BYTE bytecode, UINT32 operand);
void insert_bytecode(VM *vm, int write, BYTE bytecode);

#endif