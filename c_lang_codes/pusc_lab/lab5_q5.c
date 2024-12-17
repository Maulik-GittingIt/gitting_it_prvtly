#include <stdio.h>

int main() {
    int calls;
    double bill;

    // Input the number of calls
    printf("Enter the number of calls: ");
    scanf("%d", &calls);

    // Calculate the bill based on the number of calls
    switch (calls <= 100) {
        case 1:
            bill = 200; // Minimum charge for up to 100 calls
            break;
        case 0:
            switch (calls <= 150) {
                case 1:
                    bill = 200 + (calls - 100) * 0.60; // Rs. 0.60 per call for the next 50 calls
                    break;
                case 0:
                    switch (calls <= 200) {
                        case 1:
                            bill = 200 + 50 * 0.60 + (calls - 150) * 0.50; // Rs. 0.50 per call for the next 50 calls
                            break;
                        case 0:
                            bill = 200 + 50 * 0.60 + 50 * 0.50 + (calls - 200) * 0.40; // Rs. 0.40 per call beyond 200
                            break;
                    }
                    break;
            }
            break;
    }

    // Display the bill
    printf("Total bill: Rs. %.2lf\n", bill);
    printf("maulik bahl");
    return 0;
}
