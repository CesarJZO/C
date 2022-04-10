#include <stdlib.h>
#include <time.h>

/**
 * Establish a seed based on the moment it is being called
 */
void setseed()
{
    srand((unsigned)time(NULL));
}

/**
 * @return A random integer between 0 and a specified limit (exclusive)
 */
int randomnum(int maxexclusive)
{
    return rand() % maxexclusive;
}
