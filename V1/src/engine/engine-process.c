#include <stdio.h>

#include "engine.h"
#include "graphics.h"

int shoelace(shape_type *shape, face_type *face) {
    int x1 = (face->v1)->sx;
    int x2 = (face->v2)->sx;
    int x3 = (face->v3)->sx;
    int y1 = (face->v1)->sy;
    int y2 = (face->v2)->sy;
    int y3 = (face->v3)->sy;

    return ((x1 * y2) - (x2 * y1)) +
           ((x2 * y3) - (x3 * y2)) +
           ((x3 * y1) - (x1 * y3));
}

UINT32 make_colour(UINT32 original, float directional_ratio, float distance) {
    int ro = (original & 0x0000FF);
    int go = (original & 0x00FF00) >> 8;
    int bo = (original & 0xFF0000) >> 16;

    // Set ambient
    UINT32 r_out = ambient_light.r * ro;
    UINT32 g_out = ambient_light.g * go;
    UINT32 b_out = ambient_light.b * bo;

    // Mix in directional
    r_out += directional_light.r * directional_ratio * ro;
    g_out += directional_light.g * directional_ratio * go;
    b_out += directional_light.b * directional_ratio * bo;

    // Make sure we don't max out
    if (r_out > 255) r_out = 255;
    if (g_out > 255) g_out = 255;
    if (b_out > 255) b_out = 255;

    return (b_out << 16) + (g_out << 8) + r_out;
}

int process_object(shape_type *shape, renderable_type *visible_faces, int vis_index) {
    // Work out vertex visibility
    for (int i = 0; i < shape->number_of_vertices; i++) {
        vertex_type *vertex = &shape->vertex[i];

        // Cull close or far
        if (vertex->wz >= 0.0 || vertex->wz < -1500.0) {
            vertex->render = false;
        } else {
            vertex->render = true;
        }
    }

    // Face normals
    for (int i = 0; i < shape->number_of_faces; i++) {
        face_type *face = &shape->face[i];
        vertex_type *v1 = face->v1;
        vertex_type *v2 = face->v2;
        vertex_type *v3 = face->v3;

        if (!v1->render || !v2->render || !v3->render)
            continue;

        // Do shoelace test, more precise because it considers projection
        int sl = shoelace(shape, face);
        if (sl > 0) {
            continue;
        }

        // Set face colour based on normals
        float dp = calc_dot_product(face->nx, face->ny, face->nz, light_source.x, light_source.y, light_source.z);
        face->ls_colour = make_colour(face->colour, dp, 0.0);

        // Add to render list
        visible_faces[vis_index].face = face;
        visible_faces[vis_index].z = (v1->wz + v2->wz + v3->wz) / 3.0;
        //		visible_faces[vis_index].z = max3(v1->wz, v2->wz, v3->wz);
        vis_index++;
    }

    // Vertex - colour and project
    for (int i = 0; i < shape->number_of_vertices; i++) {
        vertex_type *vertex = &shape->vertex[i];
        if (!vertex->render)
            continue;

        // Calculate dot product to work out direction and therefore colour
        float dp = calc_dot_product(vertex->nx, vertex->ny, vertex->nz, light_source.x, light_source.y, light_source.z);
        vertex->ls_colour = make_colour(vertex->colour, dp, 0.0);

        // Now project into screen co-ordinates
        vertex->sx = x_origin + (vertex->wx * (1000.0 / vertex->wz));
        vertex->sy = y_origin - (vertex->wy * (1000.0 / vertex->wz));

#ifdef RENDER_NORMALS
        if (normals) {
            vertex->nsx = x_origin + (vertex->wnx * (1000.0 / vertex->wnz));
            vertex->nsy = y_origin - (vertex->wny * (1000.0 / vertex->wnz));
        }
#endif
    }
    return vis_index;
}
