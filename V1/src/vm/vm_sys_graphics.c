#include <regex.h>

#include "output.h"
#include "pibasic.h"
#include "vm.h"
#ifdef RISCOS
#include "kernel.h"
#endif

#if defined(LINUX)
#include <SDL2/SDL.h>
SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;
int screen_width = 0;
int screen_height = 0;
int screen_colour = 0;
unsigned long long last_render = 0;
int screen_scale = 4;
bool graphics_initialised = FALSE;

#define MAX_COLOURS 8
int r[MAX_COLOURS], g[MAX_COLOURS], b[MAX_COLOURS];
#endif
int mode;

void set_graphicsmode(int width, int height, int colours) {
    screen_width = width;
    screen_height = height;
    screen_colour = colours;

#ifdef LINUX
    switch (colours) {
        case 4:
            r[0] = 0;
            g[0] = 0;
            b[0] = 0;
            r[1] = 255;
            g[1] = 0;
            b[1] = 0;
            r[2] = 0;
            g[2] = 255;
            b[2] = 0;
            r[3] = 255;
            g[3] = 255;
            b[3] = 255;
            break;
        case 16777216:
            break;
        default:
            printf("PANIC: Not supported colour depth %d\n", colours);
            exit(1);
    }

    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        exit(1);
    }

    // Create window
    if (SDL_CreateWindowAndRenderer(screen_width * screen_scale, screen_height * screen_scale, SDL_WINDOW_ALLOW_HIGHDPI | SDL_WINDOW_OPENGL, &window, &renderer)) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't create window and renderer: %s", SDL_GetError());
        exit(1);
    }
#endif
    graphics_initialised = TRUE;
    last_render = get_clock();
}

void opcode_SYS_GraphicsMode_STRING() {
    struct VariableString* mode = stack_pop_string();
#ifdef LINUX
    // Add a /0 to the end of the string
    char* a = malloc(mode->length + 1);
    memcpy(a, mode->value, mode->length);
    a[mode->length] = 0;

    // Break apart the string to extract the width, height and colours
    regex_t regex;
    regmatch_t matches[4];
    int reti = regcomp(&regex, "X(\\w*) Y(\\w*) C(\\w*)", REG_EXTENDED);
    if (reti) {
        printf("PANIC: Could not compile regex\n");
        exit(1);
    }

    // Execute regular expression
    reti = regexec(&regex, a, 4, matches, 0);
    if (!reti) {
        // X
        a[matches[1].rm_eo] = 0;
        int x = atoi(&a[matches[1].rm_so]);

        // Y
        a[matches[2].rm_eo] = 0;
        int y = atoi(&a[matches[2].rm_so]);

        // C
        a[matches[3].rm_eo] = 0;
        int c = 0;
        if (strcmp(&a[matches[3].rm_so], "2") == 0) {
            c = 2;
        } else if (strcmp(&a[matches[3].rm_so], "4") == 0) {
            c = 4;
        } else if (strcmp(&a[matches[3].rm_so], "16") == 0) {
            c = 16;
        } else if (strcmp(&a[matches[3].rm_so], "64") == 0) {
            c = 64;
        } else if (strcmp(&a[matches[3].rm_so], "256") == 0) {
            c = 256;
        } else if (strcmp(&a[matches[3].rm_so], "4K") == 0) {
            c = 4096;
        } else if (strcmp(&a[matches[3].rm_so], "32K") == 0) {
            c = 32768;
        } else if (strcmp(&a[matches[3].rm_so], "64K") == 0) {
            c = 65536;
        } else if (strcmp(&a[matches[3].rm_so], "16M") == 0) {
            c = 16777216;
        }
        set_graphicsmode(x, y, c);
#ifdef RUNTIME_DEBUG
        printf("Setting graphics mode to X: %d Y: %d C: %d\n", x, y, c);
#endif
    } else if (reti == REG_NOMATCH) {
        memcpy(a, mode->value, mode->length);
        a[mode->length] = 0;
        printf("MODE string '%s' doesn't match Xnn Ynn Cnn\n", a);
        exit(1);
    } else {
        printf("Regex match failed in MODE\n");
        exit(1);
    }
#endif
    regfree(&regex);
    free(a);
}

void opcode_SYS_GraphicsMode() {
    mode = stack_pop_int() & 0x7f;
    switch (mode) {
        case 1:
            set_graphicsmode(320, 256, 4);
            break;
        case 19:
            set_graphicsmode(640, 480, 4);
            break;
        default:
            printf("Unsupported video mode %d\n", mode);
            exit(1);
    }
#if defined(RISCOS) || defined(BBC)
    _kernel_oswrch(22);
    _kernel_oswrch((unsigned char)mode);
#endif
#ifdef RUNTIME_DEBUG
    printf("Change screen mode to  %d\n", mode);
#endif
}

void opcode_SYS_GraphicsVDU() {
#ifdef RUNTIME_DEBUG
    printf("VDU\n");
#endif
#if defined(RISCOS) || defined(BBC)
    _kernel_oswrch(22);
#endif
}

void opcode_SYS_GraphicsVDUByte() {
    VM_INT byte = stack_pop_int();
#ifdef RUNTIME_DEBUG
    printf("VDU byte %d\n", byte);
#endif
#if defined(RISCOS) || defined(BBC)
    _kernel_oswrch((unsigned char)byte);
#else
    printf("IGNORING VDU byte %d\n", byte);
#endif
}

void opcode_SYS_GraphicsVDUWord() {
    VM_INT word = stack_pop_int();
#ifdef RUNTIME_DEBUG
    printf("VDU word %d\n", word);
#endif
#if defined(RISCOS) || defined(BBC)
    _kernel_oswrch((unsigned char)(word & 0xFF));
    _kernel_oswrch((unsigned char)((word & 0xFF00) >> 8));
#else
    printf("IGNORING VDU word %d\n", word);
#endif
}

void opcode_SYS_GraphicsPlot() {
    VM_INT y = stack_pop_int();
    VM_INT x = stack_pop_int();
    int plot_number = stack_pop_int();
#ifdef RUNTIME_DEBUG
    printf("PLOT %d,%d,%d\n", plot_number, x, y);
#endif
#if defined(LINUX)
    //int flags = plot_number & 0x7;
    int type = plot_number >> 3;
    int adjusted_x = x / (1280 / screen_width) * screen_scale;
    int adjusted_y = (1023 - y) / (1024 / screen_height) * screen_scale;
    switch (type) {
        case 8: {
            SDL_Rect rect;
            rect.x = adjusted_x;
            rect.y = adjusted_y;
            rect.w = screen_scale;
            rect.h = screen_scale;
            SDL_RenderFillRect(renderer, &rect);
            break;
        }
    }

    unsigned long long time = get_clock();
    if (time - last_render > 1) {
        last_render = time;
        graphics_update();
    }
#endif
#if defined(RISCOS) || defined(BBC)
    _kernel_oswrch(25);
    _kernel_oswrch(plot_number);
    _kernel_oswrch((unsigned char)x & 0xFF);
    _kernel_oswrch((unsigned char)((x & 0xFF00) >> 8));
    _kernel_oswrch((unsigned char)y & 0xFF);
    _kernel_oswrch((unsigned char)((y & 0xFF00) >> 8));
#endif
}

#ifdef LINUX
void graphics_update() {
    SDL_RenderPresent(renderer);
}
#endif

void opcode_SYS_GCOL() {
    int v2 = stack_pop_int();
    int v1 = stack_pop_int();
    switch (v1) {
        case 0: {
#ifdef LINUX
            SDL_SetRenderDrawColor(renderer, r[v2], g[v2], b[v2], SDL_ALPHA_OPAQUE);
#endif
#ifdef RUNTIME_DEBUG
            printf("GCOL %d, %d\n", v1, v2);
#endif
#if defined(RISCOS) || defined(BBC)
            _kernel_oswrch(18);
            _kernel_oswrch((unsigned char)v1);
            _kernel_oswrch((unsigned char)v2);
#endif
            break;
        };
    }
}
