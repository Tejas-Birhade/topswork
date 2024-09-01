//Write a C program to calculate profit and loss on a transaction.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss;

    // Prompt the user to enter the cost price and selling price
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        printf("Profit: %.2f\n", profit);
    } else if (sellingPrice < costPrice) {
        loss = costPrice - sellingPrice;
        printf("Loss: %.2f\n", loss);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
