#ifndef __PIBASIC_H
#define __PIBASIC_H
#include <stdbool.h>

//#define BBC
//#define RISCOS
#define LINUX

typedef unsigned char BYTE;
typedef unsigned int UINT32;
typedef int VM_INT;
typedef double VM_FLOAT;
#define DOUBLEMATH

#define FALSE 0
#define TRUE 1
#define MAX_VARIABLE_LENGTH 4096

#define VAR_TYPE_NONE -1
enum EVarType {
    VAR_TYPE_INT,
    VAR_TYPE_FLOAT,
    VAR_TYPE_STRING,
};

#endif
