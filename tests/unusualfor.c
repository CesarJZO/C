#include <stdio.h>

int i, j;

void update();
void initialize();

int main()
{
    for (initialize(); j >= 0; update())
    {
        printf("i: %2d\tj: %2d\n", i, j);
    }
}

void initialize()
{
    i = 0;
    j = 5;
}

void update()
{
    i++;
    j--;
}
