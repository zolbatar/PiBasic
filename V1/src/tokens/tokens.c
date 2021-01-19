#include <stdio.h>
#include <stdlib.h>
#include "tokens.h"

const char *token_strings[] = {
    "AND", "DIV", "EOR", "MOD", "OR", "ERROR", "LINE", "OFF",
    "STEP", "SPC", "TAB(", "ELSE", "THEN", "<line>", "OPENIN", "PTR",
    // 16
    "PAGE", "TIME", "LOMEM", "HIMEM", "ABS", "ACS", "ADVAL", "ASC",
    "ASN", "ATN", "BGET", "COS", "COUNT", "DEG", "ERL", "ERR",
    // 32
    "EVAL", "EXP", "EXT", "FALSE", "FN", "GET", "INKEY", "INSTR(",
    "INT", "LEN", "LN", "LOG", "NOT", "OPENUP", "OPENOUT", "PI",
    // 48
    "POINT(", "POS", "RAD", "RND", "SGN", "SIN", "SQR", "TAN",
    "TO", "TRUE", "USR", "VAL", "VPOS", "CHR$", "GET$", "INKEY$",
    // 64
    "LEFT$(", "MID$(", "RIGHT$(", "STR$", "STRING$(", "EOF", "<ESCFN>", "<ESCCOM>",
    "<ESCSTMT>", "WHEN", "OF", "ENDCASE", "ELSE" /* ELSE2 */, "ENDIF", "ENDWHILE", "PTR",
    // 80
    "PAGE", "TIME", "LOMEM", "HIMEM", "SOUND", "BPUT", "CALL", "CHAIN",
    "CLEAR", "CLOSE", "CLG", "CLS", "DATA", "DEF", "DIM", "DRAW",
    // 96
    "END", "ENDPROC", "ENVELOPE", "FOR", "GOSUB", "GOTO", "GCOL", "IF",
    "INPUT", "LET", "LOCAL", "MODE", "MOVE", "NEXT", "ON", "VDU",
    // 112
    "PLOT", "PRINT", "PROC", "READ", "REM", "REPEAT", "REPORT", "RESTORE",
    "RETURN", "RUN", "STOP", "COLOUR", "TRACE", "UNTIL", "WIDTH", "OSCLI"

};

const char *get_name_for_token(BYTE token) {
    return token_strings[token];
}

const char *get_name_for_statementtoken(BYTE token) {
    switch (token) {
        case TOKEN_STMT_CASE:
            return "CASE";
        case TOKEN_STMT_CIRCLE:
            return "CIRCLE";
        case TOKEN_STMT_FILL:
            return "FILL";
        case TOKEN_STMT_ORIGIN:
            return "ORIGIN";
        case TOKEN_STMT_PSET:
            return "PSET";
        case TOKEN_STMT_RECT:
            return "RECT";
        case TOKEN_STMT_SWAP:
            return "SWAP";
        case TOKEN_STMT_WHILE:
            return "WHILE";
        case TOKEN_STMT_WAIT:
            return "WAIT";
        case TOKEN_STMT_MOUSE:
            return "MOUSE";
        case TOKEN_STMT_QUIT:
            return "QUIT";
        case TOKEN_STMT_SYS:
            return "SYS";
        case TOKEN_STMT_INSTALL:
            return "INSTALL";
        case TOKEN_STMT_LIBRARY:
            return "LIBRARY";
        case TOKEN_STMT_TINT:
            return "TINT";
        case TOKEN_STMT_ELLIPSE:
            return "ELLIPSE";
        case TOKEN_STMT_BEATS:
            return "BEATS";
        case TOKEN_STMT_TEMPO:
            return "TEMPO";
        case TOKEN_STMT_VOICES:
            return "VOICES";
        case TOKEN_STMT_VOICE:
            return "VOICE";
        case TOKEN_STMT_STEREO:
            return "STEREO";
        case TOKEN_STMT_OVERLAY:
            return "OVERLAY";
        default:
            printf("Unknown statement token %d\n", token);
            exit(1);
    }
    return token_strings[token];
}