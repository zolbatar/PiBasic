#!/bin/sh
cp ../Windows/output.cpp .
#cp ../V2/src/graphics/graphics.h  .
#cp ../V2/src/types.h .
rm output
g++ -O3 -std=c++11 output.cpp lib.a -lSDL2 -I/usr/include/SDL2 -o output
./output

