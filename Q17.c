// 17. Calculate person’s insurance premium based on salary 

#include <stdio.h>

#define PREMIUM_PERCENTAGE 5.0 // Premium is 5% of the salary

// Function to calculate insurance premium
double calculatePremium(double salary) {
    return (salary * PREMIUM_PERCENTAGE) / 100.0;
}

int main() {
    double salary;
    double premium;

    // Prompt the user to enter their salary
    printf("Enter the salary: ");
    scanf("%lf", &salary);

    // Calculate the insurance premium
    premium = calculatePremium(salary);

    // Output the result
    printf("The insurance premium based on a salary of %.2lf is: %.2lf\n", salary, premium);

    return 0;
}
