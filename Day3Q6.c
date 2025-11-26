/*Write a program to swap two numbers using a third variable.*/

#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;

    // Display result after swapping
    printf("\nAfter Swapping:");
    printf("\nValue of a = %d", a);
    printf("\nValue of b = %d", b);

    return 0;
}
