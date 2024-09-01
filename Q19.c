// 19.Calculate compound interest 

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, amount;
    int timesCompounded, years;

    // Input the principal amount, interest rate, times compounded per year, and number of years
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter the number of times the interest is compounded per year: ");
    scanf("%d", &timesCompounded);
    printf("Enter the number of years the money is invested or borrowed for: ");
    scanf("%d", &years);

    // Convert the annual interest rate from percentage to decimal
    rate = rate / 100.0;

    // Calculate the amount of money accumulated after n years
    amount = principal * pow((1 + rate / timesCompounded), timesCompounded * years);

    // Output the result
    printf("The amount of money accumulated after %d years is: %.2lf\n", years, amount);

    return 0;
}
