#include <stdio.h>
#include <math.h>

int main() {
    // Predefined square matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3;
    int trace = 0;
    float norm = 0.0;

    // Calculate trace and norm
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                trace += matrix[i][j]; // Sum of diagonal elements
            }
            norm += matrix[i][j] * matrix[i][j]; // Sum of squares of all elements
        }
    }
    norm = sqrt(norm); // Square root of sum of squares

    // Output trace and norm
    printf("Trace of the matrix: %d\n", trace);
    printf("Norm of the matrix: %.2f\n", norm);

    return 0;
}
