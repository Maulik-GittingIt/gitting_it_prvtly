#include <stdio.h>

int main() {
    int n, count = 0, num = 2;

    // Input the position of the prime number
    printf("Enter the value of N to find the Nth prime number: ");
    scanf("%d", &n);

    while (count < n) {
        int isPrime = 1; // Assume the number is prime

        // Check if num is prime
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        if (isPrime) {
            count++; // Increment count if prime
        }

        if (count < n) {
            num++; // Check the next number
        }
    }

    printf("The %dth prime number is: %d\n", n, num);

    return 0;
}
