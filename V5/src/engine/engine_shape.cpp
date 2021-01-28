#include "engine.h"
#include <math.h>

void Shape::transform(Matrix& matrix)
{
    for (auto vertex = vertices.begin(); vertex != vertices.end(); ++vertex) {
        vertex->world.x = vertex->local.x * matrix.matrix[0][0] + vertex->local.y * matrix.matrix[1][0] + vertex->local.z * matrix.matrix[2][0] + matrix.matrix[3][0];
        vertex->world.y = vertex->local.x * matrix.matrix[0][1] + vertex->local.y * matrix.matrix[1][1] + vertex->local.z * matrix.matrix[2][1] + matrix.matrix[3][1];
        vertex->world.z = vertex->local.x * matrix.matrix[0][2] + vertex->local.y * matrix.matrix[1][2] + vertex->local.z * matrix.matrix[2][2] + matrix.matrix[3][2];
    }
}

void Shape::transform_normals(Matrix& matrix)
{
    for (auto vertex = vertices.begin(); vertex != vertices.end(); ++vertex) {
        vertex->wnormal.x = vertex->normal.x * matrix.matrix[0][0] + vertex->normal.y * matrix.matrix[1][0] + vertex->normal.z * matrix.matrix[2][0] + matrix.matrix[3][0];
        vertex->wnormal.y = vertex->normal.x * matrix.matrix[0][1] + vertex->normal.y * matrix.matrix[1][1] + vertex->normal.z * matrix.matrix[2][1] + matrix.matrix[3][1];
        vertex->wnormal.z = vertex->normal.x * matrix.matrix[0][2] + vertex->normal.y * matrix.matrix[1][2] + vertex->normal.z * matrix.matrix[2][2] + matrix.matrix[3][2];
    }

    for (auto triangle = triangles.begin(); triangle != triangles.end(); ++triangle) {
        triangle->wnormal.x = triangle->normal.x * matrix.matrix[0][0] + triangle->normal.y * matrix.matrix[1][0] + triangle->normal.z * matrix.matrix[2][0] + matrix.matrix[3][0];
        triangle->wnormal.y = triangle->normal.x * matrix.matrix[0][1] + triangle->normal.y * matrix.matrix[1][1] + triangle->normal.z * matrix.matrix[2][1] + matrix.matrix[3][1];
        triangle->wnormal.z = triangle->normal.x * matrix.matrix[0][2] + triangle->normal.y * matrix.matrix[1][2] + triangle->normal.z * matrix.matrix[2][2] + matrix.matrix[3][2];
    }
}

void Shape::process(RenderType render_type, WorldState& state, std::vector<RenderTriangle>& render_list)
{
    for (auto vertex = vertices.begin(); vertex != vertices.end(); ++vertex) {
        vertex->visible = true;

        // Visibility check, cull close or far
        if (vertex->world.z >= 0.0 || vertex->world.z < -1500.0) {
            vertex->visible = false;
            continue;
        }

        // Set face colour based on normals
        if (render_type == RenderType::Baycentric) {
            VM_FLOAT dp = calc_dot_product(vertex->wnormal, state.directional.direction);
            make_colour(&vertex->colour, &vertex->colour_lightsourced, -dp, 0.0, state);
        }

        // Now project into screen co-ordinates
        vertex->sx = state.x_origin + static_cast<int>(round(vertex->world.x * (1000.0 / vertex->world.z)));
        vertex->sy = state.y_origin - static_cast<int>(round(vertex->world.y * (1000.0 / vertex->world.z)));
    }

    // Face normals
    for (auto triangle = triangles.begin(); triangle != triangles.end(); ++triangle) {
        auto v1 = &vertices[triangle->vertex1];
        auto v2 = &vertices[triangle->vertex2];
        auto v3 = &vertices[triangle->vertex3];

        if (!v1->visible || !v2->visible || !v3->visible)
            continue;

        // Do shoelace test, more precise because it considers projection
        int sl = shoelace(*v1, *v2, *v3);
        if (sl > 0)
            continue;

        // Set face colour based on normals
        VM_FLOAT dp = calc_dot_product(triangle->wnormal, state.directional.direction);
        make_colour(&triangle->colour, &triangle->colour_lightsourced, -dp, 0.0, state);

        // Add to render list
        auto z = (v1->world.z + v2->world.z + v3->world.z) / 3.0; // Maybe maximum??
        if (render_type == RenderType::Baycentric) {
            RenderTriangle t(z, v1->sx, v1->sy, v2->sx, v2->sy, v3->sx, v3->sy, v1->colour_lightsourced, v2->colour_lightsourced, v3->colour_lightsourced,
                render_type);
            render_list.push_back(std::move(t));
        } else {
            RenderTriangle t(z, v1->sx, v1->sy, v2->sx, v2->sy, v3->sx, v3->sy, triangle->colour_lightsourced, triangle->colour_lightsourced,
                triangle->colour_lightsourced, render_type);
            render_list.push_back(std::move(t));
        }
    }
}

int Shape::shoelace(Vertex& v1, Vertex& v2, Vertex& v3)
{
    int x1 = v1.sx;
    int x2 = v2.sx;
    int x3 = v3.sx;
    int y1 = v1.sy;
    int y2 = v2.sy;
    int y3 = v3.sy;

    return ((x1 * y2) - (x2 * y1)) + ((x2 * y3) - (x3 * y2)) + ((x3 * y1) - (x1 * y3));
}

void Shape::make_colour(Colour* original, Colour* result, VM_FLOAT directional_ratio, VM_FLOAT distance, WorldState& state)
{
    if (directional_ratio < 0) {
        result->r = 0;
        result->g = 0;
        result->b = 0;
        return;
    }
    UINT32 r = original->r;
    UINT32 g = original->g;
    UINT32 b = original->b;

    // Set ambient
    UINT32 ro = static_cast<UINT32>(r * (state.ambient.colour.r / 255.0));
    UINT32 go = static_cast<UINT32>(g * (state.ambient.colour.g / 255.0));
    UINT32 bo = static_cast<UINT32>(b * (state.ambient.colour.b / 255.0));

    // Mix in directional
    ro += static_cast<UINT32>((state.directional.colour.r / 255.0) * directional_ratio * r);
    go += static_cast<UINT32>((state.directional.colour.g / 255.0) * directional_ratio * g);
    bo += static_cast<UINT32>((state.directional.colour.b / 255.0) * directional_ratio * b);

    // Make sure we don't max out
    if (ro > 255)
        ro = 255;
    if (go > 255)
        go = 255;
    if (bo > 255)
        bo = 255;

    result->r = static_cast<BYTE>(ro);
    result->g = static_cast<BYTE>(go);
    result->b = static_cast<BYTE>(bo);
}