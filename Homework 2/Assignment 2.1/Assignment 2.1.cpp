// Assignment 2.1.c
//Elana Weiss 341390961

#include <stdio.h>

int main()
{
    int i = 0;

    while (i < 5)
    {
        i++; 
        if ((i % 2) == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

