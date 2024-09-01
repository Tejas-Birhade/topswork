//WAP to make simple calculator (operation include Addition, Subtraction,
//Multiplication, Division, modulo) using conditional statement

#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    int result;

    // Prompt the user to enter two integers and an operator
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); // Note the space before %c to consume any leftover whitespace

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d %c %d = %d\n", num1, operator, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%d %c %d = %d\n", num1, operator, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%d %c %d = %d\n", num1, operator, num2, result);
            break;

        case '/':
            if (num2 != 0) { // Check for division by zero
                result = num1 / num2;
                printf("%d %c %d = %d\n", num1, operator, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '%':
            if (num2 != 0) { // Check for modulo by zero
                result = num1 % num2;
                printf("%d %c %d = %d\n", num1, operator, num2, result);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
