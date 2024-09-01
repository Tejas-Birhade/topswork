// 18. Calculate person’s Annual salary 

#include <stdio.h>

int main() {
    double monthlySalary;
    double annualSalary;

    // Prompt the user to enter their monthly salary
    printf("Enter the monthly salary: ");
    scanf("%lf", &monthlySalary);

    // Calculate the annual salary
    annualSalary = monthlySalary * 12;

    // Output the result
    printf("The annual salary based on a monthly salary of %.2lf is: %.2lf\n", monthlySalary, annualSalary);

    return 0;
}
