#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    /* Exercise 1-3. Modify the temperature conversion program to print a
       heading above the table */
    printf("%3s %6s\n", "F", "C");
    while (fahr <= upper)
    {
        // Formula: °C = (5/9)(°F-32)
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
