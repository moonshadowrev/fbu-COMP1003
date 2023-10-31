#include <stdio.h>

//Question 2: Find out whether a given year is a leap year or not entered by the user from the keyboard.
/*
 * this code is just to learn how to use if-else statements
 * so please don't forget the rewriting for yourself and try to change variable names accordingly
 */
int main() {
    // Declare a variable to store the year
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check for leap year conditions
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
