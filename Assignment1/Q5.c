#include <stdio.h>

//Question-5: Check whether a triangle is equilateral, scalene, or isosceles that angels entered from the keyboard by the user.

/*
 * this code is just to learn how to use if-else statements
 * so please don't forget the rewriting for yourself and try to change variable names accordingly
 */
int main() {
    // Declare variables for the angles of the triangle
    int angle1, angle2, angle3;
    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    // Check for equilateral, scalene, or isosceles
    if (angle1 == angle2 && angle2 == angle3) {
        printf("The triangle is equilateral.\n");
    } else if (angle1 != angle2 && angle2 != angle3 && angle1 != angle3) {
        printf("The triangle is scalene.\n");
    } else {
        printf("The triangle is isosceles.\n");
    }

    return 0;
}
