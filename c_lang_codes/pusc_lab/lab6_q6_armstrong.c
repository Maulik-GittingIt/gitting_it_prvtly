#include <stdio.h>

int main() {
    int n, sum = 0, temp, digit;

    // Input: Read the number
    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    // Store the original number in a temporary variable
    temp = n;

    // Process: Calculate the sum of cubes of its digits
    while (temp > 0) {
        digit = temp % 10;      // Extract the last digit
        sum += digit * digit * digit;  // Add the cube of the digit to sum
        temp = temp / 10;       // Remove the last digit
    }

    // Check if the sum of cubes equals the original number
    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}
