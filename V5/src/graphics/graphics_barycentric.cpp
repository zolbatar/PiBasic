#include "../types.h"
#include "graphics.h"
#include <algorithm>
#include <iostream>

int orient2d(const int xa, const int ya, const int xb, const int yb, const int xc, const int yc) {
    return (xb - xa) * (yc - ya) - (yb - ya) * (xc - xa);
}

void Graphics::gouraud_triangle(const int x1, const int y1, const int x2, const int y2, const int x3, const int y3, const UINT32 colour1, const UINT32 colour2,
                                const UINT32 colour3, bool flat) {
    // Bounding box
    int minXP = std::min({x1, x2, x3});
    int maxXP = std::max({x1, x2, x3});
    int minYP = std::min({y1, y2, y3});
    int maxYP = std::max({y1, y2, y3});

    // Zero size?
    if (minXP == maxXP || minYP == maxYP) {
        return;
    }

    // Clip to bounds
    minXP = std::max(minXP, minX);
    minYP = std::max(minYP, minY);
    maxXP = std::min(maxXP, maxX);
    maxYP = std::min(maxYP, maxY);

    // Triangle setup
    int A01 = y1 - y2, B01 = x2 - x1;
    int A12 = y2 - y3, B12 = x3 - x2;
    int A20 = y3 - y1, B20 = x1 - x3;

    // Barycentric coordinates at minX/minY corner
    int w0_row = orient2d(x2, y2, x3, y3, minXP, minYP);
    int w1_row = orient2d(x3, y3, x1, y1, minXP, minYP);
    int w2_row = orient2d(x1, y1, x2, y2, minXP, minYP);

    int r1, r2, r3, g1, g2, g3, b1, b2, b3;
    if (!flat) {
        r1 = colour1 & 0xFF;
        r2 = colour2 & 0xFF;
        r3 = colour3 & 0xFF;
        g1 = (colour1 & 0xFF00) >> 8;
        g2 = (colour2 & 0xFF00) >> 8;
        g3 = (colour3 & 0xFF00) >> 8;
        b1 = (colour1 & 0xFF0000) >> 16;
        b2 = (colour2 & 0xFF0000) >> 16;
        b3 = (colour3 & 0xFF0000) >> 16;
    }

    // Rasterise
    for (int y = minYP; y <= maxYP; y++) {
        VM_FLOAT sum = static_cast<VM_FLOAT>(w0_row) + static_cast<VM_FLOAT>(w1_row) + static_cast<VM_FLOAT>(w2_row);

        // Barycentric coordinates at start of row
        int w0 = w0_row;
        int w1 = w1_row;
        int w2 = w2_row;

        // Now go in from both sides and find the first pixel, then fast fill
        for (int x = minXP; x <= maxXP; x++) {
            bool test = (w0 | w1 | w2) >= 0;
            if (test) {

                // Build colour
                if (flat) {
                    plot(x, y);
                } else {
                    VM_FLOAT frac1 = w0 / sum;
                    VM_FLOAT frac2 = w1 / sum;
                    VM_FLOAT frac3 = w2 / sum;
                    int r = static_cast<int>(r1 * frac1 + r2 * frac2 + r3 * frac3);
                    int g = static_cast<int>(g1 * frac1 + g2 * frac2 + g3 * frac3);
                    int b = static_cast<int>(b1 * frac1 + b2 * frac2 + b3 * frac3);
                    colour(r, g, b);
                    plot(x, y);
                }
            }

            // One step to the right
            w0 += A12;
            w1 += A20;
            w2 += A01;
        }

        // One row step
        w0_row += B12;
        w1_row += B20;
        w2_row += B01;
    }
    if (!banked)
        flip(false);
}

void Graphics::gouraud_triangle_with_colour(const int x1, const int y1, const int x2, const int y2, const int x3, const int y3, const BYTE r1, const BYTE g1,
                                            const BYTE b1, const BYTE r2, const BYTE g2, const BYTE b2, const BYTE r3, const BYTE g3, const BYTE b3) {
    // Bounding box
    int minXP = std::min({x1, x2, x3});
    int maxXP = std::max({x1, x2, x3});
    int minYP = std::min({y1, y2, y3});
    int maxYP = std::max({y1, y2, y3});

    // Zero size?
    if (minXP == maxXP || minYP == maxYP) {
        return;
    }

    // Clip to bounds
    minXP = std::max(minXP, minX);
    minYP = std::max(minYP, minY);
    maxXP = std::min(maxXP, maxX);
    maxYP = std::min(maxYP, maxY);

    // Triangle setup
    int A01 = y1 - y2, B01 = x2 - x1;
    int A12 = y2 - y3, B12 = x3 - x2;
    int A20 = y3 - y1, B20 = x1 - x3;

    // Barycentric coordinates at minX/minY corner
    int w0_row = orient2d(x2, y2, x3, y3, minXP, minYP);
    int w1_row = orient2d(x3, y3, x1, y1, minXP, minYP);
    int w2_row = orient2d(x1, y1, x2, y2, minXP, minYP);

    // Rasterise
    for (int y = minYP; y <= maxYP; y++) {
        VM_FLOAT sum = static_cast<VM_FLOAT>(w0_row) + static_cast<VM_FLOAT>(w1_row) + static_cast<VM_FLOAT>(w2_row);

        // Barycentric coordinates at start of row
        int w0 = w0_row;
        int w1 = w1_row;
        int w2 = w2_row;

        // Now go in from both sides and find the first pixel, then fast fill
        for (int x = minXP; x <= maxXP; x++) {
            bool test = (w0 | w1 | w2) >= 0;
            if (test) {

                // Build colour
                VM_FLOAT frac1 = w0 / sum;
                VM_FLOAT frac2 = w1 / sum;
                VM_FLOAT frac3 = w2 / sum;
                int r = static_cast<int>(r1 * frac1 + r2 * frac2 + r3 * frac3);
                int g = static_cast<int>(g1 * frac1 + g2 * frac2 + g3 * frac3);
                int b = static_cast<int>(b1 * frac1 + b2 * frac2 + b3 * frac3);
                colour(r, g, b);
                plot(x, y);
            }

            // One step to the right
            w0 += A12;
            w1 += A20;
            w2 += A01;
        }

        // One row step
        w0_row += B12;
        w1_row += B20;
        w2_row += B01;
    }
    if (!banked)
        flip(false);
}
