#include <stdlib.h>
#include <string.h>

#include "parser.h"

int number_portions = 0;
BYTE section[3];

int process_linenumber(BYTE *code, UINT32 length, UINT32 *pos, BYTE token) {
#ifdef PARSE_DEBUG_VERBOSE
    printf("LINE NUMBER\n");
#endif
    switch (number_portions) {
        case 0:
            number_portions = 1;
            return STATE_LINENUMBER;
        case 1:
        case 2:
            section[number_portions - 1] = token;
            number_portions++;
            return STATE_LINENUMBER;
        case 3: {
            section[number_portions - 1] = token;
            number_portions = 0;
            int high = ((section[0] ^ 0x54) & 0x00110000) << 2;
            int low = ((section[0] ^ 0x54) & 0x00001100) << 4;
            int LSB = (section[1] ^ 0x40) | low;
            int HSB = (section[2] ^ 0x40) | high;
            struct StatementEntry *new_entry = statement_check_exists_create();
            new_entry->entry_type = STATEMENT_LINENUMBER;
            new_entry->line_number = (HSB << 8) + LSB;
            return STATE_NONE;
        }
        default:
            return STATE_NONE;
    }
}
