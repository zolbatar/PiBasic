#pragma once
#pragma once
#include "../graphics/graphics.h"
#include "../vm/vm.h"
#include <cmath>
#include <map>
#include <memory>
#include <vector>

const static int RenderNormals = true;
const static int MaximumTriangles = 16384;

class Vector3 {
  public:
    Vector3(){};
    Vector3(VM_FLOAT x, VM_FLOAT y, VM_FLOAT z) : x(x), y(y), z(z){};
    VM_FLOAT x;
    VM_FLOAT y;
    VM_FLOAT z;
};

class Matrix {
  public:
    Matrix(){};
    void identity();
    void multiply(Matrix &result, Matrix &mat1, Matrix &mat2);
    void copy(Matrix &dest, Matrix &source);

    // Stuff to do cool 3D things
    void scale(VM_FLOAT sf);
    void translate(Vector3 t);
    void rotate(Vector3 r);

    VM_FLOAT matrix[4][4];
};

class Light {
  public:
    Vector3 direction;
    Colour colour;
};

class Vertex {
  public:
    Vertex(VM_FLOAT x, VM_FLOAT y, VM_FLOAT z, VM_INT _colour) {
        local.x = x;
        local.y = y;
        local.z = z;
        colour = _colour;
    }

    Vector3 local;              // Local co-ordinates (pre-transform)
    Vector3 world;              // World co-ordinates (post-transform)
    Colour colour;              // Vertex colour (for fancy shading)
    Colour colour_lightsourced; // Vertex colour (for fancy shading)
    int sx, sy;                 // Screen
    bool visible;               // Visibility check for mass culling0809
    Vector3 normal;             // Vertex normal
    Vector3 wnormal;            // Vertex normal in world co-ords
};

class Triangle {
  public:
    Triangle(){};
    void calc_normal(Vertex *v1, Vertex *v2, Vertex *v3);
    int vertex1;
    int vertex2;
    int vertex3;
    Colour colour;
    Colour colour_lightsourced;
    Vector3 normal;  // Triangle normal
    Vector3 wnormal; // Triangle normal in world co-ords
};

enum class RenderType { Solid, Baycentric, Wireframe, EdgedWireframe };

class RenderTriangle {
  public:
    RenderTriangle(VM_FLOAT z, int sx1, int sy1, int sx2, int sy2, int sx3, int sy3, Colour colour1, Colour colour2, Colour colour3, RenderType render_type)
        : z(z), sx1(sx1), sy1(sy1), sx2(sx2), sy2(sy2), sx3(sx3), sy3(sy3), colour1(colour1), colour2(colour2), colour3(colour3), render_type(render_type){};
    VM_FLOAT z;
    int sx1, sy1, sx2, sy2, sx3, sy3;
    Colour colour1;
    Colour colour2;
    Colour colour3;
    RenderType render_type;
};

class Shape {
  public:
    void transform(Matrix &matrix);
    void transform_normals(Matrix &matrix);
    void process(RenderType render_type);
    int shoelace(Vertex &v1, Vertex &v2, Vertex &v3);
    VM_FLOAT calc_dot_product(Vector3 v1, Vector3 v2) { return (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z); }
    void make_colour(Colour *original, Colour *result, VM_FLOAT directional_ratio, VM_FLOAT distance);
    void create_normals();
    std::vector<Vertex> vertices;
    std::vector<Triangle> triangles;
};

class Object {
  public:
    Object(){};
    void render();

    VM_INT shape_index;
    Vector3 position;
    Vector3 rotation;
    VM_FLOAT scale;
    RenderType render_type = RenderType::Solid;
};

class World {
  public:
    World() { render_list.reserve(MaximumTriangles); }
    UINT32 create_shape(Boxed &vertices, Boxed &triangles);
    UINT32 create_object(UINT32 index, VM_FLOAT x, VM_FLOAT y, VM_FLOAT z, VM_FLOAT rx, VM_FLOAT ry, VM_FLOAT rz, VM_FLOAT scale, VM_INT render_type);
    void object_translate(UINT32 index, VM_FLOAT x, VM_FLOAT y, VM_FLOAT z);
    void object_rotate(UINT32 index, VM_FLOAT x, VM_FLOAT y, VM_FLOAT z);
    void object_scale(UINT32 index, VM_FLOAT scale);
    void render(Graphics &graphics);

    std::vector<Shape> shapes;
    std::map<UINT32, Object> objects;
    UINT32 object_index = 0;
    int x_origin = 0;
    int y_origin = 0;
    Light ambient{Vector3(0, 0, 0), Colour(32, 32, 32)};
    Light directional{Vector3(0, -0.1, -0.9), Colour(255, 255, 255)};
    std::vector<RenderTriangle> render_list;
};

constexpr VM_FLOAT deg_to_rad(VM_FLOAT v) { return (v / 180.0 * M_PI); }
