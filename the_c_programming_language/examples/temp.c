#include <stdio.h>

/**
 * Print Farenheit-Celsius table
 *  for fahr = 0, 20, ..., 300
 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        // Formula: °C = (5/9)(°F-32)
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

/*
    Output using ints { celsius = 5 * (fahr-32) / 9; }
        0    -17
       20     -6
       40      4
       60     15
       80     26
      100     37
      120     48
      140     60
      160     71
      180     82
      200     93
      220    104
      240    115
      260    126
      280    137
      300    148

    Output using floats { celsius = (5.0/9.0) * (fahr-32.0); }
        0  -17.8
       20   -6.7
       40    4.4
       60   15.6
       80   26.7
      100   37.8
      120   48.9
      140   60.0
      160   71.1
      180   82.2
      200   93.3
      220  104.4
      240  115.6
      260  126.7
      280  137.8
      300  148.9
*/
