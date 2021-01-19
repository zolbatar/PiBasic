#include <math.h>
#include <stdio.h>

#include "engine.h"

void calc_normal(shape_type *shape, face_type *face) {
    float x1 = (face->v1)->lx / FIXED_MULTIPLY;
    float x2 = (face->v2)->lx / FIXED_MULTIPLY;
    float x3 = (face->v3)->lx / FIXED_MULTIPLY;
    float y1 = (face->v1)->ly / FIXED_MULTIPLY;
    float y2 = (face->v2)->ly / FIXED_MULTIPLY;
    float y3 = (face->v3)->ly / FIXED_MULTIPLY;
    float z1 = (face->v1)->lz / FIXED_MULTIPLY;
    float z2 = (face->v2)->lz / FIXED_MULTIPLY;
    float z3 = (face->v3)->lz / FIXED_MULTIPLY;

    // Generate normal
    face->onx = (y2 - y1) * (z3 - z1) - (z2 - z1) * (y3 - y1);
    face->ony = (z2 - z1) * (x3 - x1) - (x2 - x1) * (z3 - z1);
    face->onz = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);

    // Normalise, if != 0
    float l = sqrt(face->onx * face->onx + face->ony * face->ony + face->onz * face->onz);
    if (l != 0.0) {
        face->onx /= l;
        face->ony /= l;
        face->onz /= l;
    }
}

void create_normals(shape_type *shape) {
    // Reset normals
    for (int i = 0; i < shape->number_of_vertices; i++) {
        vertex_type *vertex = &shape->vertex[i];
        vertex->onx = 0.0;
        vertex->ony = 0.0;
        vertex->onz = 0.0;
    }

    // Face normals
    for (int i = 0; i < shape->number_of_faces; i++) {
        face_type *face = &shape->face[i];
        vertex_type *v1 = face->v1;
        vertex_type *v2 = face->v2;
        vertex_type *v3 = face->v3;

        // Calc face normal
        calc_normal(shape, face);

        // Add normals to each vertex
        v1->onx += face->onx;
        v2->onx += face->onx;
        v3->onx += face->onx;
        v1->ony += face->ony;
        v2->ony += face->ony;
        v3->ony += face->ony;
        v1->onz += face->onz;
        v2->onz += face->onz;
        v3->onz += face->onz;
    }

    // Vertex normals
    for (int i = 0; i < shape->number_of_vertices; i++) {
        vertex_type *vertex = &shape->vertex[i];

        float l = sqrt(vertex->onx * vertex->onx + vertex->ony * vertex->ony + vertex->onz * vertex->onz);
        if (l != 0) {
            vertex->onx /= l;
            vertex->ony /= l;
            vertex->onz /= l;
        }
    }
}
