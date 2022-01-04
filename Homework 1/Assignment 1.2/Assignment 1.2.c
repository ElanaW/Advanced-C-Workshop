// Assignment 1.2.c : This file contains the 'main' function. 
//Program execution begins and ends there.
//Elana Weiss, 341390961

#include <stdio.h>

//user enters a lower case letter, program prints the capital version of letter
//program is terminated if user enters 'q' or 'Q'

int main()
{
     char letter;

     printf("Please enter a letter\n");
     scanf_s(" %c", &letter, 1);
     while (!(letter == 'q' || letter == 'Q'))
     {
         printf("%c \n", toupper(letter));
         scanf_s(" %c", &letter, 1);
     }

}
