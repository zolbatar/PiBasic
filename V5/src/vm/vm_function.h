#pragma once
#include "../types.h"
#include "type.h"
#include <vector>

struct VMFunction {
    UINT32 pc_start;
    UINT32 pc_end;
    Type type;
    std::vector<Boxed> locals;
    UINT32 locals_count;
};
