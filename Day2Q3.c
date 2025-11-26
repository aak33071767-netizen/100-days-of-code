/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

#include <stdio.h>

int main() {
    float length, breadth;
    float area, perimeter;

    // Input length and breadth
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculations
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display results
    printf("\nArea of the rectangle = %.2f", area);
    printf("\nPerimeter of the rectangle = %.2f", perimeter);

    return 0;
}
