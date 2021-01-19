#include <iostream>
#include <chrono>
#include "tokeniser/tokeniser.h"
#include "parser/parser.h"

int main(int argc, char* argv[]) {
    using namespace std::chrono;
    std::cout << "DARIC 0.98, Daryl Dudey, www.dariclang.com" << std::endl;

    if (argc < 2) {
        std::cout << "You must specify a filename with an additional optional command such as 'debug'" << std::endl;
        exit(1);
    }

    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    Tokeniser tokeniser(argv[1]);
    tokeniser.parse();
    Parser parser(&tokeniser);
    parser.parse();

    // compile
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
    std::cout << "-> Parsing & compilation took " << time_span.count() << " seconds." << std::endl;

    return 0;
}
