#pragma once
#define _GLIBCXX_USE_C99 1
#include <array>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <chrono>
#include <functional>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif
typedef int VM_INT;
typedef double VM_FLOAT;
typedef std::string VM_STRING;

enum class Type { None, Integer, Float, String };

struct Boxed {
	Type type = Type::None;
	VM_INT value_int;
	VM_FLOAT value_float;
	VM_STRING value_string;
};

// DATA/READ
std::vector<Boxed> data(0);
int data_index = 0;

void data_int(VM_INT v) {
	Boxed b;
	b.type = Type::Integer;
	b.value_int = v;
	data.push_back(std::move(b));
	std::cout << "Size: " << data.size() << std::endl;
}
 
void data_float(VM_FLOAT v) {
	Boxed b;
	b.type = Type::Float;
	b.value_float = v;
	data.push_back(std::move(b));
	std::cout << "Size: " << data.size() << std::endl;
}

void data_string(VM_STRING v) {
	Boxed b;
	b.type = Type::String;
	b.value_string = v;
	data.push_back(std::move(b));
	std::cout << "Size: " << data.size() << std::endl;
}

void data_restore() {
	data_index = 0;
}

VM_INT read_int() {
	if (data_index >= data.size()) {
		std::cout << "No more DATA\n";
		exit(1);
	}
	if (data[data_index].type != Type::Integer) {
		std::cout << "Type mismatch on READ of INTEGER\n";
		exit(1);
	}
	return data[data_index++].value_int;
}

VM_FLOAT read_float() {
	if (data_index >= data.size()) {
		std::cout << "No more DATA\n";
		exit(1);
	}
	if (data[data_index].type != Type::Float) {
		std::cout << "Type mismatch on READ of FLOAT\n";
		exit(1);
	}
	return data[data_index++].value_float;
}

VM_STRING read_string() {
	if (data_index >= data.size()) {
		std::cout << "No more DATA\n";
		exit(1);
	}
	if (data[data_index].type != Type::String) {
		std::cout << "Type mismatch on READ of STRING\n";
		exit(1);
	}
	return data[data_index++].value_string;
}


// File I/O
VM_INT channel_index = 0;
std::map<VM_INT, FILE *> channels;
VM_INT open_in(std::string filename) {
	FILE *file = fopen(filename.c_str(), "rb");
	if (!file) {
		std::cout << "File '" << filename << "' not created.";
	}
	VM_INT r = channel_index++;
	channels.insert(std::pair<VM_INT, FILE *>(r, file));
	return r;
}

void close(VM_INT channel) {
	if (channels.count(channel) == 0) {
		std::cout << "Unknown channel #" << channel << std::endl;
	}
	auto g = channels.find(channel);
	fclose((*g).second);
	channels.erase(channel);
}

VM_INT bget(VM_INT channel) {
	auto g = channels.find(channel);
	char b = fgetc((*g).second);
	return static_cast<VM_INT>(b);
}

VM_INT eof(VM_INT channel) {
	auto g = channels.find(channel);
	VM_INT eof = 0;
	return feof((*g).second);
}

VM_INT asc(VM_STRING v) {
	VM_INT c = -1;
	if (v.length() != 0) {
		c = v[0];
	}
	return c;
}

VM_INT sgn(VM_FLOAT v1) {
	VM_INT r = 0;
	if (v1 < 0) {
		r = -1;
	}
	else if (v1 > 0) {
		r = 1;
	}
	return r;
}

VM_STRING chrs(VM_INT v) {
	v &= 0xFF;
	VM_STRING c = " ";
	c[0] = v;
	return c;
}

VM_INT instr(VM_STRING string, VM_STRING substring, VM_INT start) {
	return static_cast<VM_INT>(string.find(substring, start));
}

VM_INT len(VM_STRING string) {
	size_t l = static_cast<size_t>(string.length());
	return static_cast<VM_INT>(l);
}

VM_STRING lefts(VM_STRING string, VM_INT v) {
	return string.substr(0, v);
}

VM_STRING strings(VM_INT v1, VM_STRING v2) {
	VM_STRING v3 = "";
	for (int i = 0; i < v1; i++) {
		v3 += v2;
	}
	return v3;
}

VM_STRING strs(VM_FLOAT v) {
	std::stringstream stream;
	stream << std::dec << v;
	VM_STRING v2(stream.str());
	return v2;
}

VM_STRING strs_hex(VM_FLOAT v) {
	std::stringstream stream;
	stream << std::hex << std::uppercase << static_cast<int>(v);
	VM_STRING v2(stream.str());
	return v2;
}

VM_STRING mids(VM_STRING string, VM_INT v1, VM_INT v2) {
	return string.substr(v1, v2);
}

VM_STRING rights(VM_STRING string, VM_INT v) {
	size_t p = static_cast<size_t>(string.length()) - v;
	return string.substr(p, v);
}

std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
VM_INT get_clock() {
	std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
	std::chrono::milliseconds time_span = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
	double d = time_span.count() / 10.0;
	return static_cast<VM_INT>(d);
}

VM_STRING times() {
	time_t rawtime;
	struct tm* timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "%a,%e %b %y.%T", timeinfo);
	return buffer;
}

void graphics_init();
void graphics_shutdown();