#include <stdio.h>

//Question 3: Check the sign of a given number that is entered by the user from the keyboard.
/*
 * this code is just to learn how to use if-else statements
 * so please don't forget the rewriting for yourself and try to change variable names accordingly
 */
int main() {
    // Declare a variable to store the number
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
