#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binarysearch(int[], int);

int main()
{
    srand((unsigned)time(NULL));

    int size;
    printf("Array size: ");
    scanf("%d", &size);

    int array[size];
    for (int i = 0; i < size; i++)
        array[i] = rand() % size;


}
/**
 * 
 * @param array List of ints. Must be sorted
 * @param item Element to be found
 */
int binarysearch(int *array, int item) {
    // while();
}
