#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binarysearch(int[], int);
void printArray(int[], int);
void swap(int, int, int*);
int *sort(int*, int);
int *quickSort(int, int, int*);

/**
 * @author CésarJZO
 */
int main()
{
    srand((unsigned)time(NULL));
    int length;
    printf("Array length: ");
    scanf("%d", &length);

    int array[length];
    for (int i = 0; i < length; i++)
        array[i] = rand() % length;

    printArray(array, length);

    sort(array, length);

    printArray(array, length);

    int item;
    printf("Which item? ");
    scanf("%d", &item);
    printf("%d\n", binarysearch(array, item));
    return 0;
}
/**
 * Sorts the array that has been called by the method using the sorting
 * algorithm 'quicksort'
 *
 * @return The sorted array
 */
int *sort(int *array, int length)
{
    return quickSort(0, length - 1, array);
}

/**
 * Executes the quicksort algorithm
 * @param first The first position of the list or the sublist
 * @param last The last position of the list or the the sublist
 * @return the array sorted
 */
int *quickSort(int first, int last, int *array)
{
    int pivot = array[(first + last) / 2];
    int i = first;
    int j = last;
    do
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            swap(i, j, array);
            i++;
            j--;
        }
    } while (i <= j);
    if (first < j)
        quickSort(first, j, array);
    if (i < last)
        quickSort(i, last, array);
    return array;
}

void swap(int i, int j, int *array)
{
    int aux = array[i];
    array[i] = array[j];
    array[j] = aux;
}

/**
 * Prints to the standard output an array of integers
 * @param array The array to be printed
 * @param length The length of the array
 */
void printArray(int *array, int length)
{
    printf("[");
    for (int i = 0; i < length; i++)
    {
        if (i == length - 1)
            printf("%d", array[i]);
        else
            printf("%d, ", array[i]);
    }
    printf("]\n");
}

/**
 * Searches an integer within this array
 * @param array Array of integers. Must be sorted
 * @param item Element to be found
 */
int binarysearch(int *array, int item)
{
    return 1;
}
