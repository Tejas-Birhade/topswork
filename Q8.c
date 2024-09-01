// 8. Find circumference of Rectangle formula : C = 4 * a 

#include <stdio.h>

// Function to calculate the perimeter of a rectangle
int calculatePerimeter(int length, int width) {
    return 2 * (length + width);
}

int main() {
    int length, width;

    // Input length and width from the user
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    // Calculate the perimeter
    int perimeter = calculatePerimeter(length, width);

    // Output the result
    printf("The perimeter of the rectangle is: %d\n", perimeter);

    return 0;
}
