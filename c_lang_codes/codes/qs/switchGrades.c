#include <stdio.h>

int main() {
    float mark1, mark2, mark3, average;
    int gradeCategory;

    // Input marks for three subjects
    printf("Enter marks for subject 1: ");
    scanf("%f", &mark1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &mark2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &mark3);

    // Calculate average percentage
    average = (mark1 + mark2 + mark3) / 3;

    // Determine grade category based on average
    gradeCategory = (int)(average / 10); // Divide average by 10 to categorize grades

    // Use switch to print grade
    printf("Average Percentage: %.2f\n", average);
    printf("Grade: ");
    switch (gradeCategory) {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        case 5:
            printf("E\n");
            break;
        default:
            printf("F\n");
            break;
    }

    return 0;
}