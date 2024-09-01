//C Program to Check Uppercase or Lowercase or Digit or Special
//Character

#include <stdio.h>
#include <ctype.h>  // For isupper(), islower(), isdigit()

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to consume any leftover whitespace

    // Check if the character is uppercase, lowercase, digit, or special
    if (isupper(ch)) {
        printf("%c is an uppercase letter.\n", ch);
    } else if (islower(ch)) {
        printf("%c is a lowercase letter.\n", ch);
    } else if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
