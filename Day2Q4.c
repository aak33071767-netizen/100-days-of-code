/*Write a program to calculate the area and circumference of a circle given its radius.*/

#include <stdio.h>

int main() {
    float radius;
    float area, circumference;
    float pi = 3.14159;

    // Input radius
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    // Calculations
    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    // Display results
    printf("\nArea of the circle = %.2f", area);
    printf("\nCircumference of the circle = %.2f", circumference);

    return 0;
}
