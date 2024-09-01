// 14.Find ascii value of given number 

#include <stdio.h>

int main() {
    char character;
    int asciiValue;

    // Prompt user for a character
    printf("Enter a character: ");
    scanf("%c", &character);

    // Convert character to its ASCII value
    asciiValue = (int)character;

    // Display the ASCII value
    printf("The ASCII value of '%c' is %d.\n", character, asciiValue);

    return 0;
}
