#!/bin/sh
clear
valgrind --leak-check=yes \
         --show-leak-kinds=definite \
         --track-origins=yes \
         ./pibasic
