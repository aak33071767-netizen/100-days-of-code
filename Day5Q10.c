/*Write a program to input time in seconds and convert it to hours:minutes:seconds format*/

#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input total seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion logic
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Display result
    printf("\nTime = %d : %d : %d", hours, minutes, seconds);

    return 0;
}
