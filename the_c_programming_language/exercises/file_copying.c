#include <stdio.h>

/**
 * Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
 */
int main()
{
    int c;

    while (c = getchar() != EOF) // The same as c = (getchar() != EOF)
        printf(c ? "is not end of file " : " is end of file ");
}
