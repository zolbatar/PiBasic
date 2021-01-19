#!/bin/sh
clear
valgrind --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         ./test RISCOS/MANBASIC,ffb
