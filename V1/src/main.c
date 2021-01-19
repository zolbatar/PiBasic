// xxd -i BBCBASIC/CLOCK3.bbc src/clock3.h

// Last error is E25 ( not used)
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "create.h"
#include "graphics.h"
#include "mymath.h"
#include "output.h"
#include "parser.h"
#include "pibasic.h"
#include "test.h"

#ifdef LINUX
#include <SDL2/SDL.h>
#endif

#ifdef RISCOS
#include "kernel.h"
#include "swis.h"
#endif

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("A BASIC file is needed as a parameter.\n");
        exit(1);
    }

    // Load in BASIC file
    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("BASIC file not found\n");
        exit(1);
    }
    fseek(fp, 0L, SEEK_END);
    long sz = ftell(fp);
    rewind(fp);
    BYTE *source = malloc(sz);
    fread(source, 1, sz, fp);
    fclose(fp);

    // Hello!
    printf("PiBASIC 0.8 - Daryl Dudey\n");
    printf("Read in '%s' BBC BASIC file of %ld bytes\n", argv[1], sz);

    // Go for it
    parser(source, (UINT32)sz, 0);
    free(source);
    phase1_output(first_line, 1);
    parser_pass2();
    phase1_output(first_line, 2);
    VM *vm = build_bytecode();
    //    VM *vm = NULL;
    if (vm != NULL) {
        phase2_output(first_line, vm);
        run(vm);
    }

// SDL Loop, so we can receive input etc.
#ifdef LINUX
    if (graphics_initialised) {
        graphics_update();
        SDL_bool done = SDL_FALSE;
        SDL_Event event;
        while (!done) {
            while (SDL_PollEvent(&event)) {
                if (event.type == SDL_QUIT) {
                    done = SDL_TRUE;
                }
            }
        }
        SDL_Quit();
    }
#endif

    /*#ifdef RISCOS
    setup_trig_lookup_tables();
    graphics_setup(TRUE);
    clear_screen(0x0);
    end_frame();
    performance_test();
#endif

#ifdef RISCOS
    graphics_end();

    // Update desktop
    _kernel_swi_regs regs;
    regs.r[0] = -1;
    regs.r[1] = 0;
    regs.r[2] = 0;
    regs.r[3] = screen_width * 2;
    regs.r[4] = screen_height * 2;
    _kernel_swi(Wimp_ForceRedraw, &regs, &regs);

#endif*/

    // Be very clean, free all memory so we can catch memory leaks using valgrind
    if (vm != NULL)
        delete_VM(vm);
    free_parser();
    printf("Bye!\n");
    return 0;
}
