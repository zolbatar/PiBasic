#pragma once
#include "colour.h"
#include <vector>
#include <map>

struct Sprite {
	size_t width, height;
	std::vector<std::vector<Colour>> banks;
};
