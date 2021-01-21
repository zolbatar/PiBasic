#include "../graphics/graphics.h"

class Interpreter {
public:
    Interpreter(Graphics* graphics)
        : graphics(graphics) {};
    void run();

private:
    Graphics* graphics;
};