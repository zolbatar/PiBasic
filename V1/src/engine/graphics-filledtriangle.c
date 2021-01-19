#include <stdio.h>
#include <stdlib.h>
#include "graphics.h"

void flat_triangle(point_2d *v0, point_2d *v1, point_2d *v2, UINT32 colour) {

	// Swap x?
	if (v1->x > v2->x) {
		point_2d *temp = v1; v1 = v2; v2 = temp;
	}

	// Bresenham left
	int x1_1 = v1->x;
	int y1_1 = v1->y;
	int x2_1 = v0->x;
	int y2_1 = v0->y;
	int dx_1 = abs(x2_1 - x1_1), sx_1 = x1_1 < x2_1 ? 1 : -1;
	int dy_1 = abs(y2_1 - y1_1), sy_1 = y1_1 < y2_1 ? 1 : -1;
	int err_1 = (dx_1 > dy_1 ? dx_1 : -dy_1) / 2;
	int e2_1;

	// Bresenham right
	int x1_2 = v2->x;
	int y1_2 = v2->y;
	int x2_2 = v0->x;
	int y2_2 = v0->y;
	int dx_2 = abs(x2_2 - x1_2), sx_2 = x1_2 < x2_2 ? 1 : -1;
	int dy_2 = abs(y2_2 - y1_2), sy_2 = y1_2 < y2_2 ? 1 : -1;
	int err_2 =(dx_2 > dy_2 ? dx_2 : -dy_2) / 2;
	int e2_2;

	// Longer edge?
	int longer_edge = dx_1 > dx_2 ? 0 : 1;

	while (true) {
		draw_horz_line(x1_1, x1_2, y1_1, colour);

		// Left
		if (longer_edge == 1) {
			e2_1 = err_1;
			if (e2_1 > -dx_1) { err_1 -= dy_1; x1_1 += sx_1; }
			if (e2_1 < dy_1) { err_1 += dx_1; y1_1 += sy_1; }
			if (x1_1 == x2_1 && y1_1 == y2_1) return;
		} else {
			while (y1_1 != y1_2) {
				if (x1_1 == x2_1 && y1_1 == y2_1) return;
				e2_1 = err_1;
				if (e2_1 > -dx_1) { err_1 -= dy_1; x1_1 += sx_1; }
				if (e2_1 < dy_1) { err_1 += dx_1; y1_1 += sy_1; }
			}
		}

		// Right
		if (longer_edge == 0) {
			e2_2 = err_2;
			if (e2_2 > -dx_2) { err_2 -= dy_2; x1_2 += sx_2; }
			if (e2_2 < dy_2) { err_2 += dx_2; y1_2 += sy_2; }
			if (x1_2 == x2_2 && y1_2 == y2_2) return;
		} else {
			while (y1_1 != y1_2) {
				if (x1_2 == x2_2 && y1_2 == y2_2) return;
				e2_2 = err_2;
				if (e2_2 > -dx_2) { err_2 -= dy_2; x1_2 += sx_2; }
				if (e2_2 < dy_2) { err_2 += dx_2; y1_2 += sy_2; }
			}
		}
	}
}

void draw_triangle_line(int x1, int y1, int x2, int y2, int *x_left, int *x_right, int miny) {
	int dx = abs(x2 - x1), sx = x1 < x2 ? 1 : -1;
	int dy = abs(y2 - y1), sy = y1 < y2 ? 1 : -1;
	int err = (dx > dy ? dx : -dy) / 2, e2;

	while (true) {
		int rely = y1 - miny;
		if (x_left[rely] > x1) x_left[rely] = x1;
		if (x_right[rely] < x1) x_right[rely] = x1;
		if (x1 == x2 && y1 == y2) return;
		e2 = err;
		if (e2 >-dx) { err -= dy; x1 += sx; }
		if (e2 < dy) { err += dx; y1 += sy; }
	}
}

void draw_triangle(point_2d *v0, point_2d *v1, point_2d *v2, UINT32 colour) {
	int minx = min3(v0->x, v1->x, v2->x);
	int maxx = max3(v0->x, v1->x, v2->x);
	int miny = min3(v0->y, v1->y, v2->y);
	int maxy = max3(v0->y, v1->y, v2->y);
	int width = maxx - minx;
	int height = maxy - miny;

	// Ignore offscreen and tiny
	if (width == 0 && height == 0) return;
	if (width == 1 && height == 1) {
		plot_pixel(minx, miny, colour);
		return;
	}
	if (minx < minX && maxx < minX) return;
	if (minx > maxX && maxx > maxX) return;
	if (miny < minY && maxy < minY) return;
	if (miny > maxY && maxy > maxY) return;

	// Sort vertices so that v0 is topmost
	if (v0->y > v1->y) {
		point_2d *temp = v0; v0 = v1; v1 = temp;
	}
	if (v0->y > v2->y) {
		point_2d *temp = v0; v0 = v2; v2 = temp;
	}
	if (v1->y > v2->y) {
		point_2d *temp = v1; v1 = v2; v2 = temp;
	}

	// Create arrays to store the left and right positions at each scanline
	int x_left[height];
	int x_right[height];
	for (int y = 0; y < height; y++) {
		x_left[y] = maxx;
		x_right[y] = minx;
	}

	// Go through each segment working out left and right extents for each scanline
	draw_triangle_line(v0->x, v0->y, v1->x, v1->y, (int *)&x_left, (int *)&x_right, miny);
	draw_triangle_line(v1->x, v1->y, v2->x, v2->y, (int *)&x_left, (int *)&x_right, miny);
	draw_triangle_line(v2->x, v2->y, v0->x, v0->y, (int *)&x_left, (int *)&x_right, miny);

	// Now render
	for (int y = 0; y < height; y++) {
		draw_horz_line(x_left[y], x_right[y], y + miny, colour);
	}
}

void _draw_triangle(point_2d *v0, point_2d *v1, point_2d *v2, UINT32 colour) {
	int minx = min3(v0->x, v1->x, v2->x);
	int maxx = max3(v0->x, v1->x, v2->x);
	int miny = min3(v0->y, v1->y, v2->y);
	int maxy = max3(v0->y, v1->y, v2->y);
	int width = maxx - minx;
	int height = maxy - miny;

	// Ignore offscreen and tiny
	if (width == 0 && height == 0) return;
	if (width == 1 && height == 1) {
		plot_pixel(minx, miny, colour);
		return;
	}
	if (minx < minX && maxx < minX) return;
	if (minx > maxX && maxx > maxX) return;
	if (miny < minY && maxy < minY) return;
	if (miny > maxY && maxy > maxY) return;

	// Sort vertices so that v0 is topmost
	if (v0->y > v1->y) {
		point_2d *temp = v0; v0 = v1; v1 = temp;
	}
	if (v0->y > v2->y) {
		point_2d *temp = v0; v0 = v2; v2 = temp;
	}
	if (v1->y > v2->y) {
		point_2d *temp = v1; v1 = v2; v2 = temp;
	}

	if (v1->y == v2->y) {
		// Trivial bottom flat triangle
		flat_triangle(v0, v1, v2, colour);
	} else if (v0->y == v1->y) {
		// Trivial top flat triangle
		flat_triangle(v2, v0, v1, colour);
	} else {
		// General case, split the triangle into a top flat and bottom flat one
		point_2d v3;
		v3.x = v0->x + ((float)(v1->y - v0->y) / (float)(v2->y - v0->y)) * (v2->x - v0->x);
		v3.y = v1->y;

		// Now render
		flat_triangle(v0, v1, &v3, colour);
		flat_triangle(v2, v1, &v3, colour);
	}
}
