#pragma once
#include "../compiler/compiler.h"
#include "../graphics/graphics.h"
#include "../vm/boxed.h"
#include <list>
#include <map>
#include <set>

class Interactive {
public:
	void run();

private:
	std::map<UINT32, std::string> lines;
	Compiler* compiler = new Compiler();
	bool jit = false;

	void welcome_prompt();
	UINT32 add_line(std::string s, UINT32 auto_line);
	void set_examples_directory();
	void execute_line(std::string s);
	void run_file(std::string s);
	void run_all_lines();
	void load(std::string filename);
	void save(std::string filename);
	void clear();
};