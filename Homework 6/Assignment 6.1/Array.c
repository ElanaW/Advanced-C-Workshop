#include "Array.h"
#include <stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(int *array, int size)
{
	int i, j;
	for (i = 0, j = size-1; i < (size+1)/2; i++, j--)
	{
		swap(array + i, array + j);
	}
}



void print(int *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
}
