#include <stdio.h>

/**
 * Copy input to output; 1st version
 */
main()
{
    int c;
    c = getchar();     // read a character

    while (c != EOF)   // while character is not ond-of-file indicator
    {
        putchar(c);    // output the character just read
        c = getchar(); // read a character
    }
}
