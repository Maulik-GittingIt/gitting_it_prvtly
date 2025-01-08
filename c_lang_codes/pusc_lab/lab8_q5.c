#include <stdio.h>

int main() {
    // Inbuilt array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Auxiliary array to store the reversed array
    int reversed[n];

    // Fill the auxiliary array with elements in reverse order
    for (int i = 0; i < n; i++) {
        reversed[i] = arr[n - i - 1];
    }

    // Output the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    return 0;
}
