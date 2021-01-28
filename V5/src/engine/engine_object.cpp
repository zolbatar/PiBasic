#include "engine.h"

void Object::render(std::vector<Shape>& shapes, WorldState& state, std::vector<RenderTriangle>& render_list)
{
    // Position and scale in the 3d world
    Matrix matrix;
    matrix.identity();
    matrix.scale(scale);
    matrix.rotate(rotation);
    matrix.translate(position);
    shapes[shape_index].transform(matrix);

    matrix.identity();
    matrix.rotate(rotation);
    shapes[shape_index].transform_normals(matrix);

    // Now render
    shapes[shape_index].process(render_type, state, render_list);
}