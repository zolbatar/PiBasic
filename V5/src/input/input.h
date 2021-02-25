#pragma once
#include "../types.h"
#include <array>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <vector>

class Input
{
public:
	Input() {
		// Clear key buffer
		for (int i = 0; i < 256; i++) {
			key_pressed[i] = false;
		}
	}
	void poll();
	void RISCOS_debugger_key_check();
	VM_STRING input();
	VM_INT inkey(VM_INT timeout_or_keycode);
	VM_STRING inkeys(VM_INT timeout_or_keycode);
	VM_INT get();
	VM_STRING gets();
	void mouse(VM_INT* x, VM_INT* y, VM_INT* state);
private:
	std::queue<Event> key_events;
	std::queue<Event> mouse_events;
	std::array<bool, 256> key_pressed;

#ifndef RISCOS
	int key_riscos_translate(SDL_Keysym key);
#endif
};