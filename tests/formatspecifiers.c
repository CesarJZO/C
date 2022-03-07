#include <stdio.h>

int main()
{
    float prices[] = {59.99, 5.4954218};
    int length = sizeof(prices) / sizeof(float);

    printf("Floats\n");
    for (int i = 0; i < length; i++)
        printf("Price %d: %8.2f\n", i + 1, prices[i]);

    int nums[] = {125, 4, 82};
    length = sizeof(nums) / sizeof(int);

    printf("\nIntegers\n");
    for (int i = 0; i < length; i++)
        printf("Num %d: %4d\n", i, nums[i]);
}
        