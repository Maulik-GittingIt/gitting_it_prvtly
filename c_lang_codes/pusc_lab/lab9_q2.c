#include <stdio.h>

int main() {
    int rows, cols, element, count = 0;

    // Input the size of the matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &element);

    // Search for the element and count occurrences
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == element) {
                count++;
            }
        }
    }

    // Output the result
    if (count > 0) {
        printf("Element %d found %d times in the matrix.\n", element, count);
    } else {
        printf("Element %d not found in the matrix.\n", element);
    }

    return 0;
}

