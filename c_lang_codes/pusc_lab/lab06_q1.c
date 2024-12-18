#include <stdio.h>

int main() {
    int N;

    // Input: Number N
    printf("Enter a number (N): ");
    scanf("%d", &N);

    printf("Odd numbers in descending order:\n");

    // Loop from N to 1 and print odd numbers
    for (int i = N; i >= 1; i--) {
        if (i % 2 != 0) { // Check if the number is odd
            printf("%d\n", i);
        }
    }

    return 0;
    printf("maulik bahl");
}
