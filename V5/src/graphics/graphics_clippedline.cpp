#include "graphics.h"
#include <iostream>
#include <cmath>

void Graphics::draw_line_raw(int x1, int y1, int x2, int y2) {
    int dx = std::abs(x2 - x1), sx = x1 < x2 ? 1 : -1;
    int dy = std::abs(y2 - y1), sy = y1 < y2 ? 1 : -1;
    int err = (dx > dy ? dx : -dy) / 2, e2;

    while (true) {
        plot(x1, y1);
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

// Compute the bit code for a point (x, y) using the clip rectangle
// bounded diagonally by (minX, minY), and (maxX, maxY)
// ASSUME THAT maxX, minX, maxY and minY are global constants.
OutCode Graphics::ComputeOutCode(int x, int y) {
    OutCode code;
    code = INSIDE; // initialised as being inside of [[clip window]]
    if (x < minX)  // to the left of clip window
        code |= LEFT;
    else if (x > maxX) // to the right of clip window
        code |= RIGHT;
    if (y < minY) // below the clip window
        code |= BOTTOM;
    else if (y > maxY) // above the clip window
        code |= TOP;
    return code;
}

// Cohen-Sutherland clipping algorithm clips a line from
// P0 = (x0, y0) to P1 = (x1, y1) against a rectangle with
// diagonal from (minX, minY) to (maxX, maxY).
void Graphics::line(int x0, int y0, int x1, int y1) {

#ifdef WINDOWS
    if (USE_RENDERER) {
        SDL_SetRenderDrawColor(renderer, current_colour.get_r(), current_colour.get_g(), current_colour.get_b(), SDL_ALPHA_OPAQUE);
        SDL_RenderDrawLine(renderer, x0, y0, x1, y1);
        return;
    }
#endif

    // compute outcodes for P0, P1, and whatever point lies outside the clip rectangle
    OutCode outcode0 = ComputeOutCode(x0, y0);
    OutCode outcode1 = ComputeOutCode(x1, y1);
    bool accept = false;

    while (true) {
        if (!(outcode0 | outcode1)) {
            // bitwise OR is 0: both points inside window; trivially accept and exit loop
            accept = true;
            break;
        } else if (outcode0 & outcode1) {
            // bitwise AND is not 0: both points share an outside zone (LEFT, RIGHT, TOP,
            // or BOTTOM), so both must be outside window; exit loop (accept is false)
            break;
        } else {
            // failed both tests, so calculate the line segment to clip
            // from an outside point to an intersection with clip edge
            int x, y;

            // At least one endpoint is outside the clip rectangle; pick it.
            OutCode outcodeOut = outcode0 ? outcode0 : outcode1;

            // Now find the intersection point;
            // use formulas:
            //   slope = (y1 - y0) / (x1 - x0)
            //   x = x0 + (1 / slope) * (ym - y0), where ym is minY or maxY
            //   y = y0 + slope * (xm - x0), where xm is minX or maxX
            // No need to worry about divide-by-zero because, in each case, the
            // outcode bit being tested guarantees the denominator is non-zero
            if (outcodeOut & TOP) { // point is above the clip window
                x = x0 + (x1 - x0) * (maxY - y0) / (y1 - y0);
                y = maxY;
            } else if (outcodeOut & BOTTOM) { // point is below the clip window
                x = x0 + (x1 - x0) * (minY - y0) / (y1 - y0);
                y = minY;
            } else if (outcodeOut & RIGHT) { // point is to the right of clip window
                y = y0 + (y1 - y0) * (maxX - x0) / (x1 - x0);
                x = maxX;
            } else if (outcodeOut & LEFT) { // point is to the left of clip window
                y = y0 + (y1 - y0) * (minX - x0) / (x1 - x0);
                x = minX;
            } else {
                // Unneeded, to avoid compiler warnings
                x = 0;
                y = 0;
            }

            // Now we move outside point to intersection point to clip
            // and get ready for next pass.
            if (outcodeOut == outcode0) {
                x0 = x;
                y0 = y;
                outcode0 = ComputeOutCode(x0, y0);
            } else {
                x1 = x;
                y1 = y;
                outcode1 = ComputeOutCode(x1, y1);
            }
        }
    }

    if (accept) {
        draw_line_raw(x0, y0, x1, y1);
        if (!banked)
            flip(false);
    }
}
