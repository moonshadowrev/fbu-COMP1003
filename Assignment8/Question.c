#include <stdio.h>
#include <stdlib.h>

// Struct definition for student
struct student {
    int studentID;
    char name[64];
    char surname[64];
    int midterm;
    int lab;
    int project;
    int final;
    float mark;
    struct student* next;
};

// Function to validate score range (0-100)
int validateScore(int score) {
    return (score >= 0 && score <= 100);
}

// Function to create a linked list of students
struct student* createStudentList(int numberOfStudents) {
    struct student* head = NULL;
    struct student* current = NULL;

    for (int i = 0; i < numberOfStudents; ++i) {
        struct student* newStudent = (struct student*)malloc(sizeof(struct student));

        printf("Enter details for student %d:\n", i + 1);
        printf("Student ID: ");
        scanf("%d", &newStudent->studentID);

        printf("Name: ");
        scanf("%s", newStudent->name);

        printf("Surname: ");
        scanf("%s", newStudent->surname);

        do {
            printf("Midterm score (0-100): ");
            scanf("%d", &newStudent->midterm);
        } while (!validateScore(newStudent->midterm));

        do {
            printf("Lab score (0-100): ");
            scanf("%d", &newStudent->lab);
        } while (!validateScore(newStudent->lab));

        do {
            printf("Project score (0-100): ");
            scanf("%d", &newStudent->project);
        } while (!validateScore(newStudent->project));

        do {
            printf("Final score (0-100): ");
            scanf("%d", &newStudent->final);
        } while (!validateScore(newStudent->final));

        newStudent->next = NULL;

        newStudent->mark = newStudent->midterm * 0.2 + newStudent->lab * 0.1 + newStudent->project * 0.2 + newStudent->final * 0.5;

        if (head == NULL) {
            head = newStudent;
            current = head;
        } else {
            current->next = newStudent;
            current = newStudent;
        }
    }

    return head;
}

// Function to find the highest mark among the students
int findHighestMark(struct student* head) {
    int highestMark = -1;

    while (head != NULL) {
        if (head->mark > highestMark) {
            highestMark = head->mark;
        }

        head = head->next;
    }

    return highestMark;
}

// Function to free the memory allocated for the linked list
void freeStudentList(struct student* head) {
    struct student* current = head;
    while (current != NULL) {
        struct student* next = current->next;
        free(current);
        current = next;
    }
}

int main() {
    int numberOfStudents;

    // Get the number of students from the programmer
    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    // Create the linked list of students
    struct student* studentList = createStudentList(numberOfStudents);

    // Find and print the highest mark among the students
    int highestMark = findHighestMark(studentList);
    printf("The highest mark among the students is: %d\n", highestMark);

    // Free the memory allocated for the linked list
    freeStudentList(studentList);

    return 0;
}