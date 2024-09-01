//Accept marks from user and check pass or fail

#include <stdio.h>

int main() {
    int marks;

    // Prompt the user to enter marks
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Check if the marks are greater than or equal to the passing mark
    if (marks >= 50) {
        printf("You have passed.\n");
    } else {
        printf("You have failed.\n");
    }

    return 0;
}
