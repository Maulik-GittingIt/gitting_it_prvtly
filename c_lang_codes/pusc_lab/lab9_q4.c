#include <stdio.h>

int main() {
    // Predefined matrix
    int matrix[3][3] = {
        {8, 1, 6},
        {3, 5, 7},
        {4, 9, 2}
    };
    int n = 3, magic_sum = 0;
    int sum_diag1 = 0, sum_diag2 = 0;

    // Calculate magic sum using the first row
    for (int j = 0; j < n; j++) {
        magic_sum += matrix[0][j];
    }

    // Check diagonals
    for (int i = 0; i < n; i++) {
        sum_diag1 += matrix[i][i];
        sum_diag2 += matrix[i][n - i - 1];
    }

    if (sum_diag1 != magic_sum || sum_diag2 != magic_sum) {
        printf("The matrix is not a magic square.\n");
        return 0;
    }

    // Check rows and columns
    for (int i = 0; i < n; i++) {
        int row_sum = 0, col_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += matrix[i][j];
            col_sum += matrix[j][i];
        }
        if (row_sum != magic_sum || col_sum != magic_sum) {
            printf("The matrix is not a magic square.\n");
            return 0;
        }
    }

    printf("The matrix is a magic square.\n");
    return 0;
}
