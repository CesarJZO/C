#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * @author CésarJZO
 */
int main()
{
    printf("Guess the number I'm thinking between 0 and 100.\n");
    srand((unsigned)time(NULL));
    const int N = rand() % 100;
    int in;
    do
    {
        printf("Number: ");
        scanf("%d", &in);
        if (in != N)
            if (in > N)
                printf("\nThat's too high!\n");
            else
                printf("\nThat's too low!\n");
    } while (in != N);
    printf("I was thinking in %d!, you won!\n", in);
    return 0;
}
