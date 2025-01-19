#include <stdio.h>

int main() {
    int marks[3][5]; // Array to store marks of 3 students in 5 subjects
    int totalMarks[3] = {0}; // Array to store total marks of each student
    float subjectAvg[5] = {0}; // Array to store average marks of each subject

    // Input marks for each student in each subject
    for (int i = 0; i < 3; i++) {
        printf("Enter marks for Student %d in 5 subjects:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Calculate total marks for each student
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            totalMarks[i] += marks[i][j]; // Add subject marks to student's total
        }
    }

    // Calculate average marks for each subject
    for (int j = 0; j < 5; j++) {
        int subjectTotal = 0; // Total marks for a subject
        for (int i = 0; i < 3; i++) {
            subjectTotal += marks[i][j]; // Add marks of all students for this subject
        }
        subjectAvg[j] = (float)subjectTotal / 3; // Average for the subject
    }

    // Print total marks of each student
    printf("\nTotal Marks of Each Student:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d: %d\n", i + 1, totalMarks[i]);
    }

    // Print average marks of each subject
    printf("\nAverage Marks of Each Subject:\n");
    for (int j = 0; j < 5; j++) {
        printf("Subject %d: %.2f\n", j + 1, subjectAvg[j]);
    }

    return 0;
}
