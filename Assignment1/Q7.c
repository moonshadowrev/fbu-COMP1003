#include <stdio.h>

// Question-7: Check a character to whether vowel or consonant that entered by the user from the keyboard.
/*
 * this code is just to learn how to use switch statements
 * so please don't forget the rewriting for yourself and try to change variable names accordingly
 */
int main() {
    // Declare a variable for the character
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is a vowel or consonant
    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
            break;
    }

    return 0;
}
