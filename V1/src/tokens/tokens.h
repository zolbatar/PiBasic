#ifndef __TOKENS_H
#define __TOKENS_H
#include "pibasic.h"

#define NO_TOKEN 0xFF
#define TOKEN_AND 0x0
#define TOKEN_DIV 0x1
#define TOKEN_EOR 0x2
#define TOKEN_MOD 0x3
#define TOKEN_OR 0x4
#define TOKEN_STEP 0x8
#define TOKEN_SPC 0x9
#define TOKEN_ELSE 0xB
#define TOKEN_THEN 0xC
#define TOKEN_TIME 0x11
#define TOKEN_ABS 0x14
#define TOKEN_ATN 0x19
#define TOKEN_COS 0x1B
#define TOKEN_EXP 0x21
#define TOKEN_FN 0x24
#define TOKEN_INT 0x28
#define TOKEN_LEN 0x29
#define TOKEN_LN 0x2A
#define TOKEN_RND 0x33
#define TOKEN_SQR 0x36
#define TOKEN_TAN 0x37
#define TOKEN_TO 0x38
#define TOKEN_CHR 0x3D
#define TOKEN_LEFT_S_P 0x40
#define TOKEN_MID_S_P 0x41
#define TOKEN_RIGHT_S_P 0x42
#define TOKEN_STR 0x43
#define TOKEN_STRINGS 0x44
#define TOKEN_ESCSTMT 0x48
#define TOKEN_DATA 0x5C
#define TOKEN_DEF 0x5D
#define TOKEN_DIM 0x5E
#define TOKEN_END 0x60
#define TOKEN_ENDPROC 0x61
#define TOKEN_FOR 0x63
#define TOKEN_GOSUB 0x64
#define TOKEN_GCOL 0x66
#define TOKEN_IF 0x67
#define TOKEN_LET 0x69
#define TOKEN_LOCAL 0x6A
#define TOKEN_MODE 0x6B
#define TOKEN_NEXT 0x6D
#define TOKEN_VDU 0x6F
#define TOKEN_PLOT 0x70
#define TOKEN_PRINT 0x71
#define TOKEN_PROC 0x72
#define TOKEN_READ 0x73
#define TOKEN_REM 0x74
#define TOKEN_REPEAT 0x75
#define TOKEN_RETURN 0x78
#define TOKEN_UNTIL 0x7D

#define TOKEN_STMT_CASE 0x0E
#define TOKEN_STMT_CIRCLE 0xF
#define TOKEN_STMT_FILL 0x10
#define TOKEN_STMT_ORIGIN 0x11
#define TOKEN_STMT_PSET 0x12
#define TOKEN_STMT_RECT 0x13
#define TOKEN_STMT_SWAP 0x14
#define TOKEN_STMT_WHILE 0x15
#define TOKEN_STMT_WAIT 0x16
#define TOKEN_STMT_MOUSE 0x17
#define TOKEN_STMT_QUIT 0x18
#define TOKEN_STMT_SYS 0x19
#define TOKEN_STMT_INSTALL 0x1A
#define TOKEN_STMT_LIBRARY 0x1B
#define TOKEN_STMT_TINT 0x1C
#define TOKEN_STMT_ELLIPSE 0x1D
#define TOKEN_STMT_BEATS 0x1E
#define TOKEN_STMT_TEMPO 0x1F
#define TOKEN_STMT_VOICES 0x20
#define TOKEN_STMT_VOICE 0x21
#define TOKEN_STMT_STEREO 0x22
#define TOKEN_STMT_OVERLAY 0x23

const char *get_name_for_token(BYTE token);
const char *get_name_for_statementtoken(BYTE token);

#endif
