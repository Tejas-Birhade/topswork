//Accept the input month number and print number of days in that
//month

#include <stdio.h>

int main() {
    int monthNumber;

    // Input the month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    // Determine the number of days in the month
    switch (monthNumber) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            printf("31 days\n");
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            printf("30 days\n");
            break;
        case 2:  // February
            printf("28 days\n");  // Assuming non-leap year
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}
