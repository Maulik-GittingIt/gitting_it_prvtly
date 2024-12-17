#include <stdio.h>

int main() {
    int calls;
    double bill = 0; // Initialize the bill amount

    // Input the number of calls
    printf("Enter the number of calls: ");
    scanf("%d", &calls);

    // Calculate the bill based on the number of calls using switch
    switch (calls > 150) {
        case 0: // Calls are 150 or fewer
            bill = 0; // No charge for up to 150 calls
            break;
        case 1: // Calls are more than 150
            switch (calls > 250) {
                case 0: // Between 151 and 250
                    bill = (calls - 150) * 0.9;
                    break;
                case 1: // More than 250
                    switch (calls > 400) {
                        case 0: // Between 251 and 400
                            bill = 100 * 0.9 + (calls - 250) * 1.2;
                            break;
                        case 1: // More than 400
                            bill = 100 * 0.9 + 150 * 1.2 + (calls - 400) * 1.5;
                            break;
                    }
                    break;
            }
            break;
    }

    // Display the bill
    printf("Total telephone bill: Rs. %.2lf\n", bill);
    printf("maulik bahl");
    return 0;
}
