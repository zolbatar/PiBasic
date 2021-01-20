#include "graphics.h"

void Graphics::eight_way_symmetric_plot(int xc, int yc, int x, int y, bool fill) {
    if (!fill) {
        plot(-x + xc, -y + yc);
        plot(x + xc, -y + yc);
        plot(-x + xc, y + yc);
        plot(x + xc, y + yc);
        plot(-y + xc, -x + yc);
        plot(y + xc, -x + yc);
        plot(y + xc, x + yc);
        plot(-y + xc, x + yc);
    } else {
        draw_horz_line(-x + xc, x + xc, -y + yc);
        draw_horz_line(-x + xc, x + xc, y + yc);
        draw_horz_line(-y + xc, y + xc, -x + yc);
        draw_horz_line(-y + xc, y + xc, x + yc);
    }
}

void Graphics::circle(int xc, int yc, int r, bool fill) {
    int x = 0, y = r, d = 3 - (2 * r);
    eight_way_symmetric_plot(xc, yc, x, y, fill);
    while (x <= y) {
        if (d <= 0) {
            d = d + (4 * x) + 6;
        } else {
            d = d + (4 * x) - (4 * y) + 10;
            y = y - 1;
        }
        x = x + 1;
        eight_way_symmetric_plot(xc, yc, x, y, fill);
    }
    if (!banked)
        flip(false);
}
