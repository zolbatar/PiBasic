#pragma once
#include "asmjit/asmjit.h"
#include "../vm/vm.h"
#include "../environment.h"
#include <memory>

const int StackSize = 256;

struct JITContext {
	// Stacks
	asmjit::x86::Mem stack_integer;
	asmjit::x86::Mem stack_integer_with_idx;
	asmjit::x86::Gp p_i;

	// Registers
	asmjit::x86::Gp gp0;
	asmjit::x86::Gp gp1;
	asmjit::x86::Xmm fp0;
	asmjit::x86::Xmm fp1;
};

class JIT {
public:
	bool compiler();

private:
	bool process_bytecodes(asmjit::x86::Compiler *cc, JITContext *context);

	// Core
	asmjit::FileLogger logger;
	asmjit::JitRuntime rt;
	asmjit::CodeHolder code;
	asmjit::x86::Compiler cc;

};