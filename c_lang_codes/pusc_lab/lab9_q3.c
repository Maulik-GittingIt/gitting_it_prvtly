#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions of both matrices
    printf("Enter number of rows and columns for matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter number of rows and columns for matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    // Matrix multiplication is possible if cols1 == rows2
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    // Input matrix 1
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input matrix 2
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Output the result matrix
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
