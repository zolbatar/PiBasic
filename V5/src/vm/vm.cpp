#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
#define _GLIBCXX_USE_C99 1
#ifdef RISCOS
#elif __unix__
#else
#include <windows.h>
#endif
#include "../debugger/debugger.h"
#include "../engine/engine.h"
#include "../environment.h"
#include "../libs/clock.h"
#include "../libs/string.h"
#include "vm.h"
#include <array>
#include <chrono>
#include <cmath>
#ifdef RISCOS
#include "kernel.h"
#include "swis.h"
#endif
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <locale>
#include <map>
#include <memory>
#include <sstream>
#include <stdlib.h>
#include <time.h>
#include <vector>

extern Environment g_env;
World world(g_env.graphics.get_actual_width(), g_env.graphics.get_actual_height());
VM* g_vm = nullptr;

// Randoms
double last_random = 0.0;

void VM::opcode_HALT()
{
	if (!performance_build && runtime_debug)
		g_env.log << "End of program" << std::endl;
}

void VM::opcode_DROP()
{
	stack.drop();
	if (!performance_build && runtime_debug)
		g_env.log << "Dropping top item off stack" << std::endl;
}

void VM::opcode_FASTCONST()
{
	switch (bc.type) {
	case Type::INTEGER: {
		stack.push_int(bc.data);
		if (!performance_build && runtime_debug) {
			g_env.log << "Push constant int " << bc.data << " onto the stack" << std::endl;
		}
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_FASTCONST_AS_FLOAT() {
	switch (bc.type) {
	case Type::INTEGER: {
		stack.push_float(static_cast<VM_FLOAT>(bc.data));
		if (!performance_build && runtime_debug) {
			g_env.log << "Push constant int " << bc.data << " as float onto the stack" << std::endl;
		}
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_FASTCONST_VAR()
{
	stack.push_int(bc.data);
	if (!performance_build && runtime_debug) {
		g_env.log << "Push var ID " << bc.data << " onto the stack" << std::endl;
	}
}

void VM::opcode_LOAD()
{
	auto var = variables.get_variable(bc);
	switch (bc.type) {
	case Type::INTEGER: {
		stack.push_int(var->get_integer());
		if (!performance_build && runtime_debug) {
			if (!var->is_constant()) {
				g_env.log << "Push variable '" << var->get_name() << "', int " << var->get_integer() << " onto the stack" << std::endl;
			}
			else {
				g_env.log << "Push constant int " << var->get_integer() << " onto the stack" << std::endl;
			}
		}
		return;
	}
	case Type::FLOAT: {
		stack.push_float(var->get_float());
		if (!performance_build && runtime_debug) {
			if (!var->is_constant()) {
				g_env.log << "Push variable '" << var->get_name() << "', float " << var->get_float() << " onto the stack" << std::endl;
			}
			else {
				g_env.log << "Push constant float " << var->get_float() << " onto the stack" << std::endl;
			}
		}
		return;
	}
	case Type::STRING: {
		stack.push_string(var->get_string());
		if (!performance_build && runtime_debug) {
			if (!var->is_constant()) {
				g_env.log << "Push variable '" << var->get_name() << "', string '" << var->get_string() << "' onto the stack" << std::endl;
			}
			else {
				g_env.log << "Push constant string '" << var->get_string() << "' onto the stack" << std::endl;
			}
		}
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_LOAD_AS_FLOAT() {
	auto var = variables.get_variable(bc);
	stack.push_float(static_cast<VM_FLOAT>(var->get_integer()));
	if (!performance_build && runtime_debug) {
		if (!var->is_constant()) {
			g_env.log << "Push variable '" << var->get_name() << "', int " << var->get_integer() << " as float onto the stack" << std::endl;
		}
		else {
			g_env.log << "Push constant int " << var->get_integer() << " as float onto the stack" << std::endl;
		}
	}
}

void VM::opcode_UNARY()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v = stack.pop_int(bc);
		stack.push_int(-v);
		if (!performance_build && runtime_debug)
			g_env.log << "Unmary minus of " << v << " = " << -v << std::endl;
		break;
	}
	case Type::FLOAT: {
		VM_FLOAT v = stack.pop_float(bc);
		stack.push_float(-v);
		if (!performance_build && runtime_debug)
			g_env.log << "Unmary minus of " << v << " = " << -v << std::endl;
		break;
	}
	}
}

void VM::opcode_ADD()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v2 = stack.pop_int(bc);
		VM_INT v1 = stack.pop_int(bc);
		VM_INT v3 = v1 + v2;
		stack.push_int(v3);
		if (!performance_build && runtime_debug)
			g_env.log << "Add int " << v1 << " + " << v2 << " = " << v3 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT v2 = stack.pop_float(bc);
		VM_FLOAT v1 = stack.pop_float(bc);
		VM_FLOAT v3 = v1 + v2;
		stack.push_float(v3);
		if (!performance_build && runtime_debug)
			g_env.log << "Add float " << v1 << " + " << v2 << " = " << v3 << std::endl;
		return;
	}
	case Type::STRING: {
		VM_STRING v2 = stack.pop_string(bc);
		VM_STRING v1 = stack.pop_string(bc);
		if (!performance_build && runtime_debug) {
			VM_STRING v3 = v1;
			v3.append(v2);
			stack.push_string(v3);
			if (!performance_build && runtime_debug)
				g_env.log << "Add string '" << v1 << "' + '" << v2 << "' = '" << v3 << "'" << std::endl;
		}
		else {
			v1.append(v2);
			stack.push_string(v1);
		}
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_SHL()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v2 = stack.pop_int(bc);
		VM_INT v1 = stack.pop_int(bc);
		VM_INT v3 = v1 << v2;
		stack.push_int(v3);
		if (!performance_build && runtime_debug)
			g_env.log << "<< int " << v1 << " + " << v2 << " = " << v3 << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_SHR()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v2 = stack.pop_int(bc);
		VM_INT v1 = stack.pop_int(bc);
		VM_INT v3 = v1 >> v2;
		stack.push_int(v3);
		if (!performance_build && runtime_debug)
			g_env.log << ">> int " << v1 << " + " << v2 << " = " << v3 << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_SUBTRACT()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v2 = stack.pop_int(bc);
		VM_INT v1 = stack.pop_int(bc);
		VM_INT v3 = v1 - v2;
		stack.push_int(v3);
		if (!performance_build && runtime_debug)
			g_env.log << "Subtract int " << v1 << " - " << v2 << " = " << v3 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT v2 = stack.pop_float(bc);
		VM_FLOAT v1 = stack.pop_float(bc);
		VM_FLOAT v3 = v1 - v2;
		stack.push_float(v3);
		if (!performance_build && runtime_debug)
			g_env.log << "Subtract float " << v1 << " - " << v2 << " = " << v3 << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_MULTIPLY()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v2 = stack.pop_int(bc);
		VM_INT v1 = stack.pop_int(bc);
		VM_INT v3 = v1 * v2;
		stack.push_int(v3);
		if (!performance_build && runtime_debug)
			g_env.log << "Multiply int " << v1 << " * " << v2 << " = " << v3 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT v2 = stack.pop_float(bc);
		VM_FLOAT v1 = stack.pop_float(bc);
		VM_FLOAT v3 = v1 * v2;
		stack.push_float(v3);
		if (!performance_build && runtime_debug)
			g_env.log << "Multiply float " << v1 << " * " << v2 << " = " << v3 << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_POWER()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_FLOAT v2 = static_cast<VM_FLOAT>(stack.pop_int(bc));
		VM_FLOAT v1 = static_cast<VM_FLOAT>(stack.pop_int(bc));
		VM_INT v3 = static_cast<VM_INT>(std::pow(v1, v2));
		stack.push_int(v3);
		if (!performance_build && runtime_debug)
			g_env.log << "Power int " << v1 << " ^ " << v2 << " = " << v3 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT v2 = stack.pop_float(bc);
		VM_FLOAT v1 = stack.pop_float(bc);
		VM_FLOAT v3 = std::pow(v1, v2);
		stack.push_float(v3);
		if (!performance_build && runtime_debug)
			g_env.log << "Power float " << v1 << " ^ " << v2 << " = " << v3 << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_DIVIDE()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v2 = stack.pop_int(bc);
		if (v2 == 0) {
			error("Divide by zero error");
		}
		VM_INT v1 = stack.pop_int(bc);
		VM_INT v3 = v1 / v2;
		stack.push_int(v3);
		if (!performance_build && runtime_debug)
			g_env.log << "Divide int " << v1 << " / " << v2 << " = " << v3 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT v2 = stack.pop_float(bc);
		if (v2 == 0.0) {
			error("Divide by zero error");
		}
		VM_FLOAT v1 = stack.pop_float(bc);
		VM_FLOAT v3 = v1 / v2;
		stack.push_float(v3);
		if (!performance_build && runtime_debug)
			g_env.log << "Divide float " << v1 << " / " << v2 << " = " << v3 << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_CONV_FLOAT()
{
	if (bc.data == 0) {
		// Top stack
		VM_INT v1 = stack.pop_int(bc);
		VM_FLOAT v2 = v1;
		stack.push_float(v2);
		if (!performance_build && runtime_debug)
			g_env.log << "Convert " << v1 << " (int) -> " << v2 << " (float)\n";
	}
	else if (bc.data == 1) {
		auto b = stack.pop_boxed();
		VM_INT v1 = stack.pop_int(bc);
		VM_FLOAT v2 = static_cast<VM_FLOAT>(v1);
		stack.push_float(v2);
		if (!performance_build && runtime_debug)
			g_env.log << "Convert (2nd) " << v1 << " (int) -> " << v2 << " (float)\n";
		stack.push_boxed(b);
	}
}

void VM::opcode_CONV_INT()
{
	if (bc.data == 0) {
		VM_FLOAT v1 = stack.pop_float(bc);
		VM_INT v2 = static_cast<VM_INT>(floor(v1));
		stack.push_int(v2);
		if (!performance_build && runtime_debug)
			g_env.log << "Convert " << v1 << " (float) -> " << v2 << " (int)\n";
	}
	else if (bc.data == 1) {
		auto b = stack.pop_boxed();
		VM_FLOAT v1 = stack.pop_float(bc);
		VM_INT v2 = static_cast<VM_INT>(floor(v1));
		stack.push_int(v2);
		if (!performance_build && runtime_debug)
			g_env.log << "Convert (2nd) " << v1 << " (float) -> " << v2 << " (int)\n";
		stack.push_boxed(b);
	}
}

void VM::opcode_SWAP()
{
	auto var = variables.get_variable(bc);
	VM_INT v = stack.pop_int(bc);
	auto var2 = variables.get_variable_by_int(bc, v);
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT t = var->get_integer();
		var->set_integer(var2->get_integer());
		var2->set_integer(t);
		if (!performance_build && runtime_debug)
			g_env.log << "Swap " << var->get_name() << " and " << var2->get_name() << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT t = var->get_float();
		var->set_float(var2->get_float());
		var2->set_float(t);
		if (!performance_build && runtime_debug)
			g_env.log << "Swap " << var->get_name() << " and " << var2->get_name() << std::endl;
		return;
	}
	case Type::STRING: {
		VM_STRING t = var->get_string();
		var->set_string(var2->get_string());
		var2->set_string(t);
		if (!performance_build && runtime_debug)
			g_env.log << "Swap " << var->get_name() << " and " << var2->get_name() << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_STORE()
{
	auto var = variables.get_variable(bc);
	var->set_type_nodefault(bc.type);
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v = stack.pop_int(bc);
		var->set_integer(v);
		if (!performance_build && runtime_debug)
			g_env.log << "Store integer " << v << " in " << var->get_name() << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT v = stack.pop_float(bc);
		var->set_float(v);
		if (!performance_build && runtime_debug)
			g_env.log << "Store float " << v << " in " << var->get_name() << std::endl;
		return;
	}
	case Type::STRING: {
		VM_STRING v = stack.pop_string(bc);
		var->set_string(v);
		if (!performance_build && runtime_debug)
			g_env.log << "Store string '" << v << "' in " << var->get_name() << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_INPUT()
{
	auto var = variables.get_variable(bc);
	VM_INT qmark = stack.pop_int(bc);
	if (qmark) {
		g_env.graphics.print_text(console_font, "?", -1, -1);
	}
	auto s = g_env.graphics.input();
	switch (bc.type) {
	case Type::INTEGER: {
		int v = std::stoi(s);
		var->set_integer(v);
		if (!performance_build && runtime_debug)
			g_env.log << "Inputted and stored integer " << var->get_integer() << " in " << var->get_name() << std::endl;
		return;
	}
	case Type::FLOAT: {
		double v = std::stod(s);
		var->set_float(v);
		if (!performance_build && runtime_debug)
			g_env.log << "Inputted and stored float " << var->get_float() << " in " << var->get_name() << std::endl;
		return;
	}
	case Type::STRING: {
		var->set_string(s);
		if (!performance_build && runtime_debug)
			g_env.log << "Inputted and stored string " << var->get_string() << " in " << var->get_name() << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_PRINT()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v1 = stack.pop_int(bc);
		print_right_justify = bc.data & 1;
		print_hex = bc.data & 2;

		// First let's store to a string so we can figure out X positions etc.
		std::stringstream stream;
		if (print_right_justify) {
			stream << std::setw(tab_spacing);
		}
		if (print_hex) {
			if (!performance_build && runtime_debug)
				g_env.log << "Print float as hex: ";
			stream << std::hex << v1;
		}
		else {
			if (!performance_build && runtime_debug)
				g_env.log << "Print int: ";
			stream << v1;
		}
		VM_STRING v(stream.str());
		g_env.graphics.print_console(v);
		if (!performance_build && runtime_debug)
			g_env.log << v1 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT v1 = stack.pop_float(bc);
		print_right_justify = bc.data & 1;
		print_hex = bc.data & 2;

		// First let's store to a string so we can figure out X positions etc.
		std::stringstream stream;
		if (print_hex) {
			if (!performance_build && runtime_debug)
				g_env.log << "Print float as hex: ";
			stream << std::hex << static_cast<int>(v1);
		}
		else {
			if (!performance_build && runtime_debug)
				g_env.log << "Print float: ";
			stream << std::setprecision(tab_spacing) << v1;
		}
		VM_STRING v(stream.str());

		// Pad?
		if (print_right_justify) {
			auto l = v.length();
			int d = tab_spacing - static_cast<int>(l);
			while (d < 0) {
				d += tab_spacing;
			}
			std::string v2 = "";
			for (int i = 0; i < d; i++) {
				v2 += " ";
			}
			v = v2 + v;
		}

		g_env.graphics.print_console(v);
		if (!performance_build && runtime_debug)
			g_env.log << std::endl;
		return;
	}
	case Type::STRING: {
		VM_STRING v = stack.pop_string(bc);
		if (!performance_build && runtime_debug)
			g_env.log << "Print string: '";
		g_env.graphics.print_console(v);
		if (!performance_build && runtime_debug)
			g_env.log << "'" << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_PRINT_NL()
{
	if (!performance_build && runtime_debug)
		g_env.log << "Print newline: ";
	if (!g_env.graphics.is_open()) {
		g_env.log << std::endl;
	}
	else {
		g_env.graphics.print_console("\r");
	}
}

void VM::opcode_PRINT_SPC()
{
	VM_INT v1 = stack.pop_int(bc);
	std::string v2 = "";
	for (int i = 0; i < v1; i++) {
		v2 += " ";
	}
	g_env.graphics.print_text(0, v2, -1, -1);
	if (!performance_build && runtime_debug)
		g_env.log << "Print " << v1 << " spaces";
}

VM_INT VM::array_1d_get_index(Boxed* var, VM_INT index)
{
	auto size = var->get_array_dimension(0);
	if (index < 0 || index > size)
		error("Invalid array or array index");
	return index;
}

VM_INT VM::array_2d_get_index(Boxed* var, VM_INT index2, VM_INT index1)
{
	auto size = var->get_array_dimension(0) * var->get_array_dimension(1);
	VM_INT index = index2 * var->get_array_dimension(0) + index1;
	if (index < 0 || index > size)
		error("Invalid array or array index");
	return index;
}

void VM::opcode_LOAD_ARRAY()
{
	auto var = variables.get_variable(bc);
	VM_INT dimensions = var->get_array_dimensions();
	if (dimensions == 0) {
		error("Invalid array or array index");
	}

	switch (bc.type) {
	case Type::INTEGER_ARRAY: {
		if (dimensions == 1) {
			auto index = array_1d_get_index(var, stack.pop_int(bc));
			VM_INT v = var->get_integer_array_item(index);
			stack.push_int(v);
			if (!performance_build && runtime_debug)
				g_env.log << "Push variable " << var->get_name() << ", int " << v << " (index " << index << ") onto the stack\n";
		}
		else {
			auto index = array_2d_get_index(var, stack.pop_int(bc), stack.pop_int(bc));
			VM_INT v = var->get_integer_array_item(index);
			stack.push_int(v);
			if (!performance_build && runtime_debug)
				g_env.log << "Push variable " << var->get_name() << ", string '" << v << "' (index " << index << ") onto the stack\n";
		}
		return;
	}
	case Type::FLOAT_ARRAY: {
		if (dimensions == 1) {
			auto index = array_1d_get_index(var, stack.pop_int(bc));
			VM_FLOAT v = var->get_float_array_item(index);
			stack.push_float(v);
			if (!performance_build && runtime_debug)
				g_env.log << "Push variable " << var->get_name() << ", float " << v << " (index " << index << ") onto the stack\n";
		}
		else {
			auto index = array_2d_get_index(var, stack.pop_int(bc), stack.pop_int(bc));
			VM_FLOAT v = var->get_float_array_item(index);
			stack.push_float(v);
			if (!performance_build && runtime_debug)
				g_env.log << "Push variable " << var->get_name() << ", float '" << v << "' (index " << index << ") onto the stack\n";
		}
		return;
	}
	case Type::STRING_ARRAY: {
		if (dimensions == 1) {
			auto index = array_1d_get_index(var, stack.pop_int(bc));
			VM_STRING v = var->get_string_array_item(index);
			stack.push_string(v);
			if (!performance_build && runtime_debug)
				g_env.log << "Push variable " << var->get_name() << ", string '" << v << "' (index " << index << ") onto the stack\n";
		}
		else {
			auto index = array_2d_get_index(var, stack.pop_int(bc), stack.pop_int(bc));
			VM_STRING v = var->get_string_array_item(index);
			stack.push_string(v);
			if (!performance_build && runtime_debug)
				g_env.log << "Push variable " << var->get_name() << ", string '" << v << "' (index " << index << ") onto the stack\n";
		}
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_STORE_ARRAY()
{
	auto var = variables.get_variable(bc);
	VM_INT dimensions = var->get_array_dimensions();
	if (dimensions == 0) {
		error("Invalid array or array index");
	}

	switch (bc.type) {
	case Type::INTEGER_ARRAY: {
		if (dimensions == 1) {
			VM_INT v = stack.pop_int(bc);
			auto index = array_1d_get_index(var, stack.pop_int(bc));
			var->set_integer_array_item(index, v);
			if (!performance_build && runtime_debug)
				g_env.log << "Store int array variable " << var->get_name() << " index " << index << " value " << v << std::endl;
		}
		else {
			VM_INT v = stack.pop_int(bc);
			auto index = array_2d_get_index(var, stack.pop_int(bc), stack.pop_int(bc));
			var->set_integer_array_item(index, v);
			if (!performance_build && runtime_debug)
				g_env.log << "Store float array variable " << var->get_name() << " index " << index << " value " << v << std::endl;
		}
		return;
	}
	case Type::FLOAT_ARRAY: {
		if (dimensions == 1) {
			VM_FLOAT v = stack.pop_float(bc);
			auto index = array_1d_get_index(var, stack.pop_int(bc));
			var->set_float_array_item(index, v);
			if (!performance_build && runtime_debug)
				g_env.log << "Store float array variable " << var->get_name() << " index " << index << " value " << v << std::endl;
		}
		else {
			VM_FLOAT v = stack.pop_float(bc);
			auto index = array_2d_get_index(var, stack.pop_int(bc), stack.pop_int(bc));
			var->set_float_array_item(index, v);
			if (!performance_build && runtime_debug)
				g_env.log << "Store float array variable " << var->get_name() << " index " << index << " value " << v << std::endl;
		}
		return;
	}
	case Type::STRING_ARRAY: {
		if (dimensions == 1) {
			VM_STRING v = stack.pop_string(bc);
			auto index = array_1d_get_index(var, stack.pop_int(bc));
			var->set_string_array_item(index, v);
			if (!performance_build && runtime_debug)
				g_env.log << "Store string array variable " << var->get_name() << " index " << index << " value " << v << std::endl;
		}
		else {
			VM_STRING v = stack.pop_string(bc);
			auto index = array_2d_get_index(var, stack.pop_int(bc), stack.pop_int(bc));
			var->set_string_array_item(index, v);
			if (!performance_build && runtime_debug)
				g_env.log << "Store float array variable " << var->get_name() << " index " << index << " value " << v << std::endl;
		}
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_LOAD_FIELD()
{
	auto var = variables.get_variable(bc);
	VM_INT index = stack.pop_int(bc);
	auto field = var->get_field(index);
	switch (bc.type) {
	case Type::INTEGER: {
		stack.push_int(field->get_integer());
		if (!performance_build && runtime_debug)
			g_env.log << "Load field variable " << var->get_name() << " index " << index << " value " << field->get_integer() << std::endl;
		return;
	}
	case Type::FLOAT: {
		stack.push_float(field->get_float());
		if (!performance_build && runtime_debug)
			g_env.log << "Load field variable " << var->get_name() << " index " << index << " value " << field->get_float() << std::endl;
		return;
	}
	case Type::STRING: {
		stack.push_string(field->get_string());
		if (!performance_build && runtime_debug)
			g_env.log << "Load field variable " << var->get_name() << " index " << index << " value " << field->get_string() << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_STORE_FIELD()
{
	auto var = variables.get_variable(bc);
	VM_INT index = stack.pop_int(bc);
	auto field = var->get_field(index);
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v = stack.pop_int(bc);
		field->set_integer(v);
		if (!performance_build && runtime_debug)
			g_env.log << "Store field variable " << var->get_name() << " index " << index << " value " << v << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT v = stack.pop_float(bc);
		field->set_float(v);
		if (!performance_build && runtime_debug)
			g_env.log << "Store field variable " << var->get_name() << " index " << index << " value " << v << std::endl;
		return;
	}
	case Type::STRING: {
		VM_STRING v = stack.pop_string(bc);
		field->set_string(v);
		if (!performance_build && runtime_debug)
			g_env.log << "Store field variable " << var->get_name() << " index " << index << " value '" << v << "'" << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_LOAD_FIELD_ARRAY()
{
	auto var = variables.get_variable(bc);
	VM_INT fields = var->get_array_dimension(0);
	VM_INT index = stack.pop_int(bc);
	VM_INT array_index = stack.pop_int(bc);
	VM_INT real_index = (array_index * fields) + index;
	if (real_index < 0 || real_index >= var->get_fields_count())
		error("Invalid array or array index");
	auto field = var->get_field(real_index);
	switch (bc.type) {
	case Type::INTEGER: {
		stack.push_int(field->get_integer());
		if (!performance_build && runtime_debug)
			g_env.log << "Load field variable " << var->get_name() << " index " << index << " value " << field->get_integer() << std::endl;
		return;
	}
	case Type::FLOAT: {
		stack.push_float(field->get_float());
		if (!performance_build && runtime_debug)
			g_env.log << "Load field variable " << var->get_name() << " index " << index << " value " << field->get_float() << std::endl;
		return;
	}
	case Type::STRING: {
		stack.push_string(field->get_string());
		if (!performance_build && runtime_debug)
			g_env.log << "Load field variable " << var->get_name() << " index " << index << " value '" << field->get_string() << "'" << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_STORE_FIELD_ARRAY()
{
	auto var = variables.get_variable(bc);
	VM_INT fields = var->get_array_dimension(0);
	VM_INT index = stack.pop_int(bc);
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v = stack.pop_int(bc);
		VM_INT array_index = stack.pop_int(bc);
		VM_INT real_index = (array_index * fields) + index;
		if (real_index < 0 || real_index >= var->get_fields_count())
			error("Invalid array or array index");
		auto field = var->get_field(real_index);
		field->set_integer(v);
		if (!performance_build && runtime_debug)
			g_env.log << "Store field variable " << var->get_name() << " index " << index << " value " << v << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT v = stack.pop_float(bc);
		VM_INT array_index = stack.pop_int(bc);
		VM_INT real_index = (array_index * fields) + index;
		if (real_index < 0 || real_index >= var->get_fields_count())
			error("Invalid array or array index");
		auto field = var->get_field(real_index);
		field->set_float(v);
		if (!performance_build && runtime_debug)
			g_env.log << "Store field variable " << var->get_name() << " index " << index << " value " << v << std::endl;
		return;
	}
	case Type::STRING: {
		VM_STRING v = stack.pop_string(bc);
		VM_INT array_index = stack.pop_int(bc);
		VM_INT real_index = (array_index * fields) + index;
		if (real_index < 0 || real_index >= var->get_fields_count())
			error("Invalid array or array index");
		auto field = var->get_field(real_index);
		field->set_string(v);
		if (!performance_build && runtime_debug)
			g_env.log << "Store field variable " << var->get_name() << " index " << index << " value '" << v << "'" << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_NEW_TYPE()
{
	auto var = variables.get_variable(bc);
	VM_INT num_fields = static_cast<size_t>(stack.pop_int(bc));
	if (num_fields == 0)
		error("DIM TYPE array of 0 size not allowed");

	var->set_type_nodefault(Type::TYPE);
	var->set_fields_count(num_fields);
	if (!performance_build && runtime_debug)
		g_env.log << "Initialised type '" << var->get_name() << "' with " << num_fields << " fields" << std::endl;
}

void VM::opcode_NEW_TYPE_ARRAY()
{
	auto var = variables.get_variable(bc);
	var->set_1d_dimensions(stack.pop_int(bc));
	VM_INT num_fields = static_cast<size_t>(stack.pop_int(bc));
	if (num_fields == 0)
		error("DIM TYPE array of 0 size not allowed");

	var->set_type_nodefault(Type::TYPE_ARRAY);
	var->set_fields_count(num_fields);
	if (!performance_build && runtime_debug)
		g_env.log << "Initialised type '" << var->get_name() << "' with " << num_fields << " fields" << std::endl;
}

void VM::opcode_ARRAYSIZE()
{
	auto var = variables.get_variable(bc);
	if (var->get_array_dimensions() != 1) {
		error("LEN of array needs 1 dimensional array");
	}
	VM_INT size = var->get_array_dimension(0);
	switch (var->get_type()) {
	case Type::TYPE_ARRAY:
		error("Size of TYPE arrays not supported");
	}
	stack.push_int(size);
	if (!performance_build && runtime_debug)
		g_env.log << "Size of array requested for variable'" << var->get_name() << "' result=" << size << std::endl;
}

void VM::opcode_DIM()
{
	auto var = variables.get_variable(bc);
	VM_INT dimensions = stack.pop_int(bc);
	VM_INT size, size1, size2;
	if (dimensions == 1) {
		size = stack.pop_int(bc) + 1;
		if (size == 1)
			error("DIM array of 0 size not allowed");
		var->set_type_nodefault(bc.type);
		var->set_1d_dimensions(size);
	}
	else {
		size2 = stack.pop_int(bc) + 1;
		if (size2 == 1)
			error("DIM array of 0 size not allowed");
		size1 = stack.pop_int(bc) + 1;
		if (size1 == 1)
			error("DIM array of 0 size not allowed");
		var->set_2d_dimensions(size1, size2);
	}

	switch (bc.type) {
	case Type::INTEGER_ARRAY: {
		if (dimensions == 1) {
			var->set_integer_array(size);
		}
		else {
			var->set_integer_array(size1 * size2);
		}
		break;
	}
	case Type::FLOAT_ARRAY: {
		if (dimensions == 1) {
			var->set_float_array(size);
		}
		else {
			var->set_float_array(size1 * size2);
		}
		break;
	}
	case Type::STRING_ARRAY: {
		if (dimensions == 1) {
			var->set_string_array(size);
		}
		else {
			var->set_string_array(size1 * size2);
		}
		break;
	}
	default:
		opcode_type_error();
	}
	if (dimensions == 1) {
		if (!performance_build && runtime_debug)
			g_env.log << "Dimension variable " << var->get_name() << " with size " << size << std::endl;
	}
	else {
		if (!performance_build && runtime_debug)
			g_env.log << "Dimension variable " << var->get_name() << " with size " << size1 << "x" << size2 << std::endl;
	}
}

void VM::opcode_DUP()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v = stack.pop_int(bc);
		stack.push_int(v);
		stack.push_int(v);
		if (!performance_build && runtime_debug)
			g_env.log << "Duplicate int " << v << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT v = stack.pop_float(bc);
		stack.push_float(v);
		stack.push_float(v);
		if (!performance_build && runtime_debug)
			g_env.log << "Duplicate float " << v << std::endl;
		return;
	}
	case Type::STRING: {
		VM_STRING v = stack.pop_string(bc);
		stack.push_string(v);
		stack.push_string(v);
		if (!performance_build && runtime_debug)
			g_env.log << "Duplicate int " << v << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_ROT()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v1 = stack.pop_int(bc);
		VM_INT v2 = stack.pop_int(bc);
		stack.push_int(v1);
		stack.push_int(v2);
		if (!performance_build && runtime_debug)
			g_env.log << "Rotate int " << v1 << "/" << v2 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT v1 = stack.pop_float(bc);
		VM_FLOAT v2 = stack.pop_float(bc);
		stack.push_float(v1);
		stack.push_float(v2);
		if (!performance_build && runtime_debug)
			g_env.log << "Rotate float " << v1 << "/" << v2 << std::endl;
		return;
	}
	case Type::STRING: {
		VM_STRING v1 = stack.pop_string(bc);
		VM_STRING v2 = stack.pop_string(bc);
		stack.push_string(v1);
		stack.push_string(v2);
		if (!performance_build && runtime_debug)
			g_env.log << "Rotate string '" << v1 << "'/'" << v2 << "'" << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_FOR()
{
	auto var = variables.get_variable(bc);
	switch (bc.type) {
	case Type::INTEGER: {
		var->set_integer_array_size(3);
		VM_INT pc = stack.pop_int(bc);
		VM_INT step = stack.pop_int(bc);
		VM_INT iterations = stack.pop_int(bc);
		var->set_integer_array_item(0, iterations / step);
		var->set_integer_array_item(1, step);
		var->set_integer_array_item(2, pc);
		if (!performance_build && runtime_debug)
			g_env.log << "Initialising FOR loop for variable '" << var->get_name() << "', " << var->get_string_array_item(0) << " iterations" << std::endl;
		return;
	}
	case Type::FLOAT: {
		var->set_integer_array_size(2);
		var->set_float_array_size(1);
		VM_INT pc = stack.pop_int(bc);
		VM_FLOAT step = stack.pop_float(bc);
		VM_FLOAT iterations = stack.pop_float(bc);
		var->set_integer_array_item(0, static_cast<int>(iterations / step));
		var->set_float_array_item(0, step);
		var->set_integer_array_item(1, pc);
		if (!performance_build && runtime_debug)
			g_env.log << "Initialising FOR loop for variable '" << var->get_name() << "', " << var->get_string_array_item(0) << " iterations" << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_NEXT()
{
	auto var = variables.get_variable(bc);
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT step = var->get_integer_array_item(1);
		var->set_integer(var->get_integer() + step);
		var->dec_integer_array_item(0);
		if (var->get_integer_array_item(0) >= 0) {
			helper_bytecodes().pc = var->get_integer_array_item(2);
		}
		if (!performance_build && runtime_debug)
			g_env.log << "NEXT integer variable " << var->get_name() << ", step " << step << ", iterations left " << (var->get_integer_array_item(0) + 1)
			<< ", loop PC is 0x" << std::hex << var->get_integer_array_item(2) << std::dec << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT step = var->get_float_array_item(0);
		var->set_float(var->get_float() + step);
		var->dec_integer_array_item(0);
		if (var->get_integer_array_item(0) >= 0) {
			helper_bytecodes().pc = var->get_integer_array_item(1);
		}
		if (!performance_build && runtime_debug)
			g_env.log << "NEXT float variable " << var->get_name() << ", step " << step << ", iterations left " << (var->get_integer_array_item(0) + 1)
			<< ", loop PC is 0x" << std::hex << var->get_integer_array_item(1) << std::dec << std::endl;
		return;
	}
	case Type::STRING: {
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_FORIN()
{
	auto var = variables.get_variable(bc);
	var->set_integer_array_size(4);
	VM_INT pc = stack.pop_int(bc);
	VM_INT var_array_index = stack.pop_int(bc);
	auto variable_array = variables.get_variable_by_int(bc, var_array_index);
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT iterations = static_cast<VM_INT>(variable_array->get_integer_array_size());
		var->set_integer_array_item(0, iterations - 1);
		var->set_integer_array_item(1, pc);
		var->set_integer_array_item(2, var_array_index);
		var->set_integer_array_item(3, 1);
		var->set_integer(variable_array->get_integer_array_item(0));
		break;
	}
	case Type::FLOAT: {
		VM_INT iterations = static_cast<VM_INT>(variable_array->get_float_array_size());
		var->set_integer_array_item(0, iterations - 1);
		var->set_integer_array_item(1, pc);
		var->set_integer_array_item(2, var_array_index);
		var->set_integer_array_item(3, 1);
		var->set_float(variable_array->get_float_array_item(0));
		break;
	}
	case Type::STRING: {
		VM_INT iterations = static_cast<VM_INT>(variable_array->get_string_array_size());
		var->set_integer_array_item(0, iterations - 1);
		var->set_integer_array_item(1, pc);
		var->set_integer_array_item(2, var_array_index);
		var->set_integer_array_item(3, 1);
		var->set_string(variable_array->get_string_array_item(0));
		break;
	}
	default:
		opcode_type_error();
	}
	if (!performance_build && runtime_debug)
		g_env.log << "Initialising FOR IN loop for variable '" << var->get_name() << "', " << var->get_string_array_item(0) << " iterations" << std::endl;
}

void VM::opcode_NEXTIN()
{
	auto var = variables.get_variable(bc);
	auto variable_array = variables.get_variable_by_int(bc, var->get_integer_array_item(2));
	if (var->get_integer_array_item(0) == 0) {
		if (!performance_build && runtime_debug)
			g_env.log << "NEXT IN variable " << var->get_name() << ", complete" << std::endl;
		return;
	}
	else {
		var->dec_integer_array_item(0);
	}

	switch (bc.type) {
	case Type::INTEGER: {
		auto i = var->inc_integer_array_item(3);
		var->set_integer(variable_array->get_integer_array_item(i));
		break;
	}
	case Type::FLOAT: {
		auto i = var->inc_integer_array_item(3);
		var->set_float(variable_array->get_float_array_item(i));
		break;
	}
	case Type::STRING: {
		auto i = var->inc_integer_array_item(3);
		var->set_string(variable_array->get_string_array_item(i));
		break;
	}
	default:
		opcode_type_error();
	}
	helper_bytecodes().pc = var->get_integer_array_item(1);
	if (!performance_build && runtime_debug)
		g_env.log << "NEXT IN variable " << var->get_name() << ", iterations left " << (var->get_integer_array_item(0) + 1)
		<< ", loop PC is 0x" << std::hex << var->get_integer_array_item(1) << std::dec << std::endl;
}

void VM::opcode_READ()
{
	if (data_iterator == data.end()) {
		error("DATA list is empty");
	}
	Boxed b = *data_iterator++;
	switch (bc.type) {
	case Type::INTEGER: {
		stack.push_int(b.get_integer());
		if (!performance_build && runtime_debug)
			g_env.log << "Read integer " << b.get_integer() << std::endl;
		return;
	}
	case Type::FLOAT: {
		stack.push_float(b.get_float());
		if (!performance_build && runtime_debug)
			g_env.log << "Read float " << b.get_float() << std::endl;
		return;
	}
	case Type::STRING: {
		stack.push_string(b.get_string());
		if (!performance_build && runtime_debug)
			g_env.log << "Read string " << b.get_string() << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_RESTORE()
{
	data_iterator = data.begin();
	if (!performance_build && runtime_debug) {
		g_env.log << "Restoring DATA" << std::endl;
	}
}

void VM::opcode_CMP_E()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT c2 = stack.pop_int(bc);
		VM_INT c1 = stack.pop_int(bc);
		VM_INT c3 = c1 == c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "Int = compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT c2 = stack.pop_float(bc);
		VM_FLOAT c1 = stack.pop_float(bc);
		VM_INT c3 = c1 == c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "Float = compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	case Type::STRING: {
		VM_STRING c2 = stack.pop_string(bc);
		VM_STRING c1 = stack.pop_string(bc);
		VM_INT c3 = c1 == c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "String = compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_CMP_NE()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT c2 = stack.pop_int(bc);
		VM_INT c1 = stack.pop_int(bc);
		VM_INT c3 = c1 != c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "Int <> compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT c2 = stack.pop_float(bc);
		VM_FLOAT c1 = stack.pop_float(bc);
		VM_INT c3 = c1 != c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "Float <> compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	case Type::STRING: {
		VM_STRING c2 = stack.pop_string(bc);
		VM_STRING c1 = stack.pop_string(bc);
		VM_INT c3 = c1 != c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "String <> compare of '" << c1 << "' and '" << c2 << "' is " << c3 << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_CMP_GE()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT c2 = stack.pop_int(bc);
		VM_INT c1 = stack.pop_int(bc);
		VM_INT c3 = c1 >= c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "Int >= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT c2 = stack.pop_float(bc);
		VM_FLOAT c1 = stack.pop_float(bc);
		VM_INT c3 = c1 >= c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "Float >= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	case Type::STRING: {
		VM_STRING c2 = stack.pop_string(bc);
		VM_STRING c1 = stack.pop_string(bc);
		VM_INT c3 = c1 >= c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "String >= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_CMP_LE()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT c2 = stack.pop_int(bc);
		VM_INT c1 = stack.pop_int(bc);
		VM_INT c3 = c1 <= c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "Int <= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT c2 = stack.pop_float(bc);
		VM_FLOAT c1 = stack.pop_float(bc);
		VM_INT c3 = c1 <= c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "Float <= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	case Type::STRING: {
		VM_STRING c2 = stack.pop_string(bc);
		VM_STRING c1 = stack.pop_string(bc);
		VM_INT c3 = c1 <= c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "String <= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_CMP_G()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT c2 = stack.pop_int(bc);
		VM_INT c1 = stack.pop_int(bc);
		VM_INT c3 = c1 > c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "Int > compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT c2 = stack.pop_float(bc);
		VM_FLOAT c1 = stack.pop_float(bc);
		VM_INT c3 = c1 > c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "Float > compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	case Type::STRING: {
		VM_STRING c2 = stack.pop_string(bc);
		VM_STRING c1 = stack.pop_string(bc);
		VM_INT c3 = c1 > c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "String > compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_CMP_L()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT c2 = stack.pop_int(bc);
		VM_INT c1 = stack.pop_int(bc);
		VM_INT c3 = c1 < c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "Int < compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT c2 = stack.pop_float(bc);
		VM_FLOAT c1 = stack.pop_float(bc);
		VM_INT c3 = c1 < c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "Float < compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	case Type::STRING: {
		VM_STRING c2 = stack.pop_string(bc);
		VM_STRING c1 = stack.pop_string(bc);
		VM_INT c3 = c1 < c2;
		stack.push_int(c3);
		if (!performance_build && runtime_debug)
			g_env.log << "String < compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_BOOL_OR()
{
	VM_INT c2 = stack.pop_int(bc);
	VM_INT c1 = stack.pop_int(bc);
	VM_INT c3 = c1 | c2;
	stack.push_int(c3);
	if (!performance_build && runtime_debug)
		g_env.log << "Boolean OR of " << c1 << " and " << c2 << " is " << c3 << std::endl;
}

void VM::opcode_BOOL_AND()
{
	VM_INT c2 = stack.pop_int(bc);
	VM_INT c1 = stack.pop_int(bc);
	VM_INT c3 = c1 & c2;
	stack.push_int(c3);
	if (!performance_build && runtime_debug)
		g_env.log << "Boolean AND of " << c1 << " and " << c2 << " is " << c3 << std::endl;
}

void VM::opcode_BOOL_EOR()
{
	VM_INT c2 = stack.pop_int(bc);
	VM_INT c1 = stack.pop_int(bc);
	VM_INT c3 = c1 ^ c2;
	stack.push_int(c3);
	if (!performance_build && runtime_debug)
		g_env.log << "Boolean EOR of " << c1 << " and " << c2 << " is " << c3 << std::endl;
}

void VM::opcode_BOOL_NOT()
{
	VM_INT v = stack.pop_int(bc);
	VM_INT v2 = !v;
	stack.push_int(v2);
	if (!performance_build && runtime_debug)
		g_env.log << "Boolean NOT of " << v << " is " << v2 << std::endl;
}

void VM::opcode_REPEAT()
{
	repeats.push(helper_bytecodes().pc);
	if (!performance_build && runtime_debug)
		g_env.log << "Start of repeat" << std::endl;
}

void VM::opcode_JNEREP()
{
	VM_INT c = stack.pop_int(bc);
	if (c) {
		if (!performance_build && runtime_debug)
			g_env.log << "Until, true condition, so no jump" << std::endl;
		repeats.pop();
	}
	else {
		UINT32 new_pc = repeats.top();
		if (!performance_build && runtime_debug)
			g_env.log << "Until, false condition, so jumping to &" << std::hex << std::uppercase << new_pc << std::dec << std::nouppercase << std::endl;
		helper_bytecodes().pc = new_pc;
	}
}

void VM::opcode_JUMP()
{
	UINT32 new_pc = bc.data;
	if (!performance_build && runtime_debug)
		g_env.log << "Jumping to &" << std::hex << std::uppercase << new_pc << std::dec << std::nouppercase << std::endl;
	helper_bytecodes().pc = new_pc;
}

void VM::opcode_CALL()
{
	VM_INT l = stack.pop_int(bc);
	UINT32 new_pc = bc.data;
	if (!performance_build && runtime_debug)
		g_env.log << "Calling &" << std::hex << std::uppercase << new_pc << std::dec << std::nouppercase << std::endl;
	variables.create_locals_on_call(functions[l], runtime_debug);
	call_stack.push(helper_bytecodes().pc);
	helper_bytecodes().pc = new_pc;
}

void VM::opcode_CASE_C()
{
	case_flag = false;
	if (!performance_build && runtime_debug)
		g_env.log << "Clearing case flag" << std::endl;
}

void VM::opcode_CASE_S()
{
	case_flag = true;
	if (!performance_build && runtime_debug)
		g_env.log << "Setting case flag" << std::endl;
}

void VM::opcode_CJUMPT()
{
	UINT32 new_pc = bc.data;
	if (!case_flag) {
		if (!performance_build && runtime_debug)
			g_env.log << "Case, otherwise, so no jump" << std::endl;
	}
	else {
		if (!performance_build && runtime_debug)
			g_env.log << "Case, no otherwise, so jumping to &" << std::hex << std::uppercase << new_pc << std::dec << std::nouppercase << std::endl;
		helper_bytecodes().pc = new_pc;
	}
}

void VM::opcode_RETURN()
{
	UINT32 new_pc = call_stack.top();
	if (new_pc & GosubCallFlag) {
		new_pc = new_pc ^ GosubCallFlag;
	}
	else {
		variables.revert_locals_on_return();
	}
	call_stack.pop();
	if (!performance_build && runtime_debug)
		g_env.log << "Returning to &" << std::hex << std::uppercase << new_pc << std::dec << std::nouppercase << std::endl;
	helper_bytecodes().pc = new_pc;
}

void VM::opcode_GOTO()
{
	UINT32 new_pc = bc.data;
	if (!performance_build && runtime_debug)
		g_env.log << "Jumping to &" << std::hex << std::uppercase << new_pc << std::dec << std::nouppercase << std::endl;
	helper_bytecodes().pc = new_pc;
}

void VM::opcode_GOSUB()
{
	call_stack.push(helper_bytecodes().pc | GosubCallFlag);
	UINT32 new_pc = bc.data;
	if (!performance_build && runtime_debug)
		g_env.log << "Calling subroutine at &" << std::hex << std::uppercase << new_pc << std::dec << std::nouppercase << std::endl;
	helper_bytecodes().pc = new_pc;
}

void VM::opcode_UNPACK()
{
	auto var = variables.get_variable(bc);
	auto b = stack.pop_boxed();
	switch (bc.type) {
	case Type::INTEGER: {
		switch (b.get_type()) {
		case Type::INTEGER:
			var->set_integer(b.get_integer());
			break;
		case Type::FLOAT:
			var->set_integer(static_cast<VM_INT>(b.get_float()));
			break;
		default:
			error("Unsupported unpack casting");
		}
		if (!performance_build && runtime_debug)
			g_env.log << "Stored parameter int value of " << var->get_integer() << " intp variable " << var->get_name() << std::endl;
		return;
	}
	case Type::FLOAT: {
		switch (b.get_type()) {
		case Type::FLOAT:
			var->set_float(b.get_float());
			break;
		case Type::INTEGER:
			var->set_float(static_cast<VM_FLOAT>(b.get_integer()));
			break;
		default:
			error("Unsupported unpack casting");
		}
		if (!performance_build && runtime_debug)
			g_env.log << "Stored parameter float value of " << var->get_float() << " into variable " << var->get_name() << std::endl;
		return;
	}
	case Type::STRING: {
		switch (b.get_type()) {
		case Type::STRING:
			var->set_string(b.get_string());
			break;
		default:
			error("Unsupported unpack casting");
		}
		if (!performance_build && runtime_debug)
			g_env.log << "Stored parameter string value of '" << var->get_integer() << " into variable " << var->get_name() << "'" << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_JNE()
{
	VM_INT c = stack.pop_int(bc);
	UINT32 new_pc = bc.data;
	if (c) {
		if (!performance_build && runtime_debug)
			g_env.log << "True condition, so no jump" << std::endl;
	}
	else {
		if (!performance_build && runtime_debug)
			g_env.log << "False condition, so jumping to " << new_pc << std::endl;
		helper_bytecodes().pc = new_pc;
	}
}

void VM::opcode_JE()
{
	VM_INT c = stack.pop_int(bc);
	if (!c) {
		if (!performance_build && runtime_debug)
			g_env.log << "False condition, so no jump" << std::endl;
		repeats.pop();
	}
	else {
		UINT32 new_pc = repeats.top();
		if (!performance_build && runtime_debug)
			g_env.log << "True condition, so jumping to " << new_pc << std::endl;
		helper_bytecodes().pc = new_pc;
	}
}

void VM::opcode_DIV()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v2 = stack.pop_int(bc);
		VM_INT v1 = stack.pop_int(bc);
		VM_INT v3 = v1 / v2;
		stack.push_int(static_cast<VM_INT>(v3));
		if (!performance_build && runtime_debug)
			g_env.log << "Quotient divide int " << v1 << " / " << v2 << " = " << v3 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT v2 = stack.pop_float(bc);
		VM_FLOAT v1 = stack.pop_float(bc);
		VM_FLOAT v3 = (float)((int)v1 / (int)v2);
		stack.push_int(static_cast<VM_INT>(v3));
		if (!performance_build && runtime_debug)
			g_env.log << "Quotient divide float " << v1 << " / " << v2 << " = " << v3 << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_MOD()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v2 = stack.pop_int(bc);
		VM_INT v1 = stack.pop_int(bc);
		VM_INT v3 = v1 % v2;
		stack.push_int(v3);
		if (!performance_build && runtime_debug)
			g_env.log << "Modulo int " << v1 << " / " << v2 << " = " << v3 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT v2 = stack.pop_float(bc);
		VM_FLOAT v1 = stack.pop_float(bc);
		VM_INT v3 = static_cast<VM_INT>(v1) % static_cast<VM_INT>(v2);
		stack.push_int(v3);
		if (!performance_build && runtime_debug)
			g_env.log << "Modulo float " << v1 << " / " << v2 << " = " << v3 << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_SQR()
{
	VM_FLOAT v1 = stack.pop_float(bc);
	VM_FLOAT v2 = std::sqrt(v1);
	stack.push_float(v2);
	if (!performance_build && runtime_debug)
		g_env.log << "SQR " << v1 << " =" << v2 << std::endl;
}

void VM::opcode_LN()
{
	VM_FLOAT v1 = stack.pop_float(bc);
	VM_FLOAT v2 = std::log(v1);
	stack.push_float(v2);
	if (!performance_build && runtime_debug)
		g_env.log << "LN " << v1 << " =" << v2 << std::endl;
}

void VM::opcode_LOG()
{
	VM_FLOAT v1 = stack.pop_float(bc);
	VM_FLOAT v2 = std::log10(v1);
	stack.push_float(v2);
	if (!performance_build && runtime_debug)
		g_env.log << "LOG " << v1 << " =" << v2 << std::endl;
}

void VM::opcode_EXP()
{
	VM_FLOAT v1 = stack.pop_float(bc);
	VM_FLOAT v2 = std::exp(v1);
	stack.push_float(v2);
	if (!performance_build && runtime_debug)
		g_env.log << "EXP " << v1 << " =" << v2 << std::endl;
}

void VM::opcode_ATN()
{
	VM_FLOAT v1 = stack.pop_float(bc);
	VM_FLOAT v2 = std::atan(v1);
	stack.push_float(v2);
	if (!performance_build && runtime_debug)
		g_env.log << "TAN" << v1 << " =" << v2 << std::endl;
}

void VM::opcode_TAN()
{
	VM_FLOAT v1 = stack.pop_float(bc);
	VM_FLOAT v2 = std::tan(v1);
	stack.push_float(v2);
	if (!performance_build && runtime_debug)
		g_env.log << "TAN" << v1 << " =" << v2 << std::endl;
}

void VM::opcode_COS()
{
	VM_FLOAT v1 = stack.pop_float(bc);
	VM_FLOAT v2 = std::cos(v1);
	stack.push_float(v2);
	if (!performance_build && runtime_debug)
		g_env.log << "COS " << v1 << " =" << v2 << std::endl;
}

void VM::opcode_SIN()
{
	VM_FLOAT v1 = stack.pop_float(bc);
	VM_FLOAT v2 = std::sin(v1);
	stack.push_float(v2);
	if (!performance_build && runtime_debug)
		g_env.log << "SIN " << v1 << " =" << v2 << std::endl;
}

void VM::opcode_ACS()
{
	VM_FLOAT v1 = stack.pop_float(bc);
	VM_FLOAT v2 = std::acos(v1);
	stack.push_float(v2);
	if (!performance_build && runtime_debug)
		g_env.log << "ACS " << v1 << " =" << v2 << std::endl;
}

void VM::opcode_ASN()
{
	VM_FLOAT v1 = stack.pop_float(bc);
	VM_FLOAT v2 = std::asin(v1);
	stack.push_float(v2);
	if (!performance_build && runtime_debug)
		g_env.log << "ASN " << v1 << " =" << v2 << std::endl;
}

void VM::opcode_DEG()
{
	VM_FLOAT v1 = stack.pop_float(bc);
	VM_FLOAT v2 = (v1 * 180.0) / M_PI;
	stack.push_float(v2);
	if (!performance_build && runtime_debug)
		g_env.log << "DEG " << v1 << " =" << v2 << std::endl;
}

void VM::opcode_RAD()
{
	VM_FLOAT v1 = stack.pop_float(bc);
	VM_FLOAT v2 = (v1 * M_PI) / 180.0;
	stack.push_float(v2);
	if (!performance_build && runtime_debug)
		g_env.log << "RAD " << v1 << " =" << v2 << std::endl;
}

void VM::opcode_SGN()
{
	VM_FLOAT v1 = stack.pop_float(bc);
	VM_INT r = 0;
	if (v1 < 0) {
		r = -1;
	}
	else if (v1 > 0) {
		r = 1;
	}
	stack.push_int(r);
	if (!performance_build && runtime_debug)
		g_env.log << "SGN of " << v1 << " =" << r << std::endl;
}

void VM::opcode_ABS()
{
	switch (bc.type) {
	case Type::INTEGER: {
		VM_INT v1 = stack.pop_int(bc);
		VM_INT v2 = abs(v1);
		stack.push_int(v2);
		if (!performance_build && runtime_debug)
			g_env.log << "ABS (Int) " << v1 << " = " << v2 << std::endl;
		return;
	}
	case Type::FLOAT: {
		VM_FLOAT v1 = stack.pop_float(bc);
		VM_FLOAT v2 = fabs(v1);
		stack.push_float(v2);
		if (!performance_build && runtime_debug)
			g_env.log << "ABS (Float) " << v1 << " = " << v2 << std::endl;
		return;
	}
	default:
		opcode_type_error();
	}
}

void VM::opcode_PI()
{
	stack.push_float(M_PI);
	if (!performance_build && runtime_debug)
		g_env.log << "PI" << std::endl;
}

void VM::opcode_TIME()
{
	VM_INT v = get_clock();
	stack.push_int(v);
	if (!performance_build && runtime_debug)
		g_env.log << "Time returned " << v << std::endl;
}

void VM::opcode_TIMES()
{
	time_t rawtime;
	struct tm* timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "%a,%e %b %y.%T", timeinfo);
	std::string v = buffer;
	stack.push_string(v);
	if (!performance_build && runtime_debug)
		g_env.log << "Time$ returned of '" << v << "'" << std::endl;
}

void VM::opcode_RND()
{
	int r = rand();
	stack.push_int(r);
	if (!performance_build && runtime_debug)
		g_env.log << "Random number: " << r << std::endl;
}

void VM::opcode_RNDREAL()
{
	VM_INT range = stack.pop_int(bc);
	if (range == 0) { // return last RND(1)
		if (!performance_build && runtime_debug)
			g_env.log << "Random number (repeated) " << last_random << std::endl;
		stack.push_float(last_random);
	}
	else if (range == 1) { // random number between 0 and 1
		last_random = (double)rand() / (double)RAND_MAX;
		if (!performance_build && runtime_debug)
			g_env.log << "Random number " << last_random << std::endl;
		stack.push_float(last_random);
	}
	else {
		error("Unsupported parameter for RND()");
	}
}

void VM::opcode_RNDRANGE()
{
	VM_INT range = stack.pop_int(bc);
	int r = rand() % range;
	r++;
	stack.push_int(r);
	if (!performance_build && runtime_debug)
		g_env.log << "Random number (range of " << range << "): " << r << std::endl;
}

void VM::opcode_OPENIN()
{
	VM_STRING filename = stack.pop_string(bc);
	FILE* file = fopen(filename.c_str(), "rb");
	if (!file) {
		error("File '" + filename + "' not opened");
	}
	else {
		VM_INT r = channel_index++;
		channels.insert(std::pair<VM_INT, FILE*>(r, file));
		stack.push_int(r);
		if (!performance_build && runtime_debug)
			g_env.log << "Open file for input '" << filename << "', channel# is " << r << std::endl;
	}
}

void VM::opcode_OPENOUT()
{
	VM_STRING filename = stack.pop_string(bc);
	FILE* file = fopen(filename.c_str(), "wb");
	if (!file) {
		error("File '" + filename + "' not created");
	}
	else {
		VM_INT r = channel_index++;
		channels.insert(std::pair<VM_INT, FILE*>(r, file));
		stack.push_int(r);
		if (!performance_build && runtime_debug)
			g_env.log << "Open file out '" << filename << "', channel# is " << r << std::endl;
	}
}

void VM::opcode_OPENUP()
{
	VM_STRING filename = stack.pop_string(bc);
	FILE* file = fopen(filename.c_str(), "ab");
	if (!file) {
		error("File '" + filename + "' not opened for appending");
	}
	else {
		VM_INT r = channel_index++;
		channels.insert(std::pair<VM_INT, FILE*>(r, file));
		stack.push_int(r);
		if (!performance_build && runtime_debug)
			g_env.log << "Open file for update '" << filename << "', channel# is " << r << std::endl;
	}
}

void VM::opcode_BGET()
{
	VM_INT channel = stack.pop_int(bc);
	if (channels.count(channel) == 0) {
		error("Unknown channel #" + std::to_string(channel));
	}
	auto g = channels.find(channel);
	char b = fgetc((*g).second);
	stack.push_int(static_cast<VM_INT>(b));
	if (!performance_build && runtime_debug)
		g_env.log << "Read byte " << b << " from channel# " << channel << std::endl;
}

void VM::opcode_EOFH()
{
	VM_INT channel = stack.pop_int(bc);
	if (channels.count(channel) == 0) {
		error("Unknown channel #" + std::to_string(channel));
	}
	auto g = channels.find(channel);
	VM_INT eof = feof((*g).second);
	stack.push_int(eof);
	if (!performance_build && runtime_debug)
		g_env.log << "Eof check " << eof << " on channel# " << channel << std::endl;
}

void VM::opcode_BPUT()
{
	VM_INT byte = stack.pop_int(bc);
	VM_INT channel = stack.pop_int(bc);
	if (channels.count(channel) == 0) {
		error("Unknown channel #" + std::to_string(channel));
	}
	auto g = channels.find(channel);
	fputc(byte, (*g).second);
	if (!performance_build && runtime_debug)
		g_env.log << "Write byte " << byte << " to channel# " << channel << std::endl;
}

void VM::opcode_PTR()
{
	VM_INT channel = stack.pop_int(bc);
	auto g = channels.find(channel);
	if (channels.count(channel) == 0) {
		error("Unknown channel #" + std::to_string(channel));
	}
	auto pos = ftell((*g).second);
	stack.push_int(pos);
	if (!performance_build && runtime_debug)
		g_env.log << "Fetch position " << pos << " of channel# " << channel << std::endl;
}

void VM::opcode_PTRA()
{
	VM_INT position = stack.pop_int(bc);
	VM_INT channel = stack.pop_int(bc);
	if (channels.count(channel) == 0) {
		error("Unknown channel #" + std::to_string(channel));
	}
	auto g = channels.find(channel);
	fseek((*g).second, position, SEEK_SET);
	if (!performance_build && runtime_debug)
		g_env.log << "Set position " << position << " of channel# " << channel << std::endl;
}

void VM::opcode_GETSH()
{
	VM_INT channel = stack.pop_int(bc);
	auto g = channels.find(channel);
	if (channels.count(channel) == 0) {
		error("Unknown channel #" + std::to_string(channel));
	}
	auto ch = (*g).second;
	VM_STRING out = "";
	while (!feof(ch)) {
		char b = fgetc(ch);
		if (b == '\n') {
			break;
		}
		if (b >= 32) {
			out += b;
		}
	}
	stack.push_string(out);
	if (!performance_build && runtime_debug)
		g_env.log << "Get$# '" << out << "' of channel# " << channel << std::endl;
}

void VM::opcode_CLOSE()
{
	VM_INT r = stack.pop_int(bc);
	if (channels.count(r) == 0) {
		error("Unknown channel #" + std::to_string(r));
	}
	auto g = channels.find(r);
	fclose((*g).second);
	channels.erase(r);
	if (!performance_build && runtime_debug)
		g_env.log << "Close file channel# is " << r << std::endl;
}

void VM::opcode_LISTFILES()
{
	auto var = variables.get_variable(bc);
	VM_STRING v = stack.pop_string(bc);
	std::vector<std::string> files;
#ifdef RISCOS
	_kernel_swi_regs regs;
	int i = 0;
	do {
		char buf[256];
		regs.r[0] = 9;
		regs.r[1] = (int)v.c_str();
		regs.r[2] = (int)&buf;
		regs.r[3] = 1;
		regs.r[4] = i++;
		regs.r[5] = 256;
		regs.r[6] = 0;
		_kernel_swi(OS_GBPB, &regs, &regs);
		files.push_back(buf);
	} while (regs.r[4] != -1);
#elif __unix__
#else
	v.append("\\*");
	std::wstring pattern = s2ws(v);
	WIN32_FIND_DATA data;
	HANDLE hFind;
	if ((hFind = FindFirstFile(pattern.c_str(), &data)) != INVALID_HANDLE_VALUE) {
		do {
			std::wstring r(data.cFileName);
			auto s = ws2s(data.cFileName);
			if (s.compare(".") != 0 && s.compare("..") != 0) {
				files.push_back(s);
			}
		} while (FindNextFile(hFind, &data) != 0);
		FindClose(hFind);
	}
#endif

	// Dim destination array
	auto size = files.size();
	var->set_type_default(Type::STRING_ARRAY);
	var->set_string_array_size(size);
	var->set_1d_dimensions(size);
	if (!performance_build && runtime_debug)
		g_env.log << "Dimension string variable " << var->get_name() << " with size " << size << std::endl;

	// And copy values over
	int i = 0;
	for (auto it = files.begin(); it != files.end(); ++it) {
		var->set_string_array_item(i++, *it);
	}
}

void VM::opcode_ASC()
{
	VM_STRING v = stack.pop_string(bc);
	VM_INT c = -1;
	if (v.length() != 0) {
		c = v[0];
	}
	stack.push_int(c);
	if (!performance_build && runtime_debug)
		g_env.log << "ASC of string '" << v << "' is " << c << std::endl;
}

void VM::opcode_VAL()
{
	VM_STRING v = stack.pop_string(bc);
	VM_FLOAT c;
	try {
		c = std::stod(v);
	}
	catch (const std::invalid_argument&) {
		error("Invalid argument '" + v + "' to VAL");
	}
	stack.push_float(c);
	if (!performance_build && runtime_debug)
		g_env.log << "VAL of string '" << v << "' is " << c << std::endl;
}

void VM::opcode_STRS()
{
	VM_FLOAT v = stack.pop_float(bc);
	std::stringstream stream;
	stream << std::dec << v;
	VM_STRING v2(stream.str());
	stack.push_string(v2);
	if (!performance_build && runtime_debug)
		g_env.log << "STR$ of " << v << " is string '" << v2 << "'" << std::endl;
}

void VM::opcode_STRS_H()
{
	VM_FLOAT v = stack.pop_float(bc);
	std::stringstream stream;
	stream << std::hex << std::uppercase << static_cast<int>(v);
	VM_STRING v2(stream.str());
	stack.push_string(v2);
	if (!performance_build && runtime_debug)
		g_env.log << "STR$ of " << v << " is string '" << v << "'" << std::endl;
}

void VM::opcode_STRINGS()
{
	VM_STRING v2 = stack.pop_string(bc);
	VM_INT v1 = stack.pop_int(bc);
	VM_STRING v3 = "";
	for (int i = 0; i < v1; i++) {
		v3 += v2;
	}
	stack.push_string(v3);
	if (!performance_build && runtime_debug)
		g_env.log << "STRING$ of '" << v1 << "' x " << v2 << " is string '" << v3 << "'" << std::endl;
}

void VM::opcode_INSTR()
{
	VM_INT start = stack.pop_int(bc);
	VM_STRING substring = stack.pop_string(bc);
	VM_STRING string = stack.pop_string(bc);
	VM_INT v = static_cast<VM_INT>(string.find(substring, start)) + 1;
	stack.push_int(v);
	if (!performance_build && runtime_debug)
		g_env.log << "INSTR of string '" << substring << "' in string '" << string << "' with start of " << start << " is " << v << std::endl;
}

void VM::opcode_LEFTS()
{
	VM_INT v1 = stack.pop_int(bc);
	VM_STRING string = stack.pop_string(bc);
	VM_STRING v = string.substr(0, v1);
	stack.push_string(v);
	if (!performance_build && runtime_debug)
		g_env.log << "LEFT$ of string '" << string << "' with length of " << v1 << " is " << v << std::endl;
}

void VM::opcode_MIDS()
{
	VM_INT v2 = stack.pop_int(bc);
	VM_INT v1 = stack.pop_int(bc) - 1;
	VM_STRING string = stack.pop_string(bc);
	if (v2 == 0) {
		v2 = static_cast<VM_INT>(string.length()) - v1;
	}
	VM_STRING v = string.substr(v1, v2);
	stack.push_string(v);
	if (!performance_build && runtime_debug)
		g_env.log << "MID$ of string '" << string << "' with start of " << v1 << " and length of " << v2 << " is " << v << std::endl;
}

void VM::opcode_RIGHTS()
{
	VM_INT v1 = stack.pop_int(bc);
	VM_STRING string = stack.pop_string(bc);
	size_t p = static_cast<size_t>(string.length()) - v1;
	VM_STRING v = string.substr(p, v1);
	stack.push_string(v);
	if (!performance_build && runtime_debug)
		g_env.log << "RIGHT$ of string '" << string << "' with length of " << v1 << " is " << v << std::endl;
}

void VM::opcode_LEN()
{
	VM_STRING string = stack.pop_string(bc);
	size_t l = static_cast<size_t>(string.length());
	stack.push_int(static_cast<VM_INT>(l));
	if (!performance_build && runtime_debug)
		g_env.log << "LEN of string '" << string << "' is " << l << std::endl;
}

void VM::opcode_CHRS()
{
	VM_INT v = stack.pop_int(bc) & 0xFF;
	VM_STRING c = " ";
	c[0] = v;
	stack.push_string(c);
	if (!performance_build && runtime_debug)
		g_env.log << "CHR$ of " << v << " is string '" << v << "'" << std::endl;
}

void VM::opcode_CLS()
{
	g_env.graphics.cls();
	if (!performance_build && runtime_debug)
		g_env.log << "Clear text screen" << std::endl;
}

void VM::opcode_CURSORON() {
	g_env.graphics.cursor_on();
	if (!performance_build && runtime_debug)
		g_env.log << "Text cursor on" << std::endl;
}

void VM::opcode_CURSOROFF() {
	g_env.graphics.cursor_off();
	if (!performance_build && runtime_debug)
		g_env.log << "Text cursor off" << std::endl;
}

void VM::opcode_COLOURRGB()
{
	VM_INT b = stack.pop_int(bc);
	VM_INT g = stack.pop_int(bc);
	VM_INT r = stack.pop_int(bc);
	g_env.graphics.colour(r, g, b);
	if (!performance_build && runtime_debug)
		g_env.log << "Set RGB graphics colour to " << r << "," << g << "," << b << std::endl;
}

void VM::opcode_COLOURHEX()
{
	VM_INT c = stack.pop_int(bc);
	g_env.graphics.colour_hex(c);
	if (!performance_build && runtime_debug)
		g_env.log << "Set HEX graphics colour to " << std::hex << c << std::dec << std::endl;
}

void VM::opcode_COLOURBGRGB()
{
	VM_INT b = stack.pop_int(bc);
	VM_INT g = stack.pop_int(bc);
	VM_INT r = stack.pop_int(bc);
	g_env.graphics.colour_bg(r, g, b);
	if (!performance_build && runtime_debug)
		g_env.log << "Set RGB graphics background colour to " << r << "," << g << "," << b << std::endl;
}

void VM::opcode_COLOURBGHEX()
{
	VM_INT c = stack.pop_int(bc);
	g_env.graphics.colour_bg_hex(c);
	if (!performance_build && runtime_debug)
		g_env.log << "Set HEX graphics background colour to " << std::hex << c << std::dec << std::endl;
}

void VM::opcode_COLOUREXPRESSION()
{
	VM_INT b = stack.pop_int(bc);
	VM_INT g = stack.pop_int(bc);
	VM_INT r = stack.pop_int(bc);
	VM_INT c = (r << 16) | (g << 8) | b;
	stack.push_int(c);
	if (!performance_build && runtime_debug)
		g_env.log << "Convert RGB colour " << r << "," << g << "," << b << " to " << std::hex << c << std::dec << std::endl;
}

void VM::opcode_FLIP()
{
	g_env.graphics.flip(true);
	if (!performance_build && runtime_debug)
		g_env.log << "Flip screen" << std::endl;
}

void VM::opcode_GRAPHICS()
{
	VM_INT mode = stack.pop_int(bc);
	VM_INT y = stack.pop_int(bc);
	VM_INT x = stack.pop_int(bc);
	if (x == -1)
		x = g_env.graphics.get_screen_width();
	if (y == -1)
		y = g_env.graphics.get_screen_height();
	g_env.graphics.open(x, y, mode == 0 ? Mode::CLASSIC : Mode::BANKED, g_env.cwd);
	world.set_screen_size(g_env.graphics.get_actual_width(), g_env.graphics.get_actual_height());
	if (!performance_build && runtime_debug)
		g_env.log << "Change screen mode to " << x << " x " << y << std::endl;
}

void VM::opcode_PLOT()
{
	VM_INT y = stack.pop_int(bc);
	VM_INT x = stack.pop_int(bc);
	g_env.graphics.plot(x, y);
	if (!performance_build && runtime_debug)
		g_env.log << "Plot pixel at " << x << " x " << y << std::endl;
}

void VM::opcode_POINT()
{
	VM_INT y = stack.pop_int(bc);
	VM_INT x = stack.pop_int(bc);
	VM_INT v = g_env.graphics.point(x, y);
	stack.push_int(v);
	if (!performance_build && runtime_debug)
		g_env.log << "Point pixel " << x << " x " << y << " is " << v << std::endl;
}

void VM::opcode_CLIP()
{
	VM_INT y2 = stack.pop_int(bc);
	VM_INT x2 = stack.pop_int(bc);
	VM_INT y1 = stack.pop_int(bc);
	VM_INT x1 = stack.pop_int(bc);
	g_env.graphics.clip(x1, y1, x2, y2);
	if (!performance_build && runtime_debug)
		g_env.log << "Set clip region as " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
}

void VM::opcode_CLIPOFF()
{
	g_env.graphics.clipoff();
	if (!performance_build && runtime_debug)
		g_env.log << "Disabling clip" << std::endl;
}

void VM::opcode_SHOWFPS()
{
	g_env.graphics.show_fps();
	if (!performance_build && runtime_debug)
		g_env.log << "Show FPS" << std::endl;
}

void VM::opcode_SCREENWIDTH()
{
	VM_INT v = g_env.graphics.get_screen_width();
	stack.push_int(v);
	if (!performance_build && runtime_debug)
		g_env.log << "Screen width is " << v << std::endl;
}

void VM::opcode_SCREENHEIGHT()
{
	VM_INT v = g_env.graphics.get_screen_height();
	stack.push_int(v);
	if (!performance_build && runtime_debug)
		g_env.log << "Screen height is " << v << std::endl;
}

void VM::opcode_LOADTYPEFACE()
{
	VM_STRING v = stack.pop_string(bc);
	VM_INT id = g_env.graphics.load_font(v.c_str());
	stack.push_int(id);
	if (!performance_build && runtime_debug)
		g_env.log << "Loaded typeface '" << v << "', returned ID is " << id << std::endl;
}

void VM::opcode_CREATEFONT()
{
	VM_INT size = stack.pop_int(bc);
	VM_INT index = stack.pop_int(bc);
	VM_INT id = g_env.graphics.create_font_by_size(index, size);
	stack.push_int(id);
	if (!performance_build && runtime_debug)
		g_env.log << "Create font " << index << "/" << index << ", returned ID is " << id << std::endl;
}

void VM::opcode_TEXT()
{
	VM_STRING text = stack.pop_string(bc);
	VM_INT y = stack.pop_int(bc);
	VM_INT x = stack.pop_int(bc);
	VM_INT index = stack.pop_int(bc);
	g_env.graphics.print_text(index, text, x, y);
	if (!performance_build && runtime_debug)
		g_env.log << "Showing text '" << text << "', font ID " << index << " at " << x << "," << y << std::endl;
}

void VM::opcode_TEXTRIGHT()
{
	VM_STRING text = stack.pop_string(bc);
	VM_INT y = stack.pop_int(bc);
	VM_INT x = stack.pop_int(bc);
	VM_INT index = stack.pop_int(bc);
	g_env.graphics.print_text_right(index, text, x, y);
	if (!performance_build && runtime_debug)
		g_env.log << "Showing text '" << text << "', font ID " << index << " at " << x << "," << y << std::endl;
}

void VM::opcode_TEXTCENTRE()
{
	VM_STRING text = stack.pop_string(bc);
	VM_INT y = stack.pop_int(bc);
	VM_INT x = stack.pop_int(bc);
	VM_INT index = stack.pop_int(bc);
	g_env.graphics.print_text_centre(index, text, x, y);
	if (!performance_build && runtime_debug)
		g_env.log << "Showing text '" << text << "', font ID " << index << " at " << x << "," << y << std::endl;
}

void VM::opcode_LOADSPRITE() {
	VM_STRING filename = stack.pop_string(bc);
	VM_INT handle = g_env.graphics.create_sprite_from_image(filename);
	stack.push_int(handle);
	if (!performance_build && runtime_debug)
		g_env.log << "Loaded sprite at '" << filename << "', handle is " << handle << std::endl;
}

void VM::opcode_CREATESPRITE() {
	VM_INT banks = stack.pop_int(bc);
	VM_INT h = stack.pop_int(bc);
	VM_INT w = stack.pop_int(bc);
	VM_INT handle = g_env.graphics.create_sprite(w, h, banks);
	stack.push_int(handle);
	if (!performance_build && runtime_debug)
		g_env.log << "Creating sprite of " << w << "x" << h << " of " << banks << "banks, handle is " << handle << std::endl;
}

void VM::opcode_DELETESPRITE() {
	VM_INT handle = stack.pop_int(bc);
	g_env.graphics.delete_sprite(handle);
	if (!performance_build && runtime_debug)
		g_env.log << "Deleting sprite " << handle << std::endl;
}

void VM::opcode_RENDERTOSPRITE() {
	VM_INT y = stack.pop_int(bc);
	VM_INT x = stack.pop_int(bc);
	VM_INT bank = stack.pop_int(bc);
	VM_INT handle = stack.pop_int(bc);
	g_env.graphics.render_to_sprite(handle, bank, x, y);
	if (!performance_build && runtime_debug)
		g_env.log << "Render to sprite " << handle << ":" << bank << " offset " << x << "," << y << std::endl;
}

void VM::opcode_RENDERTOSCREEN() {
	g_env.graphics.render_to_screen();
}

void VM::opcode_DRAWSPRITE() {
	VM_INT y = stack.pop_int(bc);
	VM_INT x = stack.pop_int(bc);
	VM_INT bank = stack.pop_int(bc);
	VM_INT handle = stack.pop_int(bc);
	auto r = g_env.graphics.draw_sprite(handle, bank, x, y);
	if (!r) {
		error("Sprite " + std::to_string(handle) + ", error drawing");
	}
	if (!performance_build && runtime_debug)
		g_env.log << "Render to sprite " << handle << ":" << bank << " offset " << x << "," << y << std::endl;
}

void VM::opcode_CREATEVERTEX()
{
	auto b = variables.get_variable(bc);
	VM_INT colour = stack.pop_int(bc);
	VM_FLOAT z = stack.pop_float(bc);
	VM_FLOAT y = stack.pop_float(bc);
	VM_FLOAT x = stack.pop_float(bc);
	VM_INT array_index = stack.pop_int(bc);

	auto base = static_cast<size_t>(array_index) * 4;

	// Valid?
	if (b->get_type() != Type::TYPE_ARRAY || b->get_fields_count() < (array_index * 4)) {
		error("First parameter needs to be a correctly sized TYPE ARRAY");
	}

	// X

	auto field = b->get_field(base);
	field->set_float(x);

	// Y
	field = b->get_field(base + 1);
	field->set_float(y);

	// Z
	field = b->get_field(base + 2);
	field->set_float(z);

	// colour
	field = b->get_field(base + 3);
	field->set_integer(colour);
}

void VM::opcode_CREATETRIANGLE()
{
	auto b = variables.get_variable(bc);
	VM_INT colour = stack.pop_int(bc);
	VM_INT v3 = stack.pop_int(bc);
	VM_INT v2 = stack.pop_int(bc);
	VM_INT v1 = stack.pop_int(bc);
	VM_INT array_index = stack.pop_int(bc);

	auto base = static_cast<size_t>(array_index) * 4;

	// Valid?
	if (b->get_type() != Type::TYPE_ARRAY || b->get_fields_count() < (array_index * 4)) {
		error("First parameter needs to be a correctly sized TYPE ARRAY");
	}

	// Vertex 1
	auto field = b->get_field(base);
	field->set_integer(v1);

	// Vertex 2
	field = b->get_field(base + 1);
	field->set_integer(v2);

	// Vertex 3
	field = b->get_field(base + 2);
	field->set_integer(v3);

	// colour
	field = b->get_field(base + 3);
	field->set_integer(colour);
}

void VM::opcode_CREATESHAPE()
{
	auto variable2 = variables.get_variable(bc);
	VM_INT var2 = stack.pop_int(bc);
	auto variable1 = variables.get_variable_by_int(bc, var2);

	// Check
	if (variable1->get_type() != Type::TYPE_ARRAY || variable2->get_type() != Type::TYPE_ARRAY) {
		error("Both parameters need to be TYPE ARRAY");
	}

	VM_INT id = world.create_shape(variable1, variable2);
	stack.push_int(id);
}

void VM::opcode_CREATEOBJECT()
{
	VM_INT render_type = stack.pop_int(bc);
	VM_FLOAT scale = stack.pop_float(bc);
	VM_FLOAT rz = stack.pop_float(bc);
	VM_FLOAT ry = stack.pop_float(bc);
	VM_FLOAT rx = stack.pop_float(bc);
	VM_FLOAT z = stack.pop_float(bc);
	VM_FLOAT y = stack.pop_float(bc);
	VM_FLOAT x = stack.pop_float(bc);
	VM_INT id = stack.pop_int(bc);
	VM_INT obj_id = world.create_object(id, x, y, z, rx, ry, rz, scale, render_type);
	stack.push_int(obj_id);
}

void VM::opcode_OBJECTTRANSLATE()
{
	VM_FLOAT z = stack.pop_float(bc);
	VM_FLOAT y = stack.pop_float(bc);
	VM_FLOAT x = stack.pop_float(bc);
	VM_INT id = stack.pop_int(bc);
	world.object_translate(id, x, y, z);
}

void VM::opcode_OBJECTROTATE()
{
	VM_FLOAT z = stack.pop_float(bc);
	VM_FLOAT y = stack.pop_float(bc);
	VM_FLOAT x = stack.pop_float(bc);
	VM_INT id = stack.pop_int(bc);
	world.object_rotate(id, x, y, z);
}

void VM::opcode_OBJECTSCALE()
{
	VM_FLOAT scale = stack.pop_float(bc);
	VM_INT id = stack.pop_int(bc);
	world.object_scale(id, scale);
}

void VM::opcode_DELETEOBJECT()
{
	VM_INT id = stack.pop_int(bc);
	world.object_delete(id);
}

void VM::opcode_RENDERFRAME()
{
	world.render();
}

void VM::opcode_LINE()
{
	VM_INT y2 = stack.pop_int(bc);
	VM_INT x2 = stack.pop_int(bc);
	VM_INT y1 = stack.pop_int(bc);
	VM_INT x1 = stack.pop_int(bc);
	g_env.graphics.line(x1, y1, x2, y2);
	if (!performance_build && runtime_debug)
		g_env.log << "Line from " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
}

void VM::opcode_CIRCLE()
{
	VM_INT r = stack.pop_int(bc);
	VM_INT y = stack.pop_int(bc);
	VM_INT x = stack.pop_int(bc);
	g_env.graphics.circle(x, y, r, false);
	if (!performance_build && runtime_debug)
		g_env.log << "Circle at " << x << "," << y << ", r " << r << std::endl;
}

void VM::opcode_CIRCLEFILL()
{
	VM_INT r = stack.pop_int(bc);
	VM_INT y = stack.pop_int(bc);
	VM_INT x = stack.pop_int(bc);
	g_env.graphics.circle(x, y, r, true);
	if (!performance_build && runtime_debug)
		g_env.log << "Filled circle at " << x << "," << y << ", r " << r << std::endl;
}

void VM::opcode_RECTANGLE()
{
	VM_INT y2 = stack.pop_int(bc);
	VM_INT x2 = stack.pop_int(bc);
	VM_INT y1 = stack.pop_int(bc);
	VM_INT x1 = stack.pop_int(bc);
	g_env.graphics.line(x1, y1, x2, y1);
	g_env.graphics.line(x1, y2, x2, y2);
	g_env.graphics.line(x1, y1, x1, y2);
	g_env.graphics.line(x2, y1, x2, y2);
	if (!performance_build && runtime_debug)
		g_env.log << "Rectangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
}

void VM::opcode_RECTANGLEFILL()
{
	VM_INT y2 = stack.pop_int(bc);
	VM_INT x2 = stack.pop_int(bc);
	VM_INT y1 = stack.pop_int(bc);
	VM_INT x1 = stack.pop_int(bc);
	g_env.graphics.rectangle(x1, y1, x2, y2);
	if (!performance_build && runtime_debug)
		g_env.log << "Filled rectangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
}

void VM::opcode_TRIANGLE()
{
	VM_INT y3 = stack.pop_int(bc);
	VM_INT x3 = stack.pop_int(bc);
	VM_INT y2 = stack.pop_int(bc);
	VM_INT x2 = stack.pop_int(bc);
	VM_INT y1 = stack.pop_int(bc);
	VM_INT x1 = stack.pop_int(bc);
	g_env.graphics.line(x1, y1, x2, y2);
	g_env.graphics.line(x2, y2, x3, y3);
	g_env.graphics.line(x3, y3, x1, y1);
	if (!performance_build && runtime_debug)
		g_env.log << "Triangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << " to " << x3 << "," << y3 << std::endl;
}

void VM::opcode_TRIANGLEFILL()
{
	VM_INT y3 = stack.pop_int(bc);
	VM_INT x3 = stack.pop_int(bc);
	VM_INT y2 = stack.pop_int(bc);
	VM_INT x2 = stack.pop_int(bc);
	VM_INT y1 = stack.pop_int(bc);
	VM_INT x1 = stack.pop_int(bc);
	g_env.graphics.triangle(x1, y1, x2, y2, x3, y3);
	if (!performance_build && runtime_debug)
		g_env.log << "Filled triangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << " to " << x3 << "," << y3 << std::endl;
}

void VM::opcode_TRIANGLESHADED()
{
	VM_INT c3 = stack.pop_int(bc);
	VM_INT y3 = stack.pop_int(bc);
	VM_INT x3 = stack.pop_int(bc);
	VM_INT c2 = stack.pop_int(bc);
	VM_INT y2 = stack.pop_int(bc);
	VM_INT x2 = stack.pop_int(bc);
	VM_INT c1 = stack.pop_int(bc);
	VM_INT y1 = stack.pop_int(bc);
	VM_INT x1 = stack.pop_int(bc);
	g_env.graphics.gouraud_triangle(x1, y1, x2, y2, x3, y3, c1, c2, c3, false);
	if (!performance_build && runtime_debug)
		g_env.log << "Shaded triangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << " to " << x3 << "," << y3 << std::endl;
}

void VM::opcode_INKEY()
{
	VM_INT timeout = stack.pop_int(bc);
	VM_INT v = g_env.graphics.inkey(timeout);
	stack.push_int(v);
}

void VM::opcode_INKEYS()
{
	VM_INT timeout = stack.pop_int(bc);
	VM_STRING v = g_env.graphics.inkeys(timeout);
	stack.push_string(v);
}

void VM::opcode_GET()
{
	VM_INT v = g_env.graphics.get();
	stack.push_int(v);
}

void VM::opcode_GETS()
{
	VM_STRING v = g_env.graphics.gets();
	stack.push_string(v);
}

void VM::opcode_MOUSE()
{
	VM_INT v3 = stack.pop_int(bc);
	VM_INT v2 = stack.pop_int(bc);
	auto var1 = variables.get_variable(bc);
	auto var2 = variables.get_variable_by_int(bc, v2);
	auto var3 = variables.get_variable_by_int(bc, v3);

	// Check all are correct type
	if (var1->get_type() != Type::INTEGER || var2->get_type() != Type::INTEGER || var3->get_type() != Type::INTEGER) {
		error("MOUSE expects three INTEGER variables");
	}

	VM_INT x, y, state;
	g_env.graphics.mouse(&x, &y, &state);
	var1->set_integer(x);
	var2->set_integer(y);
	var3->set_integer(state);
}

std::string VM::run()
{
	g_env.log << "-> Running" << std::endl;
	helper_bytecodes().pc = 0;
	bc = helper_bytecodes().get_current_bytecode();
	data_iterator = data.begin();
	stack.clear_stack(bc);
	bool quit = false;
	int poll_count = 0;
	world.set_screen_size(g_env.graphics.get_actual_width(), g_env.graphics.get_actual_height());
	try {
		while (!quit) {
			if (!performance_build && runtime_debug) {
				g_env.process_log();
			}

			poll_count++;
			if (poll_count % 64 == 0) {
				g_env.graphics.poll();
				if (g_env.interactive && g_env.graphics.inkey(-113)) {
					// Are we in BANKED mode?
					if (g_env.graphics.is_banked()) {
						g_env.graphics.open(g_env.graphics.get_actual_width(), g_env.graphics.get_actual_height(), Mode::CLASSIC, g_env.cwd);
					}
					g_env.graphics.print_console("Escape\r");
					return "";
				}
			}

			bc = helper_bytecodes().get_current_bytecode();
			helper_bytecodes().next();
			if (!performance_build && runtime_debug) {
				auto flp = file_and_line_lookup(bc.line_number);
				g_env.log << std::uppercase << "[" << std::setw(4) << flp.file_number << " : " << std::setw(8) << flp.line << " : " << std::hex << std::setw(8)
					<< helper_bytecodes().pc - 1 << " : " << std::setw(2) << (int)bc.opcode << "]  " << std::nouppercase << std::dec;
			}
			switch (bc.opcode) {
			case Bytecodes::NOP:
				if (!performance_build && runtime_debug)
					g_env.log << "NOP" << std::endl;
				break;
			case Bytecodes::HALT:
				opcode_HALT();
				quit = true;
				break;
			case Bytecodes::STACKCHECK:
				if (stack.get_stack_size() > 0) {
					error("DEBUG: Stack isn't empty, has " + std::to_string(stack.get_stack_size()) + " items");
				}
				break;
			case Bytecodes::TRACEON:
				runtime_debug = true;
				break;
			case Bytecodes::TRACEOFF:
				g_env.log << std::endl;
				runtime_debug = false;
				break;
			case Bytecodes::BREAKPOINT:
				Debugger();
				break;
			case Bytecodes::DROP:
				opcode_DROP();
				break;

				// Loading and storing
			case Bytecodes::FASTCONST_VAR:
				opcode_FASTCONST_VAR();
				break;
			case Bytecodes::FASTCONST:
				opcode_FASTCONST();
				break;
			case Bytecodes::FASTCONST_AS_FLOAT:
				opcode_FASTCONST_AS_FLOAT();
				break;
			case Bytecodes::LOAD:
				opcode_LOAD();
				break;
			case Bytecodes::LOAD_AS_FLOAT:
				opcode_LOAD_AS_FLOAT();
				break;
			case Bytecodes::STORE:
				opcode_STORE();
				break;

				/* Arrays */
			case Bytecodes::DIM:
				opcode_DIM();
				break;
			case Bytecodes::ARRAYSIZE:
				opcode_ARRAYSIZE();
				break;
			case Bytecodes::LOAD_ARRAY:
				opcode_LOAD_ARRAY();
				break;
			case Bytecodes::STORE_ARRAY:
				opcode_STORE_ARRAY();
				break;

				/* Types and fields */
			case Bytecodes::LOAD_FIELD:
				opcode_LOAD_FIELD();
				break;
			case Bytecodes::STORE_FIELD:
				opcode_STORE_FIELD();
				break;
			case Bytecodes::LOAD_FIELD_ARRAY:
				opcode_LOAD_FIELD_ARRAY();
				break;
			case Bytecodes::STORE_FIELD_ARRAY:
				opcode_STORE_FIELD_ARRAY();
				break;

				/* Maths*/
			case Bytecodes::MULTIPLY:
				opcode_MULTIPLY();
				break;
			case Bytecodes::DIVIDE:
				opcode_DIVIDE();
				break;
			case Bytecodes::UNARY:
				opcode_UNARY();
				break;
			case Bytecodes::ADD:
				opcode_ADD();
				break;
			case Bytecodes::SHL:
				opcode_SHL();
				break;
			case Bytecodes::SHR:
				opcode_SHR();
				break;
			case Bytecodes::SUBTRACT:
				opcode_SUBTRACT();
				break;
			case Bytecodes::POWER:
				opcode_POWER();
				break;
			case Bytecodes::DIV:
				opcode_DIV();
				break;
			case Bytecodes::MOD:
				opcode_MOD();
				break;
			case Bytecodes::SQR:
				opcode_SQR();
				break;
			case Bytecodes::LN:
				opcode_LN();
				break;
			case Bytecodes::LOG:
				opcode_LOG();
				break;
			case Bytecodes::EXP:
				opcode_EXP();
				break;
			case Bytecodes::ATN:
				opcode_ATN();
				break;
			case Bytecodes::TAN:
				opcode_TAN();
				break;
			case Bytecodes::COS:
				opcode_COS();
				break;
			case Bytecodes::SIN:
				opcode_SIN();
				break;
			case Bytecodes::ACS:
				opcode_ACS();
				break;
			case Bytecodes::ASN:
				opcode_ASN();
				break;
			case Bytecodes::DEG:
				opcode_DEG();
				break;
			case Bytecodes::RAD:
				opcode_RAD();
				break;
			case Bytecodes::SGN:
				opcode_SGN();
				break;
			case Bytecodes::ABS:
				opcode_ABS();
				break;
			case Bytecodes::PI:
				opcode_PI();
				break;

				/* Type conversions */
			case Bytecodes::CONV_FLOAT:
				opcode_CONV_FLOAT();
				break;
			case Bytecodes::CONV_INT:
				opcode_CONV_INT();
				break;

				/* Print and input */
			case Bytecodes::INPUT:
				opcode_INPUT();
				break;
			case Bytecodes::PRINT:
				opcode_PRINT();
				break;
			case Bytecodes::PRINT_NL:
				opcode_PRINT_NL();
				break;
			case Bytecodes::PRINT_SPC:
				opcode_PRINT_SPC();
				break;
			case Bytecodes::NEW_TYPE:
				opcode_NEW_TYPE();
				break;
			case Bytecodes::NEW_TYPE_ARRAY:
				opcode_NEW_TYPE_ARRAY();
				break;
			case Bytecodes::DUP:
				opcode_DUP();
				break;
			case Bytecodes::ROT:
				opcode_ROT();
				break;
			case Bytecodes::FOR:
				opcode_FOR();
				break;
			case Bytecodes::NEXT:
				opcode_NEXT();
				break;
			case Bytecodes::FORIN:
				opcode_FORIN();
				break;
			case Bytecodes::NEXTIN:
				opcode_NEXTIN();
				break;
			case Bytecodes::REPEAT:
				opcode_REPEAT();
				break;
			case Bytecodes::JNEREP:
				opcode_JNEREP();
				break;

				/* DATA */
			case Bytecodes::READ:
				opcode_READ();
				break;
			case Bytecodes::RESTORE:
				opcode_RESTORE();
				break;

				/* Functions */
			case Bytecodes::TIME:
				opcode_TIME();
				break;
			case Bytecodes::TIMES:
				opcode_TIMES();
				break;
			case Bytecodes::RND:
				opcode_RND();
				break;
			case Bytecodes::RNDRANGE:
				opcode_RNDRANGE();
				break;
			case Bytecodes::RNDREAL:
				opcode_RNDREAL();
				break;

				/* File I/O */
			case Bytecodes::CLOSE:
				opcode_CLOSE();
				break;
			case Bytecodes::OPENIN:
				opcode_OPENIN();
				break;
			case Bytecodes::OPENOUT:
				opcode_OPENOUT();
				break;
			case Bytecodes::OPENUP:
				opcode_OPENUP();
				break;
			case Bytecodes::BPUT:
				opcode_BPUT();
				break;
			case Bytecodes::BGET:
				opcode_BGET();
				break;
			case Bytecodes::EOFH:
				opcode_EOFH();
				break;
			case Bytecodes::PTR:
				opcode_PTR();
				break;
			case Bytecodes::PTRA:
				opcode_PTRA();
				break;
			case Bytecodes::GETSH:
				opcode_GETSH();
				break;
			case Bytecodes::LISTFILES:
				opcode_LISTFILES();
				break;

				/* 2D Graphics */
			case Bytecodes::CLS:
				opcode_CLS();
				break;
			case Bytecodes::CURSORON:
				opcode_CURSORON();
				break;
			case Bytecodes::CURSOROFF:
				opcode_CURSOROFF();
				break;
			case Bytecodes::COLOURRGB:
				opcode_COLOURRGB();
				break;
			case Bytecodes::COLOURHEX:
				opcode_COLOURHEX();
				break;
			case Bytecodes::COLOURBGRGB:
				opcode_COLOURBGRGB();
				break;
			case Bytecodes::COLOURBGHEX:
				opcode_COLOURBGHEX();
				break;
			case Bytecodes::COLOUREXPRESSION:
				opcode_COLOUREXPRESSION();
				break;
			case Bytecodes::FLIP:
				opcode_FLIP();
				break;
			case Bytecodes::GRAPHICS:
				opcode_GRAPHICS();
				break;
			case Bytecodes::LINE:
				opcode_LINE();
				break;
			case Bytecodes::PLOT:
				opcode_PLOT();
				break;
			case Bytecodes::POINT:
				opcode_POINT();
				break;
			case Bytecodes::CIRCLE:
				opcode_CIRCLE();
				break;
			case Bytecodes::CIRCLEFILL:
				opcode_CIRCLEFILL();
				break;
			case Bytecodes::RECTANGLE:
				opcode_RECTANGLE();
				break;
			case Bytecodes::RECTANGLEFILL:
				opcode_RECTANGLEFILL();
				break;
			case Bytecodes::TRIANGLE:
				opcode_TRIANGLE();
				break;
			case Bytecodes::TRIANGLEFILL:
				opcode_TRIANGLEFILL();
				break;
			case Bytecodes::TRIANGLESHADED:
				opcode_TRIANGLESHADED();
				break;
			case Bytecodes::CLIP:
				opcode_CLIP();
				break;
			case Bytecodes::CLIPOFF:
				opcode_CLIPOFF();
				break;
			case Bytecodes::SHOWFPS:
				opcode_SHOWFPS();
				break;
			case Bytecodes::SCREENWIDTH:
				opcode_SCREENWIDTH();
				break;
			case Bytecodes::SCREENHEIGHT:
				opcode_SCREENHEIGHT();
				break;
			case Bytecodes::CREATEFONT:
				opcode_CREATEFONT();
				break;
			case Bytecodes::LOADTYPEFACE:
				opcode_LOADTYPEFACE();
				break;
			case Bytecodes::TEXT:
				opcode_TEXT();
				break;
			case Bytecodes::TEXTRIGHT:
				opcode_TEXTRIGHT();
				break;
			case Bytecodes::TEXTCENTRE:
				opcode_TEXTCENTRE();
				break;

			case Bytecodes::LOADSPRITE:
				opcode_LOADSPRITE();
				break;
			case Bytecodes::CREATESPRITE:
				opcode_CREATESPRITE();
				break;
			case Bytecodes::DELETESPRITE:
				opcode_DELETESPRITE();
				break;
			case Bytecodes::RENDERTOSPRITE:
				opcode_RENDERTOSPRITE();
				break;
			case Bytecodes::RENDERTOSCREEN:
				opcode_RENDERTOSCREEN();
				break;
			case Bytecodes::DRAWSPRITE:
				opcode_DRAWSPRITE();
				break;


				/* 3d Graphics */
			case Bytecodes::CREATEVERTEX:
				opcode_CREATEVERTEX();
				break;
			case Bytecodes::CREATETRIANGLE:
				opcode_CREATETRIANGLE();
				break;
			case Bytecodes::CREATESHAPE:
				opcode_CREATESHAPE();
				break;
			case Bytecodes::CREATEOBJECT:
				opcode_CREATEOBJECT();
				break;
			case Bytecodes::OBJECTTRANSLATE:
				opcode_OBJECTTRANSLATE();
				break;
			case Bytecodes::OBJECTROTATE:
				opcode_OBJECTROTATE();
				break;
			case Bytecodes::OBJECTSCALE:
				opcode_OBJECTSCALE();
				break;
			case Bytecodes::DELETEOBJECT:
				opcode_DELETEOBJECT();
				break;
			case Bytecodes::RENDERFRAME:
				opcode_RENDERFRAME();
				break;

				/* Keyboard and mouse */
			case Bytecodes::INKEY:
				opcode_INKEY();
				break;
			case Bytecodes::INKEYS:
				opcode_INKEYS();
				break;
			case Bytecodes::GET:
				opcode_GET();
				break;
			case Bytecodes::GETS:
				opcode_GETS();
				break;
			case Bytecodes::MOUSE:
				opcode_MOUSE();
				break;

				/* Comparison and boolean */
			case Bytecodes::CMP_E:
				opcode_CMP_E();
				break;
			case Bytecodes::CMP_NE:
				opcode_CMP_NE();
				break;
			case Bytecodes::CMP_GE:
				opcode_CMP_GE();
				break;
			case Bytecodes::CMP_LE:
				opcode_CMP_LE();
				break;
			case Bytecodes::CMP_G:
				opcode_CMP_G();
				break;
			case Bytecodes::CMP_L:
				opcode_CMP_L();
				break;
			case Bytecodes::BOOL_OR:
				opcode_BOOL_OR();
				break;
			case Bytecodes::BOOL_AND:
				opcode_BOOL_AND();
				break;
			case Bytecodes::BOOL_EOR:
				opcode_BOOL_EOR();
				break;
			case Bytecodes::BOOL_NOT:
				opcode_BOOL_NOT();
				break;
			case Bytecodes::JNE:
				opcode_JNE();
				break;
			case Bytecodes::JE:
				opcode_JE();
				break;
			case Bytecodes::CASE_C:
				opcode_CASE_C();
				break;
			case Bytecodes::CASE_S:
				opcode_CASE_S();
				break;
			case Bytecodes::CJUMPT:
				opcode_CJUMPT();
				break;

				/* Functions */
			case Bytecodes::STORE_PARAMETER:
				opcode_UNPACK();
				break;
			case Bytecodes::RETURN:
				opcode_RETURN();
				break;
			case Bytecodes::GOTO:
				opcode_GOTO();
				break;
			case Bytecodes::GOSUB:
				opcode_GOSUB();
				break;
			case Bytecodes::JUMP:
				opcode_JUMP();
				break;
			case Bytecodes::CALL:
				opcode_CALL();
				break;

				/* Swapping */
			case Bytecodes::SWAP:
				opcode_SWAP();
				break;

				/* String functions*/
			case Bytecodes::ASC:
				opcode_ASC();
				break;
			case Bytecodes::CHRS:
				opcode_CHRS();
				break;
			case Bytecodes::INSTR:
				opcode_INSTR();
				break;
			case Bytecodes::LEFTS:
				opcode_LEFTS();
				break;
			case Bytecodes::MIDS:
				opcode_MIDS();
				break;
			case Bytecodes::RIGHTS:
				opcode_RIGHTS();
				break;
			case Bytecodes::LEN:
				opcode_LEN();
				break;
			case Bytecodes::VAL:
				opcode_VAL();
				break;
			case Bytecodes::STRS:
				opcode_STRS();
				break;
			case Bytecodes::STRS_H:
				opcode_STRS_H();
				break;
			case Bytecodes::STRINGS:
				opcode_STRINGS();
				break;

			case Bytecodes::CHAIN: {
				VM_STRING file = stack.pop_string(bc);
				//variables.store_chained_variables(stack);
				return file;
			}
			default:
				error("Unknown token: " + std::to_string((int)bc.opcode));
			}
		};
	}
	catch (const DARICException& ex) {
		ex.pretty_print();
		return "";
	}
	catch (const std::exception& ex) {
		g_env.graphics.print_console(ex.what());
		return "";
	}
	if (stack.get_stack_size() != 0) {
		g_env.graphics.print_console("Stack not empty on END\r");
	}
	stack.clear_stack(bc);
	return "";
}

void create_empty_vm()
{
	if (g_vm != nullptr)
		delete g_vm;
	g_vm = new VM();
}
