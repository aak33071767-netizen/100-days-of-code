/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.*/

#include <stdio.h>

int main() {
    float num1, num2;
    float sum, difference, product, quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    // Display results
    printf("\nSum = %.2f", sum);
    printf("\nDifference = %.2f", difference);
    printf("\nProduct = %.2f", product);
    printf("\nQuotient = %.2f", quotient);

    return 0;
}
