#include <stdio.h>
#include <math.h>

int main()
{
    double s = sqrt(2);
    printf("sqrt:   %4.2f\n", s);

    float p = powf(8, 2);
    printf("pow:    %4.0f\n", p);

    int r = round(3.14);
    printf("round:  %4d\n", r);

    int c = ceil(3.14);
    printf("ceil:   %4d\n", c);

    int f = floor(3.99);
    printf("floor:  %4d\n", r);

    int a = fabs(-24.3);
    printf("abs:    %4d\n", a);

    long double l = log(6);
    printf("log:    %4.2Lf\n", l);

    return 0;
}
