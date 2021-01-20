#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
#define _GLIBCXX_USE_C99 1
#ifdef RISCOS
#elif __unix__
#else
#include <windows.h>
#endif
#include "../engine/engine.h"
#include "clock.h"
#include "vm.h"
#include <array>
#include <chrono>
#include <cmath>
#ifdef RISCOS
#include "kernel.h"
#include "swis.h"
#endif
#ifdef __WINDOWS__
#include <codecvt>
#include <conio.h>
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

extern World world;

std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
VM_INT get_clock()
{
    auto t2 = std::chrono::high_resolution_clock::now();
    auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    double d = time_span.count() / 10.0;
    return static_cast<VM_INT>(d);
}

bool VM::opcode_HALT()
{
    if (runtime_debug)
        *logfile << "End of program" << std::endl;
    return true;
}

bool VM::opcode_DROP()
{
    stack_drop();
    if (runtime_debug)
        *logfile << "Dropping top item off stack" << std::endl;
    return false;
}

bool VM::opcode_CONST_I()
{
    stack_push_int(bc.data);
    if (runtime_debug) {
        *logfile << "Push constant int " << bc.data << " onto the stack" << std::endl;
    }
    return false;
}

bool VM::opcode_LOAD_F()
{
    Boxed* variable = get_variable();
    stack_push_float(variable->value_float);
    if (runtime_debug) {
        if (!variable->constant) {
            *logfile << "Push variable '" << variable->name << "', float " << variable->value_float << " onto the stack" << std::endl;
        } else {
            *logfile << "Push constant float " << variable->value_float << " onto the stack" << std::endl;
        }
    }
    return false;
}

bool VM::opcode_LOAD_I()
{
    Boxed* variable = get_variable();
    stack_push_int(variable->value_int);
    if (runtime_debug) {
        if (!variable->constant) {
            *logfile << "Push variable '" << variable->name << "', int " << variable->value_int << " onto the stack" << std::endl;
        } else {
            *logfile << "Push constant int " << variable->value_int << " onto the stack" << std::endl;
        }
    }
    return false;
}

bool VM::opcode_LOAD_S()
{
    Boxed* variable = get_variable();
    stack_push_string(variable->value_string);
    if (runtime_debug) {
        if (!variable->constant) {
            *logfile << "Push variable '" << variable->name << "', string '" << variable->value_string << "' onto the stack" << std::endl;
        } else {
            *logfile << "Push constant string '" << variable->value_string << "' onto the stack" << std::endl;
        }
    }
    return false;
}

bool VM::opcode_ADD_F()
{
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = v1 + v2;
    stack_push_float(v3);
    if (runtime_debug)
        *logfile << "Add float " << v1 << " + " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_ADD_I()
{
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 + v2;
    stack_push_int(v3);
    if (runtime_debug)
        *logfile << "Add int " << v1 << " + " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_SHL()
{
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 << v2;
    stack_push_int(v3);
    if (runtime_debug)
        *logfile << "<< int " << v1 << " + " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_SHR()
{
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 >> v2;
    stack_push_int(v3);
    if (runtime_debug)
        *logfile << ">> int " << v1 << " + " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_SUBTRACT_F()
{
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = v1 - v2;
    stack_push_float(v3);
    if (runtime_debug)
        *logfile << "Subtract float " << v1 << " - " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_SUBTRACT_I()
{
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 - v2;
    stack_push_int(v3);
    if (runtime_debug)
        *logfile << "Subtract int " << v1 << " - " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_ADD_S()
{
    VM_STRING v2 = stack_pop_string();
    VM_STRING v1 = stack_pop_string();
    if (runtime_debug) {
        VM_STRING v3 = v1;
        v3.append(v2);
        stack_push_string(v3);
        if (runtime_debug)
            *logfile << "Add string '" << v1 << "' + '" << v2 << "' = '" << v3 << "'" << std::endl;
    } else {
        v1.append(v2);
        stack_push_string(v1);
    }
    return false;
}

bool VM::opcode_MULTIPLY_F()
{
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = v1 * v2;
    stack_push_float(v3);
    if (runtime_debug)
        *logfile << "Multiply float " << v1 << " * " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_MULTIPLY_I()
{
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 * v2;
    stack_push_int(v3);
    if (runtime_debug)
        *logfile << "Multiply int " << v1 << " * " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_DIVIDE_F()
{
    VM_FLOAT v2 = stack_pop_float();
    if (v2 == 0.0) {
        std::cout << "Divide by zero error\n";
        exit(1);
    }
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = v1 / v2;
    stack_push_float(v3);
    if (runtime_debug)
        *logfile << "Divide float " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_DIVIDE_I()
{
    VM_INT v2 = stack_pop_int();
    if (v2 == 0) {
        std::cout << "Divide by zero error\n";
        exit(1);
    }
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 / v2;
    stack_push_int(v3);
    if (runtime_debug)
        *logfile << "Divide int " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_I_TO_F()
{
    VM_INT v1 = stack_pop_int();
    VM_FLOAT v2 = v1;
    stack_push_float(v2);
    if (runtime_debug)
        *logfile << "Convert " << v1 << " (int) -> " << v2 << " (float)\n";
    return false;
}

bool VM::opcode_I_TO_F2()
{
    VM_FLOAT v0 = stack_pop_float();
    VM_INT v1 = stack_pop_int();
    VM_FLOAT v2 = v1;
    stack_push_float(v2);
    stack_push_float(v0);
    if (runtime_debug)
        *logfile << "Convert " << v1 << " (int) -> " << v2 << " (float)\n";
    return false;
}

bool VM::opcode_F_TO_I()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_INT v2 = static_cast<VM_INT>(floor(v1));
    stack_push_int(v2);
    if (runtime_debug)
        *logfile << "Convert " << v1 << " (float) -> " << v2 << " (int)\n";
    return false;
}

bool VM::opcode_F_TO_I2()
{
    VM_INT v0 = stack_pop_int();
    VM_FLOAT v1 = stack_pop_float();
    VM_INT v2 = static_cast<VM_INT>(floor(v1));
    stack_push_int(v2);
    stack_push_int(v0);
    if (runtime_debug)
        *logfile << "Convert " << v1 << " (float) -> " << v2 << " (int)\n";
    return false;
}

bool VM::opcode_SWAP_I()
{
    VM_INT v = stack_pop_int();
    Boxed* variable = get_variable();
    Boxed* variable2 = get_variable_by_int(v);
    VM_INT t = variable->value_int;
    variable->value_int = variable2->value_int;
    variable2->value_int = t;
    if (runtime_debug)
        *logfile << "Swap " << variable->name << " and " << variable2->name << std::endl;
    return false;
}

bool VM::opcode_SWAP_F()
{
    VM_INT v = stack_pop_int();
    Boxed* variable = get_variable();
    Boxed* variable2 = get_variable_by_int(v);
    VM_FLOAT t = variable->value_float;
    variable->value_float = variable2->value_float;
    variable2->value_float = t;
    if (runtime_debug)
        *logfile << "Swap " << variable->name << " and " << variable2->name << std::endl;
    return false;
}

bool VM::opcode_SWAP_S()
{
    VM_INT v = stack_pop_int();
    Boxed* variable = get_variable();
    Boxed* variable2 = get_variable_by_int(v);
    VM_STRING t = variable->value_string;
    variable->value_string = variable2->value_string;
    variable2->value_string = t;
    if (runtime_debug)
        *logfile << "Swap " << variable->name << " and " << variable2->name << std::endl;
    return false;
}

bool VM::opcode_STORE_I()
{
    Boxed* variable = get_variable();
    VM_INT v = stack_pop_int();
    variable->value_int = v;
    if (runtime_debug)
        *logfile << "Store integer " << v << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_STORE_F()
{
    Boxed* variable = get_variable();
    VM_FLOAT v = stack_pop_float();
    variable->value_float = v;
    if (runtime_debug)
        *logfile << "Store float " << v << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_STORE_S()
{
    Boxed* variable = get_variable();
    VM_STRING v = stack_pop_string();
    variable->value_string = v;
    if (runtime_debug)
        *logfile << "Store string '" << v << "' in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_INPUT_F()
{
    Boxed* variable = get_variable();
    VM_INT qmark = stack_pop_int();
    if (qmark) {
        graphics->print_text(console_font, "?", -1, -1);
    }
    auto s = graphics->input();
    double v = std::stod(s);
    variable->value_float = v;
    if (runtime_debug)
        *logfile << "Inputted and stored float " << variable->value_float << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_INPUT_I()
{
    Boxed* variable = get_variable();
    VM_INT qmark = stack_pop_int();
    if (qmark) {
        graphics->print_text(console_font, "?", -1, -1);
    }
    auto s = graphics->input();
    int v = std::stoi(s);
    variable->value_int = v;
    if (runtime_debug)
        *logfile << "Inputted and stored integer " << variable->value_int << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_INPUT_S()
{
    Boxed* variable = get_variable();
    VM_INT qmark = stack_pop_int();
    if (qmark) {
        graphics->print_text(console_font, "?", -1, -1);
    }
    auto v = graphics->input();
    variable->value_string = v;
    if (runtime_debug)
        *logfile << "Inputted and stored string " << variable->value_string << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_PRINT_F()
{
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
    graphics->print_console(v);
    if (runtime_debug)
        *logfile << std::endl;
    return false;
}

bool VM::opcode_PRINT_I()
{
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
    graphics->print_console(v);
    if (runtime_debug)
        *logfile << std::endl;
    return false;
}

bool VM::opcode_PRINT_S()
{
    VM_STRING v = stack_pop_string();
    if (runtime_debug)
        *logfile << "Print string: '";
    graphics->print_console(v);
    if (runtime_debug)
        *logfile << "'" << std::endl;
    return false;
}

bool VM::opcode_PRINT_NL()
{
    if (runtime_debug)
        *logfile << "Print newline: ";
    if (!graphics->is_open()) {
        *logfile << std::endl;
    } else {
        graphics->print_console("\r");
    }
    return false;
}

bool VM::opcode_PRINT_SPC()
{
    VM_INT v1 = stack_pop_int();
    std::string v2 = "";
    for (int i = 0; i < v1; i++) {
        v2 += " ";
    }
    graphics->print_text(0, v2, -1, -1);
    if (runtime_debug)
        *logfile << "Print " << v1 << " spaces";
    return false;
}

bool VM::opcode_LOAD_F_ARRAY()
{
    Boxed* variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= static_cast<int>(variable->value_float_array.size()))
            error("Invalid array or array index");
        VM_FLOAT v = variable->value_float_array[index];
        stack_push_float(v);
        if (runtime_debug)
            *logfile << "Push variable " << variable->name << ", float " << v << " (index " << index << ") onto the stack\n";
    } else {
        VM_INT index2 = stack_pop_int();
        VM_INT index1 = stack_pop_int();
        VM_INT size = variable->fields[0].value_int;
        int index = index2 * size + index1;
        if (index < 0 || index >= static_cast<int>(variable->value_float_array.size()))
            error("Invalid array or array index");
        VM_FLOAT v = variable->value_float_array[index];
        stack_push_float(v);
        if (runtime_debug)
            *logfile << "Push variable " << variable->name << ", string '" << v << "' (index " << index << ") onto the stack\n";
    }
    return false;
}

bool VM::opcode_LOAD_I_ARRAY()
{
    Boxed* variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= static_cast<int>(variable->value_int_array.size()))
            error("Invalid array or array index");
        VM_INT v = variable->value_int_array[index];
        stack_push_int(v);
        if (runtime_debug)
            *logfile << "Push variable " << variable->name << ", int " << v << " (index " << index << ") onto the stack\n";
    } else {
        VM_INT index2 = stack_pop_int();
        VM_INT index1 = stack_pop_int();
        VM_INT size = variable->fields[0].value_int;
        int index = index2 * size + index1;
        if (index < 0 || index >= static_cast<int>(variable->value_int_array.size()))
            error("Invalid array or array index");
        VM_INT v = variable->value_int_array[index];
        stack_push_int(v);
        if (runtime_debug)
            *logfile << "Push variable " << variable->name << ", string '" << v << "' (index " << index << ") onto the stack\n";
    }
    return false;
}

bool VM::opcode_LOAD_S_ARRAY()
{
    Boxed* variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= static_cast<int>(variable->value_string_array.size()))
            error("Invalid array or array index");
        VM_STRING v = variable->value_string_array[index];
        stack_push_string(v);
        if (runtime_debug)
            *logfile << "Push variable " << variable->name << ", string '" << v << "' (index " << index << ") onto the stack\n";
    } else {
        VM_INT index2 = stack_pop_int();
        VM_INT index1 = stack_pop_int();
        VM_INT size = variable->fields[0].value_int;
        int index = index2 * size + index1;
        if (index < 0 || index >= static_cast<int>(variable->value_string_array.size()))
            error("Invalid array or array index");
        VM_STRING v = variable->value_string_array[index];
        stack_push_string(v);
        if (runtime_debug)
            *logfile << "Push variable " << variable->name << ", string '" << v << "' (index " << index << ") onto the stack\n";
    }
    return false;
}

bool VM::opcode_STORE_F_ARRAY()
{
    Boxed* variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_FLOAT v = stack_pop_float();
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= static_cast<int>(variable->value_float_array.size()))
            error("Invalid array or array index");
        variable->value_float_array[index] = v;
        if (runtime_debug)
            *logfile << "Store float array variable " << variable->name << " index " << index << " value " << v << std::endl;
    } else {
        VM_FLOAT v = stack_pop_float();
        VM_INT index2 = stack_pop_int();
        VM_INT index1 = stack_pop_int();
        VM_INT size = variable->fields[0].value_int;
        int index = index2 * size + index1;
        if (index < 0 || index >= static_cast<int>(variable->value_float_array.size()))
            error("Invalid array or array index");
        variable->value_float_array[index] = v;
        if (runtime_debug)
            *logfile << "Store float array variable " << variable->name << " index " << index << " value " << v << std::endl;
    }
    return false;
}

bool VM::opcode_STORE_I_ARRAY()
{
    Boxed* variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT v = stack_pop_int();
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= static_cast<int>(variable->value_int_array.size()))
            error("Invalid array or array index");
        variable->value_int_array[index] = v;
        if (runtime_debug)
            *logfile << "Store int array variable " << variable->name << " index " << index << " value " << v << std::endl;
    } else {
        VM_INT v = stack_pop_int();
        VM_INT index2 = stack_pop_int();
        VM_INT index1 = stack_pop_int();
        VM_INT size = variable->fields[0].value_int;
        int index = index2 * size + index1;
        if (index < 0 || index >= static_cast<int>(variable->value_string_array.size()))
            error("Invalid array or array index");
        variable->value_int_array[index] = v;
        if (runtime_debug)
            *logfile << "Store float array variable " << variable->name << " index " << index << " value " << v << std::endl;
    }
    return false;
}

bool VM::opcode_STORE_S_ARRAY()
{
    Boxed* variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_STRING v = stack_pop_string();
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= static_cast<int>(variable->value_string_array.size()))
            error("Invalid array or array index");
        variable->value_string_array[index] = v;
        if (runtime_debug)
            *logfile << "Store string array variable " << variable->name << " index " << index << " value " << v << std::endl;
    } else {
        VM_STRING v = stack_pop_string();
        VM_INT index2 = stack_pop_int();
        VM_INT index1 = stack_pop_int();
        VM_INT size = variable->fields[0].value_int;
        int index = index2 * size + index1;
        if (index < 0 || index >= static_cast<int>(variable->value_string_array.size()))
            error("Invalid array or array index");
        variable->value_string_array[index] = v;
        if (runtime_debug)
            *logfile << "Store float array variable " << variable->name << " index " << index << " value " << v << std::endl;
    }
    return false;
}

bool VM::opcode_LOAD_I_FIELD()
{
    VM_INT index = stack_pop_int();
    Boxed* variable = get_variable();
    Boxed* field = &variable->fields.at(index);
    stack_push_int(field->value_int);
    if (runtime_debug)
        *logfile << "Load field variable " << variable->name << " index " << index << " value " << field->value_int << std::endl;
    return false;
}

bool VM::opcode_LOAD_F_FIELD()
{
    VM_INT index = stack_pop_int();
    Boxed* variable = get_variable();
    Boxed* field = &variable->fields.at(index);
    stack_push_float(field->value_float);
    if (runtime_debug)
        *logfile << "Load field variable " << variable->name << " index " << index << " value " << field->value_float << std::endl;
    return false;
}

bool VM::opcode_LOAD_S_FIELD()
{
    VM_INT index = stack_pop_int();
    Boxed* variable = get_variable();
    Boxed* field = &variable->fields.at(index);
    stack_push_string(field->value_string);
    if (runtime_debug)
        *logfile << "Load field variable " << variable->name << " index " << index << " value " << field->value_string << std::endl;
    return false;
}

bool VM::opcode_STORE_I_FIELD()
{
    VM_INT index = stack_pop_int();
    VM_INT v = stack_pop_int();
    Boxed* variable = get_variable();
    Boxed* field = &variable->fields.at(index);
    field->value_int = v;
    if (runtime_debug)
        *logfile << "Store field variable " << variable->name << " index " << index << " value " << v << std::endl;
    return false;
}

bool VM::opcode_STORE_F_FIELD()
{
    VM_INT index = stack_pop_int();
    VM_FLOAT v = stack_pop_float();
    Boxed* variable = get_variable();
    Boxed* field = &variable->fields.at(index);
    field->value_float = v;
    if (runtime_debug)
        *logfile << "Store field variable " << variable->name << " index " << index << " value " << v << std::endl;
    return false;
}

bool VM::opcode_STORE_S_FIELD()
{
    VM_INT index = stack_pop_int();
    VM_STRING v = stack_pop_string();
    Boxed* variable = get_variable();
    Boxed* field = &variable->fields.at(index);
    field->value_string.assign(v);
    if (runtime_debug)
        *logfile << "Store field variable " << variable->name << " index " << index << " value '" << v << "'" << std::endl;
    return false;
}

bool VM::opcode_LOAD_I_FIELD_ARRAY()
{
    VM_INT fields = stack_pop_int();
    VM_INT index = stack_pop_int();
    VM_INT array_index = stack_pop_int();
    Boxed* variable = get_variable();
    Boxed* field = &variable->fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    stack_push_float(field->value_int);
    if (runtime_debug)
        *logfile << "Load field variable " << variable->name << " index " << index << " value " << field->value_int << std::endl;
    return false;
}

bool VM::opcode_LOAD_F_FIELD_ARRAY()
{
    VM_INT fields = stack_pop_int();
    VM_INT index = stack_pop_int();
    VM_INT array_index = stack_pop_int();
    Boxed* variable = get_variable();
    Boxed* field = &variable->fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    stack_push_float(field->value_float);
    if (runtime_debug)
        *logfile << "Load field variable " << variable->name << " index " << index << " value " << field->value_float << std::endl;
    return false;
}

bool VM::opcode_LOAD_S_FIELD_ARRAY()
{
    VM_INT fields = stack_pop_int();
    VM_INT index = stack_pop_int();
    VM_INT array_index = stack_pop_int();
    Boxed* variable = get_variable();
    Boxed* field = &variable->fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    stack_push_string(field->value_string);
    if (runtime_debug)
        *logfile << "Load field variable " << variable->name << " index " << index << " value '" << field->value_string << "'" << std::endl;
    return false;
}

bool VM::opcode_STORE_I_FIELD_ARRAY()
{
    VM_INT fields = stack_pop_int();
    VM_INT index = stack_pop_int();
    VM_INT v = stack_pop_int();
    VM_INT array_index = stack_pop_int();
    Boxed* variable = get_variable();
    Boxed* field = &variable->fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    field->value_int = v;
    if (runtime_debug)
        *logfile << "Store field variable " << variable->name << " index " << index << " value " << v << std::endl;
    return false;
}

bool VM::opcode_STORE_F_FIELD_ARRAY()
{
    VM_INT fields = stack_pop_int();
    VM_INT index = stack_pop_int();
    VM_FLOAT v = stack_pop_float();
    VM_INT array_index = stack_pop_int();
    Boxed* variable = get_variable();
    Boxed* field = &variable->fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    field->value_float = v;
    if (runtime_debug)
        *logfile << "Store field variable " << variable->name << " index " << index << " value " << v << std::endl;
    return false;
}

bool VM::opcode_STORE_S_FIELD_ARRAY()
{
    VM_INT fields = stack_pop_int();
    VM_INT index = stack_pop_int();
    VM_STRING v = stack_pop_string();
    VM_INT array_index = stack_pop_int();
    Boxed* variable = get_variable();
    Boxed* field = &variable->fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    field->value_string.assign(v);
    if (runtime_debug)
        *logfile << "Store field variable " << variable->name << " index " << index << " value '" << v << "'" << std::endl;
    return false;
}

bool VM::opcode_NEW_TYPE()
{
    Boxed* variable = get_variable();
    VM_INT num_fields = static_cast<size_t>(stack_pop_int());
    if (num_fields == 0)
        error("DIM TYPE array of 0 size not allowed");

    variable->fields.resize(num_fields);
    if (runtime_debug)
        *logfile << "Initialised type '" << variable->name << "' with " << num_fields << " fields" << std::endl;
    return false;
}

bool VM::opcode_ARRAYSIZE()
{
    Boxed* variable = get_variable();
    VM_INT dimension = stack_pop_int();
    VM_INT size = 0;
    switch (variable->type) {
    case Type::INTEGER_ARRAY:
        size = static_cast<VM_INT>(variable->value_int_array.size());
        break;
    case Type::REAL_ARRAY:
        size = static_cast<VM_INT>(variable->value_float_array.size());
        break;
    case Type::STRING_ARRAY:
        size = static_cast<VM_INT>(variable->value_string_array.size());
        break;
    case Type::TYPE_ARRAY:
        error("Size of TYPE arrays not supported");
    }
    stack_push_int(size);
    if (runtime_debug)
        *logfile << "Size of array requested for variable'" << variable->name << "' result=" << size << std::endl;

    return false;
}

bool VM::opcode_DIM_F()
{
    Boxed* variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    variable->type = Type::REAL_ARRAY;
    variable->value_int = dimensions;
    if (dimensions == 1) {
        auto size = static_cast<size_t>(stack_pop_int()) + 1;
        if (size == 1)
            error("DIM array of 0 size not allowed");
        variable->value_float_array.resize(size);
        if (runtime_debug)
            *logfile << "Dimension float variable " << variable->name << " with size " << size << std::endl;
    } else {
        variable->fields.clear();
        auto size2 = static_cast<size_t>(stack_pop_int()) + 1;
        if (size2 == 1)
            error("DIM array of 0 size not allowed");
        auto size1 = static_cast<size_t>(stack_pop_int()) + 1;
        if (size1 == 1)
            error("DIM array of 0 size not allowed");
        Boxed b;
        b.value_int = static_cast<VM_INT>(size1);
        variable->fields.push_back(std::move(b));
        variable->value_float_array.resize(size1 * size2);
        if (runtime_debug)
            *logfile << "Dimension float variable " << variable->name << " with size " << size1 << "x" << size2 << std::endl;
    }
    return false;
}

bool VM::opcode_DIM_I()
{
    Boxed* variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    variable->type = Type::INTEGER_ARRAY;
    variable->value_int = dimensions;
    if (dimensions == 1) {
        auto size = static_cast<size_t>(stack_pop_int()) + 1;
        if (size == 1)
            error("DIM array of 0 size not allowed");
        variable->value_int_array.resize(size);
        if (runtime_debug)
            *logfile << "Dimension int variable " << variable->name << " with size " << size << std::endl;
    } else {
        variable->fields.clear();
        auto size2 = static_cast<size_t>(stack_pop_int()) + 1;
        if (size2 == 1)
            error("DIM array of 0 size not allowed");
        auto size1 = static_cast<size_t>(stack_pop_int()) + 1;
        if (size1 == 1)
            error("DIM array of 0 size not allowed");
        Boxed b;
        b.value_int = static_cast<VM_INT>(size1);
        variable->fields.push_back(std::move(b));
        variable->value_int_array.resize(size1 * size2);
        if (runtime_debug)
            *logfile << "Dimension int variable " << variable->name << " with size " << size1 << "x" << size2 << std::endl;
    }
    return false;
}

bool VM::opcode_DIM_S()
{
    Boxed* variable = get_variable();
    VM_INT dimensions = stack_pop_int();
    variable->type = Type::STRING_ARRAY;
    variable->value_int = dimensions;
    if (dimensions == 1) {
        auto size = static_cast<size_t>(stack_pop_int()) + 1;
        if (size == 1)
            error("DIM array of 0 size not allowed");
        variable->value_string_array.resize(size);
        if (runtime_debug)
            *logfile << "Dimension string variable " << variable->name << " with size " << size << std::endl;
    } else {
        variable->fields.clear();
        auto size2 = static_cast<size_t>(stack_pop_int()) + 1;
        if (size2 == 1)
            error("DIM array of 0 size not allowed");
        auto size1 = static_cast<size_t>(stack_pop_int()) + 1;
        if (size1 == 1)
            error("DIM array of 0 size not allowed");
        Boxed b;
        b.value_int = static_cast<VM_INT>(size1);
        variable->fields.push_back(std::move(b));
        variable->value_string_array.resize(size1 * size2);
        if (runtime_debug)
            *logfile << "Dimension string variable " << variable->name << " with size " << size1 << "x" << size2 << std::endl;
    }
    return false;
}

bool VM::opcode_DUP_F()
{
    VM_FLOAT v = stack_pop_float();
    stack_push_float(v);
    stack_push_float(v);
    if (runtime_debug)
        *logfile << "Duplicate float " << v << std::endl;
    return false;
}

bool VM::opcode_DUP_I()
{
    VM_INT v = stack_pop_int();
    stack_push_int(v);
    stack_push_int(v);
    if (runtime_debug)
        *logfile << "Duplicate int " << v << std::endl;
    return false;
}

bool VM::opcode_ROT_F()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = stack_pop_float();
    stack_push_float(v1);
    stack_push_float(v2);
    if (runtime_debug)
        *logfile << "Rotate float " << v1 << "/" << v2 << std::endl;
    return false;
}

bool VM::opcode_ROT_I()
{
    VM_INT v1 = stack_pop_int();
    VM_INT v2 = stack_pop_int();
    stack_push_int(v1);
    stack_push_int(v2);
    if (runtime_debug)
        *logfile << "Rotate int " << v1 << "/" << v2 << std::endl;
    return false;
}

bool VM::opcode_FOR_I()
{
    Boxed* variable = get_variable();
    variable->value_int_array.resize(3);
    VM_INT pc = stack_pop_int();
    VM_INT step = stack_pop_int();
    VM_INT iterations = stack_pop_int();
    variable->value_int_array[0] = iterations / step;
    variable->value_int_array[1] = step;
    variable->value_int_array[2] = pc;
    if (runtime_debug)
        *logfile << "Initialising FOR loop for variable '" << variable->name << "', " << variable->value_int_array[0] << " iterations" << std::endl;
    return false;
}

bool VM::opcode_FOR_F()
{
    Boxed* variable = get_variable();
    variable->value_int_array.resize(2);
    variable->value_float_array.resize(1);
    VM_INT pc = stack_pop_int();
    VM_FLOAT step = stack_pop_float();
    VM_FLOAT iterations = stack_pop_float();
    variable->value_int_array[0] = static_cast<int>(iterations / step);
    variable->value_float_array[0] = step;
    variable->value_int_array[1] = pc;
    if (runtime_debug)
        *logfile << "Initialising FOR loop for variable '" << variable->name << "', " << variable->value_int_array[0] << " iterations" << std::endl;
    return false;
}

bool VM::opcode_NEXT_I()
{
    Boxed* variable = get_variable();
    VM_INT step = variable->value_int_array[1];
    variable->value_int += step;
    variable->value_int_array[0]--; // iterations - 1
    if (variable->value_int_array[0] >= 0) {
        pc = variable->value_int_array[2];
    }
    if (runtime_debug)
        *logfile << "NEXT integer variable " << variable->name << ", step " << step << ", iterations left " << (variable->value_int_array[0] + 1)
                 << ", loop PC is 0x" << std::hex << variable->value_int_array[2] << std::dec << std::endl;
    return false;
}

bool VM::opcode_NEXT_F()
{
    Boxed* variable = get_variable();
    VM_FLOAT step = variable->value_float_array[0];
    variable->value_float += step;
    variable->value_int_array[0]--; // iterations - 1
    if (variable->value_int_array[0] >= 0) {
        pc = variable->value_int_array[1];
    }
    if (runtime_debug)
        *logfile << "NEXT float variable " << variable->name << ", step " << step << ", iterations left " << (variable->value_int_array[0] + 1)
                 << ", loop PC is 0x" << std::hex << variable->value_int_array[1] << std::dec << std::endl;
    return false;
}

bool VM::opcode_FORIN_I()
{
    Boxed* variable = get_variable();
    variable->value_int_array.resize(4);
    VM_INT pc = stack_pop_int();
    VM_INT var_array_index = stack_pop_int();
    Boxed* variable_array = get_variable_by_int(var_array_index);
    VM_INT iterations = static_cast<VM_INT>(variable_array->value_int_array.size());
    variable->value_int_array[0] = iterations;
    variable->value_int_array[1] = pc;
    variable->value_int_array[2] = var_array_index;
    variable->value_int_array[3] = 0;
    variable->value_int = variable_array->value_int_array[0];
    if (runtime_debug)
        *logfile << "Initialising FOR IN loop for variable '" << variable->name << "', " << variable->value_int_array[0] << " iterations" << std::endl;
    return false;
}

bool VM::opcode_FORIN_F()
{
    Boxed* variable = get_variable();
    variable->value_int_array.resize(4);
    VM_INT pc = stack_pop_int();
    VM_INT var_array_index = stack_pop_int();
    Boxed* variable_array = get_variable_by_int(var_array_index);
    VM_INT iterations = static_cast<VM_INT>(variable_array->value_float_array.size());
    variable->value_int_array[0] = iterations;
    variable->value_int_array[1] = pc;
    variable->value_int_array[2] = var_array_index;
    variable->value_int_array[3] = 0;
    variable->value_float = variable_array->value_float_array[0];
    if (runtime_debug)
        *logfile << "Initialising FOR IN loop for variable '" << variable->name << "', " << variable->value_int_array[0] << " iterations" << std::endl;
    return false;
}

bool VM::opcode_FORIN_S()
{
    Boxed* variable = get_variable();
    variable->value_int_array.resize(4);
    VM_INT pc = stack_pop_int();
    VM_INT var_array_index = stack_pop_int();
    Boxed* variable_array = get_variable_by_int(var_array_index);
    VM_INT iterations = static_cast<VM_INT>(variable_array->value_string_array.size());
    variable->value_int_array[0] = iterations;
    variable->value_int_array[1] = pc;
    variable->value_int_array[2] = var_array_index;
    variable->value_int_array[3] = 0;
    variable->value_string = variable_array->value_string_array[0];
    if (runtime_debug)
        *logfile << "Initialising FOR IN loop for variable '" << variable->name << "', " << variable->value_int_array[0] << " iterations" << std::endl;
    return false;
}

bool VM::opcode_NEXTIN_I()
{
    Boxed* variable = get_variable();
    Boxed* variable_array = get_variable_by_int(variable->value_int_array[2]);
    if (variable->value_int_array[0] == 0) {
        if (runtime_debug)
            *logfile << "NEXT IN integer variable " << variable->name << ", complete" << std::endl;
    } else {
        variable->value_int_array[0]--;
        variable->value_int = variable_array->value_int_array[variable->value_int_array[3]++];
        pc = variable->value_int_array[1];
        if (runtime_debug)
            *logfile << "NEXT IN integer variable " << variable->name << ", iterations left " << (variable->value_int_array[0] + 1)
                     << ", loop PC is 0x" << std::hex << variable->value_int_array[1] << std::dec << std::endl;
    }
    return false;
}

bool VM::opcode_NEXTIN_F()
{
    Boxed* variable = get_variable();
    Boxed* variable_array = get_variable_by_int(variable->value_int_array[2]);
    if (variable->value_int_array[0] == 0) {
        if (runtime_debug)
            *logfile << "NEXT IN float variable " << variable->name << ", complete" << std::endl;
    } else {
        variable->value_int_array[0]--;
        variable->value_float = variable_array->value_float_array[variable->value_int_array[3]++];
        pc = variable->value_int_array[1];
        if (runtime_debug)
            *logfile << "NEXT IN float variable " << variable->name << ", iterations left " << (variable->value_int_array[0] + 1)
                     << ", loop PC is 0x" << std::hex << variable->value_int_array[1] << std::dec << std::endl;
    }
    return false;
}

bool VM::opcode_NEXTIN_S()
{
    Boxed* variable = get_variable();
    Boxed* variable_array = get_variable_by_int(variable->value_int_array[2]);
    if (variable->value_int_array[0] == 0) {
        if (runtime_debug)
            *logfile << "NEXT IN string variable " << variable->name << ", complete" << std::endl;
    } else {
        variable->value_int_array[0]--;
        variable->value_string = variable_array->value_string_array[variable->value_int_array[3]++];
        pc = variable->value_int_array[1];
        if (runtime_debug)
            *logfile << "NEXT IN string variable " << variable->name << ", iterations left " << (variable->value_int_array[0] + 1)
                     << ", loop PC is 0x" << std::hex << variable->value_int_array[1] << std::dec << std::endl;
    }
    return false;
}

bool VM::opcode_READ_I()
{
    Boxed* variable = get_variable();
    Boxed b = *data_iterator++;
    variable->value_int = b.value_int;
    if (runtime_debug)
        *logfile << "Read integer " << b.value_int << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_READ_F()
{
    Boxed* variable = get_variable();
    Boxed b = *data_iterator++;
    variable->value_float = b.value_float;
    if (runtime_debug)
        *logfile << "Read float " << b.value_float << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_READ_S()
{
    Boxed* variable = get_variable();
    Boxed b = *data_iterator++;
    variable->value_string.assign(b.value_string);
    if (runtime_debug)
        *logfile << "Read string " << b.value_string << " in " << variable->name << std::endl;
    return false;
}

bool VM::opcode_RESTORE()
{
    data_iterator = data.begin();
    if (runtime_debug) {
        *logfile << "Restoring DATA" << std::endl;
    }
    return false;
}

bool VM::opcode_READ_I_ARRAY()
{
    Boxed* variable = get_variable();
    Boxed b = *data_iterator++;
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= static_cast<int>(variable->value_int_array.size()))
            error("Invalid array or array index");
        variable->value_int_array[index] = b.value_int;
        if (runtime_debug)
            *logfile << "Read int vector variable " << variable->name << " index " << index << " value " << b.value_int << std::endl;
    } else {
        error("No read 2d arrays");
    }
    return false;
}

bool VM::opcode_READ_S_ARRAY()
{
    Boxed* variable = get_variable();
    Boxed b = *data_iterator++;
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= static_cast<int>(variable->value_string_array.size()))
            error("Invalid array or array index");
        variable->value_string_array[index].assign(b.value_string);
        if (runtime_debug)
            *logfile << "Read string vector variable " << variable->name << " index " << index << " value " << b.value_int << std::endl;
    } else {
        error("No read 2d arrays");
    }
    return false;
}

bool VM::opcode_READ_F_ARRAY()
{
    Boxed* variable = get_variable();
    Boxed b = *data_iterator++;
    VM_INT dimensions = stack_pop_int();
    if (dimensions == 1) {
        VM_INT index = stack_pop_int();
        if (index < 0 || index >= static_cast<int>(variable->value_float_array.size()))
            error("Invalid array or array index");
        variable->value_float_array[index] = b.value_float;
        if (runtime_debug)
            *logfile << "Read float vector variable " << variable->name << " index " << index << " value " << b.value_int << std::endl;
        return false;
    } else {
        error("No read 2d arrays");
    }
}

bool VM::opcode_CMP_E_F()
{
    VM_FLOAT c2 = stack_pop_float();
    VM_FLOAT c1 = stack_pop_float();
    VM_INT c3 = c1 == c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "Float = compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_E_I()
{
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 == c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "Int = compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_E_S()
{
    VM_STRING c2 = stack_pop_string();
    VM_STRING c1 = stack_pop_string();
    VM_INT c3 = c1 == c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "String = compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_NE_F()
{
    VM_FLOAT c2 = stack_pop_float();
    VM_FLOAT c1 = stack_pop_float();
    VM_INT c3 = c1 != c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "Float <> compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_NE_I()
{
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 != c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "Int <> compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_NE_S()
{
    VM_STRING c2 = stack_pop_string();
    VM_STRING c1 = stack_pop_string();
    VM_INT c3 = c1 != c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "String <> compare of '" << c1 << "' and '" << c2 << "' is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_GE_F()
{
    VM_FLOAT c2 = stack_pop_float();
    VM_FLOAT c1 = stack_pop_float();
    VM_INT c3 = c1 >= c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "Float >= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_GE_I()
{
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 >= c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "Int >= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_GE_S()
{
    VM_STRING c2 = stack_pop_string();
    VM_STRING c1 = stack_pop_string();
    VM_INT c3 = c1 >= c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "String >= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_LE_F()
{
    VM_FLOAT c2 = stack_pop_float();
    VM_FLOAT c1 = stack_pop_float();
    VM_INT c3 = c1 <= c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "Float <= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_LE_I()
{
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 <= c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "Int <= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_LE_S()
{
    VM_STRING c2 = stack_pop_string();
    VM_STRING c1 = stack_pop_string();
    VM_INT c3 = c1 <= c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "String <= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_G_F()
{
    VM_FLOAT c2 = stack_pop_float();
    VM_FLOAT c1 = stack_pop_float();
    VM_INT c3 = c1 > c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "Float > compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_G_I()
{
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 > c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "Int > compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_G_S()
{
    VM_STRING c2 = stack_pop_string();
    VM_STRING c1 = stack_pop_string();
    VM_INT c3 = c1 > c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "String > compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_L_F()
{
    VM_FLOAT c2 = stack_pop_float();
    VM_FLOAT c1 = stack_pop_float();
    VM_INT c3 = c1 < c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "Float < compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_L_I()
{
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 < c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "Int < compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_L_S()
{
    VM_STRING c2 = stack_pop_string();
    VM_STRING c1 = stack_pop_string();
    VM_INT c3 = c1 < c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "String < compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_BOOL_OR()
{
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 | c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "Boolean OR of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_BOOL_AND()
{
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 & c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "Boolean AND of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_BOOL_EOR()
{
    VM_INT c2 = stack_pop_int();
    VM_INT c1 = stack_pop_int();
    VM_INT c3 = c1 ^ c2;
    stack_push_int(c3);
    if (runtime_debug)
        *logfile << "Boolean EOR of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_BOOL_NOT()
{
    VM_INT v = stack_pop_int();
    VM_INT v2 = !v;
    stack_push_int(v2);
    if (runtime_debug)
        *logfile << "Boolean NOT of " << v << " is " << v2 << std::endl;
    return false;
}

bool VM::opcode_REPEAT()
{
    repeats.push(pc);
    if (runtime_debug)
        *logfile << "Start of repeat" << std::endl;
    return false;
}

bool VM::opcode_JNEREP()
{
    VM_INT c = stack_pop_int();
    if (c) {
        if (runtime_debug)
            *logfile << "Until, true condition, so no jump" << std::endl;
        repeats.pop();
    } else {
        UINT32 new_pc = repeats.top();
        if (runtime_debug)
            *logfile << "Until, false condition, so jumping to " << new_pc << std::endl;
        pc = new_pc;
    }
    return false;
}

bool VM::opcode_JUMP()
{
    UINT32 new_pc = bc.data;
    if (runtime_debug)
        *logfile << "Jumping to " << new_pc << std::endl;
    pc = new_pc;
    return false;
}

bool VM::opcode_CALL()
{
    VM_INT l = stack_pop_int();
    UINT32 new_pc = bc.data;
    if (runtime_debug)
        *logfile << "Calling " << new_pc << std::endl;
    locals_stack.push(locals);
    locals = &function_locals[l];
    call_stack.push(pc);
    pc = new_pc;
    return false;
}

bool VM::opcode_CASE_C()
{
    case_flag = false;
    if (runtime_debug)
        *logfile << "Clearing case flag" << std::endl;
    return false;
}

bool VM::opcode_CASE_S()
{
    case_flag = true;
    if (runtime_debug)
        *logfile << "Setting case flag" << std::endl;
    return false;
}

bool VM::opcode_CJUMPT()
{
    UINT32 new_pc = bc.data;
    if (!case_flag) {
        if (runtime_debug)
            *logfile << "Case, otherwise, so no jump" << std::endl;
    } else {
        if (runtime_debug)
            *logfile << "Case, no otherwise, so jumping to " << new_pc << std::endl;
        pc = new_pc;
    }
    return false;
}

bool VM::opcode_RETURN()
{
    UINT32 new_pc = call_stack.top();
    if (new_pc & GosubCallFlag) {
        new_pc = new_pc ^ GosubCallFlag;
    } else {
        locals = locals_stack.top();
        locals_stack.pop();
    }
    call_stack.pop();
    if (runtime_debug)
        *logfile << "Returning to " << new_pc << std::endl;
    pc = new_pc;
    return false;
}

bool VM::opcode_GOTO()
{
    UINT32 new_pc = bc.data;
    if (runtime_debug)
        *logfile << "Jumping to " << new_pc << std::endl;
    pc = new_pc;
    return false;
}

bool VM::opcode_GOSUB()
{
    call_stack.push(pc | GosubCallFlag);
    UINT32 new_pc = bc.data;
    if (runtime_debug)
        *logfile << "Calling subroutine at " << new_pc << std::endl;
    pc = new_pc;
    return false;
}

bool VM::opcode_UNPACK_F()
{
    Boxed* variable = get_variable();
    Boxed* b = stack_pop_boxed();
    switch (b->type) {
    case Type::REAL:
        variable->value_float = b->value_float;
        break;
    case Type::INTEGER:
        variable->value_float = static_cast<VM_FLOAT>(b->value_int);
        break;
    default:
        error("Unsupported unpack casting");
    }
    b->type = Type::NOTYPE;
    if (runtime_debug)
        *logfile << "Unpacked float value of " << variable->value_float << " in variable " << variable->name << std::endl;
    return false;
}

bool VM::opcode_UNPACK_I()
{
    Boxed* variable = get_variable();
    Boxed* b = stack_pop_boxed();
    switch (b->type) {
    case Type::INTEGER:
        variable->value_int = b->value_int;
        break;
    case Type::REAL:
        variable->value_int = static_cast<VM_INT>(b->value_float);
        break;
    default:
        error("Unsupported unpack casting");
    }
    b->type = Type::NOTYPE;
    if (runtime_debug)
        *logfile << "Unpacked int value of " << variable->value_int << " in variable " << variable->name << std::endl;
    return false;
}

bool VM::opcode_UNPACK_S()
{
    Boxed* variable = get_variable();
    Boxed* b = stack_pop_boxed();
    switch (b->type) {
    case Type::STRING:
        variable->value_string.assign(b->value_string);
        break;
    default:
        error("Unsupported unpack casting");
    }
    b->type = Type::NOTYPE;
    if (runtime_debug)
        *logfile << "Unpacked string value of '" << variable->value_int << " in variable " << variable->name << "'" << std::endl;
    return false;
}

bool VM::opcode_JNE()
{
    VM_INT c = stack_pop_int();
    UINT32 new_pc = bc.data;
    if (c) {
        if (runtime_debug)
            *logfile << "True condition, so no jump" << std::endl;
    } else {
        if (runtime_debug)
            *logfile << "False condition, so jumping to " << new_pc << std::endl;
        pc = new_pc;
    }
    return false;
}

bool VM::opcode_JE()
{
    VM_INT c = stack_pop_int();
    if (!c) {
        if (runtime_debug)
            *logfile << "False condition, so no jump" << std::endl;
        repeats.pop();
    } else {
        UINT32 new_pc = repeats.top();
        if (runtime_debug)
            *logfile << "True condition, so jumping to " << new_pc << std::endl;
        pc = new_pc;
    }
    return false;
}

bool VM::opcode_DIV_F()
{
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v3 = (float)((int)v1 / (int)v2);
    stack_push_int(static_cast<VM_INT>(v3));
    if (runtime_debug)
        *logfile << "Quotient divide float " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_DIV_I()
{
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 / v2;
    stack_push_int(static_cast<VM_INT>(v3));
    if (runtime_debug)
        *logfile << "Quotient divide int " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_MOD_F()
{
    VM_FLOAT v2 = stack_pop_float();
    VM_FLOAT v1 = stack_pop_float();
    VM_INT v3 = static_cast<VM_INT>(v1) % static_cast<VM_INT>(v2);
    stack_push_int(v3);
    if (runtime_debug)
        *logfile << "Modulo float " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_MOD_I()
{
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT v3 = v1 % v2;
    stack_push_int(v3);
    if (runtime_debug)
        *logfile << "Modulo int " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_SQR()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::sqrt(v1);
    stack_push_float(v2);
    if (runtime_debug)
        *logfile << "SQR " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_LN()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::log(v1);
    stack_push_float(v2);
    if (runtime_debug)
        *logfile << "LN " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_LOG()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::log10(v1);
    stack_push_float(v2);
    if (runtime_debug)
        *logfile << "LOG " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_EXP()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::exp(v1);
    stack_push_float(v2);
    if (runtime_debug)
        *logfile << "EXP " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_ATN()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::atan(v1);
    stack_push_float(v2);
    if (runtime_debug)
        *logfile << "TAN" << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_TAN()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::tan(v1);
    stack_push_float(v2);
    if (runtime_debug)
        *logfile << "TAN" << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_COS()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::cos(v1);
    stack_push_float(v2);
    if (runtime_debug)
        *logfile << "COS " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_SIN()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::sin(v1);
    stack_push_float(v2);
    if (runtime_debug)
        *logfile << "SIN " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_ACS()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::acos(v1);
    stack_push_float(v2);
    if (runtime_debug)
        *logfile << "ACS " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_ASN()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = std::asin(v1);
    stack_push_float(v2);
    if (runtime_debug)
        *logfile << "ASN " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_DEG()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = (v1 * 180.0) / M_PI;
    stack_push_float(v2);
    if (runtime_debug)
        *logfile << "DEG " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_RAD()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = (v1 * M_PI) / 180.0;
    stack_push_float(v2);
    if (runtime_debug)
        *logfile << "RAD " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_SGN()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_INT r = 0;
    if (v1 < 0) {
        r = -1;
    } else if (v1 > 0) {
        r = 1;
    }
    stack_push_int(r);
    if (runtime_debug)
        *logfile << "SGN of " << v1 << " =" << r << std::endl;
    return false;
}

bool VM::opcode_ABS_I()
{
    VM_INT v1 = stack_pop_int();
    VM_INT v2 = abs(v1);
    stack_push_int(v2);
    if (runtime_debug)
        *logfile << "ABS (Int) " << v1 << " = " << v2 << std::endl;
    return false;
}

bool VM::opcode_ABS_F()
{
    VM_FLOAT v1 = stack_pop_float();
    VM_FLOAT v2 = fabs(v1);
    stack_push_float(v2);
    if (runtime_debug)
        *logfile << "ABS (Float) " << v1 << " = " << v2 << std::endl;
    return false;
}

bool VM::opcode_PI()
{
    stack_push_float(M_PI);
    if (runtime_debug)
        *logfile << "PI" << std::endl;
    return false;
}

bool VM::opcode_TIME()
{
    VM_INT v = get_clock();
    stack_push_int(v);
    if (runtime_debug)
        *logfile << "Time returned " << v << std::endl;
    return false;
}

bool VM::opcode_TIMES()
{
    time_t rawtime;
    struct tm* timeinfo;
    char buffer[80];
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, 80, "%a,%e %b %y.%T", timeinfo);
    std::string v = buffer;
    stack_push_string(v);
    if (runtime_debug)
        *logfile << "Time$ returned of '" << v << "'" << std::endl;
    return false;
}

bool VM::opcode_RND()
{
    int r = rand();
    stack_push_int(r);
    if (runtime_debug)
        *logfile << "Random number: " << r << std::endl;
    return false;
}

bool VM::opcode_RNDREAL()
{
    VM_INT range = stack_pop_int();
    if (range == 0) { // return last RND(1)
        if (runtime_debug)
            *logfile << "Random number (repeated) " << last_random << std::endl;
        stack_push_float(last_random);
    } else if (range == 1) { // random number between 0 and 1
        last_random = (double)rand() / (double)RAND_MAX;
        if (runtime_debug)
            *logfile << "Random number " << last_random << std::endl;
        stack_push_float(last_random);
    } else {
        error("Unsupported parameter for RND()");
    }
    return false;
}

bool VM::opcode_RNDRANGE()
{
    VM_INT range = stack_pop_int();
    int r = rand() % range;
    r++;
    stack_push_int(r);
    if (runtime_debug)
        *logfile << "Random number (range of " << range << "): " << r << std::endl;
    return false;
}

bool VM::opcode_OPENIN()
{
    VM_STRING filename = stack_pop_string();
    FILE* file = fopen(filename.c_str(), "rb");
    if (!file) {
        graphics->print_console("File '" + filename + "' not opened.\n  ");
        stack_push_int(0);
    } else {
        VM_INT r = channel_index++;
        channels.insert(std::pair<VM_INT, FILE*>(r, file));
        stack_push_int(r);
        if (runtime_debug)
            *logfile << "Open file for input '" << filename << "', channel# is " << r << std::endl;
    }
    return false;
}

bool VM::opcode_OPENOUT()
{
    VM_STRING filename = stack_pop_string();
    FILE* file = fopen(filename.c_str(), "wb");
    if (!file) {
        graphics->print_console("File '" + filename + "' not created.\n");
        stack_push_int(0);
    } else {
        VM_INT r = channel_index++;
        channels.insert(std::pair<VM_INT, FILE*>(r, file));
        stack_push_int(r);
        if (runtime_debug)
            *logfile << "Open file out '" << filename << "', channel# is " << r << std::endl;
    }
    return false;
}

bool VM::opcode_OPENUP()
{
    VM_STRING filename = stack_pop_string();
    FILE* file = fopen(filename.c_str(), "ab");
    if (!file) {
        graphics->print_console("File '" + filename + "' not opened for appending.\n");
        stack_push_int(0);
    } else {
        VM_INT r = channel_index++;
        channels.insert(std::pair<VM_INT, FILE*>(r, file));
        stack_push_int(r);
        if (runtime_debug)
            *logfile << "Open file for update '" << filename << "', channel# is " << r << std::endl;
    }
    return false;
}

bool VM::opcode_BGET()
{
    VM_INT channel = stack_pop_int();
    auto g = channels.find(channel);
    char b = fgetc((*g).second);
    stack_push_int(static_cast<VM_INT>(b));
    if (runtime_debug)
        *logfile << "Read byte " << b << " from channel# " << channel << std::endl;
    return false;
}

bool VM::opcode_EOFH()
{
    VM_INT channel = stack_pop_int();
    auto g = channels.find(channel);
    VM_INT eof = feof((*g).second);
    stack_push_int(eof);
    if (runtime_debug)
        *logfile << "Eof check " << eof << " on channel# " << channel << std::endl;
    return false;
}

bool VM::opcode_BPUT()
{
    VM_INT byte = stack_pop_int();
    VM_INT channel = stack_pop_int();
    auto g = channels.find(channel);
    fputc(byte, (*g).second);
    if (runtime_debug)
        *logfile << "Write byte " << byte << " to channel# " << channel << std::endl;
    return false;
}

bool VM::opcode_PTR()
{
    VM_INT channel = stack_pop_int();
    auto g = channels.find(channel);
    auto pos = ftell((*g).second);
    stack_push_int(pos);
    if (runtime_debug)
        *logfile << "Fetch position " << pos << " of channel# " << channel << std::endl;
    return false;
}

bool VM::opcode_PTRA()
{
    VM_INT position = stack_pop_int();
    VM_INT channel = stack_pop_int();
    auto g = channels.find(channel);
    fseek((*g).second, position, SEEK_SET);
    if (runtime_debug)
        *logfile << "Set position " << position << " of channel# " << channel << std::endl;
    return false;
}

bool VM::opcode_GETSH()
{
    VM_INT channel = stack_pop_int();
    auto g = channels.find(channel);
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
    stack_push_string(out);
    if (runtime_debug)
        *logfile << "Get$# '" << out << "' of channel# " << channel << std::endl;
    return false;
}

bool VM::opcode_CLOSE()
{
    VM_INT r = stack_pop_int();
    if (channels.count(r) == 0) {
        graphics->print_console("Unknown channel #" + std::to_string(r) + "\n");
    }
    auto g = channels.find(r);
    fclose((*g).second);
    channels.erase(r);
    if (runtime_debug)
        *logfile << "Close file channel# is " << r << std::endl;
    return false;
}

#ifdef __WINDOWS__
std::wstring s2ws(const std::string& str)
{
    using convert_typeX = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_typeX, wchar_t> converterX;

    return converterX.from_bytes(str);
}

std::string ws2s(const std::wstring& wstr)
{
    using convert_typeX = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_typeX, wchar_t> converterX;

    return converterX.to_bytes(wstr);
}
#endif

bool VM::opcode_LISTFILES()
{
    Boxed* variable = get_variable();
    VM_STRING v = stack_pop_string();
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
    auto size = files.size() + 1;
    variable->value_string_array.resize(size);
    if (runtime_debug)
        *logfile << "Dimension string variable " << variable->name << " with size " << size << std::endl;
    variable->value_string_array.clear();

    // And copy values over
    for (auto it = files.begin(); it != files.end(); ++it) {
        variable->value_string_array.push_back(*it);
    }

    return false;
}

bool VM::opcode_ASC()
{
    VM_STRING v = stack_pop_string();
    VM_INT c = -1;
    if (v.length() != 0) {
        c = v[0];
    }
    stack_push_int(c);
    if (runtime_debug)
        *logfile << "ASC of string '" << v << "' is " << c << std::endl;
    return false;
}

bool VM::opcode_VAL()
{
    VM_STRING v = stack_pop_string();
    VM_FLOAT c;
    try {
        c = std::stod(v);
    } catch (const std::invalid_argument& ia) {
        error("Invalid argument '" + v + "' to VAL");
    }
    stack_push_float(c);
    if (runtime_debug)
        *logfile << "VAL of string '" << v << "' is " << c << std::endl;
    return false;
}

bool VM::opcode_STRS()
{
    VM_FLOAT v = stack_pop_float();
    std::stringstream stream;
    stream << std::dec << v;
    VM_STRING v2(stream.str());
    stack_push_string(v2);
    if (runtime_debug)
        *logfile << "STR$ of " << v << " is string '" << v2 << "'" << std::endl;
    return false;
}

bool VM::opcode_STRS_H()
{
    VM_FLOAT v = stack_pop_float();
    std::stringstream stream;
    stream << std::hex << std::uppercase << static_cast<int>(v);
    VM_STRING v2(stream.str());
    stack_push_string(v2);
    if (runtime_debug)
        *logfile << "STR$ of " << v << " is string '" << v << "'" << std::endl;
    return false;
}

bool VM::opcode_STRINGS()
{
    VM_STRING v2 = stack_pop_string();
    VM_INT v1 = stack_pop_int();
    VM_STRING v3 = "";
    for (int i = 0; i < v1; i++) {
        v3 += v2;
    }
    stack_push_string(v3);
    if (runtime_debug)
        *logfile << "STRING$ of '" << v1 << "' x " << v2 << " is string '" << v3 << "'" << std::endl;
    return false;
}

bool VM::opcode_INSTR()
{
    VM_INT start = stack_pop_int();
    VM_STRING substring = stack_pop_string();
    VM_STRING string = stack_pop_string();
    VM_INT v = static_cast<VM_INT>(string.find(substring, start)) + 1;
    stack_push_int(v);
    if (runtime_debug)
        *logfile << "INSTR of string '" << substring << "' in string '" << string << "' with start of " << start << " is " << v << std::endl;
    return false;
}

bool VM::opcode_LEFTS()
{
    VM_INT v1 = stack_pop_int();
    VM_STRING string = stack_pop_string();
    VM_STRING v = string.substr(0, v1);
    stack_push_string(v);
    if (runtime_debug)
        *logfile << "LEFT$ of string '" << string << "' with length of " << v1 << " is " << v << std::endl;
    return false;
}

bool VM::opcode_MIDS()
{
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int() - 1;
    VM_STRING string = stack_pop_string();
    VM_STRING v = string.substr(v1, v2);
    stack_push_string(v);
    if (runtime_debug)
        *logfile << "MID$ of string '" << string << "' with start of " << v1 << " and length of " << v2 << " is " << v << std::endl;
    return false;
}

bool VM::opcode_RIGHTS()
{
    VM_INT v1 = stack_pop_int();
    VM_STRING string = stack_pop_string();
    size_t p = static_cast<size_t>(string.length()) - v1;
    VM_STRING v = string.substr(p, v1);
    stack_push_string(v);
    if (runtime_debug)
        *logfile << "RIGHT$ of string '" << string << "' with length of " << v1 << " is " << v << std::endl;
    return false;
}

bool VM::opcode_LEN()
{
    VM_STRING string = stack_pop_string();
    size_t l = static_cast<size_t>(string.length());
    stack_push_int(static_cast<VM_INT>(l));
    if (runtime_debug)
        *logfile << "LEN of string '" << string << "' is " << l << std::endl;
    return false;
}

bool VM::opcode_CHRS()
{
    VM_INT v = stack_pop_int() & 0xFF;
    VM_STRING c = " ";
    c[0] = v;
    stack_push_string(c);
    if (runtime_debug)
        *logfile << "CHR$ of " << v << " is string '" << v << "'" << std::endl;
    return false;
}

bool VM::opcode_CLS()
{
    graphics->cls();
    if (runtime_debug)
        *logfile << "Clear text screen" << std::endl;
    return false;
}

bool VM::opcode_COLOURRGB()
{
    VM_INT b = stack_pop_int();
    VM_INT g = stack_pop_int();
    VM_INT r = stack_pop_int();
    graphics->colour(r, g, b);
    if (runtime_debug)
        *logfile << "Set RGB graphics colour to " << r << "," << g << "," << b << std::endl;
    return false;
}

bool VM::opcode_COLOURHEX()
{
    VM_INT c = stack_pop_int();
    graphics->colour_hex(c);
    if (runtime_debug)
        *logfile << "Set HEX graphics colour to " << std::hex << c << std::dec << std::endl;
    return false;
}

bool VM::opcode_COLOURBGRGB()
{
    VM_INT b = stack_pop_int();
    VM_INT g = stack_pop_int();
    VM_INT r = stack_pop_int();
    graphics->colour(r, g, b);
    if (runtime_debug)
        *logfile << "Set RGB graphics background colour to " << r << "," << g << "," << b << std::endl;
    return false;
}

bool VM::opcode_COLOURBGHEX()
{
    VM_INT c = stack_pop_int();
    graphics->colour_hex(c);
    if (runtime_debug)
        *logfile << "Set HEX graphics background colour to " << std::hex << c << std::dec << std::endl;
    return false;
}

bool VM::opcode_COLOUREXPRESSION()
{
    VM_INT b = stack_pop_int();
    VM_INT g = stack_pop_int();
    VM_INT r = stack_pop_int();
    VM_INT c = (r << 16) | (g << 8) | b;
    stack_push_int(c);
    if (runtime_debug)
        *logfile << "Convert RGB colour " << r << "," << g << "," << b << " to " << std::hex << c << std::dec << std::endl;
    return false;
}

bool VM::opcode_FLIP()
{
    graphics->flip(true);
    if (runtime_debug)
        *logfile << "Flip screen" << std::endl;
    return false;
}

bool VM::opcode_GRAPHICS()
{
    VM_INT mode = stack_pop_int();
    VM_INT y = stack_pop_int();
    VM_INT x = stack_pop_int();
    if (x == -1)
        x = graphics->get_screen_width();
    if (y == -1)
        y = graphics->get_screen_height();
    graphics->open(x, y, mode);
    if (runtime_debug)
        *logfile << "Change screen mode to " << x << " x " << y << std::endl;
    return false;
}

bool VM::opcode_PLOT()
{
    VM_INT y = stack_pop_int();
    VM_INT x = stack_pop_int();
    graphics->plot(x, y);
    if (runtime_debug)
        *logfile << "Plot pixel at " << x << " x " << y << std::endl;
    return false;
}

bool VM::opcode_POINT()
{
    VM_INT y = stack_pop_int();
    VM_INT x = stack_pop_int();
    VM_INT v = graphics->point(x, y);
    stack_push_int(v);
    if (runtime_debug)
        *logfile << "Point pixel " << x << " x " << y << " is " << v << std::endl;
    return false;
}

bool VM::opcode_CLIP()
{
    VM_INT y2 = stack_pop_int();
    VM_INT x2 = stack_pop_int();
    VM_INT y1 = stack_pop_int();
    VM_INT x1 = stack_pop_int();
    graphics->clip(x1, y1, x2, y2);
    if (runtime_debug)
        *logfile << "Set clip region as " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
    return false;
}

bool VM::opcode_CLIPOFF()
{
    graphics->clipoff();
    if (runtime_debug)
        *logfile << "Disabling clip" << std::endl;
    return false;
}

bool VM::opcode_SHOWFPS()
{
    graphics->show_fps();
    if (runtime_debug)
        *logfile << "Show FPS" << std::endl;
    return false;
}

bool VM::opcode_SCREENWIDTH()
{
    VM_INT v = graphics->get_screen_width();
    stack_push_int(v);
    if (runtime_debug)
        *logfile << "Screen width is " << v << std::endl;
    return false;
}

bool VM::opcode_SCREENHEIGHT()
{
    VM_INT v = graphics->get_screen_height();
    stack_push_int(v);
    if (runtime_debug)
        *logfile << "Screen height is " << v << std::endl;
    return false;
}

bool VM::opcode_LOADTYPEFACE()
{
    VM_STRING v = stack_pop_string();
    VM_INT id = graphics->load_font(v.c_str());
    stack_push_int(id);
    if (runtime_debug)
        *logfile << "Loaded typeface '" << v << "', returned ID is " << id << std::endl;
    return false;
}

bool VM::opcode_CREATEFONT()
{
    VM_INT size = stack_pop_int();
    VM_INT index = stack_pop_int();
    VM_INT id = graphics->create_font_by_size(index, size);
    stack_push_int(id);
    if (runtime_debug)
        *logfile << "Create font " << index << "/" << index << ", returned ID is " << id << std::endl;
    return false;
}

bool VM::opcode_TEXT()
{
    VM_STRING text = stack_pop_string();
    VM_INT y = stack_pop_int();
    VM_INT x = stack_pop_int();
    VM_INT index = stack_pop_int();
    graphics->print_text(index, text, x, y);
    if (runtime_debug)
        *logfile << "Showing text '" << text << "', font ID " << index << " at " << x << "," << y << std::endl;
    return false;
}

bool VM::opcode_TEXTRIGHT()
{
    VM_STRING text = stack_pop_string();
    VM_INT y = stack_pop_int();
    VM_INT x = stack_pop_int();
    VM_INT index = stack_pop_int();
    graphics->print_text_right(index, text, x, y);
    if (runtime_debug)
        *logfile << "Showing text '" << text << "', font ID " << index << " at " << x << "," << y << std::endl;
    return false;
}

bool VM::opcode_TEXTCENTRE()
{
    VM_STRING text = stack_pop_string();
    VM_INT y = stack_pop_int();
    VM_INT x = stack_pop_int();
    VM_INT index = stack_pop_int();
    graphics->print_text_centre(index, text, x, y);
    if (runtime_debug)
        *logfile << "Showing text '" << text << "', font ID " << index << " at " << x << "," << y << std::endl;
    return false;
}

bool VM::opcode_CREATEVERTEX()
{
    Boxed* variable = get_variable();
    VM_INT colour = stack_pop_int();
    VM_FLOAT z = stack_pop_float();
    VM_FLOAT y = stack_pop_float();
    VM_FLOAT x = stack_pop_float();
    VM_INT array_index = stack_pop_int();

    auto base = static_cast<size_t>(array_index) * 4;

    // X
    Boxed* field = &variable->fields[static_cast<size_t>(base)];
    field->type = Type::REAL;
    field->value_float = x;

    // Y
    field = &variable->fields[static_cast<size_t>(base + 1)];
    field->type = Type::REAL;
    field->value_float = y;

    // Z
    field = &variable->fields[static_cast<size_t>(base + 2)];
    field->type = Type::REAL;
    field->value_float = z;

    // colour
    field = &variable->fields[static_cast<size_t>(base + 3)];
    field->type = Type::INTEGER;
    field->value_int = colour;

    return false;
}

bool VM::opcode_CREATETRIANGLE()
{
    Boxed* variable = get_variable();
    VM_INT colour = stack_pop_int();
    VM_INT v3 = stack_pop_int();
    VM_INT v2 = stack_pop_int();
    VM_INT v1 = stack_pop_int();
    VM_INT array_index = stack_pop_int();

    auto base = static_cast<size_t>(array_index) * 4;

    // Vertex 1
    Boxed* field = &variable->fields[static_cast<size_t>(base)];
    field->type = Type::INTEGER;
    field->value_int = v1;

    // Vertex 2
    field = &variable->fields[static_cast<size_t>(base + 1)];
    field->type = Type::INTEGER;
    field->value_int = v2;

    // Vertex 3
    field = &variable->fields[static_cast<size_t>(base + 2)];
    field->type = Type::INTEGER;
    field->value_int = v3;

    // colour
    field = &variable->fields[static_cast<size_t>(base + 3)];
    field->type = Type::INTEGER;
    field->value_int = colour;

    return false;
}

bool VM::opcode_CREATESHAPE()
{
    Boxed* variable2 = get_variable();
    VM_INT var2 = stack_pop_int();
    Boxed* variable1 = get_variable_by_int(var2);
    VM_INT id = world.create_shape(*variable1, *variable2);
    stack_push_int(id);
    return false;
}

bool VM::opcode_CREATEOBJECT()
{
    VM_INT render_type = stack_pop_int();
    VM_FLOAT scale = stack_pop_float();
    VM_FLOAT rz = stack_pop_float();
    VM_FLOAT ry = stack_pop_float();
    VM_FLOAT rx = stack_pop_float();
    VM_FLOAT z = stack_pop_float();
    VM_FLOAT y = stack_pop_float();
    VM_FLOAT x = stack_pop_float();
    VM_INT id = stack_pop_int();
    VM_INT obj_id = world.create_object(id, x, y, z, rx, ry, rz, scale, render_type);
    stack_push_int(obj_id);
    return false;
}

bool VM::opcode_OBJECTTRANSLATE()
{
    VM_FLOAT z = stack_pop_float();
    VM_FLOAT y = stack_pop_float();
    VM_FLOAT x = stack_pop_float();
    VM_INT id = stack_pop_int();
    world.object_translate(id, x, y, z);
    return false;
}

bool VM::opcode_OBJECTROTATE()
{
    VM_FLOAT z = stack_pop_float();
    VM_FLOAT y = stack_pop_float();
    VM_FLOAT x = stack_pop_float();
    VM_INT id = stack_pop_int();
    world.object_rotate(id, x, y, z);
    return false;
}

bool VM::opcode_OBJECTSCALE()
{
    VM_FLOAT scale = stack_pop_float();
    VM_INT id = stack_pop_int();
    world.object_scale(id, scale);
    return false;
}

bool VM::opcode_DELETEOBJECT()
{
    VM_INT id = stack_pop_int();
    world.object_delete(id);
    return false;
}

bool VM::opcode_RENDERFRAME()
{
    world.render(*graphics);
    return false;
}

bool VM::opcode_LINE()
{
    VM_INT y2 = stack_pop_int();
    VM_INT x2 = stack_pop_int();
    VM_INT y1 = stack_pop_int();
    VM_INT x1 = stack_pop_int();
    graphics->line(x1, y1, x2, y2);
    if (runtime_debug)
        *logfile << "Line from " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
    return false;
}

bool VM::opcode_CIRCLE()
{
    VM_INT r = stack_pop_int();
    VM_INT y = stack_pop_int();
    VM_INT x = stack_pop_int();
    graphics->circle(x, y, r, false);
    if (runtime_debug)
        *logfile << "Circle at " << x << "," << y << ", r " << r << std::endl;
    return false;
}

bool VM::opcode_CIRCLEFILL()
{
    VM_INT r = stack_pop_int();
    VM_INT y = stack_pop_int();
    VM_INT x = stack_pop_int();
    graphics->circle(x, y, r, true);
    if (runtime_debug)
        *logfile << "Filled circle at " << x << "," << y << ", r " << r << std::endl;
    return false;
}

bool VM::opcode_RECTANGLE()
{
    VM_INT y2 = stack_pop_int();
    VM_INT x2 = stack_pop_int();
    VM_INT y1 = stack_pop_int();
    VM_INT x1 = stack_pop_int();
    graphics->line(x1, y1, x2, y1);
    graphics->line(x1, y2, x2, y2);
    graphics->line(x1, y1, x1, y2);
    graphics->line(x2, y1, x2, y2);
    if (runtime_debug)
        *logfile << "Rectangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
    return false;
}

bool VM::opcode_RECTANGLEFILL()
{
    VM_INT y2 = stack_pop_int();
    VM_INT x2 = stack_pop_int();
    VM_INT y1 = stack_pop_int();
    VM_INT x1 = stack_pop_int();
    graphics->rectangle(x1, y1, x2, y2);
    if (runtime_debug)
        *logfile << "Filled rectangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
    return false;
}

bool VM::opcode_TRIANGLE()
{
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
        *logfile << "Triangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << " to " << x3 << "," << y3 << std::endl;
    return false;
}

bool VM::opcode_TRIANGLEFILL()
{
    VM_INT y3 = stack_pop_int();
    VM_INT x3 = stack_pop_int();
    VM_INT y2 = stack_pop_int();
    VM_INT x2 = stack_pop_int();
    VM_INT y1 = stack_pop_int();
    VM_INT x1 = stack_pop_int();
    graphics->triangle(x1, y1, x2, y2, x3, y3);
    if (runtime_debug)
        *logfile << "Filled triangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << " to " << x3 << "," << y3 << std::endl;
    return false;
}

bool VM::opcode_TRIANGLESHADED()
{
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
        *logfile << "Shaded triangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << " to " << x3 << "," << y3 << std::endl;
    return false;
}

bool VM::opcode_INKEY()
{
    VM_INT timeout = stack_pop_int();
    VM_INT v = graphics->inkey(timeout);
    stack_push_int(v);
    return false;
}

bool VM::opcode_INKEYS()
{
    VM_INT timeout = stack_pop_int();
    VM_STRING v = graphics->inkeys(timeout);
    stack_push_string(v);
    return false;
}

bool VM::opcode_GET()
{
    VM_INT v = graphics->get();
    stack_push_int(v);
    return false;
}

bool VM::opcode_GETS()
{
    VM_STRING v = graphics->gets();
    stack_push_string(v);
    return false;
}

bool VM::opcode_MOUSE()
{
    VM_INT v2 = stack_pop_int();
    VM_INT v3 = stack_pop_int();
    Boxed* variable_x = get_variable();
    Boxed* variable_y = get_variable_by_int(v2);
    Boxed* variable_state = get_variable_by_int(v3);
    graphics->mouse(variable_x->value_int, variable_y->value_int, variable_state->value_int);
    return false;
}

VM::VM(Graphics* _graphics, std::stringstream* logfile)
{
    runtime_debug = false;
    locals = new std::vector<Boxed>(0);
    graphics = _graphics;
    stack.resize(StackSize);
    this->logfile = logfile;
}

std::string VM::run()
{
    *logfile << "-> Running" << std::endl;
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
            *logfile << std::uppercase << "[" << std::setw(4) << bc.file_number << " : " << std::setw(8) << bc.line_number << " : " << std::hex << std::setw(8)
                     << pc - 1 << " : " << std::setw(2) << (int)bc.opcode << "]  " << std::nouppercase << std::dec;
        }
        switch (bc.opcode) {
        case Bytecodes::NOP:
            if (runtime_debug)
                *logfile << "NOP" << std::endl;
            break;
        case Bytecodes::HALT:
            quit = opcode_HALT();
            break;
        case Bytecodes::TRACEON:
            if (this->logfile == nullptr) {
                std::cout << "TRACE requries the 'debug' parameter\n";
                exit(1);
            }
            runtime_debug = true;
            break;
        case Bytecodes::TRACEOFF:
            *logfile << std::endl;
            runtime_debug = false;
            break;
        case Bytecodes::BREAKPOINT:
            run_debugger();
            break;
        case Bytecodes::DROP:
            quit = opcode_DROP();
            break;
        case Bytecodes::CONST_I:
        case Bytecodes::CONST_I_VAR:
            quit = opcode_CONST_I();
            break;
        case Bytecodes::LOAD_F:
            quit = opcode_LOAD_F();
            break;
        case Bytecodes::LOAD_I:
            quit = opcode_LOAD_I();
            break;
        case Bytecodes::LOAD_S:
            quit = opcode_LOAD_S();
            break;
        case Bytecodes::MULTIPLY_F:
            quit = opcode_MULTIPLY_F();
            break;
        case Bytecodes::MULTIPLY_I:
            quit = opcode_MULTIPLY_I();
            break;
        case Bytecodes::DIVIDE_F:
            quit = opcode_DIVIDE_F();
            break;
        case Bytecodes::DIVIDE_I:
            quit = opcode_DIVIDE_I();
            break;
        case Bytecodes::ADD_I:
            quit = opcode_ADD_I();
            break;
        case Bytecodes::ADD_F:
            quit = opcode_ADD_F();
            break;
        case Bytecodes::SHL:
            quit = opcode_SHL();
            break;
        case Bytecodes::SHR:
            quit = opcode_SHR();
            break;
        case Bytecodes::SUBTRACT_I:
            quit = opcode_SUBTRACT_I();
            break;
        case Bytecodes::SUBTRACT_F:
            quit = opcode_SUBTRACT_F();
            break;
        case Bytecodes::ADD_S:
            quit = opcode_ADD_S();
            break;
        case Bytecodes::I_TO_F:
            quit = opcode_I_TO_F();
            break;
        case Bytecodes::I_TO_F2:
            quit = opcode_I_TO_F2();
            break;
        case Bytecodes::F_TO_I:
            quit = opcode_F_TO_I();
            break;
        case Bytecodes::F_TO_I2:
            quit = opcode_F_TO_I2();
            break;
        case Bytecodes::STORE_I:
            quit = opcode_STORE_I();
            break;
        case Bytecodes::STORE_F:
            quit = opcode_STORE_F();
            break;
        case Bytecodes::STORE_S:
            quit = opcode_STORE_S();
            break;
        case Bytecodes::LOAD_I_ARRAY:
            quit = opcode_LOAD_I_ARRAY();
            break;
        case Bytecodes::LOAD_F_ARRAY:
            quit = opcode_LOAD_F_ARRAY();
            break;
        case Bytecodes::LOAD_S_ARRAY:
            quit = opcode_LOAD_S_ARRAY();
            break;
        case Bytecodes::STORE_I_ARRAY:
            quit = opcode_STORE_I_ARRAY();
            break;
        case Bytecodes::STORE_F_ARRAY:
            quit = opcode_STORE_F_ARRAY();
            break;
        case Bytecodes::STORE_S_ARRAY:
            quit = opcode_STORE_S_ARRAY();
            break;
        case Bytecodes::LOAD_I_FIELD:
            quit = opcode_LOAD_I_FIELD();
            break;
        case Bytecodes::LOAD_F_FIELD:
            quit = opcode_LOAD_F_FIELD();
            break;
        case Bytecodes::LOAD_S_FIELD:
            quit = opcode_LOAD_S_FIELD();
            break;
        case Bytecodes::STORE_I_FIELD:
            quit = opcode_STORE_I_FIELD();
            break;
        case Bytecodes::STORE_F_FIELD:
            quit = opcode_STORE_F_FIELD();
            break;
        case Bytecodes::STORE_S_FIELD:
            quit = opcode_STORE_S_FIELD();
            break;
        case Bytecodes::LOAD_I_FIELD_ARRAY:
            quit = opcode_LOAD_I_FIELD_ARRAY();
            break;
        case Bytecodes::LOAD_F_FIELD_ARRAY:
            quit = opcode_LOAD_F_FIELD_ARRAY();
            break;
        case Bytecodes::LOAD_S_FIELD_ARRAY:
            quit = opcode_LOAD_S_FIELD_ARRAY();
            break;
        case Bytecodes::STORE_I_FIELD_ARRAY:
            quit = opcode_STORE_I_FIELD_ARRAY();
            break;
        case Bytecodes::STORE_F_FIELD_ARRAY:
            quit = opcode_STORE_F_FIELD_ARRAY();
            break;
        case Bytecodes::STORE_S_FIELD_ARRAY:
            quit = opcode_STORE_S_FIELD_ARRAY();
            break;
        case Bytecodes::INPUT_I:
            quit = opcode_INPUT_I();
            break;
        case Bytecodes::INPUT_F:
            quit = opcode_INPUT_F();
            break;
        case Bytecodes::INPUT_S:
            quit = opcode_INPUT_S();
            break;
        case Bytecodes::PRINT_F:
            quit = opcode_PRINT_F();
            break;
        case Bytecodes::PRINT_I:
            quit = opcode_PRINT_I();
            break;
        case Bytecodes::PRINT_S:
            quit = opcode_PRINT_S();
            break;
        case Bytecodes::PRINT_NL:
            quit = opcode_PRINT_NL();
            break;
        case Bytecodes::PRINT_SPC:
            quit = opcode_PRINT_SPC();
            break;
        case Bytecodes::NEW_TYPE:
            quit = opcode_NEW_TYPE();
            break;
        case Bytecodes::ARRAYSIZE:
            quit = opcode_ARRAYSIZE();
            break;
        case Bytecodes::DIM_F:
            quit = opcode_DIM_F();
            break;
        case Bytecodes::DIM_I:
            quit = opcode_DIM_I();
            break;
        case Bytecodes::DIM_S:
            quit = opcode_DIM_S();
            break;
        case Bytecodes::DUP_I:
            quit = opcode_DUP_I();
            break;
        case Bytecodes::DUP_F:
            quit = opcode_DUP_F();
            break;
        case Bytecodes::ROT_I:
            quit = opcode_ROT_I();
            break;
        case Bytecodes::ROT_F:
            quit = opcode_ROT_F();
            break;
        case Bytecodes::FOR_I:
            quit = opcode_FOR_I();
            break;
        case Bytecodes::FOR_F:
            quit = opcode_FOR_F();
            break;
        case Bytecodes::NEXT_I:
            quit = opcode_NEXT_I();
            break;
        case Bytecodes::NEXT_F:
            quit = opcode_NEXT_F();
            break;

        case Bytecodes::FORIN_F:
            quit = opcode_FORIN_I();
            break;
        case Bytecodes::FORIN_I:
            quit = opcode_FORIN_F();
            break;
        case Bytecodes::FORIN_S:
            quit = opcode_FORIN_S();
            break;
        case Bytecodes::NEXTIN_I:
            quit = opcode_NEXTIN_I();
            break;
        case Bytecodes::NEXTIN_F:
            quit = opcode_NEXTIN_F();
            break;
        case Bytecodes::NEXTIN_S:
            quit = opcode_NEXTIN_S();
            break;

        case Bytecodes::REPEAT:
            quit = opcode_REPEAT();
            break;
        case Bytecodes::READ_I:
            quit = opcode_READ_I();
            break;
        case Bytecodes::READ_F:
            quit = opcode_READ_F();
            break;
        case Bytecodes::READ_S:
            quit = opcode_READ_S();
            break;
        case Bytecodes::READ_I_ARRAY:
            quit = opcode_READ_I_ARRAY();
            break;
        case Bytecodes::READ_F_ARRAY:
            quit = opcode_READ_F_ARRAY();
            break;
        case Bytecodes::READ_S_ARRAY:
            quit = opcode_READ_S_ARRAY();
            break;
        case Bytecodes::RESTORE:
            quit = opcode_RESTORE();
            break;
        case Bytecodes::TIME:
            quit = opcode_TIME();
            break;
        case Bytecodes::TIMES:
            quit = opcode_TIMES();
            break;
        case Bytecodes::RND:
            quit = opcode_RND();
            break;
        case Bytecodes::RNDRANGE:
            quit = opcode_RNDRANGE();
            break;
        case Bytecodes::RNDREAL:
            quit = opcode_RNDREAL();
            break;
        case Bytecodes::CLOSE:
            quit = opcode_CLOSE();
            break;
        case Bytecodes::OPENIN:
            quit = opcode_OPENIN();
            break;
        case Bytecodes::OPENOUT:
            quit = opcode_OPENOUT();
            break;
        case Bytecodes::OPENUP:
            quit = opcode_OPENUP();
            break;
        case Bytecodes::BPUT:
            quit = opcode_BPUT();
            break;
        case Bytecodes::BGET:
            quit = opcode_BGET();
            break;
        case Bytecodes::EOFH:
            quit = opcode_EOFH();
            break;
        case Bytecodes::PTR:
            quit = opcode_PTR();
            break;
        case Bytecodes::PTRA:
            quit = opcode_PTRA();
            break;
        case Bytecodes::GETSH:
            quit = opcode_GETSH();
            break;
        case Bytecodes::LISTFILES:
            quit = opcode_LISTFILES();
            break;
        case Bytecodes::CLS:
            quit = opcode_CLS();
            break;
        case Bytecodes::COLOURRGB:
            quit = opcode_COLOURRGB();
            break;
        case Bytecodes::COLOURHEX:
            quit = opcode_COLOURHEX();
            break;
        case Bytecodes::COLOURBGRGB:
            quit = opcode_COLOURBGRGB();
            break;
        case Bytecodes::COLOURBGHEX:
            quit = opcode_COLOURBGHEX();
            break;
        case Bytecodes::COLOUREXPRESSION:
            quit = opcode_COLOUREXPRESSION();
            break;
        case Bytecodes::FLIP:
            quit = opcode_FLIP();
            break;
        case Bytecodes::GRAPHICS:
            quit = opcode_GRAPHICS();
            break;
        case Bytecodes::LINE:
            quit = opcode_LINE();
            break;
        case Bytecodes::PLOT:
            quit = opcode_PLOT();
            break;
        case Bytecodes::POINT:
            quit = opcode_POINT();
            break;
        case Bytecodes::CIRCLE:
            quit = opcode_CIRCLE();
            break;
        case Bytecodes::CIRCLEFILL:
            quit = opcode_CIRCLEFILL();
            break;
        case Bytecodes::RECTANGLE:
            quit = opcode_RECTANGLE();
            break;
        case Bytecodes::RECTANGLEFILL:
            quit = opcode_RECTANGLEFILL();
            break;
        case Bytecodes::TRIANGLE:
            quit = opcode_TRIANGLE();
            break;
        case Bytecodes::TRIANGLEFILL:
            quit = opcode_TRIANGLEFILL();
            break;
        case Bytecodes::TRIANGLESHADED:
            quit = opcode_TRIANGLESHADED();
            break;
        case Bytecodes::CLIP:
            quit = opcode_CLIP();
            break;
        case Bytecodes::CLIPOFF:
            quit = opcode_CLIPOFF();
            break;
        case Bytecodes::SHOWFPS:
            quit = opcode_SHOWFPS();
            break;
        case Bytecodes::SCREENWIDTH:
            quit = opcode_SCREENWIDTH();
            break;
        case Bytecodes::SCREENHEIGHT:
            quit = opcode_SCREENHEIGHT();
            break;
        case Bytecodes::CREATEFONT:
            quit = opcode_CREATEFONT();
            break;
        case Bytecodes::LOADTYPEFACE:
            quit = opcode_LOADTYPEFACE();
            break;
        case Bytecodes::TEXT:
            quit = opcode_TEXT();
            break;
        case Bytecodes::TEXTRIGHT:
            quit = opcode_TEXTRIGHT();
            break;
        case Bytecodes::TEXTCENTRE:
            quit = opcode_TEXTCENTRE();
            break;

        case Bytecodes::CREATEVERTEX:
            quit = opcode_CREATEVERTEX();
            break;
        case Bytecodes::CREATETRIANGLE:
            quit = opcode_CREATETRIANGLE();
            break;
        case Bytecodes::CREATESHAPE:
            quit = opcode_CREATESHAPE();
            break;
        case Bytecodes::CREATEOBJECT:
            quit = opcode_CREATEOBJECT();
            break;
        case Bytecodes::OBJECTTRANSLATE:
            quit = opcode_OBJECTTRANSLATE();
            break;
        case Bytecodes::OBJECTROTATE:
            quit = opcode_OBJECTROTATE();
            break;
        case Bytecodes::OBJECTSCALE:
            quit = opcode_OBJECTSCALE();
            break;
        case Bytecodes::DELETEOBJECT:
            quit = opcode_DELETEOBJECT();
            break;

        case Bytecodes::INKEY:
            quit = opcode_INKEY();
            break;
        case Bytecodes::INKEYS:
            quit = opcode_INKEYS();
            break;
        case Bytecodes::GET:
            quit = opcode_GET();
            break;
        case Bytecodes::GETS:
            quit = opcode_GETS();
            break;
        case Bytecodes::MOUSE:
            quit = opcode_MOUSE();
            break;

        case Bytecodes::RENDERFRAME:
            quit = opcode_RENDERFRAME();
            break;
        case Bytecodes::CMP_E_F:
            quit = opcode_CMP_E_F();
            break;
        case Bytecodes::CMP_E_I:
            quit = opcode_CMP_E_I();
            break;
        case Bytecodes::CMP_E_S:
            quit = opcode_CMP_E_S();
            break;
        case Bytecodes::CMP_NE_F:
            quit = opcode_CMP_NE_F();
            break;
        case Bytecodes::CMP_NE_I:
            quit = opcode_CMP_NE_I();
            break;
        case Bytecodes::CMP_NE_S:
            quit = opcode_CMP_NE_S();
            break;
        case Bytecodes::CMP_GE_F:
            quit = opcode_CMP_GE_F();
            break;
        case Bytecodes::CMP_GE_I:
            quit = opcode_CMP_GE_I();
            break;
        case Bytecodes::CMP_GE_S:
            quit = opcode_CMP_GE_S();
            break;
        case Bytecodes::CMP_LE_F:
            quit = opcode_CMP_LE_F();
            break;
        case Bytecodes::CMP_LE_I:
            quit = opcode_CMP_LE_I();
            break;
        case Bytecodes::CMP_LE_S:
            quit = opcode_CMP_LE_S();
            break;
        case Bytecodes::CMP_G_F:
            quit = opcode_CMP_G_F();
            break;
        case Bytecodes::CMP_G_I:
            quit = opcode_CMP_G_I();
            break;
        case Bytecodes::CMP_G_S:
            quit = opcode_CMP_G_S();
            break;
        case Bytecodes::CMP_L_F:
            quit = opcode_CMP_L_F();
            break;
        case Bytecodes::CMP_L_I:
            quit = opcode_CMP_L_I();
            break;
        case Bytecodes::CMP_L_S:
            quit = opcode_CMP_L_S();
            break;
        case Bytecodes::BOOL_OR:
            quit = opcode_BOOL_OR();
            break;
        case Bytecodes::BOOL_AND:
            quit = opcode_BOOL_AND();
            break;
        case Bytecodes::BOOL_EOR:
            quit = opcode_BOOL_EOR();
            break;
        case Bytecodes::BOOL_NOT:
            quit = opcode_BOOL_NOT();
            break;
        case Bytecodes::JNEREP:
            quit = opcode_JNEREP();
            break;
        case Bytecodes::JNE:
            quit = opcode_JNE();
            break;
        case Bytecodes::JE:
            quit = opcode_JE();
            break;
        case Bytecodes::JUMP:
            quit = opcode_JUMP();
            break;
        case Bytecodes::CALL:
            quit = opcode_CALL();
            break;
        case Bytecodes::CASE_C:
            quit = opcode_CASE_C();
            break;
        case Bytecodes::CASE_S:
            quit = opcode_CASE_S();
            break;
        case Bytecodes::CJUMPT:
            quit = opcode_CJUMPT();
            break;
        case Bytecodes::UNPACK_F:
            quit = opcode_UNPACK_F();
            break;
        case Bytecodes::UNPACK_I:
            quit = opcode_UNPACK_I();
            break;
        case Bytecodes::UNPACK_S:
            quit = opcode_UNPACK_S();
            break;
        case Bytecodes::RETURN:
            quit = opcode_RETURN();
            break;
        case Bytecodes::GOTO:
            quit = opcode_GOTO();
            break;
        case Bytecodes::GOSUB:
            quit = opcode_GOSUB();
            break;
        case Bytecodes::DIV_I:
            quit = opcode_DIV_I();
            break;
        case Bytecodes::DIV_F:
            quit = opcode_DIV_F();
            break;
        case Bytecodes::MOD_I:
            quit = opcode_MOD_I();
            break;
        case Bytecodes::MOD_F:
            quit = opcode_MOD_F();
            break;
        case Bytecodes::SQR:
            quit = opcode_SQR();
            break;
        case Bytecodes::LN:
            quit = opcode_LN();
            break;
        case Bytecodes::LOG:
            quit = opcode_LOG();
            break;
        case Bytecodes::EXP:
            quit = opcode_EXP();
            break;
        case Bytecodes::ATN:
            quit = opcode_ATN();
            break;
        case Bytecodes::TAN:
            quit = opcode_TAN();
            break;
        case Bytecodes::COS:
            quit = opcode_COS();
            break;
        case Bytecodes::SIN:
            quit = opcode_SIN();
            break;
        case Bytecodes::ACS:
            quit = opcode_ACS();
            break;
        case Bytecodes::ASN:
            quit = opcode_ASN();
            break;
        case Bytecodes::DEG:
            quit = opcode_DEG();
            break;
        case Bytecodes::RAD:
            quit = opcode_RAD();
            break;
        case Bytecodes::SGN:
            quit = opcode_SGN();
            break;
        case Bytecodes::ABS_I:
            quit = opcode_ABS_I();
            break;
        case Bytecodes::ABS_F:
            quit = opcode_ABS_F();
            break;
        case Bytecodes::PI:
            quit = opcode_PI();
            break;

        case Bytecodes::ASC:
            quit = opcode_ASC();
            break;
        case Bytecodes::CHRS:
            quit = opcode_CHRS();
            break;
        case Bytecodes::INSTR:
            quit = opcode_INSTR();
            break;
        case Bytecodes::LEFTS:
            quit = opcode_LEFTS();
            break;
        case Bytecodes::MIDS:
            quit = opcode_MIDS();
            break;
        case Bytecodes::RIGHTS:
            quit = opcode_RIGHTS();
            break;
        case Bytecodes::LEN:
            quit = opcode_LEN();
            break;
        case Bytecodes::VAL:
            quit = opcode_VAL();
            break;
        case Bytecodes::STRS:
            quit = opcode_STRS();
            break;
        case Bytecodes::STRS_H:
            quit = opcode_STRS_H();
            break;
        case Bytecodes::STRINGS:
            quit = opcode_STRINGS();
            break;
        case Bytecodes::SWAP_I:
            quit = opcode_SWAP_I();
            break;
        case Bytecodes::SWAP_F:
            quit = opcode_SWAP_F();
            break;
        case Bytecodes::SWAP_S:
            quit = opcode_SWAP_S();
            break;
        case Bytecodes::CHAIN: {
            VM_STRING file = stack_pop_string();
            store_chained_variables();
            return file;
        }
        default:
            error("Unknown token: " + std::to_string((int)bc.opcode));
        }
    };
    return "";
}

void VM::store_chained_variables()
{
    VM_INT count = stack_pop_int();
    for (int i = 0; i < count; i++) {
        auto v = stack_pop_int();
        auto variable = take_variable_by_int(v);
        chained_variables.push_back(std::move(variable));
    }
}

void VM::inject_variables(std::vector<Boxed> chained_variables)
{
    for (auto it = chained_variables.begin(); it != chained_variables.end(); ++it) {

        // Now find this
        bool match = false;
        for (auto itv = variables.begin(); itv != variables.end(); ++itv) {

            // Match?
            if ((*it).name.compare((*itv).name) == 0) {
                (*itv).value_float = (*it).value_float;
                (*itv).value_int = (*it).value_int;
                (*itv).value_string = (*it).value_string;
                match = true;
                break;
            }
        }

        if (!match) {
            error("Unable to match EXPECT variable");
        }
    }
}

void VM::insert_instruction(UINT32 line_number, short file_number, bool write, Bytecodes bytecode, UINT32 operand)
{
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

void VM::insert_bytecode(UINT32 line_number, short file_number, bool write, Bytecodes bytecode)
{
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
