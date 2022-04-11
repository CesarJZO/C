#include <stdio.h>
#include "libraries/random.h"
#include "libraries/colors.h"

/**
 * Shows a HelloWorld message depending on the arguments
 * @author CésarJZO
 */
int main(int length, char const **args)
{
    setseed();
    if (length <= 1)
        printf("Hello, world!\n");
    else for (int i = 1; i < length; i++)
    {
        char *color = randomcolor();
        printf("%sHello, %s!\n", color, args[i]);
    }
    return 0;
}
