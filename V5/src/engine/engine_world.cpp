#include "../environment.h"
#include "engine.h"
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>

extern Environment g_env;

UINT32 World::create_shape(Boxed* vertices, Boxed* triangles)
{
    Shape shape;

    // Create and add vertices
    size_t count = (vertices->get_fields_count() / 4) - 1;
    shape.vertices.reserve(count);
    for (size_t i = 0; i < count; i++) {
        VM_FLOAT x = vertices->get_field(i * 4)->get_float();
        VM_FLOAT y = vertices->get_field(i * 4 + 1)->get_float();
        VM_FLOAT z = vertices->get_field(i * 4 + 2)->get_float();
        VM_INT colour = vertices->get_field(i * 4 + 3)->get_integer();
        Vertex v(x, y, z, colour);
        shape.vertices.push_back(std::move(v));
    }

    // Create and add triangles
    count = (triangles->get_fields_count() / 4) - 1;
    shape.triangles.reserve(count);
    for (size_t i = 0; i < count; i++) {
        Triangle v;
        VM_INT v1 = triangles->get_field(i * 4)->get_integer();
        v.vertex1 = v1;
        VM_INT v2 = triangles->get_field(i * 4 + 1)->get_integer();
        v.vertex2 = v2;
        VM_INT v3 = triangles->get_field(i * 4 + 2)->get_integer();
        v.vertex3 = v3;
        UINT32 hex_colour = triangles->get_field(i * 4 + 3)->get_integer();
        v.colour = Colour(
            (hex_colour & 0xFF0000) >> 16,
            (hex_colour & 0x00FF00) >> 8,
            (hex_colour & 0x0000FF));
        shape.triangles.push_back(std::move(v));
    }

    // Build normals
    shape.create_normals();

    UINT32 index = static_cast<UINT32>(shapes.size());
    shapes.push_back(std::move(shape));
    return index;
}

UINT32 World::create_object(UINT32 index, VM_FLOAT x, VM_FLOAT y, VM_FLOAT z, VM_FLOAT rx, VM_FLOAT ry, VM_FLOAT rz, VM_FLOAT scale, VM_INT render_type)
{
    Object o;
    o.shape_index = index;
    o.position.x = x;
    o.position.y = y;
    o.position.z = z;
    o.rotation.x = rx;
    o.rotation.y = ry;
    o.rotation.z = rz;
    o.scale = scale;
    switch (render_type) {
    case 0:
        o.render_type = RenderType::Solid;
        break;
    case 1:
        o.render_type = RenderType::Wireframe;
        break;
    case 2:
        o.render_type = RenderType::Baycentric;
        break;
    case 3:
        o.render_type = RenderType::FILLEDWIREFRAME;
        break;
    };
    objects.insert(std::pair<UINT32, Object>(object_index++, std::move(o)));
    return object_index - 1;
}

void World::render()
{
    // Save colour
    auto saved_colour = g_env.graphics.current_colour;

    for (auto object = objects.begin(); object != objects.end(); ++object) {
        (*object).second.render(shapes, state, render_list);
    }
    // Sort triangles in depth order
    std::sort(render_list.begin(), render_list.end(), [](const RenderTriangle& a, const RenderTriangle& b) { return a.z < b.z; });

    // Render!
    for (auto triangle = render_list.begin(); triangle != render_list.end(); ++triangle) {
        switch (triangle->render_type) {
        case RenderType::Baycentric:
            g_env.graphics.gouraud_triangle_with_colour(triangle->sx1, triangle->sy1, triangle->sx3, triangle->sy3, triangle->sx2, triangle->sy2, triangle->colour1.get_r(),
                triangle->colour1.get_g(), triangle->colour1.get_b(), triangle->colour3.get_r(), triangle->colour3.get_g(), triangle->colour3.get_b(),
                triangle->colour2.get_r(), triangle->colour2.get_g(), triangle->colour2.get_b());
            break;
        case RenderType::Wireframe:
            g_env.graphics.colour(triangle->colour1.get_r(), triangle->colour1.get_g(), triangle->colour1.get_b());
            g_env.graphics.line(triangle->sx1, triangle->sy1, triangle->sx2, triangle->sy2);
            g_env.graphics.line(triangle->sx2, triangle->sy2, triangle->sx3, triangle->sy3);
            g_env.graphics.line(triangle->sx3, triangle->sy3, triangle->sx1, triangle->sy1);
            break;
        case RenderType::Solid:
            g_env.graphics.colour(255, 255, 255);
            g_env.graphics.colour(triangle->colour1.get_r(), triangle->colour1.get_g(), triangle->colour1.get_b());
            g_env.graphics.triangle(triangle->sx1, triangle->sy1, triangle->sx2, triangle->sy2, triangle->sx3, triangle->sy3);
            break;
        case RenderType::FILLEDWIREFRAME:
            g_env.graphics.colour(triangle->colour1.get_r(), triangle->colour1.get_g(), triangle->colour1.get_b());
            g_env.graphics.triangle(triangle->sx1, triangle->sy1, triangle->sx2, triangle->sy2, triangle->sx3, triangle->sy3);
            g_env.graphics.set_colour(saved_colour);
            g_env.graphics.line(triangle->sx1, triangle->sy1, triangle->sx2, triangle->sy2);
            g_env.graphics.line(triangle->sx2, triangle->sy2, triangle->sx3, triangle->sy3);
            g_env.graphics.line(triangle->sx3, triangle->sy3, triangle->sx1, triangle->sy1);
            break;
        }
    }

    // Clear for next time
    render_list.clear();

    // Restore colour
    g_env.graphics.current_colour = saved_colour;
}

void World::object_translate(UINT32 index, VM_FLOAT x, VM_FLOAT y, VM_FLOAT z)
{
    if (objects.count(index) == 0) {
        std::string s = "Can't find 3D object: " + std::to_string(index) +"\n";
        throw std::runtime_error(s);
    }
    auto object = &(*objects.find(index)).second;
    object->position.x = x;
    object->position.y = y;
    object->position.z = z;
}

void World::object_rotate(UINT32 index, VM_FLOAT x, VM_FLOAT y, VM_FLOAT z)
{
    if (objects.count(index) == 0) {
        std::string s = "Can't find 3D object: " + std::to_string(index) + "\n";
        throw std::runtime_error(s);
    }
    auto object = &(*objects.find(index)).second;
    object->rotation.x = x;
    object->rotation.y = y;
    object->rotation.z = z;
}

void World::object_delete(UINT32 index)
{
    if (objects.count(index) == 0) {
        std::string s = "Can't find 3D object: " + std::to_string(index) + "\n";
        throw std::runtime_error(s);
    }
    auto object = objects.find(index);
    objects.erase(object);
}

void World::object_scale(UINT32 index, VM_FLOAT scale)
{
    if (objects.count(index) == 0) {
        std::string s = "Can't find 3D object: " + std::to_string(index) + "\n";
        throw std::runtime_error(s);
    }
    auto object = &(*objects.find(index)).second;
    object->scale = scale;
}
