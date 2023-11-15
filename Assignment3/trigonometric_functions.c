// trigonometric_functions.c
// This source file contains definitions for trigonometric functions
// that operate on angles in both degrees and radians.
// Note: This code is provided for educational purposes only.
// Copying this code for use in academic or other projects without
// understanding and modifying it for your specific needs is discouraged.

#include "trigonometric_functions.h"
#include <math.h>

// Sine function that takes degrees as input and converts it to radians
double sin_degree(double degree) {
    return sin(degree_to_radian(degree));
}

// Cosine function that takes degrees as input and converts it to radians
double cos_degree(double degree) {
    return cos(degree_to_radian(degree));
}

// Tangent function that takes degrees as input and converts it to radians
double tan_degree(double degree) {
    return tan(degree_to_radian(degree));
}

// Sine function that takes radians as input
double sin_radian(double radian) {
    return sin(radian);
}

// Cosine function that takes radians as input
double cos_radian(double radian) {
    return cos(radian);
}

// Tangent function that takes radians as input
double tan_radian(double radian) {
    return tan(radian);
}

// Cosecant function that takes degrees as input
double csc_degree(double degree) {
    return 1.0 / sin_degree(degree);
}

// Secant function that takes degrees as input
double sec_degree(double degree) {
    return 1.0 / cos_degree(degree);
}

// Co secant function that takes radians as input
double csc_radian(double radian) {
    return 1.0 / sin_radian(radian);
}

// Secant function that takes radians as input
double sec_radian(double radian) {
    return 1.0 / cos_radian(radian);
}
