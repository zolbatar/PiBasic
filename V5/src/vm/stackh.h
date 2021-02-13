#pragma once
#include "../exception.h"
#include "../types.h"
#include "boxed.h"
#include "bytecode.h"
#include "performance.h"
#include <iostream>
#include <sstream>
#include <stack>

extern Environment g_env;

class Stack {

public:
	void drop() {
		auto t = types.top();
		types.pop();
		switch (t) {
		case Type::INTEGER:
			ints.pop();
			break;
		case Type::FLOAT:
			floats.pop();
			break;
		case Type::STRING:
			strings.pop();
			break;
		}
	}

	void push_float(const VM_FLOAT v)
	{
		types.push(Type::FLOAT);
		floats.push(v);
	}

	void push_int(const VM_INT v)
	{
		types.push(Type::INTEGER);
		ints.push(v);
	}

	void push_string(const VM_STRING& v)
	{
		types.push(Type::STRING);
		strings.push(v);
	}

	void save_top_item() {
		auto t = types.top();
		switch (t) {
		case Type::INTEGER:
			s_ints.push(ints.top());
			ints.pop();
			break;
		case Type::FLOAT:
			s_floats.push(floats.top());
			floats.pop();
			break;
		case Type::STRING:
			s_strings.push(strings.top());
			strings.pop();
			break;
		}
		s_types.push(t);
		types.pop();
	}

	void restore_top_item() {
		auto t = s_types.top();
		switch (t) {
		case Type::INTEGER:
			ints.push(s_ints.top());
			s_ints.pop();
			break;
		case Type::FLOAT:
			floats.push(s_floats.top());
			s_floats.pop();
			break;
		case Type::STRING:
			strings.push(s_strings.top());
			s_strings.pop();
			break;
		}
		types.push(t);
		s_types.pop();
	}

	VM_FLOAT pop_float(Bytecode& bc)
	{
		auto t = types.top();
		types.pop();
		if (t != Type::FLOAT) {
			auto flp = file_and_line_lookup(bc.line_number);
			throw DARICException(ErrorLocation::RUNTIME, flp.filename, flp.line, bc.char_position, "Expected float on stack - this is normally an internal DARIC error");
		}
		auto v = floats.top();
		floats.pop();
		return v;
	}

	VM_INT pop_int(Bytecode& bc)
	{
		auto t = types.top();
		types.pop();
		if (t != Type::INTEGER) {
			auto flp = file_and_line_lookup(bc.line_number);
			throw DARICException(ErrorLocation::RUNTIME, flp.filename, flp.line, bc.char_position, "Expected integer on stack - this is normally an internal DARIC error");
		}
		auto v = ints.top();
		ints.pop();
		return v;
	}

	VM_STRING pop_string(Bytecode& bc)
	{
		auto t = types.top();
		types.pop();
		if (t != Type::STRING) {
			auto flp = file_and_line_lookup(bc.line_number);
			throw DARICException(ErrorLocation::RUNTIME, flp.filename, flp.line, bc.char_position, "Expected string on stack - this is normally an internal DARIC error");
		}
		auto v = strings.top();
		strings.pop();
		return v;
	}

	void clear_stack(Bytecode& bc)
	{
		while (!types.empty()) {
			types.pop();
		}
		while (!ints.empty()) {
			ints.pop();
		}
		while (!floats.empty()) {
			floats.pop();
		}
		while (!strings.empty()) {
			strings.pop();
		}
		while (!s_types.empty()) {
			s_types.pop();
		}
		while (!s_ints.empty()) {
			s_ints.pop();
		}
		while (!s_floats.empty()) {
			s_floats.pop();
		}
		while (!s_strings.empty()) {
			s_strings.pop();
		}
	}

	inline size_t get_stack_size()
	{
		return types.size();
	}

	Type peek_top_item() {
		return types.top();
	}

private:
	std::stack<Type> types;
	std::stack<VM_INT> ints;
	std::stack<VM_FLOAT> floats;
	std::stack<VM_STRING> strings;

	std::stack<Type> s_types;
	std::stack<VM_INT> s_ints;
	std::stack<VM_FLOAT> s_floats;
	std::stack<VM_STRING> s_strings;
};