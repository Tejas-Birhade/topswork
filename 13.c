//WAP to find minimum number among 3 numbers using ternary operator

#include <stdio.h>

int main() {
    int a, b, c;
    int min;

    // Prompt the user to enter three numbers
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    // Find the minimum number using ternary operator
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    // Display the minimum number
    printf("The minimum number is %d.\n", min);

    return 0;
}
