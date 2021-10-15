// Assignment 1.1.c : This file contains the 'main' function. Program execution begins and ends there.
//Elana Weiss, 341390961

#include <stdio.h>

//User is continuously asked to enter a letter. 
//If 'q' or 'Q' is entered, program is terminated.
int main()
{
    char letter;

    do
    {
      printf("Please enter a letter\n");
      scanf_s(" %c", &letter,1);
    } while (!(letter == 'q' || letter == 'Q'));

}
