// This file demonstrates the usage of function pointers
// 
// Note: This code is provided for educational purposes only.
// Copying this code for use in academic or other projects without
// understanding and modifying it for your specific needs is discouraged.
#include <stdio.h>

// Operations functions
int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    }
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

// Calculate function
int calculator(int (*p[4])(int, int), int a, int b, char operation) {
    int result;

    // Calls the needed function, depending on the chosen operation
    switch (operation) {
    case '+':
        result = p[0](a, b);
        break;
    case '-':
        result = p[1](a, b);
        break;
    case '*':
        result = p[2](a, b);
        break;
    case '/':
        result = p[3](a, b);
        break;
    default:
        printf("Error: Invalid operation\n");
        result = 0;
    }

    return result;
}

int main() {
    // Initializing an array of function pointers with all the operations functions
    int (*p[4])(int, int) = { &sum, &subtract, &multiply, &divide };

    int a = 0;
    int b = 0;
    char operation;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("Operation (+, -, /, *): ");
    scanf(" %c", &operation);

    int result = calculator(p, a, b, operation);

    printf("Result: %d\n", result);

    return 0;
}
