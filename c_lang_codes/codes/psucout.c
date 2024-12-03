// wap to print the smallest and the largest element in an array

#include <stdio.h>

int main() {
    int n, i, largest, smallest;

    // Ask user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare the array
    int arr[n];

    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and smallest with the first element of the array
    largest = arr[0];
    smallest = arr[0];

    // Traverse the array to find the largest and smallest elements
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Print the results
    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);

    return 0;
}