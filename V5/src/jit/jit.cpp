#include "jit.h"
#include <iostream>

extern Environment g_env;
extern VM* g_vm;
typedef void (*Func)(void);

bool JIT::compiler() {
	// Runtime specialized for JIT code execution.
	asmjit::JitRuntime rt;
	asmjit::FileLogger logger(stdout);
	logger.addFlags(asmjit::FormatOptions::kFlagMachineCode | asmjit::FormatOptions::kFlagHexOffsets | asmjit::FormatOptions::kFlagHexImms);

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
	cc.addFunc(asmjit::FuncSignatureT<void>(asmjit::CallConv::kIdHost));

	// Create some registers
	jc.gp0 = cc.newInt32();			// Create a 32-bit general purpose register.
	jc.gp1 = cc.newInt32();			// Create a 32-bit general purpose register.
	jc.fp0 = cc.newXmmSd();			// Create a 64-bit double precision register
	jc.fp1 = cc.newXmmSd();			// Create a 64-bit double precision register

	// Stacks
	assert(sizeof(VM_INT) == 4);
	jc.p_i = cc.newIntPtr();
	jc.stack_integer = cc.newStack(StackSize * 4, 8);
	jc.stack_integer.setSize(4);
	//	jc.stack_integer_with_idx = jc.stack_integer.clone();
	jc.stack_integer.setIndex(jc.p_i, 0);
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

void stack_push_int(const VM_INT v)
{
	g_vm->helper_stack().push_int(v);
}

void stack_push_float(const VM_FLOAT v)
{
	g_vm->helper_stack().push_float(v);
}

double aa = 123.45;

bool JIT::process_bytecodes(asmjit::x86::Compiler* cc, JITContext* jc) {
	asmjit::InvokeNode* node;
	auto stack = g_vm->helper_stack();

	auto code = g_vm->helper_bytecodes().get_code();
	for (auto it = code.begin(); it != code.end(); ++it) {
		auto bc = (*it);

		switch (bc.opcode) {
		case Bytecodes::HALT:
			cc->ret();
			break;

			// Ignore, not relevant
		case Bytecodes::STACKCHECK:
			break;

			// Literals
		case Bytecodes::FASTCONST:
			cc->invoke(&node, asmjit::imm((void*)stack_push_int), asmjit::FuncSignatureT<void, VM_INT>(asmjit::CallConv::kIdHost));
			node->setArg(0, asmjit::Imm(bc.data));
			break;

			// Variables
		case Bytecodes::LOAD: {
			auto var = g_vm->helper_variables().get_variable(bc);
			switch (bc.type) {
			case Type::INTEGER:
				cc->mov(jc->gp0, asmjit::Imm(var->get_integer()));
				cc->invoke(&node, asmjit::imm((void*)stack_push_int), asmjit::FuncSignatureT<void, VM_INT>(asmjit::CallConv::kIdHost));
				node->setArg(0, jc->gp0);
				break;
			case Type::FLOAT:
				//cc->mov(jc->gp0, asmjit::x86::ptr(aa));
				cc->movsd(jc->fp0, asmjit::x86::Mem(aa));
				//				cc->movd(jc->fp0, asmjit::Imm(var->get_float()));
				cc->invoke(&node, asmjit::imm((void*)stack_push_float), asmjit::FuncSignatureT<void, VM_FLOAT>(asmjit::CallConv::kIdHost));
				node->setArg(0, jc->fp0);
				break;
			}
			break;
		}
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
