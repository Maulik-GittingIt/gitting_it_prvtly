#include <stdio.h>

int main() {
    int n, k;

    // Input the range of numbers and the number of terms
    printf("Enter the number of multiplication tables to generate (n): ");
    scanf("%d", &n);

    printf("Enter the number of terms in each table (k): ");
    scanf("%d", &k);

    // Generate the multiplication tables
    for (int i = 1; i <= n; i++) {
        printf("Multiplication table for %d:\n", i);
        for (int j = 1; j <= k; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
