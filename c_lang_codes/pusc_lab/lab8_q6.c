#include <stdio.h>

int main() {
    // Inbuilt array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    int isSorted = 1; // Assume the array is sorted

    // Check if the array is sorted
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0; // Found an unsorted pair
            break;
        }
    }

    // Output the result
    if (isSorted) {
        printf("The array is sorted in ascending order.\n");
    } else {
        printf("The array is not sorted.\n");
    }

    return 0;
}
