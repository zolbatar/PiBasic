#include "clock.h"

std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
VM_INT get_clock()
{
    auto t2 = std::chrono::high_resolution_clock::now();
    auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    double d = time_span.count() / 10.0;
    return static_cast<VM_INT>(d);
}
