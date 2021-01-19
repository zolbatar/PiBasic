#include "engine.h"

extern World world;

void Object::render() {
    // Position and scale in the 3d world
    Matrix matrix;
    matrix.identity();
    matrix.scale(scale);
    matrix.rotate(rotation);
    matrix.translate(position);
    world.shapes[shape_index].transform(matrix);

    matrix.identity();
    matrix.rotate(rotation);
    world.shapes[shape_index].transform_normals(matrix);

    // Now render
    world.shapes[shape_index].process(this->render_type);
}