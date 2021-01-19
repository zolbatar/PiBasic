#ifndef H_ENGINE
#define H_ENGINE
#include "pibasic.h"

#ifdef RISCOS
#include "kernel.h"
#include "swis.h"
#else
typedef struct
{
    int r[10];
} _kernel_swi_regs;
#endif

#define FIXED_SHIFT 8
#define FIXED_MULTIPLY 256.0
#define RENDER_NORMALS true
#define MAX_FACES 1000000

typedef struct {
    float x;
    float y;
    float z;
} vector3_type;

typedef struct {
    float r;
    float g;
    float b;
} light_type;

typedef struct {
    // To be accessed externally
    int lx, ly, lz;  // Local
    UINT32 colour;

    // Internal stuff
    float wx, wy, wz;  // World
    int sx, sy;        // Screen

    // Normals
    float onx, ony, onz;  // Original
    float nx, ny, nz;     // Rotated into world space

    // For displaying normals
#ifdef RENDER_NORMALS
    float wnx, wny, wnz;  // Normal adjusted in world
    float nsx, nsy;       // Normal unit length end screen co-ords
#endif

    bool render;
    UINT32 ls_colour;
} vertex_type;

typedef struct {
    // External stuff
    vertex_type *v1, *v2, *v3;
    UINT32 colour;

    // Normals
    float onx, ony, onz;  // Original
    float nx, ny, nz;

    // Actual colour based on lighting
    UINT32 ls_colour;
} face_type;

typedef struct {
    int number_of_vertices;
    int number_of_faces;
    vertex_type *vertex;
    face_type *face;
    float x, y, z;
    float rx, ry, rz;
    float scale;
} shape_type;

typedef struct {
    face_type *face;
    float z;
} renderable_type;

extern light_type ambient_light;
extern light_type directional_light;
extern vector3_type light_source;
extern int render_mode;
extern bool normals;
extern renderable_type visible_faces[];

void module_service(int service, _kernel_swi_regs *r);
int calculate_object_size(int number_of_vertices, int number_of_faces);
vertex_type create_vertex(float x, float y, float z);
face_type create_face(vertex_type *vertices, int v1, int v2, int v3, UINT32 colour);

// Matrices
void inittrans();
void scale(float sf);
void translate(float xt, float yt, float zt);
void rotate(int ax, int ay, int az);
void projection(float angle_of_view, float near, float far);
void transform(shape_type *shape);

float calc_dot_product(float x1, float y1, float z1, float x2, float y2, float z2);
void set_normals_visibility(bool _normals);

void initialise_object(shape_type *shape);
void transform_object(shape_type *shape, int tx, int ty, int tz, int rx, int ry, int rz, int scle);
void create_normals(shape_type *shape);
int render_object(shape_type *shape);
void draw_shape(renderable_type *visible_faces, int visible_count);
void draw_shape_normals(shape_type *shape);
int process_object(shape_type *shape, renderable_type *visible_faces, int vis_index);
int render_frame();
#endif
