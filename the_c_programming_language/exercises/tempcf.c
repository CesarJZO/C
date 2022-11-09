#include <stdio.h>

/**
 * Exercise 1-4. Write a program to print the corresponding
 * Celsius to Fahrenheit table.
 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("%3s %6s\n", "C", "F");
    while (celsius <= upper)
    {
        // Formula: °F = (°C * 9 / 5) + 32
        fahr = (celsius * 9 / 5) + 32;
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
