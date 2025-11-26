/*Write a program to find and display the sum of the first n natural numbers*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input value of n
    printf("Enter a positive number: ");
    scanf("%d", &n);

    // Calculate sum using loop
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    // Display result
    printf("\nSum of first %d natural numbers = %d", n, sum);

    return 0;
}
