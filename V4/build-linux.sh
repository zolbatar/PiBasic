#!/bin/sh
bison -d --output=src/parser/bison.cpp Grammar/DARIC.y
flex --outfile=src/parser/flex.cpp Grammar/DARIC.l
make -f Makefile.linux
