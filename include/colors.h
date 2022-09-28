#include <stdlib.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

/**
 * Selects a random color
 * @return The selected ANSI color
 */
char *randomcolor()
{
    int r = rand() % 8;
    switch (r)
    {
        case 1: return RED; break;
        case 2: return GREEN; break;
        case 3: return YELLOW; break;
        case 4: return BLUE; break;
        case 5: return MAGENTA; break;
        case 6: return CYAN; break;
        case 7: return RESET; break;
        default: return RESET; break;
    }
}
