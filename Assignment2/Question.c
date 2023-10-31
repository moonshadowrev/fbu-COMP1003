#include <stdio.h>
#include <stdlib.h>

//Question : Try to print screen the below picture
//(You can use X instead of square) image in the assignment sheet
/*
 * this code is just to learn how to design a loop that just draws the matrix correctly
 * so please don't forget the rewriting for yourself and try to change variable names accordingly
 */
void printPattern(int size);

int main() {
    int size = 11;  // Define the size of the pattern
    printPattern(size);  // Call the function to print the pattern
    return 0;
}

/*
 * This function prints the pattern
 */
void printPattern(int size) {
    int mid = size / 2;  // Calculate the middle index

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Conditions to print 'x' at the required positions
            if (i + j == mid || j - i == mid || i - j == mid || i + j == size + mid - 1) {
                printf("x");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
