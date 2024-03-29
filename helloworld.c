#include <stdio.h>
#include "./include/colors.h"

/**
 * Shows a HelloWorld message depending on the arguments
 * @author CésarJZO
 */
int main(int length, char const **args)
{
    if (length <= 1)
        printf("Hello, world!\n");
    else for (int i = 1; i < length; i++)
        printf("%sHello, %s!\n", randomcolor(), args[i]);
    return 0;
}
