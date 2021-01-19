#!/bin/sh
arm-none-eabi-gcc -nostartfiles -O3 -mfpu=vfp -mfloat-abi=hard -march=armv6zk -mtune=arm1176jzf-s \
    -I ./src/library -I ./src -I ./src/parser \
    src/*.c src/parser/*.c src/bytecode/*.c \
    src/library/armtubeio.c src/library/armc-start.S src/library/armtubeswis.s src/library/printf.c \
    -o main.elf 
#    -save-temps \

# Debug stuff
#arm-none-eabi-readelf -a main.elf > elf

arm-none-eabi-objcopy main.elf -O binary PIBASIC
cp PIBASIC /media/daryl/USB

# Load address 0000F000         0000F000
# Execution address 0000F104    0000F038
# xxd -i MANBASIC manbasic.h