#include <stdio.h>

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
