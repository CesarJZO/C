#include <stdio.h>

/**
 * Print Farenheit-Celsius table
 *  for fahr = 0, 20, ..., 300
 */
int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        // Formula: °C = (5/9)(°F-32)
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
