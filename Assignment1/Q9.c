#include <stdio.h>

//Question-9: Enter student marks (scores) and find the grade according to the following rules:
//•	Ask the user to enter the 3 marks that are midterm, lab assignment, and final.
//•	The equation is: midterm x 30% + lab assignment x 20% + final x 50%
//•	Then print the corresponding grade according to the table shared in assignment document
/*
 * this code is just to learn how to use if-else statements
 * so please don't forget the rewriting for yourself and try to change variable names accordingly
 */
int main() {
    // Declare variables for the marks
    float midterm, lab, final, total;
    printf("Enter midterm, lab assignment, and final marks: ");
    scanf("%f %f %f", &midterm, &lab, &final);

    // Calculate total score
    total = midterm * 0.3 + lab * 0.2 + final * 0.5;

    // Output the total score
    printf("Total score: %.2f\n", total);

    // Determine and output the grade
    if (total >= 90) {
        printf("Grade: AA\n");
    } else if (total >= 85) {
        printf("Grade: BA\n");
    } else if (total >= 80) {
        printf("Grade: BB\n");
    } else if (total >= 70) {
        printf("Grade: CB\n");
    } else if (total >= 60) {
        printf("Grade: CC\n");
    } else if (total >= 55) {
        printf("Grade: DC\n");
    } else if (total >= 50) {
        printf("Grade: DD\n");
    } else if (total >= 40) {
        printf("Grade: FD\n");
    } else {
        printf("Grade: FF\n");
    }

    return 0;
}
