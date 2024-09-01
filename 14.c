//WAP to find the largest of three numbers.

#include <stdio.h>

int main() {
    int a, b, c;
    int largest;

    // Prompt the user to enter three numbers
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    // Find the largest number using if-else statements
    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    // Display the largest number
    printf("The largest number is %d.\n", largest);

    return 0;
}
