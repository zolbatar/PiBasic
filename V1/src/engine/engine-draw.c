#include <stdio.h>
#include "graphics.h"
#include "engine.h"

void draw_shape(renderable_type *visible_faces, int visible_count) {
	for (int i = 0; i < visible_count; i++) {
		face_type *face = visible_faces[i].face;

		vertex_type *v1 = face->v1;
		vertex_type *v2 = face->v2;
		vertex_type *v3 = face->v3;

		// Off screen?
		if (v1->sx < minX && v2->sx < minX && v3->sx < minX) continue;
		if (v1->sx > maxX && v2->sx > maxX && v3->sx > maxX) continue;
		if (v1->sy < minY && v2->sy < minY && v3->sy < minY) continue;
		if (v1->sy > maxY && v2->sy > maxY && v3->sy > maxY) continue;

		point_2d v0p = { v1->sx, v1->sy };
		point_2d v1p = { v2->sx, v2->sy };
		point_2d v2p = { v3->sx, v3->sy };

		// Render options
		if (render_mode == 0) {
			// Don't render, useful to test speed of calculations
		} else if (render_mode == 1) {
			draw_line(v1->sx, v1->sy, v2->sx, v2->sy, face->colour);
			draw_line(v1->sx, v1->sy, v3->sx, v3->sy, face->colour);
			draw_line(v2->sx, v2->sy, v3->sx, v3->sy, face->colour);
		} else if (render_mode == 2) {
			draw_gouraud_triangle(&v2p, &v1p, &v0p, face->ls_colour, face->ls_colour, face->ls_colour, true);
		} else if (render_mode == 3) {
			draw_gouraud_triangle(&v2p, &v1p, &v0p, v3->ls_colour, v2->ls_colour, v1->ls_colour, false);
		} else if (render_mode == 4) {
			draw_triangle(&v0p, &v1p, &v2p, face->ls_colour);
		} else {
			draw_triangle(&v0p, &v1p, &v2p, 0x200000);
			draw_line(v1->sx, v1->sy, v2->sx, v2->sy, face->colour);
			draw_line(v1->sx, v1->sy, v3->sx, v3->sy, face->colour);
			draw_line(v2->sx, v2->sy, v3->sx, v3->sy, face->colour);
		}
	}
}

void draw_shape_normals(shape_type *shape) {
	#ifdef RENDER_NORMALS
	if (normals) {
		for (int i = 0; i < shape->number_of_vertices; i++) {
			vertex_type *v = &shape->vertex[i];
			draw_line(v->sx, v->sy, v->nsx, v->nsy, 0xFF00);
		}
	}
	#endif
}
