#include "parse_compile_run.h"
#include "compiler/compile.h"
#include "interpreter/interpreter.h"
#include "parse_compile_run.h"
#include "parser/ast.h"
#include "string.h"
#include <chrono>
#include <iostream>
#include <sstream>
#include <unordered_set>

// From BISON or FLEX
int parse(const char* filename);
extern std::list<std::string> error_list;
extern std::unordered_set<std::string> included_files;
extern std::stack<std::string> file_stack;
extern std::stack<int> yylineno_stack;
extern std::map<int, std::list<AST*>> ast_lines;
extern std::map<std::string, int> files_index;

// Global stuff
extern std::unique_ptr<VM> g_vm;
extern std::unique_ptr<Graphics> g_graphics;
extern std::unique_ptr<std::stringstream> g_logfile;
extern bool interactive;

void parse_and_compile(const char* filename, bool temporary, std::vector<Boxed>* variables)
{
    using namespace std::chrono;
    *g_logfile << "Filename: " << filename << std::endl;
    reset_parser();
    std::string filename_with_ext(filename);

    // Convert to lower
#ifdef WINDOWS
    std::transform(filename_with_ext.begin(), filename_with_ext.end(), filename_with_ext.begin(),
        [](unsigned char c) { return std::tolower(c); });

    // Make a longer filename with .daric added (if needed)
    if (!temporary) {
        if (!endsWith(filename_with_ext, ".daric")) {
            filename_with_ext += ".daric";
        }
    }
#endif

    // Parse
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    auto pr = parse(filename_with_ext.c_str());
    if (pr == 0) {
        for (auto it = error_list.begin(); it != error_list.end(); ++it) {
            if (interactive) {
                g_graphics->print_console((*it));
                g_graphics->print_console("\r");
            } else {
                std::cout << (*it) << std::endl;
            }
        }
        if (!interactive) {
            std::cout << "Errors encountered, exiting.\n";
            exit(1);
        }
    }

    // Compile
    g_vm = std::make_unique<VM>();
    compile(variables);
    if (!g_vm->compile_successful) {
        for (auto it = error_list.begin(); it != error_list.end(); ++it) {
            if (interactive) {
                g_graphics->print_console((*it));
                g_graphics->print_console("\r");
            } else {
                std::cout << (*it) << std::endl;
            }
        }
        if (!interactive) {
            std::cout << "Errors encountered, exiting.\n";
            exit(1);
        }
    }
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
    *g_logfile << "-> Parsing & compilation took " << time_span.count() << " seconds." << std::endl;
}

void run_vm()
{
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    bool done = true;
    do {
        std::string chain = g_vm->run();
        done = true;
        if (chain.length() > 0) {
            auto chained_variables = g_vm->helper_variables().get_chained_variables();
            parse_and_compile(chain.c_str(), false, nullptr);
            g_vm->inject_variables(chained_variables);
            done = false;
        }
    } while (!done);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
    *g_logfile << "-> Runtime was " << time_span.count() << " seconds." << std::endl;
}

void reset_parser()
{
    // Clear all previous stuff
    error_list.clear();
    ast_lines.clear();
    files_index.clear();
    included_files.clear();
    while (!file_stack.empty())
        file_stack.pop();
    while (!yylineno_stack.empty())
        yylineno_stack.pop();
}
