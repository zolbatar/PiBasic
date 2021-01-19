#include <stdio.h>

void debug_print(const char *ptr, int len, int newline) {
    if (newline) {
        printf("%s\n", ptr);
    } else {
        printf("%s", ptr);
    }
}
