// Include guard to prevent multiple inclusion of this header file
#ifndef MATRIX_OPERATIONS_H
#define MATRIX_OPERATIONS_H

// Include standard I/O library for printing to the console
#include <stdio.h>
// Include standard library for dynamic memory allocation
#include <stdlib.h>

/**
 * Multiplies two matrices and stores the result in a third matrix.
 *
 * @param result A pointer to the matrix where the result will be stored.
 * @param mat1 A pointer to the first matrix.
 * @param rows1 The number of rows in the first matrix.
 * @param cols1 The number of columns in the first matrix.
 * @param mat2 A pointer to the second matrix.
 * @param rows2 The number of rows in the second matrix.
 * @param cols2 The number of columns in the second matrix.
 */
void multiplyMatrices(int **result, int **mat1, int rows1, int cols1, int **mat2, int rows2, int cols2);

/**
 * Adds two matrices and stores the result in a third matrix.
 *
 * @param result A pointer to the matrix where the result will be stored.
 * @param mat1 A pointer to the first matrix.
 * @param mat2 A pointer to the second matrix.
 * @param rows The number of rows in each matrix.
 * @param cols The number of columns in each matrix.
 */
void addMatrices(int **result, int **mat1, int **mat2, int rows, int cols);

/**
 * Subtracts the second matrix from the first and stores the result in a third matrix.
 *
 * @param result A pointer to the matrix where the result will be stored.
 * @param mat1 A pointer to the matrix to be subtracted from (minuend).
 * @param mat2 A pointer to the matrix to subtract (subtrahend).
 * @param rows The number of rows in each matrix.
 * @param cols The number of columns in each matrix.
 */
void subtractMatrices(int **result, int **mat1, int **mat2, int rows, int cols);

/**
 * Multiplies a matrix by a scalar value and stores the result in another matrix.
 *
 * @param result A pointer to the matrix where the result will be stored.
 * @param mat A pointer to the matrix to be multiplied.
 * @param rows The number of rows in the matrix.
 * @param cols The number of columns in the matrix.
 * @param scalar The scalar value to multiply the matrix by.
 */
void scalarMultiplyMatrix(int **result, int **mat, int rows, int cols, int scalar);

/**
 * An alias for multiplyMatrices function. Multiples two matrices and stores the result.
 *
 * @param result A pointer to the matrix where the result will be stored.
 * @param mat1 A pointer to the first matrix.
 * @param rows1 The number of rows in the first matrix.
 * @param cols1 The number of columns in the first matrix.
 * @param mat2 A pointer to the second matrix.
 * @param rows2 The number of rows in the second matrix.
 * @param cols2 The number of columns in the second matrix.
 */
void matrixProduct(int **result, int **mat1, int rows1, int cols1, int **mat2, int rows2, int cols2);

/**
 * Allocates memory for a matrix of a specific size.
 *
 * @param rows The number of rows in the matrix.
 * @param cols The number of columns in the matrix.
 * @return A pointer to the allocated matrix.
 */
int **allocateMatrix(int rows, int cols);

/**
 * Frees the memory allocated for a matrix.
 *
 * @param mat A pointer to the matrix whose memory is to be freed.
 * @param rows The number of rows in the matrix.
 */
void freeMatrix(int **mat, int rows);

// End of the include guard
#endif
