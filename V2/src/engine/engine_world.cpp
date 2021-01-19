#include "engine.h"
#include <algorithm>
#include <fstream>
#include <iomanip>
World world;

//#define render_svg

UINT32 World::create_shape(Boxed &vertices, Boxed &triangles) {
    Shape shape;

    // Create and add vertices
    size_t count = vertices.fields.size() / 4;
    shape.vertices.reserve(count);
    for (size_t i = 0; i < count; i++) {
        VM_FLOAT x = vertices.fields[i * 4].value_float;
        VM_FLOAT y = vertices.fields[i * 4 + 1].value_float;
        VM_FLOAT z = vertices.fields[i * 4 + 2].value_float;
        VM_INT colour = vertices.fields[i * 4 + 3].value_int;
        Vertex v(x, y, z, colour);
        shape.vertices.push_back(std::move(v));
    }

    // Create and add triangles
    count = triangles.fields.size() / 4;
    shape.triangles.reserve(count);
    for (size_t i = 0; i < count; i++) {
        Triangle v;
        VM_INT v1 = triangles.fields[i * 4].value_int;
        v.vertex1 = v1;
        VM_INT v2 = triangles.fields[i * 4 + 1].value_int;
        v.vertex2 = v2;
        VM_INT v3 = triangles.fields[i * 4 + 2].value_int;
        v.vertex3 = v3;
        v.colour = triangles.fields[i * 4 + 3].value_int;
        shape.triangles.push_back(std::move(v));
    }

    // Build normals
    shape.create_normals();

    UINT32 index = static_cast<UINT32>(shapes.size());
    shapes.push_back(std::move(shape));
    return index;
}

UINT32 World::create_object(UINT32 index, VM_FLOAT x, VM_FLOAT y, VM_FLOAT z, VM_FLOAT rx, VM_FLOAT ry, VM_FLOAT rz, VM_FLOAT scale, VM_INT render_type) {
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
        o.render_type = RenderType::EdgedWireframe;
        break;
    };
    objects.insert(std::pair<UINT32, Object>(object_index++, std::move(o)));
    return object_index - 1;
}

void World::render(Graphics &graphics) {
    // Save colour
    UINT32 saved_colour = graphics.current_colour.hex;

    for (auto object = objects.begin(); object != objects.end(); ++object) {
        (*object).second.render();
    }

    // Sort triangles in depth order
    std::sort(render_list.begin(), render_list.end(), [](const RenderTriangle &a, const RenderTriangle &b) { return a.z < b.z; });

    // This is for creating an SVG file
#ifdef render_svg
    std::ofstream outfile("render.svg", std::ios::out | std::ios::trunc);
    outfile << "<svg width=\"" << graphics.get_screen_width() << "\" height = \"" << graphics.get_screen_height() << "\" xmlns=\"http://www.w3.org/2000/svg\">"
            << std::endl;
#endif

    // Render!
    for (auto triangle = render_list.begin(); triangle != render_list.end(); ++triangle) {
        switch (triangle->render_type) {
        case RenderType::Baycentric:
            graphics.gouraud_triangle_with_colour(triangle->sx1, triangle->sy1, triangle->sx3, triangle->sy3, triangle->sx2, triangle->sy2, triangle->colour1.r,
                                                  triangle->colour1.g, triangle->colour1.b, triangle->colour3.r, triangle->colour3.g, triangle->colour3.b,
                                                  triangle->colour2.r, triangle->colour2.g, triangle->colour2.b);
            break;
        case RenderType::Wireframe:
            graphics.colour(triangle->colour1.r, triangle->colour1.g, triangle->colour1.b);
            graphics.line(triangle->sx1, triangle->sy1, triangle->sx2, triangle->sy2);
            graphics.line(triangle->sx2, triangle->sy2, triangle->sx3, triangle->sy3);
            graphics.line(triangle->sx3, triangle->sy3, triangle->sx1, triangle->sy1);
            break;
        case RenderType::Solid:
            graphics.colour(triangle->colour1.r, triangle->colour1.g, triangle->colour1.b);
            graphics.triangle(triangle->sx1, triangle->sy1, triangle->sx2, triangle->sy2, triangle->sx3, triangle->sy3);
            break;
        case RenderType::EdgedWireframe:
            graphics.colour(triangle->colour1.r, triangle->colour1.g, triangle->colour1.b);
            graphics.triangle(triangle->sx1, triangle->sy1, triangle->sx2, triangle->sy2, triangle->sx3, triangle->sy3);
            graphics.colour_hex(saved_colour);
            graphics.line(triangle->sx1, triangle->sy1, triangle->sx2, triangle->sy2);
            graphics.line(triangle->sx2, triangle->sy2, triangle->sx3, triangle->sy3);
            graphics.line(triangle->sx3, triangle->sy3, triangle->sx1, triangle->sy1);
#ifdef render_svg
            outfile << std::dec << "<polygon points=\"" << triangle->sx1 << "," << triangle->sy1 << "," << triangle->sx2 << "," << triangle->sy2 << ","
                    << triangle->sx3 << "," << triangle->sy3 << "\" style=\"fill:#" << std::hex << std::setfill('0') << std::setw(2) << (int)triangle->colour1.r
                    << std::hex << std::setfill('0') << std::setw(2) << (int)triangle->colour1.g << std::hex << std::setfill('0') << std::setw(2)
                    << (int)triangle->colour1.b << "\"/>" << std::endl;
#endif
            break;
        }
    }

#ifdef render_svg
    outfile << "</svg>" << std::endl;
    outfile.close();
    exit(0);
#endif

    // Clear for next time
    render_list.clear();

    // Restore colour
    graphics.current_colour = saved_colour;
}

void World::object_translate(UINT32 index, VM_FLOAT x, VM_FLOAT y, VM_FLOAT z) {
    if (objects.count(index) == 0) {
        std::cout << "Can't find 3D object" << std::endl;
        std::exit(1);
    }
    auto object = &(*objects.find(index)).second;
    object->position.x = x;
    object->position.y = y;
    object->position.z = z;
}

void World::object_rotate(UINT32 index, VM_FLOAT x, VM_FLOAT y, VM_FLOAT z) {
    if (objects.count(index) == 0) {
        std::cout << "Can't find 3D object" << std::endl;
        std::exit(1);
    }
    auto object = &(*objects.find(index)).second;
    object->rotation.x = x;
    object->rotation.y = y;
    object->rotation.z = z;
}

void World::object_scale(UINT32 index, VM_FLOAT scale) {
    if (objects.count(index) == 0) {
        std::cout << "Can't find 3D object" << std::endl;
        std::exit(1);
    }
    auto object = &(*objects.find(index)).second;
    object->scale = scale;
}
