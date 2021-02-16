#include "jit.h"
#include <iostream>

extern Environment g_env;
extern VM* g_vm;
typedef void (*Func)(void);

bool JIT::compiler() {
	// Runtime specialized for JIT code execution.
	asmjit::JitRuntime rt;
	asmjit::FileLogger logger(stdout);
	logger.addFlags(asmjit::FormatOptions::kFlagMachineCode | asmjit::FormatOptions::kFlagHexOffsets);

	// Holds code and relocation information.
	asmjit::CodeHolder code;

	// Initialize code to match the JIT environment.
	code.init(rt.environment());
	code.setLogger(&logger);

	// Create and attach x86::Compiler to code.
	asmjit::x86::Compiler cc(&code);

	// Store compiler stuff to share around
	JITContext jc;

	// This is a parent function, basically the overall JIT context
	cc.addFunc(asmjit::FuncSignatureT<void>());

	// Create some registers
	jc.gp0 = cc.newGpd();			// Create a 32-bit general purpose register.
	jc.gp1 = cc.newGpd();			// Create a 32-bit general purpose register.
	jc.fp0 = cc.newXmm();			// Create a 128bit SIMD register
	jc.fp1 = cc.newXmm();			// Create a 128bit SIMD register

	// Stacks
	assert(sizeof(VM_INT) == 4);
	jc.p_i = cc.newIntPtr();
	jc.stack_integer = cc.newStack(StackSize * 4, 8);
	jc.stack_integer.setSize(4);
	jc.stack_integer_with_idx = jc.stack_integer.clone();
	jc.stack_integer_with_idx.setIndex(jc.p_i, 0);
	cc.xor_(jc.p_i, jc.p_i);

//	cc.call()
//	asmjit::InvokeNode in = cc.newCall(0, )
//	cc.call()

	// Create and populate constant pools

	// Now process the actual bytecodes
	if (!process_bytecodes(&cc, &jc)) return false;

	// End func now, and assemble
	cc.endFunc();
	cc.finalize();

	// Create and run the JIT
	Func fn;
	asmjit::Error err = rt.add(&fn, &code);
	if (err) {
		switch (err) {
		case asmjit::kErrorNoCodeGenerated:
			g_env.graphics.print_console("Native compile error: No code generated\r");
			break;
		default:
			g_env.graphics.print_console("Native compile error: " + std::to_string(err) + "\r");
			break;
		}
		return false;
	}

	// Execute the generated code.
	try {
		fn();
	}
	catch (const std::exception& ex) {
		g_env.graphics.print_console(ex.what());
		return false;
	}

	// Release and return success
	rt.release(fn);									// Explicitly remove the function from the runtime.*/
	return true;
}

bool JIT::process_bytecodes(asmjit::x86::Compiler* cc, JITContext* jc) {
	auto code = g_vm->helper_bytecodes().get_code();
	for (auto it = code.begin(); it != code.end(); ++it) {
		const auto& bc = (*it);

		switch (bc.opcode) {
		case Bytecodes::HALT:
			cc->ret();
			break;

			// Ignore, not relevant
		case Bytecodes::STACKCHECK:
			break;

			// Literals
		case Bytecodes::FASTCONST:
			cc->mov(jc->gp0, asmjit::Imm(bc.data));
			cc->mov(jc->stack_integer_with_idx, jc->gp0.r32());
			cc->inc(jc->p_i);
			break;

			// Variables
		case Bytecodes::LOAD:
			switch (bc.type) {
			}
			break;
		case Bytecodes::STORE:
			switch (bc.type) {
			}
			break;

			// Graphics
		case Bytecodes::PRINT:
			switch (bc.type) {
			}
			break;
		case Bytecodes::PRINT_NL:
			break;

		default:
			g_env.graphics.print_console("Native compiler: Unknown bytecode\r");
			return false;
		}
	}
	return true;
}
