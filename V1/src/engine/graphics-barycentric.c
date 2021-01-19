#include <stdio.h>
#include <stdlib.h>
#include "graphics.h"

int orient2d(const point_2d *a, const point_2d *b, const point_2d *c) {
	return (b->x - a->x)*(c->y - a->y) - (b->y - a->y)*(c->x - a->x);
}

void draw_gouraud_triangle(const point_2d *v0, const point_2d *v1, const point_2d *v2, UINT32 colour1, UINT32 colour2, UINT32 colour3, bool flat) {

	// Bounding box
	int minXP = min3(v0->x, v1->x, v2->x);
	int minYP = min3(v0->y, v1->y, v2->y);
	int maxXP = max3(v0->x, v1->x, v2->x);
	int maxYP = max3(v0->y, v1->y, v2->y);

	// Zero size?
	if (minXP == maxXP || minYP == maxYP) {
		return;
	}

	// Clip to bounds
	minXP = max2(minXP, minX);
	minYP = max2(minYP, minY);
	maxXP = min2(maxXP, maxX);
	maxYP = min2(maxYP, maxY);

	// Triangle setup
	int A01 = v0->y - v1->y, B01 = v1->x - v0->x;
	int A12 = v1->y - v2->y, B12 = v2->x - v1->x;
	int A20 = v2->y - v0->y, B20 = v0->x - v2->x;

	// Barycentric coordinates at minX/minY corner
	point_2d p = { minXP, minYP };
	int w0_row = orient2d(v1, v2, &p);
	int w1_row = orient2d(v2, v0, &p);
	int w2_row = orient2d(v0, v1, &p);

	int r1, r2, r3, g1, g2, g3, b1, b2, b3;
	if (!flat) {
		r1 = colour1 & 0xFF; r2 = colour2 & 0xFF; r3 = colour3 & 0xFF;
		g1 = (colour1 & 0xFF00) >> 8; g2 = (colour2 & 0xFF00) >> 8; g3 = (colour3 & 0xFF00) >> 8;
		b1 = (colour1 & 0xFF0000) >> 16; b2 = (colour2 & 0xFF0000) >> 16; b3 = (colour3 & 0xFF0000) >> 16;
	}

	// Rasterise
	for (p.y = minYP; p.y <= maxYP; p.y++) {
		float sum = w0_row + w1_row + w2_row;

		// Barycentric coordinates at start of row
		int w0 = w0_row;
		int w1 = w1_row;
		int w2 = w2_row;

		// Now go in from both sides and find the first pixel, then fast fill
		for (p.x = minXP; p.x <= maxXP; p.x++) {
			bool test = (w0 | w1 | w2) >= 0;
			if (test) {

				// Build colour
				if (flat) {
					plot_pixel(p.x, p.y, colour1);
				} else {
					float frac1 = w0 / sum;
					float frac2 = w1 / sum;
					float frac3 = w2 / sum;
					int r = r1 * frac1 + r2 * frac2 + r3 * frac3;
					int g = g1 * frac1 + g2 * frac2 + g3 * frac3;
					int b = b1 * frac1 + b2 * frac2 + b3 * frac3;
					UINT32 col = (b << 16) + (g << 8) + r;
					plot_pixel(p.x, p.y, col);
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
}
