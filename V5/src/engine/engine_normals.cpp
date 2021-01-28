#include "engine.h"

void Triangle::calc_normal(Vertex *v1, Vertex *v2, Vertex *v3) {
    // Generate normal
    normal.x = (v2->local.y - v1->local.y) * (v3->local.z - v1->local.z) - (v2->local.z - v1->local.z) * (v3->local.y - v1->local.y);
    normal.y = (v2->local.z - v1->local.z) * (v3->local.x - v1->local.x) - (v2->local.x - v1->local.x) * (v3->local.z - v1->local.z);
    normal.z = (v2->local.x - v1->local.x) * (v3->local.y - v1->local.y) - (v2->local.y - v1->local.y) * (v3->local.x - v1->local.x);

    // Normalise, if != 0
    VM_FLOAT l = sqrt(normal.x * normal.x + normal.y * normal.y + normal.z * normal.z);
    if (l != 0.0) {
        normal.x /= l;
        normal.y /= l;
        normal.z /= l;
    }
}

void Shape::create_normals() {
    // Reset normals
    for (auto vertex = vertices.begin(); vertex != vertices.end(); ++vertex) {
        vertex->normal.x = 0.0;
        vertex->normal.y = 0.0;
        vertex->normal.z = 0.0;
    }

    // Face normals
    for (auto triangle = triangles.begin(); triangle != triangles.end(); ++triangle) {
        auto v1 = &vertices[triangle->vertex1];
        auto v2 = &vertices[triangle->vertex2];
        auto v3 = &vertices[triangle->vertex3];

        // Calc face normal
        triangle->calc_normal(v1, v2, v3);

        // Add normals to each vertex
        v1->normal.x += triangle->normal.x;
        v2->normal.x += triangle->normal.x;
        v3->normal.x += triangle->normal.x;
        v1->normal.y += triangle->normal.y;
        v2->normal.y += triangle->normal.y;
        v3->normal.y += triangle->normal.y;
        v1->normal.z += triangle->normal.z;
        v2->normal.z += triangle->normal.z;
        v3->normal.z += triangle->normal.z;
    }

    // Vertex normals, normalise
    for (auto vertex = vertices.begin(); vertex != vertices.end(); ++vertex) {

        VM_FLOAT l = sqrt(vertex->normal.x * vertex->normal.x + vertex->normal.y * vertex->normal.y + vertex->normal.z * vertex->normal.z);
        if (l != 0) {
            vertex->normal.x /= l;
            vertex->normal.y /= l;
            vertex->normal.z /= l;
        }
    }
}
