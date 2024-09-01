//Accept number of students from user. I need to give 5 apples to each 
//student. How many apples are required?

#include <stdio.h>

int main() {
    int numberOfStudents;
    int applesPerStudent = 5;
    int totalApples;

    // Prompt user for number of students
    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    // Calculate the total number of apples required
    totalApples = numberOfStudents * applesPerStudent;

    // Display the result
    printf("Total apples required: %d\n", totalApples);

    return 0;
}
