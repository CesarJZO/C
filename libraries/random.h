#include <stdlib.h>
#include <time.h>

/**
 * Establish a seed based on the moment it is being called.
 * It should be placed once in your program
 */
void setseed()
{
    srand((unsigned)time(NULL));
}

/**
 * @param max The maximum limit (inclusive)
 * @return A random integer between 0 and the specified max limit
 */
int randomnum(int max)
{
    return rand() % (max + 1);
}
