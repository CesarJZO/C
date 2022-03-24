#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define RED   "\x1b[31m"
#define RESET "\x1b[0m"

bool iseven(int n)
{
    return n % 2 == 0;
}

int main(int argc, char *argv[])
{
    int n;
    if (argc < 2)
    {
        printf(RED "[Error] " RESET "No arguments\n");
        return 1;
    }
    for (int i = 1; i < argc; i++)
    {
        n = atoi(argv[i]);
        if (iseven(n))
            printf("%d es par\n", n);
        else
            printf("%d es non\n", n);
    }
    return 0;
}
