#include <stdio.h>

//Question-6: Check whether a character is an alphabet or not entered by the user from the keyboard.
/*
 * this code is just to learn how to use if-else statements
 * so please don't forget the rewriting for yourself and try to change variable names accordingly
 */
int main() {
    // Declare a variable for the character
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
