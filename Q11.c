// 11.Find circumference of square formula : C = 4 * a 

#include <stdio.h>

// Function to calculate the perimeter of a square
int calculatePerimeter(int sideLength) {
    return 4 * sideLength;
}

int main() {
    int sideLength;

    // Input the side length of the square from the user
    printf("Enter the side length of the square: ");
    scanf("%d", &sideLength);

    // Calculate the perimeter
    int perimeter = calculatePerimeter(sideLength);

    // Output the result
    printf("The perimeter of the square is: %d\n", perimeter);

    return 0;
}
