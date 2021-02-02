#pragma once
#include "../vm/boxed.h"
#include <map>

struct CustomType {
    int id;
    std::map<std::string, Boxed> members;
};
