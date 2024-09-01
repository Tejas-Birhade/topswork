// 10.find the area of a rectangular prism formula : A=2(wl+hl+hw) 

#include <stdio.h>

// Function to calculate the surface area of a rectangular prism
int calculateSurfaceArea(int width, int length, int height) {
    return 2 * (width * length + length * height + height * width);
}

int main() {
    int width, length, height;

    // Input the dimensions of the rectangular prism from the user
    printf("Enter the width of the rectangular prism: ");
    scanf("%d", &width);
    printf("Enter the length of the rectangular prism: ");
    scanf("%d", &length);
    printf("Enter the height of the rectangular prism: ");
    scanf("%d", &height);

    // Calculate the surface area
    int surfaceArea = calculateSurfaceArea(width, length, height);

    // Output the result
    printf("The surface area of the rectangular prism is: %d\n", surfaceArea);

    return 0;
}
