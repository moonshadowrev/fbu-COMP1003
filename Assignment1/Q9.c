#include <stdio.h>

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
