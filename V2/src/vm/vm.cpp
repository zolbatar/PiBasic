#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
#define _GLIBCXX_USE_C99 1
#include "vm.h"
#include "../engine/engine.h"
#include "clock.h"
#include <chrono>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <memory>
#include <sstream>
#include <stdlib.h>
#include <time.h>

extern World world;

std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
VM_INT get_clock() {
    std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
    std::chrono::milliseconds time_span = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    double d = time_span.count() / 10.0;
    return static_cast<VM_INT>(d);
}

bool VM::opcode_HALT() {
    if (runtime_debug)
        std::cout << "End of program" << std::endl;
    return true;
}

bool VM::opcode_DROP() {
    stack_drop();
    if (runtime_debug)
        std::cout << "Dropping top item off stack" << std::endl;
    return false;
}

bool VM::opcode_CONST_I() {
    stack_push_int(bc.data);
    if (runtime_debug) {
        std::cout << "Push constant int " << bc.data << " onto the stack" << std::endl;
    }
    return false;
}

bool VM::opcode_LOAD_F() {
    Boxed *variable = get_variable();
    stack_push_float(variable->value_float);
    if (runtime_debug) {
        if (!variable->constant) {
            std::cout << "Push variable '" << variable->name << "', float " << variable->value_float << " onto the stack" << std::endl;
        } else {
            std::cout << "Push constant float " << variable->value_float << " onto the stack" << std::endl;
        }
    }
    return false;
}

bool VM::opcode_LOAD_I() {
    Boxed *variable = get_variable();
    stack_push_int(variable->value_int);
    if (runtime_debug) {
        if (!variable->constant) {
            std::cout << "Push variable '" << variable->name << "', int " << variable->value_int << " onto the stack" << std::endl;
        } else {
            std::cout << "Push constant int " << variable->value_int << " onto the stack" << std::endl;
        }
    }
    return false;
}

bool VM::opcode_LOAD_S() {
    Boxed *variable = get_variable();
    stack_push_string(variable->value_string);
    if (runtime_debug) {
        if (!variable->constant) {
            std::cout << "Push variable '" << variable->name << "', string '" << variable->value_string << "' onto the stack" << std::endl;
        } else {
            std::cout << "Push constant string '" << variable->value_string << "' onto the stack" << std::endl;
        }
    }
    return false;
}

bool VM::opcode_ADD_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = v1 + v2;
    stack_push_float(v3);
    if (runtime_debug)
        std::cout << "Add float " << v1 << " + " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_ADD_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 + v2;
    stack_push_int(v3);
    if (runtime_debug)
        std::cout << "Add int " << v1 << " + " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_SHL() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 << v2;
    stack_push_int(v3);
    if (runtime_debug)
        std::cout << "<< int " << v1 << " + " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_SHR() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 >> v2;
    stack_push_int(v3);
    if (runtime_debug)
        std::cout << ">> int " << v1 << " + " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_SUBTRACT_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = v1 - v2;
    stack_push_float(v3);
    if (runtime_debug)
        std::cout << "Subtract float " << v1 << " - " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_SUBTRACT_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 - v2;
    stack_push_int(v3);
    if (runtime_debug)
        std::cout << "Subtract int " << v1 << " - " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_ADD_S() {
    VM_STRING v2 = stack_pop_string();
    VM_STRING v1 = stack_pop_string();
    VM_STRING v3 = v1.append(v2);
    stack_push_string(v3);
    if (runtime_debug)
        std::cout << "Add string '" << v1 << "' + '" << v2 << "' = '" << v3 << "'" << std::endl;
    return false;
}

bool VM::opcode_MULTIPLY_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = v1 * v2;
    stack_push_float(v3);
    if (runtime_debug)
        std::cout << "Multiply float " << v1 << " * " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_MULTIPLY_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 * v2;
    stack_push_int(v3);
    if (runtime_debug)
        std::cout << "Multiply int " << v1 << " * " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_DIVIDE_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = v1 / v2;
    stack_push_float(v3);
    if (runtime_debug)
        std::cout << "Divide float " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_DIVIDE_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 / v2;
    stack_push_int(v3);
    if (runtime_debug)
        std::cout << "Divide int " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_I_TO_F() {
    VM_INT v1 = stack_pop_int();
    VM_FLOAT v2 = v1;
    stack_push_float(v2);
    if (runtime_debug)
        std::cout << "Convert " << v1 << " (int) -> " << v2 << " (float)\n";
    return false;
}

bool VM::opcode_I_TO_F2() {
    VM_FLOAT v0 = stack_pop_float();
    VM_INT v1 = stack_pop_int();
    VM_FLOAT v2 = v1;
    stack_push_float(v2);
    stack_push_float(v0);
    if (runtime_debug)
        std::cout << "Convert " << v1 << " (int) -> " << v2 << " (float)\n";
    return false;
}

bool VM::opcode_F_TO_I() {
    VM_FLOAT v1 = stack_pop_float();
    VM_INT v2 = static_cast<VM_INT>(floor(v1));
    stack_push_int(v2);
    if (runtime_debug)
        std::cout << "Convert " << v1 << " (float) -> " << v2 << " (int)\n";
    return false;
}

bool VM::opcode_F_TO_I2() {
    VM_INT v0 = stack_pop_int();
    VM_FLOAT v1 = stack_pop_float();
    VM_INT v2 = static_cast<VM_INT>(floor(v1));
    stack_push_int(v2);
    stack_push_int(v0);
    if (runtime_debug)
        std::cout << "Convert " << v1 << " (float) -> " << v2 << " (int)\n";
    return false;
}

bool VM::opcode_STORE_I() {
    Boxed *variable = get_variable();
    VM_INT v = stack_pop_int();
    variable->value_int = v;
    if (runtime_debug)
        std::cout << "Store integer " << v << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_STORE_F() {
    Boxed *variable = get_variable();
    VM_FLOAT v = stack_pop_float();
    variable->value_float = v;
    if (runtime_debug)
        std::cout << "Store float " << v << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_STORE_S() {
    Boxed *variable = get_variable();
    VM_STRING v = stack_pop_string();
    variable->value_string = v;
    if (runtime_debug)
        std::cout << "Store string '" << v << "' in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_INPUT_F() {
    Boxed *variable = get_variable();
    double v;
    int r = scanf("%lf", &v);
    variable->value_float = v;
    if (runtime_debug)
        std::cout << "Inputted and stored float " << variable->value_float << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_INPUT_I() {
    Boxed *variable = get_variable();
    int v;
    int r = scanf("%d", &v);
    variable->value_int = v;
    if (runtime_debug)
        std::cout << "Inputted and stored integer " << variable->value_int << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_INPUT_S() {
    Boxed *variable = get_variable();
    char v[1024];
    v[0] = 0;
    int r = scanf("%1024s", v);
    variable->value_string = v;
    if (runtime_debug)
        std::cout << "Inputted and stored string " << variable->value_string << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_PRINT_F() {
    VM_FLOAT v1 = stack_pop_float();
    print_right_justify = bc.data & 1;
    print_hex = bc.data & 2;

    // First let's store to a string so we can figure out X positions etc.
    std::stringstream stream;
    if (print_right_justify) {
        stream << std::setw(tab_spacing);
    }
    if (print_hex) {
        if (runtime_debug)
            printf("Print float as hex: ");
        stream << std::hex << static_cast<int>(v1);
    } else {
        if (runtime_debug)
            printf("Print float: ");
        stream << std::setprecision(tab_spacing) << v1;
    }
    VM_STRING v(stream.str());
    std::cout << v;
    if (runtime_debug)
        std::cout << std::endl;
    return false;
}

bool VM::opcode_PRINT_I() {
    VM_INT v1 = stack_pop_int();
    print_right_justify = bc.data & 1;
    print_hex = bc.data & 2;

    // First let's store to a string so we can figure out X positions etc.
    std::stringstream stream;
    if (print_right_justify) {
        stream << std::setw(tab_spacing);
    }
    if (print_hex) {
        if (runtime_debug)
            printf("Print float as hex: ");
        stream << std::hex << v1;
    } else {
        if (runtime_debug)
            printf("Print int: ");
        stream << v1;
    }
    VM_STRING v(stream.str());
    std::cout << v;
    if (runtime_debug)
        std::cout << std::endl;
    return false;
}

bool VM::opcode_PRINT_S() {
    VM_STRING v = stack_pop_string();
    if (runtime_debug)
        std::cout << "Print string: '";
    std::cout << v;
    if (runtime_debug)
        std::cout << "'" << std::endl;
    return false;
}

bool VM::opcode_PRINT_NL() {
    if (runtime_debug)
        std::cout << "Print newline: ";
    std::cout << std::endl;
    return false;
}

bool VM::opcode_PRINT_SPC() {
    VM_INT v1 = stack_pop_int();
    std::string v2 = "";
    for (int i = 0; i < v1; i++) {
        v2 += " ";
    }
    std::cout << v2;
    if (runtime_debug)
        std::cout << "Print " << v1 << " spaces";
    return false;
}

bool VM::opcode_LOAD_F_ARRAY() {
    Boxed *variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= variable->value_float_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << ", file index " << bc.file_number << std::endl;
            exit(1);
        }
        VM_FLOAT v = variable->value_float_array[index];
        stack_push_float(v);
        if (runtime_debug)
            std::cout << "Push variable " << variable->name << ", float " << v << " (index " << index << ") onto the stack\n";
    } else {
        size_t index2 = static_cast<size_t>(stack_pop_int());
        size_t index1 = static_cast<size_t>(stack_pop_int());
        size_t size = variable->fields[0].value_int;
        size_t index = index2 * size + index1;
        if (index < 0 || index >= variable->value_float_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << std::endl;
            exit(1);
        }
        VM_FLOAT v = variable->value_float_array[index];
        stack_push_float(v);
        if (runtime_debug)
            std::cout << "Push variable " << variable->name << ", string '" << v << "' (index " << index << ") onto the stack\n";
    }
    return false;
}

bool VM::opcode_LOAD_I_ARRAY() {
    Boxed *variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= variable->value_int_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << ", file index " << bc.file_number << std::endl;
            exit(1);
        }
        VM_INT v = variable->value_int_array[index];
        stack_push_int(v);
        if (runtime_debug)
            std::cout << "Push variable " << variable->name << ", int " << v << " (index " << index << ") onto the stack\n";
    } else {
        size_t index2 = static_cast<size_t>(stack_pop_int());
        size_t index1 = static_cast<size_t>(stack_pop_int());
        size_t size = variable->fields[0].value_int;
        size_t index = index2 * size + index1;
        if (index < 0 || index >= variable->value_int_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << std::endl;
            exit(1);
        }
        VM_INT v = variable->value_int_array[index];
        stack_push_int(v);
        if (runtime_debug)
            std::cout << "Push variable " << variable->name << ", string '" << v << "' (index " << index << ") onto the stack\n";
    }
    return false;
}

bool VM::opcode_LOAD_S_ARRAY() {
    Boxed *variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= variable->value_string_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << ", file index " << bc.file_number << std::endl;
            exit(1);
        }
        VM_STRING v = variable->value_string_array[index];
        stack_push_string(v);
        if (runtime_debug)
            std::cout << "Push variable " << variable->name << ", string '" << v << "' (index " << index << ") onto the stack\n";
    } else {
        size_t index2 = static_cast<size_t>(stack_pop_int());
        size_t index1 = static_cast<size_t>(stack_pop_int());
        size_t size = variable->fields[0].value_int;
        size_t index = index2 * size + index1;
        if (index < 0 || index >= variable->value_string_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << std::endl;
            exit(1);
        }
        VM_STRING v = variable->value_string_array[index];
        stack_push_string(v);
        if (runtime_debug)
            std::cout << "Push variable " << variable->name << ", string '" << v << "' (index " << index << ") onto the stack\n";
    }
    return false;
}

bool VM::opcode_STORE_F_ARRAY() {
    Boxed *variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        VM_FLOAT v = stack_pop_float();
        if (index < 0 || index >= variable->value_float_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << ", file index " << bc.file_number << std::endl;
            exit(1);
        }
        variable->value_float_array[index] = v;
        if (runtime_debug)
            std::cout << "Store float array variable " << variable->name << " index " << index << " value " << v << std::endl;
    } else {
        size_t index2 = static_cast<size_t>(stack_pop_int());
        size_t index1 = static_cast<size_t>(stack_pop_int());
        VM_FLOAT v = stack_pop_float();
        size_t size = variable->fields[0].value_int;
        size_t index = index2 * size + index1;
        if (index < 0 || index >= variable->value_string_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << std::endl;
            exit(1);
        }
        variable->value_float_array[index] = v;
        if (runtime_debug)
            std::cout << "Store float array variable " << variable->name << " index " << index << " value " << v << std::endl;
    }
    return false;
}

bool VM::opcode_STORE_I_ARRAY() {
    Boxed *variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        VM_INT v = stack_pop_int();
        if (index < 0 || index >= variable->value_int_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << ", file index " << bc.file_number << std::endl;
            exit(1);
        }
        variable->value_int_array[index] = v;
        if (runtime_debug)
            std::cout << "Store int array variable " << variable->name << " index " << index << " value " << v << std::endl;
    } else {
        size_t index2 = static_cast<size_t>(stack_pop_int());
        size_t index1 = static_cast<size_t>(stack_pop_int());
        VM_INT v = stack_pop_int();
        size_t size = variable->fields[0].value_int;
        size_t index = index2 * size + index1;
        if (index < 0 || index >= variable->value_string_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << std::endl;
            exit(1);
        }
        variable->value_int_array[index] = v;
        if (runtime_debug)
            std::cout << "Store float array variable " << variable->name << " index " << index << " value " << v << std::endl;
    }
    return false;
}

bool VM::opcode_STORE_S_ARRAY() {
    Boxed *variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        VM_STRING v = stack_pop_string();
        if (index < 0 || index >= variable->value_string_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << ", file index " << bc.file_number << std::endl;
            exit(1);
        }
        variable->value_string_array[index] = v;
        if (runtime_debug)
            std::cout << "Store string array variable " << variable->name << " index " << index << " value " << v << std::endl;
    } else {
        size_t index2 = static_cast<size_t>(stack_pop_int());
        size_t index1 = static_cast<size_t>(stack_pop_int());
        VM_STRING v = stack_pop_string();
        size_t size = variable->fields[0].value_int;
        size_t index = index2 * size + index1;
        if (index < 0 || index >= variable->value_string_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << std::endl;
            exit(1);
        }
        variable->value_string_array[index] = v;
        if (runtime_debug)
            std::cout << "Store float array variable " << variable->name << " index " << index << " value " << v << std::endl;
    }
    return false;
}

bool VM::opcode_LOAD_I_FIELD() {
    VM_INT index = stack_pop_int();
    Boxed *variable = get_variable();
    Boxed *field = &variable->fields.at(index);
    stack_push_int(field->value_int);
    if (runtime_debug)
        std::cout << "Load field variable " << variable->name << " index " << index << " value " << field->value_int << std::endl;
    return false;
}

bool VM::opcode_LOAD_F_FIELD() {
    VM_INT index = stack_pop_int();
    Boxed *variable = get_variable();
    Boxed *field = &variable->fields.at(index);
    stack_push_float(field->value_float);
    if (runtime_debug)
        std::cout << "Load field variable " << variable->name << " index " << index << " value " << field->value_float << std::endl;
    return false;
}

bool VM::opcode_LOAD_S_FIELD() {
    VM_INT index = stack_pop_int();
    Boxed *variable = get_variable();
    Boxed *field = &variable->fields.at(index);
    stack_push_string(field->value_string);
    if (runtime_debug)
        std::cout << "Load field variable " << variable->name << " index " << index << " value " << field->value_string << std::endl;
    return false;
}

bool VM::opcode_STORE_I_FIELD() {
    VM_INT index = stack_pop_int();
    VM_INT v = stack_pop_int();
    Boxed *variable = get_variable();
    Boxed *field = &variable->fields.at(index);
    field->value_int = v;
    if (runtime_debug)
        std::cout << "Store field variable " << variable->name << " index " << index << " value " << v << std::endl;
    return false;
}

bool VM::opcode_STORE_F_FIELD() {
    VM_INT index = stack_pop_int();
    VM_FLOAT v = stack_pop_float();
    Boxed *variable = get_variable();
    Boxed *field = &variable->fields.at(index);
    field->value_float = v;
    if (runtime_debug)
        std::cout << "Store field variable " << variable->name << " index " << index << " value " << v << std::endl;
    return false;
}

bool VM::opcode_STORE_S_FIELD() {
    VM_INT index = stack_pop_int();
    VM_STRING v = stack_pop_string();
    Boxed *variable = get_variable();
    Boxed *field = &variable->fields.at(index);
    field->value_string.assign(v);
    if (runtime_debug)
        std::cout << "Store field variable " << variable->name << " index " << index << " value '" << v << "'" << std::endl;
    return false;
}

bool VM::opcode_LOAD_I_FIELD_ARRAY() {
    VM_INT fields = stack_pop_int();
    VM_INT index = stack_pop_int();
    VM_INT array_index = stack_pop_int();
    Boxed *variable = get_variable();
    Boxed *field = &variable->fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    stack_push_float(field->value_int);
    if (runtime_debug)
        std::cout << "Load field variable " << variable->name << " index " << index << " value " << field->value_int << std::endl;
    return false;
}

bool VM::opcode_LOAD_F_FIELD_ARRAY() {
    VM_INT fields = stack_pop_int();
    VM_INT index = stack_pop_int();
    VM_INT array_index = stack_pop_int();
    Boxed *variable = get_variable();
    Boxed *field = &variable->fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    stack_push_float(field->value_float);
    if (runtime_debug)
        std::cout << "Load field variable " << variable->name << " index " << index << " value " << field->value_float << std::endl;
    return false;
}

bool VM::opcode_LOAD_S_FIELD_ARRAY() {
    VM_INT fields = stack_pop_int();
    VM_INT index = stack_pop_int();
    VM_INT array_index = stack_pop_int();
    Boxed *variable = get_variable();
    Boxed *field = &variable->fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    stack_push_string(field->value_string);
    if (runtime_debug)
        std::cout << "Load field variable " << variable->name << " index " << index << " value '" << field->value_string << "'" << std::endl;
    return false;
}

bool VM::opcode_STORE_I_FIELD_ARRAY() {
    VM_INT fields = stack_pop_int();
    VM_INT index = stack_pop_int();
    VM_INT v = stack_pop_int();
    VM_INT array_index = stack_pop_int();
    Boxed *variable = get_variable();
    Boxed *field = &variable->fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    field->value_int = v;
    if (runtime_debug)
        std::cout << "Store field variable " << variable->name << " index " << index << " value " << v << std::endl;
    return false;
}

bool VM::opcode_STORE_F_FIELD_ARRAY() {
    VM_INT fields = stack_pop_int();
    VM_INT index = stack_pop_int();
    VM_FLOAT v = stack_pop_float();
    VM_INT array_index = stack_pop_int();
    Boxed *variable = get_variable();
    Boxed *field = &variable->fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    field->value_float = v;
    if (runtime_debug)
        std::cout << "Store field variable " << variable->name << " index " << index << " value " << v << std::endl;
    return false;
}

bool VM::opcode_STORE_S_FIELD_ARRAY() {
    VM_INT fields = stack_pop_int();
    VM_INT index = stack_pop_int();
    VM_STRING v = stack_pop_string();
    VM_INT array_index = stack_pop_int();
    Boxed *variable = get_variable();
    Boxed *field = &variable->fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    field->value_string.assign(v);
    if (runtime_debug)
        std::cout << "Store field variable " << variable->name << " index " << index << " value '" << v << "'" << std::endl;
    return false;
}

bool VM::opcode_STORE_F_ARRAY_FLIP() {
    Boxed *variable = get_variable();
    VM_FLOAT v = stack_pop_float();
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= variable->value_float_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << std::endl;
            exit(1);
        }
        variable->value_float_array[index] = v;
        if (runtime_debug)
            std::cout << "Store float array variable " << variable->name << " index " << index << " value " << v << std::endl;
    } else {
        size_t index2 = static_cast<size_t>(stack_pop_int());
        size_t index1 = static_cast<size_t>(stack_pop_int());
        size_t size = variable->fields[0].value_int;
        size_t index = index2 * size + index1;
        if (index < 0 || index >= variable->value_float_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << std::endl;
            exit(1);
        }
        variable->value_float_array[index] = v;
        if (runtime_debug)
            std::cout << "Store float array variable " << variable->name << " index " << index << " value " << v << std::endl;
    }
    return false;
}

bool VM::opcode_STORE_I_ARRAY_FLIP() {
    Boxed *variable = get_variable();
    VM_INT v = stack_pop_int();
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= variable->value_int_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << std::endl;
            exit(1);
        }
        variable->value_int_array[index] = v;
        if (runtime_debug)
            std::cout << "Store int array variable " << variable->name << " index " << index << " value " << v << std::endl;
    } else {
        size_t index2 = static_cast<size_t>(stack_pop_int());
        size_t index1 = static_cast<size_t>(stack_pop_int());
        size_t size = variable->fields[0].value_int;
        size_t index = index2 * size + index1;
        if (index < 0 || index >= variable->value_string_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << std::endl;
            exit(1);
        }
        variable->value_int_array[index] = v;
        if (runtime_debug)
            std::cout << "Store int array variable " << variable->name << " index " << index << " value " << v << std::endl;
    }
    return false;
}

bool VM::opcode_STORE_S_ARRAY_FLIP() {
    Boxed *variable = get_variable();
    VM_STRING v = stack_pop_string();
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= variable->value_string_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << std::endl;
            exit(1);
        }
        variable->value_string_array[index] = v;
        if (runtime_debug)
            std::cout << "Store string array variable " << variable->name << " index " << index << " value " << v << std::endl;
    } else {
        size_t index2 = static_cast<size_t>(stack_pop_int());
        size_t index1 = static_cast<size_t>(stack_pop_int());
        size_t size = variable->fields[0].value_int;
        size_t index = index2 * size + index1;
        if (index < 0 || index >= variable->value_string_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << std::endl;
            exit(1);
        }
        variable->value_string_array[index] = v;
        if (runtime_debug)
            std::cout << "Store string array variable " << variable->name << " index " << index << " value " << v << std::endl;
    }
    return false;
}

bool VM::opcode_NEW_TYPE() {
    Boxed *variable = get_variable();
    VM_INT num_fields = static_cast<size_t>(stack_pop_int());
    variable->fields.resize(num_fields);
    if (runtime_debug)
        std::cout << "Initialised type '" << variable->name << "' with " << num_fields << " fields" << std::endl;
    return false;
}

bool VM::opcode_DIM_F() {
    Boxed *variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    variable->type = Type::FloatArray;
    variable->value_int = dimensions;
    if (dimensions == 1) {
        VM_INT size = static_cast<size_t>(stack_pop_int()) + 1;
        variable->value_float_array.resize(size);
        if (runtime_debug)
            std::cout << "Dimension float variable " << variable->name << " with size " << size << std::endl;
    } else {
        variable->fields.clear();
        auto size2 = static_cast<size_t>(stack_pop_int()) + 1;
        auto size1 = static_cast<size_t>(stack_pop_int()) + 1;
        Boxed b;
        b.value_int = static_cast<VM_INT>(size1);
        variable->fields.push_back(std::move(b));
        variable->value_float_array.resize(size1 * size2);
        if (runtime_debug)
            std::cout << "Dimension float variable " << variable->name << " with size " << size1 << "x" << size2 << std::endl;
    }
    return false;
}

bool VM::opcode_DIM_I() {
    Boxed *variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    variable->type = Type::IntegerArray;
    variable->value_int = dimensions;
    if (dimensions == 1) {
        VM_INT size = static_cast<size_t>(stack_pop_int()) + 1;
        variable->value_int_array.resize(size);
        if (runtime_debug)
            std::cout << "Dimension int variable " << variable->name << " with size " << size << std::endl;
    } else {
        variable->fields.clear();
        auto size2 = static_cast<size_t>(stack_pop_int()) + 1;
        auto size1 = static_cast<size_t>(stack_pop_int()) + 1;
        Boxed b;
        b.value_int = static_cast<VM_INT>(size1);
        variable->fields.push_back(std::move(b));
        variable->value_int_array.resize(size1 * size2);
        if (runtime_debug)
            std::cout << "Dimension int variable " << variable->name << " with size " << size1 << "x" << size2 << std::endl;
    }
    return false;
}

bool VM::opcode_DIM_S() {
    Boxed *variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    variable->type = Type::StringArray;
    variable->value_int = dimensions;
    if (dimensions == 1) {
        VM_INT size = static_cast<size_t>(stack_pop_int()) + 1;
        variable->value_string_array.resize(size);
        if (runtime_debug)
            std::cout << "Dimension string variable " << variable->name << " with size " << size << std::endl;
    } else {
        variable->fields.clear();
        auto size2 = static_cast<size_t>(stack_pop_int()) + 1;
        auto size1 = static_cast<size_t>(stack_pop_int()) + 1;
        Boxed b;
        b.value_int = static_cast<VM_INT>(size1);
        variable->fields.push_back(std::move(b));
        variable->value_string_array.resize(size1 * size2);
        if (runtime_debug)
            std::cout << "Dimension string variable " << variable->name << " with size " << size1 << "x" << size2 << std::endl;
    }
    return false;
}

bool VM::opcode_DUP_F() {
    VM_FLOAT v = stack_pop_float();
    stack_push_float(v);
    stack_push_float(v);
    if (runtime_debug)
        std::cout << "Duplicate float " << v << std::endl;
    return false;
}

bool VM::opcode_DUP_I() {
    VM_INT v = stack_pop_int();
    stack_push_int(v);
    stack_push_int(v);
    if (runtime_debug)
        std::cout << "Duplicate int " << v << std::endl;
    return false;
}

bool VM::opcode_ROT_F() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = stack_pop_float();
    stack_push_float(v1);
    stack_push_float(v2);
    if (runtime_debug)
        std::cout << "Rotate float " << v1 << "/" << v2 << std::endl;
    return false;
}

bool VM::opcode_ROT_I() {
    VM_INT v1 = stack_pop_int();
    VM_INT v2 = stack_pop_int();
    stack_push_int(v1);
    stack_push_int(v2);
    if (runtime_debug)
        std::cout << "Rotate int " << v1 << "/" << v2 << std::endl;
    return false;
}

bool VM::opcode_FOR_I() {
    Boxed *variable = get_variable();
    variable->value_int_array.resize(3);
    VM_INT pc = stack_pop_int();
    VM_INT step = stack_pop_int();
    VM_INT iterations = stack_pop_int();
    variable->value_int_array[0] = iterations / step;
    variable->value_int_array[1] = step;
    variable->value_int_array[2] = pc;
    return false;
}

bool VM::opcode_FOR_F() {
    Boxed *variable = get_variable();
    variable->value_int_array.resize(2);
    variable->value_float_array.resize(1);
    VM_INT pc = stack_pop_int();
    VM_FLOAT step = stack_pop_float();
    VM_FLOAT iterations = stack_pop_float();
    variable->value_int_array[0] = static_cast<int>(iterations / step);
    variable->value_float_array[0] = step;
    variable->value_int_array[1] = pc;
    return false;
}

bool VM::opcode_NEXT_I() {
    Boxed *variable = get_variable();
    if (variable->value_int_array.size() < 3) {
        std::cout << "Is " << variable->name << " a NEXT variable?" << std::endl;
        exit(1);
    }
    VM_INT step = variable->value_int_array[1];
    variable->value_int += step;
    variable->value_int_array[0]--; // iterations - 1
    if (variable->value_int_array[0] >= 0) {
        pc = variable->value_int_array[2];
    }
    if (runtime_debug)
        std::cout << "Next integer variable " << variable->name << ", step " << step << ", iterations left " << (variable->value_int_array[0] + 1)
                  << ", loop PC is 0x" << std::hex << variable->value_int_array[2] << std::dec << std::endl;
    return false;
}

bool VM::opcode_NEXT_F() {
    Boxed *variable = get_variable();
    VM_FLOAT step = variable->value_float_array[0];
    variable->value_float += step;
    variable->value_int_array[0]--; // iterations - 1
    if (variable->value_int_array[0] >= 0) {
        pc = variable->value_int_array[1];
    }
    if (runtime_debug)
        std::cout << "Next float variable " << variable->name << ", step " << step << ", iterations left " << (variable->value_int_array[0] + 1)
                  << ", loop PC is 0x" << std::hex << variable->value_int_array[1] << std::dec << std::endl;
    return false;
}

bool VM::opcode_READ_I() {
    Boxed *variable = get_variable();
    Boxed b = *data_iterator++;
    variable->value_int = b.value_int;
    if (runtime_debug)
        std::cout << "Read integer " << b.value_int << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_READ_F() {
    Boxed *variable = get_variable();
    Boxed b = *data_iterator++;
    variable->value_float = b.value_float;
    if (runtime_debug)
        std::cout << "Read float " << b.value_float << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_READ_S() {
    Boxed *variable = get_variable();
    Boxed b = *data_iterator++;
    variable->value_string.assign(b.value_string);
    if (runtime_debug)
        std::cout << "Read string " << b.value_string << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_RESTORE() {
    data_iterator = data.begin();
    if (runtime_debug) {
        std::cout << "Restoring DATA" << std::endl;
    }
    return false;
}

bool VM::opcode_READ_I_ARRAY() {
    Boxed *variable = get_variable();
    Boxed b = *data_iterator++;
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= variable->value_int_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << std::endl;
            exit(1);
        }
        variable->value_int_array[index] = b.value_int;
        if (runtime_debug)
            std::cout << "Read int vector variable " << variable->name << " index " << index << " value " << b.value_int << std::endl;
    } else {
        std::cout << "No read 2d arrays" << std::endl;
        exit(1);
    }
    return false;
}

bool VM::opcode_READ_S_ARRAY() {
    Boxed *variable = get_variable();
    Boxed b = *data_iterator++;
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= variable->value_string_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << std::endl;
            exit(1);
        }
        variable->value_string_array[index].assign(b.value_string);
        if (runtime_debug)
            std::cout << "Read string vector variable " << variable->name << " index " << index << " value " << b.value_int << std::endl;
    } else {
        std::cout << "No read 2d arrays" << std::endl;
        exit(1);
    }
    return false;
}

bool VM::opcode_READ_F_ARRAY() {
    Boxed *variable = get_variable();
    Boxed b = *data_iterator++;
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= variable->value_float_array.size()) {
            std::cout << "Invalid array or array index at line " << bc.line_number << std::endl;
            exit(1);
        }
        variable->value_float_array[index] = b.value_float;
        if (runtime_debug)
            std::cout << "Read float vector variable " << variable->name << " index " << index << " value " << b.value_int << std::endl;
        return false;
    } else {
        std::cout << "No read 2d arrays" << std::endl;
        exit(1);
    }
}

bool VM::opcode_CMP_E_F() {
    VM_FLOAT c2 = stack_pop_float();
    VM_FLOAT c1 = stack_pop_float();
    VM_INT c3 = c1 == c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "Float = compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_E_I() {
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 == c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "Int = compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_E_S() {
    VM_STRING c2 = stack_pop_string();
    VM_STRING c1 = stack_pop_string();
    VM_INT c3 = c1 == c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "String = compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_NE_F() {
    VM_FLOAT c2 = stack_pop_float();
    VM_FLOAT c1 = stack_pop_float();
    VM_INT c3 = c1 != c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "Float <> compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_NE_I() {
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 != c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "Int <> compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_NE_S() {
    VM_STRING c2 = stack_pop_string();
    VM_STRING c1 = stack_pop_string();
    VM_INT c3 = c1 != c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "String <> compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_GE_F() {
    VM_FLOAT c2 = stack_pop_float();
    VM_FLOAT c1 = stack_pop_float();
    VM_INT c3 = c1 >= c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "Float >= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_GE_I() {
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 >= c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "Int >= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_GE_S() {
    VM_STRING c2 = stack_pop_string();
    VM_STRING c1 = stack_pop_string();
    VM_INT c3 = c1 >= c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "String >= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_LE_F() {
    VM_FLOAT c2 = stack_pop_float();
    VM_FLOAT c1 = stack_pop_float();
    VM_INT c3 = c1 <= c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "Float <= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_LE_I() {
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 <= c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "Int <= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_LE_S() {
    VM_STRING c2 = stack_pop_string();
    VM_STRING c1 = stack_pop_string();
    VM_INT c3 = c1 <= c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "String <= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_G_F() {
    VM_FLOAT c2 = stack_pop_float();
    VM_FLOAT c1 = stack_pop_float();
    VM_INT c3 = c1 > c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "Float > compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_G_I() {
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 > c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "Int > compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_G_S() {
    VM_STRING c2 = stack_pop_string();
    VM_STRING c1 = stack_pop_string();
    VM_INT c3 = c1 > c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "String > compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_L_F() {
    VM_FLOAT c2 = stack_pop_float();
    VM_FLOAT c1 = stack_pop_float();
    VM_INT c3 = c1 < c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "Float < compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_L_I() {
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 < c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "Int < compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_L_S() {
    VM_STRING c2 = stack_pop_string();
    VM_STRING c1 = stack_pop_string();
    VM_INT c3 = c1 < c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "String < compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_BOOL_OR() {
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 | c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "Boolean OR of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_BOOL_AND() {
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 & c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "Boolean AND of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_BOOL_EOR() {
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 ^ c2;
    stack_push_int(c3);
    if (runtime_debug)
        std::cout << "Boolean EOR of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_BOOL_NOT() {
    VM_INT v = stack_pop_int();
    VM_INT v2 = !v;
    stack_push_int(v2);
    if (runtime_debug)
        std::cout << "Boolean NOT of " << v << " is " << v2 << std::endl;
    return false;
}

bool VM::opcode_REPEAT() {
    repeats.push(pc);
    return false;
}

bool VM::opcode_JNEREP() {
    VM_INT c = stack_pop_int();
    if (c) {
        if (runtime_debug)
            std::cout << "Until, true condition, so no jump" << std::endl;
        repeats.pop();
    } else {
        UINT32 new_pc = repeats.top();
        if (runtime_debug)
            std::cout << "Until, false condition, so jumping to " << new_pc << std::endl;
        pc = new_pc;
    }
    return false;
}

bool VM::opcode_JUMP() {
    UINT32 new_pc = bc.data;
    if (runtime_debug)
        std::cout << "Jumping to " << new_pc << std::endl;
    pc = new_pc;
    return false;
}

bool VM::opcode_CALL() {
    VM_INT l = stack_pop_int();
    UINT32 new_pc = bc.data;
    if (runtime_debug)
        std::cout << "Calling " << new_pc << std::endl;
    locals_stack.push(locals);
    locals = &function_locals[l];
    call_stack.push(pc);
    pc = new_pc;
    return false;
}

bool VM::opcode_CASE_C() {
    case_flag = false;
    if (runtime_debug)
        std::cout << "Clearing case flag" << std::endl;
    return false;
}

bool VM::opcode_CASE_S() {
    case_flag = true;
    if (runtime_debug)
        std::cout << "Setting case flag" << std::endl;
    return false;
}

bool VM::opcode_JPOSC() {
    UINT32 new_pc = bc.data;
    if (!case_flag) {
        if (runtime_debug)
            std::cout << "Case, otherwise, so no jump" << std::endl;
    } else {
        if (runtime_debug)
            std::cout << "Case, no otherwise, so jumping to " << new_pc << std::endl;
        pc = new_pc;
    }
    return false;
}

bool VM::opcode_RETURN() {
    UINT32 new_pc = call_stack.top();
    if (new_pc & GosubCallFlag) {
        new_pc = new_pc ^ GosubCallFlag;
    } else {
        locals = locals_stack.top();
        locals_stack.pop();
    }
    call_stack.pop();
    if (runtime_debug)
        std::cout << "Returning to " << new_pc << std::endl;
    pc = new_pc;
    return false;
}

bool VM::opcode_GOTO() {
    UINT32 new_pc = bc.data;
    if (runtime_debug)
        std::cout << "Jumping to " << new_pc << std::endl;
    pc = new_pc;
    return false;
}

bool VM::opcode_GOSUB() {
    call_stack.push(pc | GosubCallFlag);
    UINT32 new_pc = bc.data;
    if (runtime_debug)
        std::cout << "Calling subroutine at " << new_pc << std::endl;
    pc = new_pc;
    return false;
}

bool VM::opcode_UNPACK_F() {
    Boxed *variable = get_variable();
    Boxed *b = stack_pop_boxed();
    switch (b->type) {
    case Type::Float:
        variable->value_float = b->value_float;
        break;
    case Type::Integer:
        variable->value_float = static_cast<VM_FLOAT>(b->value_int);
        break;
    default:
        std::cout << "Unsupported unpack casting\n";
        exit(1);
    }
    b->type = Type::None;
    if (runtime_debug)
        std::cout << "Unpacked float value of " << variable->value_float << " in variable " << variable->name << std::endl;
    return false;
}

bool VM::opcode_UNPACK_I() {
    Boxed *variable = get_variable();
    Boxed *b = stack_pop_boxed();
    switch (b->type) {
    case Type::Integer:
        variable->value_int = b->value_int;
        break;
    case Type::Float:
        variable->value_int = static_cast<VM_INT>(b->value_float);
        break;
    default:
        std::cout << "Unsupported unpack casting\n";
        exit(1);
    }
    b->type = Type::None;
    if (runtime_debug)
        std::cout << "Unpacked int value of " << variable->value_int << " in variable " << variable->name << std::endl;
    return false;
}

bool VM::opcode_UNPACK_S() {
    Boxed *variable = get_variable();
    Boxed *b = stack_pop_boxed();
    switch (b->type) {
    case Type::String:
        variable->value_string.assign(b->value_string);
        break;
    default:
        std::cout << "Unsupported unpack casting\n";
        exit(1);
    }
    b->type = Type::None;
    if (runtime_debug)
        std::cout << "Unpacked string value of '" << variable->value_int << " in variable " << variable->name << "'" << std::endl;
    return false;
}

bool VM::opcode_JNE() {
    VM_INT c = stack_pop_int();
    UINT32 new_pc = bc.data;
    if (c) {
        if (runtime_debug)
            std::cout << "True condition, so no jump" << std::endl;
    } else {
        if (runtime_debug)
            std::cout << "False condition, so jumping to " << new_pc << std::endl;
        pc = new_pc;
    }
    return false;
}

bool VM::opcode_JE() {
    VM_INT c = stack_pop_int();
    UINT32 new_pc = bc.data;
    if (!c) {
        if (runtime_debug)
            std::cout << "False condition, so no jump" << std::endl;
        repeats.pop();
    } else {
        UINT32 new_pc = repeats.top();
        if (runtime_debug)
            std::cout << "True condition, so jumping to " << new_pc << std::endl;
        pc = new_pc;
    }
    return false;
}

bool VM::opcode_DIV_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = (float)((int)v1 / (int)v2);
    stack_push_int(static_cast<VM_INT>(v3));
    if (runtime_debug)
        std::cout << "Quotient divide float " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_DIV_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 / v2;
    stack_push_int(static_cast<VM_INT>(v3));
    if (runtime_debug)
        std::cout << "Quotient divide int " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_MOD_F() {
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_INT v3 = static_cast<VM_INT>(v1) % static_cast<VM_INT>(v2);
    stack_push_int(v3);
    if (runtime_debug)
        std::cout << "Modulo float " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_MOD_I() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 % v2;
    stack_push_int(v3);
    if (runtime_debug)
        std::cout << "Modulo int " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_SQR() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::sqrt(v1);
    stack_push_float(v2);
    if (runtime_debug)
        std::cout << "SQR " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_LN() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::log(v1);
    stack_push_float(v2);
    if (runtime_debug)
        std::cout << "LN " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_LOG() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::log10(v1);
    stack_push_float(v2);
    if (runtime_debug)
        std::cout << "LOG " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_EXP() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::exp(v1);
    stack_push_float(v2);
    if (runtime_debug)
        std::cout << "EXP " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_ATN() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::atan(v1);
    stack_push_float(v2);
    if (runtime_debug)
        std::cout << "TAN" << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_TAN() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::tan(v1);
    stack_push_float(v2);
    if (runtime_debug)
        std::cout << "TAN" << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_COS() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::cos(v1);
    stack_push_float(v2);
    if (runtime_debug)
        std::cout << "COS " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_SIN() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::sin(v1);
    stack_push_float(v2);
    if (runtime_debug)
        std::cout << "SIN " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_ACS() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::acos(v1);
    stack_push_float(v2);
    if (runtime_debug)
        std::cout << "ACS " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_ASN() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::asin(v1);
    stack_push_float(v2);
    if (runtime_debug)
        std::cout << "ASN " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_DEG() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = (v1 * 180.0) / M_PI;
    stack_push_float(v2);
    if (runtime_debug)
        std::cout << "DEG " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_RAD() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = (v1 * M_PI) / 180.0;
    stack_push_float(v2);
    if (runtime_debug)
        std::cout << "RAD " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_SGN() {
    VM_FLOAT v1 = stack_pop_float();
    VM_INT r = 0;
    if (v1 < 0) {
        r = -1;
    } else if (v1 > 0) {
        r = 1;
    }
    stack_push_int(r);
    if (runtime_debug)
        std::cout << "SGN of " << v1 << " =" << r << std::endl;
    return false;
}

bool VM::opcode_ABS_I() {
    VM_INT v1 = stack_pop_int();
    VM_INT v2 = abs(v1);
    stack_push_int(v2);
    if (runtime_debug)
        std::cout << "ABS (Int) " << v1 << " = " << v2 << std::endl;
    return false;
}

bool VM::opcode_ABS_F() {
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = fabs(v1);
    stack_push_float(v2);
    if (runtime_debug)
        std::cout << "ABS (Float) " << v1 << " = " << v2 << std::endl;
    return false;
}

bool VM::opcode_PI() {
    stack_push_float(M_PI);
    if (runtime_debug)
        std::cout << "PI" << std::endl;
    return false;
}

bool VM::opcode_TIME() {
    VM_INT v = get_clock();
    stack_push_int(v);
    if (runtime_debug)
        std::cout << "Time returned " << v << std::endl;
    return false;
}

bool VM::opcode_TIMES() {
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, 80, "%a,%e %b %y.%T", timeinfo);
    std::string v = buffer;
    stack_push_string(v);
    if (runtime_debug)
        std::cout << "Time$ returned of '" << v << "'" << std::endl;
    return false;
}

bool VM::opcode_RND() {
    int r = rand();
    stack_push_int(r);
    if (runtime_debug)
        std::cout << "Random number: " << r << std::endl;
    return false;
}

bool VM::opcode_RNDRANGE() {
    VM_INT range = stack_pop_int();
    if (range == 0) { // return last RND(1)
        if (runtime_debug)
            std::cout << "Random number (repeated) " << last_random << std::endl;
        stack_push_float(last_random);
    } else if (range == 1) { // random number between 0 and 1
        last_random = (double)rand() / (double)RAND_MAX;
        if (runtime_debug)
            std::cout << "Random number " << last_random << std::endl;
        stack_push_float(last_random);
    } else { // Random in int range specified
        int r = rand() % range;
        r++;
        stack_push_float(r);
        if (runtime_debug)
            std::cout << "Random number (range of " << range << "): " << r << std::endl;
    }
    return false;
}

bool VM::opcode_OPENIN() {
    VM_STRING filename = stack_pop_string();
    FILE *file = fopen(filename.c_str(), "rb");
    if (!file) {
        std::cout << "File '" << filename << "' not created.";
    }
    VM_INT r = channel_index++;
    channels.insert(std::pair<VM_INT, FILE *>(r, file));
    stack_push_int(r);
    if (runtime_debug)
        std::cout << "Open file for input '" << filename << "', channel# is " << r << std::endl;
    return false;
}

bool VM::opcode_OPENOUT() {
    VM_STRING filename = stack_pop_string();
    FILE *file = fopen(filename.c_str(), "wb");
    if (!file) {
        std::cout << "File '" << filename << "' not created.";
    }
    VM_INT r = channel_index++;
    channels.insert(std::pair<VM_INT, FILE *>(r, file));
    stack_push_int(r);
    if (runtime_debug)
        std::cout << "Open file out '" << filename << "', channel# is " << r << std::endl;
    return false;
}

bool VM::opcode_OPENUP() {
    VM_STRING filename = stack_pop_string();
    FILE *file = fopen(filename.c_str(), "ab");
    if (!file) {
        std::cout << "File '" << filename << "' not created.";
    }
    VM_INT r = channel_index++;
    channels.insert(std::pair<VM_INT, FILE *>(r, file));
    stack_push_int(r);
    if (runtime_debug)
        std::cout << "Open file for update '" << filename << "', channel# is " << r << std::endl;
    return false;
}

bool VM::opcode_BGET() {
    VM_INT channel = stack_pop_int();
    auto g = channels.find(channel);
    char b = fgetc((*g).second);
    stack_push_int(static_cast<VM_INT>(b));
    if (runtime_debug)
        std::cout << "Read byte << " << b << " from channel# " << channel << std::endl;
    return false;
}

bool VM::opcode_EOFH() {
    VM_INT channel = stack_pop_int();
    auto g = channels.find(channel);
    VM_INT eof = feof((*g).second);
    stack_push_int(eof);
    if (runtime_debug)
        std::cout << "Eof check << " << eof << " on channel# " << channel << std::endl;
    return false;
}

bool VM::opcode_BPUT() {
    VM_INT byte = stack_pop_int();
    VM_INT channel = stack_pop_int();
    auto g = channels.find(channel);
    fputc(byte, (*g).second);
    if (runtime_debug)
        std::cout << "Write byte << " << byte << " to channel# " << channel << std::endl;
    return false;
}

bool VM::opcode_CLOSE() {
    VM_INT r = stack_pop_int();
    if (channels.count(r) == 0) {
        std::cout << "Unknown channel #" << r << std::endl;
    }
    auto g = channels.find(r);
    fclose((*g).second);
    channels.erase(r);
    if (runtime_debug)
        std::cout << "Close file channel# is " << r << std::endl;
    return false;
}

bool VM::opcode_ASC() {
    VM_STRING v = stack_pop_string();
    VM_INT c = -1;
    if (v.length() != 0) {
        c = v[0];
    }
    stack_push_int(c);
    if (runtime_debug)
        std::cout << "ASC of string '" << v << "' is " << c << std::endl;
    return false;
}

bool VM::opcode_VAL() {
    VM_STRING v = stack_pop_string();
    VM_FLOAT c = std::stod(v);
    stack_push_float(c);
    if (runtime_debug)
        std::cout << "VAL of string '" << v << "' is " << c << std::endl;
    return false;
}

bool VM::opcode_STRS() {
    VM_FLOAT v = stack_pop_float();
    std::stringstream stream;
    stream << std::dec << v;
    VM_STRING v2(stream.str());
    stack_push_string(v2);
    if (runtime_debug)
        std::cout << "STR$ of " << v << " is string '" << v2 << "'" << std::endl;
    return false;
}

bool VM::opcode_STRS_H() {
    VM_FLOAT v = stack_pop_float();
    std::stringstream stream;
    stream << std::hex << std::uppercase << static_cast<int>(v);
    VM_STRING v2(stream.str());
    stack_push_string(v2);
    if (runtime_debug)
        std::cout << "STR$ of " << v << " is string '" << v << "'" << std::endl;
    return false;
}

bool VM::opcode_STRINGS() {
    VM_STRING v2 = stack_pop_string();
    VM_INT v1 = stack_pop_int();
    VM_STRING v3 = "";
    for (int i = 0; i < v1; i++) {
        v3 += v2;
    }
    stack_push_string(v3);
    if (runtime_debug)
        std::cout << "STRING$ of '" << v1 << "' x " << v2 << " is string '" << v3 << "'" << std::endl;
    return false;
}

bool VM::opcode_INSTR() {
    VM_INT start = stack_pop_int();
    VM_STRING substring = stack_pop_string();
    VM_STRING string = stack_pop_string();
    VM_INT v = static_cast<VM_INT>(string.find(substring, start));
    stack_push_int(v);
    if (runtime_debug)
        std::cout << "INSTR of string '" << substring << "' in string '" << string << "' with start of " << start << " is " << v << std::endl;
    return false;
}

bool VM::opcode_LEFTS() {
    VM_INT v1 = stack_pop_int();
    VM_STRING string = stack_pop_string();
    VM_STRING v = string.substr(0, v1);
    stack_push_string(v);
    if (runtime_debug)
        std::cout << "LEFT$ of string '" << string << "' with length of " << v1 << " is " << v << std::endl;
    return false;
}

bool VM::opcode_MIDS() {
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int() - 1;
    VM_STRING string = stack_pop_string();
    VM_STRING v = string.substr(v1, v2);
    stack_push_string(v);
    if (runtime_debug)
        std::cout << "MID$ of string '" << string << "' with start of " << v1 << " and length of " << v2 << " is " << v << std::endl;
    return false;
}

bool VM::opcode_RIGHTS() {
    VM_INT v1 = stack_pop_int();
    VM_STRING string = stack_pop_string();
    size_t p = static_cast<size_t>(string.length()) - v1;
    VM_STRING v = string.substr(p, v1);
    stack_push_string(v);
    if (runtime_debug)
        std::cout << "RIGHT$ of string '" << string << "' with length of " << v1 << " is " << v << std::endl;
    return false;
}

bool VM::opcode_LEN() {
    VM_STRING string = stack_pop_string();
    size_t l = static_cast<size_t>(string.length());
    stack_push_int(static_cast<VM_INT>(l));
    if (runtime_debug)
        std::cout << "Len of string '" << string << "' is " << l << std::endl;
    return false;
}

bool VM::opcode_CHRS() {
    VM_INT v = stack_pop_int() & 0xFF;
    VM_STRING c = " ";
    c[0] = v;
    stack_push_string(c);
    if (runtime_debug)
        std::cout << "CHR$ of " << v << " is string '" << v << "'" << std::endl;
    return false;
}

bool VM::opcode_CLS() {
    graphics->cls();
    if (runtime_debug)
        std::cout << "Clear text screen" << std::endl;
    return false;
}

bool VM::opcode_COLOURRGB() {
    VM_INT b = stack_pop_int();
    VM_INT g = stack_pop_int();
    VM_INT r = stack_pop_int();
    graphics->colour(r, g, b);
    if (runtime_debug)
        std::cout << "Set RGB graphics colour to " << r << "," << g << "," << b << std::endl;
    return false;
}

bool VM::opcode_COLOURHEX() {
    VM_INT c = stack_pop_int();
    graphics->colour_hex(c);
    if (runtime_debug)
        std::cout << "Set HEX graphics colour to " << std::hex << c << std::dec << std::endl;
    return false;
}

bool VM::opcode_COLOURBGRGB() {
    VM_INT b = stack_pop_int();
    VM_INT g = stack_pop_int();
    VM_INT r = stack_pop_int();
    graphics->colour(r, g, b);
    if (runtime_debug)
        std::cout << "Set RGB graphics background colour to " << r << "," << g << "," << b << std::endl;
    return false;
}

bool VM::opcode_COLOURBGHEX() {
    VM_INT c = stack_pop_int();
    graphics->colour_hex(c);
    if (runtime_debug)
        std::cout << "Set HEX graphics background colour to " << std::hex << c << std::dec << std::endl;
    return false;
}

bool VM::opcode_COLOUREXPRESSION() {
    VM_INT b = stack_pop_int();
    VM_INT g = stack_pop_int();
    VM_INT r = stack_pop_int();
    VM_INT c = (r << 16) | (g << 8) | b;
    stack_push_int(c);
    if (runtime_debug)
        std::cout << "Convert RGB colour " << r << "," << g << "," << b << " to " << std::hex << c << std::dec << std::endl;
    return false;
}

bool VM::opcode_FLIP() {
    graphics->flip();
    if (runtime_debug)
        std::cout << "Flip screen" << std::endl;
    return false;
}

bool VM::opcode_GRAPHICS() {
    VM_INT fullscreen = stack_pop_int();
    VM_INT y = stack_pop_int();
    VM_INT x = stack_pop_int();
    graphics->open(x, y, fullscreen);
    if (runtime_debug)
        std::cout << "Change screen mode to " << x << " x " << y << std::endl;
    return false;
}

bool VM::opcode_PLOT() {
    VM_INT x = stack_pop_int();
    VM_INT y = stack_pop_int();
    graphics->plot(x, y);
    if (runtime_debug)
        std::cout << "Plot pixel at " << x << " x " << y << std::endl;
    return false;
}

bool VM::opcode_CLIP() {
    VM_INT y2 = stack_pop_int();
    VM_INT x2 = stack_pop_int();
    VM_INT y1 = stack_pop_int();
    VM_INT x1 = stack_pop_int();
    graphics->clip(x1, y1, x2, y2);
    if (runtime_debug)
        std::cout << "Set clip region as " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
    return false;
}

bool VM::opcode_CLIPOFF() {
    graphics->clipoff();
    if (runtime_debug)
        std::cout << "Disabling clip" << std::endl;
    return false;
}

bool VM::opcode_SCREENWIDTH() {
    VM_INT v = graphics->get_screen_width();
    stack_push_int(v);
    if (runtime_debug)
        std::cout << "Screen width is " << v << std::endl;
    return false;
}

bool VM::opcode_SCREENHEIGHT() {
    VM_INT v = graphics->get_screen_height();
    stack_push_int(v);
    if (runtime_debug)
        std::cout << "Screen height is " << v << std::endl;
    return false;
}

bool VM::opcode_LOADTYPEFACE() {
    VM_STRING v = stack_pop_string();
    VM_INT id = graphics->load_font(v.c_str());
    stack_push_int(id);
    if (runtime_debug)
        std::cout << "Loaded typeface '" << v << "', returned ID is " << id << std::endl;
    return false;
}

bool VM::opcode_CREATEFONT() {
    VM_INT size = stack_pop_int();
    VM_INT index = stack_pop_int();
    VM_INT id = graphics->create_font_by_size(index, size);
    stack_push_int(id);
    if (runtime_debug)
        std::cout << "Create font " << index << "/" << index << ", returned ID is " << id << std::endl;
    return false;
}

bool VM::opcode_TEXT() {
    VM_STRING text = stack_pop_string();
    VM_INT y = stack_pop_int();
    VM_INT x = stack_pop_int();
    VM_INT index = stack_pop_int();
    graphics->print_text(index, text, x, y);
    if (runtime_debug)
        std::cout << "Showing text '" << text << "', font ID " << index << " at " << x << "," << y << std::endl;
    return false;
}

bool VM::opcode_TEXTRIGHT() {
    VM_STRING text = stack_pop_string();
    VM_INT y = stack_pop_int();
    VM_INT x = stack_pop_int();
    VM_INT index = stack_pop_int();
    graphics->print_text_right(index, text, x, y);
    if (runtime_debug)
        std::cout << "Showing text '" << text << "', font ID " << index << " at " << x << "," << y << std::endl;
    return false;
}

bool VM::opcode_TEXTCENTRE() {
    VM_STRING text = stack_pop_string();
    VM_INT y = stack_pop_int();
    VM_INT x = stack_pop_int();
    VM_INT index = stack_pop_int();
    graphics->print_text_centre(index, text, x, y);
    if (runtime_debug)
        std::cout << "Showing text '" << text << "', font ID " << index << " at " << x << "," << y << std::endl;
    return false;
}

bool VM::opcode_CREATEVERTEX() {
    Boxed *variable = get_variable();
    VM_INT colour = stack_pop_int();
    VM_FLOAT z = stack_pop_float();
    VM_FLOAT y = stack_pop_float();
    VM_FLOAT x = stack_pop_float();
    VM_INT array_index = stack_pop_int();

    auto base = static_cast<size_t>(array_index) * 4;

    // X
    Boxed *field = &variable->fields[static_cast<size_t>(base)];
    field->type = Type::Float;
    field->value_float = x;

    // Y
    field = &variable->fields[static_cast<size_t>(base + 1)];
    field->type = Type::Float;
    field->value_float = y;

    // Z
    field = &variable->fields[static_cast<size_t>(base + 2)];
    field->type = Type::Float;
    field->value_float = z;

    // colour
    field = &variable->fields[static_cast<size_t>(base + 3)];
    field->type = Type::Integer;
    field->value_int = colour;

    return false;
}

bool VM::opcode_CREATETRIANGLE() {
    Boxed *variable = get_variable();
    VM_INT colour = stack_pop_int();
    VM_INT v3 = stack_pop_int();
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT array_index = stack_pop_int();

    auto base = static_cast<size_t>(array_index) * 4;

    // Vertex 1
    Boxed *field = &variable->fields[static_cast<size_t>(base)];
    field->type = Type::Integer;
    field->value_int = v1;

    // Vertex 2
    field = &variable->fields[static_cast<size_t>(base + 1)];
    field->type = Type::Integer;
    field->value_int = v2;

    // Vertex 3
    field = &variable->fields[static_cast<size_t>(base + 2)];
    field->type = Type::Integer;
    field->value_int = v3;

    // colour
    field = &variable->fields[static_cast<size_t>(base + 3)];
    field->type = Type::Integer;
    field->value_int = colour;

    return false;
}

bool VM::opcode_CREATESHAPE() {
    Boxed *variable2 = get_variable();
    VM_INT var2 = stack_pop_int();
    Boxed *variable1 = get_variable_by_int(var2);
    world.create_shape(*variable1, *variable2);
    stack_push_int(0);
    return false;
}

bool VM::opcode_CREATEOBJECT() {
    VM_FLOAT scale = stack_pop_float();
    VM_FLOAT rz = stack_pop_float();
    VM_FLOAT ry = stack_pop_float();
    VM_FLOAT rx = stack_pop_float();
    VM_FLOAT z = stack_pop_float();
    VM_FLOAT y = stack_pop_float();
    VM_FLOAT x = stack_pop_float();
    VM_INT id = stack_pop_int();
    VM_INT render_type = stack_pop_int();
    VM_INT obj_id = world.create_object(id, x, y, z, rx, ry, rz, scale, render_type);
    stack_push_int(obj_id);
    return false;
}

bool VM::opcode_OBJECTTRANSLATE() {
    VM_FLOAT z = stack_pop_float();
    VM_FLOAT y = stack_pop_float();
    VM_FLOAT x = stack_pop_float();
    VM_INT id = stack_pop_int();
    world.object_translate(id, x, y, z);
    return false;
}

bool VM::opcode_OBJECTROTATE() {
    VM_FLOAT z = stack_pop_float();
    VM_FLOAT y = stack_pop_float();
    VM_FLOAT x = stack_pop_float();
    VM_INT id = stack_pop_int();
    world.object_rotate(id, x, y, z);
    return false;
}

bool VM::opcode_OBJECTSCALE() {
    VM_FLOAT scale = stack_pop_float();
    VM_INT id = stack_pop_int();
    world.object_scale(id, scale);
    return false;
}

bool VM::opcode_RENDERFRAME() {
    world.render(*graphics);
    return false;
}

bool VM::opcode_LINE() {
    VM_INT y2 = stack_pop_int();
    VM_INT x2 = stack_pop_int();
    VM_INT y1 = stack_pop_int();
    VM_INT x1 = stack_pop_int();
    graphics->line(x1, y1, x2, y2);
    if (runtime_debug)
        std::cout << "Line from " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
    return false;
}

bool VM::opcode_CIRCLE() {
    VM_INT r = stack_pop_int();
    VM_INT y = stack_pop_int();
    VM_INT x = stack_pop_int();
    graphics->circle(x, y, r, false);
    if (runtime_debug)
        std::cout << "Circle at " << x << "," << y << ", r " << r << std::endl;
    return false;
}

bool VM::opcode_CIRCLEFILL() {
    VM_INT r = stack_pop_int();
    VM_INT y = stack_pop_int();
    VM_INT x = stack_pop_int();
    graphics->circle(x, y, r, true);
    if (runtime_debug)
        std::cout << "Filled circle at " << x << "," << y << ", r " << r << std::endl;
    return false;
}

bool VM::opcode_RECTANGLE() {
    VM_INT y2 = stack_pop_int();
    VM_INT x2 = stack_pop_int();
    VM_INT y1 = stack_pop_int();
    VM_INT x1 = stack_pop_int();
    graphics->line(x1, y1, x2, y1);
    graphics->line(x1, y2, x2, y2);
    graphics->line(x1, y1, x1, y2);
    graphics->line(x2, y1, x2, y2);
    if (runtime_debug)
        std::cout << "Rectangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
    return false;
}

bool VM::opcode_RECTANGLEFILL() {
    VM_INT y2 = stack_pop_int();
    VM_INT x2 = stack_pop_int();
    VM_INT y1 = stack_pop_int();
    VM_INT x1 = stack_pop_int();
    graphics->rectangle(x1, y1, x2, y2);
    if (runtime_debug)
        std::cout << "Filled rectangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
    return false;
}

bool VM::opcode_TRIANGLE() {
    VM_INT y3 = stack_pop_int();
    VM_INT x3 = stack_pop_int();
    VM_INT y2 = stack_pop_int();
    VM_INT x2 = stack_pop_int();
    VM_INT y1 = stack_pop_int();
    VM_INT x1 = stack_pop_int();
    graphics->line(x1, y1, x2, y2);
    graphics->line(x2, y2, x3, y3);
    graphics->line(x3, y3, x1, y1);
    if (runtime_debug)
        std::cout << "Triangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << " to " << x3 << "," << y3 << std::endl;
    return false;
}

bool VM::opcode_TRIANGLEFILL() {
    VM_INT y3 = stack_pop_int();
    VM_INT x3 = stack_pop_int();
    VM_INT y2 = stack_pop_int();
    VM_INT x2 = stack_pop_int();
    VM_INT y1 = stack_pop_int();
    VM_INT x1 = stack_pop_int();
    graphics->triangle(x1, y1, x2, y2, x3, y3);
    if (runtime_debug)
        std::cout << "Filled triangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << " to " << x3 << "," << y3 << std::endl;
    return false;
}

bool VM::opcode_TRIANGLESHADED() {
    VM_INT c3 = stack_pop_int();
    VM_INT y3 = stack_pop_int();
    VM_INT x3 = stack_pop_int();
    VM_INT c2 = stack_pop_int();
    VM_INT y2 = stack_pop_int();
    VM_INT x2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT y1 = stack_pop_int();
    VM_INT x1 = stack_pop_int();
    graphics->gouraud_triangle(x1, y1, x2, y2, x3, y3, c1, c2, c3, false);
    if (runtime_debug)
        std::cout << "Shaded triangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << " to " << x3 << "," << y3 << std::endl;
    return false;
}

bool VM::opcode_INKEY() {
    VM_INT timeout = stack_pop_int();
    VM_INT v;
    if (graphics->is_open()) {
        v = graphics->inkey(timeout);
    } else {
        v = getchar();
    }
    stack_push_int(v);
    return false;
}

bool VM::opcode_INKEYS() {
    VM_INT timeout = stack_pop_int();
    VM_STRING v = graphics->inkeys(timeout);
    stack_push_string(v);
    return false;
}

VM::VM(Graphics *_graphics) {
    runtime_debug = false;
    locals = new std::vector<Boxed>(0);
    graphics = _graphics;
    stack.resize(StackSize);
}

void VM::run() {
    std::cout << "-> Running" << std::endl;
    pc = 0;
    data_iterator = data.begin();
    bool quit = false;
    int poll_count = 0;
    while (!quit) {
        poll_count++;
        if (poll_count == 100) {
            graphics->poll();
            poll_count = 0;
        }
        bc = code[pc++];
        if (runtime_debug) {
            std::cout << std::uppercase << "[" << std::setw(4) << bc.file_number << " : " << std::setw(8) << bc.line_number << " : " << std::hex << std::setw(8)
                      << pc - 1 << " : " << std::setw(2) << (int)bc.opcode << "]  " << std::nouppercase << std::dec;
        }
        switch (bc.opcode) {
        case NOP:
            if (runtime_debug)
                std::cout << "NOP" << std::endl;
            break;
        case HALT:
            quit = opcode_HALT();
            break;
        case TRACEON:
            runtime_debug = true;
            break;
        case TRACEOFF:
            std::cout << std::endl;
            runtime_debug = false;
            break;
        case DROP:
            quit = opcode_DROP();
            break;
        case CONST_I:
            quit = opcode_CONST_I();
            break;
        case LOAD_F:
            quit = opcode_LOAD_F();
            break;
        case LOAD_I:
            quit = opcode_LOAD_I();
            break;
        case LOAD_S:
            quit = opcode_LOAD_S();
            break;
        case MULTIPLY_F:
            quit = opcode_MULTIPLY_F();
            break;
        case MULTIPLY_I:
            quit = opcode_MULTIPLY_I();
            break;
        case DIVIDE_F:
            quit = opcode_DIVIDE_F();
            break;
        case DIVIDE_I:
            quit = opcode_DIVIDE_I();
            break;
        case ADD_I:
            quit = opcode_ADD_I();
            break;
        case ADD_F:
            quit = opcode_ADD_F();
            break;
        case SHL:
            quit = opcode_SHL();
            break;
        case SHR:
            quit = opcode_SHR();
            break;
        case SUBTRACT_I:
            quit = opcode_SUBTRACT_I();
            break;
        case SUBTRACT_F:
            quit = opcode_SUBTRACT_F();
            break;
        case ADD_S:
            quit = opcode_ADD_S();
            break;
        case I_TO_F:
            quit = opcode_I_TO_F();
            break;
        case I_TO_F2:
            quit = opcode_I_TO_F2();
            break;
        case F_TO_I:
            quit = opcode_F_TO_I();
            break;
        case F_TO_I2:
            quit = opcode_F_TO_I2();
            break;
        case STORE_I:
            quit = opcode_STORE_I();
            break;
        case STORE_F:
            quit = opcode_STORE_F();
            break;
        case STORE_S:
            quit = opcode_STORE_S();
            break;
        case LOAD_I_ARRAY:
            quit = opcode_LOAD_I_ARRAY();
            break;
        case LOAD_F_ARRAY:
            quit = opcode_LOAD_F_ARRAY();
            break;
        case LOAD_S_ARRAY:
            quit = opcode_LOAD_S_ARRAY();
            break;
        case STORE_I_ARRAY:
            quit = opcode_STORE_I_ARRAY();
            break;
        case STORE_F_ARRAY:
            quit = opcode_STORE_F_ARRAY();
            break;
        case STORE_S_ARRAY:
            quit = opcode_STORE_S_ARRAY();
            break;
        case LOAD_I_FIELD:
            quit = opcode_LOAD_I_FIELD();
            break;
        case LOAD_F_FIELD:
            quit = opcode_LOAD_F_FIELD();
            break;
        case LOAD_S_FIELD:
            quit = opcode_LOAD_S_FIELD();
            break;
        case STORE_I_FIELD:
            quit = opcode_STORE_I_FIELD();
            break;
        case STORE_F_FIELD:
            quit = opcode_STORE_F_FIELD();
            break;
        case STORE_S_FIELD:
            quit = opcode_STORE_S_FIELD();
            break;
        case LOAD_I_FIELD_ARRAY:
            quit = opcode_LOAD_I_FIELD_ARRAY();
            break;
        case LOAD_F_FIELD_ARRAY:
            quit = opcode_LOAD_F_FIELD_ARRAY();
            break;
        case LOAD_S_FIELD_ARRAY:
            quit = opcode_LOAD_S_FIELD_ARRAY();
            break;
        case STORE_I_FIELD_ARRAY:
            quit = opcode_STORE_I_FIELD_ARRAY();
            break;
        case STORE_F_FIELD_ARRAY:
            quit = opcode_STORE_F_FIELD_ARRAY();
            break;
        case STORE_S_FIELD_ARRAY:
            quit = opcode_STORE_S_FIELD_ARRAY();
            break;
        case STORE_I_ARRAY_FLIP:
            quit = opcode_STORE_I_ARRAY_FLIP();
            break;
        case STORE_F_ARRAY_FLIP:
            quit = opcode_STORE_F_ARRAY_FLIP();
            break;
        case STORE_S_ARRAY_FLIP:
            quit = opcode_STORE_S_ARRAY_FLIP();
            break;
        case INPUT_I:
            quit = opcode_INPUT_I();
            break;
        case INPUT_F:
            quit = opcode_INPUT_F();
            break;
        case INPUT_S:
            quit = opcode_INPUT_S();
            break;
        case PRINT_F:
            quit = opcode_PRINT_F();
            break;
        case PRINT_I:
            quit = opcode_PRINT_I();
            break;
        case PRINT_S:
            quit = opcode_PRINT_S();
            break;
        case PRINT_NL:
            quit = opcode_PRINT_NL();
            break;
        case PRINT_SPC:
            quit = opcode_PRINT_SPC();
            break;
        case NEW_TYPE:
            quit = opcode_NEW_TYPE();
            break;
        case DIM_F:
            quit = opcode_DIM_F();
            break;
        case DIM_I:
            quit = opcode_DIM_I();
            break;
        case DIM_S:
            quit = opcode_DIM_S();
            break;
        case DUP_I:
            quit = opcode_DUP_I();
            break;
        case DUP_F:
            quit = opcode_DUP_F();
            break;
        case ROT_I:
            quit = opcode_ROT_I();
            break;
        case ROT_F:
            quit = opcode_ROT_F();
            break;
        case FOR_I:
            quit = opcode_FOR_I();
            break;
        case FOR_F:
            quit = opcode_FOR_F();
            break;
        case NEXT_I:
            quit = opcode_NEXT_I();
            break;
        case NEXT_F:
            quit = opcode_NEXT_F();
            break;
        case REPEAT:
            quit = opcode_REPEAT();
            break;
        case READ_I:
            quit = opcode_READ_I();
            break;
        case READ_F:
            quit = opcode_READ_F();
            break;
        case READ_S:
            quit = opcode_READ_S();
            break;
        case READ_I_ARRAY:
            quit = opcode_READ_I_ARRAY();
            break;
        case READ_F_ARRAY:
            quit = opcode_READ_F_ARRAY();
            break;
        case READ_S_ARRAY:
            quit = opcode_READ_S_ARRAY();
            break;
        case RESTORE:
            quit = opcode_RESTORE();
            break;
        case TIME:
            quit = opcode_TIME();
            break;
        case TIMES:
            quit = opcode_TIMES();
            break;
        case RND:
            quit = opcode_RND();
            break;
        case RNDRANGE:
            quit = opcode_RNDRANGE();
            break;
        case CLOSE:
            quit = opcode_CLOSE();
            break;
        case OPENIN:
            quit = opcode_OPENIN();
            break;
        case OPENOUT:
            quit = opcode_OPENOUT();
            break;
        case OPENUP:
            quit = opcode_OPENUP();
            break;
        case BPUT:
            quit = opcode_BPUT();
            break;
        case BGET:
            quit = opcode_BGET();
            break;
        case EOFH:
            quit = opcode_EOFH();
            break;
        case CLS:
            quit = opcode_CLS();
            break;
        case COLOURRGB:
            quit = opcode_COLOURRGB();
            break;
        case COLOURHEX:
            quit = opcode_COLOURHEX();
            break;
        case COLOURBGRGB:
            quit = opcode_COLOURBGRGB();
            break;
        case COLOURBGHEX:
            quit = opcode_COLOURBGHEX();
            break;
        case COLOUREXPRESSION:
            quit = opcode_COLOUREXPRESSION();
            break;
        case FLIP:
            quit = opcode_FLIP();
            break;
        case GRAPHICS:
            quit = opcode_GRAPHICS();
            break;
        case LINE:
            quit = opcode_LINE();
            break;
        case PLOT:
            quit = opcode_PLOT();
            break;
        case CIRCLE:
            quit = opcode_CIRCLE();
            break;
        case CIRCLEFILL:
            quit = opcode_CIRCLEFILL();
            break;
        case RECTANGLE:
            quit = opcode_RECTANGLE();
            break;
        case RECTANGLEFILL:
            quit = opcode_RECTANGLEFILL();
            break;
        case TRIANGLE:
            quit = opcode_TRIANGLE();
            break;
        case TRIANGLEFILL:
            quit = opcode_TRIANGLEFILL();
            break;
        case TRIANGLESHADED:
            quit = opcode_TRIANGLESHADED();
            break;
        case CLIP:
            quit = opcode_CLIP();
            break;
        case CLIPOFF:
            quit = opcode_CLIPOFF();
            break;
        case SCREENWIDTH:
            quit = opcode_SCREENWIDTH();
            break;
        case SCREENHEIGHT:
            quit = opcode_SCREENHEIGHT();
            break;
        case CREATEFONT:
            quit = opcode_CREATEFONT();
            break;
        case LOADTYPEFACE:
            quit = opcode_LOADTYPEFACE();
            break;
        case TEXT:
            quit = opcode_TEXT();
            break;
        case TEXTRIGHT:
            quit = opcode_TEXTRIGHT();
            break;
        case TEXTCENTRE:
            quit = opcode_TEXTCENTRE();
            break;

        case CREATEVERTEX:
            quit = opcode_CREATEVERTEX();
            break;
        case CREATETRIANGLE:
            quit = opcode_CREATETRIANGLE();
            break;
        case CREATESHAPE:
            quit = opcode_CREATESHAPE();
            break;
        case CREATEOBJECT:
            quit = opcode_CREATEOBJECT();
            break;
        case OBJECTTRANSLATE:
            quit = opcode_OBJECTTRANSLATE();
            break;
        case OBJECTROTATE:
            quit = opcode_OBJECTROTATE();
            break;
        case OBJECTSCALE:
            quit = opcode_OBJECTSCALE();
            break;

        case INKEY:
            quit = opcode_INKEY();
            break;
        case INKEYS:
            quit = opcode_INKEYS();
            break;

        case RENDERFRAME:
            quit = opcode_RENDERFRAME();
            break;
        case CMP_E_F:
            quit = opcode_CMP_E_F();
            break;
        case CMP_E_I:
            quit = opcode_CMP_E_I();
            break;
        case CMP_E_S:
            quit = opcode_CMP_E_S();
            break;
        case CMP_NE_F:
            quit = opcode_CMP_NE_F();
            break;
        case CMP_NE_I:
            quit = opcode_CMP_NE_I();
            break;
        case CMP_NE_S:
            quit = opcode_CMP_NE_S();
            break;
        case CMP_GE_F:
            quit = opcode_CMP_GE_F();
            break;
        case CMP_GE_I:
            quit = opcode_CMP_GE_I();
            break;
        case CMP_GE_S:
            quit = opcode_CMP_GE_S();
            break;
        case CMP_LE_F:
            quit = opcode_CMP_LE_F();
            break;
        case CMP_LE_I:
            quit = opcode_CMP_LE_I();
            break;
        case CMP_LE_S:
            quit = opcode_CMP_LE_S();
            break;
        case CMP_G_F:
            quit = opcode_CMP_G_F();
            break;
        case CMP_G_I:
            quit = opcode_CMP_G_I();
            break;
        case CMP_G_S:
            quit = opcode_CMP_G_S();
            break;
        case CMP_L_F:
            quit = opcode_CMP_L_F();
            break;
        case CMP_L_I:
            quit = opcode_CMP_L_I();
            break;
        case CMP_L_S:
            quit = opcode_CMP_L_S();
            break;
        case BOOL_OR:
            quit = opcode_BOOL_OR();
            break;
        case BOOL_AND:
            quit = opcode_BOOL_AND();
            break;
        case BOOL_EOR:
            quit = opcode_BOOL_EOR();
            break;
        case BOOL_NOT:
            quit = opcode_BOOL_NOT();
            break;
        case JNEREP:
            quit = opcode_JNEREP();
            break;
        case JNE:
            quit = opcode_JNE();
            break;
        case JE:
            quit = opcode_JE();
            break;
        case JUMP:
            quit = opcode_JUMP();
            break;
        case CALL:
            quit = opcode_CALL();
            break;
        case CASE_C:
            quit = opcode_CASE_C();
            break;
        case CASE_S:
            quit = opcode_CASE_S();
            break;
        case JPOSC:
            quit = opcode_JPOSC();
            break;
        case UNPACK_F:
            quit = opcode_UNPACK_F();
            break;
        case UNPACK_I:
            quit = opcode_UNPACK_I();
            break;
        case UNPACK_S:
            quit = opcode_UNPACK_S();
            break;
        case RETURN:
            quit = opcode_RETURN();
            break;
        case GOTO:
            quit = opcode_GOTO();
            break;
        case GOSUB:
            quit = opcode_GOSUB();
            break;
        case DIV_I:
            quit = opcode_DIV_I();
            break;
        case DIV_F:
            quit = opcode_DIV_F();
            break;
        case MOD_I:
            quit = opcode_MOD_I();
            break;
        case MOD_F:
            quit = opcode_MOD_F();
            break;
        case SQR:
            quit = opcode_SQR();
            break;
        case LN:
            quit = opcode_LN();
            break;
        case LOG:
            quit = opcode_LOG();
            break;
        case EXP:
            quit = opcode_EXP();
            break;
        case ATN:
            quit = opcode_ATN();
            break;
        case TAN:
            quit = opcode_TAN();
            break;
        case COS:
            quit = opcode_COS();
            break;
        case SIN:
            quit = opcode_SIN();
            break;
        case ACS:
            quit = opcode_ACS();
            break;
        case ASN:
            quit = opcode_ASN();
            break;
        case DEG:
            quit = opcode_DEG();
            break;
        case RAD:
            quit = opcode_RAD();
            break;
        case SGN:
            quit = opcode_SGN();
            break;
        case ABS_I:
            quit = opcode_ABS_I();
            break;
        case ABS_F:
            quit = opcode_ABS_F();
            break;
        case PI:
            quit = opcode_PI();
            break;

        case ASC:
            quit = opcode_ASC();
            break;
        case CHRS:
            quit = opcode_CHRS();
            break;
        case INSTR:
            quit = opcode_INSTR();
            break;
        case LEFTS:
            quit = opcode_LEFTS();
            break;
        case MIDS:
            quit = opcode_MIDS();
            break;
        case RIGHTS:
            quit = opcode_RIGHTS();
            break;
        case LEN:
            quit = opcode_LEN();
            break;
        case VAL:
            quit = opcode_VAL();
            break;
        case STRS:
            quit = opcode_STRS();
            break;
        case STRS_H:
            quit = opcode_STRS_H();
            break;
        case STRINGS:
            quit = opcode_STRINGS();
            break;
        default:
            std::cout << "Unknown token" << std::endl;
            exit(1);
        }
    };
}

void VM::insert_instruction(UINT32 line_number, short file_number, bool write, BYTE bytecode, UINT32 operand) {
    if (write) {
        Bytecode b;
        b.opcode = bytecode;
        b.data = operand;
        b.line_number = line_number;
        b.file_number = file_number;
        code.push_back(std::move(b));
    }
    pc++;
}

void VM::insert_bytecode(UINT32 line_number, short file_number, bool write, BYTE bytecode) {
    if (write) {
        Bytecode b;
        b.opcode = bytecode;
        b.data = 0;
        b.line_number = line_number;
        b.file_number = file_number;
        code.push_back(std::move(b));
    }
    pc++;
}
