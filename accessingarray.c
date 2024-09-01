#include <stdio.h>

int main() {
    int size;

    // Input array size
    printf("Enter array size: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Declare the array and variable to store the number to be searched
    int arr[size], num;

    // Input array elements
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1; // Exit with an error code
        }
    }

    // Input number to search
    printf("Enter number to be searched: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Exit with an error code
    }

    // Search for the number in the array
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (num == arr[i]) {
            printf("arr[%d] = %d\n", i, arr[i]);
            found = 1; // Indicate that the number has been found
        }
    }

    // If the number was not found, print a message
    if (!found) {
        printf("Number %d not found in the array.\n", num);
    }

    return 0;
}

