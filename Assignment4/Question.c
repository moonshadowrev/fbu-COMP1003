#include "matrix_operations.h"

int main() {
    // Requesting and obtaining matrix dimensions from the user
    int rows1, cols1, rows2, cols2;
    printf("Enter the dimensions of the first matrix (Rows, Columns): \n");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the dimensions of the second matrix (Rows, Columns): \n");
    scanf("%d %d", &rows2, &cols2);

    // Allocate memory for the first and second matrices
    int **mat1 = allocateMatrix(rows1, cols1);
    int **mat2 = allocateMatrix(rows2, cols2);
    int **result;

    // Initialize the first matrix (mat1) with sequential numbers
    int count = 1;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            mat1[i][j] = count++;
        }
    }

    // Initialize the second matrix (mat2) with sequential numbers
    count = 1;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            mat2[i][j] = count++;
        }
    }

    // Matrix Multiplication: mat1 * mat2
    // Allocate memory for the result of multiplication
    result = allocateMatrix(rows1, cols2);
    // Perform the multiplication
    multiplyMatrices(result, mat1, rows1, cols1, mat2, rows2, cols2);
    // Print the result
    printf("Result of Matrix Multiplication:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    // Free memory used for the multiplication result
    freeMatrix(result, rows1);

    // Ensure matrices are of the same size for Addition and Subtraction
    // Allocate memory for the result of addition/subtraction
    result = allocateMatrix(rows1, cols1);

    // Addition: mat1 + mat2
    addMatrices(result, mat1, mat2, rows1, cols1);
    printf("Result of Matrix Addition:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Subtraction: mat1 - mat2
    subtractMatrices(result, mat1, mat2, rows1, cols1);
    printf("Result of Matrix Subtraction:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    // Free memory used for the addition/subtraction result
    freeMatrix(result, rows1);

    // Scalar Multiplication: mat1 * scalar
    // Request and obtain scalar value from the user
    int scalar;
    printf("Enter the scalar to multiply the matrix with: \n");
    scanf("%d", &scalar);
    // Allocate memory for the result of scalar multiplication
    result = allocateMatrix(rows1, cols1);
    // Perform scalar multiplication
    scalarMultiplyMatrix(result, mat1, rows1, cols1, scalar);
    printf("Result of Scalar Multiplication by %d:\n", scalar);
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    // Free memory used for the scalar multiplication result
    freeMatrix(result, rows1);

    // Demonstrating matrixProduct (an alias for multiplyMatrices)
    // Allocate memory for the result of matrix product
    int **productResult = allocateMatrix(rows1, cols2);
    // Perform matrix multiplication using matrixProduct
    matrixProduct(productResult, mat1, rows1, cols1, mat2, rows2, cols2);
    // Print the result
    printf("Result of matrixProduct (Matrix Multiplication):\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", productResult[i][j]);
        }
        printf("\n");
    }
    // Free memory used for the matrix product result
    freeMatrix(productResult, rows1);

    // Free the allocated memory for the input matrices
    freeMatrix(mat1, rows1);
    freeMatrix(mat2, rows2);

    return 0;
}
