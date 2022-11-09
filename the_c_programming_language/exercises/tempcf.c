#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    /* Exercise 1-3. Modify the temperature conversion program to print a
       heading above the table */
    printf("%3s %6s\n", "C", "F");
    while (celsius <= upper)
    {
        // Formula: °F = (°C * 9 / 5) + 32
        fahr = (celsius * 9 / 5) + 32;
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
