#!/bin/sh
export GCCSDK_INSTALL_ENV=/home/daryl/gccsdk/env
make -f Makefile.riscos

#cp -r ~/gccsdk/build/gcc8/package/ /mnt/c/Users/d_dud/Dropbox/Emulation/Acorn\ 32-bit/RPCEmu\ -\ Direct/hostfs/Home

cp buildriscos/daric /mnt/c/Users/d_dud/Dropbox/Emulation/Acorn\ 32-bit/RPCEmu\ -\ Direct/hostfs/Home/!Daric/daric,e1f
#cp ~/gccsdk/env/lib/ld-riscos.so.2  /mnt/c/Users/d_dud/Dropbox/Emulation/Acorn\ 32-bit/RPCEmu\ -\ Direct/hostfs/Home/!Daric/


