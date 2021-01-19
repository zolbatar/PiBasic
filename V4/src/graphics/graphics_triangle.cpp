#include "graphics.h"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

void draw_triangle_line(int x1, int y1, int x2, int y2, std::vector<int>& x_left, std::vector<int>& x_right, int miny)
{
    int dx = abs(x2 - x1), sx = x1 < x2 ? 1 : -1;
    int dy = abs(y2 - y1), sy = y1 < y2 ? 1 : -1;
    int err = (dx > dy ? dx : -dy) / 2, e2;

    while (true) {
        int rely = y1 - miny;
        if (x_left[rely] > x1)
            x_left[rely] = x1;
        if (x_right[rely] < x1)
            x_right[rely] = x1;
        if (x1 == x2 && y1 == y2)
            return;
        e2 = err;
        if (e2 > -dx) {
            err -= dy;
            x1 += sx;
        }
        if (e2 < dy) {
            err += dx;
            y1 += sy;
        }
    }
}

void Graphics::triangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int minx = std::min(std::min(x1, x2), x3);
    int maxx = std::max(std::max(x1, x2), x3);
    int miny = std::min(std::min(y1, y2), y3);
    int maxy = std::max(std::max(y1, y2), y3);
    int width = maxx - minx;
    int height = maxy - miny;

    // Ignore offscreen and tiny
    if (width == 0 || height == 0)
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

    // Create arrays to store the left and right positions at each scanline
    std::vector<int> x_left(height + 1);
    std::vector<int> x_right(height + 1);
    for (int y = 0; y < height; y++) {
        x_left[y] = maxx;
        x_right[y] = minx;
    }   

    // Go through each segment working out left and right extents for each scanline
    draw_triangle_line(x1, y1, x2, y2, x_left, x_right, miny);
    draw_triangle_line(x2, y2, x3, y3, x_left, x_right, miny);  
    draw_triangle_line(x3, y3, x1, y1, x_left, x_right, miny);

    // Now render
    for (int y = 0; y < height; y++) {
        draw_horz_line(x_left[y], x_right[y], y + miny);
    }
}
