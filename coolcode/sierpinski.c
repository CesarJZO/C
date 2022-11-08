#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void printSierpinski(int size);

int main(int argc, char **argv)
{
	int max = argc > 1 ? atoi(argv[1]) : 16;

	for (int i = 2; i <= max; i *= 2)
	{
		printSierpinski(i);
		sleep(1);
	}

	return 0;
}

void printSierpinski(int n)
{
	for (int y = n - 1; y >= 0; y--)
	{
		for (int i = 0; i < y; i++)
			printf(" ");

		for (int x = 0; x + y < n; x++)
			// printing '*' at the appropriate position
			// is done by the and value of x and y
			// wherever value is 0 we have printed '*'
			printf(x & y ? "  " : "* ");
		printf("\n");
	}
}
