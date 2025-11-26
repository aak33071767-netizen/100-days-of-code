/*Write a program to calculate simple and compound interest for given principal, rate, and time.*/

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;

    // Input values
    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest Formula
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest Formula
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Display results
    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nCompound Interest = %.2f", compoundInterest);

    return 0;
}
