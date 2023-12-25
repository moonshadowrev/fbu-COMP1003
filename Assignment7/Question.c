#include <stdio.h>
#define STUDENTS_NUMBER 3

// Student structure
struct Student {
    int studentID;
    double midterm;
    double lab;
    double project;
    double final;
    double mark; // Calculated mark
};

int GetHighestMark(struct Student students[STUDENTS_NUMBER]) {
    // Find the student with the highest mark and return his index
    double highestMark = students[0].mark;
    int highestMarkIndex = 0;

    for (int i = 1; i < STUDENTS_NUMBER; ++i) {
        if (students[i].mark > highestMark) {
            highestMark = students[i].mark;
            highestMarkIndex = i;
        }
    }
    return highestMarkIndex;
}

int main() {
    // Initializing the array of Students
    struct Student students[STUDENTS_NUMBER];

    for (int i = 0; i < STUDENTS_NUMBER; i++) {
        printf("\n[Student: %d]\n", i+1);

        printf("Student ID: ");
        scanf("%d", &students[i].studentID);

        printf("Midterm score: ");
        scanf("%lf", &students[i].midterm);

        printf("Lab score: ");
        scanf("%lf", &students[i].lab);

        printf("Project score: ");
        scanf("%lf", &students[i].project);

        printf("Final score: ");
        scanf("%lf", &students[i].final);

        // Calculate the students mark
        students[i].mark = students[i].midterm * 0.2 + students[i].lab * 0.1 + students[i].project * 0.2 + students[i].final * 0.5;
    }

    // Call the function that finds the highest mark student
    int highestMarkIndex = GetHighestMark(students);

    // Display the student with the highest mark
    printf("\nStudent with the highest mark:\n");
    printf("Student ID: %d\n", students[highestMarkIndex].studentID);
    printf("Mark: %.2lf\n", students[highestMarkIndex].mark);

	return 0;
}