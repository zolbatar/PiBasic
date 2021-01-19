#pragma once
#include "../types.h"
#include <chrono>

extern std::chrono::high_resolution_clock::time_point t1;
VM_INT get_clock();
