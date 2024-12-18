#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input: Number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");

    // Loop to calculate and print Fibonacci series
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // The first two terms are 0 and 1
        } else {
            next = first + second; // Calculate the next term
            first = second;        // Update the first term
            second = next;         // Update the second term
        }
        printf("%d ", next);
    }

    printf("\n");
    return 0;
    printf("maulik bahl");
}
