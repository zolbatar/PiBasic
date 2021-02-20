#!/bin/sh
export GCCSDK_INSTALL_ENV=/home/daryl/gccsdk/env
make -f Makefile.riscosvfp

cp buildriscosvfp/daricvfp /mnt/c/Users/d_dud/Dropbox/Emulation/Acorn\ 32-bit/RPCEmu\ -\ Direct/hostfs/Home/!Daric/daricvfp,e1f
