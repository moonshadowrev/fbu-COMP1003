#include <stdio.h>

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
