#include "test.h"

#include <stdio.h>
#include <stdlib.h>

//#include "engine.h"
#include "graphics.h"
//#include "utils.h"

void line_test() {
    clear_screen(0);
    for (int xx = 0; xx < 5; xx++) {
        draw_horz_line(xx, (xx << 1) + 1, xx + 100, 255);
    }
    //	end_frame();
}

UINT32 random_colour() {
    return ((rand() % 255) << 16) + ((rand() % 255) << 8) + (rand() % 255);
}

void performance_test() {
    int width = screen_width - 1;
    int height = screen_height - 1;
    for (int i = 0; i < 1; i++) {
        clear_screen(0);
        set_clip(0, 0, width - 1, height);
        for (int xx = 0; xx < 500; xx++) {
            plot_pixel(rand() % width, rand() % height, random_colour());
        }
        for (int xx = 0; xx < 5000; xx++) {
            draw_line(rand() % width, rand() % height, rand() % height, rand() % height, random_colour());
        }

        for (int j = 0; j < 500; j++) {
            point_2d v0 = {rand() % width, rand() % height};
            point_2d v1 = {rand() % width, rand() % height};
            point_2d v2 = {rand() % width, rand() % height};
            draw_triangle(&v0, &v1, &v2, random_colour());
        }

        for (int j = 0; j < 50; j++) {
            point_2d v0 = {rand() % width, rand() % height};
            point_2d v1 = {rand() % width, rand() % height};
            point_2d v2 = {rand() % width, rand() % height};
            draw_gouraud_triangle(&v0, &v1, &v2, random_colour(), random_colour(), random_colour(), false);
        }

        end_frame();
    }
}