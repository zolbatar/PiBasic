#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "graphics.h"
#include "engine.h"
#include "mymath.h"

int render_mode = 0;
bool normals = false;

light_type ambient_light = { 0.1, 0.1, 0.1 };
light_type directional_light = { 1.0, 1.0, 1.0 };
vector3_type light_source = { 0.0, -0.1, -0.9 };

// This is the list of faces to render
int visible_count = 0;
renderable_type visible_faces[MAX_FACES];

int calculate_object_size(int number_of_vertices, int number_of_faces) {
	int size = sizeof(vertex_type) * number_of_vertices;
	size += sizeof(face_type) * number_of_faces;
	size += sizeof(shape_type);
	return size;
}

vertex_type create_vertex(float x, float y, float z) {
	vertex_type t;
	t.lx = x * FIXED_MULTIPLY;
	t.ly = y * FIXED_MULTIPLY;
	t.lz = z * FIXED_MULTIPLY;
	t.nx = 0.0;
	t.ny = 0.0;
	t.nz = 0.0;
	return t;
}

face_type create_face(vertex_type *vertices, int v1, int v2, int v3, UINT32 colour) {
	face_type f;
	f.v1 = &vertices[v1];
	f.v2 = &vertices[v2];
	f.v3 = &vertices[v3];
	f.nx = 0; f.ny = 0; f.nz = 0;
	f.colour = colour;
	return f;
}

// Various matrices for transformations
float matrix[4][4];

void matmult(float result[4][4], float mat1[4][4], float mat2[4][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			result[i][j] = 0;
			for (int k = 0; k < 4; k++) {
				result[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
}

void matcopy(float dest[4][4], float source[4][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			dest[i][j] = source[i][j];
		}
	}
}

void inittrans() {
	// Init master transformation matrix to the identity matrix

	matrix[0][0] = 1; matrix[0][1] = 0; matrix[0][2] = 0; matrix[0][3] = 0;
	matrix[1][0] = 0; matrix[1][1] = 1; matrix[1][2] = 0; matrix[1][3] = 0;
	matrix[2][0] = 0; matrix[2][1] = 0; matrix[2][2] = 1; matrix[2][3] = 0;
	matrix[3][0] = 0; matrix[3][1] = 0; matrix[3][2] = 0; matrix[3][3] = 1;
}

void scale(float sf) {
	float smat[4][4];
	float mat[4][4];

	// Init scaling matrix
	smat[0][0] = sf; smat[0][1] = 0;  smat[0][2] = 0;  smat[0][3] = 0;
	smat[1][0] = 0;  smat[1][1] = sf; smat[1][2] = 0;  smat[1][3] = 0;
	smat[2][0] = 0;  smat[2][1] = 0;  smat[2][2] = sf; smat[2][3] = 0;
	smat[3][0] = 0;  smat[3][1] = 0;  smat[3][2] = 0;  smat[3][3] = 1;

	// Concatenate with master matrix
	matmult(mat, smat, matrix);
	matcopy(matrix, mat);
}

void translate(float xt, float yt, float zt) {
	float tmat[4][4];
	float mat[4][4];

	// Create a translation matrix that will translate an object from screen origin

	// Init translation matrix
	tmat[0][0] = 1;  tmat[0][1] = 0;  tmat[0][2] = 0;   tmat[0][3] = 0;
	tmat[1][0] = 0;  tmat[1][1] = 1;  tmat[1][2] = 0;   tmat[1][3] = 0;
	tmat[2][0] = 0;  tmat[2][1] = 0;  tmat[2][2] = 1;   tmat[2][3] = 0;
	tmat[3][0] = xt; tmat[3][1] = yt; tmat[3][2] = zt;  tmat[3][3] = 1;

	// Concatenate with master matrix
	matmult(mat, matrix, tmat);
	matcopy(matrix, mat);
}

void rotate(int ax, int ay, int az) {
	float xmat[4][4];
	float ymat[4][4];
	float zmat[4][4];
	float mat1[4][4];
	float mat2[4][4];

	// Init rotate X matrix
	xmat[0][0] = 1; xmat[0][1] = 0;          xmat[0][2] = 0;         xmat[0][3] = 0;
	xmat[1][0] = 0; xmat[1][1] = cos_t[ax];  xmat[1][2] = sin_t[ax]; xmat[1][3] = 0;
	xmat[2][0] = 0; xmat[2][1] = -sin_t[ax]; xmat[2][2] = cos_t[ax]; xmat[2][3] = 0;
	xmat[3][0] = 0; xmat[3][1] = 0;          xmat[3][2] = 0;         xmat[3][3] = 1;
	matmult(mat1, xmat, matrix);

	// Init rotate Y matrix
	ymat[0][0] = cos_t[ay]; ymat[0][1] = 0; ymat[0][2] = -sin_t[ay]; ymat[0][3] = 0;
	ymat[1][0] = 0;         ymat[1][1] = 1; ymat[1][2] = 0;          ymat[1][3] = 0;
	ymat[2][0] = sin_t[ay]; ymat[2][1] = 0; ymat[2][2] = cos_t[ay];  ymat[2][3] = 0;
	ymat[3][0] = 0;         ymat[3][1] = 0; ymat[3][2] = 0;          ymat[3][3] = 1;
	matmult(mat2, ymat, mat1);

	// Init rotate Z matrix
	zmat[0][0] = cos_t[az];  zmat[0][1] = sin_t[az]; zmat[0][2] = 0; zmat[0][3] = 0;
	zmat[1][0] = -sin_t[az]; zmat[1][1] = cos_t[az]; zmat[1][2] = 0; zmat[1][3] = 0;
	zmat[2][0] = 0;          zmat[2][1] = 0;         zmat[2][2] = 1; zmat[2][3] = 0;
	zmat[3][0] = 0;          zmat[3][1] = 0;         zmat[3][2] = 0; zmat[3][3] = 1;
	matmult(matrix, zmat, mat2);
}

void transform(shape_type *shape) {
	for(int v = 0; v < (*shape).number_of_vertices; v++) {
		vertex_type *vptr = &(*shape).vertex[v];
		float lx = vptr->lx / FIXED_MULTIPLY;
		float ly = vptr->ly / FIXED_MULTIPLY;
		float lz = vptr->lz / FIXED_MULTIPLY;
		vptr->wx = lx * matrix[0][0] + ly * matrix[1][0] + lz * matrix[2][0] + matrix[3][0];
		vptr->wy = lx * matrix[0][1] + ly * matrix[1][1] + lz * matrix[2][1] + matrix[3][1];
		vptr->wz = lx * matrix[0][2] + ly * matrix[1][2] + lz * matrix[2][2] + matrix[3][2];

		#ifdef RENDER_NORMALS
		if (normals) {
			vptr->wnx = vptr->wx + (vptr->nx * 1.0);
			vptr->wny = vptr->wy + (vptr->ny * 1.0);
			vptr->wnz = vptr->wz + (vptr->nz * 1.0);
		}
		#endif
	}
}

void transform_normals(shape_type *shape) {
	for (int v = 0; v < (*shape).number_of_vertices; v++) {
		vertex_type *vptr = &(*shape).vertex[v];
		vptr->nx = vptr->onx * matrix[0][0] + vptr->ony * matrix[1][0] + vptr->onz * matrix[2][0] + matrix[3][0];
		vptr->ny = vptr->onx * matrix[0][1] + vptr->ony * matrix[1][1] + vptr->onz * matrix[2][1] + matrix[3][1];
		vptr->nz = vptr->onx * matrix[0][2] + vptr->ony * matrix[1][2] + vptr->onz * matrix[2][2] + matrix[3][2];
	}

	for (int i = 0; i < shape->number_of_faces; i++) {
		face_type *face = &shape->face[i];
		face->nx = face->onx * matrix[0][0] + face->ony * matrix[1][0] + face->onz * matrix[2][0] + matrix[3][0];
		face->ny = face->onx * matrix[0][1] + face->ony * matrix[1][1] + face->onz * matrix[2][1] + matrix[3][1];
		face->nz = face->onx * matrix[0][2] + face->ony * matrix[1][2] + face->onz * matrix[2][2] + matrix[3][2];
	}
}

float calc_dot_product(float x1, float y1, float z1, float x2, float y2, float z2) {
	return (x1 * x2) + (y1 * y2) + (z1 * z2);
}

int cmpfunc (const void* a, const void* b) {
	float az = ((renderable_type*)a)->z;
	float bz = ((renderable_type*)b)->z;
	return (az - bz);
}

void sort_triangles(int visible_count, renderable_type *visible_faces) {
	qsort(visible_faces, visible_count, sizeof(renderable_type), cmpfunc);
}

void set_normals_visibility(bool _normals) {
	normals = _normals;
}

void initialise_object(shape_type *shape) {
	create_normals(shape);
}

void transform_object(shape_type *shape, int tx, int ty, int tz, int rx, int ry, int rz, int scle) {
	shape->x = tx / FIXED_MULTIPLY;
	shape->y = ty / FIXED_MULTIPLY;
	shape->z = tz / FIXED_MULTIPLY;
	shape->rx = rx;// % 360;
	shape->ry = ry;// % 360;
	shape->rz = rz;// % 360;
	shape->scale = scle / FIXED_MULTIPLY;

	// Position and scale in the 3d world
	inittrans();
	scale(shape->scale);
	rotate(shape->rx, shape->ry, shape->rz);
	translate(shape->x, shape->y, shape->z);
	transform(shape);

	// Rotate normals
	inittrans();
	rotate(shape->rx, shape->ry, shape->rz);
	transform_normals(shape);
}

int render_object(shape_type *shape) {
	visible_count = process_object(shape, visible_faces, visible_count);
	draw_shape_normals(shape);	// Debug normal lines
	return visible_count;
}

int render_frame() {
	int saved_count = visible_count;
	sort_triangles(visible_count, visible_faces);
	draw_shape(visible_faces, visible_count);
	visible_count = 0;
	return saved_count;
}