// Assignment 6.1.c
//Elana Weiss 341390961

#include <stdio.h>
#include "Array.h"

int main()
{
    int array[100] = { 1,2,3,4,5 }, size = 5;
    
    reverse(array, size);
    print(array, size);
}
