#pragma once
#include "graphics/graphics.h"
#include "fonts/fonts.h"
#include "input/input.h"
#include "text/text.h"
#include <memory>
#include <string>

class Environment {
public:
	std::string version = __DATE__;
	std::string pwd; // Program directory
	std::string cwd; // Current directory
	std::vector<std::string> log_list; // Runtime log
	std::string sol;
	Graphics graphics;
	Fonts fonts;
	Input input;
	Text text;
	bool debugger_requested = false;
	bool interactive;

	bool is_debugger_requested() { return debugger_requested; }

	void log(std::string msg) {
		log_list.push_back(sol + msg);
		sol = "";
	}

	void log_sol(std::string msg) {
		sol = msg;
	}

	void process_log()
	{
	}
};