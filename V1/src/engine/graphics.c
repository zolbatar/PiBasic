#include "graphics.h"

#include <stdio.h>
#include <stdlib.h>

#ifdef RISCOS
#include "kernel.h"
#include "swis.h"
#endif

int screen_width;
int screen_height;
int x_origin;
int y_origin;
int size;

// Fast line lookup
int *line_address;

// Bank switching
int max_banks = 0;
UINT32 bank_address[3];
int bank = 1;

// Clipping
int minX;
int maxX;
int minY;
int maxY;

void graphics_shadow_state_on() {
#ifdef RISCOS
    _kernel_osbyte(114, 0, 0);
#endif
}

void graphics_shadow_state_off() {
#ifdef RISCOS
    _kernel_osbyte(114, 1, 0);
#endif
}

void graphics_set_vdu_bank(int bank) {
#ifdef RISCOS
    _kernel_osbyte(112, bank, 0);
#endif
}

void graphics_set_display_bank(int bank) {
#ifdef RISCOS
    _kernel_osbyte(113, bank, 0);
#endif
}

void end_frame() {
#ifdef RISCOS
    _kernel_osbyte(19, bank, 0);  // Await sync
    graphics_set_display_bank(bank);
    bank = (bank % max_banks) + 1;
    graphics_set_vdu_bank(bank);
    _kernel_oswrch(30);  // Cursor to home
#endif
}

void graphics_setup(bool buffering) {
#ifdef RISCOS
    int vars[4];
    int vals[3];
    _kernel_swi_regs regs;

    // Get current screen mode
    vars[0] = 150;  // &96 = total screen size
    vars[1] = 130;  // &82 = screen width
    vars[2] = 131;  // &81 = screen height
    vars[3] = -1;
    regs.r[0] = (int)vars;
    regs.r[1] = (int)vals;
    _kernel_swi(OS_ReadVduVariables, &regs, &regs);
    screen_width = vals[1] + 1;
    screen_height = vals[2] + 1;
    max_banks = vals[0] / (screen_width * screen_height * 4);
    if (max_banks > 3) max_banks = 3;
    if (!buffering) max_banks = 1;
#endif

    // Enable shadow mode
    graphics_shadow_state_on();

    // Setup mode sized stuff
    x_origin = screen_width / 2;
    y_origin = screen_height / 2;
    size = screen_width * screen_height;
    minX = 0;
    maxX = screen_width - 1;
    minY = 0;
    maxY = screen_height - 1;

    // Fast lookup of line addresses
    line_address = malloc(sizeof(int) * screen_height);
    UINT32 offset = 0;
    for (int i = 0; i < screen_height; i++) {
        line_address[i] = offset;
        offset += screen_width;
    }

    // Cursor off
#ifdef RISCOS
    _kernel_oswrch(23);
    _kernel_oswrch(1);
    _kernel_oswrch(0);
    _kernel_oswrch(0);
    _kernel_oswrch(0);
    _kernel_oswrch(0);
    _kernel_oswrch(0);
    _kernel_oswrch(0);
    _kernel_oswrch(0);
    _kernel_oswrch(0);
#endif

    // Bank 3
#ifdef RISCOS
    vars[0] = 149;  // &95 = display start
    vars[1] = -1;
    regs.r[0] = (int)vars;
    regs.r[1] = (int)vals;
    if (max_banks >= 3) {
        graphics_set_display_bank(3);
        graphics_set_vdu_bank(3);
        _kernel_swi(OS_ReadVduVariables, &regs, &regs);
        bank_address[2] = vals[0];
    }
#endif

    // Bank 2
#ifdef RISCOS
    if (max_banks >= 2) {
        graphics_set_display_bank(2);
        graphics_set_vdu_bank(2);
        _kernel_swi(OS_ReadVduVariables, &regs, &regs);
        bank_address[1] = vals[0];
    }
#endif

    // Bank 1
#ifdef RISCOS
    graphics_set_display_bank(1);
    graphics_set_vdu_bank(1);
    _kernel_swi(OS_ReadVduVariables, &regs, &regs);
    bank_address[0] = vals[0];
#endif

    printf("Screen: %d x %d, with %d banks\n", screen_width, screen_height, max_banks);
    printf("Bank 0: %X\n", bank_address[0]);
    if (max_banks >= 2) printf("Bank 1: 0x%X\n", bank_address[1]);
    if (max_banks >= 3) printf("Bank 2: 0x%X\n", bank_address[2]);
}

void graphics_end() {
    graphics_shadow_state_off();
    graphics_set_display_bank(1);
    graphics_set_vdu_bank(1);
}

UINT32 *get_bank_address() {
    return (UINT32 *)(bank_address[bank - 1]);
}

BYTE *get_bank_address_byte() {
    return (BYTE *)(bank_address[bank - 1]);
}

void clear_screen(UINT32 colour) {
    UINT32 *addr = get_bank_address();
    for (int i = 0; i < size; i++) {
        addr[i] = colour;
    }
}

void set_clip(int x1, int y1, int x2, int y2) {
    minX = x1;
    maxX = x2;
    minY = y1;
    maxY = y2;
}

void draw_horz_line(int x1, int x2, int y, UINT32 colour) {
    // Off screen?
    if (x1 < minX && x2 < minX) return;
    if (x1 > maxX && x2 > minX) return;
    if (y < minY) return;
    if (y > maxY) return;
    if (x1 < minX) x1 = minX;
    if (x2 > maxX) x2 = maxX;

    // Draw
    UINT32 *addr = get_bank_address();
    int offset = line_address[y] + x1;
    for (int x = x1; x < x2; x++) {
        addr[offset++] = colour;
    }
}

void draw_box(int x1, int y1, int x2, int y2, UINT32 colour) {
    for (int y = y1; y < y2; y++) {
        draw_horz_line(x1, x2, y, colour);
    }
}

void plot_pixel(int x, int y, UINT32 colour) {
    if (x < minX || x > maxX || y < minY || y > maxY) return;
    UINT32 *addr = get_bank_address();
    int offset = line_address[y] + x;
    addr[offset] = colour;
}
