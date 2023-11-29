#include "matrix_operations.h"

/**
 * Allocates memory for a matrix of a given size.
 *
 * @param rows Number of rows in the matrix.
 * @param cols Number of columns in the matrix.
 * @return Pointer to the allocated matrix.
 */
int **allocateMatrix(int rows, int cols) {
    // Allocate an array of pointers (for rows)
    int **mat = (int **)malloc(rows * sizeof(int *));

    // For each row, allocate an array of integers (for columns)
    for (int i = 0; i < rows; i++) {
        mat[i] = (int *)malloc(cols * sizeof(int));
    }

    // Return the pointer to the array of pointers (matrix)
    return mat;
}

/**
 * Frees memory allocated for a matrix.
 *
 * @param mat Pointer to the matrix to be freed.
 * @param rows Number of rows in the matrix.
 */
void freeMatrix(int **mat, int rows) {
    // Free each row
    for (int i = 0; i < rows; i++) {
        free(mat[i]);
    }

    // Finally, free the array of pointers
    free(mat);
}

/**
 * Multiplies two matrices and stores the result in a third matrix.
 *
 * @param result Pointer to the result matrix.
 * @param mat1 Pointer to the first input matrix.
 * @param rows1 Number of rows in the first matrix.
 * @param cols1 Number of columns in the first matrix.
 * @param mat2 Pointer to the second input matrix.
 * @param rows2 Number of rows in the second matrix.
 * @param cols2 Number of columns in the second matrix.
 */
void multiplyMatrices(int **result, int **mat1, int rows1, int cols1, int **mat2, int rows2, int cols2) {
    // Check if multiplication is possible (cols of first matrix == rows of second matrix)
    if (cols1 != rows2) {
        printf("Matrix dimensions do not match for multiplication\n");
        return;
    }

    // Perform the multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

/**
 * Adds two matrices and stores the result in a third matrix.
 *
 * @param result Pointer to the result matrix.
 * @param mat1 Pointer to the first input matrix.
 * @param mat2 Pointer to the second input matrix.
 * @param rows Number of rows in the matrices.
 * @param cols Number of columns in the matrices.
 */
void addMatrices(int **result, int **mat1, int **mat2, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

/**
 * Subtracts one matrix from another and stores the result in a third matrix.
 *
 * @param result Pointer to the result matrix.
 * @param mat1 Pointer to the first input matrix (minuend).
 * @param mat2 Pointer to the second input matrix (subtrahend).
 * @param rows Number of rows in the matrices.
 * @param cols Number of columns in the matrices.
 */
void subtractMatrices(int **result, int **mat1, int **mat2, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

/**
 * Multiplies a matrix by a scalar and stores the result in another matrix.
 *
 * @param result Pointer to the result matrix.
 * @param mat Pointer to the input matrix.
 * @param rows Number of rows in the matrix.
 * @param cols Number of columns in the matrix.
 * @param scalar The scalar value to multiply with.
 */
void scalarMultiplyMatrix(int **result, int **mat, int rows, int cols, int scalar) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat[i][j] * scalar;
        }
    }
}

/**
 * An alias for multiplyMatrices. It multiplies two matrices and stores the result.
 *
 * @param result Pointer to the result matrix.
 * @param mat1 Pointer to the first input matrix.
 * @param rows1 Number of rows in the first matrix.
 * @param cols1 Number of columns in the first matrix.
 * @param mat2 Pointer to the second input matrix.
 * @param rows2 Number of rows in the second matrix.
 * @param cols2 Number of columns in the second matrix.
 */
void matrixProduct(int **result, int **mat1, int rows1, int cols1, int **mat2, int rows2, int cols2) {
    multiplyMatrices(result, mat1, rows1, cols1, mat2, rows2, cols2);
}
