// 9. Find circumference of Triangle formula : triangle = a + b + c 

#include <stdio.h>

// Function to calculate the perimeter of a triangle
int calculatePerimeter(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a, b, c;

    // Input the sides of the triangle from the user
    printf("Enter the length of side a: ");
    scanf("%d", &a);
    printf("Enter the length of side b: ");
    scanf("%d", &b);
    printf("Enter the length of side c: ");
    scanf("%d", &c);

    // Calculate the perimeter
    int perimeter = calculatePerimeter(a, b, c);

    // Output the result
    printf("The perimeter of the triangle is: %d\n", perimeter);

    return 0;
}
