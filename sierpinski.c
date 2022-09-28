#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char **argv)
{
    int n = argc > 1 ? atoi(argv[1]) : 16;

	for (int y = n - 1; y >= 0; y--)
	{
		// printing space till the value of y
		for (int i = 0; i < y; i++)
		    printf(" ");

		// printing '*'
		for (int x = 0; x + y < n; x++)
		{
			// printing '*' at the appropriate position
			// is done by the and value of x and y
			// wherever value is 0 we have printed '*'
			if (x & y)
				printf("  ");
			else
				printf("* ");
		}

		printf("\n");
	}
    return 0;
}
