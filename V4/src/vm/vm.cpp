#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
#define _GLIBCXX_USE_C99 1
#ifdef RISCOS
#elif __unix__
#else
#include <windows.h>
#endif
#include "../debugger/debugger.h"
#include "../engine/engine.h"
#include "../string.h"
#include "clock.h"
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

extern World world;
extern std::unique_ptr<std::stringstream> g_logfile;
extern std::unique_ptr<Graphics> g_graphics;
extern bool interactive;

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
        *g_logfile << "End of program" << std::endl;
    return true;
}

bool VM::opcode_DROP()
{
    stack.drop();
    if (runtime_debug)
        *g_logfile << "Dropping top item off stack" << std::endl;
    return false;
}

bool VM::opcode_CONST_I()
{
    stack.push_int(bc.data);
    if (runtime_debug) {
        *g_logfile << "Push constant int " << bc.data << " onto the stack" << std::endl;
    }
    return false;
}

bool VM::opcode_LOAD_F()
{
    stack.push_float(variables.get_variable(bc).value_float);
    if (runtime_debug) {
        if (!variables.get_variable(bc).constant) {
            *g_logfile << "Push variable '" << variables.get_variable(bc).name << "', float " << variables.get_variable(bc).value_float << " onto the stack" << std::endl;
        } else {
            *g_logfile << "Push constant float " << variables.get_variable(bc).value_float << " onto the stack" << std::endl;
        }
    }
    return false;
}

bool VM::opcode_LOAD_I()
{
    stack.push_int(variables.get_variable(bc).value_int);
    if (runtime_debug) {
        if (!variables.get_variable(bc).constant) {
            *g_logfile << "Push variable '" << variables.get_variable(bc).name << "', int " << variables.get_variable(bc).value_int << " onto the stack" << std::endl;
        } else {
            *g_logfile << "Push constant int " << variables.get_variable(bc).value_int << " onto the stack" << std::endl;
        }
    }
    return false;
}

bool VM::opcode_LOAD_S()
{
    stack.push_string(variables.get_variable(bc).value_string);
    if (runtime_debug) {
        if (!variables.get_variable(bc).constant) {
            *g_logfile << "Push variable '" << variables.get_variable(bc).name << "', string '" << variables.get_variable(bc).value_string << "' onto the stack" << std::endl;
        } else {
            *g_logfile << "Push constant string '" << variables.get_variable(bc).value_string << "' onto the stack" << std::endl;
        }
    }
    return false;
}

bool VM::opcode_ADD_F()
{
    VM_FLOAT v2 = stack.pop_float(bc);
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v3 = v1 + v2;
    stack.push_float(v3);
    if (runtime_debug)
        *g_logfile << "Add float " << v1 << " + " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_ADD_I()
{
    VM_INT v2 = stack.pop_int(bc);
    VM_INT v1 = stack.pop_int(bc);
    VM_INT v3 = v1 + v2;
    stack.push_int(v3);
    if (runtime_debug)
        *g_logfile << "Add int " << v1 << " + " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_SHL()
{
    VM_INT v2 = stack.pop_int(bc);
    VM_INT v1 = stack.pop_int(bc);
    VM_INT v3 = v1 << v2;
    stack.push_int(v3);
    if (runtime_debug)
        *g_logfile << "<< int " << v1 << " + " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_SHR()
{
    VM_INT v2 = stack.pop_int(bc);
    VM_INT v1 = stack.pop_int(bc);
    VM_INT v3 = v1 >> v2;
    stack.push_int(v3);
    if (runtime_debug)
        *g_logfile << ">> int " << v1 << " + " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_SUBTRACT_F()
{
    VM_FLOAT v2 = stack.pop_float(bc);
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v3 = v1 - v2;
    stack.push_float(v3);
    if (runtime_debug)
        *g_logfile << "Subtract float " << v1 << " - " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_SUBTRACT_I()
{
    VM_INT v2 = stack.pop_int(bc);
    VM_INT v1 = stack.pop_int(bc);
    VM_INT v3 = v1 - v2;
    stack.push_int(v3);
    if (runtime_debug)
        *g_logfile << "Subtract int " << v1 << " - " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_ADD_S()
{
    VM_STRING v2 = stack.pop_string(bc);
    VM_STRING v1 = stack.pop_string(bc);
    if (runtime_debug) {
        VM_STRING v3 = v1;
        v3.append(v2);
        stack.push_string(v3);
        if (runtime_debug)
            *g_logfile << "Add string '" << v1 << "' + '" << v2 << "' = '" << v3 << "'" << std::endl;
    } else {
        v1.append(v2);
        stack.push_string(v1);
    }
    return false;
}

bool VM::opcode_MULTIPLY_F()
{
    VM_FLOAT v2 = stack.pop_float(bc);
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v3 = v1 * v2;
    stack.push_float(v3);
    if (runtime_debug)
        *g_logfile << "Multiply float " << v1 << " * " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_MULTIPLY_I()
{
    VM_INT v2 = stack.pop_int(bc);
    VM_INT v1 = stack.pop_int(bc);
    VM_INT v3 = v1 * v2;
    stack.push_int(v3);
    if (runtime_debug)
        *g_logfile << "Multiply int " << v1 << " * " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_DIVIDE_F()
{
    VM_FLOAT v2 = stack.pop_float(bc);
    if (v2 == 0.0) {
        std::cout << "Divide by zero error\n";
        exit(1);
    }
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v3 = v1 / v2;
    stack.push_float(v3);
    if (runtime_debug)
        *g_logfile << "Divide float " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_DIVIDE_I()
{
    VM_INT v2 = stack.pop_int(bc);
    if (v2 == 0) {
        std::cout << "Divide by zero error\n";
        exit(1);
    }
    VM_INT v1 = stack.pop_int(bc);
    VM_INT v3 = v1 / v2;
    stack.push_int(v3);
    if (runtime_debug)
        *g_logfile << "Divide int " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_I_TO_F()
{
    VM_INT v1 = stack.pop_int(bc);
    VM_FLOAT v2 = v1;
    stack.push_float(v2);
    if (runtime_debug)
        *g_logfile << "Convert " << v1 << " (int) -> " << v2 << " (float)\n";
    return false;
}

bool VM::opcode_I_TO_F2()
{
    VM_FLOAT v0 = stack.pop_float(bc);
    VM_INT v1 = stack.pop_int(bc);
    VM_FLOAT v2 = v1;
    stack.push_float(v2);
    stack.push_float(v0);
    if (runtime_debug)
        *g_logfile << "Convert " << v1 << " (int) -> " << v2 << " (float)\n";
    return false;
}

bool VM::opcode_F_TO_I()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_INT v2 = static_cast<VM_INT>(floor(v1));
    stack.push_int(v2);
    if (runtime_debug)
        *g_logfile << "Convert " << v1 << " (float) -> " << v2 << " (int)\n";
    return false;
}

bool VM::opcode_F_TO_I2()
{
    VM_INT v0 = stack.pop_int(bc);
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_INT v2 = static_cast<VM_INT>(floor(v1));
    stack.push_int(v2);
    stack.push_int(v0);
    if (runtime_debug)
        *g_logfile << "Convert " << v1 << " (float) -> " << v2 << " (int)\n";
    return false;
}

bool VM::opcode_SWAP_I()
{
    VM_INT v = stack.pop_int(bc);
    VM_INT t = variables.get_variable(bc).value_int;
    variables.get_variable(bc).value_int = variable2.value_int;
    variables.get_variable_by_int(v).value_int = t;
    if (runtime_debug)
        *g_logfile << "Swap " << variables.get_variable(bc).name << " and " << variable2.name << std::endl;
    return false;
}

bool VM::opcode_SWAP_F()
{
    VM_INT v = stack.pop_int(bc);
    VM_FLOAT t = variables.get_variable(bc).value_float;
    variables.get_variable(bc).value_float = variable2.value_float;
    variables.get_variable_by_int(v).value_float = t;
    if (runtime_debug)
        *g_logfile << "Swap " << variables.get_variable(bc).name << " and " << variable2.name << std::endl;
    return false;
}

bool VM::opcode_SWAP_S()
{
    VM_INT v = stack.pop_int(bc);
    VM_STRING t = variables.get_variable(bc).value_string;
    variables.get_variable(bc).value_string = variable2.value_string;
    variables.get_variable_by_int(v).value_string = t;
    if (runtime_debug)
        *g_logfile << "Swap " << variables.get_variable(bc).name << " and " << variable2.name << std::endl;
    return false;
}

bool VM::opcode_STORE_I()
{
    VM_INT v = stack.pop_int(bc);
    variables.get_variable(bc).value_int = v;
    if (runtime_debug)
        *g_logfile << "Store integer " << v << " in " << variables.get_variable(bc).name << std::endl;
    return false;
}

bool VM::opcode_STORE_F()
{
    VM_FLOAT v = stack.pop_float(bc);
    variables.get_variable(bc).value_float = v;
    if (runtime_debug)
        *g_logfile << "Store float " << v << " in " << variables.get_variable(bc).name << std::endl;
    return false;
}

bool VM::opcode_STORE_S()
{
    VM_STRING v = stack.pop_string(bc);
    variables.get_variable(bc).value_string = v;
    if (runtime_debug)
        *g_logfile << "Store string '" << v << "' in " << variables.get_variable(bc).name << std::endl;
    return false;
}

bool VM::opcode_INPUT_F()
{
    VM_INT qmark = stack.pop_int(bc);
    if (qmark) {
        g_graphics->print_text(console_font, "?", -1, -1);
    }
    auto s = g_graphics->input();
    double v = std::stod(s);
    variables.get_variable(bc).value_float = v;
    if (runtime_debug)
        *g_logfile << "Inputted and stored float " << variables.get_variable(bc).value_float << " in " << variables.get_variable(bc).name << std::endl;
    return false;
}

bool VM::opcode_INPUT_I()
{
    VM_INT qmark = stack.pop_int(bc);
    if (qmark) {
        g_graphics->print_text(console_font, "?", -1, -1);
    }
    auto s = g_graphics->input();
    int v = std::stoi(s);
    variables.get_variable(bc).value_int = v;
    if (runtime_debug)
        *g_logfile << "Inputted and stored integer " << variables.get_variable(bc).value_int << " in " << variables.get_variable(bc).name << std::endl;
    return false;
}

bool VM::opcode_INPUT_S()
{
    VM_INT qmark = stack.pop_int(bc);
    if (qmark) {
        g_graphics->print_text(console_font, "?", -1, -1);
    }
    auto v = g_graphics->input();
    variables.get_variable(bc).value_string = v;
    if (runtime_debug)
        *g_logfile << "Inputted and stored string " << variables.get_variable(bc).value_string << " in " << variables.get_variable(bc).name << std::endl;
    return false;
}

bool VM::opcode_PRINT_F()
{
    VM_FLOAT v1 = stack.pop_float(bc);
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
    g_graphics->print_console(v);
    if (runtime_debug)
        *g_logfile << std::endl;
    return false;
}

bool VM::opcode_PRINT_I()
{
    VM_INT v1 = stack.pop_int(bc);
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
    g_graphics->print_console(v);
    if (runtime_debug)
        *g_logfile << std::endl;
    return false;
}

bool VM::opcode_PRINT_S()
{
    VM_STRING v = stack.pop_string(bc);
    if (runtime_debug)
        *g_logfile << "Print string: '";
    g_graphics->print_console(v);
    if (runtime_debug)
        *g_logfile << "'" << std::endl;
    return false;
}

bool VM::opcode_PRINT_NL()
{
    if (runtime_debug)
        *g_logfile << "Print newline: ";
    if (!g_graphics->is_open()) {
        *g_logfile << std::endl;
    } else {
        g_graphics->print_console("\r");
    }
    return false;
}

bool VM::opcode_PRINT_SPC()
{
    VM_INT v1 = stack.pop_int(bc);
    std::string v2 = "";
    for (int i = 0; i < v1; i++) {
        v2 += " ";
    }
    g_graphics->print_text(0, v2, -1, -1);
    if (runtime_debug)
        *g_logfile << "Print " << v1 << " spaces";
    return false;
}

bool VM::opcode_LOAD_F_ARRAY()
{
    VM_INT dimensions = stack.pop_int(bc);
    if (dimensions == 1) {
        VM_INT index = stack.pop_int(bc);
        if (index < 0 || index >= static_cast<int>(variables.get_variable(bc).value_float_array.size()))
            error("Invalid array or array index");
        VM_FLOAT v = variables.get_variable(bc).value_float_array[index];
        stack.push_float(v);
        if (runtime_debug)
            *g_logfile << "Push variable " << variables.get_variable(bc).name << ", float " << v << " (index " << index << ") onto the stack\n";
    } else {
        VM_INT index2 = stack.pop_int(bc);
        VM_INT index1 = stack.pop_int(bc);
        VM_INT size = variables.get_variable(bc).fields[0].value_int;
        int index = index2 * size + index1;
        if (index < 0 || index >= static_cast<int>(variables.get_variable(bc).value_float_array.size()))
            error("Invalid array or array index");
        VM_FLOAT v = variables.get_variable(bc).value_float_array[index];
        stack.push_float(v);
        if (runtime_debug)
            *g_logfile << "Push variable " << variables.get_variable(bc).name << ", string '" << v << "' (index " << index << ") onto the stack\n";
    }
    return false;
}

bool VM::opcode_LOAD_I_ARRAY()
{
    VM_INT dimensions = stack.pop_int(bc);
    if (dimensions == 1) {
        VM_INT index = stack.pop_int(bc);
        if (index < 0 || index >= static_cast<int>(variables.get_variable(bc).value_int_array.size()))
            error("Invalid array or array index");
        VM_INT v = variables.get_variable(bc).value_int_array[index];
        stack.push_int(v);
        if (runtime_debug)
            *g_logfile << "Push variable " << variables.get_variable(bc).name << ", int " << v << " (index " << index << ") onto the stack\n";
    } else {
        VM_INT index2 = stack.pop_int(bc);
        VM_INT index1 = stack.pop_int(bc);
        VM_INT size = variables.get_variable(bc).fields[0].value_int;
        int index = index2 * size + index1;
        if (index < 0 || index >= static_cast<int>(variables.get_variable(bc).value_int_array.size()))
            error("Invalid array or array index");
        VM_INT v = variables.get_variable(bc).value_int_array[index];
        stack.push_int(v);
        if (runtime_debug)
            *g_logfile << "Push variable " << variables.get_variable(bc).name << ", string '" << v << "' (index " << index << ") onto the stack\n";
    }
    return false;
}

bool VM::opcode_LOAD_S_ARRAY()
{
    VM_INT dimensions = stack.pop_int(bc);
    if (dimensions == 1) {
        VM_INT index = stack.pop_int(bc);
        if (index < 0 || index >= static_cast<int>(variables.get_variable(bc).value_string_array.size()))
            error("Invalid array or array index");
        VM_STRING v = variables.get_variable(bc).value_string_array[index];
        stack.push_string(v);
        if (runtime_debug)
            *g_logfile << "Push variable " << variables.get_variable(bc).name << ", string '" << v << "' (index " << index << ") onto the stack\n";
    } else {
        VM_INT index2 = stack.pop_int(bc);
        VM_INT index1 = stack.pop_int(bc);
        VM_INT size = variables.get_variable(bc).fields[0].value_int;
        int index = index2 * size + index1;
        if (index < 0 || index >= static_cast<int>(variables.get_variable(bc).value_string_array.size()))
            error("Invalid array or array index");
        VM_STRING v = variables.get_variable(bc).value_string_array[index];
        stack.push_string(v);
        if (runtime_debug)
            *g_logfile << "Push variable " << variables.get_variable(bc).name << ", string '" << v << "' (index " << index << ") onto the stack\n";
    }
    return false;
}

bool VM::opcode_STORE_F_ARRAY()
{
    VM_INT dimensions = stack.pop_int(bc);
    if (dimensions == 1) {
        VM_FLOAT v = stack.pop_float(bc);
        VM_INT index = stack.pop_int(bc);
        if (index < 0 || index >= static_cast<int>(variables.get_variable(bc).value_float_array.size()))
            error("Invalid array or array index");
        variables.get_variable(bc).value_float_array[index] = v;
        if (runtime_debug)
            *g_logfile << "Store float array variable " << variables.get_variable(bc).name << " index " << index << " value " << v << std::endl;
    } else {
        VM_FLOAT v = stack.pop_float(bc);
        VM_INT index2 = stack.pop_int(bc);
        VM_INT index1 = stack.pop_int(bc);
        VM_INT size = variables.get_variable(bc).fields[0].value_int;
        int index = index2 * size + index1;
        if (index < 0 || index >= static_cast<int>(variables.get_variable(bc).value_float_array.size()))
            error("Invalid array or array index");
        variables.get_variable(bc).value_float_array[index] = v;
        if (runtime_debug)
            *g_logfile << "Store float array variable " << variables.get_variable(bc).name << " index " << index << " value " << v << std::endl;
    }
    return false;
}

bool VM::opcode_STORE_I_ARRAY()
{
    VM_INT dimensions = stack.pop_int(bc);
    if (dimensions == 1) {
        VM_INT v = stack.pop_int(bc);
        VM_INT index = stack.pop_int(bc);
        if (index < 0 || index >= static_cast<int>(variables.get_variable(bc).value_int_array.size()))
            error("Invalid array or array index");
        variables.get_variable(bc).value_int_array[index] = v;
        if (runtime_debug)
            *g_logfile << "Store int array variable " << variables.get_variable(bc).name << " index " << index << " value " << v << std::endl;
    } else {
        VM_INT v = stack.pop_int(bc);
        VM_INT index2 = stack.pop_int(bc);
        VM_INT index1 = stack.pop_int(bc);
        VM_INT size = variables.get_variable(bc).fields[0].value_int;
        int index = index2 * size + index1;
        if (index < 0 || index >= static_cast<int>(variables.get_variable(bc).value_string_array.size()))
            error("Invalid array or array index");
        variables.get_variable(bc).value_int_array[index] = v;
        if (runtime_debug)
            *g_logfile << "Store float array variable " << variables.get_variable(bc).name << " index " << index << " value " << v << std::endl;
    }
    return false;
}

bool VM::opcode_STORE_S_ARRAY()
{
    VM_INT dimensions = stack.pop_int(bc);
    if (dimensions == 1) {
        VM_STRING v = stack.pop_string(bc);
        VM_INT index = stack.pop_int(bc);
        if (index < 0 || index >= static_cast<int>(variables.get_variable(bc).value_string_array.size()))
            error("Invalid array or array index");
        variables.get_variable(bc).value_string_array[index] = v;
        if (runtime_debug)
            *g_logfile << "Store string array variable " << variables.get_variable(bc).name << " index " << index << " value " << v << std::endl;
    } else {
        VM_STRING v = stack.pop_string(bc);
        VM_INT index2 = stack.pop_int(bc);
        VM_INT index1 = stack.pop_int(bc);
        VM_INT size = variables.get_variable(bc).fields[0].value_int;
        int index = index2 * size + index1;
        if (index < 0 || index >= static_cast<int>(variables.get_variable(bc).value_string_array.size()))
            error("Invalid array or array index");
        variables.get_variable(bc).value_string_array[index] = v;
        if (runtime_debug)
            *g_logfile << "Store float array variable " << variables.get_variable(bc).name << " index " << index << " value " << v << std::endl;
    }
    return false;
}

bool VM::opcode_LOAD_I_FIELD()
{
    VM_INT index = stack.pop_int(bc);
    ???
    Boxed* field = &variables.get_variable(bc).fields.at(index);
    stack.push_int(field->value_int);
    if (runtime_debug)
        *g_logfile << "Load field variable " << variables.get_variable(bc).name << " index " << index << " value " << field->value_int << std::endl;
    return false;
}

bool VM::opcode_LOAD_F_FIELD()
{
    VM_INT index = stack.pop_int(bc);
    Boxed* field = &variables.get_variable(bc).fields.at(index);
    stack.push_float(field->value_float);
    if (runtime_debug)
        *g_logfile << "Load field variable " << variables.get_variable(bc).name << " index " << index << " value " << field->value_float << std::endl;
    return false;
}

bool VM::opcode_LOAD_S_FIELD()
{
    VM_INT index = stack.pop_int(bc);
    Boxed* field = &variables.get_variable(bc).fields.at(index);
    stack.push_string(field->value_string);
    if (runtime_debug)
        *g_logfile << "Load field variable " << variables.get_variable(bc).name << " index " << index << " value " << field->value_string << std::endl;
    return false;
}

bool VM::opcode_STORE_I_FIELD()
{
    VM_INT index = stack.pop_int(bc);
    VM_INT v = stack.pop_int(bc);
    Boxed* field = &variables.get_variable(bc).fields.at(index);
    field->value_int = v;
    if (runtime_debug)
        *g_logfile << "Store field variable " << variables.get_variable(bc).name << " index " << index << " value " << v << std::endl;
    return false;
}

bool VM::opcode_STORE_F_FIELD()
{
    VM_INT index = stack.pop_int(bc);
    VM_FLOAT v = stack.pop_float(bc);
    Boxed* field = &variables.get_variable(bc).fields.at(index);
    field->value_float = v;
    if (runtime_debug)
        *g_logfile << "Store field variable " << variables.get_variable(bc).name << " index " << index << " value " << v << std::endl;
    return false;
}

bool VM::opcode_STORE_S_FIELD()
{
    VM_INT index = stack.pop_int(bc);
    VM_STRING v = stack.pop_string(bc);
    Boxed* field = &variables.get_variable(bc).fields.at(index);
    field->value_string.assign(v);
    if (runtime_debug)
        *g_logfile << "Store field variable " << variables.get_variable(bc).name << " index " << index << " value '" << v << "'" << std::endl;
    return false;
}

bool VM::opcode_LOAD_I_FIELD_ARRAY()
{
    VM_INT fields = stack.pop_int(bc);
    VM_INT index = stack.pop_int(bc);
    VM_INT array_index = stack.pop_int(bc);
    Boxed* field = &variables.get_variable(bc).fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    stack.push_float(field->value_int);
    if (runtime_debug)
        *g_logfile << "Load field variable " << variables.get_variable(bc).name << " index " << index << " value " << field->value_int << std::endl;
    return false;
}

bool VM::opcode_LOAD_F_FIELD_ARRAY()
{
    VM_INT fields = stack.pop_int(bc);
    VM_INT index = stack.pop_int(bc);
    VM_INT array_index = stack.pop_int(bc);
    Boxed* field = &variables.get_variable(bc).fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    stack.push_float(field->value_float);
    if (runtime_debug)
        *g_logfile << "Load field variable " << variables.get_variable(bc).name << " index " << index << " value " << field->value_float << std::endl;
    return false;
}

bool VM::opcode_LOAD_S_FIELD_ARRAY()
{
    VM_INT fields = stack.pop_int(bc);
    VM_INT index = stack.pop_int(bc);
    VM_INT array_index = stack.pop_int(bc);
    Boxed* field = &variables.get_variable(bc).fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    stack.push_string(field->value_string);
    if (runtime_debug)
        *g_logfile << "Load field variable " << variables.get_variable(bc).name << " index " << index << " value '" << field->value_string << "'" << std::endl;
    return false;
}

bool VM::opcode_STORE_I_FIELD_ARRAY()
{
    VM_INT fields = stack.pop_int(bc);
    VM_INT index = stack.pop_int(bc);
    VM_INT v = stack.pop_int(bc);
    VM_INT array_index = stack.pop_int(bc);
    Boxed* field = &variables.get_variable(bc).fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    field->value_int = v;
    if (runtime_debug)
        *g_logfile << "Store field variable " << variables.get_variable(bc).name << " index " << index << " value " << v << std::endl;
    return false;
}

bool VM::opcode_STORE_F_FIELD_ARRAY()
{
    VM_INT fields = stack.pop_int(bc);
    VM_INT index = stack.pop_int(bc);
    VM_FLOAT v = stack.pop_float(bc);
    VM_INT array_index = stack.pop_int(bc);
    Boxed* field = &variables.get_variable(bc).fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    field->value_float = v;
    if (runtime_debug)
        *g_logfile << "Store field variable " << variables.get_variable(bc).name << " index " << index << " value " << v << std::endl;
    return false;
}

bool VM::opcode_STORE_S_FIELD_ARRAY()
{
    VM_INT fields = stack.pop_int(bc);
    VM_INT index = stack.pop_int(bc);
    VM_STRING v = stack.pop_string(bc);
    VM_INT array_index = stack.pop_int(bc);
    Boxed* field = &variables.get_variable(bc).fields.at(static_cast<size_t>(array_index) * static_cast<size_t>(fields) + index);
    field->value_string.assign(v);
    if (runtime_debug)
        *g_logfile << "Store field variable " << variables.get_variable(bc).name << " index " << index << " value '" << v << "'" << std::endl;
    return false;
}

bool VM::opcode_NEW_TYPE()
{
    VM_INT num_fields = static_cast<size_t>(stack.pop_int(bc));
    if (num_fields == 0)
        error("DIM TYPE array of 0 size not allowed");

    variables.get_variable(bc).fields.resize(num_fields);
    if (runtime_debug)
        *g_logfile << "Initialised type '" << variables.get_variable(bc).name << "' with " << num_fields << " fields" << std::endl;
    return false;
}

bool VM::opcode_ARRAYSIZE()
{
    VM_INT dimension = stack.pop_int(bc);
    VM_INT size = 0;
    switch (variables.get_variable(bc).type) {
    case Type::INTEGER_ARRAY:
        size = static_cast<VM_INT>(variables.get_variable(bc).value_int_array.size());
        break;
    case Type::REAL_ARRAY:
        size = static_cast<VM_INT>(variables.get_variable(bc).value_float_array.size());
        break;
    case Type::STRING_ARRAY:
        size = static_cast<VM_INT>(variables.get_variable(bc).value_string_array.size());
        break;
    case Type::TYPE_ARRAY:
        error("Size of TYPE arrays not supported");
    }
    stack.push_int(size);
    if (runtime_debug)
        *g_logfile << "Size of array requested for variable'" << variables.get_variable(bc).name << "' result=" << size << std::endl;

    return false;
}

bool VM::opcode_DIM_F()
{
    VM_INT dimensions = stack.pop_int(bc);
    variables.get_variable(bc).type = Type::REAL_ARRAY;
    variables.get_variable(bc).value_int = dimensions;
    if (dimensions == 1) {
        auto size = static_cast<size_t>(stack.pop_int(bc)) + 1;
        if (size == 1)
            error("DIM array of 0 size not allowed");
        variables.get_variable(bc).value_float_array.resize(size);
        if (runtime_debug)
            *g_logfile << "Dimension float variable " << variables.get_variable(bc).name << " with size " << size << std::endl;
    } else {
        variables.get_variable(bc).fields.clear();
        auto size2 = static_cast<size_t>(stack.pop_int(bc)) + 1;
        if (size2 == 1)
            error("DIM array of 0 size not allowed");
        auto size1 = static_cast<size_t>(stack.pop_int(bc)) + 1;
        if (size1 == 1)
            error("DIM array of 0 size not allowed");
        Boxed b;
        b.value_int = static_cast<VM_INT>(size1);
        variables.get_variable(bc).fields.push_back(std::move(b));
        variables.get_variable(bc).value_float_array.resize(size1 * size2);
        if (runtime_debug)
            *g_logfile << "Dimension float variable " << variables.get_variable(bc).name << " with size " << size1 << "x" << size2 << std::endl;
    }
    return false;
}

bool VM::opcode_DIM_I()
{
    VM_INT dimensions = stack.pop_int(bc);
    variables.get_variable(bc).type = Type::INTEGER_ARRAY;
    variables.get_variable(bc).value_int = dimensions;
    if (dimensions == 1) {
        auto size = static_cast<size_t>(stack.pop_int(bc)) + 1;
        if (size == 1)
            error("DIM array of 0 size not allowed");
        variables.get_variable(bc).value_int_array.resize(size);
        if (runtime_debug)
            *g_logfile << "Dimension int variable " << variables.get_variable(bc).name << " with size " << size << std::endl;
    } else {
        variables.get_variable(bc).fields.clear();
        auto size2 = static_cast<size_t>(stack.pop_int(bc)) + 1;
        if (size2 == 1)
            error("DIM array of 0 size not allowed");
        auto size1 = static_cast<size_t>(stack.pop_int(bc)) + 1;
        if (size1 == 1)
            error("DIM array of 0 size not allowed");
        Boxed b;
        b.value_int = static_cast<VM_INT>(size1);
        variables.get_variable(bc).fields.push_back(std::move(b));
        variables.get_variable(bc).value_int_array.resize(size1 * size2);
        if (runtime_debug)
            *g_logfile << "Dimension int variable " << variables.get_variable(bc).name << " with size " << size1 << "x" << size2 << std::endl;
    }
    return false;
}

bool VM::opcode_DIM_S()
{
    VM_INT dimensions = stack.pop_int(bc);
    variables.get_variable(bc).type = Type::STRING_ARRAY;
    variables.get_variable(bc).value_int = dimensions;
    if (dimensions == 1) {
        auto size = static_cast<size_t>(stack.pop_int(bc)) + 1;
        if (size == 1)
            error("DIM array of 0 size not allowed");
        variables.get_variable(bc).value_string_array.resize(size);
        if (runtime_debug)
            *g_logfile << "Dimension string variable " << variables.get_variable(bc).name << " with size " << size << std::endl;
    } else {
        variables.get_variable(bc).fields.clear();
        auto size2 = static_cast<size_t>(stack.pop_int(bc)) + 1;
        if (size2 == 1)
            error("DIM array of 0 size not allowed");
        auto size1 = static_cast<size_t>(stack.pop_int(bc)) + 1;
        if (size1 == 1)
            error("DIM array of 0 size not allowed");
        Boxed b;
        b.value_int = static_cast<VM_INT>(size1);
        variables.get_variable(bc).fields.push_back(std::move(b));
        variables.get_variable(bc).value_string_array.resize(size1 * size2);
        if (runtime_debug)
            *g_logfile << "Dimension string variable " << variables.get_variable(bc).name << " with size " << size1 << "x" << size2 << std::endl;
    }
    return false;
}

bool VM::opcode_DUP_F()
{
    VM_FLOAT v = stack.pop_float(bc);
    stack.push_float(v);
    stack.push_float(v);
    if (runtime_debug)
        *g_logfile << "Duplicate float " << v << std::endl;
    return false;
}

bool VM::opcode_DUP_I()
{
    VM_INT v = stack.pop_int(bc);
    stack.push_int(v);
    stack.push_int(v);
    if (runtime_debug)
        *g_logfile << "Duplicate int " << v << std::endl;
    return false;
}

bool VM::opcode_ROT_F()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v2 = stack.pop_float(bc);
    stack.push_float(v1);
    stack.push_float(v2);
    if (runtime_debug)
        *g_logfile << "Rotate float " << v1 << "/" << v2 << std::endl;
    return false;
}

bool VM::opcode_ROT_I()
{
    VM_INT v1 = stack.pop_int(bc);
    VM_INT v2 = stack.pop_int(bc);
    stack.push_int(v1);
    stack.push_int(v2);
    if (runtime_debug)
        *g_logfile << "Rotate int " << v1 << "/" << v2 << std::endl;
    return false;
}

bool VM::opcode_FOR_I()
{
    variables.get_variable(bc).value_int_array.resize(3);
    VM_INT pc = stack.pop_int(bc);
    VM_INT step = stack.pop_int(bc);
    VM_INT iterations = stack.pop_int(bc);
    variables.get_variable(bc).value_int_array[0] = iterations / step;
    variables.get_variable(bc).value_int_array[1] = step;
    variables.get_variable(bc).value_int_array[2] = pc;
    if (runtime_debug)
        *g_logfile << "Initialising FOR loop for variable '" << variables.get_variable(bc).name << "', " << variables.get_variable(bc).value_int_array[0] << " iterations" << std::endl;
    return false;
}

bool VM::opcode_FOR_F()
{
    variables.get_variable(bc).value_int_array.resize(2);
    variables.get_variable(bc).value_float_array.resize(1);
    VM_INT pc = stack.pop_int(bc);
    VM_FLOAT step = stack.pop_float(bc);
    VM_FLOAT iterations = stack.pop_float(bc);
    variables.get_variable(bc).value_int_array[0] = static_cast<int>(iterations / step);
    variables.get_variable(bc).value_float_array[0] = step;
    variables.get_variable(bc).value_int_array[1] = pc;
    if (runtime_debug)
        *g_logfile << "Initialising FOR loop for variable '" << variables.get_variable(bc).name << "', " << variables.get_variable(bc).value_int_array[0] << " iterations" << std::endl;
    return false;
}

bool VM::opcode_NEXT_I()
{
    VM_INT step = variables.get_variable(bc).value_int_array[1];
    variables.get_variable(bc).value_int += step;
    variables.get_variable(bc).value_int_array[0]--; // iterations - 1
    if (variables.get_variable(bc).value_int_array[0] >= 0) {
        helper_bytecodes().pc = variables.get_variable(bc).value_int_array[2];
    }
    if (runtime_debug)
        *g_logfile << "NEXT integer variable " << variables.get_variable(bc).name << ", step " << step << ", iterations left " << (variables.get_variable(bc).value_int_array[0] + 1)
                   << ", loop PC is 0x" << std::hex << variables.get_variable(bc).value_int_array[2] << std::dec << std::endl;
    return false;
}

bool VM::opcode_NEXT_F()
{
    VM_FLOAT step = variables.get_variable(bc).value_float_array[0];
    variables.get_variable(bc).value_float += step;
    variables.get_variable(bc).value_int_array[0]--; // iterations - 1
    if (variables.get_variable(bc).value_int_array[0] >= 0) {
        helper_bytecodes().pc = variables.get_variable(bc).value_int_array[1];
    }
    if (runtime_debug)
        *g_logfile << "NEXT float variable " << variables.get_variable(bc).name << ", step " << step << ", iterations left " << (variables.get_variable(bc).value_int_array[0] + 1)
                   << ", loop PC is 0x" << std::hex << variables.get_variable(bc).value_int_array[1] << std::dec << std::endl;
    return false;
}

bool VM::opcode_FORIN_I()
{
    variables.get_variable(bc).value_int_array.resize(4);
    VM_INT pc = stack.pop_int(bc);
    VM_INT var_array_index = stack.pop_int(bc);
    auto variable_array = variables.get_variable_by_int(var_array_index);
    VM_INT iterations = static_cast<VM_INT>(variable_array.value_int_array.size());
    variables.get_variable(bc).value_int_array[0] = iterations;
    variables.get_variable(bc).value_int_array[1] = pc;
    variables.get_variable(bc).value_int_array[2] = var_array_index;
    variables.get_variable(bc).value_int_array[3] = 0;
    variables.get_variable(bc).value_int = variable_array.value_int_array[0];
    if (runtime_debug)
        *g_logfile << "Initialising FOR IN loop for variable '" << variables.get_variable(bc).name << "', " << variables.get_variable(bc).value_int_array[0] << " iterations" << std::endl;
    return false;
}

bool VM::opcode_FORIN_F()
{
    variables.get_variable(bc).value_int_array.resize(4);
    VM_INT pc = stack.pop_int(bc);
    VM_INT var_array_index = stack.pop_int(bc);
    auto variable_array = variables.get_variable_by_int(var_array_index);
    VM_INT iterations = static_cast<VM_INT>(variable_array.value_float_array.size());
    variables.get_variable(bc).value_int_array[0] = iterations;
    variables.get_variable(bc).value_int_array[1] = pc;
    variables.get_variable(bc).value_int_array[2] = var_array_index;
    variables.get_variable(bc).value_int_array[3] = 0;
    variables.get_variable(bc).value_float = variable_array.value_float_array[0];
    if (runtime_debug)
        *g_logfile << "Initialising FOR IN loop for variable '" << variables.get_variable(bc).name << "', " << variables.get_variable(bc).value_int_array[0] << " iterations" << std::endl;
    return false;
}

bool VM::opcode_FORIN_S()
{
    variables.get_variable(bc).value_int_array.resize(4);
    VM_INT pc = stack.pop_int(bc);
    VM_INT var_array_index = stack.pop_int(bc);
    auto variable_array = variables.get_variable_by_int(var_array_index);
    VM_INT iterations = static_cast<VM_INT>(variable_array.value_string_array.size());
    variables.get_variable(bc).value_int_array[0] = iterations;
    variables.get_variable(bc).value_int_array[1] = pc;
    variables.get_variable(bc).value_int_array[2] = var_array_index;
    variables.get_variable(bc).value_int_array[3] = 0;
    variables.get_variable(bc).value_string = variable_array.value_string_array[0];
    if (runtime_debug)
        *g_logfile << "Initialising FOR IN loop for variable '" << variables.get_variable(bc).name << "', " << variables.get_variable(bc).value_int_array[0] << " iterations" << std::endl;
    return false;
}

bool VM::opcode_NEXTIN_I()
{
    auto variable_array = variables.get_variable_by_int(variables.get_variable(bc).value_int_array[2]);
    if (variables.get_variable(bc).value_int_array[0] == 0) {
        if (runtime_debug)
            *g_logfile << "NEXT IN integer variable " << variables.get_variable(bc).name << ", complete" << std::endl;
    } else {
        variables.get_variable(bc).value_int_array[0]--;
        variables.get_variable(bc).value_int = variable_array.value_int_array[variables.get_variable(bc).value_int_array[3]++];
        helper_bytecodes().pc = variables.get_variable(bc).value_int_array[1];
        if (runtime_debug)
            *g_logfile << "NEXT IN integer variable " << variables.get_variable(bc).name << ", iterations left " << (variables.get_variable(bc).value_int_array[0] + 1)
                       << ", loop PC is 0x" << std::hex << variables.get_variable(bc).value_int_array[1] << std::dec << std::endl;
    }
    return false;
}

bool VM::opcode_NEXTIN_F()
{
    auto variable_array = variables.get_variable_by_int(variables.get_variable(bc).value_int_array[2]);
    if (variables.get_variable(bc).value_int_array[0] == 0) {
        if (runtime_debug)
            *g_logfile << "NEXT IN float variable " << variables.get_variable(bc).name << ", complete" << std::endl;
    } else {
        variables.get_variable(bc).value_int_array[0]--;
        variables.get_variable(bc).value_float = variable_array.value_float_array[variables.get_variable(bc).value_int_array[3]++];
        helper_bytecodes().pc = variables.get_variable(bc).value_int_array[1];
        if (runtime_debug)
            *g_logfile << "NEXT IN float variable " << variables.get_variable(bc).name << ", iterations left " << (variables.get_variable(bc).value_int_array[0] + 1)
                       << ", loop PC is 0x" << std::hex << variables.get_variable(bc).value_int_array[1] << std::dec << std::endl;
    }
    return false;
}

bool VM::opcode_NEXTIN_S()
{
    auto variable_array = variables.get_variable_by_int(variables.get_variable(bc).value_int_array[2]);
    if (variables.get_variable(bc).value_int_array[0] == 0) {
        if (runtime_debug)
            *g_logfile << "NEXT IN string variable " << variables.get_variable(bc).name << ", complete" << std::endl;
    } else {
        variables.get_variable(bc).value_int_array[0]--;
        variables.get_variable(bc).value_string = variable_array.value_string_array[variables.get_variable(bc).value_int_array[3]++];
        helper_bytecodes().pc = variables.get_variable(bc).value_int_array[1];
        if (runtime_debug)
            *g_logfile << "NEXT IN string variable " << variables.get_variable(bc).name << ", iterations left " << (variables.get_variable(bc).value_int_array[0] + 1)
                       << ", loop PC is 0x" << std::hex << variables.get_variable(bc).value_int_array[1] << std::dec << std::endl;
    }
    return false;
}

bool VM::opcode_READ_I()
{
    Boxed b = *data_iterator++;
    variables.get_variable(bc).value_int = b.value_int;
    if (runtime_debug)
        *g_logfile << "Read integer " << b.value_int << " in " << variables.get_variable(bc).name << std::endl;
    return false;
}

bool VM::opcode_READ_F()
{
    Boxed b = *data_iterator++;
    variables.get_variable(bc).value_float = b.value_float;
    if (runtime_debug)
        *g_logfile << "Read float " << b.value_float << " in " << variables.get_variable(bc).name << std::endl;
    return false;
}

bool VM::opcode_READ_S()
{
    Boxed b = *data_iterator++;
    variables.get_variable(bc).value_string.assign(b.value_string);
    if (runtime_debug)
        *g_logfile << "Read string " << b.value_string << " in " << variables.get_variable(bc).name << std::endl;
    return false;
}

bool VM::opcode_RESTORE()
{
    data_iterator = data.begin();
    if (runtime_debug) {
        *g_logfile << "Restoring DATA" << std::endl;
    }
    return false;
}

bool VM::opcode_READ_I_ARRAY()
{
    Boxed b = *data_iterator++;
    VM_INT dimensions = stack.pop_int(bc);
    if (dimensions == 1) {
        VM_INT index = stack.pop_int(bc);
        if (index < 0 || index >= static_cast<int>(variables.get_variable(bc).value_int_array.size()))
            error("Invalid array or array index");
        variables.get_variable(bc).value_int_array[index] = b.value_int;
        if (runtime_debug)
            *g_logfile << "Read int vector variable " << variables.get_variable(bc).name << " index " << index << " value " << b.value_int << std::endl;
    } else {
        error("No read 2d arrays");
    }
    return false;
}

bool VM::opcode_READ_S_ARRAY()
{
    Boxed b = *data_iterator++;
    VM_INT dimensions = stack.pop_int(bc);
    if (dimensions == 1) {
        VM_INT index = stack.pop_int(bc);
        if (index < 0 || index >= static_cast<int>(variables.get_variable(bc).value_string_array.size()))
            error("Invalid array or array index");
        variables.get_variable(bc).value_string_array[index].assign(b.value_string);
        if (runtime_debug)
            *g_logfile << "Read string vector variable " << variables.get_variable(bc).name << " index " << index << " value " << b.value_int << std::endl;
    } else {
        error("No read 2d arrays");
    }
    return false;
}

bool VM::opcode_READ_F_ARRAY()
{
    Boxed b = *data_iterator++;
    VM_INT dimensions = stack.pop_int(bc);
    if (dimensions == 1) {
        VM_INT index = stack.pop_int(bc);
        if (index < 0 || index >= static_cast<int>(variables.get_variable(bc).value_float_array.size()))
            error("Invalid array or array index");
        variables.get_variable(bc).value_float_array[index] = b.value_float;
        if (runtime_debug)
            *g_logfile << "Read float vector variable " << variables.get_variable(bc).name << " index " << index << " value " << b.value_int << std::endl;
        return false;
    } else {
        error("No read 2d arrays");
    }
}

bool VM::opcode_CMP_E_F()
{
    VM_FLOAT c2 = stack.pop_float(bc);
    VM_FLOAT c1 = stack.pop_float(bc);
    VM_INT c3 = c1 == c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "Float = compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_E_I()
{
    VM_INT c2 = stack.pop_int(bc);
    VM_INT c1 = stack.pop_int(bc);
    VM_INT c3 = c1 == c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "Int = compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_E_S()
{
    VM_STRING c2 = stack.pop_string(bc);
    VM_STRING c1 = stack.pop_string(bc);
    VM_INT c3 = c1 == c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "String = compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_NE_F()
{
    VM_FLOAT c2 = stack.pop_float(bc);
    VM_FLOAT c1 = stack.pop_float(bc);
    VM_INT c3 = c1 != c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "Float <> compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_NE_I()
{
    VM_INT c2 = stack.pop_int(bc);
    VM_INT c1 = stack.pop_int(bc);
    VM_INT c3 = c1 != c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "Int <> compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_NE_S()
{
    VM_STRING c2 = stack.pop_string(bc);
    VM_STRING c1 = stack.pop_string(bc);
    VM_INT c3 = c1 != c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "String <> compare of '" << c1 << "' and '" << c2 << "' is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_GE_F()
{
    VM_FLOAT c2 = stack.pop_float(bc);
    VM_FLOAT c1 = stack.pop_float(bc);
    VM_INT c3 = c1 >= c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "Float >= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_GE_I()
{
    VM_INT c2 = stack.pop_int(bc);
    VM_INT c1 = stack.pop_int(bc);
    VM_INT c3 = c1 >= c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "Int >= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_GE_S()
{
    VM_STRING c2 = stack.pop_string(bc);
    VM_STRING c1 = stack.pop_string(bc);
    VM_INT c3 = c1 >= c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "String >= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_LE_F()
{
    VM_FLOAT c2 = stack.pop_float(bc);
    VM_FLOAT c1 = stack.pop_float(bc);
    VM_INT c3 = c1 <= c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "Float <= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_LE_I()
{
    VM_INT c2 = stack.pop_int(bc);
    VM_INT c1 = stack.pop_int(bc);
    VM_INT c3 = c1 <= c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "Int <= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_LE_S()
{
    VM_STRING c2 = stack.pop_string(bc);
    VM_STRING c1 = stack.pop_string(bc);
    VM_INT c3 = c1 <= c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "String <= compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_G_F()
{
    VM_FLOAT c2 = stack.pop_float(bc);
    VM_FLOAT c1 = stack.pop_float(bc);
    VM_INT c3 = c1 > c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "Float > compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_G_I()
{
    VM_INT c2 = stack.pop_int(bc);
    VM_INT c1 = stack.pop_int(bc);
    VM_INT c3 = c1 > c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "Int > compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_G_S()
{
    VM_STRING c2 = stack.pop_string(bc);
    VM_STRING c1 = stack.pop_string(bc);
    VM_INT c3 = c1 > c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "String > compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_L_F()
{
    VM_FLOAT c2 = stack.pop_float(bc);
    VM_FLOAT c1 = stack.pop_float(bc);
    VM_INT c3 = c1 < c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "Float < compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_L_I()
{
    VM_INT c2 = stack.pop_int(bc);
    VM_INT c1 = stack.pop_int(bc);
    VM_INT c3 = c1 < c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "Int < compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_CMP_L_S()
{
    VM_STRING c2 = stack.pop_string(bc);
    VM_STRING c1 = stack.pop_string(bc);
    VM_INT c3 = c1 < c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "String < compare of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_BOOL_OR()
{
    VM_INT c2 = stack.pop_int(bc);
    VM_INT c1 = stack.pop_int(bc);
    VM_INT c3 = c1 | c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "Boolean OR of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_BOOL_AND()
{
    VM_INT c2 = stack.pop_int(bc);
    VM_INT c1 = stack.pop_int(bc);
    VM_INT c3 = c1 & c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "Boolean AND of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_BOOL_EOR()
{
    VM_INT c2 = stack.pop_int(bc);
    VM_INT c1 = stack.pop_int(bc);
    VM_INT c3 = c1 ^ c2;
    stack.push_int(c3);
    if (runtime_debug)
        *g_logfile << "Boolean EOR of " << c1 << " and " << c2 << " is " << c3 << std::endl;
    return false;
}

bool VM::opcode_BOOL_NOT()
{
    VM_INT v = stack.pop_int(bc);
    VM_INT v2 = !v;
    stack.push_int(v2);
    if (runtime_debug)
        *g_logfile << "Boolean NOT of " << v << " is " << v2 << std::endl;
    return false;
}

bool VM::opcode_REPEAT()
{
    repeats.push(helper_bytecodes().pc);
    if (runtime_debug)
        *g_logfile << "Start of repeat" << std::endl;
    return false;
}

bool VM::opcode_JNEREP()
{
    VM_INT c = stack.pop_int(bc);
    if (c) {
        if (runtime_debug)
            *g_logfile << "Until, true condition, so no jump" << std::endl;
        repeats.pop();
    } else {
        UINT32 new_pc = repeats.top();
        if (runtime_debug)
            *g_logfile << "Until, false condition, so jumping to " << new_pc << std::endl;
        helper_bytecodes().pc = new_pc;
    }
    return false;
}

bool VM::opcode_JUMP()
{
    UINT32 new_pc = bc.data;
    if (runtime_debug)
        *g_logfile << "Jumping to " << new_pc << std::endl;
    helper_bytecodes().pc = new_pc;
    return false;
}

bool VM::opcode_CALL()
{
    VM_INT l = stack.pop_int(bc);
    UINT32 new_pc = bc.data;
    if (runtime_debug)
        *g_logfile << "Calling " << new_pc << std::endl;
    locals_stack.push(variables.get_locals());
    auto c = get_function_locals_count(l);
    variables.set_locals(std::vector<Boxed>(c));
    call_stack.push(helper_bytecodes().pc);
    helper_bytecodes().pc = new_pc;
    return false;
}

bool VM::opcode_CASE_C()
{
    case_flag = false;
    if (runtime_debug)
        *g_logfile << "Clearing case flag" << std::endl;
    return false;
}

bool VM::opcode_CASE_S()
{
    case_flag = true;
    if (runtime_debug)
        *g_logfile << "Setting case flag" << std::endl;
    return false;
}

bool VM::opcode_CJUMPT()
{
    UINT32 new_pc = bc.data;
    if (!case_flag) {
        if (runtime_debug)
            *g_logfile << "Case, otherwise, so no jump" << std::endl;
    } else {
        if (runtime_debug)
            *g_logfile << "Case, no otherwise, so jumping to " << new_pc << std::endl;
        helper_bytecodes().pc = new_pc;
    }
    return false;
}

bool VM::opcode_RETURN()
{
    UINT32 new_pc = call_stack.top();
    if (new_pc & GosubCallFlag) {
        new_pc = new_pc ^ GosubCallFlag;
    } else {
        auto l = locals_stack.top();
        variables.set_locals(std::vector<Boxed>(l));
        locals_stack.pop();
    }
    call_stack.pop();
    if (runtime_debug)
        *g_logfile << "Returning to " << new_pc << std::endl;
    helper_bytecodes().pc = new_pc;
    return false;
}

bool VM::opcode_GOTO()
{
    UINT32 new_pc = bc.data;
    if (runtime_debug)
        *g_logfile << "Jumping to " << new_pc << std::endl;
    helper_bytecodes().pc = new_pc;
    return false;
}

bool VM::opcode_GOSUB()
{
    call_stack.push(helper_bytecodes().pc | GosubCallFlag);
    UINT32 new_pc = bc.data;
    if (runtime_debug)
        *g_logfile << "Calling subroutine at " << new_pc << std::endl;
    helper_bytecodes().pc = new_pc;
    return false;
}

bool VM::opcode_UNPACK_F()
{
    auto b = stack.pop_boxed();
    switch (b.type) {
    case Type::REAL:
        variables.get_variable(bc).value_float = b.value_float;
        break;
    case Type::INTEGER:
        variables.get_variable(bc).value_float = static_cast<VM_FLOAT>(b.value_int);
        break;
    default:
        error("Unsupported unpack casting");
    }
    b.type = Type::NOTYPE;
    if (runtime_debug)
        *g_logfile << "Unpacked float value of " << variables.get_variable(bc).value_float << " in variable " << variables.get_variable(bc).name << std::endl;
    return false;
}

bool VM::opcode_UNPACK_I()
{
    auto b = stack.pop_boxed();
    switch (b.type) {
    case Type::INTEGER:
        variables.get_variable(bc).value_int = b.value_int;
        break;
    case Type::REAL:
        variables.get_variable(bc).value_int = static_cast<VM_INT>(b.value_float);
        break;
    default:
        error("Unsupported unpack casting");
    }
    b.type = Type::NOTYPE;
    if (runtime_debug)
        *g_logfile << "Unpacked int value of " << variables.get_variable(bc).value_int << " in variable " << variables.get_variable(bc).name << std::endl;
    return false;
}

bool VM::opcode_UNPACK_S()
{
    auto b = stack.pop_boxed();
    switch (b.type) {
    case Type::STRING:
        variables.get_variable(bc).value_string.assign(b.value_string);
        break;
    default:
        error("Unsupported unpack casting");
    }
    b.type = Type::NOTYPE;
    if (runtime_debug)
        *g_logfile << "Unpacked string value of '" << variables.get_variable(bc).value_int << " in variable " << variables.get_variable(bc).name << "'" << std::endl;
    return false;
}

bool VM::opcode_JNE()
{
    VM_INT c = stack.pop_int(bc);
    UINT32 new_pc = bc.data;
    if (c) {
        if (runtime_debug)
            *g_logfile << "True condition, so no jump" << std::endl;
    } else {
        if (runtime_debug)
            *g_logfile << "False condition, so jumping to " << new_pc << std::endl;
        helper_bytecodes().pc = new_pc;
    }
    return false;
}

bool VM::opcode_JE()
{
    VM_INT c = stack.pop_int(bc);
    if (!c) {
        if (runtime_debug)
            *g_logfile << "False condition, so no jump" << std::endl;
        repeats.pop();
    } else {
        UINT32 new_pc = repeats.top();
        if (runtime_debug)
            *g_logfile << "True condition, so jumping to " << new_pc << std::endl;
        helper_bytecodes().pc = new_pc;
    }
    return false;
}

bool VM::opcode_DIV_F()
{
    VM_FLOAT v2 = stack.pop_float(bc);
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v3 = (float)((int)v1 / (int)v2);
    stack.push_int(static_cast<VM_INT>(v3));
    if (runtime_debug)
        *g_logfile << "Quotient divide float " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_DIV_I()
{
    VM_INT v2 = stack.pop_int(bc);
    VM_INT v1 = stack.pop_int(bc);
    VM_INT v3 = v1 / v2;
    stack.push_int(static_cast<VM_INT>(v3));
    if (runtime_debug)
        *g_logfile << "Quotient divide int " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_MOD_F()
{
    VM_FLOAT v2 = stack.pop_float(bc);
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_INT v3 = static_cast<VM_INT>(v1) % static_cast<VM_INT>(v2);
    stack.push_int(v3);
    if (runtime_debug)
        *g_logfile << "Modulo float " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_MOD_I()
{
    VM_INT v2 = stack.pop_int(bc);
    VM_INT v1 = stack.pop_int(bc);
    VM_INT v3 = v1 % v2;
    stack.push_int(v3);
    if (runtime_debug)
        *g_logfile << "Modulo int " << v1 << " / " << v2 << " = " << v3 << std::endl;
    return false;
}

bool VM::opcode_SQR()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v2 = std::sqrt(v1);
    stack.push_float(v2);
    if (runtime_debug)
        *g_logfile << "SQR " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_LN()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v2 = std::log(v1);
    stack.push_float(v2);
    if (runtime_debug)
        *g_logfile << "LN " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_LOG()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v2 = std::log10(v1);
    stack.push_float(v2);
    if (runtime_debug)
        *g_logfile << "LOG " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_EXP()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v2 = std::exp(v1);
    stack.push_float(v2);
    if (runtime_debug)
        *g_logfile << "EXP " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_ATN()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v2 = std::atan(v1);
    stack.push_float(v2);
    if (runtime_debug)
        *g_logfile << "TAN" << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_TAN()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v2 = std::tan(v1);
    stack.push_float(v2);
    if (runtime_debug)
        *g_logfile << "TAN" << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_COS()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v2 = std::cos(v1);
    stack.push_float(v2);
    if (runtime_debug)
        *g_logfile << "COS " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_SIN()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v2 = std::sin(v1);
    stack.push_float(v2);
    if (runtime_debug)
        *g_logfile << "SIN " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_ACS()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v2 = std::acos(v1);
    stack.push_float(v2);
    if (runtime_debug)
        *g_logfile << "ACS " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_ASN()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v2 = std::asin(v1);
    stack.push_float(v2);
    if (runtime_debug)
        *g_logfile << "ASN " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_DEG()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v2 = (v1 * 180.0) / M_PI;
    stack.push_float(v2);
    if (runtime_debug)
        *g_logfile << "DEG " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_RAD()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v2 = (v1 * M_PI) / 180.0;
    stack.push_float(v2);
    if (runtime_debug)
        *g_logfile << "RAD " << v1 << " =" << v2 << std::endl;
    return false;
}

bool VM::opcode_SGN()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_INT r = 0;
    if (v1 < 0) {
        r = -1;
    } else if (v1 > 0) {
        r = 1;
    }
    stack.push_int(r);
    if (runtime_debug)
        *g_logfile << "SGN of " << v1 << " =" << r << std::endl;
    return false;
}

bool VM::opcode_ABS_I()
{
    VM_INT v1 = stack.pop_int(bc);
    VM_INT v2 = abs(v1);
    stack.push_int(v2);
    if (runtime_debug)
        *g_logfile << "ABS (Int) " << v1 << " = " << v2 << std::endl;
    return false;
}

bool VM::opcode_ABS_F()
{
    VM_FLOAT v1 = stack.pop_float(bc);
    VM_FLOAT v2 = fabs(v1);
    stack.push_float(v2);
    if (runtime_debug)
        *g_logfile << "ABS (Float) " << v1 << " = " << v2 << std::endl;
    return false;
}

bool VM::opcode_PI()
{
    stack.push_float(M_PI);
    if (runtime_debug)
        *g_logfile << "PI" << std::endl;
    return false;
}

bool VM::opcode_TIME()
{
    VM_INT v = get_clock();
    stack.push_int(v);
    if (runtime_debug)
        *g_logfile << "Time returned " << v << std::endl;
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
    stack.push_string(v);
    if (runtime_debug)
        *g_logfile << "Time$ returned of '" << v << "'" << std::endl;
    return false;
}

bool VM::opcode_RND()
{
    int r = rand();
    stack.push_int(r);
    if (runtime_debug)
        *g_logfile << "Random number: " << r << std::endl;
    return false;
}

bool VM::opcode_RNDREAL()
{
    VM_INT range = stack.pop_int(bc);
    if (range == 0) { // return last RND(1)
        if (runtime_debug)
            *g_logfile << "Random number (repeated) " << last_random << std::endl;
        stack.push_float(last_random);
    } else if (range == 1) { // random number between 0 and 1
        last_random = (double)rand() / (double)RAND_MAX;
        if (runtime_debug)
            *g_logfile << "Random number " << last_random << std::endl;
        stack.push_float(last_random);
    } else {
        error("Unsupported parameter for RND()");
    }
    return false;
}

bool VM::opcode_RNDRANGE()
{
    VM_INT range = stack.pop_int(bc);
    int r = rand() % range;
    r++;
    stack.push_int(r);
    if (runtime_debug)
        *g_logfile << "Random number (range of " << range << "): " << r << std::endl;
    return false;
}

bool VM::opcode_OPENIN()
{
    VM_STRING filename = stack.pop_string(bc);
    FILE* file = fopen(filename.c_str(), "rb");
    if (!file) {
        g_graphics->print_console("File '" + filename + "' not opened.\n  ");
        stack.push_int(0);
    } else {
        VM_INT r = channel_index++;
        channels.insert(std::pair<VM_INT, FILE*>(r, file));
        stack.push_int(r);
        if (runtime_debug)
            *g_logfile << "Open file for input '" << filename << "', channel# is " << r << std::endl;
    }
    return false;
}

bool VM::opcode_OPENOUT()
{
    VM_STRING filename = stack.pop_string(bc);
    FILE* file = fopen(filename.c_str(), "wb");
    if (!file) {
        g_graphics->print_console("File '" + filename + "' not created.\n");
        stack.push_int(0);
    } else {
        VM_INT r = channel_index++;
        channels.insert(std::pair<VM_INT, FILE*>(r, file));
        stack.push_int(r);
        if (runtime_debug)
            *g_logfile << "Open file out '" << filename << "', channel# is " << r << std::endl;
    }
    return false;
}

bool VM::opcode_OPENUP()
{
    VM_STRING filename = stack.pop_string(bc);
    FILE* file = fopen(filename.c_str(), "ab");
    if (!file) {
        g_graphics->print_console("File '" + filename + "' not opened for appending.\n");
        stack.push_int(0);
    } else {
        VM_INT r = channel_index++;
        channels.insert(std::pair<VM_INT, FILE*>(r, file));
        stack.push_int(r);
        if (runtime_debug)
            *g_logfile << "Open file for update '" << filename << "', channel# is " << r << std::endl;
    }
    return false;
}

bool VM::opcode_BGET()
{
    VM_INT channel = stack.pop_int(bc);
    auto g = channels.find(channel);
    char b = fgetc((*g).second);
    stack.push_int(static_cast<VM_INT>(b));
    if (runtime_debug)
        *g_logfile << "Read byte " << b << " from channel# " << channel << std::endl;
    return false;
}

bool VM::opcode_EOFH()
{
    VM_INT channel = stack.pop_int(bc);
    auto g = channels.find(channel);
    VM_INT eof = feof((*g).second);
    stack.push_int(eof);
    if (runtime_debug)
        *g_logfile << "Eof check " << eof << " on channel# " << channel << std::endl;
    return false;
}

bool VM::opcode_BPUT()
{
    VM_INT byte = stack.pop_int(bc);
    VM_INT channel = stack.pop_int(bc);
    auto g = channels.find(channel);
    fputc(byte, (*g).second);
    if (runtime_debug)
        *g_logfile << "Write byte " << byte << " to channel# " << channel << std::endl;
    return false;
}

bool VM::opcode_PTR()
{
    VM_INT channel = stack.pop_int(bc);
    auto g = channels.find(channel);
    auto pos = ftell((*g).second);
    stack.push_int(pos);
    if (runtime_debug)
        *g_logfile << "Fetch position " << pos << " of channel# " << channel << std::endl;
    return false;
}

bool VM::opcode_PTRA()
{
    VM_INT position = stack.pop_int(bc);
    VM_INT channel = stack.pop_int(bc);
    auto g = channels.find(channel);
    fseek((*g).second, position, SEEK_SET);
    if (runtime_debug)
        *g_logfile << "Set position " << position << " of channel# " << channel << std::endl;
    return false;
}

bool VM::opcode_GETSH()
{
    VM_INT channel = stack.pop_int(bc);
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
    stack.push_string(out);
    if (runtime_debug)
        *g_logfile << "Get$# '" << out << "' of channel# " << channel << std::endl;
    return false;
}

bool VM::opcode_CLOSE()
{
    VM_INT r = stack.pop_int(bc);
    if (channels.count(r) == 0) {
        g_graphics->print_console("Unknown channel #" + std::to_string(r) + "\n");
    }
    auto g = channels.find(r);
    fclose((*g).second);
    channels.erase(r);
    if (runtime_debug)
        *g_logfile << "Close file channel# is " << r << std::endl;
    return false;
}

bool VM::opcode_LISTFILES()
{
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
    auto size = files.size() + 1;
    variables.get_variable(bc).value_string_array.resize(size);
    if (runtime_debug)
        *g_logfile << "Dimension string variable " << variables.get_variable(bc).name << " with size " << size << std::endl;
    variables.get_variable(bc).value_string_array.clear();

    // And copy values over
    for (auto it = files.begin(); it != files.end(); ++it) {
        variables.get_variable(bc).value_string_array.push_back(*it);
    }

    return false;
}

bool VM::opcode_ASC()
{
    VM_STRING v = stack.pop_string(bc);
    VM_INT c = -1;
    if (v.length() != 0) {
        c = v[0];
    }
    stack.push_int(c);
    if (runtime_debug)
        *g_logfile << "ASC of string '" << v << "' is " << c << std::endl;
    return false;
}

bool VM::opcode_VAL()
{
    VM_STRING v = stack.pop_string(bc);
    VM_FLOAT c;
    try {
        c = std::stod(v);
    } catch (const std::invalid_argument& ia) {
        error("Invalid argument '" + v + "' to VAL");
    }
    stack.push_float(c);
    if (runtime_debug)
        *g_logfile << "VAL of string '" << v << "' is " << c << std::endl;
    return false;
}

bool VM::opcode_STRS()
{
    VM_FLOAT v = stack.pop_float(bc);
    std::stringstream stream;
    stream << std::dec << v;
    VM_STRING v2(stream.str());
    stack.push_string(v2);
    if (runtime_debug)
        *g_logfile << "STR$ of " << v << " is string '" << v2 << "'" << std::endl;
    return false;
}

bool VM::opcode_STRS_H()
{
    VM_FLOAT v = stack.pop_float(bc);
    std::stringstream stream;
    stream << std::hex << std::uppercase << static_cast<int>(v);
    VM_STRING v2(stream.str());
    stack.push_string(v2);
    if (runtime_debug)
        *g_logfile << "STR$ of " << v << " is string '" << v << "'" << std::endl;
    return false;
}

bool VM::opcode_STRINGS()
{
    VM_STRING v2 = stack.pop_string(bc);
    VM_INT v1 = stack.pop_int(bc);
    VM_STRING v3 = "";
    for (int i = 0; i < v1; i++) {
        v3 += v2;
    }
    stack.push_string(v3);
    if (runtime_debug)
        *g_logfile << "STRING$ of '" << v1 << "' x " << v2 << " is string '" << v3 << "'" << std::endl;
    return false;
}

bool VM::opcode_INSTR()
{
    VM_INT start = stack.pop_int(bc);
    VM_STRING substring = stack.pop_string(bc);
    VM_STRING string = stack.pop_string(bc);
    VM_INT v = static_cast<VM_INT>(string.find(substring, start)) + 1;
    stack.push_int(v);
    if (runtime_debug)
        *g_logfile << "INSTR of string '" << substring << "' in string '" << string << "' with start of " << start << " is " << v << std::endl;
    return false;
}

bool VM::opcode_LEFTS()
{
    VM_INT v1 = stack.pop_int(bc);
    VM_STRING string = stack.pop_string(bc);
    VM_STRING v = string.substr(0, v1);
    stack.push_string(v);
    if (runtime_debug)
        *g_logfile << "LEFT$ of string '" << string << "' with length of " << v1 << " is " << v << std::endl;
    return false;
}

bool VM::opcode_MIDS()
{
    VM_INT v2 = stack.pop_int(bc);
    VM_INT v1 = stack.pop_int(bc) - 1;
    VM_STRING string = stack.pop_string(bc);
    VM_STRING v = string.substr(v1, v2);
    stack.push_string(v);
    if (runtime_debug)
        *g_logfile << "MID$ of string '" << string << "' with start of " << v1 << " and length of " << v2 << " is " << v << std::endl;
    return false;
}

bool VM::opcode_RIGHTS()
{
    VM_INT v1 = stack.pop_int(bc);
    VM_STRING string = stack.pop_string(bc);
    size_t p = static_cast<size_t>(string.length()) - v1;
    VM_STRING v = string.substr(p, v1);
    stack.push_string(v);
    if (runtime_debug)
        *g_logfile << "RIGHT$ of string '" << string << "' with length of " << v1 << " is " << v << std::endl;
    return false;
}

bool VM::opcode_LEN()
{
    VM_STRING string = stack.pop_string(bc);
    size_t l = static_cast<size_t>(string.length());
    stack.push_int(static_cast<VM_INT>(l));
    if (runtime_debug)
        *g_logfile << "LEN of string '" << string << "' is " << l << std::endl;
    return false;
}

bool VM::opcode_CHRS()
{
    VM_INT v = stack.pop_int(bc) & 0xFF;
    VM_STRING c = " ";
    c[0] = v;
    stack.push_string(c);
    if (runtime_debug)
        *g_logfile << "CHR$ of " << v << " is string '" << v << "'" << std::endl;
    return false;
}

bool VM::opcode_CLS()
{
    g_graphics->cls();
    if (runtime_debug)
        *g_logfile << "Clear text screen" << std::endl;
    return false;
}

bool VM::opcode_COLOURRGB()
{
    VM_INT b = stack.pop_int(bc);
    VM_INT g = stack.pop_int(bc);
    VM_INT r = stack.pop_int(bc);
    g_graphics->colour(r, g, b);
    if (runtime_debug)
        *g_logfile << "Set RGB graphics colour to " << r << "," << g << "," << b << std::endl;
    return false;
}

bool VM::opcode_COLOURHEX()
{
    VM_INT c = stack.pop_int(bc);
    g_graphics->colour_hex(c);
    if (runtime_debug)
        *g_logfile << "Set HEX graphics colour to " << std::hex << c << std::dec << std::endl;
    return false;
}

bool VM::opcode_COLOURBGRGB()
{
    VM_INT b = stack.pop_int(bc);
    VM_INT g = stack.pop_int(bc);
    VM_INT r = stack.pop_int(bc);
    g_graphics->colour(r, g, b);
    if (runtime_debug)
        *g_logfile << "Set RGB graphics background colour to " << r << "," << g << "," << b << std::endl;
    return false;
}

bool VM::opcode_COLOURBGHEX()
{
    VM_INT c = stack.pop_int(bc);
    g_graphics->colour_hex(c);
    if (runtime_debug)
        *g_logfile << "Set HEX graphics background colour to " << std::hex << c << std::dec << std::endl;
    return false;
}

bool VM::opcode_COLOUREXPRESSION()
{
    VM_INT b = stack.pop_int(bc);
    VM_INT g = stack.pop_int(bc);
    VM_INT r = stack.pop_int(bc);
    VM_INT c = (r << 16) | (g << 8) | b;
    stack.push_int(c);
    if (runtime_debug)
        *g_logfile << "Convert RGB colour " << r << "," << g << "," << b << " to " << std::hex << c << std::dec << std::endl;
    return false;
}

bool VM::opcode_FLIP()
{
    g_graphics->flip(true);
    if (runtime_debug)
        *g_logfile << "Flip screen" << std::endl;
    return false;
}

bool VM::opcode_GRAPHICS()
{
    VM_INT mode = stack.pop_int(bc);
    VM_INT y = stack.pop_int(bc);
    VM_INT x = stack.pop_int(bc);
    if (x == -1)
        x = g_graphics->get_screen_width();
    if (y == -1)
        y = g_graphics->get_screen_height();
    g_graphics->open(x, y, mode);
    if (runtime_debug)
        *g_logfile << "Change screen mode to " << x << " x " << y << std::endl;
    return false;
}

bool VM::opcode_PLOT()
{
    VM_INT y = stack.pop_int(bc);
    VM_INT x = stack.pop_int(bc);
    g_graphics->plot(x, y);
    if (runtime_debug)
        *g_logfile << "Plot pixel at " << x << " x " << y << std::endl;
    return false;
}

bool VM::opcode_POINT()
{
    VM_INT y = stack.pop_int(bc);
    VM_INT x = stack.pop_int(bc);
    VM_INT v = g_graphics->point(x, y);
    stack.push_int(v);
    if (runtime_debug)
        *g_logfile << "Point pixel " << x << " x " << y << " is " << v << std::endl;
    return false;
}

bool VM::opcode_CLIP()
{
    VM_INT y2 = stack.pop_int(bc);
    VM_INT x2 = stack.pop_int(bc);
    VM_INT y1 = stack.pop_int(bc);
    VM_INT x1 = stack.pop_int(bc);
    g_graphics->clip(x1, y1, x2, y2);
    if (runtime_debug)
        *g_logfile << "Set clip region as " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
    return false;
}

bool VM::opcode_CLIPOFF()
{
    g_graphics->clipoff();
    if (runtime_debug)
        *g_logfile << "Disabling clip" << std::endl;
    return false;
}

bool VM::opcode_SHOWFPS()
{
    g_graphics->show_fps();
    if (runtime_debug)
        *g_logfile << "Show FPS" << std::endl;
    return false;
}

bool VM::opcode_SCREENWIDTH()
{
    VM_INT v = g_graphics->get_screen_width();
    stack.push_int(v);
    if (runtime_debug)
        *g_logfile << "Screen width is " << v << std::endl;
    return false;
}

bool VM::opcode_SCREENHEIGHT()
{
    VM_INT v = g_graphics->get_screen_height();
    stack.push_int(v);
    if (runtime_debug)
        *g_logfile << "Screen height is " << v << std::endl;
    return false;
}

bool VM::opcode_LOADTYPEFACE()
{
    VM_STRING v = stack.pop_string(bc);
    VM_INT id = g_graphics->load_font(v.c_str());
    stack.push_int(id);
    if (runtime_debug)
        *g_logfile << "Loaded typeface '" << v << "', returned ID is " << id << std::endl;
    return false;
}

bool VM::opcode_CREATEFONT()
{
    VM_INT size = stack.pop_int(bc);
    VM_INT index = stack.pop_int(bc);
    VM_INT id = g_graphics->create_font_by_size(index, size);
    stack.push_int(id);
    if (runtime_debug)
        *g_logfile << "Create font " << index << "/" << index << ", returned ID is " << id << std::endl;
    return false;
}

bool VM::opcode_TEXT()
{
    VM_STRING text = stack.pop_string(bc);
    VM_INT y = stack.pop_int(bc);
    VM_INT x = stack.pop_int(bc);
    VM_INT index = stack.pop_int(bc);
    g_graphics->print_text(index, text, x, y);
    if (runtime_debug)
        *g_logfile << "Showing text '" << text << "', font ID " << index << " at " << x << "," << y << std::endl;
    return false;
}

bool VM::opcode_TEXTRIGHT()
{
    VM_STRING text = stack.pop_string(bc);
    VM_INT y = stack.pop_int(bc);
    VM_INT x = stack.pop_int(bc);
    VM_INT index = stack.pop_int(bc);
    g_graphics->print_text_right(index, text, x, y);
    if (runtime_debug)
        *g_logfile << "Showing text '" << text << "', font ID " << index << " at " << x << "," << y << std::endl;
    return false;
}

bool VM::opcode_TEXTCENTRE()
{
    VM_STRING text = stack.pop_string(bc);
    VM_INT y = stack.pop_int(bc);
    VM_INT x = stack.pop_int(bc);
    VM_INT index = stack.pop_int(bc);
    g_graphics->print_text_centre(index, text, x, y);
    if (runtime_debug)
        *g_logfile << "Showing text '" << text << "', font ID " << index << " at " << x << "," << y << std::endl;
    return false;
}

bool VM::opcode_CREATEVERTEX()
{
    VM_INT colour = stack.pop_int(bc);
    VM_FLOAT z = stack.pop_float(bc);
    VM_FLOAT y = stack.pop_float(bc);
    VM_FLOAT x = stack.pop_float(bc);
    VM_INT array_index = stack.pop_int(bc);

    auto base = static_cast<size_t>(array_index) * 4;

    // X
    Boxed* field = &variables.get_variable(bc).fields[static_cast<size_t>(base)];
    field->type = Type::REAL;
    field->value_float = x;

    // Y
    field = &variables.get_variable(bc).fields[static_cast<size_t>(base + 1)];
    field->type = Type::REAL;
    field->value_float = y;

    // Z
    field = &variables.get_variable(bc).fields[static_cast<size_t>(base + 2)];
    field->type = Type::REAL;
    field->value_float = z;

    // colour
    field = &variables.get_variable(bc).fields[static_cast<size_t>(base + 3)];
    field->type = Type::INTEGER;
    field->value_int = colour;

    return false;
}

bool VM::opcode_CREATETRIANGLE()
{
    VM_INT colour = stack.pop_int(bc);
    VM_INT v3 = stack.pop_int(bc);
    VM_INT v2 = stack.pop_int(bc);
    VM_INT v1 = stack.pop_int(bc);
    VM_INT array_index = stack.pop_int(bc);

    auto base = static_cast<size_t>(array_index) * 4;

    // Vertex 1
    Boxed* field = &variables.get_variable(bc).fields[static_cast<size_t>(base)];
    field->type = Type::INTEGER;
    field->value_int = v1;

    // Vertex 2
    field = &variables.get_variable(bc).fields[static_cast<size_t>(base + 1)];
    field->type = Type::INTEGER;
    field->value_int = v2;

    // Vertex 3
    field = &variables.get_variable(bc).fields[static_cast<size_t>(base + 2)];
    field->type = Type::INTEGER;
    field->value_int = v3;

    // colour
    field = &variables.get_variable(bc).fields[static_cast<size_t>(base + 3)];
    field->type = Type::INTEGER;
    field->value_int = colour;

    return false;
}

bool VM::opcode_CREATESHAPE()
{
    auto variable2 = variables.get_variable(bc);
    VM_INT var2 = stack.pop_int(bc);
    auto variable1 = variables.get_variable_by_int(var2);
    VM_INT id = world.create_shape(variable1, variable2);
    stack.push_int(id);
    return false;
}

bool VM::opcode_CREATEOBJECT()
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
    return false;
}

bool VM::opcode_OBJECTTRANSLATE()
{
    VM_FLOAT z = stack.pop_float(bc);
    VM_FLOAT y = stack.pop_float(bc);
    VM_FLOAT x = stack.pop_float(bc);
    VM_INT id = stack.pop_int(bc);
    world.object_translate(id, x, y, z);
    return false;
}

bool VM::opcode_OBJECTROTATE()
{
    VM_FLOAT z = stack.pop_float(bc);
    VM_FLOAT y = stack.pop_float(bc);
    VM_FLOAT x = stack.pop_float(bc);
    VM_INT id = stack.pop_int(bc);
    world.object_rotate(id, x, y, z);
    return false;
}

bool VM::opcode_OBJECTSCALE()
{
    VM_FLOAT scale = stack.pop_float(bc);
    VM_INT id = stack.pop_int(bc);
    world.object_scale(id, scale);
    return false;
}

bool VM::opcode_DELETEOBJECT()
{
    VM_INT id = stack.pop_int(bc);
    world.object_delete(id);
    return false;
}

bool VM::opcode_RENDERFRAME()
{
    world.render();
    return false;
}

bool VM::opcode_LINE()
{
    VM_INT y2 = stack.pop_int(bc);
    VM_INT x2 = stack.pop_int(bc);
    VM_INT y1 = stack.pop_int(bc);
    VM_INT x1 = stack.pop_int(bc);
    g_graphics->line(x1, y1, x2, y2);
    if (runtime_debug)
        *g_logfile << "Line from " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
    return false;
}

bool VM::opcode_CIRCLE()
{
    VM_INT r = stack.pop_int(bc);
    VM_INT y = stack.pop_int(bc);
    VM_INT x = stack.pop_int(bc);
    g_graphics->circle(x, y, r, false);
    if (runtime_debug)
        *g_logfile << "Circle at " << x << "," << y << ", r " << r << std::endl;
    return false;
}

bool VM::opcode_CIRCLEFILL()
{
    VM_INT r = stack.pop_int(bc);
    VM_INT y = stack.pop_int(bc);
    VM_INT x = stack.pop_int(bc);
    g_graphics->circle(x, y, r, true);
    if (runtime_debug)
        *g_logfile << "Filled circle at " << x << "," << y << ", r " << r << std::endl;
    return false;
}

bool VM::opcode_RECTANGLE()
{
    VM_INT y2 = stack.pop_int(bc);
    VM_INT x2 = stack.pop_int(bc);
    VM_INT y1 = stack.pop_int(bc);
    VM_INT x1 = stack.pop_int(bc);
    g_graphics->line(x1, y1, x2, y1);
    g_graphics->line(x1, y2, x2, y2);
    g_graphics->line(x1, y1, x1, y2);
    g_graphics->line(x2, y1, x2, y2);
    if (runtime_debug)
        *g_logfile << "Rectangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
    return false;
}

bool VM::opcode_RECTANGLEFILL()
{
    VM_INT y2 = stack.pop_int(bc);
    VM_INT x2 = stack.pop_int(bc);
    VM_INT y1 = stack.pop_int(bc);
    VM_INT x1 = stack.pop_int(bc);
    g_graphics->rectangle(x1, y1, x2, y2);
    if (runtime_debug)
        *g_logfile << "Filled rectangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << std::endl;
    return false;
}

bool VM::opcode_TRIANGLE()
{
    VM_INT y3 = stack.pop_int(bc);
    VM_INT x3 = stack.pop_int(bc);
    VM_INT y2 = stack.pop_int(bc);
    VM_INT x2 = stack.pop_int(bc);
    VM_INT y1 = stack.pop_int(bc);
    VM_INT x1 = stack.pop_int(bc);
    g_graphics->line(x1, y1, x2, y2);
    g_graphics->line(x2, y2, x3, y3);
    g_graphics->line(x3, y3, x1, y1);
    if (runtime_debug)
        *g_logfile << "Triangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << " to " << x3 << "," << y3 << std::endl;
    return false;
}

bool VM::opcode_TRIANGLEFILL()
{
    VM_INT y3 = stack.pop_int(bc);
    VM_INT x3 = stack.pop_int(bc);
    VM_INT y2 = stack.pop_int(bc);
    VM_INT x2 = stack.pop_int(bc);
    VM_INT y1 = stack.pop_int(bc);
    VM_INT x1 = stack.pop_int(bc);
    g_graphics->triangle(x1, y1, x2, y2, x3, y3);
    if (runtime_debug)
        *g_logfile << "Filled triangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << " to " << x3 << "," << y3 << std::endl;
    return false;
}

bool VM::opcode_TRIANGLESHADED()
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
    g_graphics->gouraud_triangle(x1, y1, x2, y2, x3, y3, c1, c2, c3, false);
    if (runtime_debug)
        *g_logfile << "Shaded triangle from " << x1 << "," << y1 << " to " << x2 << "," << y2 << " to " << x3 << "," << y3 << std::endl;
    return false;
}

bool VM::opcode_INKEY()
{
    VM_INT timeout = stack.pop_int(bc);
    VM_INT v = g_graphics->inkey(timeout);
    stack.push_int(v);
    return false;
}

bool VM::opcode_INKEYS()
{
    VM_INT timeout = stack.pop_int(bc);
    VM_STRING v = g_graphics->inkeys(timeout);
    stack.push_string(v);
    return false;
}

bool VM::opcode_GET()
{
    VM_INT v = g_graphics->get();
    stack.push_int(v);
    return false;
}

bool VM::opcode_GETS()
{
    VM_STRING v = g_graphics->gets();
    stack.push_string(v);
    return false;
}

bool VM::opcode_MOUSE()
{
    VM_INT v2 = stack.pop_int(bc);
    VM_INT v3 = stack.pop_int(bc);
    auto variable_x = variables.get_variable(bc);
    auto variable_y = variables.get_variable_by_int(v2);
    auto variable_state = variables.get_variable_by_int(v3);
    g_graphics->mouse(variable_x.value_int, variable_y.value_int, variable_state.value_int);
    return false;
}

std::string VM::run()
{
    *g_logfile << "-> Running" << std::endl;
    helper_bytecodes().pc = 0;
    data_iterator = data.begin();
    bool quit = false;
    int poll_count = 0;
    while (!quit) {
        poll_count++;
        if (poll_count == 100) {
            if (interactive && g_graphics->inkey(-113)) {
                g_graphics->print_console("Escape\r");
                return "";
            }
            g_graphics->poll();
            poll_count = 0;
        }
        bc = helper_bytecodes().get_current_bytecode();
        if (runtime_debug) {
            *g_logfile << std::uppercase << "[" << std::setw(4) << bc.file_number << " : " << std::setw(8) << bc.line_number << " : " << std::hex << std::setw(8)
                       << helper_bytecodes().pc - 1 << " : " << std::setw(2) << (int)bc.opcode << "]  " << std::nouppercase << std::dec;
        }
        switch (bc.opcode) {
        case Bytecodes::NOP:
            if (runtime_debug)
                *g_logfile << "NOP" << std::endl;
            break;
        case Bytecodes::HALT:
            quit = opcode_HALT();
            break;
        case Bytecodes::TRACEON:
            runtime_debug = true;
            break;
        case Bytecodes::TRACEOFF:
            *g_logfile << std::endl;
            runtime_debug = false;
            break;
        case Bytecodes::BREAKPOINT:
            Debugger();
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
            VM_STRING file = stack.pop_string(bc);
            variables.store_chained_variables(stack);
            return file;
        }
        default:
            error("Unknown token: " + std::to_string((int)bc.opcode));
        }
    };
    return "";
}

void VM::inject_variables(std::vector<Boxed> chained_variables)
{
    for (auto it = chained_variables.begin(); it != chained_variables.end(); ++it) {

        // Now find this
        bool match = false;
        for (auto itv = variables.get_variables().begin(); itv != variables.get_variables().end(); ++itv) {

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
