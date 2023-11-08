// This file demonstrates the usage of custom trigonometric functions
// for both degrees and radians.
// Note: This code is provided for educational purposes only.
// Copying this code for use in academic or other projects without
// understanding and modifying it for your specific needs is discouraged.

#include <stdio.h>
#include "trigonometric_functions.h"

int main() {
    // Example angle in degrees
    double degree = 45.0;
    // Conversion of degree to radian for direct radian functions
    double radian = degree_to_radian(degree); // Note: degree_to_radian should be public or replicated here

    // Using the custom trigonometric functions that take degrees as input
    printf("sin(%f degrees) = %f\n", degree, sin_degree(degree));
    printf("cos(%f degrees) = %f\n", degree, cos_degree(degree));
    printf("tan(%f degrees) = %f\n", degree, tan_degree(degree));

    // Using the custom trigonometric functions that take radians as input
    printf("sin(%f radians) = %f\n", radian, sin_radian(radian));
    printf("cos(%f radians) = %f\n", radian, cos_radian(radian));
    printf("tan(%f radians) = %f\n", radian, tan_radian(radian));

    return 0;
}
