#!/bin/sh
g++ -c -O3 -std=c++11 ../V2/src/engine/*.cpp ../V2/src/graphics/*.cpp -I. -I/usr/include/SDL2
ar rcs lib.a *.o
