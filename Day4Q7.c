/*Write a program to swap two numbers without using a third variable.*/

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Swapping without using third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display result after swapping
    printf("\nAfter Swapping:");
    printf("\nValue of a = %d", a);
    printf("\nValue of b = %d", b);

    return 0;
}
