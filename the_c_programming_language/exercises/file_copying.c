#include <stdio.h>

/**
 * Copy input to output; 2st version
 */
main()
{
    int c;

    while (c = getchar() != EOF) // The same as c = (getchar() != EOF)
        printf(c ? "is not end of file " : " is end of file ");
}
