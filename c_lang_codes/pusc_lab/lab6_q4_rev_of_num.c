#include <stdio.h>
// question no 4 of lab 6
int main() {
    int n, r = 0, d;

    // Input: Read the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Process: Reverse the number
    while (n > 0) {
        d = n % 10;      // Extract the last digit
        r = r * 10 + d;  // Append it to the reversed number
        n = n / 10;      // Remove the last digit
    }

    // Output: Display the reversed number
    printf("Reversed number: %d\n", r);
    printf("maulik bahl");

    return 0;
}
