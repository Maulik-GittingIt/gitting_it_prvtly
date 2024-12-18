#include <stdio.h>

int main() {
    int n, r = 0, d, original;

    // Input: Read the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Store the original number in a temporary variable
    original = n;

    // Process: Reverse the number
    while (n > 0) {
        d = n % 10;      // Extract the last digit
        r = r * 10 + d;  // Append it to the reversed number
        n = n / 10;      // Remove the last digit
    }

    // Check if the reversed number is equal to the original number
    if (r == original) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
