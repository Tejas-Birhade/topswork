//WAP to show
//ii. Vowel or Consonant using switch case

#include <stdio.h>
#include <ctype.h> // for isalpha() and tolower()

int main() {
    char character;

    // Input the character
    printf("Enter a single alphabetic character: ");
    scanf(" %c", &character);  // Space before %c to ignore any newline characters

    // Convert character to lowercase
    character = tolower(character);

    // Determine if the character is a vowel or consonant using switch case
    switch (character) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel\n", character);
            break;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            printf("%c is a consonant\n", character);
            break;
        default:
            printf("Invalid input. Please enter a single alphabetic character.\n");
            break;
    }

    return 0;
}
