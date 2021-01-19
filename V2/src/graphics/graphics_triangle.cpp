#include "graphics.h"
#include <algorithm>
#include <iostream>

void Graphics::flat_triangle(int x1, int y1, int x2, int y2, int x3, int y3) {

    // Swap x?
    if (x2 > x3) {
        std::swap(x2, x3);
        std::swap(y2, y3);
    }

    // Bresenham left
    int x1_1 = x2;
    int y1_1 = y2;
    int x2_1 = x1;
    int y2_1 = y1;
    int dx_1 = abs(x2_1 - x1_1), sx_1 = x1_1 < x2_1 ? 1 : -1;
    int dy_1 = abs(y2_1 - y1_1), sy_1 = y1_1 < y2_1 ? 1 : -1;
    int err_1 = (dx_1 > dy_1 ? dx_1 : -dy_1) / 2;
    int e2_1;

    // Bresenham right
    int x1_2 = x3;
    int y1_2 = y3;
    int x2_2 = x1;
    int y2_2 = y1;
    int dx_2 = abs(x2_2 - x1_2), sx_2 = x1_2 < x2_2 ? 1 : -1;
    int dy_2 = abs(y2_2 - y1_2), sy_2 = y1_2 < y2_2 ? 1 : -1;
    int err_2 = (dx_2 > dy_2 ? dx_2 : -dy_2) / 2;
    int e2_2;

    // Longer edge?
    bool longer_edge = dx_1 > dx_2 ? 0 : 1;

    while (true) {
        draw_horz_line(x1_1, x1_2, y1_1);

        // Left
        if (longer_edge) {
            e2_1 = err_1;
            if (e2_1 > -dx_1) {
                err_1 -= dy_1;
                x1_1 += sx_1;
            }
            if (e2_1 < dy_1) {
                err_1 += dx_1;
                y1_1 += sy_1;
            }
            if (x1_1 == x2_1 && y1_1 == y2_1)
                return;
        } else {
            while (y1_1 != y1_2) {
                if (x1_1 == x2_1 && y1_1 == y2_1)
                    return;
                e2_1 = err_1;
                if (e2_1 > -dx_1) {
                    err_1 -= dy_1;
                    x1_1 += sx_1;
                }
                if (e2_1 < dy_1) {
                    err_1 += dx_1;
                    y1_1 += sy_1;
                }
            }
        }

        // Right
        if (!longer_edge) {
            e2_2 = err_2;
            if (e2_2 > -dx_2) {
                err_2 -= dy_2;
                x1_2 += sx_2;
            }
            if (e2_2 < dy_2) {
                err_2 += dx_2;
                y1_2 += sy_2;
            }
            if (x1_2 == x2_2 && y1_2 == y2_2)
                return;
        } else {
            while (y1_1 != y1_2) {
                if (x1_2 == x2_2 && y1_2 == y2_2)
                    return;
                e2_2 = err_2;
                if (e2_2 > -dx_2) {
                    err_2 -= dy_2;
                    x1_2 += sx_2;
                }
                if (e2_2 < dy_2) {
                    err_2 += dx_2;
                    y1_2 += sy_2;
                }
            }
        }
    }
}

void Graphics::triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    int minx = std::min(std::min(x1, x2), x3);
    int maxx = std::max(std::max(x1, x2), x3);
    int miny = std::min(std::min(y1, y2), y3);
    int maxy = std::max(std::max(y1, y2), y3);
    int width = maxx - minx;
    int height = maxy - miny;

    // Ignore offscreen and tiny
    if (width == 0 && height == 0)
        return;
    if (width == 1 && height == 1) {
        plot(minx, miny);
        return;
    }
    if (minx < minX && maxx < minX)
        return;
    if (minx > maxX && maxx > maxX)
        return;
    if (miny < minY && maxy < minY)
        return;
    if (miny > maxY && maxy > maxY)
        return;

    // Sort vertices
    if (y1 > y2) {
        std::swap(x1, x2);
        std::swap(y1, y2);
    }
    if (y1 > y3) {
        std::swap(x1, x3);
        std::swap(y1, y3);
    }
    if (y2 > y3) {
        std::swap(x2, x3);
        std::swap(y2, y3);
    }

    if (y2 == y3) {
        // Trivial bottom flat triangle
        flat_triangle(x1, y1, x2, y2, x3, y3);
    } else if (y1 == y2) {
        // Trivial top flat triangle
        flat_triangle(x3, y3, x1, y1, x2, y2);
    } else {
        // General case, split the triangle into a top flat and bottom flat one
        float p1 = static_cast<float>(y2 - y1);
        float p2 = static_cast<float>(y3 - y1);
        float p3 = static_cast<float>(x3 - x1);
        float p4 = p1 / p2;
        int x = static_cast<int>(x1 + p4 * p3);
        int y = y2;

        // Now render
        flat_triangle(x1, y1, x2, y2, x, y);
        flat_triangle(x3, y3, x2, y2, x, y);
    }
}
