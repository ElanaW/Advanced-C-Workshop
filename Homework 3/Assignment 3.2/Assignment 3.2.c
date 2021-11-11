// Assignment 3.2.c
//Elana Weiss, 341390961

#include <stdio.h>
#pragma warning(disable : 4996)
#include "Array.h"

int main()
{
	int array[50] = { 0 }, size, number;
	printf("Please enter size.\n");
	scanf(" %d", &size);

	printf("Please enter %d numbers\n", size);

	for (int i = 0; i < size; i++)
	{
		scanf(" %d\n",&number);
		array[i] = number;
	}

	sort(array, size);
	printArray(array, size);
}
