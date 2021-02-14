#pragma once
#include "../types.h"
#include "../vm/type.h"
#include <vector>

class Boxed {
public:
	Boxed() {};
	Boxed(std::string name, Type type, int index)
	{
		this->name = name;
		this->index = index;
		set_type_default(type);
	}

	void set_integer(VM_INT value)
	{
		type = Type::INTEGER;
		value_int = value;
	}

	void set_float(VM_FLOAT value)
	{
		type = Type::FLOAT;
		value_float = value;
	}

	void set_string(VM_STRING value)
	{
		type = Type::STRING;
		value_string = value;
	}

	void set_integer_array(VM_INT size)
	{
		type = Type::INTEGER_ARRAY;
		value_int_array.resize(size);
	}

	void set_float_array(VM_INT size)
	{
		type = Type::FLOAT_ARRAY;
		value_float_array.resize(size);
	}

	void set_string_array(VM_INT size)
	{
		type = Type::STRING_ARRAY;
		value_string_array.resize(size);
	}

	void set_type_nodefault(Type t)
	{
		type = t;
	}

	void set_type_default(Type t)
	{
		type = t;
		switch (t) {
		case Type::INTEGER:
			value_int = 0;
			break;
		case Type::FLOAT:
			value_float = 0;
			break;
		case Type::STRING:
			value_string = "";
			break;
		case Type::INTEGER_ARRAY:
			value_int_array.clear();
			break;
		case Type::FLOAT_ARRAY:
			value_float_array.clear();
			break;
		case Type::STRING_ARRAY:
			value_string_array.clear();
			break;
		case Type::TYPE:
		case Type::TYPE_ARRAY:
			break;
		}
	}
	Type get_type() { return type; }
	VM_INT get_array_dimensions() { return static_cast<VM_INT>(array_definition.size()); }
	VM_INT get_array_dimension(size_t i) { return array_definition[i]; }
	void set_1d_dimensions(VM_INT v) { array_definition.resize(1); array_definition[0] = v; }
	void set_2d_dimensions(VM_INT v1, VM_INT v2) { array_definition.resize(2); array_definition[0] = v1; array_definition[1] = v2; }
	bool set_is_constant() { constant = true; }
	bool is_constant() { return constant; }

	/* Custom types */
	std::string get_custom_type_name() { return custom_type_name; }
	void set_custom_type_name(std::string t) { custom_type_name = t; }

	/* Fields */
	VM_INT get_fields_count() { return static_cast<VM_INT>(fields.size()); }
	VM_INT set_fields_count(size_t v) { fields.resize(v); }
	void clear_fields() { fields.clear(); }
	Boxed& get_field(size_t i) { return fields[i]; }

	/* Name */
	std::string get_name() { return name; }
	void set_name(std::string v) { name = v; }

	/* Int */
	VM_INT get_integer() { return value_int; }

	/* Float */
	VM_FLOAT get_float() { return value_float; }

	/* String */
	VM_STRING get_string() { return value_string; }

	/* Int Array */
	std::vector<VM_INT> get_integer_array() { return value_int_array; }
	VM_INT get_integer_array_item(size_t v) { return value_int_array[v]; }
	VM_INT inc_integer_array_item(size_t v) { return value_int_array[v]++; }
	void set_integer_array_item(size_t index, VM_INT v) { value_int_array[index] = v; }
	size_t get_integer_array_size() { return value_int_array.size(); }
	void set_integer_array_size(size_t v) { value_int_array.resize(v); }

	/* Float array*/
	std::vector<VM_FLOAT> get_float_array() { return value_float_array; }
	VM_FLOAT get_float_array_item(size_t v) { return value_float_array[v]; }
	void set_float_array_item(size_t index, VM_FLOAT v) { value_float_array[index] = v; }
	VM_FLOAT inc_float_array_item(size_t v) { return value_float_array[v]++; }
	size_t get_float_array_size() { return value_float_array.size(); }
	void set_float_array_size(size_t v) { value_float_array.resize(v); }

	/* String array */
	std::vector<VM_STRING> get_string_array() { return value_string_array; }
	VM_STRING get_string_array_item(size_t v) { return value_string_array[v]; }
	void set_string_array_item(size_t index, VM_STRING v) { value_string_array[index] = v; }
	size_t get_string_array_size() { return value_string_array.size(); }
	void set_string_array_size(size_t v) { value_string_array.resize(v); }

	/* Index */
	UINT32 get_index() { return index; }
	void set_index(UINT32 v) { index = v; }

private:
	UINT32 index;
	bool constant = false;
	std::string name;
	std::string custom_type_name;
	VM_INT value_int;
	VM_FLOAT value_float;
	VM_STRING value_string;
	std::vector<Boxed> fields;
	std::vector<VM_INT> array_definition;
	std::vector<VM_INT> value_int_array;
	std::vector<VM_FLOAT> value_float_array;
	std::vector<VM_STRING> value_string_array;

private:
	Type type = Type::NOTYPE;
};

/*class PolyType {
public:
	virtual Type get_type() { return Type::NOTYPE; }

private:
};

class PolyType : public PolyType {
	VM_INT value_int;
};*/