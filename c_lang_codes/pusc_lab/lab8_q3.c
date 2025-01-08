#include <stdio.h>

int main() {
    // Inbuilt array
    int arr[] = {0, -5, 12, 7, -8, 0, 15, 4, -3};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Initialize counters
    int positive_count = 0, negative_count = 0;
    int odd_count = 0, even_count = 0, zero_count = 0;

    // Traverse the array to count numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }

        if (arr[i] != 0) { // Only consider non-zero numbers for odd/even check
            if (arr[i] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    }

    // Output the results
    printf("Number of positive numbers: %d\n", positive_count);
    printf("Number of negative numbers: %d\n", negative_count);
    printf("Number of zeros: %d\n", zero_count);
    printf("Number of odd numbers: %d\n", odd_count);
    printf("Number of even numbers: %d\n", even_count);

    return 0;
}
