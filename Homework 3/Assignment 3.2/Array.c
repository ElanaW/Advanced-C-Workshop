#include "Array.h"



void swap(int *val1, int* val2)
{
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

void sort(int* array, int size)
{
    for (int i = 0; i < size - 1; i++)

        // Last i elements are already in place
        for (int j = 0; j < size - i - 1; j++)
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
}


void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
}