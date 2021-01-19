#include "engine.h"

void Matrix::identity() {
    // Init master transformation matrix to the identity matrix

    matrix[0][0] = 1;
    matrix[0][1] = 0;
    matrix[0][2] = 0;
    matrix[0][3] = 0;
    matrix[1][0] = 0;
    matrix[1][1] = 1;
    matrix[1][2] = 0;
    matrix[1][3] = 0;
    matrix[2][0] = 0;
    matrix[2][1] = 0;
    matrix[2][2] = 1;
    matrix[2][3] = 0;
    matrix[3][0] = 0;
    matrix[3][1] = 0;
    matrix[3][2] = 0;
    matrix[3][3] = 1;
}

void Matrix::multiply(Matrix &result, Matrix &mat1, Matrix &mat2) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result.matrix[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                result.matrix[i][j] += mat1.matrix[i][k] * mat2.matrix[k][j];
            }
        }
    }
}

void Matrix::copy(Matrix &dest, Matrix &source) {
    // memcpy(dest->matrix, source->matrix, sizeof(dest->matrix));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            dest.matrix[i][j] = source.matrix[i][j];
        }
    }
}

void Matrix::scale(VM_FLOAT sf) {
    Matrix smat;
    Matrix mat;

    // Init scaling matrix
    smat.matrix[0][0] = sf;
    smat.matrix[0][1] = 0;
    smat.matrix[0][2] = 0;
    smat.matrix[0][3] = 0;
    smat.matrix[1][0] = 0;
    smat.matrix[1][1] = sf;
    smat.matrix[1][2] = 0;
    smat.matrix[1][3] = 0;
    smat.matrix[2][0] = 0;
    smat.matrix[2][1] = 0;
    smat.matrix[2][2] = sf;
    smat.matrix[2][3] = 0;
    smat.matrix[3][0] = 0;
    smat.matrix[3][1] = 0;
    smat.matrix[3][2] = 0;
    smat.matrix[3][3] = 1;

    // Concatenate with master matrix
    multiply(mat, smat, *this);
    copy(*this, mat);
}

void Matrix::translate(Vector3 t) {
    Matrix tmat;
    Matrix mat;

    // Create a translation matrix that will translate an object from screen origin

    // Init translation matrix
    tmat.matrix[0][0] = 1;
    tmat.matrix[0][1] = 0;
    tmat.matrix[0][2] = 0;
    tmat.matrix[0][3] = 0;
    tmat.matrix[1][0] = 0;
    tmat.matrix[1][1] = 1;
    tmat.matrix[1][2] = 0;
    tmat.matrix[1][3] = 0;
    tmat.matrix[2][0] = 0;
    tmat.matrix[2][1] = 0;
    tmat.matrix[2][2] = 1;
    tmat.matrix[2][3] = 0;
    tmat.matrix[3][0] = t.x;
    tmat.matrix[3][1] = t.y;
    tmat.matrix[3][2] = t.z;
    tmat.matrix[3][3] = 1;

    // Concatenate with master matrix
    multiply(mat, *this, tmat);
    copy(*this, mat);
}

void Matrix::rotate(Vector3 r) {
    Matrix xmat;
    Matrix ymat;
    Matrix zmat;
    Matrix mat1;
    Matrix mat2;

    // Init rotate X matrix
    xmat.matrix[0][0] = 1;
    xmat.matrix[0][1] = 0;
    xmat.matrix[0][2] = 0;
    xmat.matrix[0][3] = 0;
    xmat.matrix[1][0] = 0;
    xmat.matrix[1][1] = std::cos(deg_to_rad(r.x));
    xmat.matrix[1][2] = std::sin(deg_to_rad(r.x));
    xmat.matrix[1][3] = 0;
    xmat.matrix[2][0] = 0;
    xmat.matrix[2][1] = -std::sin(deg_to_rad(r.x));
    xmat.matrix[2][2] = std::cos(deg_to_rad(r.x));
    xmat.matrix[2][3] = 0;
    xmat.matrix[3][0] = 0;
    xmat.matrix[3][1] = 0;
    xmat.matrix[3][2] = 0;
    xmat.matrix[3][3] = 1;
    multiply(mat1, xmat, *this);

    // Init rotate Y matrix
    ymat.matrix[0][0] = std::cos(deg_to_rad(r.y));
    ymat.matrix[0][1] = 0;
    ymat.matrix[0][2] = -std::sin(deg_to_rad(r.y));
    ymat.matrix[0][3] = 0;
    ymat.matrix[1][0] = 0;
    ymat.matrix[1][1] = 1;
    ymat.matrix[1][2] = 0;
    ymat.matrix[1][3] = 0;
    ymat.matrix[2][0] = std::sin(deg_to_rad(r.y));
    ymat.matrix[2][1] = 0;
    ymat.matrix[2][2] = std::cos(deg_to_rad(r.y));
    ymat.matrix[2][3] = 0;
    ymat.matrix[3][0] = 0;
    ymat.matrix[3][1] = 0;
    ymat.matrix[3][2] = 0;
    ymat.matrix[3][3] = 1;
    multiply(mat2, ymat, mat1);

    // Init rotate Z matrix
    zmat.matrix[0][0] = std::cos(deg_to_rad(r.z));
    zmat.matrix[0][1] = std::sin(deg_to_rad(r.z));
    zmat.matrix[0][2] = 0;
    zmat.matrix[0][3] = 0;
    zmat.matrix[1][0] = -std::sin(deg_to_rad(r.z));
    zmat.matrix[1][1] = std::cos(deg_to_rad(r.z));
    zmat.matrix[1][2] = 0;
    zmat.matrix[1][3] = 0;
    zmat.matrix[2][0] = 0;
    zmat.matrix[2][1] = 0;
    zmat.matrix[2][2] = 1;
    zmat.matrix[2][3] = 0;
    zmat.matrix[3][0] = 0;
    zmat.matrix[3][1] = 0;
    zmat.matrix[3][2] = 0;
    zmat.matrix[3][3] = 1;
    multiply(*this, zmat, mat2);
}
