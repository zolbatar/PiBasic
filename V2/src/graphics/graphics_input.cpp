#include "graphics.h"
#include "../vm/clock.h"
#include <iostream>

void Graphics::poll() {
#ifdef RISCOS
#else
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT:
            SDL_Quit();
            exit(1);
        case SDL_KEYDOWN: {
            Event e;
            e.type = EventType::KeyDown;
            e.key_code = key_riscos_translate(event.key.keysym);
            key_events.push(std::move(e));
            break;
        }
        case SDL_KEYUP:
            Event e;
            e.type = EventType::KeyUp;
            e.key_code = key_riscos_translate(event.key.keysym);
            key_events.push(std::move(e));
            break;
        }
    }
#endif
}

VM_INT Graphics::inkey(VM_INT timeout) {
#ifdef RISCOS
#else
    VM_INT clock = get_clock();
    do {
        // Scan
        while (!key_events.empty()) { // Scan until we find a keydown
            auto s = key_events.front();
            key_events.pop();
            if (s.type == EventType::KeyDown) {
                return s.key_code;
            }
        }

        // If nothing, poll
        poll();
    } while (get_clock() - clock < timeout);
    return -1;
#endif
}

VM_STRING Graphics::inkeys(VM_INT timeout) {
#ifdef RISCOS
#else
#endif
    return "";
}

#ifndef RISCOS
int Graphics::key_riscos_translate(SDL_Keysym key) {
    switch (key.scancode) {
        // Top row
    case SDL_SCANCODE_ESCAPE:
        return 112;
    case SDL_SCANCODE_F1:
        return 113;
    case SDL_SCANCODE_F2:
        return 114;
    case SDL_SCANCODE_F3:
        return 115;
    case SDL_SCANCODE_F4:
        return 20;
    case SDL_SCANCODE_F5:
        return 116;
    case SDL_SCANCODE_F6:
        return 117;
    case SDL_SCANCODE_F7:
        return 22;
    case SDL_SCANCODE_F8:
        return 118;
    case SDL_SCANCODE_F9:
        return 119;
    case SDL_SCANCODE_F10:
        return 30;
    case SDL_SCANCODE_F11:
        return 28;
    case SDL_SCANCODE_F12:
        return 29;
    case SDL_SCANCODE_PRINTSCREEN:
        return 32;
    case SDL_SCANCODE_SCROLLLOCK:
        return 31;
    case SDL_SCANCODE_PAUSE:
        return 44;

    // Row 2
    case SDL_SCANCODE_GRAVE:
        return 45;
    case SDL_SCANCODE_1:
        return 48;
    case SDL_SCANCODE_2:
        return 49;
    case SDL_SCANCODE_3:
        return 17;
    case SDL_SCANCODE_4:
        return 18;
    case SDL_SCANCODE_5:
        return 19;
    case SDL_SCANCODE_6:
        return 24;
    case SDL_SCANCODE_7:
        return 36;
    case SDL_SCANCODE_8:
        return 21;
    case SDL_SCANCODE_9:
        return 38;
    case SDL_SCANCODE_0:
        return 39;
    case SDL_SCANCODE_KP_PLUSMINUS:
        return 23;
    case SDL_SCANCODE_EQUALS:
        return 93;
    case SDL_SCANCODE_BACKSPACE:
        return 47;

    // Row 3
    case SDL_SCANCODE_TAB:
        return 96;
    case SDL_SCANCODE_Q:
        return 16;
    case SDL_SCANCODE_W:
        return 33;
    case SDL_SCANCODE_E:
        return 34;
    case SDL_SCANCODE_R:
        return 51;
    case SDL_SCANCODE_T:
        return 35;
    case SDL_SCANCODE_Y:
        return 68;
    case SDL_SCANCODE_U:
        return 53;
    case SDL_SCANCODE_I:
        return 37;
    case SDL_SCANCODE_O:
        return 54;
    case SDL_SCANCODE_P:
        return 55;
    case SDL_SCANCODE_LEFTBRACKET:
        return 56;
    case SDL_SCANCODE_RIGHTBRACKET:
        return 88;
    case SDL_SCANCODE_NONUSBACKSLASH:
        return 120;

    // Row 4
    case SDL_SCANCODE_LCTRL:
        return 1;
    case SDL_SCANCODE_A:
        return 65;
    case SDL_SCANCODE_S:
        return 81;
    case SDL_SCANCODE_D:
        return 50;
    case SDL_SCANCODE_F:
        return 67;
    case SDL_SCANCODE_G:
        return 83;
    case SDL_SCANCODE_H:
        return 84;
    case SDL_SCANCODE_J:
        return 69;
    case SDL_SCANCODE_K:
        return 70;
    case SDL_SCANCODE_L:
        return 86;
    case SDL_SCANCODE_SEMICOLON:
        return 72;
    case SDL_SCANCODE_APOSTROPHE:
        return 79;
    case SDL_SCANCODE_RETURN:
        return 73;

    // Row 4
    case SDL_SCANCODE_LSHIFT:
        return 0;
    case SDL_SCANCODE_Z:
        return 94;
    case SDL_SCANCODE_X:
        return 97;
    case SDL_SCANCODE_C:
        return 66;
    case SDL_SCANCODE_V:
        return 82;
    case SDL_SCANCODE_B:
        return 99;
    case SDL_SCANCODE_N:
        return 100;
    case SDL_SCANCODE_M:
        return 85;
    case SDL_SCANCODE_COMMA:
        return 101;
    case SDL_SCANCODE_PERIOD:
        return 102;
    case SDL_SCANCODE_SLASH:
        return 103;
    case SDL_SCANCODE_RSHIFT:
        return 104;

    // Row 5
    case SDL_SCANCODE_CAPSLOCK:
        return 64;
    case SDL_SCANCODE_LALT:
        return 2;
        // return 5;
    case SDL_SCANCODE_SPACE:
        return 98;
    case SDL_SCANCODE_RALT:
        return 2;
        // return 8;
    case SDL_SCANCODE_RCTRL:
        return 1;
        // return 7;

    // Navigation keys
    case SDL_SCANCODE_INSERT:
        return 61;
    case SDL_SCANCODE_HOME:
        return 62;
    case SDL_SCANCODE_PAGEUP:
        return 63;
    case SDL_SCANCODE_DELETE:
        return 89;
    case SDL_SCANCODE_END:
        return 105;
    case SDL_SCANCODE_PAGEDOWN:
        return 78;

    // Cursor keys
    case SDL_SCANCODE_UP:
        return 57;
    case SDL_SCANCODE_LEFT:
        return 25;
    case SDL_SCANCODE_DOWN:
        return 41;
    case SDL_SCANCODE_RIGHT:
        return 121;

    // Keypad
    case SDL_SCANCODE_NUMLOCKCLEAR:
        return 77;
    case SDL_SCANCODE_KP_DIVIDE:
        return 74;
    case SDL_SCANCODE_KP_MULTIPLY:
        return 91;
    case SDL_SCANCODE_KP_7:
        return 27;
    case SDL_SCANCODE_KP_8:
        return 42;
    case SDL_SCANCODE_KP_9:
        return 43;
    case SDL_SCANCODE_KP_MINUS:
        return 59;
    case SDL_SCANCODE_KP_4:
        return 122;
    case SDL_SCANCODE_KP_5:
        return 123;
    case SDL_SCANCODE_KP_6:
        return 26;
    case SDL_SCANCODE_KP_PLUS:
        return 58;
    case SDL_SCANCODE_KP_1:
        return 107;
    case SDL_SCANCODE_KP_2:
        return 123;
    case SDL_SCANCODE_KP_3:
        return 108;
    case SDL_SCANCODE_KP_ENTER:
        return 60;
    case SDL_SCANCODE_KP_0:
        return 106;
    case SDL_SCANCODE_KP_PERIOD:
        return 76;
    }
    return -1;
}
#endif