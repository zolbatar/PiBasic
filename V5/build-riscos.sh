#!/bin/sh
bison -d --output=src/parser/bison.cpp Grammar/DARIC.y
flex --outfile=src/parser/flex.cpp Grammar/DARIC.l
export GCCSDK_INSTALL_ENV=/home/daryl/gccsdk/env
make -f Makefile.riscos

# Create library
#~/gccsdk/cross/bin/arm-unknown-riscos-g++ -D RISCOS -I$GCCSDK_INSTALL_ENV/include -c -g -O3 -std=c++11 src/engine/*.cpp src/graphics/*.cpp -I.
#mv *.o build
#~/gccsdk/cross/bin/arm-unknown-riscos-ar rcs build/rolib.a build/*.o

cp buildriscos/daric /mnt/c/Users/d_dud/Dropbox/Emulation/Acorn\ 32-bit/RPCEmu\ -\ Direct/hostfs/Home/!Daric/daric,e1f



