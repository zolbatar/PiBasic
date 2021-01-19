#!/bin/sh
export GCCSDK_INSTALL_ENV=/home/daryl/gccsdk/env
make -f Makefile.riscos
#make -f Makefile.riscosvfp

# Create library
#~/gccsdk/cross/bin/arm-unknown-riscos-g++ -D RISCOS -I$GCCSDK_INSTALL_ENV/include -c -g -O3 -std=c++11 src/engine/*.cpp src/graphics/*.cpp -I.
#mv *.o build
#~/gccsdk/cross/bin/arm-unknown-riscos-ar rcs build/rolib.a build/*.o

cp build/daricro /mnt/c/Users/d_dud/Dropbox/Emulation/Acorn\ 32-bit/RPCEmu\ -\ Direct/hostfs/Home/!Daric/daricro,e1f
cp build/daricrovfp /mnt/c/Users/d_dud/Dropbox/Emulation/Acorn\ 32-bit/RPCEmu\ -\ Direct/hostfs/Home/!Daric/daricro,e1f
#cp build/rolib.a /mnt/c/Users/d_dud/Dropbox/Emulation/Acorn\ 32-bit/RPCEmu\ -\ Direct/hostfs/Home/!Daric/
#cp build/*.o /mnt/c/Users/d_dud/Dropbox/Emulation/Acorn\ 32-bit/RPCEmu\ -\ Direct/hostfs/Home/!Daric/o
cp ../Windows/*.*tf /mnt/c/Users/d_dud/Dropbox/Emulation/Acorn\ 32-bit/RPCEmu\ -\ Direct/hostfs/Home/!Daric/
