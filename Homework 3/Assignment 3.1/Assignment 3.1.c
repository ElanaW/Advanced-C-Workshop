// Assignment 3.1.c
//Elana Weiss, 341390961

#include <stdio.h>
#pragma warning(disable : 4996)
#include "Array.h"

int main()
{
    int size, array[50], digit;
    printf( "Enter number of numbers you wish to enter, must be less than 50.\n");
    scanf("%d", &size);

    //if "size" entered by user is too large
    if (size >= 50)
    {
        printf("ERROR \n");
        return -1;
    }
    printf("Enter %d numbers \n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &digit);
        array[i] = digit;
    }

    printf("Sum of digits are %d", Sum(array, size));
}
