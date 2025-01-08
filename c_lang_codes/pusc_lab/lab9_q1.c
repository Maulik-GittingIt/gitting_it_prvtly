#include <stdio.h>

int main() {
    int marks[3][5]; // Array to store marks for 3 students in 5 subjects
    int total_marks[3] = {0, 0, 0}; // Array to store total marks of each student
    float subject_avg[5] = {0.0, 0.0, 0.0, 0.0, 0.0}; // Array to store average marks of each subject

    // Input marks for each student
    printf("Enter marks for 3 students in 5 subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total_marks[i] += marks[i][j]; // Add to student's total
            subject_avg[j] += marks[i][j]; // Add to subject total for averaging later
        }
    }

    // Calculate subject averages
    for (int j = 0; j < 5; j++) {
        subject_avg[j] /= 3.0; // Divide total by the number of students
    }

    // Print total marks for each student
    printf("\nTotal marks for each student:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d: %d\n", i + 1, total_marks[i]);
    }

    // Print average marks for each subject
    printf("\nAverage marks for each subject:\n");
    for (int j = 0; j < 5; j++) {
        printf("Subject %d: %.2f\n", j + 1, subject_avg[j]);
    }

    return 0;
}
