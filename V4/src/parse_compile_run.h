#pragma once
#include "vm/vm.h"
#include <memory>

void parse_and_compile(const char* filename, bool temporary, std::vector<Boxed>* variables);
void run_vm();
void reset_parser();