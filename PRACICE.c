//write a program to find area of circle or square(using function) and result shouldbe as per users choice
#include <stdio.h>
int main() {
    int choice;


    printf("Choose the shape to calculate the area:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    
        return 0;
}

void calculateAreaOfCircle() {
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);


    area = PI * radius * radius;

    
    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);
}

void calculateAreaOfSquare() {
    double side, area;

    printf("Enter the side length of the square: ");
    scanf("%lf", &side);


    area = side * side;


    printf("The area of the square with side length %.2lf is %.2lf\n", side, area);
}
