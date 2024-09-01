//Write a C program to accept two integers and check whether they are equal or not

#include <stdio.h>

int main() {
    int num1, num2;

    // Prompt the user to enter two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Check if the integers are equal
    if (num1 == num2) {
        printf("The two integers are equal.\n");
    } else {
        printf("The two integers are not equal.\n");
    }

    return 0;
}
