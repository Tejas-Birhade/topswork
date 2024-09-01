//If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
//minimum bill should be of Rs. 256/-

#include <stdio.h>

int main() {
    float bill, finalBill;

    // Input the bill amount
    printf("Enter the bill amount: ");
    scanf("%f", &bill);

    // Check if the bill amount is less than the minimum required amount
    if (bill < 256) {
        printf("The minimum bill amount is Rs. 256. Your bill amount is too low.\n");
        finalBill = 256;
    } else {
        // Calculate surcharge if the bill exceeds Rs. 800
        if (bill > 800) {
            finalBill = bill + (bill * 0.18); // Adding 18% surcharge
        } else {
            finalBill = bill;
        }
    }

    // Output the final bill amount
    printf("The final bill amount is: Rs. %.2f\n", finalBill);

    return 0;
}
