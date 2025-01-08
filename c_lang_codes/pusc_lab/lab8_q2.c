#include <stdio.h>

int main() {
    // Inbuilt array
    int arr[] = {10, 15, 20, 25, 30, 35, 40};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    int sum = 0;

    // Calculate the sum of elements at odd indices
    for (int i = 1; i < n; i += 2) {
        sum += arr[i];
    }

    // Output the result
    printf("The sum of elements at odd indices is: %d\n", sum);

    return 0;
}
