// Find character value from ascii

#include <stdio.h>

int main() {
    int asciiValue;
    char character;

    // Prompt user for ASCII value
    printf("Enter an ASCII value (integer between 0 and 255): ");
    scanf("%d", &asciiValue);

    // Ensure the value is within the valid range
    if (asciiValue < 0 || asciiValue > 255) {
        printf("Invalid ASCII value. Please enter a value between 0 and 255.\n");
        return 1; // Exit with an error code
    }

    // Convert ASCII value to character
    character = (char)asciiValue;

    // Display the result
    printf("The character for ASCII value %d is '%c'.\n", asciiValue, character);

    return 0;
}
