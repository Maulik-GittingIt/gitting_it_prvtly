#include <stdio.h>

int main() {
    int a;
    float b = 1.222;
    char c[100]; // Use an array to store a string

    printf("Enter a: ");
    scanf("%d", &a);

    // Clear the input buffer before reading the string
    getchar(); // Consumes the leftover newline character

    printf("Enter c: ");
    scanf("%99s", c); // %99s limits input to 99 characters to prevent overflow

    printf("a value = %d\n", a);
    printf("b value = %.3f\n", b); // %.3f for 3 decimal places
    printf("The value of c = %s\n", c);

    return 0; // Ensure return statement for main
}