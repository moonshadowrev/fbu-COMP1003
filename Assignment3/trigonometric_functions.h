// trigonometric_functions.h
// This header file contains declarations for trigonometric functions
// that operate on angles in both degrees and radians.
// Note: This code is provided for educational purposes only.
// Copying this code for use in academic or other projects without
// understanding and modifying it for your specific needs is discouraged.

#ifndef TRIGONOMETRIC_FUNCTIONS_H
#define TRIGONOMETRIC_FUNCTIONS_H
// Function declarations for trigonometric functions with degrees as input
double sin_degree(double degree);
double cos_degree(double degree);
double tan_degree(double degree);

// Function declarations for trigonometric functions with radians as input
double sin_radian(double radian);
double cos_radian(double radian);
double tan_radian(double radian);

double csc_degree(double degree);
double sec_degree(double degree);

double csc_radian(double radian);
double sec_radian(double radian);

// Declaring a helper function to convert degree to radian
static inline double degree_to_radian(double degree) {
#define PI 3.14159265358979323846
    return degree * (PI / 180.0);
}


#endif // TRIGONOMETRIC_FUNCTIONS_H
