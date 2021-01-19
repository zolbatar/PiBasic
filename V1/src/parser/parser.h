#ifndef __PARSER_H
#define __PARSER_H
#include <stdio.h>

#include "pibasic.h"
#include "tokens.h"

//#define PARSE_DEBUG
//#define PARSE_DEBUG_VERBOSE

enum EState {
    STATE_NONE,
    STATE_VARIABLE,
    STATE_OPERAND,
    STATE_OPERATOR,
    STATE_STRING,
    STATE_IGNORE,
    STATE_STARCOMMAND,
    STATE_LINENUMBER,
    NUM_STATES,
    STATE_STOP,
};

enum EStatement {
    STATEMENT_NONE,
    STATEMENT_VARIABLE,
    STATEMENT_VARIABLE_WITH_STORAGE,
    STATEMENT_VARIABLE_WITH_INDEX,
    STATEMENT_OPERAND,
    STATEMENT_OPERATOR,
    STATEMENT_TOKEN,
    STATEMENT_TOKENSTMT,
    STATEMENT_STARCOMMAND,
    STATEMENT_PROC_OR_FN,
    STATEMENT_COMMA,
    STATEMENT_OPEN_PARENS,
    STATEMENT_CLOSE_PARENS,
    STATEMENT_SEMICOLON,
    STATEMENT_LINENUMBER,
    STATEMENT_TICK,
    STATEMENT_EXPRESSION_START,
    STATEMENT_EXPRESSION_END,  // 16
    STATEMENT_BANG,
    STATEMENT_TILDE,
};

enum EOperand {
    OPERAND_LITERAL_INT,
    OPERAND_LITERAL_FLOAT,
    OPERAND_LITERAL_STRING,
};

enum EOperator {
    OPERATOR_NONE,
    OPERATOR_DIVIDE,
    OPERATOR_MULTIPLY,
    OPERATOR_ADD,
    OPERATOR_SUBTRACT,
    OPERATOR_NOTEQUAL,  //5
    OPERATOR_EQUAL,
    OPERATOR_GEQUAL,
    OPERATOR_LEQUAL,
    OPERATOR_GREATER,
    OPERATOR_LESS,  // 10
    OPERATOR_AND,
    OPERATOR_OR,
    OPERATOR_EOR,
    OPERATOR_HAT,

    OPERATOR_ADD_EQUAL,
    OPERATOR_SUBTRACT_EQUAL,
    OPERATOR_MULTIPLY_EQUAL,
    OPERATOR_DIVIDE_EQUAL,
};

#include "parser-structs.h"

extern int remaining;
extern char search_string[MAX_VARIABLE_LENGTH];
extern int search_pos;
extern struct Variable *variables;
extern struct Line *first_line;
extern struct Line *lines;
extern int statement_index;
extern int statement_entry_index;
extern UINT32 line_number;
extern char source[];
extern int source_index;
extern UINT32 variable_index;
extern UINT32 fn_proc_index;
extern bool in_fn_or_proc;

void free_parser();
void free_statement_entry(struct StatementEntry *entry);
void parser(unsigned char *, UINT32 length, UINT32 last_line);
int process_none(BYTE *code, UINT32 length, UINT32 *pos, BYTE token);
int process_variable(BYTE *code, UINT32 length, UINT32 *pos, BYTE token);
int process_operand(BYTE *code, UINT32 length, UINT32 *pos, BYTE token);
int process_ignore(BYTE *code, UINT32 length, UINT32 *pos, BYTE token);
int process_starcommand(BYTE *code, UINT32 length, UINT32 *pos, BYTE token);

// parser-variable.c
void statement_add_variable(enum EVarType type);
struct Variable *variable_search(bool local, bool create);
struct Variable *create_variable(enum EVarType type, bool constant);

// parser-statement.c
struct StatementEntry *empty_statement();
void statement_check_exists();
struct StatementEntry *statement_check_exists_create();
void additional_statement();

// parser-token.c
void statement_add_token(BYTE token);
int process_token(BYTE *code, UINT32 *pos, BYTE token);

// parser-starcommand.c
int process_starcommand(BYTE *code, UINT32 length, UINT32 *pos, BYTE token);
void statement_add_starcommand();

// parser-operator.c
int process_operator(BYTE *code, UINT32 length, UINT32 *pos, BYTE token);
void statement_add_operator(int operator);

// parser-operand.c
void statement_add_operand();
int process_operand(BYTE *code, UINT32 length, UINT32 *pos, BYTE token);

// parser-string.c
int process_string(BYTE *code, UINT32 length, UINT32 *pos, BYTE token);

// parser-linenumberc
int process_linenumber(BYTE *code, UINT32 length, UINT32 *pos, BYTE token);

// parser-pass2
void parser_pass2();
void parser_pass2_expression(struct StatementEntry **entry, struct StatementEntry **previous, BYTE terminating_token, bool assignment);
void parser_pass2_expression_repeat_with_operator(struct StatementEntry **entry, struct StatementEntry **previous, struct StatementEntry *repeat, enum EOperator operator);
void parser_pass2_all_expressions(struct StatementEntry **entry, struct StatementEntry **previous, BYTE terminating_token);
struct StatementEntry *parser_pass2_expression_shunting(struct StatementEntry *entry, BYTE terminating_token, struct StatementEntry *previous, struct StatementEntry *start, bool assignment);
void parser_pass2_token(struct Statement *statement);
void parser_pass2_variable(struct StatementEntry **entry, struct StatementEntry **previous);
void parser_pass2_all_variables(struct StatementEntry **entry, struct StatementEntry **previous);
enum EOperator parser_pass2_operator(struct StatementEntry **entry, enum EOperator operator[], int operator_count, bool delete, struct StatementEntry * * previous);
void parser_pass2_stmttoken(struct Statement *statement);

#endif
