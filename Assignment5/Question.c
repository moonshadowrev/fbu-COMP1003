#include <stdio.h>

/*
 * This code is for educational purpose and direct use of this code is not recommended.
 */

// Function Prototypes
// These functions perform basic arithmetic operations.
double add(double, double);       // Function to add two numbers
double subtract(double, double);  // Function to subtract the second number from the first
double multiply(double, double);  // Function to multiply two numbers
double divide(double, double);    // Function to divide the first number by the second
void calculator(double (*func_arr[])(double, double));  // Function to handle calculator operations

// Main function: Entry point of the program
int main() {
    // Array of function pointers
    // Each element is a pointer to a function that takes two doubles and returns a double.
    double (*operations[4])(double, double) = {add, subtract, multiply, divide};

    // Call the calculator function with the operations array
    calculator(operations);

    return 0;
}

// Function Implementations

// Addition Function
// Parameters: a and b are the numbers to be added.
// Returns: The sum of a and b.
double add(double a, double b) {
    return a + b;
}

// Subtraction Function
// Parameters: a and b are the numbers, subtracts b from a.
// Returns: The difference of a and b.
double subtract(double a, double b) {
    return a - b;
}

// Multiplication Function
// Parameters: a and b are the numbers to be multiplied.
// Returns: The product of a and b.
double multiply(double a, double b) {
    return a * b;
}

// Division Function
// Parameters: a and b are the numbers, divides a by b.
// Returns: The quotient of a and b. If b is 0, prints an error and returns 0.
double divide(double a, double b) {
    if(b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}

// Calculator Function
// Parameters: func_arr is an array of function pointers to the arithmetic functions.
// This function asks the user to input two numbers and choose an operation.
// It then calls the appropriate arithmetic function and displays the result.
void calculator(double (*func_arr[])(double, double)) {
    double num1, num2;
    int choice;

    // User input for numbers
    printf("Enter two numbers: \n");
    scanf("%lf %lf", &num1, &num2);

    // User input for choosing the operation
    printf("Choose operation \n 1:Add \n 2:Subtract \n 3:Multiply \n 4:Divide: ");
    scanf("%d", &choice);

    // Validate the user's choice
    if(choice < 1 || choice > 4) {
        printf("Invalid choice\n");
        return;
    }

    // Call the selected operation and display the result
    double result = func_arr[choice - 1](num1, num2);
    printf("Result: %lf\n", result);
}
