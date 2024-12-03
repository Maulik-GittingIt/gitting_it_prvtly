#include <stdio.h>

int main() {
    int num, remainder, oddDigits[10], oddCount = 0;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Process the number to extract odd digits
    while (num != 0) {
        remainder = num % 10;  // Get the last digit
        if (remainder % 2 != 0) {  // Check if it's odd
            oddDigits[oddCount] = remainder;
            oddCount++;
        }
        num /= 10;  // Remove the last digit
    }

    // Sort the odd digits in descending order using Bubble Sort
    for (int i = 0; i < oddCount - 1; i++) {
        for (int j = i + 1; j < oddCount; j++) {
            if (oddDigits[i] < oddDigits[j]) {
                // Swap the elements if they are in the wrong order
                int temp = oddDigits[i];
                oddDigits[i] = oddDigits[j];
                oddDigits[j] = temp;
            }
        }
    }

    // Print the odd digits in descending order
    printf("Odd digits in descending order: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddDigits[i]);
    }
    printf("\n");

    return 0;
}
