#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool iseven(int n)
{
    return n % 2 == 0;
}

int main(int argc, char *argv[])
{
    int n;
    for (int i = 1; i < argc; i++)
    {
        n = atoi(argv[i]);
        if (iseven(n)) 
            printf("%d is even\n", n);
        else
            printf("%d is odd\n", n);
    }
    return 0;
}
