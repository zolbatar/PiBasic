#!/bin/sh
rm ./test
gcc \
    -g -Wall -Wno-unused-result -Wno-unused-variable -Wno-int-to-pointer-cast \
    -I ./src/library -I ./src -I ./src/parser -I ./src/debug -I ./src/bytecode -I ./src/engine -I ./src/tokens -I ./src/vm \
    src/*.c src/parser-pass1/*.c src/parser-pass2/*.c src/bytecode/*.c src/debug/*.c src/engine/*.c \
    src/tokens/*.c src/vm/*.c \
    src/library/test.c \
    -lSDL2 -lm \
    -O3 -o test
#./test RISCOS/CLOCK3,ffb
#./test RISCOS/TEST,ffb
./test RISCOS/demo2,ffb
#./test RISCOS/MANBASIC,ffb