/* armcopro.h

   For use with the GNU compilers and the ARM7TDMI CoPro.
   (c) Copyright 2010, Kieran Mockford.  */

#ifndef __ARMCOPRO_H
#define __ARMCOPRO_H
#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif



// lots of memory things going on, let's have a BYTE type
typedef unsigned char BYTE;

// lots of word-wide manipulation
typedef unsigned int UINT32;

// Read a single byte from the io processor
BYTE ReadByteFromIo(void* _Address);

// copy memory from the io processor (very slowly as it has to be done a byte at a time)
void memcpyfromio_slow(void * _Dst, const void* _Src, size_t _Size);

// Write a single byte to the io processor
void WriteByteToIo(void* _Dst, BYTE byte);

// copy memory to the io processor (very slowly as it has to be done a byte at a time)
void memcpytoio_slow(void * _Dst, const void* _Src, size_t _Size);

// ARM CoPro entry point
int __appentry();

// Reverse the string in place
void strreverse(char* begin, char* end);

// Convert a numeric into a string, with base
char* itoa(int value, char* str, int base);

// Emit the string to the console with a newline
void debug_print(const char *ptr, int len, int newline);

// Get the length of the file
int _fgetextent(int fd);

// Get the current file pointer position
int _fgetpos(int fd);

// Set the current file pointer position
void _fsetpos(int fd, int pos);

#ifdef __cplusplus
}
#endif

#endif
