#ifndef __DEBUG_OUTPUT_H
#define __DEBUG_OUTPUT_H
#include <stdio.h>
#include "vm.h"
#include "parser.h"

void debug_statement_entries(FILE *fp, struct StatementEntry *entry);
void phase1_output(struct Line *lines, int pass);
void phase2_output(struct Line *lines, VM *vm);
void bytecode_output(FILE *fp, VM *vm, int start, int end);
void print_string(FILE *fp, struct VariableString *v);

#endif