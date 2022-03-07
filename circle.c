#include <stdio.h>
#include <math.h>

int main() {
    printf("Radius: ");
    float radius;
    scanf("%f", &radius);

    printf("Area:          %4.2f\n", M_PI * powf(radius, 2));
    printf("Circumference: %4.2f\n", M_PI * 2 * radius);
    return 0;
}
