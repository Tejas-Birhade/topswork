// 16.Convert country’s name in abbreviate form 

#include <stdio.h>
#include <ctype.h>

#define MAX_NAME_LENGTH 100

// Function to convert country name to abbreviation
void convertToAbbreviation(const char *fullName, char *abbreviation) {
    int i = 0;
    int j = 0;

    while (fullName[i] != '\0') {
        // Check if the current character is a letter
        if (isalpha(fullName[i])) {
            // Add the first letter of the word to the abbreviation
            abbreviation[j++] = toupper(fullName[i]);
            // Skip to the end of the current word
            while (fullName[i] != '\0' && !isspace(fullName[i])) {
                i++;
            }
        } else {
            // Move to the next character if it's not a letter
            i++;
        }
    }
    abbreviation[j] = '\0'; // Null-terminate the abbreviation string
}

int main() {
    char fullName[MAX_NAME_LENGTH];
    char abbreviation[MAX_NAME_LENGTH];

    printf("Enter the full name of the country: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Remove newline character if present
    fullName[strcspn(fullName, "\n")] = '\0';

    convertToAbbreviation(fullName, abbreviation);

    printf("Abbreviation: %s\n", abbreviation);

    return 0;
}
