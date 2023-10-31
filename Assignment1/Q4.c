#include <stdio.h>

// Question-4: Check whether a given number is even or odd entered by the user from the keyboard.
/*
 * this code is just to learn how to use if-else statements
 * so please don't forget the rewriting for yourself and try to change variable names accordingly
 */
int main() {
    // Declare a variable to store the number
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
