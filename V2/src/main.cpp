#include <algorithm>
#include <chrono>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string.h>

#include "ast/ast.h"
#include "compile/compile.h"
#include "compile/compile_c.h"
#include "graphics/graphics.h"

struct ast *parse(const char *filename);
extern std::map<std::string, int> files_index;

int main(int argc, char *argv[]) {
    using namespace std::chrono;
    std::cout << "DARIC 0.97, Daryl Dudey, https://twitter.com/thezolbatar" << std::endl;

    if (argc < 2) {
        std::cout << "You must specify a filename with an additional optional command such as 'debug'" << std::endl;
        exit(1);
    }

    // What command
    bool compile_to_c = false;
    bool optimise = false;
    bool debug = false;
    if (argc == 3) {
        if (strcmp(argv[2], "compile") == 0) {
            compile_to_c = true;
        } else if (strcmp(argv[2], "optimise") == 0) {
            optimise = true;
        } else if (strcmp(argv[2], "debug") == 0) {
            debug = true;
        }
    }

    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    struct ast *ast = parse(argv[1]);

    // Create AST debug file if requested
    if (debug) {
        std::ofstream outfile("parse-debug.txt", std::ios::out | std::ios::trunc);
        debug_ast(ast, &outfile);
        outfile.close();
    }

    // This is messy, but will do for now
    for (auto it = files_index.rbegin(); it != files_index.rend(); ++it) {
        std::cout << "File: " << (*it).first << " has index " << (*it).second << std::endl;
    }

    // SDL graphics
    Graphics graphics;
    graphics.init();

    // Compilation step
    VM *vm = compile(ast, &graphics, optimise);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
    std::cout << "-> Parsing & compilation took " << time_span.count() << " seconds." << std::endl;

    // Create debug file if requested
    if (debug) {
        std::ofstream outfile("parse-output.txt", std::ios::out | std::ios::trunc);
        vm->bytecode_output(&outfile);
        outfile.close();
    }

    if (compile_to_c) {
        t1 = high_resolution_clock::now();
        std::ofstream outfile("output.cpp", std::ios::out | std::ios::trunc);
        CCompile ccompile(&outfile, ast);
        t2 = high_resolution_clock::now();
        std::cout << "-> Transpiling to C++ took " << time_span.count() << " seconds." << std::endl;
    } else {
        // Now run!
        t1 = high_resolution_clock::now();
        vm->run();
        t2 = high_resolution_clock::now();
    }

    // Time it
    if (!compile_to_c) {
        t2 = high_resolution_clock::now();
        time_span = duration_cast<duration<double>>(t2 - t1);
        std::cout << "-> Runtime was " << time_span.count() << " seconds." << std::endl;

        // Wait for shutdown
#if defined(_WIN32) || defined(WIN32) || defined(__unix__)
        if (graphics.is_open()) {
            graphics.poll();
        }
#elif RISCOS
        if (graphics.is_open()) {
            std::cout << "Finished, press a key to close window" << std::endl;
            char c;
            os_readc(&c);
        }
#endif
    }

    // Shutdown
    graphics.shutdown();
    free_ast(ast);
    delete vm;

    return 0;
}
