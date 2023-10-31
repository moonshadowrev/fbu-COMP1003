#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declare variables for number and loop counter
    int num, i;
    bool isPrime = true;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (num <= 1) {
        isPrime = false;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
